int search(int arr[], int low, int high, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        
        while(low <= high)
        {
            
            int mid = (low + high)/2;
            if(arr[mid] == key)
                return mid;
            

            // it can be in First Half
            else if(arr[low] < arr[mid - 1])
            {
                if(key >= arr[low] && key <= arr[mid-1])
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            

            // it can be in Second Half
            else
            {
                if(key >= arr[mid+1] && key <= arr[high])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
        
        }
        return -1;
    }