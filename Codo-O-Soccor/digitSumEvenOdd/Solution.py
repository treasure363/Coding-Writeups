# Read only region start
class UserMainCode(object):
    @classmethod
    def EvenOddDigitsSum(cls, input1, input2):
        '''
        input1 : int
        input2 : string
        
        Expected return type : int
        '''
        # Read only region end
        # Write code here
        ans = 0
        flag = not input2 == "even"
        while(input1):
            d = input1 % 10
            ans += d if d%2==flag else 0
            input1 //= 10
        return ans
