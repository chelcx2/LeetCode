class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        if '.' in queryIP:
            try:
                L = queryIP.split('.')
                assert len(L) == 4
                for x in L:
                    assert 0 <= int(x) <= 255
                    
                    if int(x) != 0:
                        assert x[0] != '0'
                    else:
                        assert x == '0'
                return 'IPv4'
            except:
                return 'Neither'
        elif ':' in queryIP:
            try:
                L = queryIP.split(':')
                assert len(L) == 8
                for x in L:
                    assert 1 <= len(x) <= 4
                    for ch in x:
                        assert ch in [str(i) for i in range(10)] + ['a', 'b', 'c', 'd', 'e', 'f'] + ['A', 'B', 'C', 'D', 'E', 'F']
                return 'IPv6'
            except:
                return 'Neither'
        else:
            return 'Neither'

a = Solution()
print(a.validIPAddress(queryIP = "172.16.254.1"))
print(a.validIPAddress(queryIP = "2001:0db8:85a3:0:0:8A2E:0370:7334"))
print(a.validIPAddress(queryIP = "256.256.256.256"))
print(a.validIPAddress(queryIP = "00.0.0.0"))