int f(int x){
    x += 10;
    return 10;
}

int main(){
    int x = 1;
    int y = f(x);
    return x;
}