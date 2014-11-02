def rm_dup(str)
	h ={}
	str.each_char{ |c|
		if h[c]
			h[c] += 1
		else
			h[c] = 1
		end
	}
	return h.keys.join
end

p rm_dup("assssssssaaaaaaaccccbcbddddeee")