## Project 2 - Discovering routes on a map 🚗

### Warning, the report and project implementation are in Brazilian Portuguese (pt-br).

### Objective 📌
To find the best possible route between two cities on a map.

Your program should display the best possible route between two cities. The route should be presented as a sequence of cities from the origin to the destination, along with the total distance of the journey. The cities should be entered via the keyboard, and the result should be displayed on the screen.

### Description 📘
Suppose there is a map, how can it be represented in the program to facilitate the discovery of paths? One idea is to represent a map as a table that provides information about each pair of locations and the distance between them.

For example, consider this map with some municipalities near Florianópolis:

| City 1  | City 2	| Distance  (km) |
|------------------------| --- |----------------|
| Florianópolis          | São José	| 19             | 
| Florianópolis	         | Biguaçu	| 24             |
| São José	              | Biguaçu	| 20 |               
| São José	              | Palhoça	| 6 |                
| São José	              | São Pedro de Alcântara |	22 |
| Biguaçu                |	Antônio Carlos             |	17 |
| São Pedro de Alcântara	 | Antônio Carlos	| 10             |

Once this table exists, how can a program calculate a route between any two cities? Basically, it needs to use a map search algorithm. The SPF algorithm, created by Dijkstra, can be used in this project.
