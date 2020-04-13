# Prototype of openFrameworks for Python

* **This repository is not an official openFrameworks repository.**
* Only part of functions of openFrameworks are implemented.

## Examples

### `example1.py`: Simple Animation

![ex1](./fig/pyof_example1.gif)

```python
import sys
import numpy as np

sys.path.append('../bin')
import pyof as of


class ofApp(of.ofPyBaseApp):
    def setup(self):
        of.ofSetWindowTitle('Hello, openFrameworks!')
        self.x = 0.0
        self.y = 0.0

    def update(self):
        t = of.ofGetFrameNum()
        self.x = 200 + 100 * np.cos(t * 0.1)
        self.y = 200 + 100 * np.sin(t * 0.1)

    def draw(self):
        of.ofDrawCircle(self.x, self.y, 40)

# ~~~~~~~~

if __name__ == '__main__':
    app = ofApp()
    app.run(400, 400, of.OF_WINDOW)
```

### `example2.py`: Numpy SIMD operations and Scipy Functions

![ex2](./fig/pyof_example2.gif)


### `example3.py`: Machine Learning Package (GPy)

![ex3](./fig/pyof_example3.gif)

GPy: https://sheffieldml.github.io/GPy/


## Usage

### Requirements

* Visual Studio 2017
* oF v0.11.0
* Python 3.7
* pybind11 2.4.3

### Build `pyof`

1. Set a path to your python to env `PYTHONPATH`
2. Put this project into `<oF_root>/apps/myApps`
3. Open `pyof.sln` and run build
