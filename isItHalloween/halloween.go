package main

import "fmt"

func main() {
	var month, date string
	fmt.Scanln(&month, &date)

	if ((month == "OCT" && date == "31") || (month == "DEC" && date == "25")) {
		fmt.Println("yup")
	} else {
		fmt.Println("nope")
	}
}