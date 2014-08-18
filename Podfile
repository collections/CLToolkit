# Default target gets auto created by Cocoapods
# target :default, :exclusive => true do

platform :ios, '6.0'
inhibit_all_warnings!
link_with []

# Pods from official Cocoapods/Specs repo

target :ios do
  platform :ios, '6.0'
  link_with 'CLToolkit-ios'
  pod 'CocoaLumberjack', '~> 1.6.2'
  pod 'Base64', '~> 1.0.1'
  pod 'BlocksKit', '~> 2.2.3'
  pod 'AFNetworking', '~> 2.3.1'
  pod 'ConciseKit', '~> 0.1.2'
  pod 'MagicalRecord', '~> 2.2'
  pod 'libextobjc', '~> 0.4'
  pod 'ReactiveCocoa', '~> 2.3.1'
  pod 'ISO8601DateFormatter', '~> 0.7'
  pod 'Firebase', '~> 1.1.11'
  pod 'Kiwi', '2.2.3'
  pod 'Masonry', '~> 0.5.3'
  pod 'NSHash', '~> 1.0.1'
  pod 'AWSRuntime/S3', '1.5.0.head' # From Collections/Podspecs
  
end

target :osx do
  platform :osx, '10.8'
  link_with 'CLToolkit-osx'
  pod 'CocoaLumberjack', '~> 1.6.2'
  pod 'Base64', '~> 1.0.1'
  pod 'BlocksKit', '~> 2.2.3po'
  pod 'AFNetworking', '~> 2.3.1'
  pod 'ConciseKit', '~> 0.1.2'
  pod 'MagicalRecord', '~> 2.2'
  pod 'ReactiveCocoa', '~> 2.3.1'
  pod 'ISO8601DateFormatter', '~> 0.7'
  pod 'Kiwi', '2.2.3'
  # pod 'Masonry', '~> 0.3.0' # TODO: no reason masonry is not os x compatible...
  pod 'NSHash', '~> 1.0.1'
  pod 'AWSRuntime/S3', '1.5.0.head' # From Collections/Podspecs
  pod 'FirebaseMac', '1.0.1' # From Collections/Podspecs
end

# end
