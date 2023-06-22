
#include<iostream>

using namespace std;

class number{
	public:
	   int num;
    public:
	int result;
    bool iswhole(){
	 if(num>=0){
	    return true;
}
     return false;
}

    bool ispositive(){
	if(num>0){
	  return true;
}
    return false;
}
    void showfactorial(){
	cout<<"its numb "<<num<<endl;
    cout<<"its fact :"<<result<<endl;
}

    public:
	 void factorial(){
	    if(iswhole()==true){
	       if(ispositive()==false){
	         result=1;
}           
			else{
	            result=1;
                for(int i=1;i<=num;i++){
	            result*=i;
                
}
                
}
}
        else{
	      cout<<"\ninvalid number :";
}
}
	
};

int main()
{
	number f1;
    cout<<"enter a number :";
    cin>>f1.num;
    f1.factorial();
    f1.showfactorial();
}
