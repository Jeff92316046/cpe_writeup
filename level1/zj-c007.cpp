#include <bits/stdc++.h>
using namespace std;
int main(){
    string str_1;
    bool flag = true;
    while ( getline(cin,str_1) && !cin.eof()){
        for(int i=0;i<str_1.length();i++){
            if(str_1[i] == '\"' ){
                if(flag){
                    cout<<"``";
                    flag = false;
                }else{
                    cout<<"''";
                    flag = true;
                }
            }else{
                cout<<str_1[i];
            }
        }
        cout<<"\n";
    }
    

    return 0;
}