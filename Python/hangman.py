import random
print("hangman challenge")

# input 


wordlist=["hacker","bugbountyr","random"]
secret=random.choice(wordlist)
print(secret)
#gan gia tri cho buffer
buffer=[]
i=len(secret)
while i>0:
    buffer.append("_")
    i-=1
#gangiatri cho buffer

guessed=[]
secret_array=[]
count=0
getposition=0
errorcount=0
#chuyen doi secret sang array
for alphabet in secret:
    secret_array.append(alphabet)
#chuyen doi secret sang array
i=100
while i>0:
    if buffer!=secret_array:
        count=0
        print(buffer)
        #input 
        guess=input("plz make a guess:").lower()
        while len(guess) > 1:
            print("a letter only")
            guess=input("plz make a guess:").lower()
        #input

        for letter in secret_array:
        
            if guess==letter:
                getposition=count
                buffer[getposition]=secret_array[getposition]


            count+=1
    print("*") 
    i-=1

print(getposition)
print(buffer)


#how to still guessing ? 

