#include <bits/stdc++.h>
using namespace std;

int main() {
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                      'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                    21, 22, 23, 24, 25, 26};
    int initial=0;
    string s;
    cin>>s;
    int a[100];
    int ini=1;
    int sum=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<26;j++)
        if(s[i]==letters[j])
            a[i]=values[j];            
      

        cout<<a[i]<<" ";
    }

      
}
    


    

