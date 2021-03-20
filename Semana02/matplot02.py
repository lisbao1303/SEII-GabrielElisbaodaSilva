import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
labels = ['a', 'b', 'c']
values = [1, 3, 2]

bars = plt.bar(labels, values)

patterns = ['/', 'O', '*']

for bar in bars:
    bar.set_hatch(patterns.pop(0))



plt.show()


