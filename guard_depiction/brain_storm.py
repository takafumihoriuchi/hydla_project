import numpy as np
import matplotlib.pyplot as plt


def main():
	
	# load hydla file as string
	hydla_file_dir = "hydla_codes/"
	hydla_file_name = "bouncing_particle.hydla"
	hydla_file = open(hydla_file_dir + hydla_file_name, 'r')
	hydla_code = hydla_file.read()
	print(hydla_code)

	# parse guard constraint and store in guard_list
	guard_list = []
	arrow_idx = 0
	while True:
		# HACK: improve the procudure of parsing
		# current implementation: parse between '(' and '=>' (NOT SUFFICIENT)
		# BOUNCE(y) <=> [](y- = 0 => y' = -y'-).
		arrow_idx = hydla_code.find(" =>", arrow_idx + 1)
		if arrow_idx == -1:
			break
		for i in range(arrow_idx, -1, -1):
			if hydla_code[i] == '(':
				left_parentheses = i
				break
		guard = hydla_code[left_parentheses + 1 : arrow_idx + 1]
		# cleanse format
		guard_cleansed = guard.replace(' ', '').replace('-', '')
		guard_list.append(guard_cleansed)
	print(guard_list)

	for each_guard in guard_list:
		
		# transform equation from string-form to variable-form
		# HACK: not sufficient to general equations
		equal_symbol = each_guard.find('=')
		left_side = each_guard[:equal_symbol]
		right_side = each_guard[equal_symbol+1:]
		vars()[left_side] = float(right_side)

		# plot guard constrains
		# HACK: the current code is not plotting the equation
		t = np.arange(0, 5, 0.1)
		left_side = [right_side for i in t]

		plt.plot(t,left_side)
		plt.show()



if __name__ == '__main__':
	main()
