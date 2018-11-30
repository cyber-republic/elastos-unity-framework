//
//  Carrier.h
//  ELASTOS_RN_FRAMEWORK
//
//  Created by jacky.li on 2018/9/25.
//  Copyright © 2018 Facebook. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ElastosCarrier/ElastosCarrier.h>

//#import "RN_SESSION.h"


@class RN_SESSION;
@interface Carrier : NSObject

typedef void (^CarrierSendEvent)(ELACarrier *carrier, NSDictionary *param);

@property(copy) CarrierSendEvent callback;

-(void) start:(NSDictionary *)config sendEvent:(CarrierSendEvent)sendEvent completion:(void (^)(NSError *error))completion;
-(ELACarrier *) getIntance;
-(RN_SESSION *) getRNSessionInstance;

-(ELACarrierSession *) createNewSession:(NSString *)name
                               friendId:(NSString *)friendId
                             streamType:(int)streamType
                             streamMode:(int)streamMode;
-(void) clean: (NSString *)name;
-(void) close;

@end
