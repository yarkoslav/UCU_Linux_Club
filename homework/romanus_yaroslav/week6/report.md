### Week 6 Regular Expressions Homework

### This is a template for the report of 21 problems on [this site](http://regextutorials.com/excercise.html).

### Fork this repository, change this file and send us the link for grading.

### We recommend you (re)watch our presentation, and use a [cheatsheet](./cheatsheet.md) while working on the following problems.

### If you are having problems with figuring out the correct solution, skip it for later, and if you are completely lost, use the hints and try to understand them.

---

### Problem 1: Floating point numbers
```
\d+(\.\d+)
```
### Problem 2: Years before 1990
```
.*19[1-8]\d.*
```
### Problem 3: Hexadecimal colors
```
#.{6}
```
### Problem 4: Grayscale colors
```
#([0-9a-fA-F]{1,2})\1\1
```
### Problem 5: Too long lines
```
.{30,}
```
### Problem 6: Remove repeating words
```
replace (\s+.*)\1 with $1
```
### Problem 7: Match HTML tags
```
<[^>]*>
```
### Problem 8: Cut numbers two digits after floating point
```
replace (\d+\.\d\d)\d+ with $1
```
### Problem 9: Digit commas formatting
```
replace (\d)(?=(\d{3})+\b) with $1,
```
### Problem 10: Match lowercase function declarations
```
function [a-z]\w{2,4}\(\w?\)
```
### Problem 11: Change date formats
```
replace (\d{4})-(\d{2})-(\d{2}) with $3.$2.$1
```
### Problem 12: Validate 24h time format
```
((0|1)\d|2[0-3]):[0-5]\d
```
### Problem 13: Validate AM/PM time format
```
\b((00)|[1-9]):[0-5]\d ((AM)|(PM))
```
### Problem 14: Pascal style to C-style parameters
```
replace ;(?= ) with ,
```
### Problem 15: Change variable initialization
```
replace var\s+(\w*) = new\s+(\w*)(<\w*>)? with $2$3 $1
```
### Problem 16: IPv6 adresses
```
((\d|[a-f]){0,4}:){1,7}[0-9a-f]{1,4}
```
### Problem 17: Validate 32 or 24 bit hexadecimal colors
```
#([0-9a-f][0-9a-f]){3,4}(?![0-9a-f])
```
### Problem 18: Replace operators with function calls
```
too hard
```
### Problem 19: Extract query string from URL
```
\?.*
```
### Problem 20: Extract host from URL
```
http://.*.com
```
### Problem 21: Strings not containing word
```
^(.(?!chocolate))*$
```
