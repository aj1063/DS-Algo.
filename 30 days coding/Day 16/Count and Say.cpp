/*
  Description : The count-and-say sequence is the sequence of integers with the first five terms as following:
                1.     1
                2.     11
                3.     21
                4.     1211
                5.     111221
                1 is read off as "one 1" or 11.
                11 is read off as "two 1s" or 21.
                21 is read off as "one 2, then one 1" or 1211.
                Given an integer n where 1 ≤ n ≤ 30, generate the nth term of the count-and-say sequence. 
                You can do so recursively, in other words from the previous member read off the digits, counting the number of digits in groups of the same digit.
                Note: Each term of the sequence of integers will be represented as a string.
  Example 1:
      Input:    1
      Output:   "1"
      Explanation: This is the base case.
  Example 2:
      Input:    4
      Output:   "1211"
      Explanation: For n = 3 the term was "21" in which we have two groups "2" and "1", "2" can be read as "12" 
                   which means frequency = 1 and value = 2, the same way "1" is read as "11", so the answer is the concatenation of "12" and "11" which is "1211".
                   
*/

// We can have two types of solution first recursive and second iterative

// recursive code
      string countAndSay(int n) {
        if(n == 1) return "1";
        if(n == 2)  return "11";
        string s = countAndSay(n-1), res = "";
        int i = 0;
        while(i < s.size()) {
            int j = i;
            while(j < s.size() and s[j] == s[i]) j++;
            res += to_string(j - i) + s[i];
            i = j;
        }
        return res;
    }
    
// Iterative Code
   string countAndSay(int n) {
        char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        if(n==1)
        {
            return "1";
        }
        int i;
        string current="1",next;
        while(n!=1)
        {
            char number=current[0];
            int count=1;
            for(i=1;i<current.size();i++)
            {
                if(current[i]==current[i-1])
                {
                    count++;
                }
                else
                {
                    next+=digits[count];
                    next+=number;
                    number=current[i];
                    count=1;
                }
            }
            next+=digits[count];
            next+=number;
            current=next;
            next="";
            n--;
        }
        return current;
    }
