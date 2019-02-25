#include <iostream>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
}  
bool string_has_all_of_the_same_chars(const std::string& s) {
    return s.empty() || s.find_first_not_of(s[0]) == std::string::npos;
}

int T;
int main(){
    cin >> T;
    for (int _ = 0; _ < T; _++){
        string A,B, temp;
        int lenw, f;
        cin >> A >> B;
      	if ((A[0] == B[0]) && ((string_has_all_of_the_same_chars(A)) && string_has_all_of_the_same_chars(B))){
        		int maks = gcd(A.length(), B.length());
        		for(int i=0;i<maks;i++){
        			cout << A[0];
				}
				cout << endl;
		}
		
        else if(A.length() > B.length()){
            lenw = B.length();
            while(1){
                f = 0;
                if(lenw == 1){
                    cout << '-' << endl;
                    goto exit;
                }
                temp = B.substr(f,lenw);
                while(f != A.length()){
                    if(temp.compare(A.substr(f,lenw)) != 0){
                        lenw -= 1;
                        while(A.length() % lenw != 0) lenw--;
                        break;
                    }
                    else{
                        f += lenw;
                    }
                }
                if (f == A.length()){
                    f = 0;
                    while(f != B.length()){
                        if(temp.compare(A.substr(f,lenw)) != 0){
                            lenw--;
                            break;
                        }
                        else{
                            f += lenw;
                        }
                    }
                    if(f == B.length()){
                        cout << temp << endl;
                        goto exit;
                    }
                }
            }
           
        }
        else{
            lenw = A.length();
            while(1){
                f = 0;
                if(lenw == 1){
                    cout << '-' << endl;
                    goto exit;
                }
                temp = A.substr(f,lenw);
                while(f != B.length()){
                    if(temp.compare(B.substr(f,lenw)) != 0){
                        lenw -= 1;
                        while(B.length() % lenw != 0) lenw--;
                        break;
                    }
                    else{
                        f += lenw;
                    }
                }
                if (f == B.length()){
                    f = 0;
                    while(f != A.length()){
                        if(temp.compare(B.substr(f,lenw)) != 0){
                            lenw--;
                            break;
                        }
                        else{
                            f += lenw;
                        }
                    }
                    if(f == A.length()){
                        cout << temp << endl;
                        goto exit;
                    }
                }
            }
        }
        exit:
        int n = 0; 
    }
    return 0;
}
