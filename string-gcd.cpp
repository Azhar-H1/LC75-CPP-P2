#include<iostream>
#include<string>


class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        std::string gcd = "";
        std::string x = str2;
        // std::cout << "initialized X with value: " << x << std::endl;
        for(int i = str2.length(); i > 0; i--){
            // std::cout << "checking for substring: " << x + x << " existing in " << str1 << std::endl;
            if(str1.find(x + x) != std::string::npos){
                // std::cout << " --- REPEAT!" << std::endl;
                for(int i = 0; i < str1.length(); i+= x.length()){
                    // std::cout << i << ") checking " << x <<  " against: " << str1.substr(i, x.length()) << std::endl;
                    if(str1.compare(i, x.length(), x) != 0) return gcd;
                }
                gcd = x;
                break;
            }
            else{
                x.pop_back();
                // std::cout << "Pop back x with: " << x << std::endl;
            }
        }
        return gcd;   
    }
};

int main(){
    Solution s = Solution();
    std::string a, b, c, d;
    a = s.gcdOfStrings("ABCABC", "ABC");
    std::cout << "TestCase one returns: " << a << std::endl;
    b = s.gcdOfStrings("ABABAB", "ABAB");
    std::cout << "TestCase two returns: " << b << std::endl;
    c = s.gcdOfStrings("LEET", "CODE");
    std::cout << "TestCase three returns: " << c << std::endl;
    d = s.gcdOfStrings("AAAAAB", "AAA");
    std::cout << "TestCast four returns: " << d << std::endl;

    return 0;

}