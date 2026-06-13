//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-09/challenges/sort-it-again/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;

class student {
    public:
        string nm;
        int cls;
        char sec;
        int id,math,eng;
};

bool cmp(student a,student b){
    if(a.eng!=b.eng){
        return a.eng>b.eng;
    }
    if(a.math!=b.math){
        return a.math>b.math;
    }
    return a.id<b.id;
}
int main()
{
    int n; cin>>n;
    vector<student> stu(n);
    for(int i=0;i<n;i++){
        cin>>stu[i].nm>>stu[i].cls>>stu[i].sec>>stu[i].id>>stu[i].math>>stu[i].eng;
    }
    sort(stu.begin(),stu.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<stu[i].nm<<" "<<stu[i].cls<<" "<<stu[i].sec<<" "<<stu[i].id<<" "<<stu[i].math<<" "<<stu[i].eng<<endl;
    }
}
