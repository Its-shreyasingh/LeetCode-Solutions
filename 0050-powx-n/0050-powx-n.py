class Solution:
    def posPow(self, x: float, n: int) -> float:
        if(n==0):
            return 1
        a=self.posPow(x,n//2)
        if(n%2==0):
            return a*a
        else:
            return a*a*x
    def myPow(self, x: float, n: int) -> float:
        if(n>=0):
            return self.posPow(x,n)
        else:
            return 1/self.posPow(x,n*(-1))