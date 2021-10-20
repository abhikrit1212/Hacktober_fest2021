a=10 
print(id(a))                                                     #global variable
print(a)
def something():
    global  a                                              #to mention that we are changing value of global varibale a
    # a=15                                                   local variable
    print(a)                                               #inside function preference will be given to local variable
    x=globals()['a']                                           #it will give address to a global variable named a
    print(id(x))                                           #both a and x will have same id
    globals()['a']=15                                      #this is how we change value of global variable of same name as of a local variable
something()  
print(a)   
#we can access a global variable inside               