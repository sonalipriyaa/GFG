class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        int i;
        for(i=1;i<n;i+=2){
            swap(arr[i],arr[i-1]);
        }
        
    }
};
