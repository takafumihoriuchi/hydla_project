

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
	while arrow_idx != -1:
		# HACK: improve the procudure of parsing
		# current implementation: parse between '(' and '=>' (NOT SUFFICIENT)
		# BOUNCE(y) <=> [](y- = 0 => y' = -y'-).
		arrow_idx = hydla_code.find("=>", arrow_idx + 1)
		
		guard = 
		guard_list.append()

	# plot guard constrains


if __name__ == '__main__':
	main()