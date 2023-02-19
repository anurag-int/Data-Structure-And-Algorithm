void bitManipulation(int a, int i)
    {
        // to check whether the bit is set or not
        long long help = 1;
        long long temp3 = a;
        if((temp3 & (help<<i-1)) != 0)
        {
            cout << 1 <<  " ";
        }
        else
        {
             cout << 0 << " ";   
        }
       
        // to set any bit
        long long temp = a;
        long long ans1 = temp | (help << i-1);
        cout << ans1 << " ";
        
        // to unset any bit
        long long temp2 = a;
        long long ans2 = temp2 & (~ (help << i-1));
        cout << ans2 << " ";

        //toggle bits

    }