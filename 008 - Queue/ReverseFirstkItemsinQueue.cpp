// Reversing a First k Items in Queue
// Time Complexity o(n)

queue<int> modifyQueue(queue<int> q, int k) {
   if(q.empty() == true || k > q.size() || k <=0 )
   return q;
   stack<int> s;
   
   
   for(int i = 0; i < k; i++ ){
      s.push(q.front());
      q.pop();
      
   }
   
   while(!s.empty()){
       q.push(s.top());
       s.pop();
       
   }
   
   
   for(int i = 0; i <  q.size() - k; i++){
       q.push(q.front());
       q.pop();
       
   }
   
   return q;
   
   
   
   
   
   
}