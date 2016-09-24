int myAtoi(char* str) {
    
    long int result = 0;
    int flag = 0;
    int overflow = 0;
    while(*str == ' ') str++;
    if(*str == '+') str++;
    else if(*str == '-') {
        flag = 1; str++;
    } 
   
    while(*str>='0' && *str<='9') {
        result *= 10;
        result += *str - '0';
        str++;
        if(result > INT_MAX)
        { 
            overflow = 1;
            break;
        }
    }
    if(overflow)
    {
        if(flag == 1)
            return INT_MIN;
        else
            return INT_MAX;
    }
    if(flag == 1) result = -result;
    return result;
}
