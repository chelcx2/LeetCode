class Solution:
    def numUniqueEmails(self, emails: list[str]) -> int:
        appear = []
        for mail in emails:
            temp = mail.split('@')
            # print(temp)
            try:
                local = temp[0][:temp[0].index('+')]
            except:
                local = temp[0]
            local = ''.join(list(map(str, [ch for ch in local if ch != '.'])))
            domain = temp[1]
            # print(local)
            if local + '@' + domain not in appear:
                appear.append(local + '@' + domain)
        # print(appear)
        return len(appear)

a = Solution()
print(a.numUniqueEmails(emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]))
