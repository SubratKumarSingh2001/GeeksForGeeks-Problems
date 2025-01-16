class Solution
{
public:
    void printPattern(int N)
    {
        // Write Your Code here
        for(int i=0; i<N; i++) {
            for(int j=0; j<i+1; j++) {
                cout << "*";
            }
            cout<<" ";
        }
    }
};
