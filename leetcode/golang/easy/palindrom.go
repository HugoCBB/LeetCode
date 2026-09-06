package easy


func Is_palindrome(s string) bool {
	aux := len(s) - 1
	for _, itens := range s {
		if itens != rune(s[aux]) {
			return false
		} 
		aux --
	}
	
	return  true
}