#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int L;
    int count,temp;
    for(int i=0;i<n;i++){
        cin>>L;
        int train_box[100];
        for(int j=0;j<L;j++){
            cin>>train_box[j];
        }
        count = 0;
        for(int j=0;j<L;j++){
            /* for(int k=0;k<L;k++){
                cout<<train_box[k]<<" ";
            }
            cout<<"\n"; */
            for(int k=0;k<L-1;k++){
                /* cout<<train_box[k]<<" "<<train_box[k+1]<<"\n"; */
                if(train_box[k]>train_box[k+1]){
                    count++;
                    temp = train_box[k];
                    train_box[k] = train_box[k+1];
                    train_box[k+1] = temp;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps.\n";
    }
}