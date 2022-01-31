# Smarter Desinfektionsmittelspender
#### [Homeassistant](https://www.home-assistant.io/ "Homeassistant") & [ESPHome](https://esphome.io/ "ESPHome")
Ein smarter Desinfektionsmittelspender, der sowohl kontaktlos funktioniert als auch mit Benachrichtigungsfunktionen über Füllstand und Nutzung ausgestattet ist, soll entwickelt werden. 



## Hardware
Der Arduino Nano steuert die Pumpe vollkommen autonom mithilfe des Ultraschallsensors (HC-SR04). Auch gibt er, dem mit dem WLAN verbundenen zweiten Mikrocontroller (NodeMCU bzw. ESP8266) weiter, dass der Spender benutzt wurde. Dies geschieht über ein Relais, da der Arduino mit 5V und der NodeMCU mit 3,3V arbeitet. Der NodeMCU ist außerdem mit einem Füllstandssensor ausgestattet. Der NodeMCU ist ein WLAN Entwicklerboard, ausgestattet mit einem ESP8266 Chip von Espressif, welcher auch oft in Smarthomegeräten wiederzufinden ist. Um alles mit Strom zu versorgen verbinden wir die Stromversorgung mittels Pins beider Microcontroller miteinander. Dann muss man nur noch den Arduino Nano mit Strom über USB versorgen und schon läuft alles. (Die restliche Verschaltung kann der Zeichnung entnommen werden.)

Teileliste:
- NodeMCU v2
- Arduino Nano
- HC-SR04 Ultraschallsensor
- Wasserstandssensor 
- 2 Relais (FRS1B-S)
- 5V oder 12V Pumpe (Ich benutze eine Bioengeneering Pumpe)
- Passender Schlauch (1m reicht)
- Prototyping Board (72x72mm)
- Pinheader (Male & Female)
- Female Jumper Kabel
- Litze zur Verlängerung der Jumper Kabel und fürs Boad
- Home Assistant Server mit ESPhome
- Arduino IDE
- USB Kabel (micro und mini)
- PC zum programmieren
- 3D Drucker oder Druckdienst für das Gehäuse 



![Zeichnung](https://github.com/FelixLenz-Code/Smarter-Desinfektionsmittelspender/blob/main/Desinfektionsspender%20Projekt-1.jpg "Zeichnung")

## Software
Der NodeMCU wird mit der Software von ESPHome geflashed. Diese Software kann dann in einem lokalen Netzwerk mit einem Homeassistant Server kommunizieren und Daten wie Füllstand der Desinfektionsmittelflasche, als auch die Häufigkeit der Benutzung übertragen. In Homeassistant selber kann dann mit den Daten einiges umgesetzt werden. So kann man z.B. Benachrichtigungen verschicken wenn ein Spender bald leer wird. Auch lassen sich andere Aktoren triggern. Wie z.B. LEDs, SmartHome Lampen oder Steckdosen. Hier sind kaum Grenzen gesetzt. (Voraussetzung dafür ist eine Homeassistant Installation mit ESPHome Addon.)

Auch kann man sich genaue Daten, in Form von Zahlen und Graphen, anzeigen lassen und auswerten. Z.B. welcher Spender wird am meisten genutzt? Wie viel Kosten hat man durchschnittlich im Monat? Wie oft muss Desinfektionsmittel nachgefüllt werden? Das alles kann man sich anzeigen lassen. 

## Gehäuse
Das Ganze wird dann noch in eine schönes 3D gedrucktes Gehäuse gepackt und schon hat man seinen smarten Desinfektionsmittelspender. *(Dateien dazu kommen noch!)*
