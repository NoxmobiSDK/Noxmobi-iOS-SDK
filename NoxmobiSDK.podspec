Pod::Spec.new do |spec|

  spec.name         = "NoxmobiSDK"
  spec.version      = "2.6.1" # Mark
  spec.summary      = "Noxmobi iOS SDK"
  spec.homepage     = "https://github.com/NoxmobiSDK/Noxmobi-iOS-SDK"
  spec.license      = "MIT"
  spec.author       = { "Chong" => "zhanglovesan@gmail.com" }

  spec.platform     = :ios, "10.0"
  spec.source       = { :git => "https://github.com/NoxmobiSDK/Noxmobi-iOS-SDK.git", :tag => "#{spec.version}" }
  spec.source_files = "Noxmobi.framework/Headers/*.{h}" # Noxmobi.framework/Headers/*.{h,m}
  
  spec.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }
  # spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  spec.ios.vendored_frameworks = 'Noxmobi.framework'
  spec.requires_arc = true
  spec.frameworks = "Foundation", "UIKit", "AdSupport" #依赖多个系统framework
  # spec.libraries = 'iconv', 'xml2' # 设置依赖多个系统的library
  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.dependency 'AFNetworking'
  spec.dependency 'NoxmobiVASTComponent'
end
