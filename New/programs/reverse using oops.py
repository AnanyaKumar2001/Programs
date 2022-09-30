class rev:
    def __init__(self,num):
        self.num = num
    def reverse(self):
        a = 0
        while self.num>0:
            r = self.num%10
            a = a*10 + r
            self.num = self.num//10
        return a

rev1 = rev(int(input()))
print(rev1.reverse())