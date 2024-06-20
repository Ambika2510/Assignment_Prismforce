Cross_Chakravyuh Algorithm

The algorithm finds if Abhimanyu can cross the Chakravyuh keeping in mind the following conditions:-

• Each circle is guarded by a different enemy where the enemy is equipped with k1, k2……k11 powers Abhmanyu starts from the innermost circle with p power Abhimanyu has a boon to skip fighting the enemy a times

• Abhimanyu can recharge himself with power b times

• Battling in each circle will result in losing the same power from Abhimanyu as the enemy.

• If Abhimanyu enters the circle with energy less than the respective enemy, he will lose the battle

• k3 and k7 enemies are endured with the power to regenerate themselves once with half of their initial power and can attack Abhimanyu from behind if he is battling in iteratively next circle

Solution:-

1. Function solve:

• This function takes four parameters:

• v: A reference to a vector representing the powers of enemies in each circle.

• a: Number of times Abhimanyu can skip battling.

• b: Number of times Abhimanyu can recharge his power.

• p: Initial power of Abhimanyu.

2. Base Case:

• The function checks if a >= 11 (the number of circles). If true, it immediately returns 1(true) because Abhimanyu can skip all battles.

3. Initialize variables required :

• current_power: Represents Abhimanyu's current power.

• skip_battle: Represents the remaining skips Abhimanyu can use.

• recharge: Represents the remaining recharges Abhimanyu has.

4. Looping Through Circles:

• The function iterates through each circle (from 0 to 10, representing 11 circles).

• If the current circle is 3 or 7, the enemy's power is increased by half of the previous circle's power (v[i-1]/2).

5. Handling Battle Cases:

• If current_power is less than the enemy's power (v[i]):

• If Abhimanyu has previously battled (current_power != p), has enough initial power to battle(p >= v[i]), and has remaining energy to recharge (recharge > 0), he recharges his power and tries to battle again.

• Otherwise, if he has remaining skips (skip_battle > 0), he skips the battle.

• If neither condition is met, Abhimanyu cannot proceed, and the function return 0(false).

6. Updating Current Power:

• If Abhimanyu battles (either after recharging or directly), current_power is updated by subtracting the enemy's power (current_power -= v[i]).

7. Return Result:

• If Abhimanyu successfully traverses through all circles without getting stuck (return 0(false)), the function returns 1(true).

8. Main Function:

• The main function initializes two sets of test cases (v1,a1, b1,p1 and v2,a2, b2,p2).

• It calls the cross_chakravyuh function with these test cases and prints "Yes" if Abhimanyu can cross the Chakravyuha (cross_chakravyuh returns 1(true)) and "No" otherwise.
