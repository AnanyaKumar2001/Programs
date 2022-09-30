try:
    f = open('ananya.txt', 'r')
    print f.read()
    f.close()
except IOError:
    print('file not found')
