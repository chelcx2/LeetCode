class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.L = []

    def push(self, val: int) -> None:
        self.L.append(val)

    def pop(self) -> None:
        self.L.pop()

    def top(self) -> int:
        return self.L[-1]

    def getMin(self) -> int:
        return min(self.L)


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()


# Input
# ["MinStack","push","push","push","getMin","pop","top","getMin"]
# [[],[-2],[0],[-3],[],[],[],[]]

# Output
# [null,null,null,null,-3,null,0,-2]

result = []
obj = MinStack()
result.append(None)
result.append(obj.push(-2))
result.append(obj.push(0))
result.append(obj.push(-3))
result.append(obj.getMin())
result.append(obj.pop())
result.append(obj.top())
result.append(obj.getMin())

print(result)
