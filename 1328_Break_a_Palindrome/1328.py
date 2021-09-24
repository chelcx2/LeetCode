class Solution:
    def breakPalindrome(self, palindrome: str) -> str:
        if len(palindrome) < 2:
            return ''
        for i in range(len(palindrome)):
            if palindrome[i] != 'a':
                tmp = palindrome[:i] + 'a' + palindrome[i + 1:]
                if tmp != tmp[::-1]:
                    return tmp
        return palindrome[:-1] + 'b'