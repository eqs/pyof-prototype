#include "ofMain.h"
#include "ofPyBaseApp.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

void ofPyBaseApp::setup() {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, setup);
}
void ofPyBaseApp::update() {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, update);
}
void ofPyBaseApp::draw() {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, draw);
}
void ofPyBaseApp::exit() {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, exit);
}
void ofPyBaseApp::keyPressed(int key) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, keyPressed, key);
}
void ofPyBaseApp::keyReleased(int key) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, keyReleased, key);
}
void ofPyBaseApp::mouseMoved(int x, int y) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, mouseMoved, x, y);
}
void ofPyBaseApp::mouseDragged(int x, int y, int button) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, mouseDragged, x, y, button);
}
void ofPyBaseApp::mousePressed(int x, int y, int button) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, mousePressed, x, y, button);
}
void ofPyBaseApp::mouseReleased(int x, int y, int button) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, mouseReleased, x, y, button);
}
void ofPyBaseApp::mouseEntered(int x, int y) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, mouseEntered, x, y);
}
void ofPyBaseApp::mouseExited(int x, int y) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, mouseExited, x, y);
}
void ofPyBaseApp::windowResized(int w, int h) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, windowResized, w, h);
}
void ofPyBaseApp::dragEvent(ofDragInfo dragInfo) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, dragEvent, dragInfo);
}
void ofPyBaseApp::gotMessage(ofMessage msg) {
	PYBIND11_OVERLOAD_PURE(void, ofBaseApp, gotMessage, msg);
}


void ofPyBaseApp::run(int w, int h, ofWindowMode mode) {
	py::object self = py::cast(this);
	self.inc_ref();
	ofSetupOpenGL(w, h, mode);
	ofRunApp(self.cast<ofBaseApp*>());
}