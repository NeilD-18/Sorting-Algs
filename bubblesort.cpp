#include <iostream>
#include <vector> 

#define ll long long

using namespace std; 

vector<int> bubbleSort(vector<int> array) {

    //loops through array by max amount of times 
    for (int i = 0, max = array.size() - 1; i < max; i++) { 
        
        //decreases the distance of loop by max - i 
        for (int j = 0; j < max - i; j++ ) { 
            
            if (array[j] > array[j+1]) { 
                int temp = array[j+1];
                array[j+1] = array[j]; 
                array[j] = temp; 


            }

        }
    }

    
    
    return array; 



}

void print(vector <int> array) { 
    for (int i = 0, max = array.size(); i < max; i++) { 
        cout << array[i] << " ";
    }
}

int main() { 
    ll num_of_items;
    ll num; 
    vector<int> unsorted; 
    
    cin >> num_of_items; 

    for (int i = 0; i < num_of_items; i++) { 
        cin >> num;
        unsorted.push_back(num); 
    }

    
    print(bubbleSort(unsorted));  



}