#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v(A);
    unordered_map<T,int> m;
    for(int i = 0; i < v.size(); i++){
        m[v[i]] = 1;
    }
    for(int i = 0; i < B.size(); i++){
        if (m[B[i]]==0){
            v.push_back(B[i]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<T,bool> m;
    for(int i = 0; i < B.size(); i++){
        m[B[i]] = true;
        //cout << A[i] << " ";
    }
    for(int i = 0; i < A.size(); i++){
        if (m[A[i]] == true) v.push_back(A[i]);
    }
    return v;
}
