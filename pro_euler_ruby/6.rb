def dif_sum_sq(n)
	if n<=1
		return
	end
	sum = (1+n)*n/2
	dif = 0
	for i in 1 .. n
		dif += (sum-i)*(sum+i)
	end
	dif -= sum*sum*(n-1)
	return dif
end

p dif_sum_sq(100)