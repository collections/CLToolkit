# Default target gets auto created by Cocoapods
# target :default, :exclusive => true do

platform :ios, '6.0'
inhibit_all_warnings!
link_with []

# Pods from official Cocoapods/Specs repo

target :ios do
  platform :ios, '6.0'
  link_with 'CLToolkit-ios'
  pod 'CocoaLumberjack', '~> 2.0.0-beta'
  pod 'Base64', '~> 1.0'
  pod 'BlocksKit', '~> 2.2'
  pod 'AFNetworking', '~> 2.3'
  pod 'ConciseKit', '~> 0.1'
  pod 'MagicalRecord', :git => 'https://github.com/magicalpanda/MagicalRecord.git', :tag => 'v2.3.0-beta.5'
  pod 'libextobjc', '~> 0.4'
  pod 'ReactiveCocoa', '~> 2.3'
  pod 'ISO8601DateFormatter', '~> 0.7'
  pod 'Firebase', '~> 1.1'
  pod 'Kiwi', '~> 2.2'
  pod 'Masonry', '~> 0.5'
  pod 'NSHash', '~> 1.0'
  
end

target :osx do
  platform :osx, '10.8'
  link_with 'CLToolkit-osx'
  pod 'CocoaLumberjack', '~> 2.0.0-beta'
  pod 'Base64', '~> 1.0'
  pod 'BlocksKit', '~> 2.2'
  pod 'AFNetworking', '~> 2.3'
  pod 'ConciseKit', '~> 0.1'
  pod 'MagicalRecord', :git => 'https://github.com/magicalpanda/MagicalRecord.git', :tag => 'v2.3.0-beta.5'
  pod 'ReactiveCocoa', '~> 2.3'
  pod 'ISO8601DateFormatter', '~> 0.7'
  pod 'Kiwi', '~> 2.2'
  # pod 'Masonry', '~> 0.3.0' # TODO: no reason masonry is not os x compatible...
  pod 'NSHash', '~> 1.0'
  pod 'FirebaseMac', '1.0.1' # From Collections/Podspecs
end

# end
