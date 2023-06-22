

#include<iostream>

using namespace std;

struct address{
	int houseno;
    string streetname;
};

struct student {
	string name;
    int age ;
    address addr;
    
};

int main(){
	student s1;
    cout<<"enter values of s1 :"<<endl;
	cout<<"enter name :"<<endl;
    cin>>s1.name;
	cout<<"enter age :"<<endl;
    cin>>s1.age;
	cout<<"enter houseno :"<<endl;
	cin>>s1.addr.houseno;
	cout<<"enter streetname :"<<endl;
	cin>>s1.addr.streetname;
    cout<<s1.name;
	cout<<s1.age<<endl;
	cout<<s1.addr.houseno<<endl;
    cout<<s1.addr.streetname<<endl;


    return 0;


    	

}
