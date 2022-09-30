def divide(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        print("division by zero is not possible in python")
    except ValueError:
        print "Enter the values"
    else:
        print("result is", result)
    finally:
        print("The program is completed")
x=input('enter a value')
y=input('enter a value')
divide(x,y)
