int f(int n){
    if(n <= 0){
        return 0;
    }
    else{
        return n + f(n-1);
    }
}

int main(){
    return f(5);
}