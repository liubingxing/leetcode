int lengthOfLongestSubstring(char* s) {
    
    int len = 0;
    int start = 0,end,temp;
    for(end = 0; end < strlen(s); end++) {
        
        for(temp = start; temp < end; temp++) {
            
            if(s[temp] == s[end]) {
                if(end-start > len) len = end-start;
                start = temp + 1;
                break;
            }
        }
    }
    
    len = len > end-start ? len : end-start;
    return len;
}
