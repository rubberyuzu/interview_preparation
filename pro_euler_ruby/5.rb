def evenly_divisible(n)
	prime_count = {}
	primes = []
	for i in 1 .. n
		if is_prime?(i)
			primes << i
		end
	end
	for i in 1 .. n
		primes.each do |p|
			count = 0
			num = i
			while(num%p==0)
				count+=1
				num /= p
			end
			if prime_count[p]==nil
				prime_count[p] = count
			elsif prime_count[p]<count
				prime_count[p] = count
			end
		end
	end
	result = 1
	prime_count.each do |k, v|
		v.times do
			result *= k
		end
	end
	return result
end

def is_prime?(n)
	if n<=1
		return false
	elsif n == 2
		return true
	else
		for i in 2..n-1
			if n%i == 0
				return false
			end
		end
		return true
	end
end

p evenly_divisible(20)