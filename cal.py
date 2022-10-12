from tkinter import *

root = Tk()
root.title("PK")

def show(n):
 global exp
 exp = exp+n
 opr.set(exp)
 
def clear():
 global exp
 opr.set(" ")
 exp = ""

def calculate():
 global exp
 eq = eval(exp)
 opr.set(eq)


exp = ""
# lbl = Label(root, text = "Welcome to our GUI .", fg = "green", bg = "red", font = ("times new roman", 20)).pack(side = LEFT)  #grid() # place()
opr = StringVar()
e = Entry(root, textvariable = opr, font = ("times new roman",20)).grid(row =0 , column = 0, columnspan = 6)

btn = Button(root, text = "C", width = 4, command = lambda:clear()).grid(row =1 , column = 1)
btn = Button(root, text = "<-", width = 4).grid(row =1 , column = 2)
btn = Button(root, text = "%", width = 4, command = lambda:show("")).grid(row =1 , column = 3)
btn = Button(root, text = "÷", width = 4, command = lambda:show("/")).grid(row =1 , column = 4)

btn = Button(root, text = "7", width = 4, command = lambda:show("7")).grid(row =2 , column = 1)
btn = Button(root, text = "8", width = 4, command = lambda:show("8")).grid(row =2 , column = 2)
btn = Button(root, text = "9", width = 4, command = lambda:show("9")).grid(row =2 , column = 3)
btn = Button(root, text = "x", width = 4, command = lambda:show("*")).grid(row =2 , column = 4)

btn = Button(root, text = "4", width = 4, command = lambda:show("4")).grid(row =3 , column = 1)
btn = Button(root, text = "5", width = 4, command = lambda:show("5")).grid(row =3 , column = 2)
btn = Button(root, text = "6", width = 4, command = lambda:show("6")).grid(row =3 , column = 3)
btn = Button(root, text = "-", width = 4, command = lambda:show("-")).grid(row =3 , column = 4)

btn = Button(root, text = "1", width = 4, command = lambda:show("1")).grid(row =4 , column = 1)
btn = Button(root, text = "2", width = 4, command = lambda:show("2")).grid(row =4 , column = 2)
btn = Button(root, text = "3", width = 4, command = lambda:show("3")).grid(row =4 , column = 3)
btn = Button(root, text = "+", width = 4, command = lambda:show("+")).grid(row =4 , column = 4)

btn = Button(root, text = "0", width = 12, command = lambda:show("0")).grid(row =5 , column = 1, columnspan = 2)
btn = Button(root, text = ".", width = 4, command = lambda:show(".")).grid(row =5 , column = 3)
btnl = Button(root, text = "=", width = 4, command = lambda:calculate()).grid(row =5 , column = 4)

root.bind('1',lambda event:show("1"))
root.bind('2',lambda event:show("2"))
root.bind('3',lambda event:show("3"))
root.bind('4',lambda event:show("4"))
root.bind('5',lambda event:show("5"))
root.bind('6',lambda event:show("6"))
root.bind('7',lambda event:show("7"))
root.bind('8',lambda event:show("8"))
root.bind('9',lambda event:show("9"))
root.bind('<+>',lambda event:show("+"))
root.bind('-',lambda event:show("-"))
root.bind('<*>',lambda event:show("*"))
root.bind('/',lambda event:show("/"))
root.bind('<Return>',lambda event:calculate())
# btn = Button(root, text = "ok", width = 4).grid(row =5 , column = 4)
root.mainloop()
