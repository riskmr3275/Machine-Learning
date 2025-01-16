# Univariate Analysis in Machine Learning

## Definition
Univariate analysis focuses on analyzing one variable at a time. Its goal is to describe the distribution, central tendency (mean, median, mode), and dispersion (range, variance, standard deviation) of the variable. It is the simplest form of data analysis.

---

## Types of Data for Univariate Analysis

1. **Numerical Data**:
   - Data with numerical values, e.g., age, salary, height.
   - Can be continuous (e.g., weight) or discrete (e.g., number of children).

2. **Categorical Data**:
   - Data with categories or labels, e.g., gender, product type.
   - Can be nominal (no order, e.g., colors) or ordinal (ordered, e.g., education levels).

---

## Why is Univariate Analysis Important?
- **Understanding Data**: Helps understand the nature of a single variable.
- **Identifying Patterns**: Detects trends and outliers.
- **Feature Selection**: Assists in determining the importance of a variable.

---

## Techniques for Univariate Analysis

### For Numerical Data:
1. **Descriptive Statistics**:
   - Mean, Median, Mode, Range, Variance, Standard Deviation.
2. **Visualization**:
   - Histograms, Boxplots, Density Plots.

### For Categorical Data:
1. **Frequency Distribution**:
   - Counts of each category.
2. **Visualization**:
   - Bar Charts, Pie Charts.

---

## Real-Time Examples

### Example 1: Numerical Data (Customer Age)

#### Dataset:

| Customer ID | Age |
|-------------|-----|
| 1           | 25  |
| 2           | 30  |
| 3           | 25  |
| 4           | 35  |
| 5           | 40  |

#### Descriptive Statistics:
- **Mean**: \( \frac{25 + 30 + 25 + 35 + 40}{5} = 31 \)
- **Median**: 30 (middle value)
- **Mode**: 25 (most frequent value)
- **Range**: \( 40 - 25 = 15 \)

#### Visualization: Histogram

| Age Range | Frequency |
|-----------|-----------|
| 20-29     | 2         |
| 30-39     | 2         |
| 40-49     | 1         |

#### Insights:
1. The average age is 31.
2. Age 25 is the most frequent.
3. Most customers are between 20-39 years old.

---

### Example 2: Categorical Data (Customer Preferred Product)

#### Dataset:

| Customer ID | Preferred Product |
|-------------|-------------------|
| 1           | Phone             |
| 2           | Laptop            |
| 3           | Phone             |
| 4           | TV                |
| 5           | Phone             |

#### Frequency Distribution:
- **Phone**: 3
- **Laptop**: 1
- **TV**: 1

#### Visualization: Bar Chart

| Product Type | Frequency |
|--------------|-----------|
| Phone        | 3         |
| Laptop       | 1         |
| TV           | 1         |

#### Insights:
1. Phones are the most preferred product, with 60% of customers choosing them.
2. Laptops and TVs are less preferred.

---

## Key Takeaways
- **Numerical Data**:
  - Use statistics like mean, median, and range.
  - Visualize with histograms or boxplots.
- **Categorical Data**:
  - Analyze frequencies.
  - Visualize with bar charts or pie charts.

---

