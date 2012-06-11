/******************************************************************/
/**
 * @file	testApp.h
 * @brief	Example for ofxKinectNui addon
 * @note
 * @todo
 * @bug	
 *
 * @author	sadmb
 * @date	Oct. 28, 2011
 */
/******************************************************************/
#pragma once

#include "ofxKinectNui.h"
#include "ofMain.h"

class testApp : public ofBaseApp {
	public:

		void setup();
		void update();
		void draw();
		void drawSkeleton(const ofPoint* src);
		void exit();


		void keyPressed  (int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void kinectPlugged();
		void kinectUnplugged();

		ofxKinectNui kinect;
		
		bool bPlugged;
		bool bUnplugged;
		
		unsigned short nearClipping;
		unsigned short farClipping;
		int angle;

		ofTexture labels;
		ofTexture depth;
		ofTexture video;
		ofTexture calibratedVideo;
		const ofPoint* skeletonPoints[kinect::nui::SkeletonFrame::SKELETON_COUNT];
};
