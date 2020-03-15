/*
	Open kattis Statistics: https://open.kattis.com/problems/sevenwonders
	Mahadi Ahmed 2020-03-09
*/
package main

import "fmt"
import "strings"
import "math"

func main() {
	var cardHand string
	fmt.Scanln(&cardHand)
	cards := strings.Split(cardHand, "")
	similarCards := map[string]int{
		"T": 0,
		"C": 0,
		"G": 0,
	}

	for i:=0; i < len(cards); i++ {
		similarCards[cards[i]] += 1 
	}
	t := float64(similarCards["T"])
	c := float64(similarCards["C"])
	g := float64(similarCards["G"])

	min := len(cards)

	for _,i:= range similarCards {
		if min > i {
			min = i
		}
	}

	score := math.Pow(t,2) + math.Pow(c,2) + math.Pow(g,2) + float64((min*7))
	fmt.Println(score)
}

/*
	how many cards of same type**2
	for instance, 4T equals 4^2
	for every TCG add 7 points

	Sample Input 1:
	TCGTTC
	Sample Output 1:
	21

	Sample Input 2:
	CCC
	Sample Output 2:
	9

	Sample Input 3:
	TTCCGG
	Sample Output 3:
	26

	For example, if a player plays 3 Tablet cards, 2 Compass cards and 1 Gear card,
	she gets 3^2+2^2+1^2+7=21

	Example 1:
	TCGTTC
	3^2 + 2^2 + 1^2 + 7 = 21

	Example 2:
	CCC
	2^3 -> 9

	Example 3:
	TTCCGG
	2^2 + 2^2 + 2^2 + 7^2-> 26
	Since we add 7 every time we find a set TCG, we found two sets of TCG so 7^2
*/
