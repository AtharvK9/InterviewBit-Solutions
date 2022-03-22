/*Solution Approach
Let us say Ai, Ai+1 … Aj is our optimal solution.

Note that no prefix of the solution will ever have a negative sum.

Let us say Ai … Ak prefix had a negative sum.

Sum ( Ai Ai+1 … Aj ) = Sum (Ai … Ak) + Sum(Ak+1 … Aj)

Sum ( Ai Ai+1 … Aj) - Sum(Ak+1 … Aj) = Sum(Ai … Ak)

Now, since Sum(Ai … Ak) < 0,

Sum (Ai Ai+1 … Aj) - Sum (Ak+1 … Aj) < 0

which means Sum(Ak+1 … Aj ) > Sum (Ai Ai+1 … Aj)

This contradicts the fact that Ai, Ai+1 … Aj is our optimal solution.

Instead, Ak+1, Ak+2 … Aj will be our optimal solution.

Similarily, you can prove that for optimal solution, it is always good to include a prefix with positive sum.

Try to come up with a solution based on the previous 2 facts.*/

int Solution::maxSubArray(const vector<int> &A) {
    int cs=A[0], ms=A[0];
    for(int i=1; i<A.size();i++)
    {
        cs = max(A[i], cs+A[i]);
        ms=max(cs, ms);
    }
    return ms;
}
