## template
n=int(input())
step=0
for i in range(1,n+1):
  step+=i
  kstep=step
  for j in range(i,n+1):
    print(kstep,end=' ')
    kstep+=j
  print()
// 파이썬 정답 c++ 로 다시풀기