#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector <int> odd_index, even_index;
    for(int i = 1; i <= 2*n; i++)
    {
        int x;
        cin >> x;
        
        if(x%2 == 0)
        {
            even_index.push_back(i);
        }
        else
        {
            odd_index.push_back(i);
        }
    }
    
    vector <int> B;
    if(odd_index.size()%2 == 1 && even_index.size()%2 == 1)
    {
        for(int i = 1; i < odd_index.size(); i += 2)
        {
            cout << odd_index[i] << " " << odd_index[i + 1] << "\n";
        }
        
        for(int i = 1; i < even_index.size(); i += 2)
        {
            cout << even_index[i] << " " << even_index[i + 1] << "\n";
        }
    }
    else
    {
        if(odd_index.size() >= 2)
        {
            for(int i = 2; i < odd_index.size(); i += 2)
            {
                cout << odd_index[i] << " " << odd_index[i + 1] << "\n";
            }
            for(int i = 0; i < even_index.size(); i += 2)
            {
                cout << even_index[i] << " " << even_index[i + 1] << "\n";
            }
        }
        else
        {
            for(int i = 0; i < odd_index.size(); i += 2)
            {
                cout << odd_index[i] << " " << odd_index[i + 1] << "\n";
            }
            for(int i = 2; i < even_index.size(); i += 2)
            {
                cout << even_index[i] << " " << even_index[i + 1] << "\n";
            }
        }
    }
}

int main()
{
    int no_of_test_cases;
    cin >> no_of_test_cases;
    
    while(no_of_test_cases--)
        solve();
    
    return 0;
}
