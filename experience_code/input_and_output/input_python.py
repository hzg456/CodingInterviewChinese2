# -*- coding:utf-8 -*-
class Solution:
    # array 二维列表
    def Find(self, target, array):
        # write code here
        flag = 'false'
        for i in range(len(array)):
            if target in array[i]:
                flag = 'true'
                break
        return flag
 
while True:
    try:
        f=Solution()
        L=list(eval(raw_input()))
        #eval()函数默认情况下将传入的字符串返回为元组
        #raw_input()函数将所有输入作为字符串看待，返回字符串类型
        array=L[1]
        target=L[0]
        print(f.Find(target,array))
    except:
        break     