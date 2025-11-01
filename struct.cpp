#include<iostream>
using namespace std;
struct student{
	string name;
	int roll_no;
	float marks;
};
int main() {
	student arr[5];
	float sum=0;
	for(int i=0;i<5;i++) {
		cout<<"enter a name"<<endl;
		cin>>arr[i].name;
		cout<<"enter a roll no"<<endl;
		cin>>arr[i].roll_no;
		cout<<"enter a marks"<<endl;
		cin>>arr[i].marks;
		sum=sum+arr[i].marks;
	}
	for(int i=0;i<5;i++) {
		cout<<"name = "<<arr[i].name<<endl;
	cout<<"roll no = "<<arr[i].roll_no<<endl;
	cout<<"marks = "<<arr[i].marks<<endl;
	cout<<endl;
	}
		float avg=sum/5;
		cout<<"average of marks"<<avg<<endl;
	   return 0;
}
