def is_palindrome?(n)
	if n<=0
		return false
	else
		n = n.to_s
		len = n.length
		for i in 0 .. len/2
			if n[i] != n[len-1-i]
				return false
			end
		end
		return true
	end
end

def largest_palindrome(d)
	if d<=0
		return
	end
	largest = 1
	d.times do
		largest *= 10
	end

	largest -= 1
	smallest = (largest+1)/10
	products = []
	for i in largest.downto(smallest)
		for j in largest.downto(smallest)
			product = i*j
			if is_palindrome?(product)
				products << product
			end
		end
	end
	return products.max
end
p is_palindrome?(9801)
p largest_palindrome(3)
