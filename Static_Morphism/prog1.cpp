#include<iostream>
#include<cmath>
using namespace std;

class Operation{
public:
    void operation(double a,int b,double c){
        cout<<"sum = "<<a+b+c;
    }
    void operation(int a,int b,double c){
        cout<<"sub = "<<a-b-c;
    }
    void operation(float a,float b){
        cout<<"div = "<<(a/b);
    }
    void operation(int a,double b,double c){
        cout<<"multi = "<<a*b*c;
    }
};

int main()
{
    Operation obj;

    double a = 10.5;
    double b = 1.5;
    float c = 3.5;
    
    obj.operation(a,b,c);
    return 0;
}