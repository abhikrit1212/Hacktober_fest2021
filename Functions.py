#In a big project we divide the task into smaller tasks.
#So we keep all lines related to a task and make it reusable.
#That is where we use functions.
def greet():
    print("Hello")
    print("Good Morning")
#these three lines are called suite
greet()    
#this is function calling
def add(a,b):
    x=a+b
    print(x)
    return x
add(4,5)
result=add(4,5)
print(result)
def add_sub(a,b):
    x=a+b
    c=a-b
    print(x)
    return x,c                                    #can return even two values
result1,result2=add_sub(5,4)
print(result1)
print(result2)
