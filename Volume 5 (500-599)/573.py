#The Snail

def compute(list_):
    wall = list_[0]
    H = 0
    U = list_[1]
    D = list_[2]
    F_pre = list_[3]/100
    day = 1

    while 1:
        fatigue = U*F_pre*(day-1)
        if U - fatigue < 0:
            pass
        else: 
            H += U - (fatigue) #白天
            if(H > wall):
                print(f"success on day {day}")
                return 0
        H -= D #晚上 
        if(H < 0):
            print(f"failure on day {day}")
            return 0
        day += 1

while 1:
    list_ = list(map(int, input().split(' ')))
    if list_[0] == 0:
        break
    compute(list_)