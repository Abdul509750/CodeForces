"""If Allah’s decree has drawn the line,
I trust His wisdom and design.
Through every trial, His mercies shine;
I walk this path by will divine.
 
I cannot grasp what lies unseen,
Nor know what every test may mean.
But faith keeps heart and spirit clean,
And Allah knows what might have been.
 
No worldly race defines my worth,
For every soul returns from earth.
Through darkest nights and days of mirth,
The Qur’an guides me from my birth.
 
When right and wrong seem hard to see,
I turn to Allah faithfully.
In prayer, my restless heart breaks free
Through zikr comes tranquillity.
 
The grace I thought I’d never know
Through Allah’s mercy came to grow.
With sabr and trust, my heart will show
That after hardship, ease will flow.
"""
#dp/greedy/constructive algoss
import sys

def Solve(n)->[int , []]:
    result = []
    
    # start from base and when we get the repetitive just add that into the last numbe we got
    # if we have n = 1000 i dont think so the execution time will exceed 256ms
    # worst case will be here when n = 1000 then 1 + 2 + 3 + ..... + 44 = 44(45)/2 so the loop will run approx 0(sqroot(n)) 
    i = 1
    sum = 0
    while(True):
    # add the numbers so the efffiecient way is that add the numbers until we are left with 10
        difference = 0
        if i + sum > n:
        # take difference of the sum from n and add that number into the last number in the list
           difference = n - sum
           # add it into the last number
           result[-1]+=difference
           break
        #else
        sum += i
        result.append(i)
        i+=1

    return len(result) , result


# main
n = int(sys.stdin.readline())
number , listy = Solve(n)
print(number)
for i in range (len(listy)):
    print(listy[i] , end=" ")
   