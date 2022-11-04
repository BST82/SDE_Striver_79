 if (find(arr.begin(), arr.end(), x) == arr.end()) {
        return make_pair(y, x);
    }
 
    return make_pair(x, y);