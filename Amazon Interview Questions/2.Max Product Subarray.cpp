// Solution Approach

// If there were no zeros or negative numbers, then the answer would definitely be the product of the whole array.

// Now lets assume there were no negative numbers and just positive numbers and 0. In that case we could maintain a current maximum product which would be
// reset to A[i] when 0s were encountered.
  
// When the negative numbers are introduced, the situation changes ever so slightly. We need to now maintain the maximum product in positive and
// maximum product in negative. On encountering a negative number, the maximum product in negative can quickly come into picture.

int Solution::maxProduct(const vector<int> &A) {
    int r = A[0];
    int n = A.size();
    for(int i = 1, imax = r, imin = r; i < n; i++) {
        if(A[i] < 0)
            swap(imax,imin);

        imax = max(A[i], imax*A[i]);
        imin = min(A[i], imin*A[i]);

        r = max(r, imax);
    }
    return r;
}
