
#include<iostream>
#include<string>

using namespace std;

class laptop{
	private:
	    string brand;
        string model;
        int serial;
        string color;
        float price;
        float processorspeed;
        int ram;
        float screensize;
    public:
	void setlaptop(string b,string m,int s,string c,float p,float ps,int r,float ss){
	 brand=b;
	 model=m;
     serial=s;
     color=c;
     price=p;
     processorspeed=ps;
     ram=r;
     screensize=ss;
}
     void display(){
	 cout<<"laptop brand :"<<brand<<endl;
     cout<<"laptop model :"<<model<<endl;
     cout<<"laptop serial :"<<serial<<endl;
	 cout<<"laptop color :"<<color<<endl;
	 cout<<"laptop price :"<<price<<endl;
	 cout<<"laptop processorspeed :"<<processorspeed<<endl;
	 cout<<"laptop ram :"<<ram<<endl;
	 cout<<"laptop screensize :"<<screensize<<endl;
}
     

};

int main()
{
	
   laptop laptop1;

   cout<<"enter ram";
    cin>>laptop1.ram;
   laptop1.setlaptop("hp","envoy",360,"brown",80000,2.5,8,13.5);
   laptop1.display();
}
