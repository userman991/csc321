#Jovanny Gonzalez
#CSC321-40
#4-8-2025

def areaRectangle(base, height):
    area=base*height
    return area

def areaCircle(radius):
    areaCircle=3.14*radius*radius
    return areaCircle

x = int(input("Enter base of Rectangle: "))
y = int(input("Enter height of Rectangle: "))

rectangleArea = areaRectangle(x,y)
print("The area of your Rectangle is: ", rectangleArea)

r = int(input("Enter radius of Circle: "))

circleArea=areaCircle(r)
print("The area of your Circle is: ",circleArea)

