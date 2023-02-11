#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=(a+b)/2;
        int y=(b+c)/2;
        int z=(a+c)/2;
        if(x<35 || y<35 ||z<35){
            cout<<"Fail"<<endl;
        }
        else{
            cout<<"Pass"<<endl;
        }
    }
	// your code goes here
	return 0;
}
