"""Almas Dinani
Location :INDIA
Bio :Web Developer
Github URL:https://github.com/almas06 """

<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<meta http-equiv="X-UA-Compatible" content="ie=edge">
	<title>Feedometer-Best Online Food Recipes </title>
	<link rel="stylesheet" href="style.css">
	<link rel="stylesheet" media="screen and (max-width: 1170px)" href="phone.css">
	<link href="https://fonts.googleapis.com/css?family=Baloo+Bhai|Bree+Serif&display=swap" rel="stylesheet">
	<link rel="icon"
		href="https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcS3gYa-cjr246LJP6SWw637xKhaShy38PvUlw&usqp=CAU"
		type="image/x-icon">
</head>


<body>
	<nav class="navbar">
		<div id="logo">
			<img src="https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcS3gYa-cjr246LJP6SWw637xKhaShy38PvUlw&usqp=CAU"
				alt="myOnlineMeal.com">
		</div>

		<a href="index.html">Home</a>
		<a href="aboutus.html">About Us</a>
		<a href="#contact">Contact Us</a>
		<div class="dropdown">
			<button class="dropbtn">Recipes</button>
			<div class="dropdown-content">
				<a href="snacks.html">Snacks</a>
				<a href="veggies.html">Veggies</a>
				<a href="nonveggies.html">Non-Veggies</a>
			</div>
		</div>

	</nav>

	<section id="home">
		<h1 class="h-primary center">Welcome to Feedometer</h1>

		<p>Best Online Recipes To Surprise Your Plate</p>
		<p> With Delightful Experience !</p>
		
	</section>

	<section>
		<h1 class="h-primary center">Our Delicacies</h1>
		<div id="services">
			<div class="box">
				<a href="snacks.html"><img
						src="https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcQza9sA0w1Zy-V3YZa6sMr1VwksY_PlyGve2w&usqp=CAU"
						alt=">Snacks"></a>
				<a class="a" href="snacks.html">
					<h2 class="h-secondary center">Snacks</h2>
				</a>
				<p class="center">Feedometer gives you a variety of mouth watering
					snacks and also highlight some healthy alternatives
					that are enjoyable and pleasureable.
				</p>
			</div>
			<div class="box">
				<a href="veggies.html"><img
						src="https://images-gmi-pmc.edge-generalmills.com/95fd1d69-5463-44ab-832a-34b77bbdc43d.jpg"
						alt="Vegetarian Food"></a>
				<a class="a" href="veggies.html">
					<h2 class="h-secondary center">Vegetarian Food</h2>
				</a>
				<p class="center">Feedometer provides you with exciting new
					vegetarian convenience foods that make substituting
					meat easy and delicious.</p>
			</div>
			<div class="box">
				<a href="nonveggies.html"><img
						src="https://c.ndtvimg.com/2020-02/c65pekt8_biryani_625x300_03_February_20.jpg"
						alt="Non-Vegetarian Food"></a>
				<a class="a" href="nonveggies.html">
					<h2 class="h-secondary center"> Non-Vegetarian Food</h2>
				</a>
				<p class="center">Feedometer also provides you with non-vegetarian food
					which has several health benefits and is rich
					in protein and vitamin-B.</p>
			</div>
		</div>
	</section>


	<section id="client-section">
		<h1 class="h-primary center">Our Clients</h1>
		<div id="clients">
			<div class="client-item">
				<img src="https://img.etimg.com/thumb/msid-67665494,width-1070,height-580,imgsize-70796,overlay-etrise/photo.jpg"
					alt="Our Client">
			</div>
			<div class="client-item">
				<img src="https://resize4.indiatvnews.com/en/resize/newbucket/715_-/2018/10/swiggy-630-630-1539175191.jpg"
					alt="Our Client">
			</div>

			<div class="client-item">
				<img src="https://www.hrkatha.com/wp-content/uploads/foodpanda-yourstory.jpg" alt="Our Client">
			</div>
			<div class="client-item">
				<img src="https://www.vhv.rs/dpng/d/433-4331606_uber-eats-logo-transparent-uber-food-delivery-logo.png"
					alt="Our Client">
			</div>
		</div>

	</section>
	<p>&nbsp;</p>
	<p>&nbsp;</p>
	<p>&nbsp;</p>

	<section id="contact">
		<h1 class="h-primary center">Contact Us</h1>
		<div id="contact-box">
			<form action="mailto:almas.dinani786@gmail.com" method="post" enctype="text/plain">
				<div class="form-group">
					<label for="name">Name: </label>
					<input type="text" name="name" id="name" placeholder="Enter your name" required>
				</div>
				<div class="form-group">
					<label for="email">Email: </label>
					<input type="email" name="email" id="email" placeholder="Enter your email" required>
				</div>
				<div class="form-group">
					<label for="phone">Phone Number: </label>
					<input type="phone" name="phone" id="phone" placeholder="Enter your phone" required>
				</div>
				<div class="form-group">
					<label for="message">Message: </label>
					<textarea name="message" id="message" cols="30" rows="10"></textarea>
				</div>
				<div>
					<button class="btn">Submit</button>
				</div>
			</form>
		</div>
	</section>

	<footer>
		<div class="center">
			Copyright &copy; www.myOnlineMeal.com. All rights reserved!
		</div>
	</footer>
</body>

</html>
