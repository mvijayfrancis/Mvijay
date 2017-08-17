  name "counter
  org 100h	 
  jmp start 
  str1 db 'abcd4234jkl4234mnop qrstvuwxyz',  
  start: lea bx, str1 ; load address of string.
	mov ax, 0 ; reset counter. 
	compare: cmp [bx], 0 ; is it end of string?
	je done ; if zero, then it's the end.
	cmp [bx], '0'
	b go
  cmp [bx], '9'
	ja go
	inc ax ; count char.
	go: inc bx ; next memory position in string.
	jmp compare
	done:
	; wait for any key press....
	mov ah, 0
	int 16h
	ret
