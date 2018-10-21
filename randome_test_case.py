'''
*	Program to make random test cases
*	made by Shubham Kumar
'''
import random
import time
test=input()
total=test*3
random.seed(time.time())
ls=[]
p=random.randint(1,1000000000000000000)
for i in range(test):
	ls.append(p)
print total
for i in range(test,total):
	a=random.randint(1,1000000000000000000)
	if(a==p):
		a=random.randint(1,1000000000000000000)	
	ls.append(a)
random.shuffle(ls)
for i in ls:
	print i,

	'''
	100 -->300
	adf daf  dafd adfa 


	'''
