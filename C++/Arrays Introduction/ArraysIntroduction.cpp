#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int i=0;           //pointing 1st element of the array
    int j=size- 1;     //pointing last element of the array
    
    while( i < j){
        //swap
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
 
        //Update i and j
        i++;  
        j--;
    }
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
