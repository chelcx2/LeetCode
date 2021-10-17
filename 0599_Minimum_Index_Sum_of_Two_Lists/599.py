class Solution:
    def findRestaurant(self, list1: list[str], list2: list[str]) -> list[str]:
        least_idx_sum = 2000
        ans = []
        for i in range(len(list1)):
            res1 = list1[i]
            if res1 in list2:
                i_sum = i + list2.index(res1)
                if i_sum == least_idx_sum:
                    ans.append(res1)
                elif i_sum < least_idx_sum:
                    ans = [res1]
                    least_idx_sum = i_sum
        return ans

a = Solution()
print(a.findRestaurant(list1 = ["Shogun","Tapioca Express","Burger King","KFC"], \
                       list2 = ["Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"]))
print(a.findRestaurant(list1 = ["Shogun","Tapioca Express","Burger King","KFC"], \
                       list2 = ["KFC","Shogun","Burger King"]))
print(a.findRestaurant(list1 = ["Shogun","Tapioca Express","Burger King","KFC"], \
                       list2 = ["KFC","Burger King","Tapioca Express","Shogun"]))
print(a.findRestaurant(list1 = ["Shogun","Tapioca Express","Burger King","KFC"], \
                       list2 = ["KNN","KFC","Burger King","Tapioca Express","Shogun"]))
print(a.findRestaurant(list1 = ["KFC"], list2 = ["KFC"]))