## Project 1 - Stock Price Analyzer 💸💸

### Introduction 📌
Time series analysis aims to identify trends in a sequence of numbers. <br>
The variations in the values of a series may appear almost random, but patterns can be identified at different time intervals.

![img.png](https://cdn.discordapp.com/attachments/978456290428862516/1114308544515293224/image.png)

The red line shows the stock prices over time. <br>
It can be observed that there is a significant variation as prices fall in a certain period and then rise a bit later, and this repeats in what seems to be a random pattern. If someone could estimate when prices fall (and by how much) and when they rise, they could make investments with a higher chance of profit. <br>
To do this, the investor would need to look for patterns of price fluctuations by analyzing the historical stock prices.

One possible pattern in the prices would be to identify how many days the stock price was lower or equal to the price of each day. <br>
Take a look at the following example to understand this problem:

- Prices for each day: 100, 70, 75, 81, 86, 60, 62, 88
- Number of days with lower or equal price: 1, 1, 2, 3, 4, 1, 2, 7

The number of previous days with lower prices is always at least 1 because it includes the current day being used as a reference.

An interesting pattern to look for in this analysis is to calculate the probability of having N consecutive days of increasing prices, where N is an integer value > 1. <br>
With this, an investor can estimate the risk of a stock price dropping given that it has risen for a certain number of consecutive days. <br>
If they determine that this risk is above an acceptable level, they may decide to sell the stock.

### Analyzing the project 📘
The analysis of patterns in numerical series can be done by identifying the probability of consecutive days with increasing values. <br>
For this, a small program can be created, which should provide the following:
<br> <br>
For each day in the series, the number of previous consecutive days with increasing prices <br>
The probabilities of each number of consecutive days with increasing values <br>
Each numerical series should be contained in a file, where each line has the following format:<br>

```
day/month/year value
```

Example:

```
05/11/2021 29.29
08/11/2021 29.48
09/11/2021 29.44
10/11/2021 30.79
```

The filename of the numerical series is provided as the first command-line argument.

## Objective ✨
To present to the user the sequence of days with increasing values and the probabilities of each number of consecutive days with increasing values.

