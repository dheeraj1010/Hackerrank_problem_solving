def fine(d1, m1, y1, d2, m2, y2):
    result = 0
    if y1>y2:
        result = 10000
    elif y1<y2:
        result = 0
    else:
        if m1>m2 :
            result = (m1-m2)*500
        elif m1<m2:
            result = 0    
        else:
            result = (d1-d2)*15
    if result<0:
        result = 0        
    return result                
        




if __name__ == "__main__":
    return_date = input().split()
    expected_date = input().split()
    d1 = int(return_date[0])
    m1 = int(return_date[1])
    y1 = int(return_date[2])

    d2 = int(expected_date[0])
    m2 = int(expected_date[1])
    y2 = int(expected_date[2])

    result = fine(d1, m1, y1, d2, m2, y2)
    print(result)