#include<iostream>
#include<vector>
using namespace std;
void intercambiar(int a, int b){
    swap(a,b);
}
void BurbujaRecursivo(int* arr, int n) {
    if (n <= 1)
        return;
    for (int j = 1; j < n; ++j)
        if ( arr[j] > arr[0] )
            intercambiar(arr[0], arr[j]);
    BurbujaRecursivo(arr+1, n-1);
}
void CreateVector(int* arr, int n){
    int *arr= new int [n];
}
void ReadArray(int* arr, int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    
}
void PrintArray(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}
void DestroyVector(int* arr){
    delete[] arr;
}
void Intercambiar(int *vec1,int *vec2){
    
};

int main(){
    int *vec1 = nullptr, size = 10;
    int *vec2 = nullptr;

    CreateVector(vec1, size); // Crear la memoria para este puntero
    ReadArray(vec1, size); // Lee los datos desde el cin
    BurbujaRecursivo(vec1, size); // Funcion definida arriba
    PrintArray(vec1, size);   // Imprime los datos en el cout

    CreateVector(vec2, size); // Crear la memoria para este puntero
    ReadArray(vec2, size); // Lee los datos desde el cin
    BurbujaRecursivo(vec2, size);  // Funcion definida arriba
    PrintArray(vec2, size);

    Intercambiar(vec1, vec2); // Parte 2 del ejercicio
    PrintArray(vec2, size);
    PrintArray(vec2, size);

    DestroyVector(vec1);   // Destruye el vector y deja en nullptr vec1
    DestroyVector(vec2);   // Destruye el vector y deja en nullptr vec2
    return 0;
}
