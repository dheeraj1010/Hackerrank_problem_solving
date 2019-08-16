import math
def number_of_likes(days):
	like = 0
	people = 5
	while days>0:
		days = days-1
		like = like + math.floor(people/2)
		people = (math.floor(people/2))*3
	return like	




if __name__ == "__main__":
	days = int(input())
	likes = number_of_likes(days)
	print(likes)
