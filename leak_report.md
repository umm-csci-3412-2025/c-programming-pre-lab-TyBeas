# Leak report

the leak problem that I found in checkwhitespace.c was uncleaned passed pointer.
What I will do is free the memory at the end of the code.
There was also 8 leaks in the test folder so we just have to add a variable.
We can use the varible to run the test and this should fix the leaks when we add these two solutions.