#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vec(n);
    vec.resize(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for (int i = 0; i < n; i++){
        if(vec[i] % 2 == 0)
            cout << vec[i] << " ";
    }
    for (int i = 0; i < n; i++){
        if(vec[i] % 2 != 0)
            cout << vec[i] << " ";
    }

    return 0;
}
