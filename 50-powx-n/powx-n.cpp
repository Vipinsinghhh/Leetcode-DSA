class Solution {
public:
    double myPow(double x, int n) {
        // double ans = 1;
        // long long N = n;   // convert to long long
        
        // if (N < 0) {
        //     x = 1 / x;
        //     N = -N;
        // }
        // for(int i=0;i<N;i++){
        //     ans = ans * x;
        // }
        // return ans;

        double ans = 1;
        long binForm = n;

        if(binForm < 0){
            x = 1/x;
            binForm = -binForm;
        }

        while(binForm > 0){
            if(binForm % 2 == 1){
                ans = ans * x;
            }
            x = x * x;
            binForm = binForm / 2;
        }
        return ans;

        
    }
};