#include<iostream>
using namespace std;

int escamino(int **matriz,int n,int m){
    bool es=true;
    if(*(*(matriz+n)+m)==1){
        es=false;
    }
    return es;
}
int caminosarriba(int **matriz,int n,int m){
    bool es=true;
    if(*(*(matriz+n-1)+m)!=0){
        es=false;
    }
    return es;
}
int caminosabajo(int **matriz,int n,int m){
    bool es=true;
    if(*(*(matriz+n+1)+m)!=0){
        es=false;
    }
    return es;
}
int caminosderecha(int **matriz,int n,int m){
    bool es=true;
    if(*(*(matriz+n)+m+1)!=0){
        es=false;
    }
    return es;
}
int caminosizquierda(int **matriz,int n,int m){
    bool es=true;
    if(*(*(matriz+n)+m-1)!=0){
        es=false;
    }
    return es;
}    
void cantidad(int **matriz, int n,int m) {
    int cant=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(escamino(matriz,i,j)==true){
                cant++;
                if(i!=0&&j!=0){
                    if(caminosizquierda(matriz,i,j)==true){cant--;}
                    if(caminosarriba(matriz,i,j)==true){cant--;}
                }
                if(i!=n&&j!=m){
                    if(caminosderecha(matriz,i,j)==true){cant--;}
                    if(caminosabajo(matriz,i,j)==true){cant--;}
                }
            }
        }
    }
    cout<<"numero de regiones transitables: "<<endl;
    cout<<cant;
}



int main(){
    
    int n,m;
    cout<<"ingrese el numero de filas y columnas: ";
    cin>>n>>m;
    int **matriz=new int*[n];
    for(int k=0;k<n;k++){
        matriz[k]=new int[m];
    }
    cout<<"ingrese los valores del mapa: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            do{
                cin>>*(*(matriz+i)+j);
            }while(*(*(matriz+i)+j)<0&&*(*(matriz+i)+j)>1);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<*(*(matriz+i)+j)<<" ";
        }
        cout<<endl;
    }
    cantidad(matriz, n, m);

   
    return 0;
}
