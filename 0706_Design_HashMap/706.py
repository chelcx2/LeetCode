class MyHashMap:

    def __init__(self):
        self.D = {}

    def put(self, key: int, value: int) -> None:
        self.D[key] = value

    def get(self, key: int) -> int:
        try:
            return self.D[key]
        except:
            return -1

    def remove(self, key: int) -> None:
        self.D.pop(key, None)


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)