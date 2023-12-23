#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"\nenter b:";
    cin>>b;
    int i = 0, j = 0;
    string c;
    char carry = '0';
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    while(i<a.size() && j<b.size()){
        if(carry=='0'){
            if(a[i]==b[j] && b[j]=='1'){
                c+='0';
                carry = '1';
            }
            else if(a[i]==b[j] && b[j]=='0'){
                c+='0';
                carry = '0';
            }
            else{
                c+='0';
                carry = '0';
            }
        }
        else{
            if(a[i]==b[j] && b[j]=='1'){
                c+='1';
                carry = '1';
            }
            else if(a[i]==b[j] && b[j]=='0'){
                c+='1';
                carry = '0';
            }
            else{
                c+='0';
                carry = '1';
            }
        }
        i++;j++;
    }
    if(carry=='1'){
        c+=carry;
    }
    reverse(c.begin(), c.end());
    cout<<"result :"<<c;
    return 0;
}