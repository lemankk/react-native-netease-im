//
//  NIMUtil.h
//  NIMKit
//
//  Created by chris on 15/8/10.
//  Copyright (c) 2015年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ImConfig.h"


@interface NIMKitUtil : NSObject

+ (NSString *)showNick:(NSString *)uid inMessage:(NIMMessage *)message;

+ (NSString *)showNick:(NSString *)uid inSession:(NIMSession *)session;

+ (NSString *)showTime:(NSTimeInterval)msglastTime showDetail:(BOOL)showDetail;

+ (NSString *)messageTipContent:(NIMMessage *)message;

+ (BOOL)canEditTeamInfo:(NIMTeamMember *)member;

+ (BOOL)canInviteMember:(NIMTeamMember *)member;

+ (NSString*)teamNotificationFormatedMessage:(NIMMessage *)message;

+ (NSString*)messageTypeToString:(NIMMessageType)type;

+ (NSString*)notificationTypeToString:(NIMNotificationType)type;

+ (NSString*)notificationTeamOperationTypeToString:(NIMTeamOperationType)type;

+ (NSDictionary *)teamNotificationDetail:(NIMMessage *)message;

@end
