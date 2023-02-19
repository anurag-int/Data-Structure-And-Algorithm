// Input: digits = [1,2,3]
// Output: [1,2,4]

// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]

// Input: digits = [9, 9, 9]
// Output: [1, 0, 0, 0]


vector<int> plusOne(vector<int>& digits) 
    {
       
        int n = digits.size();
        
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i] = digits[i]+1;
                return digits;
            }
            else
            {
                digits[i]  = 0;          
            }
        }
        
        // defining all elements with (0) from 0th to n+1th
       vector<int> newdigits(n+1,0);
        newdigits[0]=1;
        return newdigits;
        
    }

