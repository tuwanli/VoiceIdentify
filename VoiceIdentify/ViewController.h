//
//  ViewController.h
//  VoiceIdentify
//
//  Created by 涂婉丽 on 16/1/22.
//  Copyright © 2016年 涂婉丽. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iflyMSC/iflyMSC.h"
@class IFlyDataUploader;
@class IFlySpeechRecognizer;
@interface ViewController : UIViewController<IFlySpeechRecognizerDelegate,IFlyRecognizerViewDelegate,UIActionSheetDelegate>
@property (nonatomic, strong) NSString *pcmFilePath;//音频文件路径
@property (nonatomic, strong) IFlySpeechRecognizer *iFlySpeechRecognizer;//不带界面的识别对象
@property (nonatomic, strong) IFlyRecognizerView *iflyRecognizerView;//带界面的识别对象
@property (nonatomic, strong) IFlyDataUploader *uploader;//数据上传对象
- (IBAction)resignizeAction;
@property (unsafe_unretained, nonatomic) IBOutlet UITextView *textView;
@property (nonatomic, strong) NSString * result;
@end

