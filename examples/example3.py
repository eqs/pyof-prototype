# -*- coding: utf-8 -*-
import sys
import numpy as np
from matplotlib import pyplot as plt
import GPy

sys.path.append('../bin')
import pyof as of


class ofApp(of.ofPyBaseApp):
    def setup(self):
        of.ofSetWindowTitle('Gaussian Process')
        of.ofSetFrameRate(10)
        of.ofEnableSmoothing()

        # ---- Prepare colormap ----

        cmap = plt.get_cmap('prism')
        self.colors = [tuple(map(lambda x: int(x*255), cmap(n)[:3]))
                       for n in range(cmap.N)]

        # ---- Compute Gaussian Process ----

        w = of.ofGetWidth()

        self.N_sim = 200
        self.N_sample = 20

        self.x_sim = np.linspace(-w/2, w/2, self.N_sim)
        self.y_sim = np.zeros((self.N_sample, self.N_sim))

        kernel = GPy.kern.RBF(input_dim=1,
                              variance=1,lengthscale=20.2)

        # Mean function
        self.mu = np.zeros(self.N_sim)
        # Cov function
        self.cov = kernel.K(self.x_sim[:, np.newaxis],
                            self.x_sim[:, np.newaxis])

    def update(self):
        self.y_sim = np.random.multivariate_normal(self.mu, self.cov,
                                                   size=self.N_sample)

    def draw(self):
        of.ofTranslate(of.ofGetWidth()/2.0, of.ofGetHeight()/2.0, 0.0)
        of.ofScale(1.0, of.ofGetHeight()/10.0, 1.0)

        of.ofBackground(0, 255);
        of.ofNoFill()
        of.ofSetLineWidth(2.0)

        for n in range(self.N_sample):

            cl = self.colors[n % len(self.colors)]
            of.ofSetColor(cl[0], cl[1], cl[2], 128)

            of.ofBeginShape()
            for x, y in zip(self.x_sim, self.y_sim[n]):
                of.ofVertex(x, y)
            of.ofEndShape(False)


if __name__ == '__main__':
    app = ofApp()
    app.run(800, 400, of.OF_WINDOW)

