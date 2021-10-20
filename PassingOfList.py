#return the number of even and odd numbers
lst=[20,25,34,65,78,89]
def count(lst):
    even=0
    odd=0
    for i in lst:
        if i%2==0:
            even+=1
        else:
            odd+=1
    return even,odd
even,odd=count(lst)  
print(even)
print(odd)  
print("Even : {} and odd : {}".format(even,odd))    