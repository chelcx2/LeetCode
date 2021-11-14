import itertools as it
class CombinationIterator:

    def __init__(self, characters: str, combinationLength: int):
        self.L = []
        for comb in list(it.combinations(characters, combinationLength)):
            self.L.append(''.join(sorted(comb)))

    def next(self) -> str:
        return self.L.pop(0)

    def hasNext(self) -> bool:
        return bool(self.L)


# Your CombinationIterator object will be instantiated and called as such:
# obj = CombinationIterator(characters, combinationLength)
# param_1 = obj.next()
# param_2 = obj.hasNext()