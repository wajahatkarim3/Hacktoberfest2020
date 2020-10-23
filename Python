import sys
import math
from tkinter import *


root = Tk()
root.geometry("200x200")
root.title("increment")

global counter
root.counter = 0

def addclick():
   root.counter +=1
   
   
   lbl1['text'] = 'QTY' + str(root.counter)

def subclick():
   root.counter -=1

   if(root.counter<0):
       root.counter = root.counter +1
   

   lbl1['text'] = 'QTY' + str(root.counter)



button = Button(text="Increase",command=addclick,fg="green",bg="white").pack()

lbl1 = Label(root,text="")
lbl1.pack()

button = Button(text="Decrease",command=subclick,fg="green",bg="white").pack()

lbl1 = Label(root,text="")
lbl1.pack()



root.mainloop()
