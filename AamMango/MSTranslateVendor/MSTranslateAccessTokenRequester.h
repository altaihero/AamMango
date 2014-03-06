//
//  MSTranslateAccessTokenRequester.h
//  MSTranslateVendor
//
//  Software License Agreement (BSD License)
//
//  Copyright (c) 2013 SHIM MIN SEOK. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright
//  notice, this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright
//  notice, this list of conditions and the following disclaimer in
//  the documentation and/or other materials provided with the
//  distribution.
//
//  3. Neither the name of Infrae nor the names of its contributors may
//  be used to endorse or promote products derived from this software
//  without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
//  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL INFRAE OR
//  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
//  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
//  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
//  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#define CLIENT_ID       @"aeb4600a-2772-495a-9879-bfd9f870a679"
#define CLIENT_SECRET   @"QeXjTA//1r6eFERhnOii/FNcOaGOkOI9WzrnC3PeuOE="

#import <Foundation/Foundation.h>

@interface MSTranslateAccessTokenRequester : NSObject
+ (MSTranslateAccessTokenRequester *)sharedRequester;
- (void)requestAsynchronousAccessToken:(NSString *)client_id clientSecret:(NSString *)client_secret;
- (void)requestSynchronousAccessToken:(NSString *)client_id clientSecret:(NSString *)client_secret;
@property (nonatomic, readonly) NSString *accessToken;
@end
