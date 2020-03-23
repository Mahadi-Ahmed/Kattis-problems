/*
  https://open.kattis.com/problems/speedlimit
*/
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var setSize int
	amountOfLinesRead := 0
	var mph, eTime int

	for amountOfLinesRead != 10 {
		fmt.Scanln(&setSize)
		if setSize == -1 {
			break
		}
		miles := make([]int, setSize)
		hours := make([]int, setSize)

		for i := 0; i < setSize; i++ {
			fmt.Scanln(&mph, &eTime)
			miles[i] = mph
			hours[i] = eTime
		}
		amountOfLinesRead += 1

		fmt.Println(speedLimit(miles, hours), "miles")
	}
}

func speedLimit(miles, hours []int) (totDistance string) {
	r := 0
	m := 0
	h := 0

	for i := len(miles) - 1; i > 0; i-- {
		h = hours[i] - hours[i-1]
		m = miles[i]
		r += h * m
	}
	r += miles[0] * hours[0]

	totDistance = strconv.Itoa(r)
	return totDistance
}
