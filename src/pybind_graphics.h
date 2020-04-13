#pragma once
#include "ofMain.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

void pybind_graphics(py::module m) {
	m.def("ofBackground", (void(*) (const ofColor &)) &ofBackground);
	m.def("ofBackground", (void(*) (int, int)) &ofBackground);
	m.def("ofBackground", (void(*) (int, int, int, int)) &ofBackground);
	m.def("ofBackgroundGradient", (void(*) (const ofColor &, const ofColor &, ofGradientMode)) &ofBackgroundGradient);
	m.def("ofBackgroundHex", (void(*) (int, int)) &ofBackgroundHex);
	m.def("ofBeginSaveScreenAsPDF", (void(*) (std::string, bool, bool, ofRectangle)) &ofBeginSaveScreenAsPDF);
	m.def("ofBeginSaveScreenAsSVG", (void(*) (std::string, bool, bool, ofRectangle)) &ofBeginSaveScreenAsSVG);
	m.def("ofBeginShape", (void(*) ()) &ofBeginShape);
	m.def("ofBezierVertex", (void(*) (const glm::vec3 &, const glm::vec3 &, const glm::vec3 &)) &ofBezierVertex);
	m.def("ofBezierVertex", (void(*) (const glm::vec2 &, const glm::vec2 &, const glm::vec2 &)) &ofBezierVertex);
	m.def("ofBezierVertex", (void(*) (float, float, float, float, float, float, float, float, float)) &ofBezierVertex);
	m.def("ofBezierVertex", (void(*) (float, float, float, float, float, float)) &ofBezierVertex);
	m.def("ofClear", (void(*) (const ofColor &)) &ofClear);
	m.def("ofClear", (void(*) (float, float)) &ofClear);
	m.def("ofClear", (void(*) (float, float, float, float)) &ofClear);
	m.def("ofClearAlpha", (void(*) ()) &ofClearAlpha);
	m.def("ofCurveVertex", (void(*) (const glm::vec3 &)) &ofCurveVertex);
	m.def("ofCurveVertex", (void(*) (const glm::vec2 &)) &ofCurveVertex);
	m.def("ofCurveVertex", (void(*) (float, float, float)) &ofCurveVertex);
	m.def("ofCurveVertex", (void(*) (float, float)) &ofCurveVertex);
	//m.def("ofCurveVertices", (void(*) (const vector &)) &ofCurveVertices);
	//m.def("ofCurveVertices", (void(*) (const vector &)) &ofCurveVertices);
	//m.def("ofCurveVertices", (void(*) (const vector &)) &ofCurveVertices);
	//m.def("ofCurveVertices", (void(*) (const vector &)) &ofCurveVertices);
	m.def("ofDisableAlphaBlending", (void(*) ()) &ofDisableAlphaBlending);
	m.def("ofDisableAntiAliasing", (void(*) ()) &ofDisableAntiAliasing);
	m.def("ofDisableBlendMode", (void(*) ()) &ofDisableBlendMode);
	m.def("ofDisableDepthTest", (void(*) ()) &ofDisableDepthTest);
	m.def("ofDisablePointSprites", (void(*) ()) &ofDisablePointSprites);
	m.def("ofDisableSmoothing", (void(*) ()) &ofDisableSmoothing);
	m.def("ofDrawBezier", (void(*) (float, float, float, float, float, float, float, float)) &ofDrawBezier);
	m.def("ofDrawBezier", (void(*) (float, float, float, float, float, float, float, float, float, float, float, float)) &ofDrawBezier);
	// m.def("ofDrawBitmapString", (void(*) (const T &, const glm::vec2 &)) &ofDrawBitmapString);
	// m.def("ofDrawBitmapString", (void(*) (const T &, const glm::vec3 &)) &ofDrawBitmapString);
	m.def("ofDrawBitmapString", (void(*) (const string &, const glm::vec3 &)) &ofDrawBitmapString);
	m.def("ofDrawBitmapString", (void(*) (const string &, const glm::vec2 &)) &ofDrawBitmapString);
	// m.def("ofDrawBitmapString", (void(*) (const T &, float, float)) &ofDrawBitmapString);
	// m.def("ofDrawBitmapString", (void(*) (const T &, float, float, float)) &ofDrawBitmapString);
	m.def("ofDrawBitmapString", (void(*) (const string &, float, float, float)) &ofDrawBitmapString);
	m.def("ofDrawBitmapStringHighlight", (void(*) (std::string, const glm::vec3 &, const ofColor &, const ofColor &)) &ofDrawBitmapStringHighlight);
	m.def("ofDrawBitmapStringHighlight", (void(*) (std::string, const glm::vec2 &, const ofColor &, const ofColor &)) &ofDrawBitmapStringHighlight);
	m.def("ofDrawBitmapStringHighlight", (void(*) (std::string, int, int, const ofColor &, const ofColor &)) &ofDrawBitmapStringHighlight);
	m.def("ofDrawCircle", (void(*) (const glm::vec3 &, float)) &ofDrawCircle);
	m.def("ofDrawCircle", (void(*) (const glm::vec2 &, float)) &ofDrawCircle);
	m.def("ofDrawCircle", (void(*) (float, float, float)) &ofDrawCircle);
	m.def("ofDrawCircle", (void(*) (float, float, float, float)) &ofDrawCircle);
	m.def("ofDrawCurve", (void(*) (float, float, float, float, float, float, float, float)) &ofDrawCurve);
	m.def("ofDrawCurve", (void(*) (float, float, float, float, float, float, float, float, float, float, float, float)) &ofDrawCurve);
	m.def("ofDrawEllipse", (void(*) (const glm::vec3 &, float, float)) &ofDrawEllipse);
	m.def("ofDrawEllipse", (void(*) (const glm::vec2 &, float, float)) &ofDrawEllipse);
	m.def("ofDrawEllipse", (void(*) (float, float, float, float)) &ofDrawEllipse);
	m.def("ofDrawEllipse", (void(*) (float, float, float, float, float)) &ofDrawEllipse);
	m.def("ofDrawLine", (void(*) (const glm::vec3 &, const glm::vec3 &)) &ofDrawLine);
	m.def("ofDrawLine", (void(*) (const glm::vec2 &, const glm::vec2 &)) &ofDrawLine);
	m.def("ofDrawLine", (void(*) (float, float, float, float)) &ofDrawLine);
	m.def("ofDrawLine", (void(*) (float, float, float, float, float, float)) &ofDrawLine);
	m.def("ofDrawRectRounded", (void(*) (const ofRectangle &, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (const ofRectangle &, float, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (const glm::vec2 &, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (const glm::vec3 &, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (const glm::vec3 &, float, float, float, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (const glm::vec2 &, float, float, float, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (float, float, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (float, float, float, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectRounded", (void(*) (float, float, float, float, float, float, float, float, float)) &ofDrawRectRounded);
	m.def("ofDrawRectangle", (void(*) (const glm::vec3 &, float, float)) &ofDrawRectangle);
	m.def("ofDrawRectangle", (void(*) (const glm::vec2 &, float, float)) &ofDrawRectangle);
	m.def("ofDrawRectangle", (void(*) (const ofRectangle &)) &ofDrawRectangle);
	m.def("ofDrawRectangle", (void(*) (float, float, float, float, float)) &ofDrawRectangle);
	m.def("ofDrawRectangle", (void(*) (float, float, float, float)) &ofDrawRectangle);
	m.def("ofDrawTriangle", (void(*) (const glm::vec3 &, const glm::vec3 &, const glm::vec3 &)) &ofDrawTriangle);
	m.def("ofDrawTriangle", (void(*) (const glm::vec2 &, const glm::vec2 &, const glm::vec2 &)) &ofDrawTriangle);
	m.def("ofDrawTriangle", (void(*) (float, float, float, float, float, float)) &ofDrawTriangle);
	m.def("ofDrawTriangle", (void(*) (float, float, float, float, float, float, float, float, float)) &ofDrawTriangle);
	m.def("ofEnableAlphaBlending", (void(*) ()) &ofEnableAlphaBlending);
	m.def("ofEnableAntiAliasing", (void(*) ()) &ofEnableAntiAliasing);
	m.def("ofEnableBlendMode", (void(*) (ofBlendMode)) &ofEnableBlendMode);
	m.def("ofEnableDepthTest", (void(*) ()) &ofEnableDepthTest);
	m.def("ofEnablePointSprites", (void(*) ()) &ofEnablePointSprites);
	m.def("ofEnableSmoothing", (void(*) ()) &ofEnableSmoothing);
	m.def("ofEndSaveScreenAsPDF", (void(*) ()) &ofEndSaveScreenAsPDF);
	m.def("ofEndSaveScreenAsSVG", (void(*) ()) &ofEndSaveScreenAsSVG);
	m.def("ofEndShape", (void(*) (bool)) &ofEndShape);
	m.def("ofFill", (void(*) ()) &ofFill);
	m.def("ofGetBackgroundAuto", (bool(*) ()) &ofGetBackgroundAuto);
	m.def("ofGetBackgroundColor", (ofColor(*) ()) &ofGetBackgroundColor);
	m.def("ofGetCoordHandedness", (ofHandednessType(*) ()) &ofGetCoordHandedness);
	m.def("ofGetCurrentMatrix", (glm::mat4(*) (ofMatrixMode)) &ofGetCurrentMatrix);
	m.def("ofGetCurrentNormalMatrix", (glm::mat4(*) ()) &ofGetCurrentNormalMatrix);
	m.def("ofGetCurrentOrientationMatrix", (glm::mat4(*) ()) &ofGetCurrentOrientationMatrix);
	m.def("ofGetCurrentViewMatrix", (glm::mat4(*) ()) &ofGetCurrentViewMatrix);
	m.def("ofGetCurrentViewport", (ofRectangle(*) ()) &ofGetCurrentViewport);
	m.def("ofGetFill", (ofFillFlag(*) ()) &ofGetFill);
	m.def("ofGetNativeViewport", (ofRectangle(*) ()) &ofGetNativeViewport);
	m.def("ofGetRectMode", (ofRectMode(*) ()) &ofGetRectMode);
	m.def("ofGetStyle", (ofStyle(*) ()) &ofGetStyle);
	m.def("ofGetViewportHeight", (int(*) ()) &ofGetViewportHeight);
	m.def("ofGetViewportWidth", (int(*) ()) &ofGetViewportWidth);
	m.def("ofIsVFlipped", (bool(*) ()) &ofIsVFlipped);
	m.def("ofLoadIdentityMatrix", (void(*) ()) &ofLoadIdentityMatrix);
	m.def("ofLoadMatrix", (void(*) (const glm::mat4 &)) &ofLoadMatrix);
	m.def("ofLoadMatrix", (void(*) (const float *)) &ofLoadMatrix);
	m.def("ofLoadViewMatrix", (void(*) (const glm::mat4 &)) &ofLoadViewMatrix);
	m.def("ofMultMatrix", (void(*) (const glm::mat4 &)) &ofMultMatrix);
	m.def("ofMultMatrix", (void(*) (const float *)) &ofMultMatrix);
	m.def("ofMultViewMatrix", (void(*) (const glm::mat4 &)) &ofMultViewMatrix);
	m.def("ofNextContour", (void(*) (bool)) &ofNextContour);
	m.def("ofNoFill", (void(*) ()) &ofNoFill);
	m.def("ofOrientationToDegrees", (int(*) (ofOrientation)) &ofOrientationToDegrees);
	m.def("ofPopMatrix", (void(*) ()) &ofPopMatrix);
	m.def("ofPopStyle", (void(*) ()) &ofPopStyle);
	m.def("ofPopView", (void(*) ()) &ofPopView);
	m.def("ofPushMatrix", (void(*) ()) &ofPushMatrix);
	m.def("ofPushStyle", (void(*) ()) &ofPushStyle);
	m.def("ofPushView", (void(*) ()) &ofPushView);
	m.def("ofRotateDeg", (void(*) (float)) &ofRotateDeg);
	m.def("ofRotateDeg", (void(*) (float, float, float, float)) &ofRotateDeg);
	m.def("ofRotateRad", (void(*) (float)) &ofRotateRad);
	m.def("ofRotateRad", (void(*) (float, float, float, float)) &ofRotateRad);
	m.def("ofRotateXDeg", (void(*) (float)) &ofRotateXDeg);
	m.def("ofRotateXRad", (void(*) (float)) &ofRotateXRad);
	m.def("ofRotateYDeg", (void(*) (float)) &ofRotateYDeg);
	m.def("ofRotateYRad", (void(*) (float)) &ofRotateYRad);
	m.def("ofRotateZDeg", (void(*) (float)) &ofRotateZDeg);
	m.def("ofRotateZRad", (void(*) (float)) &ofRotateZRad);
	m.def("ofScale", (void(*) (const glm::vec3 &)) &ofScale);
	m.def("ofScale", (void(*) (float)) &ofScale);
	m.def("ofScale", (void(*) (float, float, float)) &ofScale);
	m.def("ofSetBackgroundAuto", (void(*) (bool)) &ofSetBackgroundAuto);
	m.def("ofSetBackgroundColor", (void(*) (const ofColor &)) &ofSetBackgroundColor);
	m.def("ofSetBackgroundColor", (void(*) (int, int)) &ofSetBackgroundColor);
	m.def("ofSetBackgroundColor", (void(*) (int, int, int, int)) &ofSetBackgroundColor);
	m.def("ofSetBackgroundColorHex", (void(*) (int, int)) &ofSetBackgroundColorHex);
	m.def("ofSetCircleResolution", (void(*) (int)) &ofSetCircleResolution);
	m.def("ofSetColor", (void(*) (const ofColor &)) &ofSetColor);
	m.def("ofSetColor", (void(*) (const ofColor &, int)) &ofSetColor);
	m.def("ofSetColor", (void(*) (int)) &ofSetColor);
	m.def("ofSetColor", (void(*) (int, int, int)) &ofSetColor);
	m.def("ofSetColor", (void(*) (int, int, int, int)) &ofSetColor);
	m.def("ofSetCoordHandedness", (void(*) (ofHandednessType)) &ofSetCoordHandedness);
	m.def("ofSetCurveResolution", (void(*) (int)) &ofSetCurveResolution);
	m.def("ofSetDepthTest", (void(*) (bool)) &ofSetDepthTest);
	m.def("ofSetDrawBitmapMode", (void(*) (ofDrawBitmapMode)) &ofSetDrawBitmapMode);
	m.def("ofSetHexColor", (void(*) (int)) &ofSetHexColor);
	m.def("ofSetLineWidth", (void(*) (float)) &ofSetLineWidth);
	m.def("ofSetMatrixMode", (void(*) (ofMatrixMode)) &ofSetMatrixMode);
	m.def("ofSetPolyMode", (void(*) (ofPolyWindingMode)) &ofSetPolyMode);
	m.def("ofSetRectMode", (void(*) (ofRectMode)) &ofSetRectMode);
	m.def("ofSetStyle", (void(*) (ofStyle)) &ofSetStyle);
	m.def("ofSetupScreen", (void(*) ()) &ofSetupScreen);
	m.def("ofSetupScreenOrtho", (void(*) (float, float, float, float)) &ofSetupScreenOrtho);
	m.def("ofSetupScreenPerspective", (void(*) (float, float, float, float, float)) &ofSetupScreenPerspective);
	// string ofToString(const T &)
	m.def("ofTranslate", (void(*) (const glm::vec3 &)) &ofTranslate);
	m.def("ofTranslate", (void(*) (const glm::vec2 &)) &ofTranslate);
	m.def("ofTranslate", (void(*) (float, float, float)) &ofTranslate);
	m.def("ofVertex", (void(*) (const glm::vec3 &)) &ofVertex);
	m.def("ofVertex", (void(*) (const glm::vec2 &)) &ofVertex);
	m.def("ofVertex", (void(*) (float, float, float)) &ofVertex);
	m.def("ofVertex", (void(*) (float, float)) &ofVertex);
	//m.def("ofVertices", (void(*) (const vector &)) &ofVertices);
	//m.def("ofVertices", (void(*) (const vector &)) &ofVertices);
	//m.def("ofVertices", (void(*) (const vector &)) &ofVertices);
	//m.def("ofVertices", (void(*) (const vector &)) &ofVertices);
	m.def("ofViewport", (void(*) (ofRectangle)) &ofViewport);
	m.def("ofViewport", (void(*) (float, float, float, float, bool)) &ofViewport);
}