#include <iostream>

using namespace std;

int main()
{
    char a;
    cout<<"enter character";
    cin>>a;
    if (a>='A' && a<='Z'){
        cout<<"Capital letter";
        }
       else if (a>='a' && a<='z'){
        cout<<"small letters";
       }
    else if(a>= '0' && a<= '9'){
        cout<<"numeric number";
}



    return 0;
}
