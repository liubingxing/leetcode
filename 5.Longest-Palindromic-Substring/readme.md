##Longest Palindromic Substring
Given a string S, find the longest palindromic substring in S. 
You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.

###解法一：动态规划

>P（i，j）为1时代表字符串Si到Sj是一个回文，为0时代表字符串Si到Sj不是一个回文。

>P（i，j）= P（i+1，j-1）（如果S[i] = S[j]）。这是动态规划的状态转移方程。

>P（i，i）= 1，P（i，i+1）= if（S[i]= S[i+1]）

###解法二：中心扩展

>对给定的字符串S，分别以该字符串S中的每一个字符C为中心，向两边扩展，记录下以字符C为中心的回文子串的长度。

>注意区分字符串长度为偶数和奇数的情况。
