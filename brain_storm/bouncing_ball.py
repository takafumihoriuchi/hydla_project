import time


class Environment(object):
	def __init__(self, gravity=-9.8, wind=0.0, air_r=0.0):
		self.g = gravity
		self.wind = wind
		self.air_r = air_r


class Ball(Environment):
	def __init__(self, init_x=0.0, init_xv=0.0, init_y=10.0, init_yv=0.0, e=0.8):
		Environment.__init__(self)
		self.init_x = init_x
		self.init_xv = init_xv
		self.init_y = init_y
		self.init_yv = init_yv
		self.e = e

	def simulate(self, t_limit):

		phase = 0
		t_start = time.time()
		t_elapsed = time.time() - t_start

		while(t_elapsed <= t_limit):
		
			self.xv = self.init_xv + self.wind * t_elapsed
			self.yv = self.init_yv + self.g * t_elapsed
		
			# bounce
			if (self.init_y + self.yv * t_elapsed <= 0):
				phase += 1
				time.sleep(3)
				self.yv *= (-1) * self.e
		
			self.x = self.init_x + self.xv * t_elapsed
			self.y = self.init_y + self.yv * t_elapsed
		
			# print("elapsed_time :", time.time() - t_start)
			print("phase", phase)
			print("x: %f, y: %f" % (self.x, self.y))
			t_elapsed = time.time() - t_start


def main():
	print("Bouncing Ball simulation in Python")
	my_env = Environment()
	my_ball = Ball()
	my_ball.simulate(10)


if __name__ == "__main__":
	main()