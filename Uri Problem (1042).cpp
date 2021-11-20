#include <iostream>

using namespace std;

int main(){
    int x,y,z, val;
    int arr[3];
    
    cin >> x >> y >> z;
    arr[0] = x;
    arr[1] = y;
    arr[2] = z;
    
    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(arr[i] < arr[j]){
                            val = arr[j];
                            arr[j] = arr[i];
                            arr[i] = val;
                    }
            }
    }
    
    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << endl;
    cout << x << endl << y << endl << z << endl;
    return 0;
}