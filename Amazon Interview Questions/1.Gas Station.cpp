/*Solution Approach
The bruteforce solution should be obvious. Start from every i, and check to see if every point is reachable with the gas available.
Return the first i for which you can complete the trip without the gas reaching a negative number.
This approach would however be quadratic.

Lets look at how we can improve.
1) If sum of gas is more than sum of cost, does it imply that there always is a solution ?
2) Lets say you start at i, and hit first negative of sum(gas) - sum(cost) at j. We know TotalSum(gas) - TotalSum(cost) > 0.
What happens if you start at j + 1 instead ? Does it cover the validity clause for i to j already ?*/


int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int fuel = 0, start_i = 0, sum = 0;
    
    for(int i = 0; i < gas.size(); i++){
        sum = sum + (gas[i] - cost[i]);
        fuel = fuel + (gas[i] - cost[i]);
        if(fuel < 0){
            fuel = 0;
            start_i = i+1;
        }
    }
    
    if(sum >= 0){
        return start_i%(gas.size());
    }
    
    return -1;
}
