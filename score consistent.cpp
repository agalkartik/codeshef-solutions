//Not an ideal solution... 

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin>>t;
	for(int i=1;i<=t;i++){
	    cin>>a>>b>>c>>d;
	    if(a<=c && b<=d){
	        cout<<"possible"<<endl;
	    }
	    else{
	        cout<<"impossible"<<endl;
	    }
	}
	return 0;
}
