# Ordinal Encoder Notes

## Overview
The `OrdinalEncoder` is a preprocessing tool from the `scikit-learn` library that converts categorical data into numerical data by assigning a unique integer value to each category. This is useful for machine learning algorithms that work with numerical input features.

---

## How It Works
Each unique category in a feature is mapped to a specific integer value. For example:

| Category   | Encoded Value |
|------------|---------------|
| Low        | 0             |
| Medium     | 1             |
| High       | 2             |

The encoding is done column-wise, meaning each feature is treated independently.

---

## Benefits
1. **Simple and Efficient**:
   - Easy to convert categories into numbers.
2. **Handles Multiple Features**:
   - Can encode multiple categorical columns at once.
3. **Integration**:
   - Works seamlessly with scikit-learn pipelines.

---

## Methods
- `fit(X)`: Learns the unique categories for each feature.
- `transform(X)`: Transforms the categorical data into encoded values.
- `fit_transform(X)`: Combines `fit()` and `transform()` in one step.
- `inverse_transform(X)`: Converts encoded values back to their original categories.

---

## Example Code
```python
from sklearn.preprocessing import OrdinalEncoder

# Example categorical data
data = [["Low"], ["Medium"], ["High"], ["Medium"]]

# Initialize OrdinalEncoder
encoder = OrdinalEncoder()

# Fit and transform the data
encoded_data = encoder.fit_transform(data)

print("Original Data:\n", data)
print("Encoded Data:\n", encoded_data)

# Inverse transform
original_data = encoder.inverse_transform(encoded_data)
print("Reversed Data:\n", original_data)
```

### Output:
```
Original Data:
 [['Low'] ['Medium'] ['High'] ['Medium']]

Encoded Data:
 [[0.]
 [1.]
 [2.]
 [1.]]

Reversed Data:
 [['Low']
 ['Medium']
 ['High']
 ['Medium']]
```

---

## Notes
1. **Order Matters**:
   - The numerical encoding reflects an arbitrary order unless the categories have a natural order (e.g., Low, Medium, High).
2. **Column-wise Operation**:
   - Each column is encoded independently.

---

## When to Use
- Use `OrdinalEncoder` when:
  - The categorical data has an inherent order (e.g., Low < Medium < High).
  - You want a quick and simple way to convert categories to numbers for numerical models.

---

## Alternatives
- **OneHotEncoder**:
   - Encodes categories into binary vectors (useful for unordered categorical data).
- **LabelEncoder**:
   - Encodes a single feature with categories into numbers (works on 1D arrays).

---

## Tips
- If the categories do **not** have an inherent order, consider using `OneHotEncoder` instead of `OrdinalEncoder` to avoid introducing unintended relationships.
- Use `inverse_transform()` to interpret results or debug model predictions.
