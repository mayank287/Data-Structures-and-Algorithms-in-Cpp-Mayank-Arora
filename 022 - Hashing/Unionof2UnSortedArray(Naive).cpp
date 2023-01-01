// Union of 2 Unsorted Array(Naive)
// Time Complexity O((m + n) * (m + n))

int findUnion(int a[], int b[], int m, int n)
{
int c[m + n];
for(int i = 0; i < m; i++)
{
c[i] = a[i];

}

for(int i = 0; i < n; i++)
{
c[m + i] =b[i];
}

int res = 0;
for(int i = 0; i < m + n; i++)
{
  bool flag = false;
  for(int j = 0; j < i; j++)
  {
  if(c[i] == c[j] 
  {
  flag = true;
  break;
  }
  }
  if(flag)
  {
  res++;
  
  }
  

}

return res;



}
