"""
Programa fizzbuzz en python 
de 1 al 30
Autor: Diana Tadeo
"""
for i in range(0,31):
	if i%3==0 and i%5==0:
		print 'fizzbuzz'
	elif i%3==0:
		print 'fizz'
	elif i%5==0:
		print 'buzz'
	else:
		print i
