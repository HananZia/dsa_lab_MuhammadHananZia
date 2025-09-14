#include <iostream>
#include <vector>   //Importing Vector Function to handle Vector queries
using namespace std;

//Vector Function to findAllIndices
vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);  //Push_back will add indices in vectors
        }
    }
    return indices;
}

// Void function to print the array
void printVector(const vector<int>& v) {
    if (v.empty()) {
        cout << "No occurrences are found yet." << endl;
        return;
    }
    cout << "Indices: ";
    for (int idx : v) {
        cout << idx << " ";
    }
    cout << endl;
}

int main() {

    vector<int> arr1 = {4,7,2,7,9};
    cout << "Multiple Occurences (Test 01):" << endl;   //Test 01
    printVector(findAllIndices(arr1, 7)); //Function call

    vector<int> arr2 = {10, 20, 30};
    cout << "Key not present (Test 02):" << endl;   //Test 02
    printVector(findAllIndices(arr2, 99));   //Searching 99 with function call

    vector<int> arr3 = {};
    cout << "Empty array (Test 03):" << endl;  //Test 03
    printVector(findAllIndices(arr3, 5));   //Function call to find element in empty array


    vector<int> arr4 = {2,2,2,1,9};
    cout << "Multiple Occurences (Test 01):" << endl;   //Test 01
    printVector(findAllIndices(arr4, 2)); //Function call

    vector<int> arr5 = {0, 30, 10};
    cout << "Key not present (Test 02):" << endl;   //Test 02
    printVector(findAllIndices(arr5, 9));   //Searching 9 with function call

    vector<int> arr6 = {};
    cout << "Empty array (Test 03):" << endl;  //Test 03
    printVector(findAllIndices(arr6, 8));   //Function call to find element in empty array

    return 0;
}
