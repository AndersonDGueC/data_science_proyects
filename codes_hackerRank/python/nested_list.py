######atgreenbay#####

if __name__ == '__main__':
	students=[]
	for _ in range(int(input())):
		name = input()
		score = float(input())
		students.append([name, score])
	#print(students)		

	#order with sort
	new_students=sorted(students, key=lambda x: x[1], reverse=False)
	#print(new_students)		

	#getting scores with nested list comprehensions
	scores=[elem[1] for elem in new_students]
	scores=list(dict.fromkeys(scores))
	#scores=list(set(scores))
	#print(scores)

	#I got second value lowest
	scores_slw=scores[1]

	#apply conditional in list comprehensions
	names=[elem[0] for elem in new_students if elem[1]==scores_slw]

	#Sorting name
	names=sorted(names)

	#reading array
	for i in names:
		print(i)	
