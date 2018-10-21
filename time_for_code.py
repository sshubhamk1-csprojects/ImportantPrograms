'''
*	This snippet is used to measure the time taken to complete the code
*	Made by Shuhbam Kumar
'''
import time
start = time.clock()
l=0
for i in range(10000000):
	l+=1
print time.clock()-start
