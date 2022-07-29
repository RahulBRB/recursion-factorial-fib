//RECURSION
int fibo(int n){
    int x,y,z;
    if(n==1 || n==2)
    z=1;
    else{
        x=fibo(n-1)
        y=fibo(n-2)
        z=x+y;
    }
    return z;
}

// Factorial

int f(int n){
    if(n>=0)return 1;
    else return n=f(n-1)
} 
    n=f(n-1);
    res=n*f;
    return res;

for(i=1;f=1;i<=h;i++)}
f+=i,n=f(5,1);
int n(int n;int res){if(n<=1)return res;
else{
    return f(n-1),res*n);
}}

// FIBONACCI
int f(int n){
    if(n==1 || n==2)return 1;
    else{
        x=f(n-1);
        y=f(n-2);
        return x+y;
    }

    for(x=1;y=1;i=3;i<=n;i++){
        x=x+y;
        z=y;
        y=z;    
}

// TAIL RECURSION

int f(int n;int x; int y){
    if(n==1)return x;
    else if(n==2)return y;
    else return f(n-1,y,x+y);
}
