/*
	Open kattis problem Faktor: https://open.kattis.com/problems/sortofsorting
	Mahadi 10-03-20
*/
package main

import (
	"fmt"
)

func main() {
	var setSize int = -1
	var student string

	for setSize != 0 {
		fmt.Scanln(&setSize)
		if setSize == 0 {
			break
		}

		students := make([]string, setSize)

		for i := 0; i < setSize; i++ {
			fmt.Scanln(&student)
			students[i] = student
		}
		sortedStudents := (solve(students))
		for i := 0; i < len(sortedStudents); i++ {
			fmt.Println(sortedStudents[i])
		}
		fmt.Print("\n")
	}
}

func solve(students []string) []string {

	for i := 0; i < len(students)-1; i++ {

		for j := i + 1; j < len(students); j++ {
			s1 := students[i]
			s2 := students[j]
			if s2[0:2] < s1[0:2] {
				temp := students[i]
				students[i] = students[j]
				students[j] = temp
			}
		}
	}
	return students
}
