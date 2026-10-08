"""
If Allah’s decree has drawn the line,
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
from collections import deque

t = int(input())

while t:
    n = int(input())
    s = input()

    q = deque()
    missed = []

    for i in range(n):
        document = i + 1

        if s[i] == '1':
            q.append(document)

        elif s[i] == '2':
            if q:
                q.pop()
                missed.append(document)
            # else current document is printed

        elif s[i] == '3':
            # current document is printed
            pass

    while q:
        document = q.pop()
        missed.append(document) # anything left
        
    missed.sort()

    print(len(missed))
    print(*missed)

    t -= 1