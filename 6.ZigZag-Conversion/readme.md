##说明
ZigZag就是将字符串按照倒置的Z形进行排列：如下图所示
![image](https://github.com/liubingxing/leetcode/raw/master/6.ZigZag-Conversion/1.png)

比较直观的解法是，用一个字符串数组string[raws]来存储每一行，最后按行拼接；

用一个delta表示正向还是反向，如上图，从0到2就是一个方向，从2到4又是一个方向。

代码链接：
