class Node
	def initialize(val, l, r)
		@val = val
		@left = l
		@right = r
	end
	def val
		return @val
	end
	def left
		@left != nil ? @left : nil
	end
	def right
		@right != nil ? @right : nil
	end
end

class Orderer
	def self.in_order(node)
		if node != nil
			self.in_order(node.left)		
			p node.val 
			self.in_order(node.right)
		end
	end
end

node1 = Node.new(8, nil, nil)
node2 = Node.new(10, node1, nil)
node3 = Node.new(13, nil, nil)
node4 = Node.new(25, nil, nil)
node5 = Node.new(20, node3, node4)
node6 = Node.new(15, node2, node5)

Orderer.in_order(node6)