// Anagram Search Optimized
// Time Complexity O(m + (n - m) * CHAR) -> O(n *  CHAR)
// Aux Space -> theta(CHAR

class Solution {
public:
    bool areSame(int CT[],int CP[])
    {
        for(int i = 0; i < 256; i++)
        {
            if(CT[i] != CP[i]) return false;
        }
        
        return true;
    }
    
    bool checkInclusion(string pat, string txt) {
    if(txt.size()<pat.size()) return false;
          int CT[256] = {0}, CP[256] = {0};
   for(int i = 0; i < pat.length(); i++)
   {
       CT[txt[i]]++;
       CP[pat[i]]++;
       
   }
   
   for(int i = pat.length(); i <= txt.length(); i++)
   {
       if(areSame(CT,CP)) return true;
       CT[txt[i]]++;
       CT[txt[i - pat.length()]]--;
   }
   
   return false;
 

    }
};