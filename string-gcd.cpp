#include<iostream>
#include<string>


class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        std::string gcd = "";
        std::string x = str2;
        for(int i = str2.length(); i > 0; i--){
            if(str1.find(x + x) != std::string::npos){
                for(int i = 0; i < str1.length(); i+= x.length()){
                    if(str1.compare(i, x.length(), x) != 0) return gcd;
                }
                gcd = x;
                break;
            }
            else{
                x.pop_back();
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