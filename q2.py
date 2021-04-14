for t in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    k=sum(a)
    c=0
    for t in a:
        if not t:
            c+=1
    if k-100<0:
        print('NO')
    elif k-100==0:
        print('YES')
    else:
        if n-c<k-100+1:
            print('NO')
        else:
            print('YES')