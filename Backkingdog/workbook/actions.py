import os
import requests
import time

pbars = []

# 📌 `BASE_DIR`을 리포지토리 루트로 설정하여 중복 경로 문제 해결
BASE_DIR = os.getenv("GITHUB_WORKSPACE", os.path.abspath(os.path.join(os.path.dirname(__file__), "../..")))

print(f"📌 BASE_DIR 경로: {BASE_DIR}")

def parse_links():
    file_path = os.path.join(BASE_DIR, "my_links.txt")
    if not os.path.exists(file_path):
        print(f"🚨 Error: {file_path} 파일을 찾을 수 없음")
        return []
    attrs = []
    with open(file_path, encoding="UTF-8") as f:
        for line in f:
            attrs.append(line.strip().split(','))
    return attrs

def parse_category():
    file_path = os.path.join(BASE_DIR, "my_problems.txt")
    if not os.path.exists(file_path):
        print(f"🚨 Error: {file_path} 파일을 찾을 수 없음")
        return []
    category = []
    with open(file_path, encoding="UTF-8") as f:
        for line in f:
            category.append(line.strip().split(','))
    return category

def get_problem_info(workbook_url):
    headers = {'User-Agent': 'Mozilla/5.0'}
    txt = requests.get(workbook_url, headers=headers).text
    pattern = '/problem/'
    ret = []
    while True:
        x = txt.find(pattern)
        if x == -1: break
        txt = txt[x+9:]
        prob_id, prob_name = '', ''
        i = 0
        while txt[i] in '0123456789':
            prob_id += txt[i]
            i += 1
        if not prob_id: continue
        i += 2
        while txt[i] != '<':
            prob_name += txt[i]
            i += 1
        ret.append((prob_id, prob_name))
    return ret

CATEGORY = ["연습 문제", "기본 문제✔", "기본 문제", "응용 문제✔", "응용 문제"]

def gen_ind_workbook(attrs, category):
    txt = '''// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
}'''
    chapter_idx = 0
    for attr in attrs:
        if len(attr) < 3 or not attr[2]:  # 문제집 링크가 없으면 건너뜀
            pbars.append("")
            continue
        
        solution_num = 0
        solution_path = os.path.join(BASE_DIR, f'Backkingdog/{attr[0]}/')
        category_idx = 0
        problem_infos = get_problem_info(attr[2])
        prob_table = '| 문제 분류 | 문제 | 문제 제목 | 정답 유무 |\n| :--: | :--: | :--: | :--: |\n'
        
        for prob_id, prob_name in problem_infos:
            if prob_id in category[chapter_idx]:
                category_idx = category[chapter_idx].index(prob_id)
            file_path = os.path.join(solution_path, f"{prob_id}.cpp")
            if not os.path.exists(file_path):
                with open(file_path, 'w', encoding="UTF-8") as f:
                    f.write(txt)
            try:
                codes = open(file_path, 'r', encoding="UTF-8").read()
            except:
                codes = open(file_path, 'r', encoding="EUC-KR").read()
                with open(file_path, 'w', encoding="UTF-8") as fw:
                    fw.write(codes)
            if codes[:100] == txt[:100]:
                prob_table += f'| {CATEGORY[category_idx]} | {prob_id} | [{prob_name}](https://www.acmicpc.net/problem/{prob_id}) | - |\n'
            else:
                solution_num += 1
                prob_table += f'| {CATEGORY[category_idx]} | {prob_id} | [{prob_name}](https://www.acmicpc.net/problem/{prob_id}) | ✅ |\n'

        timestamp = int(time.time())  # 캐시 방지
        pbar = f'![{solution_num}/{len(problem_infos)}](https://progress-bar.xyz/{solution_num}/?scale={len(problem_infos)}&title=progress&width=500&color=babaca&suffix=/{len(problem_infos)}&cache_bust={timestamp})'
        pbars.append(pbar)

        workbook_path = os.path.join(BASE_DIR, f'Backkingdog/workbook/{attr[0]}.md')  # ✅ 중복 해결!
        with open(workbook_path, 'w', encoding="UTF-8") as f:
            f.write(f'# {attr[1]}\n\n')
            f.write(pbar + '\n\n')
            f.write(f'[문제집 링크]({attr[2]})\n\n')
            f.write(prob_table)

        chapter_idx += 1

