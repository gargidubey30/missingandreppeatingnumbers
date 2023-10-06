// #include <bits/stdc++.h>
// using namespace std;

// vector<int> RepeatingMissing(vector<int> &arr, int n){
//     int repeating =-1;
//     int missing=-1;
//     for(int i=1; i<=n; i++){ //exact numbers
//         int cnt=0;

//         for(int j=0; j<n; j++){
//             if(arr[j]==i) cnt++;

//         }

//         if(cnt==2) repeating=i;
//         else if (cnt==0) missing=i;
//         if(repeating!=-1 && missing!=-1) break;
    
//     }
//     return {repeating,missing};

// }
// int main()
// {
// vector<int>arr={1,2,4,4,5,6};
// int n=arr.size();
// vector<int> ans = RepeatingMissing(arr,n);
//     cout << "The repeating and missing numbers are: {"
//          << ans[0] << ", " << ans[1] << "}\n";
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int repeating = -1, missing = -1;

    //Find the repeating and missing number:
    for (int i = 1; i <= n; i++) {
        //Count the occurrences:
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }

        if (cnt == 2) repeating = i;
        else if (cnt == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}

