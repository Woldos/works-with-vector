#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long int n = 100000,sum = 0,avg = 0;
    int q = 0,p = 0;
    vector <long long int> vec(n);
    while (n != 0){
        cin >> n;
        if(n == 0)
            break;
        vec[p] = n;
        q++;
        p++;
        sum += n;
    }
    vec.resize(q);
    avg = sum/q;
    p = 0;
    for(int i = 0; i < q; i++){
        if(vec[i] > avg)
            p++;

    }
    cout << p;
    cout << '\n';
    for(int i = 0; i < q; i++){
        if(vec[i] > avg)
            cout << vec[i] << " ";

    }
    return 0;}
