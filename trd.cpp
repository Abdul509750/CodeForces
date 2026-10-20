// segement trees
//we have the four functions in the segment trees



/*
taking input while the enter is not pressed as the 
integer
int main()
        while (cin >> x)
        {
            // takes the input as a vector number until the 
            // enter is pressed
            input2.push_back(x);
        }
*/
/*
=we also today forgot the accessing of the the hash maps and its keys and  values
*/
/*
ll claculateSum(ll number){
    // we here will calculate the digits sum
    // worst case complexity is 10e9 cz ai can be 10e9
    ll sum = 0;
    // surely it will give TLE is there any better way to calculate the sum of digits of a number of len l
    while(number > 0){
        auto remainder = number % 10; // take out the last digit
        sum += remainder;
        number/=10;
    }
    return sum;
}
    IMPORTANT RECURRANCE REATION FOR DIGIT SUM 
    WE HAVE THIS dp[i] = dp[i/10] + i % 10
*/
/*

SEGEMENT TREESS
void build(vector<ll>& segtree, vector<ll>& array,
           ll node, ll start, ll end) {
    if (start == end) {
        segtree[node] = array[start];
        return;
    }

    auto mid = (start + end) / 2;

    build(segtree, array, 2 * node + 1, start, mid);
    build(segtree, array, 2 * node + 2, mid + 1, end);

    segtree[node] = segtree[2 * node + 1]
                  + segtree[2 * node + 2];
}

void update(vector<ll>& segtree, ll node, ll start, ll end,
            ll pos, ll val) {
    if (start == end) {
        segtree[node] = val;
        return;
    }

    auto mid = (start + end) / 2;

    if (pos <= mid) {
        update(segtree, 2 * node + 1, start, mid, pos, val);
    } else {
        update(segtree, 2 * node + 2, mid + 1, end, pos, val);
    }

    segtree[node] = segtree[2 * node + 1]
                  + segtree[2 * node + 2];
}

IMPORTANT CONCEPTS
okay so if we havent allocated the n size map still we can do map[n] ? YES
dp.count(number) ==> in maps it checks if the value is allocated or not
using sets as an iterator and the major erase and the insert functions of sets
*/