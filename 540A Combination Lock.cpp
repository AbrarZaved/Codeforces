#include<bits/stdc++.h>
using namespace std;
vector<int> stringToNumberArray(const string& inputString) {
    vector<int> numberArray;

    for (char c : inputString) {
        int digit = c - '0';  // Convert character to integer
        numberArray.push_back(digit);
    }

    return numberArray;
}
int main(){
    int n;
    cin>>n;
    string c,d;
    cin>>c;
    cin>>d;
    vector<int> a = stringToNumberArray(c);
    vector<int> b = stringToNumberArray(d);
    int count=0;
    for(int i=0;i<n;i++){
        ++a[i],++b[i];
            int diff = abs(a[i] - b[i]);
            if (diff <= 5)
                count += diff;
            else
                count += (10 - diff);

    }
    cout<<count<<endl;
}