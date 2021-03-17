#include <iostream>
using namespace std;

int main(){

    int arr_size,count = 0;

    cout << "Enter size of the arrray : ";
    cin >> arr_size;

    int arr[arr_size];

    cout << "Enter " << arr_size << " numbers \n";
    for(int i = 0; i < arr_size; i++)
    cin >> arr[i];

    for(int i = 0; i < arr_size; i++){
        for(int j = i+1; j < arr_size; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    cout << "\nTotal number of duplicate elements  = " << count;

    return 0;
}