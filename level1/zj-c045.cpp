#include<bits/stdc++.h>
using namespace std;
int main(){
    string str[100];
    int max_len = 0;
    int row = 0; 
    
    while(getline(cin,str[row])){
        if(str[row].size()>max_len){
            max_len = str[row].size();
        }
        row++;
    }
        
    
    for(int i=0;i<max_len;i++){
        for(int j=row-1;j>=0;j--){
            if(str[j].size()<=i){
                cout<<" ";
            }else{
                cout<<str[j][i];
            }
        }
        cout<<"\n";
    } 


    return 0;
}