# monitor PATH_EQ compact diffs (112)

## _ZN10CAppConfig11Parse_TableEPci  [NEAR]  pm=10
```diff
-mov    -0x3c(%ebp),%edx
-mov    -0x50(%ebp),%eax
-add    $0x3,%eax
+mov    -0x3c(%ebp),%eax
+mov    -0x50(%ebp),%edx
+add    $0x3,%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
```

## _ZN10CIPCounter11setLoadTermEh  [DIFF]  pm=24
```diff
-sub    $0x4,%esp
+sub    $0x14,%esp
-mov    %al,-0x4(%ebp)
-movzbl -0x4(%ebp),%eax
+mov    %al,-0x14(%ebp)
+movzbl -0x14(%ebp),%eax
-cmp    $0x2a30,%eax
-jle    <T> <_ZN10CIPCounter11setLoadTermEh+0x2a>
-mov    $0x2a30,%eax
-mov    %eax,%edx
+mov    %eax,-0x4(%ebp)
+cmpl   $0x2a30,-0x4(%ebp)
+jbe    <T> <_ZN10CIPCounter11setLoadTermEh+0x31>
+movl   $0x2a30,-0x4(%ebp)
+mov    -0x4(%ebp),%edx
-cmp    $0x708,%eax
-jae    <T> <_ZN10CIPCounter11setLoadTermEh+0x44>
-mov    $0x708,%eax
-mov    0x8(%ebp),%edx
-mov    %eax,0xc(%edx)
+cmp    $0x707,%eax
+ja     <T> <_ZN10CIPCounter11setLoadTermEh+0x51>
+mov    0x8(%ebp),%eax
+movl   $0x708,0xc(%eax)
```

## _ZN10CIPCounter13setMinIPCountEh  [DIFF]  pm=10
```diff
-movzbl -0x4(%ebp),%eax
-cmp    $0xc8,%al
-jbe    <T> <_ZN10CIPCounter13setMinIPCountEh+0x19>
-mov    $0xffffffc8,%eax
-mov    0x8(%ebp),%edx
-mov    %al,(%edx)
+cmpb   $0xc8,-0x4(%ebp)
+jbe    <T> <_ZN10CIPCounter13setMinIPCountEh+0x18>
+mov    0x8(%ebp),%eax
+movb   $0xc8,(%eax)
```

## _ZN10CIPCounter9setOptionEhh  [NEAR]  pm=20
```diff
-sub    $0x28,%esp
+sub    $0x10,%esp
-mov    %dl,-0xc(%ebp)
-mov    %al,-0x10(%ebp)
-cmpb   $0x0,-0xc(%ebp)
+mov    %dl,-0x4(%ebp)
+mov    %al,-0x8(%ebp)
+cmpb   $0x0,-0x4(%ebp)
-movzbl -0x10(%ebp),%eax
+movzbl -0x8(%ebp),%eax
-cmpb   $0x1,-0xc(%ebp)
+cmpb   $0x1,-0x4(%ebp)
-movzbl -0x10(%ebp),%eax
+movzbl -0x8(%ebp),%eax
-cmpb   $0x2,-0xc(%ebp)
+cmpb   $0x2,-0x4(%ebp)
-cmpb   $0x3,-0xc(%ebp)
+cmpb   $0x3,-0x4(%ebp)
-cmpb   $0x4,-0xc(%ebp)
+cmpb   $0x4,-0x4(%ebp)
```

## _ZN11CCashObject15GetBuddysObjectEPP6CBuddy  [NEAR]  pm=22
```diff
-sub    $0x14,%esp
-movl   $0x0,-0x4(%ebp)
-mov    -0x4(%ebp),%eax
+sub    $0x28,%esp
+movl   $0x0,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x4(%ebp),%ecx
+mov    -0xc(%ebp),%ecx
-addl   $0x1,-0x4(%ebp)
-cmpl   $0x1f,-0x4(%ebp)
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x1f,-0xc(%ebp)
-movl   $0x20,-0x4(%ebp)
+movl   $0x20,-0xc(%ebp)
-mov    -0x4(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x4(%ebp),%ecx
+mov    -0xc(%ebp),%ecx
-mov    -0x4(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x4(%ebp),%eax
+mov    -0xc(%ebp),%eax
```

## _ZN11CUdpHandler16InitServerSocketEi  [DIFF]  pm=71
```diff
-push   %esi
-push   %ebx
-sub    $0x40,%esp
+sub    $0x58,%esp
-mov    0x8(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,(%eax)
-jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x58>
+jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x56>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x1b1>
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x1ab>
+lea    -0x20(%ebp),%eax
-movw   $0x2,-0x24(%ebp)
+movw   $0x2,-0x20(%ebp)
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x1c(%ebp)
-mov    %ax,-0x22(%ebp)
-lea    -0x24(%ebp),%edx
+mov    %ax,-0x1e(%ebp)
+lea    -0x20(%ebp),%edx
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x12b>
+je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x125>
-mov    -0xc(%ebp),%eax
-cmp    $0x62,%eax
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0xda>
-cmp    $0x63,%eax
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0xef>
-test   %eax,%eax
-je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x121>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0xfd>
+cmpl   $0x62,-0xc(%ebp)
+jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0xe0>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x122>
+jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x11c>
+cmpl   $0x63,-0xc(%ebp)
+jne    <T> <_ZN11CUdpHandler16InitServerSocketEi+0xf4>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x122>
+jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x11c>
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN11CUdpHandler16InitServerSocketEi+0x11c>
-jmp    <T> <_ZN11CUdpHandler16InitServerSocketEi+0x122>
-nop
-movl   $0xf4240,-0x28(%ebp)
+movl   $0xf4240,-0x24(%ebp)
-lea    -0x28(%ebp),%edx
+lea    -0x24(%ebp),%edx
-mov    -0x28(%ebp),%esi
-mov    0x8(%ebp),%eax
-mov    (%eax),%ebx
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
+mov    -0x24(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-add    $0x40,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
```

## _ZN12CApplication15TranslateSignalEv  [DIFF]  pm=58
```diff
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x17e>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x128>
-je     <T> <_ZN12CApplication15TranslateSignalEv+0x128>
+je     <T> <_ZN12CApplication15TranslateSignalEv+0x156>
-lea    -0x3e(%ebp),%eax
+lea    -0x3a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x3a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
+lea    -0x4c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x34(%ebp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %ax,-0x30(%ebp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    0xc(%eax),%eax
-mov    %ax,-0x2e(%ebp)
-lea    -0x3e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x325>
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN24Packet_Monitor_Event_EndC1Ev>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %ax,-0x3e(%ebp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0xc(%eax),%eax
+mov    %ax,-0x3c(%ebp)
-call   <T> <_ZN17CPacketTranslater10OnEventEndEP12PacketHeader>
+call   <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader>
```

## _ZN12CApplication4LoadEiPPc  [DIFF]  pm=561
```diff
-sub    $0x18c,%esp
+sub    $0x13c,%esp
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-lea    -0x9d(%ebp),%eax
+lea    -0x95(%ebp),%eax
-lea    -0x9d(%ebp),%eax
+lea    -0x95(%ebp),%eax
-lea    -0xa4(%ebp),%eax
+lea    -0x9c(%ebp),%eax
-lea    -0xa4(%ebp),%edx
+lea    -0x9c(%ebp),%edx
-lea    -0xa4(%ebp),%eax
+lea    -0x9c(%ebp),%eax
-lea    -0xa4(%ebp),%eax
+lea    -0x9c(%ebp),%eax
-lea    -0x9d(%ebp),%eax
+lea    -0x95(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x9d(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x95(%ebp),%eax
-lea    -0x95(%ebp),%eax
+lea    -0x8d(%ebp),%eax
-lea    -0x95(%ebp),%eax
+lea    -0x8d(%ebp),%eax
-lea    -0x9c(%ebp),%eax
+lea    -0x94(%ebp),%eax
-lea    -0x9c(%ebp),%edx
+lea    -0x94(%ebp),%edx
-lea    -0x9c(%ebp),%eax
+lea    -0x94(%ebp),%eax
-lea    -0x9c(%ebp),%eax
+lea    -0x94(%ebp),%eax
-lea    -0x95(%ebp),%eax
+lea    -0x8d(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x95(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x8d(%ebp),%eax
... (481 lines omitted) ...
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xf13>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xf3c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-movb   $0x0,-0x39(%ebp)
+movb   $0x0,-0xb5(%ebp)
-lea    -0x39(%ebp),%edx
+lea    -0xb5(%ebp),%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xff3>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1022>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-add    $0x18c,%esp
+add    $0x13c,%esp
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x10b1>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x10e0>
```

## _ZN12CBuddyHandle11addFromCashEP6CBuddy  [DIFF]  pm=7
```diff
-jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xa7>
+jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xaa>
-movzbl -0x1c(%ebp),%ebx
+movzbl -0x1c(%ebp),%eax
+movzbl %al,%ebx
-jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xa7>
+jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xaa>
```

## _ZN12CUserManager11AddSchoolNoEjh  [NEAR]  pm=20
```diff
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xd4(%ebp),%edx
+lea    -0xd0(%ebp),%edx
-lea    -0xd4(%ebp),%edx
+lea    -0xd0(%ebp),%edx
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xd4(%ebp),%eax
+lea    -0xd0(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
-lea    -0xbc(%ebp),%eax
+lea    -0xd4(%ebp),%eax
```

## _ZN12CUserManager14GetSchoolCountEjPjRh  [DIFF]  pm=130
```diff
-push   %edi
-push   %esi
-sub    $0x6c,%esp
+sub    $0x64,%esp
-lea    -0x48(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x28(%ebp),%eax
-je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x21c>
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x20(%ebp)
-lea    -0x48(%ebp),%eax
+je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x21a>
+movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x10(%ebp)
+lea    -0x28(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    -0x1c(%ebp),%edx
+mov    %eax,-0xc(%ebp)
+lea    -0x34(%ebp),%eax
+mov    -0xc(%ebp),%edx
-jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x17b>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x179>
+mov    -0x14(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-addl   $0x1,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
... (50 lines omitted) ...
-je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1bb>
+je     <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1b9>
-cmp    -0x20(%ebp),%eax
-jle    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1bb>
+cmp    -0x10(%ebp),%eax
+jle    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1b9>
-jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1c0>
+jmp    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0x1be>
-jne    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0xca>
-mov    -0x20(%ebp),%eax
+jne    <T> <_ZN12CUserManager14GetSchoolCountEjPjRh+0xc8>
+mov    -0x10(%ebp),%eax
+movl   $0x426,0x8(%esp)
+movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-movzbl %al,%esi
-mov    0xc(%ebp),%ebx
-movl   $0x426,0x8(%esp)
-movl   $&_ZZN12CUserManager14GetSchoolCountEjPjRhE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+movzbl %al,%edx
+mov    0xc(%ebp),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
```

## _ZN12CUserManager17InsertUser_CharNoEjP5CUser  [NEAR]  pm=28
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
-lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%edx
+lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%edx
-movzbl -0x34(%ebp),%eax
+movzbl -0x2c(%ebp),%eax
-mov    %eax,%esi
+mov    %eax,%edi
-mov    %eax,%ebx
-mov    0xc(%ebp),%edi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %edi,0xc(%esp)
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
```

## _ZN12CUserManager19InsertUser_CharNameEPcP5CUser  [NEAR]  pm=24
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%edx
-movzbl -0x1c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+movzbl -0x14(%ebp),%ebx
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
```

