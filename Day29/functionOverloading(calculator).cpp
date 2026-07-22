#include<iostream>
class Calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    double add(double a,double b){
        return a+b;
    }
};
int main(){
    Calculator c:
    int ans1=c.add(10,20);
    int ans2=c.add(10,20,30);
    int ans3=c.add(10.25,20.24);
    cout<<ans1<<" "<<ans2<<" "<<ans3;
}