#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    int x,y,tempx,tempy;
    string commamd;
    string toward;
    int flag = 0 ,i_flag = 0;
    int map[100][100]={};
    cin>>n>>m;
    
    while(cin>>x>>y>>toward>>commamd){
        flag = 0;
        tempx = x;
        tempy = y;
        for(int i=0;i<commamd.length();i++){
            if(commamd[i]=='R'){
                if(toward[0] == 'N'){
                    toward[0] = 'E';
                }else if(toward[0] == 'S'){
                    toward[0] = 'W';
                }else if(toward[0] == 'E'){
                    toward[0] = 'S';
                }else if(toward[0] == 'W'){
                    toward[0] = 'N';
                }
            }else if(commamd[i]=='L'){
                if(toward[0] == 'N'){
                    toward[0] = 'W';
                }else if(toward[0] == 'S'){
                    toward[0] = 'E';
                }else if(toward[0] == 'E'){
                    toward[0] = 'N';
                }else if(toward[0] == 'W'){
                    toward[0] = 'S';
                }
            }else if(commamd[i]=='F'){
                if(toward[0] == 'N'){
                    tempy++;
                }else if(toward[0] == 'S'){
                    tempy--;
                }else if(toward[0] == 'E'){
                    tempx++;
                }else if(toward[0] == 'W'){
                    tempx--;
                }
            }
            if(tempx>n){
                if(map[x][y] == 1){
                    tempx--;
                    continue;
                }else {
                    cout<<x<<" "<<y<<" "<<toward[0]<<" LOST\n";
                    map[x][y] = 1;
                    flag = 1;
                    break;
                }
            }else if(tempx<0){
                if(map[x][y] == 1){
                    tempx++;
                    continue;
                }else {
                    cout<<x<<" "<<y<<" "<<toward[0]<<" LOST\n";
                    map[x][y] = 1;
                    flag = 1;
                    break;
                }
            }else if(tempy>m){
                if(map[x][y] == 1){
                    tempy--;
                    continue;
                }else {
                    cout<<x<<" "<<y<<" "<<toward[0]<<" LOST\n";
                    map[x][y] = 1;
                    flag = 1;
                    break;
                }
            }else if(tempy<0){
                if(map[x][y] == 1){
                    tempy++;
                    continue;
                }else {
                    cout<<x<<" "<<y<<" "<<toward[0]<<" LOST\n";
                    map[x][y] = 1;
                    flag = 1;
                    break;
                }
            }
            x = tempx;
            y = tempy;
            
        }
        if(flag == 0){
            cout<<x<<" "<<y<<" "<<toward[0]<<"\n";
            flag = 1;
        }
        
    }
    return 0;
}