def gen_total_workbook(attrs):
    workbook_md_path = os.path.join(BASE_DIR, 'Backkingdog/workbook.md')
    with open(workbook_md_path, 'w', encoding="UTF-8") as f:
        f.write('# 문제집 설명\n\n# 문제집\n| 번호 | 주제 | 진행도 |\n| :--: | :--: | :--: |\n')
        for attr, pbar in zip(attrs, pbars):
            if len(attr) < 3:
                f.write(f'| {attr[0]} | {attr[1]} | |\n')
            else:
                f.write(f'| {attr[0]} | [{attr[1]}](workbook/{attr[0].replace(" ", "%20")}.md) | {pbar} |\n')

attrs = parse_links()
category = parse_category()
gen_ind_workbook(attrs, category)
gen_total_workbook(attrs)


# import os

# import requests

# pbars = []
# # ['0x11', '그리디', 'https://www.acmicpc.net/workbook/view/7320']
# # 현재 스크립트(actions.py)가 위치한 폴더 기준으로 파일 찾기
# # BASE_DIR = os.path.dirname(os.path.abspath(__file__))

# BASE_DIR = os.getenv("GITHUB_WORKSPACE", os.path.dirname(os.path.abspath(__file__)))
# print(f"📌 BASE_DIR 경로: {BASE_DIR}")
# def parse_links():
#     file_path = os.path.join(BASE_DIR, "my_links.txt")  # 절대 경로 사용
#     attrs = []
#     with open(file_path, encoding="UTF-8") as f:
#         for line in f:
#             attrs.append(line.strip().split(','))
#     return attrs

# def parse_category():
#   file_path = os.path.join(BASE_DIR, "my_problems.txt")  # 절대 경로 사용
#   category = []
#   with open(file_path, encoding="UTF-8") as f:
#     for line in f:
#       category.append(line.strip().split(','))
#   return category

# def get_problem_info(workbook_url):
#   headers = {'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_10_5) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.95 Safari/537.36'}
#   txt = requests.get(workbook_url, headers=headers).text
#   pattern = '/problem/'
#   ret = []
#   while True:
#     x = txt.find(pattern)
#     if x == -1: break
#     txt = txt[x+9:]
#     prob_id, prob_name = '', ''
#     i = 0
#     while txt[i] in '0123456789':
#       prob_id += txt[i]
#       i += 1
#     if not prob_id: continue
#     i += 2
#     while txt[i] != '<':
#       prob_name += txt[i]
#       i += 1
#     ret.append((prob_id, prob_name))
#   return ret


# # def get_problem_info(workbook_url):
# #   problem_list = []
  
# #   # 직접 문제 ID를 추가하기 (직접 선택한 문제들)
# #   problem_list.append(("1000", "A+B"))

# #   return problem_list

# CATEGORY = ["연습 문제", "기본 문제✔", "기본 문제", "응용 문제✔", "응용 문제"]

# # gen 0x00.md to 0x??.md, proper prob_id.cpp for each solution directory
# def gen_ind_workbook(attrs, category):
#   txt = '''// Authored by : whitecy
# // Co-authored by : -
# // http://boj.kr/****************
# #include <bits/stdc++.h>
# using namespace std;

# int main(void){
#   ios::sync_with_stdio(0);
#   cin.tie(0);
  
