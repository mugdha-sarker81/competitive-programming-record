/* link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-09/challenges/printing-x/problem?isFullScreen=true
question:
i have to print a bis X shape pattern for the given size n(row=n,col=n)
\ /
 X
/ \
observation:

  
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int n; cin>>n;
    for(int i=0;i<n;i++){
            if(i< n/2){
                for(int j=0;j<n;j++){
                    if(j== i){
                        cout<<"\\";
                    }if(j== n-i-2){
                        cout<<"/";
                    }else{
                        cout<<" ";
                    }
                }cout<<endl;
            }if(i==n/2){
                for(int j=0;j<n;j++){
                    if(j== i){
                        cout<<"X";
                    }else{
                        cout<<" ";
                    }
                }cout<<endl;
            }if(i>n/2){
                for(int j=0;j<n;j++){
                    if(j== i){
                        cout<<"\\";
                    }if(j== n-i-1){
                        cout<<"/";
                    }else{
                        cout<<" ";
                    }
                }cout<<endl;
            }
    }
    return 0;
}