## _ZN12CUserManager23SendConnectedBuddysListEP5CUser  [DIFF]  pm=119
```diff
+push   %esi
-sub    $0x604,%esp
+sub    $0x600,%esp
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20c>
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x207>
-movl   $0x0,-0x14(%ebp)
+movl   $0x0,-0x18(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x142>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x143>
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x107>
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x107>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x18(%ebp),%ebx
+mov    -0x10(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x106>
-mov    -0x14(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x107>
... (39 lines omitted) ...
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    -0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
+je     <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x1ac>
-jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x20d>
-nop
-add    $0x604,%esp
+jmp    <T> <_ZN12CUserManager23SendConnectedBuddysListEP5CUser+0x207>
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser7GetDBIDEv>
+mov    %eax,-0x5e5(%ebp)
+mov    -0x18(%ebp),%eax
+shl    $0x2,%eax
+lea    0x0(,%eax,8),%ecx
+mov    -0x18(%ebp),%eax
+mov    %eax,%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+add    %eax,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0xf,%eax
+mov    %ax,-0xa(%ebp)
+movzwl -0xa(%ebp),%esi
+lea    -0x5ef(%ebp),%ebx
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12SendToServerEPci>
+add    $0x600,%esp
+pop    %esi
```

## _ZN12momiji_event13EndEffectTask10_DoExecuteEv  [DIFF]  pm=11
```diff
-je     <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x104>
+je     <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x11e>
+jmp    <T> <_ZN12momiji_event13EndEffectTask10_DoExecuteEv+0x91>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```

## _ZN13CMemberExpTbl11Parse_TableEPci  [DIFF]  pm=13
```diff
-jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7f>
+jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7d>
-je     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7a>
+je     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x78>
-jg     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7a>
+jg     <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x78>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax,%ebx,4)
+mov    0x8(%ebp),%edx
+mov    %eax,0x8(%edx,%ebx,4)
-jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7f>
+jmp    <T> <_ZN13CMemberExpTbl11Parse_TableEPci+0x7d>
```

## _ZN13CMemberExpTbl17GetMemberExpLevelEj  [DIFF]  pm=18
```diff
-ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x41>
+ja     <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x44>
+movzbl %al,%eax
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x84>
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x6b>
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x6f>
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x84>
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x63>
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x66>
-jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x7c>
+jae    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x80>
+nop
-jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x4c>
-jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x7d>
+jne    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x4f>
+jmp    <T> <_ZN13CMemberExpTbl17GetMemberExpLevelEj+0x81>
```

## _ZN13CPacketTracer8WriteLogEv  [DIFF]  pm=13
```diff
-add    %eax,%eax
-mov    %eax,%edx
-shl    $0x4,%edx
+lea    (%eax,%eax,1),%edx
+mov    %edx,%eax
+shl    $0x4,%eax
+sub    %edx,%eax
+mov    %ecx,%edx
-mov    %ecx,%eax
-sub    %edx,%eax
+mov    %edx,%eax
-jne    <T> <_ZN13CPacketTracer8WriteLogEv+0x80>
+jne    <T> <_ZN13CPacketTracer8WriteLogEv+0x83>
```

## _ZN13CTcpNetSystem14OpenTcpServiceERiPKct  [DIFF]  pm=70
```diff
-push   %esi
-sub    $0x50,%esp
+sub    $0x64,%esp
-mov    %ax,-0x2c(%ebp)
+mov    %ax,-0x3c(%ebp)
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-xor    $0x1,%eax
-je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x9b>
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x9c>
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1aa>
-movzwl -0x2c(%ebp),%eax
+jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1bb>
+movzwl -0x3c(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
-xor    $0x1,%eax
-je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x129>
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x12c>
-movzwl -0x2c(%ebp),%ebx
+movzwl -0x3c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x24(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1aa>
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CTcpNetSystem14OpenTcpServiceERiPKct+0x1bb>
+mov    -0x18(%ebp),%eax
-mov    %eax,%esi
+mov    %eax,-0x14(%ebp)
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x18(%ebp),%eax
-add    $0x50,%esp
+add    $0x64,%esp
-pop    %esi
```

## _ZN13CTcpNetSystem19CleanTcpSendPacketQEv  [DIFF]  pm=65
```diff
-sub    $0x30,%esp
+sub    $0x20,%esp
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x81>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x7e>
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
+mov    (%eax),%esi
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x81>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0x7e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+test   %ebx,%ebx
+je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xd9>
+mov    0x8(%ebp),%eax
+add    $0x100,%eax
+mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
+mov    %esi,(%esp)
+call   <T> <_ZN14CTcpSendBufferdlEPv>
+jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xc9>
-test   %ebx,%ebx
-je     <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xdf>
-mov    0x8(%ebp),%eax
-add    $0x100,%eax
-mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexEC1EPS0_>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpSendBufferdlEPv>
-jmp    <T> <_ZN13CTcpNetSystem19CleanTcpSendPacketQEv+0xcf>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
+nop
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
-add    $0x30,%esp
+add    $0x20,%esp
```

## _ZN13CTcpNetSystem4InitEt  [DIFF]  pm=12
```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-je     <T> <_ZN13CTcpNetSystem4InitEt+0xcb>
+je     <T> <_ZN13CTcpNetSystem4InitEt+0xc9>
-jmp    <T> <_ZN13CTcpNetSystem4InitEt+0xfd>
+jmp    <T> <_ZN13CTcpNetSystem4InitEt+0xfb>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-je     <T> <_ZN13CTcpNetSystem4InitEt+0x136>
+je     <T> <_ZN13CTcpNetSystem4InitEt+0x132>
```

## _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE  [DIFF]  pm=3
```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
-nop
```

## _ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler  [DIFF]  pm=121
```diff
-push   %ebx
-sub    $0x64,%esp
+sub    $0x68,%esp
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x6e>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x68>
+movl   $&_ZZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandlerE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+mov    0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0xca>
+movl   $0x273,0x8(%esp)
-movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclMember is Null, member key(%d)\n",0x8(%esp)
+movl   $"[MEMBER]\tCMemberManager::LoadMember()\tpclUser is Null, member key(%d)\n",0x8(%esp)
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-mov    0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
... (41 lines omitted) ...
+mov    $0x1,%eax
+jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x214>
+lea    -0x42(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-lea    -0x3a(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x42(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN14CMemberManager10LoadMemberEjR14STMemberDBInfojjP14CServerHandler+0x210>
-movl   $0x1,0x8(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc>
-mov    $0x1,%eax
-add    $0x64,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## _ZN14CMemberManager12DeleteMemberEjb  [DIFF]  pm=22
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0xc(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0xc(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    0xc(%ebp),%ebx
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
```

## _ZN14CMemberManager12InsertMemberEjP7CMember  [DIFF]  pm=7
```diff
-je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xab>
+je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xae>
+xor    $0x1,%eax
-jne    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xa4>
+je     <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xa7>
-jmp    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xed>
+jmp    <T> <_ZN14CMemberManager12InsertMemberEjP7CMember+0xf0>
```

## _ZN14CMemberManager13MemerMemLoginEjP5CUser  [DIFF]  pm=52
```diff
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x33c>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x337>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2df>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2da>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2d9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2d4>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x319>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2fe>
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x314>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x2f9>
+movl   $0x0,-0x1c(%ebp)
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+test   %eax,%eax
-je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x381>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x37e>
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x3be>
+mov    %eax,-0x1c(%ebp)
+jmp    <T> <_ZN14CMemberManager13MemerMemLoginEjP5CUser+0x3bb>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
```

## _ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb  [DIFF]  pm=22
```diff
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x95>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x97>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x105>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x109>
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0xfe>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x102>
-xor    $0x1,%eax
+test   %eax,%eax
+sete   %al
-je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x105>
+je     <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x109>
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
-jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10a>
+jmp    <T> <_ZN14CMemberManager14RegisterMemberEP7CMembersP5CUserb+0x10e>
```

## _ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h  [DIFF]  pm=16
```diff
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc4>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc7>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xca>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
-jge    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xcd>
+jge    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc4>
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
+jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
```

