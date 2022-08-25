bool isPalindromehelper(string &s, int start, int end)
{
   
        if(start >= end)
        {
            return true;
        }
        if(s[start] != s[end]){
            return false;
        }
        isPalindromehelper(s,start+1,end-1);
}


bool isPalindrome(string &s)
{
	return isPalindromehelper(s,0,s.size() - 1);
}
