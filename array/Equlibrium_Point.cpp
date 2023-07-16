long long int sum = 0;

        for(int i = 0 ; i < n ;i++){
            sum = sum + a[i];
        }
        
        long long int temp = 0;

        
        for(int i = 0; i < n; i++)
        {
            sum = sum - a[i];
            if(sum == temp){
                return(i + 1);
            }
            temp = temp + a[i];
        }
        return -1;