## _ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i  [DIFF]  pm=80
```diff
-push   %ebx
-sub    $0x24,%esp
+sub    $0x38,%esp
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x12>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x1d>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x1c>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x3d>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x3c>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x6c>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x68>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x62>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x5e>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x63>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x8a>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x86>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
-cmpl   $0xffffffff,-0xc(%ebp)
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
-cmpl   $0x0,-0xc(%ebp)
-jle    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xb0>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
+cmpl   $0xffffffff,-0x1c(%ebp)
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
+cmpl   $0x0,-0x1c(%ebp)
+jle    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa9>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa6>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x9f>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xa4>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x132>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13f>
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xed>
+je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xf0>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xe6>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xe9>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0xee>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-mov    %eax,%ebx
+mov    %eax,-0x14(%ebp)
-cwtl
+mov    %ax,-0xe(%ebp)
+movswl -0xe(%ebp),%eax
-cmp    %eax,%ebx
-setae  %al
-test   %al,%al
-je     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x132>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+cmp    -0x14(%ebp),%eax
+ja     <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13f>
-jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x12b>
+jne    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x138>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x13d>
-jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x137>
+jmp    <T> <_ZN14CMemberManager21IsPossableMemberEnterEP5CUserP7CMemberS1_S3_i+0x144>
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## _ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh  [DIFF]  pm=29
```diff
-je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb5>
+je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa0>
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x37>
-movzbl &_ZL12MEMBER_LOWER,%eax
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x3e>
-movzbl &_ZL12MEMBER_UPPER,%eax
-mov    %al,-0x11(%ebp)
-cmpl   $0x1,0x18(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x55>
+jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x40>
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa1>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x8e>
+movb   $0x2,-0x11(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x69>
-mov    0x10(%ebp),%eax
-mov    %eax,-0x19(%ebp)
-mov    0x14(%ebp),%eax
-mov    %eax,-0x15(%ebp)
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa1>
+je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x82>
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb6>
+jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa0>
+mov    0x10(%ebp),%eax
+mov    %eax,-0x19(%ebp)
+mov    0x14(%ebp),%eax
+mov    %eax,-0x15(%ebp)
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb6>
-nop
```

## _ZN14CMemberManager25MemberRegisterFlagProcessEv  [DIFF]  pm=37
```diff
-mov    %eax,-0x20(%ebp)
-lea    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x18(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-xor    $0x1,%eax
-jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10d>
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10d>
-jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x93>
+jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x95>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x6c>
-mov    -0xc(%ebp),%eax
+jne    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x6e>
+mov    -0x10(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN14CMemberManager25MemberRegisterFlagProcessEv+0x10e>
-nop
```

## _ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi  [DIFF]  pm=53
```diff
-push   %ebx
-jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x110>
+jg     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x10e>
-jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x113>
+jle    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x111>
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4b>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x4a>
-ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x116>
+ja     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x114>
-mov    %eax,-0xc(%ebp)
-cmpl   $0xffffffff,-0xc(%ebp)
+mov    %eax,-0x8(%ebp)
+cmpl   $0xffffffff,-0x8(%ebp)
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x6a>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x69>
+movl   $0x0,-0x8(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8f>
+je     <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x8e>
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    %eax,-0x8(%ebp)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xde>
+mov    %eax,-0x4(%ebp)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0xdd>
-mov    -0xc(%ebp),%edx
+mov    -0x8(%ebp),%edx
-mov    %eax,-0x8(%ebp)
+mov    %eax,-0x4(%ebp)
-lea    -0x3e8(%eax),%ebx
+lea    -0x3e8(%eax),%ecx
-mov    (%eax,%edx,4),%edx
-mov    -0x8(%ebp),%eax
-lea    (%edx,%eax,1),%ecx
+mov    (%eax,%edx,4),%eax
+mov    %eax,%edx
+add    -0x4(%ebp),%edx
-lea    0x5138(%ebx),%edx
-mov    %ecx,(%eax,%edx,4)
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+add    $0x5138,%ecx
+mov    %edx,(%eax,%ecx,4)
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x117>
+jmp    <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi+0x115>
-add    $0x10,%esp
-pop    %ebx
-pop    %ebp
+leave
```

## _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader  [DIFF]  pm=116
```diff
-sub    $0x2c,%esp
+sub    $0x3c,%esp
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1c8>
-cmp    $0x27ff,%ax
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-cmp    $0x3e7,%ax
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
+mov    %ax,-0x1e(%ebp)
+cmpw   $0x27ff,-0x1e(%ebp)
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x171>
+cmpw   $0x3e7,-0x1e(%ebp)
+jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x171>
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xcc>
-je     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
+je     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xcc>
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xca>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xcc>
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xbe>
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xc0>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
+movzwl -0x1e(%ebp),%eax
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
+movzwl -0x1e(%ebp),%edx
-test   %eax,%eax
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x147>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x13f>
+movzwl -0x1e(%ebp),%ebx
+movl   $0x1db,0x8(%esp)
+movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
... (36 lines omitted) ...
-movzwl (%eax),%eax
-movzwl %ax,%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
-mov    0xc(%eax,%edx,4),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-mov    %eax,0x4(%esp)
-movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE14packet_counter,(%esp)
-call   <T> <_ZN14CPacketCounterILi1000ELi10240EE12AfterProcessEi>
-nop
-mov    $0x1,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
-mov    %eax,0x4(%esp)
-movl   $"Undefined Packet Err : Game Message with identifier %d has arrived.\n",(%esp)
-call   <T> <printf>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
-movl   $0x1fa,0x8(%esp)
-movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Undefined Packet Err: CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",0x8(%esp)
-movl   $"./log/Decoder",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
-add    $0x2c,%esp
+add    $0x3c,%esp
```

## _ZN14CServerHandler20GetTcpGameServerByChEh  [DIFF]  pm=7
```diff
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x63>
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x62>
-je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x58>
+je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x57>
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x96>
-nop
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x95>
```

## _ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb  [DIFF]  pm=45
```diff
+push   %edi
+push   %esi
-sub    $0x24,%esp
+sub    $0x2c,%esp
-mov    %eax,-0x14(%ebp)
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x28(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x20(%ebp)
-je     <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0x5d>
-mov    -0xc(%ebp),%eax
-add    $0x15180,%eax
-mov    %eax,-0xc(%ebp)
+je     <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0x5b>
+addl   $0x15180,-0x20(%ebp)
-mov    -0xc(%ebp),%edx
+mov    -0x20(%ebp),%edx
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb+0xa3>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
-add    $0x24,%esp
+add    $0x2c,%esp
+pop    %esi
+pop    %edi
```

## _ZN16CDNFProhibitUser20IsTimeOutConnectableEv  [DIFF]  pm=14
```diff
+sub    $0x4,%esp
-setle  %al
-test   %al,%al
-je     <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x2c>
-mov    $0x1,%eax
-jmp    <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x31>
-mov    $0x0,%eax
-pop    %ebp
+jg     <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x2c>
+movl   $0x1,-0x4(%ebp)
+jmp    <T> <_ZN16CDNFProhibitUser20IsTimeOutConnectableEv+0x33>
+movl   $0x0,-0x4(%ebp)
+mov    -0x4(%ebp),%eax
+leave
```

## _ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb  [DIFF]  pm=2
```diff
+movzwl -0x4(%ebp),%edx
-movzwl -0x4(%ebp),%edx
```

## _ZN16CServerInterface19IsHeartBeatTimeOverEv  [DIFF]  pm=16
```diff
+push   %ebx
-sete   %al
-test   %al,%al
-je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x51>
+sete   %bl
+test   %bl,%bl
+je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x52>
-seta   %al
-test   %al,%al
-je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x4a>
+seta   %bl
+test   %bl,%bl
+je     <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x4b>
-jmp    <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x56>
+jmp    <T> <_ZN16CServerInterface19IsHeartBeatTimeOverEv+0x57>
+pop    %ebx
```

## _ZN16village_attacked23CVillageAttackedManager10OnScheduleEv  [DIFF]  pm=74
```diff
-movl   $0x0,-0x18(%ebp)
-mov    %eax,-0x14(%ebp)
-movl   $0x1,-0xc(%ebp)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x15e>
-mov    -0xc(%ebp),%edx
+mov    %eax,-0x18(%ebp)
+movl   $0x1,-0x10(%ebp)
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x159>
+mov    -0x10(%ebp),%edx
-mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,8),%ebx
-mov    -0xc(%ebp),%edx
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ebx
+mov    -0x10(%ebp),%edx
-mov    -0xc(%ebp),%edx
+mov    -0x10(%ebp),%edx
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE(%eax),%eax
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+cmp    -0x18(%ebp),%eax
+jge    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x155>
+mov    -0x10(%ebp),%eax
-mov    -0x14(%ebp),%eax
-cmp    -0x1c(%ebp),%eax
-jle    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0x15a>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-addl   $0x1,-0xc(%ebp)
+addl   $0x1,-0x10(%ebp)
-cmp    %eax,-0xc(%ebp)
+cmp    %eax,-0x10(%ebp)
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0xaa>
-mov    -0x18(%ebp),%edx
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager10OnScheduleEv+0xa3>
+mov    -0x1c(%ebp),%edx
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE+0x14(%eax),%ebx
-mov    -0x18(%ebp),%edx
+add    %eax,%eax
+add    $0x5,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ebx
+mov    -0x1c(%ebp),%edx
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE+0x10(%eax),%ecx
-mov    -0x18(%ebp),%edx
+add    %eax,%eax
+add    $0x4,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%ecx
+mov    -0x1c(%ebp),%edx
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE+0xc(%eax),%eax
+add    %eax,%eax
+add    $0x3,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x10(%ebp)
```

## _ZN16village_attacked23CVillageAttackedManager11InsertTimerEii  [DIFF]  pm=94
```diff
+push   %edi
+push   %esi
-sub    $0x14,%esp
+sub    $0x3c,%esp
-mov    &_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    0xc(%ebp),%eax
+sub    $0x258,%eax
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x6a>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x2c(%ebp)
+mov    -0x2c(%ebp),%ebx
-mov    &_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    0xc(%ebp),%eax
+sub    $0x12c,%eax
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0xd8>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
... (14 lines omitted) ...
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x24(%ebp)
+mov    -0x24(%ebp),%ebx
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x1ab>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x20(%ebp)
+mov    -0x20(%ebp),%ebx
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x212>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
-add    $0x14,%esp
+add    $0x3c,%esp
+pop    %esi
+pop    %edi
```

## _ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv  [DIFF]  pm=48
```diff
+push   %edi
+push   %esi
-sub    $0x24,%esp
+sub    $0x2c,%esp
-jne    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x140>
+jne    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x17a>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x24(%ebp)
-jb     <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x8f>
+jb     <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0xad>
-add    -0xc(%ebp),%eax
+add    -0x24(%ebp),%eax
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x8c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x20(%ebp)
+mov    -0x20(%ebp),%ebx
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0xeb>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x125>
-add    -0xc(%ebp),%eax
+add    -0x24(%ebp),%eax
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x106>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x141>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv+0x17b>
-add    $0x24,%esp
+add    $0x2c,%esp
+pop    %esi
+pop    %edi
```

## _ZN16village_attacked23CVillageAttackedManager25SendRequestRevengeDungeonEPc  [DIFF]  pm=17
```diff
-sub    $0x28,%esp
+push   %ebx
+sub    $0x4,%esp
-mov    %eax,-0xc(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x30(%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0x30(%edx),%edx
+mov    0xc(%ebp),%ebx
-mov    -0xc(%ebp),%edx
-mov    %eax,0xe(%edx)
-leave
+mov    %eax,0xe(%ebx)
+add    $0x4,%esp
+pop    %ebx
+pop    %ebp
```

## _ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv  [DIFF]  pm=17
```diff
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0x1c8>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv+0x1ca>
-mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,8),%esi
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%esi
-shl    $0x3,%eax
-mov    &_ZN16village_attacked26village_attacked_schedulerE(%eax),%eax
+add    %eax,%eax
+mov    &_ZN16village_attacked26village_attacked_schedulerE(,%eax,4),%eax
-mov    -0x24(%ebp),%eax
-mov    &_ZN16village_attacked19MAX_SCHEDULER_COUNTE,%edx
-shl    $0x2,%edx
-lea    (%eax,%edx,1),%edx
+mov    &_ZN16village_attacked19MAX_SCHEDULER_COUNTE,%eax
+shl    $0x2,%eax
+mov    %eax,%edx
+add    -0x24(%ebp),%edx
```

## _ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader  [DIFF]  pm=32
```diff
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x302>
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x305>
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x308>
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x302>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30b>
+je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x305>
-lea    -0x4f(%ebp),%edx
+lea    -0x4f(%ebp),%eax
+movl   $0xb,0x8(%esp)
+mov    %eax,0x4(%esp)
-movl   $0xb,0x8(%esp)
-mov    %edx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
-nop
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
-nop
-jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x30c>
+jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x306>
```

## _ZN17CPacketTranslater11OnUserRepelEP12PacketHeader  [DIFF]  pm=70
```diff
-sub    $0x5c,%esp
+sub    $0x6c,%esp
-lea    -0x41(%ebp),%eax
+lea    -0x45(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x45(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x4c(%ebp),%esi
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x45(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x1d4>
-lea    -0x41(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x1da>
+lea    -0x45(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2de>
+jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e4>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e1>
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e7>
+mov    -0x2c(%ebp),%eax
-mov    -0x24(%ebp),%edx
-mov    %eax,0xa(%edx)
+mov    %eax,-0x28(%ebp)
+mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,0xa(%eax)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e8>
-jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x276>
+jne    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x27c>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x26f>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x275>
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e8>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2d7>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2dd>
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e8>
-jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e2>
+jmp    <T> <_ZN17CPacketTranslater11OnUserRepelEP12PacketHeader+0x2e8>
-add    $0x5c,%esp
+add    $0x6c,%esp
```

## _ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader  [DIFF]  pm=10
```diff
-je     <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x208>
+je     <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
+jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x206>
-jmp    <T> <_ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader+0x209>
-nop
```

## _ZN17CPacketTranslater12OnEventStartEP12PacketHeader  [DIFF]  pm=68
```diff
-lea    -0x39(%ebp),%eax
+lea    -0x41(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x41(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x48(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x41(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x17a>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x18a>
+lea    -0x41(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+movzwl 0x10(%eax),%eax
+mov    %ax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+movzwl 0xe(%eax),%eax
+mov    %ax,-0x22(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%eax
-mov    -0x20(%ebp),%eax
-movzwl 0x10(%eax),%eax
-movzwl %ax,%edi
-mov    -0x20(%ebp),%eax
-movzwl 0xe(%eax),%eax
-movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+movzwl -0x24(%ebp),%esi
+movzwl -0x22(%ebp),%ebx
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x282>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x292>
-jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x21c>
+jne    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x22c>
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x215>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x225>
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x282>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x292>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x27d>
+jmp    <T> <_ZN17CPacketTranslater12OnEventStartEP12PacketHeader+0x28d>
```

## _ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader  [DIFF]  pm=32
```diff
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x285>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28e>
+je     <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x284>
-cmpl   $0x0,-0x14(%ebp)
-sete   %bl
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x140>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x134>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x12b>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x11f>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x1b6>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x1ac>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x178>
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x16e>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x285>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x285>
-jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x232>
+jne    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x228>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x22b>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x221>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x285>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x287>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x27d>
-jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader+0x285>
```

## _ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader  [DIFF]  pm=290
```diff
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50d>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x34(%ebp)
-mov    %eax,-0x14(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x34(%ebp)
-cmpl   $0x0,-0x34(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x510>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
... (210 lines omitted) ...
-movzbl &_ZL12MEMBER_LOWER,%eax
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x38e>
-movzbl &_ZL12MEMBER_UPPER,%eax
-mov    %al,-0x6f(%ebp)
-mov    -0x34(%ebp),%eax
+movb   $0x2,-0x6f(%ebp)
+cmpb   $0x1,-0x11(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x38c>
+movb   $0x1,-0x6f(%ebp)
+mov    -0x24(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-movzbl -0x21(%ebp),%eax
+movzbl -0x11(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4a5>
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x4a0>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x49e>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x499>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x506>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x501>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
-nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
-nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
-nop
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
```

## _ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader  [DIFF]  pm=266
```diff
-lea    -0x6d(%ebp),%eax
+lea    -0x79(%ebp),%eax
-lea    -0x6d(%ebp),%eax
+lea    -0x79(%ebp),%eax
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
-lea    -0x74(%ebp),%esi
+lea    -0x80(%ebp),%esi
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
-lea    -0x74(%ebp),%eax
+lea    -0x80(%ebp),%eax
-lea    -0x6d(%ebp),%eax
+lea    -0x79(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x475>
-lea    -0x6d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x492>
+lea    -0x79(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x2d0,%eax
+mov    %eax,-0x50(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x4c(%ebp)
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x48(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x2d0,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x50(%ebp),%eax
+mov    %eax,(%esp)
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x16d>
... (186 lines omitted) ...
-mov    -0x24(%ebp),%eax
-mov    %eax,-0x9a(%ebp)
-mov    -0x20(%ebp),%eax
-mov    %eax,-0x96(%ebp)
-mov    -0x40(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-lea    -0xac(%ebp),%eax
+lea    -0xb8(%ebp),%eax
-lea    -0xac(%ebp),%eax
+lea    -0xb8(%ebp),%eax
-mov    -0x44(%ebp),%eax
+mov    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x59a>
-jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x517>
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x534>
-lea    -0x54(%ebp),%eax
+lea    -0x60(%ebp),%eax
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x510>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x52d>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x59a>
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x578>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x595>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-nop
```

## _ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader  [DIFF]  pm=134
```diff
-lea    -0x45(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x45(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x4c(%ebp),%esi
+lea    -0x58(%ebp),%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x45(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x1e4>
-lea    -0x45(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x1ee>
+lea    -0x51(%ebp),%eax
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x30(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x17f>
-mov    -0x24(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%esi
-mov    -0x24(%ebp),%eax
+mov    %al,-0x25(%ebp)
+cmpb   $0x1,-0x25(%ebp)
+jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x185>
... (54 lines omitted) ...
-movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2ec>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f6>
-jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x286>
+jne    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x290>
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x27f>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x289>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2ec>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f6>
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2e7>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f1>
```

## _ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader  [DIFF]  pm=102
```diff
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x1c(%ebp)
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x18c>
-lea    -0x46(%ebp),%eax
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x183>
+lea    -0x4e(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x38(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x34(%ebp)
-movzbl %al,%eax
-mov    %eax,-0x28(%ebp)
... (22 lines omitted) ...
+jne    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x183>
+lea    -0x1846(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x183c(%ebp)
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x1838(%ebp)
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x1834(%ebp)
+movb   $0x0,-0x182f(%ebp)
+movw   $0x18,-0x1844(%ebp)
+lea    -0x1846(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    0xa(%eax),%eax
-mov    %eax,-0x1834(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x1830(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x182c(%ebp)
-movb   $0x0,-0x1827(%ebp)
-movzbl -0x1827(%ebp),%eax
-movzbl %al,%eax
-shl    $0x4,%eax
-add    $0x18,%eax
-mov    %ax,-0x183c(%ebp)
-lea    -0x183e(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x18c>
+jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x183>
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x187>
+jmp    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x17e>
```

## _ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader  [DIFF]  pm=194
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x4c>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x1a8>
-lea    -0x77(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Add_Buddy_ReplyC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x6d(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x69(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x35(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x17c>
-mov    -0x14(%ebp),%eax
-add    $0xe,%eax
-call   <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo>
-mov    -0x14(%ebp),%eax
-add    $0xe,%eax
... (114 lines omitted) ...
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x3e(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0x35(%eax),%eax
+mov    %al,-0x3d(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    -0x18(%ebp),%edx
+mov    0x30(%edx),%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
+add    $0x300,%ecx
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN21CBuddyRegisterManager16addBuddyRegisterEjj>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x1b3>
+mov    -0x18(%ebp),%eax
+movzbl 0x35(%eax),%eax
+mov    %al,-0x3d(%ebp)
+movzwl -0x75(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x77(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
-jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x25f>
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x251>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x258>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x24a>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b4>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2a6>
```

## _ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader  [DIFF]  pm=60
```diff
-lea    -0x39(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x3c(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x35(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x148>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x143>
+lea    -0x35(%ebp),%eax
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x252>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
+je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x24b>
+mov    0x8(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-lea    -0x4e(%ebp),%eax
+lea    -0x4a(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x44(%ebp)
-lea    -0x4e(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+lea    -0x4a(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x24b>
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1ea>
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1e5>
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1e3>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x1de>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x253>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x24b>
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x24b>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x246>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x253>
-nop
```

## _ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader  [DIFF]  pm=156
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x4c>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x253>
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x145>
-lea    -0x69(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Del_Buddy_ReplyC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x5f(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x5b(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x30(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x11f>
-mov    -0x14(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,0x4(%esp)
... (76 lines omitted) ...
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x10(%ebp)
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x300(%edx),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x15b>
+movb   $0x3,-0x3d(%ebp)
+movzwl -0x6b(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x6d(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x253>
-jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1fc>
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1f9>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1f5>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x1f2>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x253>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x24e>
```

## _ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader  [DIFF]  pm=169
```diff
-sub    $0x9c,%esp
+sub    $0x8c,%esp
-mov    %eax,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x130>
-movl   $0x0,-0x20(%ebp)
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x12e>
+movl   $0x0,-0x24(%ebp)
-mov    -0x20(%ebp),%edx
+mov    -0x24(%ebp),%edx
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
-addl   $0x1,-0x20(%ebp)
-cmpl   $0xfe,-0x20(%ebp)
+addl   $0x1,-0x24(%ebp)
+cmpl   $0xfe,-0x24(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x13e>
-mov    -0x2c(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x70(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x2c(%ebp),%eax
-mov    0x12(%eax),%esi
... (89 lines omitted) ...
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-cmpl   $0x0,-0x28(%ebp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+cmpl   $0x0,-0x30(%ebp)
-mov    -0x2c(%ebp),%edx
-mov    -0x28(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
-movl   $0x4c3,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+movl   $0x4dd,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-movl   $0x4c9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+movl   $0x4e3,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
-add    $0x9c,%esp
+add    $0x8c,%esp
```

## _ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader  [DIFF]  pm=152
```diff
-add    $0xd,%eax
-mov    %eax,%edx
+lea    0xd(%eax),%edx
-mov    0x6(%eax),%ebx
+mov    0x6(%eax),%eax
+mov    %eax,-0x20(%ebp)
-mov    %ebx,0x4(%esp)
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a7>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a2>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x256>
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x257>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x12b>
-mov    -0x18(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x12f>
+mov    -0x14(%ebp),%eax
+mov    %eax,-0x10(%ebp)
-xor    $0x1,%eax
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x19e>
-mov    -0x14(%ebp),%eax
-movb   $0x1,0xb(%eax)
-mov    -0x24(%ebp),%eax
... (72 lines omitted) ...
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"Game server regist success. Channel: %d",0x8(%esp)
+movzbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"Game server regist failed. Channel: %d is already exist.",0x8(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-mov    -0x14(%ebp),%eax
-movb   $0x0,0xa(%eax)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+add    $0xa,%eax
+movb   $0x0,(%eax)
+mov    -0x10(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a8>
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a2>
+mov    -0x18(%ebp),%eax
+lea    0xa(%eax),%ebx
-mov    -0xc(%ebp),%edx
-mov    %eax,0xa(%edx)
-mov    -0xc(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x18(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x2a8>
-nop
```

## _ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader  [DIFF]  pm=234
```diff
-sub    $0x50,%esp
+sub    $0x60,%esp
-lea    -0x48(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
-mov    %eax,%edx
-mov    -0x24(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0xa2>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0xa6>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
... (154 lines omitted) ...
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
-jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x325>
+jne    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x348>
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x31e>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x341>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x37a>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x39d>
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-nop
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-nop
-add    $0x50,%esp
+add    $0x60,%esp
```

## _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader  [DIFF]  pm=242
```diff
-sub    $0xb0,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
+sub    $0xc0,%esp
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x4f>
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
-lea    -0x70(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x78(%ebp),%eax
-lea    -0xa1(%ebp),%eax
+lea    -0xa9(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x66(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x6e(%ebp)
+mov    -0x18(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x78(%ebp),%eax
-lea    -0x31(%ebp),%eax
+lea    -0x39(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
... (162 lines omitted) ...
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0xa0(%eax),%eax
-lea    -0x70(%ebp),%edx
-mov    %edx,0x4(%esp)
+lea    -0x78(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2ef>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2ee>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2e8>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x2e7>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x344>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x343>
-add    $0xb0,%esp
+add    $0xc0,%esp
```

## _ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader  [DIFF]  pm=97
```diff
-sub    $0x40,%esp
+sub    $0x50,%esp
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,%edx
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xa2>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xa6>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,%edx
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%eax
-cmp    %eax,%edx
+mov    0x8(%ebp),%edx
+mov    0x6(%edx),%edx
+cmp    %edx,%eax
-je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0xf2>
+je     <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x100>
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
-mov    -0x18(%ebp),%eax
... (17 lines omitted) ...
+movzbl -0x11(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
-mov    -0x18(%ebp),%eax
-mov    0x6(%eax),%ebx
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
-jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x23a>
+jne    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x258>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x233>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x251>
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x294>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2b2>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x28f>
+jmp    <T> <_ZN17CPacketTranslater19OnInnerPacketLogoutEP12PacketHeader+0x2ad>
-add    $0x40,%esp
+add    $0x50,%esp
```

## _ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader  [DIFF]  pm=127
```diff
-push   %edi
-sub    $0x5c,%esp
+sub    $0x60,%esp
-movzwl %ax,%edi
+movzwl %ax,%eax
+mov    %eax,-0x1c(%ebp)
-mov    0xe(%eax),%esi
+mov    0xe(%eax),%eax
+mov    %eax,-0x18(%ebp)
-mov    0xa(%eax),%ebx
+mov    0xa(%eax),%eax
+mov    %eax,-0x14(%ebp)
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xae>
-movl   $0x1a60,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x136>
+mov    -0x20(%ebp),%eax
+mov    0xa(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x9c>
+mov    -0x20(%ebp),%eax
+mov    0xe(%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0xec>
+movl   $0x1a66,0x8(%esp)
+movl   $"OnRegisterEventItem",0x4(%esp)
-movl   $"db error not item",0x8(%esp)
... (47 lines omitted) ...
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN19COnTimeEventManager12SetEventItemEjj>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x320(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN19COnTimeEventManager10StartEventEv>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
-jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1c5>
+jne    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x202>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1be>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x1fb>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21f>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
-jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x21a>
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x257>
-add    $0x5c,%esp
+jmp    <T> <_ZN17CPacketTranslater19OnRegisterEventItemEP12PacketHeader+0x25f>
+nop
+add    $0x60,%esp
-pop    %edi
```

## _ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader  [DIFF]  pm=119
```diff
-sub    $0x5c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+sub    $0x6c,%esp
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x41>
-mov    -0x28(%ebp),%eax
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x48>
+mov    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x48>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x4f>
+mov    -0x34(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5a>
-mov    $"true",%ebx
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x5f>
-mov    $"false",%ebx
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x61>
+mov    $"true",%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x66>
+mov    $"false",%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%eax
-mov    %eax,%esi
... (39 lines omitted) ...
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x186>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1a5>
-lea    -0x40(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x180>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19f>
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1bc>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
-lea    -0x40(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1bc>
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1b2>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1d1>
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x19d>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1bc>
-lea    -0x39(%ebp),%eax
+lea    -0x49(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1d5>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x1f4>
+lea    -0x49(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x259>
+jne    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x278>
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x252>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x271>
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2bb>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2da>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2b6>
+jmp    <T> <_ZN17CPacketTranslater19OnWebQueryUserStateEP12PacketHeader+0x2d5>
-add    $0x5c,%esp
+add    $0x6c,%esp
```

## _ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader  [DIFF]  pm=8
```diff
-je     <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25b>
+je     <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
+jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
+jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater19OnWebRequestARSInfoEP12PacketHeader+0x25c>
-nop
```

## _ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader  [DIFF]  pm=62
```diff
-push   %edi
-sub    $0x5c,%esp
+sub    $0x60,%esp
-jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x4d>
+jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x4c>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
+mov    0xa(%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x40(%ebp)
+mov    %eax,-0x1c(%ebp)
+movb   $0x0,-0x3d(%ebp)
-mov    %eax,-0x20(%ebp)
-movb   $0x0,-0x41(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%edi
+mov    %eax,-0x18(%ebp)
-movswl %ax,%esi
+mov    %ax,-0x12(%ebp)
-mov    0x10(%eax),%ebx
+mov    0x10(%eax),%eax
+mov    %eax,-0x10(%ebp)
+movswl -0x12(%ebp),%ebx
-lea    -0x41(%ebp),%edx
+lea    -0x3d(%ebp),%edx
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
-movzbl -0x41(%ebp),%eax
+movzbl -0x3d(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+je     <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
-mov    -0x24(%ebp),%edx
-mov    %ax,0xe(%edx)
+mov    %eax,%edx
+mov    -0x24(%ebp),%eax
+mov    %dx,0xe(%eax)
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
-jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x18f>
+jne    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1a1>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x188>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x19a>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e9>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1fb>
-jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1e4>
+jmp    <T> <_ZN17CPacketTranslater20OnExchangeServerInfoEP12PacketHeader+0x1f6>
-add    $0x5c,%esp
+add    $0x60,%esp
-pop    %edi
```

## _ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader  [DIFF]  pm=107
```diff
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x271>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x26e>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x197>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x194>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x197>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x194>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x191>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x380>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x191>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x383>
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%edx
-mov    -0x28(%ebp),%edx
+mov    -0x24(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
... (27 lines omitted) ...
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x271>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x247>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x232>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x26e>
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x317>
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x314>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x310>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x30d>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x381>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x379>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x384>
+nop
```

## _ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader  [DIFF]  pm=56
```diff
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x14(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %edx,(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
-mov    0x26(%eax),%eax
-mov    %eax,%ebx
+mov    0x26(%eax),%ebx
-mov    0x22(%eax),%eax
-mov    %eax,%ecx
+mov    0x22(%eax),%ecx
-mov    0x1a(%eax),%eax
-mov    %eax,%edx
+mov    0x1a(%eax),%edx
-je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
-lea    -0x1810(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
+lea    -0x1815(%ebp),%eax
-mov    %eax,-0x1806(%ebp)
+mov    %eax,-0x180b(%ebp)
-mov    %eax,-0x1802(%ebp)
+mov    %eax,-0x1807(%ebp)
-mov    %eax,-0x17fe(%ebp)
-movb   $0xff,-0x17f9(%ebp)
-lea    -0x1810(%ebp),%eax
-add    $0x17,%eax
+mov    %eax,-0x1803(%ebp)
+movb   $0xff,-0x1d(%ebp)
+lea    -0x1815(%ebp),%eax
+lea    0x18(%eax),%edx
+lea    -0x1d(%ebp),%eax
-lea    -0x1810(%ebp),%eax
-add    $0x18,%eax
-mov    %eax,0x4(%esp)
+mov    %edx,0x4(%esp)
-movzbl -0x17f9(%ebp),%eax
+movzbl -0x1d(%ebp),%eax
-mov    %ax,-0x180e(%ebp)
-lea    -0x1810(%ebp),%eax
+mov    %ax,-0x1813(%ebp)
+lea    -0x1815(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x173>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16b>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x16e>
+jmp    <T> <_ZN17CPacketTranslater21OnPvPChannelUserCountEP12PacketHeader+0x166>
```

## _ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader  [DIFF]  pm=57
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x30(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x30(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x4e>
-mov    -0x30(%ebp),%eax
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater22OnRelayServerUserCheckEP12PacketHeader+0x4e>
+mov    -0x28(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%edx
-mov    -0x24(%ebp),%edx
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x41(%ebp),%edx
+lea    -0x3d(%ebp),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x44(%ebp),%esi
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    0x8(%ebp),%eax
+movl   $0xf,0x8(%esp)
+mov    %eax,0x4(%esp)
-movl   $0xf,0x8(%esp)
-mov    %edx,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
```

## _ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader  [DIFF]  pm=68
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x4c>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x18(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x140>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xc8>
+movl   $0x1112,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL",0x8(%esp)
+movl   $"./log/buddy",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xf7>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x129>
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x9f>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0xd1>
-je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x128>
+je     <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x15a>
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
-movl   $0x1112,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnQueryBuddyInfoDBReply\t  pclUser is NULL",0x8(%esp)
-movl   $"./log/buddy",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f7>
+jne    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1ee>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x1e7>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x251>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x24c>
+jmp    <T> <_ZN17CPacketTranslater23OnQueryBuddyInfoDBReplyEP12PacketHeader+0x243>
```

## _ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader  [DIFF]  pm=8
```diff
-jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc8>
+jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc0>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc7>
+je     <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc0>
-jmp    <T> <_ZN17CPacketTranslater23OnWebChangeUserHandicapEP12PacketHeader+0xc8>
-nop
```

## _ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader  [DIFF]  pm=399
```diff
-sub    $0x70,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x38(%ebp)
+sub    $0xa0,%esp
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x74(%ebp)
-mov    %eax,-0x30(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+mov    -0x6c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x68(%ebp)
+cmpl   $0x0,-0x68(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
+mov    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser9GetMemberEv>
+mov    %eax,-0x64(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0xa0(%eax),%eax
+mov    %eax,-0x60(%ebp)
+cmpl   $0x0,-0x64(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
+cmpl   $0x0,-0x60(%ebp)
+je     <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
+mov    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK7CMember21GetUpperMember_CharIdEv>
+mov    %eax,0x4(%esp)
+mov    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager14FindMemberUserEj>
+test   %eax,%eax
+setne  %al
+test   %al,%al
... (319 lines omitted) ...
-mov    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager21NoticeLevelUpToLowersEjj>
-addl   $0x1,-0x28(%ebp)
-addl   $0x27,-0x20(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-subl   $0x1,-0x24(%ebp)
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1df>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+addl   $0x1,-0x5c(%ebp)
+addl   $0x27,-0x54(%ebp)
+cmpl   $0x0,-0x58(%ebp)
+setne  %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x1fe>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
-jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x377>
+jne    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3b3>
-lea    -0x54(%ebp),%eax
+lea    -0x84(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x370>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3ac>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x40d>
-lea    -0x4c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3cc>
+jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x408>
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
-nop
-jmp    <T> <_ZN17CPacketTranslater24OnNoticeCharLiveOnTenMinEP12PacketHeader+0x3d7>
-nop
-add    $0x70,%esp
+add    $0xa0,%esp
```

## _ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader  [DIFF]  pm=68
```diff
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x101>
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0xe4>
+mov    0x8(%ebp),%edx
+mov    -0x24(%ebp),%eax
+imul   $0x65,%eax,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x20(%ebp)
-imul   $0x65,%eax,%eax
-add    $0x10,%eax
-add    -0x24(%ebp),%eax
-add    $0xc,%eax
+add    $0x1c,%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-movzwl 0x9(%eax),%eax
+movzwl 0x19(%eax),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x10,%eax
-movzwl 0x7(%eax),%eax
+movzwl 0x17(%eax),%eax
-mov    -0x24(%ebp),%edx
-imul   $0x65,%eax,%eax
-lea    (%edx,%eax,1),%eax
-add    $0x1b,%eax
-movzbl (%eax),%eax
+movzbl 0x1b(%eax),%eax
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1cf>
-jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x196>
+jne    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x175>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x18f>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x16e>
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1cf>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1eb>
+jmp    <T> <_ZN17CPacketTranslater24onReplyLoadTowerFullRankEP12PacketHeader+0x1ca>
```

## _ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader  [DIFF]  pm=104
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x4c>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0xb6>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0xb1>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x120>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x11b>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
-mov    -0x10(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x151>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x14c>
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
... (24 lines omitted) ...
-setg   %al
+setbe  %al
-je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x1cb>
-movb   $0x4,-0x35(%ebp)
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x65(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x1f3>
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
-mov    0x2c(%eax),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    0x2c(%eax),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ef>
+movb   $0x4,-0x35(%ebp)
+movzwl -0x63(%ebp),%eax
+movzwl %ax,%edx
+lea    -0x65(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
```

## _ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader  [DIFF]  pm=266
```diff
-sub    $0x11c,%esp
+sub    $0x12c,%esp
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x2c(%ebp)
-cmp    %eax,%ebx
-setne  %al
+cmp    -0x2c(%ebp),%eax
+sete   %al
-je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x76>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x150a,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"(Ignore another server msg: %d)",0x8(%esp)
-movl   $"./log/ItemLimitEdition",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0xdb>
-mov    -0x20(%ebp),%edx
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x2de>
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x9b>
+mov    -0x28(%ebp),%edx
+mov    -0x30(%ebp),%eax
-test   %eax,%eax
-sete   %al
-test   %al,%al
... (186 lines omitted) ...
+mov    %eax,-0x20(%ebp)
+movl   $0x150a,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"(Ignore another server msg: %d)",0x8(%esp)
+movl   $"./log/ItemLimitEdition",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3ff>
-jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x382>
+jne    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3a5>
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x37b>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x39e>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3dc>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3ff>
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3d7>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25onItemLimitEditionSellEndEP12PacketHeader+0x3fa>
-add    $0x11c,%esp
+add    $0x12c,%esp
```

## _ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader  [DIFF]  pm=87
```diff
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x50(%ebp),%esi
+lea    -0x58(%ebp),%esi
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x223>
-lea    -0x49(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x22b>
+lea    -0x51(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-movl   $0x0,-0x2c(%ebp)
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cc>
-mov    -0x2c(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    %eax,-0x38(%ebp)
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cf>
+mov    -0x30(%ebp),%eax
+mov    -0x38(%ebp),%edx
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c7>
-mov    -0x2c(%ebp),%eax
-mov    -0x30(%ebp),%edx
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cb>
+mov    -0x30(%ebp),%eax
+mov    -0x38(%ebp),%edx
-movzbl %al,%ebx
+mov    %al,-0x29(%ebp)
+movzbl -0x29(%ebp),%ebx
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
+je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1cb>
-je     <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
... (7 lines omitted) ...
-movzbl 0x3c(%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %dl,0xa(%eax)
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x38(%ebp),%eax
-mov    -0x30(%ebp),%edx
+mov    -0x38(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x1c8>
-nop
-addl   $0x1,-0x2c(%ebp)
-cmpl   $0x31,-0x2c(%ebp)
+addl   $0x1,-0x30(%ebp)
+cmpl   $0x31,-0x30(%ebp)
-movzwl %ax,%ebx
+mov    %ax,-0x32(%ebp)
+movzwl -0x32(%ebp),%ebx
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x301>
-jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x29f>
+jne    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2a7>
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x298>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2a0>
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f9>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x301>
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2f4>
+jmp    <T> <_ZN17CPacketTranslater26OnWebEmergencyPatchMessageEP12PacketHeader+0x2fc>
```

## _ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader  [DIFF]  pm=14
```diff
-je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a1>
+je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x19f>
-mov    0x12(%eax),%eax
-mov    %eax,%ebx
+mov    0x12(%eax),%ebx
-mov    -0x18(%ebp),%edx
-mov    %al,0x15e(%edx)
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dl,0x15e(%eax)
-je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a2>
+je     <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x19f>
-jmp    <T> <_ZN17CPacketTranslater27OnCheckOverlappedAccusationEP12PacketHeader+0x1a2>
-nop
```

## _ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader  [DIFF]  pm=298
```diff
-lea    -0x51(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x51(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x58(%ebp),%esi
+lea    -0x5c(%ebp),%esi
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x51(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
-lea    -0x51(%ebp),%eax
+lea    -0x55(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b8>
+lea    -0x55(%ebp),%eax
-movl   $0x0,-0x30(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x34(%ebp)
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b4>
+mov    -0x30(%ebp),%eax
-ja     <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x1b5>
... (218 lines omitted) ...
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3bb>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x380>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x395>
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3a6>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x380>
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3de>
-lea    -0x41(%ebp),%eax
+lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x3b8>
+lea    -0x45(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x480>
+jne    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x45a>
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x479>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x453>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c3>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e1>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4bb>
-jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4e9>
+jmp    <T> <_ZN17CPacketTranslater27OnMonitorFindFactoryHubUserEP12PacketHeader+0x4c3>
```

## _ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader  [DIFF]  pm=46
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x76>
-mov    -0x10(%ebp),%edx
-mov    -0x18(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x10,%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x6b>
+mov    0x8(%ebp),%eax
+mov    -0x14(%ebp),%edx
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x72>
-mov    -0x10(%ebp),%ebx
-mov    -0x10(%ebp),%edx
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x67>
+mov    -0x14(%ebp),%ebx
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
-add    $0x4,%edx
-mov    0xa(%eax,%edx,4),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x3,-0x10(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x3,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x3e>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x15c>
+jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x38>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x151>
-jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x102>
+jne    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xf7>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xfb>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0xf0>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x15c>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x151>
-jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x157>
+jmp    <T> <_ZN17CPacketTranslater27OnVillageMonsterFightResultEP12PacketHeader+0x14c>
```

## _ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader  [DIFF]  pm=189
```diff
-sub    $0x7c,%esp
+sub    $0x8c,%esp
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xef>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xf2>
+lea    -0x69(%ebp),%eax
-lea    -0x51(%ebp),%eax
+lea    -0x69(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x58(%ebp),%esi
+lea    -0x70(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x95>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x98>
-lea    -0x58(%ebp),%eax
+lea    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x8f>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x92>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
+lea    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xcc>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xcf>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb4>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0xb7>
-lea    -0x51(%ebp),%eax
+lea    -0x69(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x329>
-lea    -0x51(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x33f>
+lea    -0x69(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x40(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
... (109 lines omitted) ...
+lea    -0x58(%ebp),%eax
-mov    -0x5c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
-jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3a9>
+jne    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3bf>
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x3b8>
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x41d>
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x402>
+jmp    <T> <_ZN17CPacketTranslater27onSocialEventRewardItemInfoEP12PacketHeader+0x418>
-add    $0x7c,%esp
+add    $0x8c,%esp
```

## _ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader  [DIFF]  pm=148
```diff
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x35>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x8b>
+mov    -0x28(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+movzbl %al,%eax
+cmp    -0x24(%ebp),%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0xa1>
+mov    -0x28(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x20(%ebp)
+movl   $0x146d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"(Ignore another server msg: %d)",0x8(%esp)
+movl   $"./log/ItemLimitEdition",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x99>
-mov    -0x20(%ebp),%eax
-mov    0xb(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
... (68 lines omitted) ...
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x348>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x350>
-lea    -0x30(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x341>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x349>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3aa>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x39d>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x3a5>
```

## _ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader  [DIFF]  pm=179
```diff
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55a>
-mov    -0x2c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
+mov    -0x30(%ebp),%eax
-movl   $0x0,-0x28(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb5>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa4>
+mov    -0x2c(%ebp),%edx
+mov    -0x30(%ebp),%ecx
-cmp    $0xc34ff,%eax
-jbe    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xad>
-mov    -0x28(%ebp),%edx
-mov    -0x2c(%ebp),%ecx
+mov    %eax,-0x28(%ebp)
+cmpl   $0xc34ff,-0x28(%ebp)
+jbe    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa0>
+cmpl   $0xf423f,-0x28(%ebp)
+ja     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xa0>
+mov    -0x2c(%ebp),%edx
-mov    0xf(%eax,%ecx,1),%eax
-cmp    $0xf423f,%eax
-ja     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb0>
-mov    -0x28(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    -0x2c(%ebp),%eax
-lea    0xf(%eax),%ebx
+add    -0x30(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,%ebx
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0xb1>
... (99 lines omitted) ...
-mov    -0x828(%ebp),%eax
+mov    -0x82c(%ebp),%eax
-mov    %eax,-0x828(%ebp)
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x446>
-nop
+mov    %eax,-0x82c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x3d6>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x39d>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x443>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication22getItemLimitEditionMgrEv>
+lea    -0x837(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK20CItemLimitEditionMgr35makeItemLimitEditionSellStartPacketER36Packet_Item_Limit_Edition_Sell_Start>
-lea    -0x833(%ebp),%edx
+lea    -0x837(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4fe>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4e3>
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4f7>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x4dc>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x53d>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x553>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x538>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataRpyEP12PacketHeader+0x55b>
-nop
```

## _ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader  [DIFF]  pm=110
```diff
-sub    $0x6c,%esp
+sub    $0x7c,%esp
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x54(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1ce>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1f0>
+lea    -0x4d(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x52(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x66(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x34(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x11b>
+jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x1cf>
+mov    -0x34(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
-mov    -0x20(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
... (30 lines omitted) ...
+lea    -0x4c(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
+mov    0x8(%ebp),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication25getLimitNpcBuyItemManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN22LimitNpcBuyItemManager19undoNpcLimitBuyItemEP21LimitNpcBuyItemUpdate>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
-jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x24a>
+jne    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x26c>
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x243>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x265>
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2a4>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c6>
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x29f>
+jmp    <T> <_ZN17CPacketTranslater29onSocialEventRewardItemUpdateEP12PacketHeader+0x2c1>
-add    $0x6c,%esp
+add    $0x7c,%esp
```

## _ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader  [DIFF]  pm=37
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x52>
-movl   $0xdc4,0x8(%esp)
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x4c>
+movl   $0xdc3,0x8(%esp)
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
+mov    0x8(%ebp),%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xb6>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xab>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
+mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x147>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x144>
-xor    $0x1,%eax
+cmp    $0x1,%al
+setne  %al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x143>
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x140>
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xc2>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xbd>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x20c>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x209>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x205>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x202>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x263>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x261>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
```

## _ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader  [DIFF]  pm=122
```diff
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x291>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b8>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b7>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b8>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b7>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b2>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a3>
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b2>
-mov    -0x20(%ebp),%eax
-lea    0xf(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a6>
+mov    -0x28(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,%ecx
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
... (42 lines omitted) ...
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x26a>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x255>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x291>
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x338>
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x337>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x331>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x330>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39d>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39c>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
+nop
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a7>
+nop
```

## _ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader  [DIFF]  pm=62
```diff
-push   %edi
-sub    $0x5c,%esp
+sub    $0x50,%esp
-movl   $0x0,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16f>
+je     <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x171>
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    0xe(%eax),%edi
+mov    0xe(%eax),%eax
+mov    %eax,-0x1c(%ebp)
-mov    %eax,%ebx
+mov    %eax,-0x18(%ebp)
-mov    0x12(%eax),%esi
+mov    0x12(%eax),%eax
+mov    %eax,-0x14(%ebp)
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %edi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %esi,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x171>
-jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x113>
+jne    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x117>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x10c>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x110>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x171>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x168>
+jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x16c>
-jmp    <T> <_ZN17CPacketTranslater30onRequestCharacTowerUpdateRankEP12PacketHeader+0x170>
-nop
-add    $0x5c,%esp
+add    $0x50,%esp
-pop    %edi
```

## _ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader  [DIFF]  pm=155
```diff
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x4c(%ebp),%esi
+lea    -0x54(%ebp),%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x28b>
-lea    -0x45(%ebp),%eax
+lea    -0x4d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x290>
+lea    -0x4d(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x254>
-mov    -0x24(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
... (75 lines omitted) ...
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x221>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x290>
+lea    -0x3d(%ebp),%eax
-mov    -0x24(%ebp),%edx
+mov    -0x2c(%ebp),%edx
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x36e>
-jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x30b>
+jne    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x310>
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x304>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x309>
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x36e>
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x364>
+jmp    <T> <_ZN17CPacketTranslater30onSocialEventRewardItemInfoAllEP12PacketHeader+0x369>
```

## _ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader  [DIFF]  pm=194
```diff
+movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x24e>
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x245>
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x2d0,%eax
-mov    %eax,-0x14(%ebp)
-mov    0x8(%ebp),%eax
+mov    -0x18(%ebp),%eax
+mov    0x1f(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x245>
+lea    -0x6d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN32Packet_Monitor_Reply_Charac_InfoC1Ev>
+movl   $0x0,-0x63(%ebp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x5f(%ebp)
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x6d(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <strncpy>
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+mov    -0x18(%ebp),%eax
+lea    0xa(%eax),%edx
... (114 lines omitted) ...
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x53(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x57(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %ax,-0x34(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %ax,-0x38(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x32(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %al,-0x36(%ebp)
+mov    -0x20(%ebp),%eax
-mov    %al,-0x31(%ebp)
-lea    -0x69(%ebp),%eax
+mov    %al,-0x35(%ebp)
+lea    -0x6d(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x245>
-je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1b5>
+je     <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x1ae>
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x247>
+jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x240>
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
-nop
-jmp    <T> <_ZN17CPacketTranslater31onRequestCharacInfoByCharacNameEP12PacketHeader+0x252>
-nop
```

## _ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader  [DIFF]  pm=121
```diff
-sub    $0x5c,%esp
+sub    $0x6c,%esp
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x44(%ebp),%esi
+lea    -0x58(%ebp),%esi
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1f4>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1f0>
+lea    -0x51(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1b0>
-mov    -0x20(%ebp),%edx
+movl   $0x0,-0x30(%ebp)
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1ac>
+mov    -0x30(%ebp),%edx
-add    -0x24(%ebp),%eax
-lea    0xe(%eax),%ebx
+add    -0x38(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,-0x2c(%ebp)
-mov    %ebx,0x4(%esp)
+mov    %eax,-0x34(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x34(%ebp),%eax
... (41 lines omitted) ...
-lea    -0x3c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-addl   $0x1,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+addl   $0x1,-0x30(%ebp)
+mov    -0x38(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-jbe    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c8>
-cmpl   $0x1d,-0x20(%ebp)
-ja     <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c8>
+cmp    -0x30(%ebp),%eax
+jbe    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c4>
+cmpl   $0x1d,-0x30(%ebp)
+ja     <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c4>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1cd>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x1c9>
-jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x106>
-mov    -0x24(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x10c>
+mov    0x8(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c6>
-jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x270>
+jne    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x26c>
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x269>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x265>
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c6>
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c5>
+jmp    <T> <_ZN17CPacketTranslater31onSocialEventRewardItemResponseEP12PacketHeader+0x2c1>
-add    $0x5c,%esp
+add    $0x6c,%esp
```

## _ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader  [DIFF]  pm=125
```diff
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2ae>
-mov    0x8(%ebp),%eax
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b1>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa6>
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xa3>
-cmp    -0x20(%ebp),%eax
-jge    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xad>
+mov    -0x20(%ebp),%edx
+cmp    %edx,%eax
+jae    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xaa>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xb2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0xaf>
-test   %al,%al
+mov    %al,-0x11(%ebp)
+cmpb   $0x0,-0x11(%ebp)
-mov    %eax,-0x10(%ebp)
+lea    0xa(%eax),%edx
+mov    -0x28(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x1,(%eax)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    0xa(%eax),%edx
-mov    -0x10(%ebp),%eax
... (45 lines omitted) ...
-mov    -0x14(%ebp),%eax
-movb   $0x0,0x16(%eax)
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x0,(%eax)
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x161>
+mov    -0x1c(%ebp),%eax
+add    $0x16,%eax
+movb   $0x2,(%eax)
+mov    -0x1c(%ebp),%eax
+lea    0x12(%eax),%ebx
-mov    -0x14(%ebp),%edx
-mov    %eax,0x12(%edx)
-mov    -0x24(%ebp),%eax
+mov    %eax,(%ebx)
+mov    -0x28(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x252>
+jne    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x266>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x24b>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x25f>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2c0>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2a7>
+jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2bb>
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
-nop
-jmp    <T> <_ZN17CPacketTranslater32onItemLimitEditionBuyableRequestEP12PacketHeader+0x2b2>
-nop
```

## _ZN17CUdpNetworkThread8dispatchEPv  [DIFF]  pm=515
```diff
-sub    $0x9c,%esp
+sub    $0xac,%esp
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x107>
-lea    -0x4d(%ebp),%eax
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x10a>
+lea    -0x61(%ebp),%eax
-lea    -0x4d(%ebp),%eax
+lea    -0x61(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x54(%ebp),%esi
+lea    -0x68(%ebp),%esi
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x68(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xe4>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0xe7>
-lea    -0x4d(%ebp),%eax
+lea    -0x61(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x4d(%ebp),%eax
+mov    %ecx,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x61(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4f9>
-lea    -0x68(%ebp),%eax
+lea    -0x78(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x5c(%ebp)
-movw   $0x0,-0x5e(%ebp)
-movl   $0x0,-0x64(%ebp)
-mov    -0x58(%ebp),%eax
-mov    %eax,%edx
+mov    %eax,-0x38(%ebp)
+lea    -0x78(%ebp),%eax
... (435 lines omitted) ...
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e5>
-lea    -0x2d(%ebp),%eax
+lea    -0x41(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5db>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x621>
+lea    -0x41(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x2c(%ebp),%esi
+lea    -0x40(%ebp),%esi
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x683>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c9>
-lea    -0x2c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67d>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c3>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6e8>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6e8>
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b7>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6fd>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6e8>
-lea    -0x25(%ebp),%eax
+lea    -0x39(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6de>
-lea    -0x25(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x724>
+lea    -0x39(%ebp),%eax
-add    $0x9c,%esp
+add    $0xac,%esp
```

## _ZN18CFrameCountHandler17GetFrameCountInfoEv  [DIFF]  pm=247
```diff
-sub    $0x6c,%esp
+sub    $0x4c,%esp
+movl   $0x0,-0x38(%ebp)
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x14d>
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x146>
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xc(%eax)
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-lea    -0x35(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    %eax,0xc(%edx)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
+lea    -0x21(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xf0>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xe9>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
... (167 lines omitted) ...
-cmp    -0x20(%ebp),%eax
-jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-lea    0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x14(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,0x24(%eax)
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x63,-0x28(%ebp)
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+cmp    $0x63,%eax
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
+mov    0x10(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%ecx
+mov    0x8(%ebp),%eax
-sub    -0x28(%ebp),%eax
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
-add    $0x6c,%esp
+add    $0x4c,%esp
```

## _ZN18CMemoryCashManager18ProcessLifeTimeOutEv  [DIFF]  pm=14
```diff
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xfd>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0x100>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc9>
+jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xce>
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xbe>
+setne  %al
+test   %al,%al
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc3>
-je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc9>
+je     <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xce>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xc9>
+jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xce>
-jmp    <T> <_ZN18CMemoryCashManager18ProcessLifeTimeOutEv+0xfe>
-nop
```

## _ZN18CMemoryCashManager20ProcessCashDataPrintEv  [NEAR]  pm=44
```diff
-sub    $0x5c,%esp
+sub    $0x4c,%esp
-mov    0x40(%eax),%eax
-mov    %eax,-0x34(%ebp)
+mov    0x40(%eax),%ebx
-mov    0x4c(%eax),%eax
-mov    %eax,-0x30(%ebp)
+mov    0x4c(%eax),%esi
-mov    0x3c(%eax),%eax
-mov    %eax,-0x2c(%ebp)
+mov    0x3c(%eax),%edi
-mov    0x48(%eax),%edi
+mov    0x48(%eax),%eax
+mov    %eax,-0x28(%ebp)
-mov    0x38(%eax),%esi
+mov    0x38(%eax),%eax
+mov    %eax,-0x24(%ebp)
-mov    0x44(%eax),%ebx
+mov    0x44(%eax),%eax
+mov    %eax,-0x20(%ebp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-mov    -0x34(%ebp),%eax
-mov    %eax,0x20(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %ebx,0x20(%esp)
+mov    %esi,0x1c(%esp)
+mov    %edi,0x18(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
-add    $0x5c,%esp
+add    $0x4c,%esp
```

## _ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser  [DIFF]  pm=90
```diff
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x28c>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x30(%ebp)
-lea    -0x30(%ebp),%eax
-lea    -0x2c(%ebp),%edx
+lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x284>
-lea    -0x30(%ebp),%eax
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x287>
+lea    -0x34(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x28c>
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x23e>
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x241>
+mov    -0x20(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
... (10 lines omitted) ...
-mov    -0x14(%ebp),%edx
+mov    -0x18(%ebp),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fe>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x201>
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1f9>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fd>
-lea    -0x34(%ebp),%edx
+lea    -0x38(%ebp),%edx
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fa>
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fd>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x1fa>
-nop
-jne    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x17a>
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x233>
+jne    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x180>
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x236>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %al,-0x15(%ebp)
-cmpb   $0x0,-0x15(%ebp)
-je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x273>
+mov    %al,-0x19(%ebp)
+cmpb   $0x0,-0x19(%ebp)
+je     <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x276>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-movzbl -0x15(%ebp),%eax
-jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x289>
+movzbl -0x19(%ebp),%eax
+jmp    <T> <_ZN18CMemoryCashManager21QueryCashMemoryMemberEP5CUser+0x28c>
```

## _ZN19CEventActionManager13OnStartActionEP26Packet_Monitor_Event_Start  [NEAR]  pm=2
```diff
+mov    -0x10(%ebp),%edx
-mov    -0x10(%ebp),%edx
```

## _ZN19COnTimeEventManager10StartEventEjj  [DIFF]  pm=8
```diff
+mov    %ebx,%eax
+mov    0x8(%ebp),%edx
+mov    %edx,0xc(%esp)
+movl   $0x0,0x8(%esp)
-mov    %ebx,%eax
-mov    0x8(%ebp),%ecx
-mov    %ecx,0xc(%esp)
-movl   $0x0,0x8(%esp)
```

## _ZN19COnTimeEventManager11OnRewardEndEv  [DIFF]  pm=18
```diff
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
-jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10c>
+jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x109>
-jne    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10b>
+jne    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x109>
-lea    -0x22(%ebp),%eax
+lea    -0x1a(%ebp),%eax
-lea    -0x22(%ebp),%edx
+lea    -0x1a(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN19COnTimeEventManager11OnRewardEndEv+0x10c>
-nop
```

## _ZN19COnTimeEventManager13OnRewardStartEv  [DIFF]  pm=40
```diff
+push   %edi
+push   %esi
-sub    $0x34,%esp
+sub    $0x2c,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-je     <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x82>
+je     <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x84>
-jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17b>
+jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x18f>
-jne    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17a>
+jne    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x18f>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
+mov    %eax,%esi
-mov    %edx,0x20(%eax)
+mov    %esi,0x20(%eax)
-mov    -0xc(%ebp),%eax
+mov    %esi,%eax
+jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x12b>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN19COnTimeEventManager13OnRewardStartEv+0x17b>
-nop
-add    $0x34,%esp
+add    $0x2c,%esp
+pop    %esi
+pop    %edi
```

## _ZN20CTask_ChristmasEvent10_DoExecuteEv  [DIFF]  pm=55
```diff
+push   %edi
+push   %esi
-sub    $0x44,%esp
-lea    -0x32(%ebp),%eax
+sub    $0x4c,%esp
+lea    -0x44(%ebp),%eax
-movl   $0x1,-0x28(%ebp)
-movw   $0x14,-0x24(%ebp)
-movw   $0xe10,-0x22(%ebp)
+movl   $0x1,-0x3a(%ebp)
+movw   $0x14,-0x36(%ebp)
+movw   $0xe10,-0x32(%ebp)
+lea    -0x44(%ebp),%ebx
-mov    %eax,-0x10(%ebp)
-lea    -0x32(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x20(%ebp)
-cmp    -0xc(%ebp),%eax
-setl   %al
+cmp    -0x20(%ebp),%eax
+setb   %al
-je     <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xa5>
+je     <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xa4>
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0x11f>
+jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0x13a>
-mov    -0xc(%ebp),%edx
+mov    -0x20(%ebp),%edx
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN20CTask_ChristmasEvent10_DoExecuteEv+0xe5>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x1c(%ebp)
+mov    -0x1c(%ebp),%ebx
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
-add    $0x44,%esp
+add    $0x4c,%esp
+pop    %esi
+pop    %edi
```

## _ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo  [DIFF]  pm=22
```diff
+push   %esi
-sub    $0x24,%esp
+sub    $0x20,%esp
-jne    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x7f>
+jne    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x84>
-mov    0x8(%eax),%ebx
+mov    0x8(%eax),%eax
+mov    %eax,%esi
-mov    %ebx,%edx
-sub    %eax,%edx
+mov    %eax,%ebx
+mov    %esi,%edx
+sub    %ebx,%edx
-jmp    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x80>
+jmp    <T> <_ZN22LimitNpcBuyItemManager23getNpcLimitBuyItemCountEjR25LimitNpcBuyItemChangeInfo+0x85>
-mov    -0x4(%ebp),%ebx
-leave
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
```

## _ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv  [DIFF]  pm=5
```diff
-je     <T> <_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv+0xa6>
+je     <T> <_ZN41TowerOfDespairWaitGameServerResponse_Task10_DoExecuteEv+0xa4>
-add    $0x3c,%eax
-mov    %eax,%edx
+lea    0x3c(%eax),%edx
```

## _ZN5CPeer11send_packetEPci  [NEAR]  pm=6
```diff
-mov    0x1834(%eax),%edx
-mov    0x10(%ebp),%eax
-add    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+add    0x10(%ebp),%edx
```

## _ZN5CPeer11send_packetEv  [DIFF]  pm=82
```diff
-sub    $0x30,%esp
+sub    $0x20,%esp
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-mov    0x1834(%eax),%ebx
+mov    0x1834(%eax),%eax
+mov    %eax,%ebx
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CPeer11send_packetEv+0xdf>
+jg     <T> <_ZN5CPeer11send_packetEv+0xdc>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x8d>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x8d>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x8d>
-jne    <T> <_ZN5CPeer11send_packetEv+0x9a>
+jne    <T> <_ZN5CPeer11send_packetEv+0x97>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jle    <T> <_ZN5CPeer11send_packetEv+0x243>
+jle    <T> <_ZN5CPeer11send_packetEv+0x244>
-jle    <T> <_ZN5CPeer11send_packetEv+0x1ef>
+jle    <T> <_ZN5CPeer11send_packetEv+0x1ee>
-mov    0x1834(%eax),%edx
-mov    -0xc(%ebp),%eax
-sub    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+sub    -0xc(%ebp),%edx
-jbe    <T> <_ZN5CPeer11send_packetEv+0x1a5>
+ja     <T> <_ZN5CPeer11send_packetEv+0x185>
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x1838(%eax),%eax
... (2 lines omitted) ...
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <memmove>
+mov    0x8(%ebp),%eax
+lea    0x183c(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+add    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x1838(%eax)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x244>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
-mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x1838(%eax),%eax
-mov    0x8(%ebp),%ecx
-add    $0x183c,%ecx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <memmove>
-mov    0x8(%ebp),%eax
-lea    0x183c(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x1834(%eax),%eax
-add    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x1838(%eax)
-jmp    <T> <_ZN5CPeer11send_packetEv+0x243>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
-jge    <T> <_ZN5CPeer11send_packetEv+0x224>
+jge    <T> <_ZN5CPeer11send_packetEv+0x225>
-mov    $0xffffffff,%eax
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+movl   $0xffffffff,-0xc(%ebp)
+jmp    <T> <_ZN5CPeer11send_packetEv+0x244>
-add    $0x30,%esp
+add    $0x20,%esp
```

## _ZN5CUser18MemberEnterProcessEv  [DIFF]  pm=10
```diff
-je     <T> <_ZN5CUser18MemberEnterProcessEv+0x40>
+je     <T> <_ZN5CUser18MemberEnterProcessEv+0x3b>
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CUser18MemberEnterProcessEv+0x41>
+jg     <T> <_ZN5CUser18MemberEnterProcessEv+0x3e>
-jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x41>
+jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x3f>
+nop
+jmp    <T> <_ZN5CUser18MemberEnterProcessEv+0x3f>
```

## _ZN7CMember10LoadMemberER14STMemberDBInfosjj  [DIFF]  pm=13
```diff
-je     <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0xc9>
+je     <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0xcb>
-movzbl %al,%eax
-cmp    -0x10(%ebp),%eax
-jle    <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0x58>
+movzbl %al,%edx
+mov    -0x10(%ebp),%eax
+cmp    %eax,%edx
+jle    <T> <_ZN7CMember10LoadMemberER14STMemberDBInfosjj+0x5a>
+mov    0x8(%ebp),%eax
+lea    0x6(%eax),%edx
-mov    0x8(%ebp),%edx
-add    $0x6,%edx
```

## _ZN7CMember21GetConnLowerMemberCntEv  [DIFF]  pm=10
```diff
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x80>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x7b>
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x70>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6b>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6b>
+je     <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x66>
-jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x6c>
+jmp    <T> <_ZN7CMember21GetConnLowerMemberCntEv+0x67>
```

## _ZN7CMember21NoticeLevelUpToLowersEj  [DIFF]  pm=36
```diff
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xbc>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xae>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa9>
-mov    -0xc(%ebp),%eax
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa1>
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa4>
-mov    -0x14(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0x9d>
+mov    -0xc(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xa5>
-nop
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
-jmp    <T> <_ZN7CMember21NoticeLevelUpToLowersEj+0xbd>
-nop
```

## _ZN7CMember21NoticeMemberLogin_OutEP5CUserc  [DIFF]  pm=306
```diff
-test   %al,%al
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x31f>
+mov    %al,-0x19(%ebp)
+movzbl -0x19(%ebp),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-lea    -0x4c(%ebp),%eax
+lea    -0x51(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x1fd>
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x122>
+movzbl -0x5c(%ebp),%eax
+mov    %al,-0x47(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x46(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x42(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,(%esp)
+call   <T> <_ZN16CServerInterface12GetChannelNoEv>
+mov    %al,-0x3e(%ebp)
+movb   $0x2,-0x3d(%ebp)
... (226 lines omitted) ...
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x42(%ebp)
-mov    %al,-0x39(%ebp)
-movb   $0x1,-0x38(%ebp)
+mov    %al,-0x3e(%ebp)
+movb   $0x1,-0x3d(%ebp)
-lea    -0x4c(%ebp),%eax
+lea    -0x51(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    %al,-0x19(%ebp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x18(%ebp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %al,-0x1e(%ebp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x1d(%ebp)
+lea    -0x51(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x308>
+jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x30e>
-addl   $0x1,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
-jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x217>
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-nop
-jmp    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x323>
-nop
+jne    <T> <_ZN7CMember21NoticeMemberLogin_OutEP5CUserc+0x220>
```

## _ZNK11CUdpHandler12SendToClientEPcitPKcj  [DIFF]  pm=82
```diff
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x242>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x23c>
-mov    -0xc(%ebp),%eax
-cmp    $0x61,%eax
-je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x17d>
-cmp    $0x61,%eax
-jl     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c8>
-sub    $0x6f,%eax
-cmp    $0x2,%eax
-ja     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1c8>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",(%esp)
-call   <T> <printf>
-movl   $0x113,0x8(%esp)
+cmpl   $0x61,-0xc(%ebp)
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x15f>
+movl   $"err EAFNOSUPPORT in send",(%esp)
+call   <T> <puts>
+movl   $0x119,0x8(%esp)
-movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",0x8(%esp)
+movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x238>
-movl   $"err EAFNOSUPPORT in send",(%esp)
-call   <T> <puts>
-movl   $0x119,0x8(%esp)
-movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x232>
+cmpl   $0x60,-0xc(%ebp)
+jle    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x170>
-mov    %eax,0xc(%esp)
-movl   $"Error( EAFNOSUPPORT ) in send = %d\n",0x8(%esp)
-movl   $"./log/UdpErr",0x4(%esp)
... (2 lines omitted) ...
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x238>
+sub    $0x6f,%eax
+cmp    $0x2,%eax
+jbe    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x1e2>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x232>
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",(%esp)
+call   <T> <printf>
+movl   $0x113,0x8(%esp)
+movl   $&_ZZNK11CUdpHandler12SendToClientEPcitPKcjE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0xc(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Error( ECONNREFUSED, EHOSTDOWN, EHOSTUNREACH ) = %d\n",0x8(%esp)
+movl   $"./log/UdpErr",0x4(%esp)
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x291>
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x28b>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
-mov    0x10(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fe>
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
+mov    -0x10(%ebp),%eax
+cmp    0x10(%ebp),%eax
+jne    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x29a>
+mov    $0x1,%eax
+jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x2fd>
-jmp    <T> <_ZNK11CUdpHandler12SendToClientEPcitPKcj+0x303>
-mov    $0x1,%eax
```

## _ZNK11CUdpHandler12SendToServerEPcitPKc  [DIFF]  pm=2
```diff
-lea    -0x48(%ebp),%eax
+lea    -0x48(%ebp),%eax
```

## _ZNK11CUdpHandler14RecvFromClientEPcPiPjPt  [DIFF]  pm=66
```diff
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
-movl   $0x10,-0x58(%ebp)
-lea    -0x58(%ebp),%ebx
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25f>
+movl   $0x10,-0x44(%ebp)
+lea    -0x44(%ebp),%ebx
-jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x12b>
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x125>
-mov    -0x1c(%ebp),%eax
-cmp    $0x58,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x86>
-cmp    $0x68,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xca>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x10e>
+cmpl   $0x58,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0xbe>
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x121>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x11b>
+cmpl   $0x68,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x108>
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x121>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x11b>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25f>
-jg     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x192>
+jg     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x18c>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x26b>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25f>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1ef>
+mov    0xc(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1ef>
+mov    0xc(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1fb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x1ef>
+mov    0xc(%ebp),%eax
-jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x25b>
+jne    <T> <_ZNK11CUdpHandler14RecvFromClientEPcPiPjPt+0x24f>
-mov    -0x20(%ebp),%eax
+mov    0xc(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## _ZNK11CUdpHandler14RecvFromServerEPcPiPjPt  [DIFF]  pm=58
```diff
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
-movl   $0x10,-0x58(%ebp)
-lea    -0x58(%ebp),%ebx
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x249>
+movl   $0x10,-0x44(%ebp)
+lea    -0x44(%ebp),%ebx
-jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x12d>
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x127>
-mov    -0x1c(%ebp),%eax
-cmp    $0x58,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x88>
-cmp    $0x68,%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xcc>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x110>
+cmpl   $0x58,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0xc0>
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x123>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x11d>
+cmpl   $0x68,-0x1c(%ebp)
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x10a>
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x123>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x11d>
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x249>
-jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x194>
+jg     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x18e>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x255>
+jmp    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x249>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1e5>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x1d9>
+mov    0xc(%ebp),%eax
-jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x245>
+jne    <T> <_ZNK11CUdpHandler14RecvFromServerEPcPiPjPt+0x239>
-mov    -0x20(%ebp),%eax
+mov    0xc(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## _ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t  [NEAR]  pm=2
```diff
+mov    0x8(%ebp),%eax
-mov    0x8(%ebp),%eax
```
