package main

import "fmt"

func flipAndInvertImage(image [][]int) [][]int {
	var ans [][]int
	for i := 0; i < len(image); i++ {
		var tmp []int
		for j := len(image[i]) - 1; j >= 0; j-- {
			if image[i][j] == 1 {
				tmp = append(tmp, 0)
			} else {
				tmp = append(tmp, 1)
			}
		}
		ans = append(ans, tmp)
	}
	return ans
}

func main() {
	im1 := [][]int{
		{1, 0, 0},
		{1, 0, 1},
		{0, 0, 0},
	}
	im2 := [][]int{
		{1, 1, 0, 0},
		{1, 0, 0, 1},
		{0, 1, 1, 1},
		{1, 0, 1, 0},
	}
	fmt.Println(flipAndInvertImage(im1))
	fmt.Println(flipAndInvertImage(im2))

}
