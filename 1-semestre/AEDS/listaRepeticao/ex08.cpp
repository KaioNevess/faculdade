#include <iostream>
using namespace std;

void notas(){
        float nota;
        do{
                cout<<"Digite sua nota: ";
                cin>>nota;

                if(nota>10){
                        cout<<" Nota anterior invalida"<<endl;
                }
                }while(nota>=1);
        
}

int main(){
        
        notas();
}