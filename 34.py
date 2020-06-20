def findFact():
	facts = [1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880]
	limit = 362880 * 9
	for i in xrange(0, limit):
		total = 0
		stringI = str(i)
		for j in stringI:
			total += facts[int(j)]
		if (total == i):
			print i