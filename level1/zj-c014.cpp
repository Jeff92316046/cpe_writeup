#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    //reverse(a.begin(),a.end());
    for(;;){
        cin>>a>>b;
        if(a == "0" && b== "0")break;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry_flag = 0 ,carry_count = 0;
        for(int i=0;i<max(a.size(),b.size());i++){
            if(i>=a.size()){
                if((int)(b[i]-'0')+carry_flag >= 10){
                    carry_count++;
                    carry_flag = 1;
                }else{
                    carry_flag = 0;
                }
            }else if(i>=b.size()){
                if((int)(a[i]-'0')+carry_flag >= 10){
                    carry_count++;
                    carry_flag = 1;
                }else{
                    carry_flag = 0;
                }
            }else{
                if((int)(a[i]-'0')+(int)(b[i]-'0')+carry_flag >= 10){
                    carry_count++;
                    carry_flag = 1;
                }else{
                    carry_flag = 0;
                }
            }
        }
        if(carry_count == 0){
            cout<<"No carry operation.\n";
        }else if(carry_count == 1){
            cout<<"1 carry operation.\n";
        }else{
            cout<<carry_count<<" carry operations.\n";
        }
    }
}