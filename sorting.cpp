// #include<btdc/stdc++>
#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    cout<<"After Selection sort:"<<"\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void bubble_sort(int arr[], int n){
    //loop iterates n-1 times, starting from the last element of the array.
    for (int i = n - 1; i >= 0; i--) {
        //inner loop compares adjacent elements of the array, starting from the first element to the current element i
        for (int j = 0; j <= i - 1; j++) {
            if(arr[j] > arr[j+1]){
               int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }   
    cout<<"After Bubble sort:"<<"\n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n= sizeof(arr)/sizeof(arr[0]);
    // cout<<"Before Selection sort:"<<"\n";
    cout<<"Before Bubble sort:"<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    // selection_sort(arr, n);
    bubble_sort(arr, n);
    return 0;
}
