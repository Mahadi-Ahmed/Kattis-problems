/*
	Mahadi Ahmed 2020-03-09
	https://open.kattis.com/problems/qaly
*/
package main

import "fmt"
//import "strconv"

func main() {
	var n int
	fmt.Scanln(&n)
	periods := make([]float64, n)

	for i := 0; i < n; i++ {
		var v1, v2 float64
		fmt.Scanln(&v1, &v2)
		product := v1 * v2

		periods = append(periods, product)
	}

	var qaly float64
	for i := 0; i < len(periods); i++ {
		qaly += periods[i]
	}

	fmt.Println(qaly)

	// strconv.FormatFloat(qaly, 'f', -1, 64)
	// s := fmt.Sprintf("%.3f", qaly)
	// fmt.Println(s)

}


// Sample Input

/*
	5
	1.0 12.0
	0.7 5.2
	0.9 10.7
	0.5 20.4
	0.2 30.0
*/