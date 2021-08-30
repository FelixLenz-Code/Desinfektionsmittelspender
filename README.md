# Smarter Desinfektionsmittelspender
#### [Homeassistant](https://www.home-assistant.io/ "Homeassistant") & [ESPHome](https://esphome.io/ "ESPHome")
Ein smarter Desinfektionsmittelspender, der sowohl kontaktlos funktioniert als auch mit Benachrichtigungsfunktionen über Füllstand und Nutzung ausgestattet ist, soll entwickelt werden. 



## Hardware
Der Arduino Nano steuert die Pumpe vollkommen autonom mithilfe des Ultraschallsensors (HC-SR04). Auch gibt er, dem mit dem WLAN verbundenen zweiten Mikrocontroller (NodeMCU bzw. ESP8266) weiter, dass der Spender benutzt wurde. Dies geschieht über ein Relais, da der Arduino mit 5V und der NodeMCU mit 3,3V arbeitet. Der NodeMCU ist außerdem mit einem Füllstandssensor ausgestattet. Der NodeMCU ist ein WLAN Entwicklerboard, ausgestattet mit einem ESP8266 Chip von Espressif, welcher auch oft in Smarthomegeräten wiederzufinden ist. 

![Zeichnung](https://github.com/FelixLenz-Code/Smarter-Desinfektionsmittelspender/blob/main/Zeichnung.PNG "Zeichnung")

## Software
Der NodeMCU wird mit der Software von ESPHome geflashed. Diese Software kann dann in einem lokalen Netzwerk mit einem Homeassistant Server kommunizieren und Daten wie Füllstand der Desinfektionsmittelflasche, als auch die Häufigkeit der Benutzung übertragen. In Homeassistant selber kann dann mit den Daten einiges umgesetzt werden. So kann man z.B. Benachrichtigungen verschicken wenn ein Spender bald leer wird. Auch lassen sich andere Aktoren triggern. Wie z.B. LEDs, SmartHome Lampen oder Steckdosen. Hier sind kaum Grenzen gesetzt. 

Auch kann man sich genaue Daten, in Form von Zahlen und Graphen, anzeigen lassen und auswerten. Wie z.B. welcher Spender wird am meisten genutzt? Wie viel Kosten hat man durchschnittlich im Monat? Wie oft muss Desinfektionsmittel nachgefüllt werden? Das alles kann man sich anzeigen lassen. 

## Gehäuse
Das Ganze wird dann noch in eine schönes 3D gedrucktes Gehäuse gepackt und schon hat man seinen smarten Desinfektionsmittelspender. *(Dateien dazu kommen noch!)*
