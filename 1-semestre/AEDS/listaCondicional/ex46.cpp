#include <iostream>
using namespace std;

void ordem( int i, float a, float b, float c){
	switch(i){
		case 1:{
			if(a>=b && b >= c){
				cout<<c<<" - "<<b<<" - "<<a;
				
			}else if(b>=a && a >= c){
				cout<<c<<" - "<<a<<" - "<<b;
				
			}else if(c>=b && b >= a){
				cout<<a<<" - "<<b<<" - "<<c;
				
			}else if(b>=c && c >= a){
				cout<<a<<" - "<<c<<" - "<<b;

				
			}else if(a>=c && c >= b){
				cout<<b<<" - "<<c<<" - "<<a;
				
			}else if(c>=a && b >= a){
				cout<<b<<" - "<<a<<" - "<<c;
			}
			break;
			
		case 2:{
			
			if(a>=b && b >= c){
				cout<<a<<" - "<<b<<" - "<<c;
				
			}else if(b>=a && a >= c){
				cout<<b<<" - "<<a<<" - "<<c;
				
			}else if(c>=b && b >= a){
				cout<<c<<" - "<<b<<" - "<<a;
				
			}else if(b>=c && c >= a){
				cout<<b<<" - "<<c<<" - "<<a;

				
			}else if(a>=c && c >= b){
				cout<<a<<" - "<<c<<" - "<<b;
				
			}else if(c>=a && b >= a){
				cout<<c<<" - "<<a<<" - "<<b;
			}
			break;
	
		}
		
		case 3:{
			if(a>=b && a>=c){
				cout<<b<<" - "<<a<<" - "<<c;
			}else if(b>=c && b>=a){
				cout<<a<<" - "<<b<<" - "<<c;
			}else{
				cout<<a<<" - "<<c<<" - "<< b;
			}
			break;
		}
		
	
		}
	}
 }


int main(){
	int i; 
	float a,b,c;
	cout<<" Se 1 - em ordem crescente."<<endl;
	cout<<" Se 2 - em ordem decrescente."<<endl;
	cout<<" Se 3 - de forma que o maior entre a, b, c fique dentre os dois."<<endl;
	cout<<"Informe a ordem quer deseja: ";
	cin>>i;
	cout<<"Informe os 3 numeros: ";
	cin>>a;
	cin>>b;
	cin>>c;
	
	ordem(i,a,b,c);
}