class ParkingSystem:

    def __init__(self, big: int, medium: int, small: int):
        self.size = [big, medium, small]

    def addCar(self, carType: int) -> bool:
        if self.size[carType - 1] > 0:
            self.size[carType - 1] -= 1
            return True
        return False


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)

obj = ParkingSystem(1, 1, 0)
for i in [1, 2, 3, 1]:
    print(obj.addCar(i))