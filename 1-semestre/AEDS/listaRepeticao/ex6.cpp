#include <iostream>
using namespace std;

void intervalo(int n1, int n2){
	
	if(n1<n2){
		while(n1<n2){
			n1++;
			cout<<n1<<endl;
			if(n1==n2 - 1){
				break;
			}
		}
	}
	
	else if(n2>n1){
		while(n2<n1){
			n1++;
			cout<<n1<<endl;
			if(n1==n2 - 1){
				break;
	}
}

}
}



int main(){
	int n1,n2;
	cin>>n1>>n2;
	intervalo(n1,n2);
}