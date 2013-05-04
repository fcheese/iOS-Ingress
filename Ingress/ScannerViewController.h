//
//  ViewController.h
//  Ingress
//
//  Created by Alex Studnicka on 08.01.13.
//  Copyright (c) 2013 A&A Code. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreImage/CoreImage.h>
#import "LevelChooserViewController.h"
#import "XMCollectViewController.h"
#import "APView.h"

@interface ScannerViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate> {
	
	__weak IBOutlet MKMapView *_mapView;
	__weak IBOutlet UIImageView *playerArrowImage;
	Portal *currentPortal;
	
	__weak IBOutlet UIButton *fireXmpButton;
	LevelChooserViewController *_levelChooser;
	XMCollectViewController *_xmCollectView;
	
	__weak IBOutlet UIImageView *bgImage;
	
	__weak IBOutlet UILabel *levelLabel;
//	__weak IBOutlet UIImageView *levelImage;
	__weak IBOutlet APView *apView;
	__weak IBOutlet UILabel *nicknameLabel;
	__weak IBOutlet UILabel *xmLabel;
	__weak IBOutlet UIProgressView *xmIndicator;
	
}

- (IBAction)refresh;
- (IBAction)fireXMP;
- (IBAction)collectXM;

@end
