try:
    a,b=2,0
    c=a/b
except ZeroDivisionError:
    print "Division is not possible wih zero"
except ValueError:
    print "Enter values"
except:
    print "I don't know"
else:
    print c
finally:
    print "This is final block"
