#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){


int t;
cin>>t;

while(t--){

    int n;
    cin>>n;
    vector<int> v;

    while(n--){

        string s;
        cin>>s;
        for(int i=0;i<=s.size();i++){
            if(s[i]=='#'){
                v.emplace_back(i+1);
            }
        }

    }

    reverse(v.begin(),v.end());

    for(auto c:v) cout<<c;
    cout<<endl;


}




return 0;
}
