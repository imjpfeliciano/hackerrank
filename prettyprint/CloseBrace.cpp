/*
 * Complete the function below.
 */
bool checkCloseBrace(char ini, char fin){
    if(ini == '(' && fin == ')') return true;
    if(ini == '{' && fin == '}') return true;
    if(ini == '[' && fin == ']') return true;
    return false;
}

string check_braces(string cad){
    stack<char> pila;
    for(int i=0; i < cad.size(); i++){
        if(cad[i] == '(' || cad[i] == '{' || cad[i] == '['){
            pila.push(cad[i]);
        } else {
            if(cad[i] == ')' || cad[i] == '}' || cad[i] == ']'){
                if(pila.empty() || !checkCloseBrace(pila.top(), cad[i])){
                    return "NO";
                } else {
                    pila.pop();    
                }
            }
        }
        
    }
    return pila.empty() ? "YES" : "NO";
}

vector < string > Braces(vector < string > values) {
    vector<string> answers;
    
    int tam = values.size();
    
    for(int i=0; i < tam; i++){
        answers.push_back(check_braces(values[i]));
        //cout << answers[i] << ' ';
    }
    
    return answers;
}
