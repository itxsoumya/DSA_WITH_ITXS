
alphaDigits = ["zero","one","two","three","four","five","six","seven","eight","nine"]

def sayDigits(n :int):
    if (n==0):
        return
    sayDigits(int(n/10))
    rem = int(n%10)
    print(alphaDigits[rem],end=" ")

if __name__=='__main__':
    sayDigits(129934)
    print()