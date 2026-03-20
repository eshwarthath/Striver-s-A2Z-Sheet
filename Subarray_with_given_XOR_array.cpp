int Solution::solve(vector<int> &A, int B) {
    
    unordered_map<int, int> mp;
    int prefixXor = 0;
    int count = 0;
    
    mp[0] = 1;   // Important: handles subarray starting from index 0
    
    for(int i = 0; i < A.size(); i++) {
        
        prefixXor ^= A[i];
        
        int required = prefixXor ^ B;
        
        if(mp.find(required) != mp.end()) {
            count += mp[required];
        }
        
        mp[prefixXor]++;
    }
    
    return count;
}
