def fib(n)
	if n <= 0
		return
	elsif n == 1
		return 1
	elsif n == 2
		return 2
	else
		return fib(n-1)+fib(n-2)
	end	
end

def sum_of_even_fibs(max)
	sum = 0
	for i in 1 .. 1000
		fib = fib(i) 
		if fib > max
			break
		end
		if fib%2 == 0
			sum += fib
		end
	end
	return sum
end

p sum_of_even_fibs(4000000)