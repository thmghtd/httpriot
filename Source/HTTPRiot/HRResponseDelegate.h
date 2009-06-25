//
//  HRResponseDelegate.h
//  HTTPRiot
//
//  Created by Justin Palmer on 6/24/09.
//  Copyright 2009 LabratRevenge LLC.. All rights reserved.
//



@protocol HRResponseDelegate <NSObject>
- (void)restConnection:(NSURLConnection *)connection didFinishLoadingData:(id)data;
- (void)restConnection:(NSURLConnection *)connection didFailWithError:(NSError *)error;
- (void)restConnection:(NSURLConnection *)connection didReceiveError:(NSError *)error response:(NSHTTPURLResponse *)response;
@end