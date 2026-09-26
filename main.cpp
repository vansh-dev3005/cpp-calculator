#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;
    char ch;
    do
    {
    cout << "Enter number 1 : " << "\n";
    cin >> a;
    cout << "Enter number 2 : " << "\n";
    cin >> b;
    cout << "Enter an opeartor : " << "\n";
    cin>>op;
    if (op == '+')
    {
        cout<<a+b<<"\n";
    }
    else if (op == '-')
    {
        cout<<a-b<<"\n";
    }
    else if ( op == '*')
    {
        cout<<a*b<<"\n";
    }
    else if ( op == '/')
    {
        cout<<a/b<<"\n";
    }
    cout<<"continue?(y/n)"<<"\n";
    cin>>ch;
    } while (ch == 'y');
    
    
    system("pause");

    return 0;
}