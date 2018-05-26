import time


class Environment(object):
	def __init__(self, gravity=9.8, air_r=0.0):
		self.g = gravity
		self.air_r = air_r


class Ball(Environment):
	def __init__(self, init_x=0.0, init_vx=0.0, init_y=10.0, init_vy=0.0, e=0.8):
		self.x = init_x
		self.vx = init_vx
		self.y = init_y
		self.vy = init_vy
		self.e = e

	def simulate(self, t_limit):
		t_start = time.time()
		t_elapsed = time.time() - t_start
		while(time.time() - t_start < t_limit):
			print("elapsed_time :", time.time() - t_start)
			self.y = 
			print("x: %f, y: %f" % (self.x, self.y))
			t_elapsed = time.time() - t_start


def main():
	print("Bouncing Ball simulation in Python")
	my_env = Environment()
	my_ball = Ball()
	my_ball.simulate(5)


if __name__ == "__main__":
	main()