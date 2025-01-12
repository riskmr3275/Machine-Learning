# Notes on `train_test_split` in Scikit-learn

## 1. **Importing the Function**
```python
from sklearn.model_selection import train_test_split
```
- **Purpose**: To split a dataset into training and testing subsets.
- **Usage**: Helps in evaluating the performance of machine learning models by keeping a portion of the data unseen during training.

---

## 2. **Splitting the Data**
```python
X_train, X_test, y_train, y_test = train_test_split(
    df.drop('Purchased', axis=1),
    df['Purchased'],
    test_size=0.3,
    random_state=0
)
```

### **Explanation of Parameters**:

### **`df.drop('Purchased', axis=1)`**
- Removes the column `'Purchased'` from the DataFrame `df`.
- Remaining columns are used as **features** (`X`).

### **`df['Purchased']`**
- Selects the `'Purchased'` column as the **target** (`y`), which is what the model predicts.

### **`test_size=0.3`**
- Specifies that **30% of the data** will be used as the test set.
- The remaining **70%** will be used for training.

### **`random_state=0`**
- Ensures the split is consistent every time the code runs.
- Fixes the randomness for reproducibility.

### **Outputs**:
- `X_train`: Features for training.
- `X_test`: Features for testing.
- `y_train`: Labels for training.
- `y_test`: Labels for testing.

---

## 3. **Checking Data Shapes**
```python
X_train.shape, X_test.shape
```
- **Purpose**: Displays the dimensions of the training and testing feature sets.
- **Example Output**:  
  ```python
  ((70, 3), (30, 3))
  ```
  - `X_train`: 70 rows, 3 columns (70% of the data).
  - `X_test`: 30 rows, 3 columns (30% of the data).

---

## 4. **Key Benefits of `train_test_split`**
- **Efficient Splitting**: Simplifies the process of dividing datasets into training and testing parts.
- **Test Set Isolation**: Keeps test data separate to evaluate model performance on unseen data.
- **Reproducibility**: `random_state` ensures consistent results.

---

## 5. **Best Practices**
- Use `test_size` or `train_size` to control the data split ratio (e.g., `test_size=0.2` for 20% test data).
- Always set a `random_state` for reproducible experiments.
- Ensure the target variable (`y`) is balanced across training and test sets (use `stratify` for classification tasks if necessary).
