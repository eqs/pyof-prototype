# -*- coding: utf-8 -*-
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

    def keyPressed(self, key):
        pass

    def keyReleased(self, key):
        pass

    def mouseMoved(self, x, y):
        pass

    def mouseDragged(self, x, y, button):
        pass

    def mousePressed(self, x, y, button):
        pass

    def mouseReleased(self, x, y, button):
        pass

    def mouseEntered(self, x, y):
        pass

    def mouseExited(self, x, y):
        pass

    def windowResized(self, w, h):
        pass

    def dragEvent(self, e):
        pass

    def gotMessage(self, msg):
        pass


if __name__ == '__main__':
    app = ofApp()
    app.run(400, 400, of.OF_WINDOW)

