#hackerRank find score runner
if __name__ == '__main__':
	n = int(input())
	arr = map(int, input().split())
	
	score=sorted(set(arr), reverse=True)[1]
	print(score)

