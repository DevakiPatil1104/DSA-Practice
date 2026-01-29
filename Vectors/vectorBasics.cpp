#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec1;
    cout << "size of vec1 = " << vec1.size() << endl;

    vector<int> vec2 = {1,2,3};
    cout << "size of vec2 = " << vec2.size() << endl;
    cout << "elements of vec2: ";
    for(int i=0; i<vec2.size(); i++){
        cout << vec2[i] << " ";
    } cout << endl;

    vector<int> vec3(5, -1);
    cout << "size of vec3 = " << vec3.size() << endl;
    cout << "elements of vec3: ";
    for(int i=0; i<vec3.size(); i++){
        cout << vec3[i] << " ";
    } cout << endl;

    cout << endl;
    cout << endl;

    vector<int> vec4;
    cout << "size = " << vec4.size() << endl; // 0
    cout << "capacity = " << vec4.capacity() << endl; // 0

    vector<int> vec = {1,2,3,4};
    cout << "size = " << vec.size() << endl; // 4
    cout << "capacity = " << vec.capacity() << endl; // 4

    vec.push_back(5); 
    cout << "size = " << vec.size() << endl; // 5
    cout << "capacity = " << vec.capacity() << endl; // 8


    // 2D Vector
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> matrix2 = {{1,2,3}, {4,5}, {6}}; // no. of cols can differ
    vector<vector<int>> matrix3 = {{1}, {2,3}, {4,5,6}};

    for(int i=0; i<matrix3.size(); i++){
        for(int j=0; j<matrix3[i].size(); j++){
            cout << matrix3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}