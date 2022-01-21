long long gcd(long long x, long long y){
    if(x == 0) return y;
    return gcd(y % x, x);
}