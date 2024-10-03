#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main()
{
    int a=5,b=2;
    swap(a,b);
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;
}
//output
/*value of a:2
value of b:5*/