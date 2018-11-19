'''
*	Program to sort an array in decreasing order of their of their of frequency
* 	program made by Shubham Kumar
*	Change the list a according to your problem
* 	Asked in Amcat
'''
a=[1,2,3,1,2,3,1,2,3,3,5]
print a
dic={}
n=len(a)
def Comp(x,y):
	if(x[1]>y[1]):
		return -1
	elif(x[2]<y[2]):
		return -1
	return 1
for i in range(n):
	if(dic.get(a[i],0)==0):
		dic[a[i]]=[1,i]
	else:
		dic[a[i]][0]+=1
ls=[]
for i in dic:
	ls.append([i,dic[i][0],dic[i][1]])
ls= sorted(ls,cmp=Comp)
for i in ls:
	for j in range(i[1]):
		print i[0],
print ""
