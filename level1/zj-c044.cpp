#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int atoz[26]={},hasprint[26]={};
    string temp;
    cin>>n;
    for(int ii=0;ii<n+1;ii++){
        getline(cin,temp);
        for(int i=0;i<temp.size();i++){
            if(temp[i]>='A'&& temp[i]<='Z'){
                atoz[(int)(temp[i]-'A')]++;
            }else if(temp[i]>='a' && temp[i]<='z'){
                atoz[(int)(temp[i]-'a')]++;
            }else{
                continue;
            }
        }
    }
    cout<<atoz[0]<<"\n";
    int max_temp_index = 0,max_temp=0;
    for(int i=0;i<26;i++){
        max_temp = 0;
        for(int j=0;j<26;j++){
            if(hasprint[j] == 1){
                continue;
            }
            if(max_temp<atoz[j]){
                max_temp_index = j;
                max_temp = atoz[j];
            }
        }
        if(max_temp == 0){
            break;
        }else{
            hasprint[max_temp_index] = 1;
            cout<<(char)('A'+max_temp_index)<<" "<<max_temp<<"\n";
        }
    }
    
}

