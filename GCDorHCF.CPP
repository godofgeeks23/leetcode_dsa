int calcGCD(int n, int m){
    // Write your code here.
    int a = n>m?n:m;
    int b = n>m?m:n;
    if(b==0)
        return a;
    calcGCD(b, a%b);
}