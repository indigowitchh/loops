#1---------------------------------------------------------------------------------------------
for i in range (-20,45,5):
    print(i)
    
#2---------------------------------------------------------------------------------------------
for j in range(2):
    for k in range(5):
        print("*")

#3--------------------------------------------------------------------------------------------
e = 50
while(e >0):
    print(e)
    e-=10

#4--------------------------------------------------------------------------------------------
choice = input("Do you want a cookie? Type yes or q to quit!")
while choice != 'q':
    choice = input("Do you want another?")
    print("Cookie!")
else:
    print("Goodbye!")

    
