package main

import "fmt"

func mySqrt(x int) int {
	ans := 0
	for ans*ans <= x {
		ans++
	}
	return ans - 1
}

func main() {
	fmt.Printf("%d", mySqrt(5))
}
