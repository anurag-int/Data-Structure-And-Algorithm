#include<iostream>
#include<vector>

using namespace std;

int main()
{
    


    int n1;
    int n2;

    cin >> n1;
    cin >> n2;


    vector<int> nums1(n1);
    vector<int> nums2(n2);

    for(int i=0;i<n1;i++)
    {
        cin >> nums1[i];
    }

    for(int i=0;i<n2;i++)
    {
        cin >> nums2[i];
    }


    int i = 0;
    int j = 0;
        
        while(i<nums1.size() && j < nums2.size())
        {
            if(nums1[i] == nums2[j])
            {
                cout << nums1[i]; 
                 break;
            }
                
        
            
            else if(nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return 0;
}