char* longestPalindrome(char* s) {
    int len = strlen(s);
    if(len <= 1) return s;
    int i,low, high, start, maxlen = 0;
    for(i = 1; i < len; i++) {
        //偶数情况
        low = i - 1;
        high = i;
        while(s[low] == s[high] && low >= 0 && high < len) {
            low--;
            high++;
        }
        if(high - low - 1 > maxlen) {
            maxlen = high - low - 1;
            start = low + 1;
        }
        //奇数情况
        low = i - 1;
        high = i + 1;
        while(s[low] == s[high] && low >= 0 && high < len) {
            low--;
            high++;
        }
         if(high - low - 1 > maxlen) {
            maxlen = high - low - 1;
            start = low + 1;
        }
    }
    int j;
    char* result = malloc(sizeof(char)*(maxlen+1));
    for(j = 0; j < maxlen; j++,start++) {
        result[j] = s[start];
    }
    result[maxlen] = 0;
    return result;
    
}