# }'''
#   chapter_idx = 0
#   for attr in attrs:
#     if len(attr) < 3 or not attr[2]: # No workbook
#       pbars.append("")
#       continue
#     solution_num = 0
#     solution_path = f'/Users/jeongjaeyoon/Documents/GitHub/algorithm/Backkingdog/{attr[0]}/'
#     # solution_path = f'../{attr[0]}/'
#     # print(attr[0] + " " + attr[2])
#     # print(BASE_DIR)
#     # solution_path = os.path.join('/Users/jeongjaeyoon/Documents/GitHub/algorithm/Backkingdog/{attr[0]}')
#     category_idx = 0
#     problem_infos = get_problem_info(attr[2])
#     prob_table = '| 문제 분류 | 문제 | 문제 제목 | 정답 유무 |\n| :--: | :--: | :--: | :--: |\n'
#     for prob_id, prob_name in problem_infos:
#       if prob_id in category[chapter_idx]:
#         category_idx = category[chapter_idx].index(prob_id)
#       file_path = solution_path + prob_id
#       if not os.path.exists(file_path + '.cpp'):
#         with open(file_path + '.cpp', 'w', encoding="UTF-8") as f:
#           f.write(txt)
#       try:
#         codes = open(file_path + '.cpp', 'r', encoding="UTF-8").read()
#       except: # EUC-KR -> UTF-8
#         codes = open(file_path + '.cpp', 'r', encoding="EUC-KR").read()
#         with open(file_path + '.cpp', 'w', encoding="UTF-8") as fw:
#           fw.write(codes)
#       if codes[:100] == txt[:100]:
#         prob_table += f'| {CATEGORY[category_idx]} | {prob_id} | [{prob_name}](https://www.acmicpc.net/problem/{prob_id}) | - |\n'
#       else:
#         solution_num += 1
#         code_attr = f'[정답 유무]({file_path.replace(" ", "%20")}.cpp)'
#         MAX_DIFFERENT_SOLUTION = 9
#         for i in range(1, MAX_DIFFERENT_SOLUTION+1):
#           if os.path.exists(file_path+'_'+str(i)+'.cpp'):
#             code_attr += f", [별해 {i}]({file_path+'_'+str(i)+'.cpp'})"
#         # prob_table += f'| {CATEGORY[category_idx]} | {prob_id} | [{prob_name}](https://www.acmicpc.net/problem/{prob_id}) | {code_attr} |\n'
#         prob_table += f'| {CATEGORY[category_idx]} | {prob_id} | [{prob_name}](https://www.acmicpc.net/problem/{prob_id}) | ✅ |\n'
#     with open('/Users/jeongjaeyoon/Documents/GitHub/algorithm/Backkingdog/workbook/' +attr[0]+'.md', 'w', encoding="UTF-8") as f:
#       # progress bar
#       f.write(f'# {attr[1]}\n\n')
#       pbar = f'![100%](https://progress-bar.xyz/{solution_num}/?scale={len(problem_infos)}&title=progress&width=500&color=babaca&suffix=/{len(problem_infos)})'
#       pbars.append(pbar)
#       f.write(pbar + '\n\n')
#       f.write(f'[문제집 링크]({attr[2]})\n\n')
#       f.write(prob_table)
#     chapter_idx += 1
    
# # ['0x11', '그리디', 'https://www.acmicpc.net/workbook/view/7320']
# def gen_total_workbook(attrs):
#   with open('/Users/jeongjaeyoon/Documents/GitHub/algorithm/Backkingdog/workbook.md', 'w', encoding="UTF-8") as f:
#     f.write('''# 문제집 설명

# # 문제집
# | 번호 | 주제 | 진행도 |
# | :--: | :--: | :--: |\n''')
#     for attr, pbar in zip(attrs, pbars):
#       if len(attr) < 3: # No workbook
#         f.write(f'| {attr[0]} | {attr[1]} | |\n')
#       else:
#         f.write(f'| {attr[0]} | [{attr[1]}](workbook/{attr[0].replace(" ", "%20")}.md) | {pbar} |\n')


# attrs = parse_links()
# category = parse_category()
# gen_ind_workbook(attrs, category)
# gen_total_workbook(attrs)