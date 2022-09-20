// Previous Greater Element With o(n) Time 
#include <iostream>
#include<stack>

using namespace std;

void printprevGreater(int arr[], int n){
   stack <int> st;
        st.push(arr[0]);
        cout << -1  << " ";
        for(int i = 1; i<n;i++){
            while(st.empty() ==  false && st.top() <= arr[i]){
                st.pop();
            }

            int span = st.empty() ?  -1 : st.top();


            cout << span << " ";
            st.push(arr[i]);
        }


}





int main()
{
  int arr[] = {20,30,10,5,15};

   printprevGreater(arr,5);
       return 0;
}