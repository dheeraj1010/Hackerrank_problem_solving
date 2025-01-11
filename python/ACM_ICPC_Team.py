import math

def teamSubject(person, n , m):
    i=0
    max_subject = 0
    team = 0
    number_of_subject = 0
    for i in range(n-1):
        for j in range(i+1,n):
            for k in range(m):
                if person[i][k]=='1' or person[j][k]=='1':
                    number_of_subject +=1
            if max_subject<number_of_subject:
                max_subject = number_of_subject
                team = 0
            if max_subject == number_of_subject:
                team = team + 1
            number_of_subject = 0

    return max_subject,team






if __name__ == "__main__":
    n,m = map(int,input().split())
    person = []
    for i in range(n):
        stri = input().strip()
        arr = list(stri)
        person.append(arr)


    max_subject, team =teamSubject(person, n, m)
    print(max_subject)
    print(team)



