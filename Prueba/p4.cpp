#include<iostream>
#include<cstring>
using namespace std;
void dividir(char *cadena,int n){
    int i=0,cantidad=1,inicio=0,final=0;
    while(i<n){
        
        final=final+cantidad;
        for( i=inicio;i<final;i++){
            cout<<*(cadena+i);
        }
        inicio=final;
        cantidad++;
        cout<<endl;
        
    }
}
void invertir(char *cadena,int n){
    int i=0,j=n;
    while(i<n/2&&j<n/2){
        char temp= *(cadena+i);
        *(cadena+i)=*(cadena+j);
        *(cadena+j)=temp;
        i++;j--;
    }
    
}
void imprimir(char *cadena,int n){
    for(int i=0;i<n;i++){
        cout<<*(cadena+i);
    }
    cout<<endl;
}


int main(){
    
    char *cadena= new char[20];
    cin.getline(cadena,20,'\0');
    int n=strlen(cadena);
    
    invertir(cadena,n);
    dividir(cadena,n);
    imprimir(cadena,n);

   
    return 0;
}
