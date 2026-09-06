package easy

import "fmt"




func RemoveElement(nums []int, val int) int{
	aux := 0

	for _, valor := range nums {
		fmt.Println(valor)
		if valor != val {
			nums[aux] = valor
			aux++
		}
	}
	return aux
}