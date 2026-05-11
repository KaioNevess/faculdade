#include <iostream>
using namespace std;

void intervalo(int n1, int n2){
	
	cout<<"\n Inicio do intervalo: "<<endl;
	
	if(n1<n2){
		while(n1<n2){
			n1++;
			
			cout<<n1<<endl;
			if(n1==n2 - 1){	
				cout<<"\n Fim do intervalo. "<<endl;
				break;
			}
		}
	}
	
	else if(n2<n1){
		while(n2<n1){
			n2++;
			
			cout<<n2<<endl;
			
			if(n1==n2 + 1){	
				cout<<"\n Fim do intervalo. "<<endl;
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