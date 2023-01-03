#include<iostream>
using namespace std;
 int largest(int arr[], int n){
        int i;
        int max = arr[0];
        for(i = 1; i < n; i++)
        if(arr[i] > max)
        max = arr[i];
        return max;
    }
    int smallest(int arr [], int n){
        int i;
        int min = arr[0];
        for(i = 1; i < n; i++)
        if(arr[i] < min)
        min = arr[i];
        return min;
    }
int main(){
    int arr [] = {10, 20, 30, 40, 50};
    //int n, temp, j, k, i;
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<"Enter the elements of the array: ";
   // for(int i = 0; i < n; i++)
    //cin>>arr[i]; 
    
    cout<<"The elements are: ";
    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    for (int i = 0; i < n; i++){
        for(j = i; j < (n - 1); j++)
            arr[j] = arr[j+1];
            i--;
            n--;
                
    }
    cout<<"elements after deletion: ";
    for (int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    //for(int i = 0, j = n - 1; i < n/2; i++, j--){
       // temp = arr[i];
       // arr[i] = arr[j];
        //arr[j] = temp;
    //}
   // cout<<"Reversed aray elements are: ";
    //for(i = 0; i < n; i++)
    //cout<<arr[i]<<" ";
    cout<<largest(arr, n)<<endl;
    cout<<smallest(arr, n)<<endl;
   
    
    return 0;
}