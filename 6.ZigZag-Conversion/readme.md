##说明
ZigZag就是将字符串按照倒置的Z形进行排列：如下图所示
![image](https://github.com/liubingxing/leetcode/raw/master/6.ZigZag-Conversion/1.png)

##解法一：
用一个字符串数组string[raws]来存储每一行，最后按行拼接；

用一个delta表示正向还是反向，如上图，从0到2就是一个方向，从2到4又是一个方向。

代码链接：https://github.com/liubingxing/leetcode/blob/master/6.ZigZag-Conversion/code6-1.c

##解法二：
首行和末行的每一列之间的间隔都是 2*numRows-2；

中间行的列间隔是 2*numRows-2 和 2*numRows-2-2*i 交替，其中 i 表示第几行;
