Pod::Spec.new do |s|  
    s.name                    = 'NetkiSDK'
<<<<<<< HEAD
    s.version                 = '5.4.0.3'
=======
    s.version                 = '5.4.0.2'
>>>>>>> 02ad3761197b0c2fb06a9eb961b348bcf68cd1dc
    s.summary                 = 'NetkiSDK framework.'
    s.homepage                = 'https://www.netki.com/'

    s.author                  = { 'Netki' => 'hello@example.com' }
    s.license                 = { :type => '', :file => 'LICENSE' }

    s.platform                = :ios
    s.source                  = { :git => 'ssh://bitbucket.org/eimai/ios-pod.git' }

    s.ios.deployment_target   = '12.0'
    s.ios.vendored_frameworks = 'netkisdk_ios.framework'
    s.ios.dependency 'Amplitude-iOS', '~> 4.10'
end 
