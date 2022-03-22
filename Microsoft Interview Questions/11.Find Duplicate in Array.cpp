int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> B = A;
    sort(B.begin(), B.end());
    int result = -1;
    for(int i = 0; i < A.size(); i++){
        if(B[i]==B[i-1]){
            result = B[i];
            break;
        }
    }
    return result;
}
