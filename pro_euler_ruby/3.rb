def largest_prime(n)
	if n<=1
		return "nothing"
	elsif prime(n)
		return n
	else
		for i in 2..n-1
			if prime(i) && n%i==0
				return largest_prime(n/i)
			end
		end
	end
end

def prime(n)
	if n <= 1
		return false
	elsif n == 2 || n == 3
		return true
	else
		if n%2 == 0 || n%3 == 0
			return false
		else
			for i in 2..n-1
				if n % i == 0
					return false
				end
			end
			return true
		end
	end
end

p largest_prime(13195)
p largest_prime(600851475143)