# coding: utf-8
# OpenKattis problem A new alphabet : https://open.kattis.com/problems/anewalphabet
# Mahadi 29-11-17

import sys
from enum import Enum 
#import enum

class newAlphabet(Enum):
	a = "@"
	b = "8"
	c = "("
	d = "|)"
	e = "3"
	f = "#"
	g = "6"
	h = "[-]"
	i = "|"
	j = "_|"
	k = "|<"
	l = "1"
	m = "[]\/[]"
	n = "[]\[]"
	o = "0"
	p = "|D"
	q = "(,)"
	r = "|Z"
	s = "$"
	t = "']['"
	u = "|_|"
	v = "\/"
	w = "\/\/"
	x = "}{"
	y = "`/"
	z = "2"

newAlphabetDictionary = {"a":newAlphabet.a.value, "b":newAlphabet.b.value, "c":newAlphabet.c.value, "d": newAlphabet.d.value, "e":newAlphabet.e.value, "f":newAlphabet.f.value, "g":newAlphabet.g.value, "h":newAlphabet.h.value, "i":newAlphabet.i.value, "j":newAlphabet.j.value, "k": newAlphabet.k.value, "l":newAlphabet.l.value, "m":newAlphabet.m.value, "n":newAlphabet.n.value, "o":newAlphabet.o.value, "p":newAlphabet.p.value, "q": newAlphabet.q.value, "r": newAlphabet.r.value, "s": newAlphabet.s.value, "t":newAlphabet.t.value, "u":newAlphabet.u.value, "v":newAlphabet.v.value, "w": newAlphabet.w.value, "x": newAlphabet.x.value, "y":newAlphabet.y.value, "z":newAlphabet.z.value}

iString = input()
sentence = ""
for word in iString:
	sentence += word.lower()
printString = ""

for word in sentence:
	if word in newAlphabetDictionary:
		printString += str(newAlphabetDictionary.get(word))
	else:
		printString += word

print(printString)



