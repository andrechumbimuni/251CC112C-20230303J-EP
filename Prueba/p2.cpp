#include<iostream>
using namespace std;
int multiplicar(int b ,int a){
    return a*b;
}
int almenosuno(int a, int b){
    int c=a+b+2;
    if(c%2==0){
        return 1;
    }else return -1;
}
int filaconceros(int **matriz, int n){
    int i;
    int mayor=0,fila=0;
    for(int i=0;i<n;i++){
        int cero=0,cont=0;
        for(int j=0;j<n;j++){
            while(cero==*(*(matriz+i)+j)){
                cont++;
                
            }
        }
        
        if(cont>mayor){
            mayor=cont;
            fila=i;
            
        }
        
    }
    return fila;
}
    
void determinante(int **matriz, int n) {
    cout<<filaconceros;

    int **matriz2=new int*[n-1];
    for(int k=0;k<n;k++){
        matriz2[k]=new int[n-1];
    }
    cofactore
    return multiplicar(almenosuno(i,j),*(*(matriz+i)+j))*determinante(matriz,int n-1);
    
}
int cofactores(int **matriz,int a,int b,int n){
    
    for(int i=0;i<n;i++){
        int k=0,g=0;
        if(i!=a){
            for(int j=0;j<n;j++){
                if(j!=b){
                    *(*(matriz+k)+g)=*(*(matriz+i)+j);
                    g++;
                    return *(*(matriz+k)+g);
                }
            }
            k++;
        }
        
    }
    
}


int main(){
    
    int n;
    cout<<"ingrese el tamaño de la matriz: "<<endl;
    cin>>n;
    int **matriz=new int*[n];
    for(int k=0;k<n;k++){
        matriz[k]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"digite ["<<i<<","<<j<<"]: ";
            cin>>*(*(matriz+i)+j);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<*(*(matriz+i)+j)<<" ";
        }
        cout<<endl;
    }
    determinante(matriz,n);

   
    return 0;
}
