# Alexa-Fan

Using the IFTTT service, Alexa, a Particle Photon, some relays and the remote for my ceiling fan, I now have a fan which can be controlled by alexa! For those who dont know, the Particle Photon is a small wifi development kit, somewhat similar to an Arduino. The IDE for the photon is cloud based, as it is on Particle's website.

The particle is attached to a breadboard, with pins attached to the D3, D4, D5, and D6, ouputs to control the off, medium, high, and light switches (I never use low and only had 4 relays, the lights are toggled on and off by the same button, off turns off the fan not lights). The relays attached to the pins are then wired onto the remote to control the fan. 

IFTTT is an online service which I used to create the "applets" which control the functions of the fan. As you can see in the code, the commands are a simple if else-if function for activating the relays by simply toggling the digital outputs for ~half a second (took some some tinkering to find an amount of time the remote liked).

Was a rather simple and quite cheap project to do, considering fans that can be controlled by alexa out of the box retail for quite a bit of money! in total, including breaboard, photon, and relays, converting this fan cost me about $30. Hope you enjoyed!
