int f(int a)
{
    if(a){
        return 1;
    } else if(a-1){
        return 0;
    }
}

int main()
{
    return f(1);
}