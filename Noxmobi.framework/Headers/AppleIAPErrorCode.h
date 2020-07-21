//
//	AppleIAPErrorCode.h
//	
//	▄▄︻┻━━━┳━═━━   BUG~~
//	
//  Created by Chong on 2020/6/2.
//  Copyright © 2020 Chong. All rights reserved.
//

#ifndef AppleIAPErrorCode_h
#define AppleIAPErrorCode_h

/**
The value for status is 0 if the receipt is valid, or a status code if there is an error. The status code reflects the status of the app receipt as a whole. For example, if you send a valid app receipt that contains an expired subscription, the response is 0 because the receipt is valid.

Status codes 21100-21199 are various internal data access errors.

21000
 发送到App Store的请求没有使用HTTP POST请求方法
The request to the App Store was not made using the HTTP POST request method.

21001
 App Store不会再返回这个错误码
This status code is no longer sent by the App Store.

21002
 receipt-data字段数据格式不正确或服务遇到临时问题。再试一次。
The data in the receipt-data property was malformed or the service experienced a temporary issue. Try again.

21003
 收据无法通过验证
The receipt could not be authenticated.

21004
 提供的shared secret不匹配你账号中的shared secret
The shared secret you provided does not match the shared secret on file for your account.

21005
 receipt服务器当前不可用。再试一次。
The receipt server was temporarily unable to provide the receipt. Try again.

21006
 此收据有效，但订阅已过期。当此状态码返回到您的服务器时，收据数据也会被解码并作为响应的一部分返回。只返回iOS 6风格的自动更新订阅的交易收据。
This receipt is valid but the subscription has expired. When this status code is returned to your server, the receipt data is also decoded and returned as part of the response. Only returned for iOS 6-style transaction receipts for auto-renewable subscriptions.

21007
 receipt来自"测试环境"，但却发送至"生产环境"的进行验证
This receipt is from the test environment, but it was sent to the production environment for verification.

21008
 receipt来自"生产环境"，但却发送至"测试环境"的进行验证
This receipt is from the production environment, but it was sent to the test environment for verification.

21009
 内部数据访问错误。稍后再试。
Internal data access error. Try again later.

21010
 用户帐户无法找到或已被删除。
The user account cannot be found or has been deleted.
*/

#endif /* AppleIAPErrorCode_h */


