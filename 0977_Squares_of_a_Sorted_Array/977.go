package main

import (
	"fmt"
	"sort"
)

func sortedSquares(nums []int) []int {
	var ans []int
	for _, i := range nums {
		ans = append(ans, i*i)
	}
	// for _, i := range ans {
	// 	fmt.Println(i)
	// }
	sort.Ints(ans)
	return ans
}

func main() {
	nums := [5]int{-4, -1, 0, 3, 10}
	for _, i := range sortedSquares(nums[:]) {
		fmt.Println(i)
	}
}
