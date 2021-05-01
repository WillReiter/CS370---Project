This folder contains three sub-folders

Arduino:
	This contains the code for the Arduino Nano to be functional with the SharpIR sensor. It requires a library linked here:
	https://www.makerguides.com/wp-content/uploads/2019/02/SharpIR-master.zip
	Simply verify and compile this to the Nano once and then connect it to the RPi for Power.
	This is using the Sharp IR Sensor Model #: GP2Y0A21YK0F
	Follow the Datasheet for specifics, the code has the Analog input to Pin A0 of the Nano
	Pins D3 and D4 are both digital outputs that go to GPIO 17 (Pin 11) of the RPi. Only use one: D3 OR D4
	To air on the side of caution, use a LED from D3 to GND and connect the GPIO to the positive of LED.


Scrape and External are using Python 3

Scrape:
	This folder contains scraper.py which can be run by entering "python 3 scraper.py" in the terminal.
	This should be ran on a PC that you wish to communicate with the Raspberry Pi.
	Make note of the PCs IP address for app.py 
	It save the contents of the scraped websites to info.txt
	Updates when a request comes in from app.py

External: 
	This folder is to be ran on the Raspberry Pi. It contains app.py and two HTML files along with a couple folders for images.
	*** HOW TO RUN ***	
	Scraper must be running before this program is started using these three steps.
	FIRST - Change the IP in line 23 from "10.0.0.XXX" to the IP address of the computer running the scraper program
	SECOND - in the terminal enter "export FLASK_APP=app"
	THIRD - in the terminal enter "flask run"
