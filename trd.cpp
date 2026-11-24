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
sort in the descending order of vector sort(v.begin , v.end() , greater<ll>());
### Set + `lower_bound` Optimization

**Concept:** Maintain a `set` of indices that still need updates. Use `lower_bound` to skip irrelevant indices and process only active indices inside a query range.

```cpp
auto it = active.lower_bound(l - 1);

while(it != active.end() && *it < r){
    ll i = *it;
    input[i] = claculateSum(input[i]);

    if(input[i] < 10)
        it = active.erase(it); // erase and advance
    else
        ++it;
}
```

**Explanation:**
- `lower_bound(l - 1)`: finds the first active index at or after the 0-based left boundary.
- `*it < r`: ensures the index is inside the 1-based range `[l, r]`.
- `active.erase(it)`: removes an index that needs no future updates and returns the next iterator.
- `++it`: advances when the index remains active.

**Use case:** Range queries where some indices become permanently irrelevant, allowing future queries to skip them.

ACCESSING MAP FIRST AND THE SECOND ELEMENT
auto it = map.begin
it->first (key) ,  it->second (value);



*/
// TAKING THE ARRAY with negative and positive elements sum
// kadane's algorithm
// how it works at each point it checks wether to extends the sum or take the sum of the 
// current element
// sum = max(input[i] , sum + input[i]);
// in this way it handles both the negative and the positive element and finds 
// the max subsequence array sum problem (1899C.cpp) dated (10/27/2026)

// problem 1899B dated -- 11/6/2026
//23 PREFIX SUM OF ARRAY for(int i = 0; i < n;i ++){pref[i + 1] = pref[i] + input[i]}
// ACCESSING MIN AND MAX OF AN ARRAY *min_element & *max_element --> *max_element(input.begin(), input.end())
// problem 1891 -- 11/8/2026
// several findings in the time constraint problem today i solved there must be some condition at which we can stop the 
// condition in the loop like in this problem they said only apply the certain operation when the particualr condition y is met 
// so there must be a case when this will not happen and u have just to find that particular condition either by sorting 
// by assuming anything any assumption or by anything u just have to find that

// problem 1850E .... dated 11/16/2026
// in order to avoid the overflow it is recommended to always use the 
//    ll mid = start + (end - start) / 2; this mid calculation
// the other mid calculation gives the overflow in bigger things so devised to use this
// formulae for calculating the succesive sums in the array sum
// sn = prevsum + n * newnumber_to_be_added
// if we wanna add some constant to some specific range of the element then 
// snew = prevsum + (R-L+1) X NEWNUMBER_TO_BE_ADDED
// problems from assignment --- dated 11/15/2026
// in this problem we had some concepts of the simple dijkstras , dijkstra with state expansion
// kruskal's algo (use of dsu) in kruskal 
/* DSU
// vector<ll> parents(n);
// vector<ll>sizey(n);
// void initialization(){
//  for(int i = 0; i < n; i++){
//         parents[i] = i;
//  }
//    
//}
     // we need the unite function
     unite(ll a , ll b){
        a  = find(a);
        b = find(b);
        if(a == b){
        return;
        }
     }
*/