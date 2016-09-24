bool isPalindrome(int x) {
   if(x < 0) return false;
   int cache = x;
   long mirror = 0;
   while(x) {
       mirror = mirror*10 + x%10;
       x = x/10;
   }
   return cache == mirror;
}
