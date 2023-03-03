class UserMainCode(object):
    @classmethod
    def weightOfString(cls, input1, input2):
        '''
        input1 : string
        input2 : int

        Expected return type : int
        '''
        ans = 0
        for i in input1.lower():
            ans += 0 if not i.isalpha() else ord(i) - 96 if input2 else 0 if i in ['a', 'e', 'i', 'o', 'u']  else ord(i) - 96
        return ans