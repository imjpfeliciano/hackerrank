/*
 * Complete the function below.
 */
int maxDifference(vector < int > a) {
    int n = a.size();
    int _max = a[n-1];
    int maxdiff = -1;
    int currentDifference;
    
    
    for(int i=n-2; i >= 0; i--){
        if(_max < a[i]){
            _max = a[i];
        } else {
            currentDifference = _max - a[i];
            maxdiff = max(maxdiff, _max - a[i]);
        }
    }
    cout << maxdiff << ' ';
    return maxdiff;
}