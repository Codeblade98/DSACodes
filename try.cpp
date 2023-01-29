 #include<bits/stdc++.h>
 using namespace std;

string num_str(int n)
{
   switch(n)
   {
      case 1: return "one";
      case 2: return "two";
      case 3: return "three";
      case 4: return "four";
      case 5: return "five";
      case 6: return "six";
      case 7: return "seven";
      case 8: return "eight";
      case 9: return "nine";
      case 0: return "zero";
   }

   return(num_str(n/10) + " " + num_str(n % 10));
   
}

int main()
{
   cout << num_str(204567);
}