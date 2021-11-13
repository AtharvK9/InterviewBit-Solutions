int Solution::maxSubArray(const vector<int> &A) {
    int cs=A[0], ms=A[0];
    for(int i=1; i<A.size();i++)
    {
        cs = max(A[i], cs+A[i]);
        ms=max(cs, ms);
    }
    return ms;
}
