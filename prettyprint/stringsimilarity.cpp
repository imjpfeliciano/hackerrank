/*
 * Complete the function below.
 */
vector < int > StringSimilarity(vector < string > inputs) {
    int n = inputs.size();
    vector<int> answers;
    answers.resize(n, 0);
    string current;
    
    for(int k=0; k < n; k++){
        if(inputs[k].size() == 1){
            answers[k] = 1;
        } else {
            current = inputs[k];
            int length = current.size();
            
            answers[k] += length;
            for(int i=1; i < length; i++){
                int j = 0;
                for(; j < length - i; j++){
                    if(current[j] != current[j + i]){
                        break;
                    }
                }
                
                answers[k] += j;
            }

        }
    }
    return answers;
}