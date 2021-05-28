#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int totalmarks;
    string name;
};
bool compare(Student s1,Student s2){
    if(s1.totalmarks != s2.totalmarks){
        return (s1.totalmarks > s2.totalmarks);
    }
    return (s1.roll < s2.roll);
}
int main()
{
    int n;
    cin>>n;

    Student *students = new Student[n];
    int rollno = 1;
    for(int i = 0 ; i < n ; i++){
        string name;
        cin>>name;
        int m1,m2,m3;
        cin>>m1>>m2>>m3;
        int total = m1+m2+m3;
        students[i] = {rollno,total,name};
        rollno = rollno+1;

    }
    sort(students,students+n,compare);
    int count = 1;
    for(int i =0;i<n;i++){
        cout<<count<<" "<<students[i].name<<endl;
        count++;
    }

	return 0;
}

