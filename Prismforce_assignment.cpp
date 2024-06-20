#include <bits/stdc++.h>
using namespace std;

int cross_chakravyuh(vector<int> v,int a,int b,int p){
    if (a >= 11)
        return 1; // Base case if Abhimanyu has enough skips to pass all the circles

    int recharge = b;
    int current_power = p;
    int skip_battle = a;
    for (int i = 0; i < 11; i++)
    {
        // k3 and k7 regerate power and attack from behind the case
        if (i == 3 || i == 7)
        {
            v[i] += (v[i - 1] / 2);
        }
        // If Abhimanyu has less power than enemy
        if (current_power< v[i])
        {
            // If Abhimanyu can recharge
            if (current_power!= p && p >= v[i] && recharge > 0)
            {
                recharge--;
                current_power= p;
                current_power-= v[i];
            }
            // if abhimanyu can skip
            else if (skip_battle > 0)
            {
                skip_battle--;
            }
            // If Abhimanyu cannot defeat
            else
            {
                return 0;
            }
        }
        // If Abhimanyu has more power than the enemy
        else
        {
            current_power-= v[i];
        }
    }
    return 1;
}
int main() {

    vector<int> v1 = {5,15,25,35,45,55,65,75,85,95,105};
    int p1 = 20, a1 = 9, b1 = 2;
    cout << (cross_chakravyuh(v1,a1, b1,p1)==1 ? "Yes" : "No") << endl;
    vector<int> v2 = {55, 70, 30, 20, 50, 60, 30, 80, 90, 40, 90};
    int p2 = 60, a2 = 2, b2 = 3;
    cout << (cross_chakravyuh(v2,a2,b2,p2) ? "Yes" : "No") << endl;
    return 0;
}
