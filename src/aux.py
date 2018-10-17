
def get_gnuplot_input():

	M = "5.0"
	theta_d = 45


	gamma = "1.4"
	cot = "(cos(x)/sin(x))"
	sin2 = "sin(x)*sin(x)"
	M2 = M + "*" + M

	theta = str(theta_d*2*3.141592653589793238/360)

	f_b = "2*" + cot + "*" + M2 + "*("  + sin2 + "-1)/(" + M2 + "*(" + gamma + "+cos(2*x)+2)-tan(" + theta + "))"
	plot = "set xrange [0:90]\nshow xrange\nset title \"M = " + M + "; theta = " + str(theta_d) +"\" \n" + "set xlabel \"beta\" \n" \
		   + "set ylabel \"f(beta)\"\n" + "unset key\n" +  "plot "+f_b
	print(plot)


if __name__ == "__main__":

	get_gnuplot_input()


