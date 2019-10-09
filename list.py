def add(x):
    x = list()
    for i in range(0, 5):
        n = input("Enter an item = ")
        x.append(n)
    return x
s = add(1)
d = add(2)
print("Son = ", s)
print("Daughter = ", d)
y = list()
for a in range(-len(s),0,1):
    if s[a] in d:
        y.append(s[a])
        d.remove(s[a])
        s.remove(s[a])
        a = a - 1
print(y, s, d)
