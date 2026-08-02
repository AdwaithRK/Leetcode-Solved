class Solution {
public:
    bool checkValidString(string s) {

        stack<int> star_stack;
        stack<int> bracket_stack;

        for(int i = 0; i < s.size(); i++){
            char character = s[i]; 
            if(character == '('){
                bracket_stack.push(i);
            }
            else if(character == '*'){
                star_stack.push(i);
            }
            else{
                if(character == ')'){
                    if(bracket_stack.size() > 0){
                        bracket_stack.pop();
                    }
                    else if(star_stack.size() > 0){
                        star_stack.pop();
                    }
                    else {
                        return false;
                    }
                }
            }

        }

        while(!star_stack.empty() && !bracket_stack.empty()){
            if(bracket_stack.top() < star_stack.top()){
                bracket_stack.pop();
                star_stack.pop();
            }
            else return false;

        }

        return bracket_stack.empty();
        
    }
};