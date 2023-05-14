#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--){
        char C;
        cin>>C;
         if(C == 'c' || C == 'f' || C == 'd' || C == 'e' || C == 'o' || C == 'r' || C == 's')
            printf("YES\n");
            else
            printf("NO\n");
    }
}