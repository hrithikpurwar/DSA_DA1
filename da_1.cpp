#include <iostream>
using namespace std;
  
int main(){
    int  arr_size, i;
      
    cout << "Enter the size of array\n";
    cin >> arr_size;
    
    int arr[arr_size];
     
    cout << "Enter " << arr_size << " numbers \n";
      
    for(i = 0; i < arr_size; i++){
        cin >> arr[i];
    }
      
    cout << "Reversed Array\n";
    for(i = arr_size; i > 0; i--){
        cout << arr[i-1] << " ";
    }
          
    return 0;
}