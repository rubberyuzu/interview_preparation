def is_prime?(n, primes)
	if n<=1
		return false
	elsif n == 2 || n == 3
		return true
	else
		primes.each do |p|
			if n%p ==0
				return false
			end
		end
		return true
		# if n%2 == 0 || n%3 == 0
		# 	return false
		# end
		# for i in 2 .. n-1
		# 	if n%i == 0
		# 		return false
		# 	end
		# end
		return true
	end
end

def nth_prime(n)
	if n<=0
		return
	end
	primes = []
	count = 0
	num = 1
	while count<n
		if is_prime?(num, primes)
			primes << num
			count += 1
		end
		num += 1
	end
	return num-1
end

p nth_prime(10001)