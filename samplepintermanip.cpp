#include<iostream>
using namespace std;

void mult(int * );
int main()
{
    int *ptr;
    int num = 5;
    ptr = &num;
    cout<<"original = "<< num<<endl;
    cout<<"original ptr = "<< *ptr<<endl;
    
    mult(& *ptr);
    cout<<"after call = "<<num<<endl;
    
    num++;
    cout << "increment = " << num << endl;
    
    ptr++;
    cout<<"increment ptr = "<< *ptr<<endl;
    
    return 0;
}


void mult(int *ptr)
{
    
    *ptr = *ptr *  5;
    
};
