#Python3

def zeros(s):
	for y in range(0,len(s)):
		if(s[y]!='0'):
			return y;

cases = input()
for x in range(0,int(cases)):
	ent = input()
	a,b = ent.rsplit(" ")
	a = a[::-1]
	b = b[::-1]
	c = str(int(a)+int(b))
	h = zeros(c[::-1])
	xx = c[::-1]
	print(xx[h::])
