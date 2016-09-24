int reverse(int x) {
    long int result = 0;
    int flag = 0;
    if(x < 0) {
        flag = 1;
        x = -1*x;
    }
        
    while(x != 0) {
        result *= 10;
        result += x % 10;
        x = x / 10;
    }
    if(flag == 1) result = -1 * result;
    if(result > INT_MAX || result < INT_MIN) return 0;
    return result;
}
