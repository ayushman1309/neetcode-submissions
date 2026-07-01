class Solution {
private:
    // function to check if a char is alphanumeric
    bool valid(char ch){
        return (ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9');
    }

    // function to convert upper case letter to lower case letter

    char toLC(char ch){
        if(ch >= 'A' && ch <= 'Z'){
            return ch + ('a' - 'A');
        }

        return ch;
    }
public:
    bool isPalindrome(string s) {
        // store only lowercase
        string temp = "";

        for(char c : s){
            if(valid(c)) temp.push_back(toLC(c));
        }

        // initialize two pointer
        int st=0, e = temp.size()-1;

        while(st<e){
            if(temp[st] != temp[e]){
                return false;
            }
            // move the two pointers toward the center
            st++;
            e--;
        }
        // if all match its palindrome
        return true;
    }
};
