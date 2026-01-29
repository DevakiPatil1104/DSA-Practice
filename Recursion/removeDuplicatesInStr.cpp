#include<iostream>
#include<string>
using namespace std;

void removeDup(string str, string ans, int i, int map[]){
    if(i == str.size()){ // base case
        cout << ans << endl;
        return;
    }

    int mapIdx = (int)(str[i] - 'a');

    if(map[mapIdx] == true) { // is duplicate
        removeDup(str, ans, i+1, map); // recursive call
    } else { // not duplicate
        map[mapIdx] = true; // update map idx as T for being duplicate
        removeDup(str, ans+str[i], i+1, map); // recursive call
    }
}

int main() {
    string str = "appnnacollege";
    string ans = "";
    
    int map[26] = {false};
    removeDup(str, ans, 0, map);
    return 0;
}