#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int fib[50]={};
    cin>>n;
    fib[0] = 1;
    fib[1] = 1;
    for(int i=0;i<45;i++){
        fib[2+i] = fib[i] +fib[1+i]; 
    }
    int m,temp_m,start_flag=0;
    for(int i=0;i<n;i++){
        string str ="";
        start_flag = 0;
        cin>>m;
        temp_m = m;
        for(int j=40;j>0;j--){
            if(temp_m>=fib[j]){
                start_flag = 1;
                temp_m-=fib[j];
                str = str + "1";
            }else if(start_flag == 1){
                str = str + "0";
            }
            
        }
        cout<<m<<" = "<<str<<" (fib)\n";
    }
}