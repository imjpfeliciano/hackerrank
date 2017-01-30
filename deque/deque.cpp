#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;
void printKMax(int arr[], int n, int k){
    deque<int> subsets(k);
    
    int i;
    
    //La primera ventana de K elementos
    for(i = 0; i < k; i++){
        //Para cada elemento, el anterior elemento más pequeño es innecesario, entonces lo removemos de la cola
        while((!subsets.empty()) && arr[i] >= arr[subsets.back()])
            subsets.pop_back();
        
        //Agregamos el siguiente elemento del subconjunto
        subsets.push_back(i);
    }
    
    //El resto de los elementos
    for( i = k ; i < n; i++){
        //El primer elemento es el mayor elemento en la ventana anterior
        cout << arr[subsets.front()] << ' ';
        
        //Eliminamos los elementos que se salen de la ventana
        while( (!subsets.empty()) && subsets.front() <= i - k)
            subsets.pop_front();
        
        //Eliminamos todos los elementos más pequeños que se encuentran agregados actualmente
        while( (!subsets.empty()) && arr[i] >= arr[subsets.back()])
            subsets.pop_back();
        
        subsets.push_back(i);
    }
    
    //Imprimimos el mayor elemento en la última ventana
    cout << arr[subsets.front()]  << "\n";
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
