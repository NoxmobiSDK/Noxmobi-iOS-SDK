Pod::Spec.new do |spec|

  spec.name         = "NoxmobiSDK"
  spec.version      = "1.4.2"
  spec.summary      = "Noxmobi iOS SDK"
  spec.homepage     = "https://github.com/NoxmobiSDK/Noxmobi-iOS-SDK"
  spec.license      = "MIT"
  spec.author       = { "Chong" => "zhanglovesan@gmail.com" }

  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/NoxmobiSDK/Noxmobi-iOS-SDK.git", :tag => "#{spec.version}" }
  spec.source_files = "Noxmobi.framework/Headers/*.{h}" # Noxmobi.framework/Headers/*.{h,m}

  spec.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  spec.ios.vendored_frameworks = 'Noxmobi.framework'
  spec.requires_arc = true
  spec.frameworks = "Foundation", "UIKit" #依赖多个系统framework
  # spec.libraries = 'iconv', 'xml2' # 设置依赖多个系统的library
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }

  spec.dependency "AppLovinSDK", "6.8.0"
  spec.dependency "AppLovinMediationAdColonyAdapter", "3.3.8.1"
  spec.dependency "AppLovinMediationIronSourceAdapter", "6.8.4.0.2"
  spec.dependency "AppLovinMediationTapjoyAdapter", "12.3.1.0"
  spec.dependency "AppLovinMediationUnityAdsAdapter", "3.1.0.1"
  spec.dependency "AppLovinMediationVungleAdapter", "6.3.2.3"

end