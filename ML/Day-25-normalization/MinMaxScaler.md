# MinMaxScaler Notes

## Overview
The `MinMaxScaler` is a preprocessing tool from the `scikit-learn` library used to scale features to a specific range, typically [0, 1]. It is helpful when feature scaling is required to normalize the input for certain machine learning algorithms.

---

## Formula
The scaling formula is:
\[
X_{scaled} = \frac{X - X_{min}}{X_{max} - X_{min}}
\]
Where:
- \( X \): Original feature value
- \( X_{min} \): Minimum value in the feature
- \( X_{max} \): Maximum value in the feature
- \( X_{scaled} \): Scaled value

If you wish to scale to a custom range \([a, b]\), the formula becomes:
\[
X_{scaled} = a + \frac{(X - X_{min}) \cdot (b - a)}{X_{max} - X_{min}}
\]

---

## Benefits
1. **Feature Scaling**:
   - Scales all features to the same range, making them comparable.
2. **Range Customization**:
   - Default is [0, 1], but it can be adjusted to any range (e.g., [-1, 1]).
3. **Preserves Relationships**:
   - Does not distort the distribution of values.

---

## Methods
- `fit(X)`: Computes the minimum and maximum values for scaling.
- `transform(X)`: Scales the input data.
- `fit_transform(X)`: Combines `fit()` and `transform()` in one step.
- `inverse_transform(X)`: Reverts the scaled data back to its original range.

---

## Example Code
```python
from sklearn.preprocessing import MinMaxScaler
import numpy as np

# Example data
data = np.array([[1, 2], [3, 4], [5, 6]])

# Initialize MinMaxScaler
scaler = MinMaxScaler()

# Fit and transform the data
scaled_data = scaler.fit_transform(data)

print("Original Data:\n", data)
print("Scaled Data:\n", scaled_data)

# Inverse transform
original_data = scaler.inverse_transform(scaled_data)
print("Reversed Data:\n", original_data)
```

### Output:
```
Original Data:
 [[1 2]
 [3 4]
 [5 6]]

Scaled Data:
 [[0.   0.  ]
 [0.5  0.5 ]
 [1.   1.  ]]

Reversed Data:
 [[1. 2.]
 [3. 4.]
 [5. 6.]]
```

---

## Tips
1. **Train-Test Consistency**:
   - Always scale the training and test sets using the same scaler fitted on the training data.
2. **Avoid Data Leakage**:
   - Never fit the scaler on the test data.

---

## When to Use
- Use `MinMaxScaler` when:
  - Features have different scales and need to be normalized.
  - You need the scaled data to fall within a specific range, such as [0, 1] or [-1, 1].

---

## Alternatives
- **StandardScaler**: Standardizes features to have a mean of 0 and a standard deviation of 1.
- **RobustScaler**: Scales features using statistics that are robust to outliers (e.g., median and IQR).
