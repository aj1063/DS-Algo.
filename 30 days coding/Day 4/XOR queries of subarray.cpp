/*
Description : Given the array arr of positive integers and the array queries where queries[i] = [Li, Ri], 
              for each query i compute the XOR of elements from Li to Ri (that is, arr[Li] xor arr[Li+1] xor ... xor arr[Ri] ).
              Return an array containing the result for the given queries.
Example 1:
              Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
              Output: [2,7,14,8] 
Explanation: 
              The binary representation of the elements in the array are:
              1 = 0001 
              3 = 0011 
              4 = 0100 
              8 = 1000 
              The XOR values for queries are:
              [0,1] = 1 xor 3 = 2 
              [1,2] = 3 xor 4 = 7 
              [0,3] = 1 xor 3 xor 4 xor 8 = 14 
              [3,3] = 8
Example 2:
              Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
              Output: [8,0,4,4]
Constraints:
              1 <= arr.length <= 3 * 10^4
              1 <= arr[i] <= 10^9
              1 <= queries.length <= 3 * 10^4
              queries[i].length == 2
              0 <= queries[i][0] <= queries[i][1] < arr.length
*/
// code
       vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        int dp[arr.size()];
        dp[0]=arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            dp[i]=dp[i-1]^arr[i];
        }
        for(int i=0; i<queries.size(); i++)
        {
            ans.push_back(dp[queries[i][1]]^dp[queries[i][0]]^arr[queries[i][0]]);
        }
        return ans;
    }
    
/*
  initially i got up with basic solution of calculating xor for each query but afterward i got dp approach of creating a array of N*N size and storing value of XOR
  where row tell starting range and column tell ending range. But because of property of XOR(x^x = 0) we only need a single dimensional array which is implemented above
*/
