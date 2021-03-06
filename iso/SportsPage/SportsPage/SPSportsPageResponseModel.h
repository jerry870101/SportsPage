//
//  SPSportsPageResponseModel.h
//  SportsPage
//
//  Created by Qin on 2016/12/13.
//  Copyright © 2016年 Absolute. All rights reserved.
//

#import "JSONModel.h"

@interface SPSportsPageModel : JSONModel

@property (nonatomic,copy) NSString <Optional> *sportId;
@property (nonatomic,copy) NSString <Optional> *user_id;
@property (nonatomic,copy) NSString <Optional> *event_id;
@property (nonatomic,copy) NSString <Optional> *title;
@property (nonatomic,copy) NSString <Optional> *portrait;
@property (nonatomic,copy) NSString <Optional> *summary;
@property (nonatomic,copy) NSString <Optional> *sport_type;
@property (nonatomic,copy) NSString <Optional> *sport_item;
@property (nonatomic,copy) NSString <Optional> *location;
@property (nonatomic,copy) NSString <Optional> *location_detail;
@property (nonatomic,copy) NSString <Optional> *place;
@property (nonatomic,copy) NSString <Optional> *latitude;
@property (nonatomic,copy) NSString <Optional> *longitude;
@property (nonatomic,copy) NSString <Optional> *geohash;
@property (nonatomic,copy) NSString <Optional> *active_times;
@property (nonatomic,copy) NSString <Optional> *grade;
@property (nonatomic,copy) NSString <Optional> *status;
@property (nonatomic,copy) NSString <Optional> *time;
@property (nonatomic,copy) NSString <Optional> *deleted;
@property (nonatomic,copy) NSString <Optional> *extend;
@property (nonatomic,copy) NSString <Optional> *valid;

@end

@protocol SPSportsPageModel;

@interface SPSportsPageResponseModel : JSONModel

@property (nonatomic,strong) NSMutableArray <SPSportsPageModel> *data;

@end
