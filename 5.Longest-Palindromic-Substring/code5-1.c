char* longestPalindrome(char* s) {
    int len = strlen(s);
    if(len <= 1) return s;
    int p[len][len];
    memset(p,0,sizeof(p));
    int i, k, start, maxlen = 0;
    
    for(i = 0; i < len; i++) {
        p[i][i] = 1;
        if(i < len -1 && s[i] == s[i+1]) {
            p[i][i+1] = 1;
            maxlen = 2;
            start = i;
        }
    }

    for(k = 3; k <= len; k++) {
         for(i = 0; i <= len - k; i++) {
            if(s[i] == s[i+k-1] && p[i+1][i+k-2]) {
                p[i][i+k-1] = 1;
                maxlen = k;
                start = i;
            }
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
