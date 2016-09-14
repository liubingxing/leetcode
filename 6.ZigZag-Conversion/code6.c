char* convert(char* s, int numRows) {
    int length = strlen(s);
    if(length == 0 || numRows <= 1) return s;
    
    char *str;
    str = malloc(sizeof(char)*(length+1));
    str[length] = '\0';
    
    int i, j, k, t;
    int lag = 2 * numRows - 2; //首行和末行的循环间隔
    for(i = k = 0; i < numRows; i++) {
        t = lag - 2*i;
        for(j = i; j < length; j+=lag) {
            str[k++] = s[j]; 
            //非首行和末行的循环间隔则是 lag 和 lag - 2*i交替
            if(i > 0 && i < numRows - 1 && j+t < length) {
                    str[k++] = s[j+t];
                }
            }
        }
    return str;
}
