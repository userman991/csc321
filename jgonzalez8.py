#Jovanny Gonzalez
#CSC321-40

import random

randNum=random.randint(0,9)
x=0
y=0

print("I picked a number from 0-9, ")
print("guess that number: ")

y=int(input())
print("Your choice is represented by the letter y.")

if y<randNum:
    print("y is less than randNum. You lost.")
elif y>randNum:
    print("y is greater than randNum. You lost.")
else:
    print("y is equal to randNum. You WON!!!")

for i in range(y):
    print("What do you get when you cross a shark with a snowman? Frostbite!")

while x<4:
    print("Favorite Food: Tacos")
    x=x+1
