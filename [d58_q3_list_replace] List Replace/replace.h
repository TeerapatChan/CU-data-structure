void replace(const T& x, list<T>& y) {
  //write your code here
    CP::list<T> l;
    for(auto it = begin(); it != end(); it++){
        if (*it == x){
            for(auto i = y.begin(); i != y.end(); i++){
                l.push_back(*i);
            }
        }
        else{
            l.push_back(*it);
        }
    }
    *this = l;
}
