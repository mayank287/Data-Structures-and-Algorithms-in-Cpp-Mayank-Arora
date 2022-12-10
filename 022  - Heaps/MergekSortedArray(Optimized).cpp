// Merge K Sorted Arrays
// Time Complexity O(nklogk)
#include <bits/stdc++.h>
using namespace std;

struct Triplet{
    int val,aPos,vPos;
    Triplet(int v,int ap, int vp){
        val=v;aPos=ap;vPos=vp;
    }
};

struct MyComp{
    bool operator()(Triplet &t1,Triplet &t2){
        return t1.val>t2.val;
    }
};

vector<int> mergeArr(vector<vector<int> > &arr) 
{ 
    vector<int> res; 
      
    priority_queue <Triplet, vector<Triplet>,MyComp> pq;
    
    for(int i=0;i<arr.size();i++){
        Triplet t(arr[i][0],i,0);
        pq.push(t);
    }
    
    while(pq.empty()==false){
        Triplet curr=pq.top();pq.pop();
        res.push_back(curr.val);
        int ap=curr.aPos;int vp=curr.vPos;
        if(vp+1<arr[ap].size()){
            Triplet t(arr[ap][vp+1],ap,vp+1);
            pq.push(t);
        }
    }

    return res;
}

int main()
{

	vector<vector<int> > arr{ { 10, 20, 30 }, 
                              { 5, 15 }, 
                              { 1, 9, 11, 18 } }; 
  
    vector<int> res=mergeArr(arr);  
    cout << "Merged array is " << endl; 
    for (auto x : res) 
        cout << x << " "; 
  
    return 0; 
}




// GFG Solution 

// val = value of element ap = array pos vp = value pos in array

struct Triplet{
    int val,apos,vpos;
    Triplet(int v,int ap,int vp)
    {
        val = v;
        apos = ap;
        vpos = vp;
    }
};


struct MyComp{
    bool operator()(Triplet &t1,Triplet &t2)
    {
        return t1.val > t2.val;
    }
};



class Solution
{
    public:
   
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<Triplet,vector<Triplet>,MyComp> pq;
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++)
        {
            Triplet t(arr[i][0],i,0);
            pq.push(t);
        }
        
        while(!pq.empty())
        {
            Triplet curr = pq.top();
            pq.pop();
            
            ans.push_back(curr.val);
            
            int ap = curr.apos;
            int vp = curr.vpos;
            
            if(vp + 1 < arr[ap].size())
            {
                Triplet t(arr[ap][vp + 1],ap,vp + 1);
                pq.push(t);
            }
        }
        
        return ans;
        
    }
};