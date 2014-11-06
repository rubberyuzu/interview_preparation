def sum_of_three_five_multiples(n)
	if n<=1
		return
	else
		sum = 0
		for i in 1 .. n-1 do 
			if i%3 == 0||i%5 == 0
				sum += i
			end
		end
		return sum
	end
end

p sum_of_three_five_multiples(1000)