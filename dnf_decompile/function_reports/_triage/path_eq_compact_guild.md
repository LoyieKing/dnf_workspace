# guild PATH_EQ compact diffs (97)

## _ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser  [DIFF]  pm=126
```diff
-sub    $0xd74,%esp
+sub    $0x6f4,%esp
-je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x550>
+je     <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54d>
-lea    -0x6ce(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-mov    %ax,-0x6c2(%ebp)
+mov    %ax,-0x6be(%ebp)
-mov    %eax,-0x6bf(%ebp)
+mov    %eax,-0x6bb(%ebp)
-mov    %eax,-0x6bb(%ebp)
-movb   $0x0,-0x6c0(%ebp)
-movb   $0x0,-0x6b7(%ebp)
-lea    -0x6ce(%ebp),%eax
+mov    %eax,-0x6b7(%ebp)
+movb   $0x0,-0x6bc(%ebp)
+movb   $0x0,-0x6b3(%ebp)
+lea    -0x6ca(%ebp),%eax
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54e>
-mov    -0x3c(%ebp),%eax
-mov    %eax,-0x44(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x34b>
-lea    -0x6ce(%ebp),%eax
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x345>
+lea    -0x6ca(%ebp),%eax
-mov    %ax,-0x6c2(%ebp)
+mov    %ax,-0x6be(%ebp)
-mov    %eax,-0x6bf(%ebp)
+mov    %eax,-0x6bb(%ebp)
-mov    %eax,-0x6bb(%ebp)
+mov    %eax,-0x6b7(%ebp)
-mov    %al,-0x6c0(%ebp)
-movb   $0xa,-0x6b7(%ebp)
+mov    %al,-0x6bc(%ebp)
+movb   $0xa,-0x6b3(%ebp)
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x2c9>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x2c3>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
... (46 lines omitted) ...
-lea    -0x44(%ebp),%eax
+sub    $0x642,%edx
+mov    %eax,0x14(%edx)
+lea    -0x3c(%ebp),%eax
-lea    -0xd58(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0xcc0,%edx
-mov    %eax,(%edx)
+sub    $0x642,%edx
+mov    %eax,0x10(%edx)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-sub    $0xcb8,%edx
-mov    %eax,(%edx)
-lea    -0x44(%ebp),%eax
+sub    $0x632,%edx
+mov    %eax,0x8(%edx)
+lea    -0x3c(%ebp),%eax
-lea    -0xd58(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4df>
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4dc>
-jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x3be>
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4e0>
+jne    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x3b8>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x4dd>
-lea    -0xd58(%ebp),%eax
+lea    -0x6ca(%ebp),%eax
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
-nop
-jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x554>
+jmp    <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser+0x54e>
```

## _ZN11CGuildCargo10DeleteItemER11DnfItemInfoiihii  [NEAR]  pm=2
```diff
+mov    0x1c(%ebp),%edx
-mov    0x1c(%ebp),%edx
```

## _ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption  [NEAR]  pm=16
```diff
-mov    0x20(%ebp),%eax
-mov    (%eax),%edx
-mov    %edx,-0x22(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x1e(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x1a(%ebp)
-movzwl 0xc(%eax),%eax
+mov    0x20(%ebp),%ebx
+mov    (%ebx),%eax
+mov    %eax,-0x22(%ebp)
+mov    0x4(%ebx),%eax
+mov    %eax,-0x1e(%ebp)
+mov    0x8(%ebx),%eax
+mov    %eax,-0x1a(%ebp)
+movzwl 0xc(%ebx),%eax
```

## _ZN11CGuildCargo14SendGuildCargoEP5CUser  [DIFF]  pm=2
```diff
+movl   $0x18dc,0x8(%esp)
-movl   $0x18dc,0x8(%esp)
```

## _ZN11CGuildCargo16PrintDnfItemInfoER11DnfItemInfo  [DIFF]  pm=46
```diff
-movzbl %al,%esi
+movzbl %al,%ebx
-movzwl %ax,%edi
+movzwl %ax,%esi
-movzbl %al,%eax
-mov    %eax,-0x28(%ebp)
+movzbl %al,%edi
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x28(%ebp)
+mov    %eax,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
-mov    0x6(%eax),%eax
-mov    %eax,-0x1c(%ebp)
+movzbl 0x5(%eax),%eax
+movzbl %al,%eax
+mov    %eax,%edx
+and    $0x1f,%edx
+mov    %edx,-0x1c(%ebp)
-and    $0x1f,%eax
-movzbl %al,%ebx
-mov    0x8(%ebp),%eax
-movzbl 0x5(%eax),%eax
-shr    $0x5,%al
+movzbl %al,%eax
+sar    $0x5,%eax
-mov    %esi,0x2c(%esp)
-mov    %edi,0x28(%esp)
-mov    -0x28(%ebp),%esi
-mov    %esi,0x24(%esp)
-mov    -0x24(%ebp),%esi
-mov    %esi,0x20(%esp)
-mov    -0x20(%ebp),%esi
-mov    %esi,0x1c(%esp)
-mov    -0x1c(%ebp),%esi
-mov    %esi,0x18(%esp)
+mov    %ebx,0x2c(%esp)
+mov    %esi,0x28(%esp)
+mov    %edi,0x24(%esp)
+mov    -0x28(%ebp),%ebx
+mov    %ebx,0x20(%esp)
+mov    -0x24(%ebp),%ebx
+mov    %ebx,0x1c(%esp)
+mov    -0x20(%ebp),%ebx
+mov    %ebx,0x18(%esp)
+mov    -0x1c(%ebp),%ebx
```

## _ZN11CGuildCargo20SendGuildCargoToDBMWEP14CServerHandleri  [DIFF]  pm=16
```diff
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
+mov    %edx,0xe(%eax)
-mov    %edx,0xe(%eax)
+lea    0x12(%eax),%edx
+movl   $0x18d8,0x8(%esp)
-mov    -0xc(%ebp),%edx
-add    $0x12,%edx
-movl   $0x18d8,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
```

## _ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog  [DIFF]  pm=10
```diff
-cmp    $0x32,%eax
-jbe    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x13>
-mov    $0x32,%eax
+cmpl   $0x32,0xc(%ebp)
+jbe    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x19>
+movl   $0x32,-0x10(%ebp)
-jmp    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x47>
+jmp    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x4a>
-jne    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x1f>
+jne    <T> <_ZN11CGuildCargo20SetGuildCargoHistoryEjP15STGuildCargoLog+0x22>
```

## _ZN11CTcpHandlerC1Ev  [DIFF]  pm=3
```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
```

## _ZN11CUdpHandler16InitServerSocketEi  [DIFF]  pm=16
```diff
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-movw   $0x2,-0x24(%ebp)
+movw   $0x2,-0x28(%ebp)
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x24(%ebp)
-mov    %ax,-0x22(%ebp)
-lea    -0x24(%ebp),%edx
+mov    %ax,-0x26(%ebp)
+lea    -0x28(%ebp),%edx
-movl   $0xf4240,-0x28(%ebp)
+movl   $0xf4240,-0x18(%ebp)
-lea    -0x28(%ebp),%edx
+lea    -0x18(%ebp),%edx
-mov    -0x28(%ebp),%esi
+mov    -0x18(%ebp),%esi
```

## _ZN12CApplication15TranslateSignalEv  [DIFF]  pm=114
```diff
-jne    <T> <_ZN12CApplication15TranslateSignalEv+0x442>
+jne    <T> <_ZN12CApplication15TranslateSignalEv+0x44e>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x411>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x41d>
-ja     <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-mov    &data#4b157ab8(.rodata)(,%eax,4),%eax
+ja     <T> <_ZN12CApplication15TranslateSignalEv+0x412>
+mov    &data#95d2b392(.rodata)(,%eax,4),%eax
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x15b(%ebp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x157(%ebp)
+movl   $0x17,0x8(%esp)
+movl   $"태스트 길드메일입니다.",0x4(%esp)
+lea    -0x165(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0x165(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater24OnMonitorSendGuildLetterEP12PacketHeader>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
-lea    -0x165(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_Send_Guild_MailC1Ev>
-lea    -0x1c(%ebp),%eax
... (34 lines omitted) ...
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x20(%ebp)
+lea    -0x33(%ebp),%eax
+movl   $0x2,0x14(%eax)
+lea    -0x33(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+mov    %eax,0xc(%ebx)
+lea    -0x33(%ebp),%ebx
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPKP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+mov    %eax,0x10(%ebx)
+lea    -0x33(%ebp),%ebx
-mov    %al,-0x21(%ebp)
+mov    %al,0x18(%ebx)
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-movl   $"야메",0x4(%esp)
+movl   $"겪蔘",0x4(%esp)
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x406>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x412>
-jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x443>
+jmp    <T> <_ZN12CApplication15TranslateSignalEv+0x44f>
```

## _ZN12CApplication4LoadEiPPc  [DIFF]  pm=44
```diff
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
+mov    %ebx,%edx
-je     <T> <_ZN12CApplication4LoadEiPPc+0x3bf>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x3bd>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x614>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x612>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x614>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x612>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4a3>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4a1>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4b0>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4ae>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4c8>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4c6>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x700>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x701>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x592>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x590>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x656>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x654>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x656>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x654>
-lea    -0x63(%ebp),%eax
+lea    -0x62(%ebp),%eax
+lea    -0x62(%ebp),%ebx
-mov    %al,-0x59(%ebp)
+mov    %al,0xa(%ebx)
-lea    -0x63(%ebp),%edx
+lea    -0x62(%ebp),%edx
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x74c>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x74d>
```

## _ZN12CUserManager17DeleteUser_CharNoEj  [NEAR]  pm=8
```diff
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
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

## _ZN13CAppStartInit4InitEP12CApplicationiPPc  [DIFF]  pm=30
```diff
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xae>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xac>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xbb>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xb9>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xd6>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xd4>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x113>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x111>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x14f>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x14b>
-je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x24a>
+je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x246>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f5>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f1>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1ef>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1eb>
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x227>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x223>
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
```

## _ZN13CGuildManager13GuildMemLoginEjP5CUser  [DIFF]  pm=3
```diff
-xor    $0x1,%eax
-jne    <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x432>
+je     <T> <_ZN13CGuildManager13GuildMemLoginEjP5CUser+0x42f>
```

## _ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb  [DIFF]  pm=46
```diff
-je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x153>
-movl   $0x0,(%esp)
+je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14b>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
-mov    %eax,-0x20(%ebp)
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    %al,-0xe(%ebp)
+mov    %al,-0x12(%ebp)
-mov    %al,-0xd(%ebp)
+mov    %al,-0x11(%ebp)
-jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xfe>
+jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf6>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf3>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xeb>
+mov    -0x10(%ebp),%eax
-mov    %eax,%ecx
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%ecx
-mov    %edx,%eax
-shr    $0x3,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%edx
+shr    $0x3,%edx
-jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xf3>
+jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0xeb>
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x8d>
+jne    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x89>
-jbe    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x154>
+jbe    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14c>
-jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x154>
+jmp    <T> <_ZN13CGuildManager14DBGuildProcessEP14CServerHandlerb+0x14c>
```

## _ZN13CGuildManager14GuildMemLogoutEjP5CUser  [DIFF]  pm=36
```diff
-sete   %al
-test   %al,%al
-jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x33d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x25d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x258>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x340>
+test   %al,%al
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
-test   %al,%al
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x321>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x2d0>
+movl   $0x0,0x8(%esp)
+mov    0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
+jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x336>
-je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x30d>
+je     <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x324>
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-movl   $0x0,0x8(%esp)
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26NoticeGuildMemberLogin_OutEP5CUserc>
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-nop
-jmp    <T> <_ZN13CGuildManager14GuildMemLogoutEjP5CUser+0x341>
-nop
```

## _ZN13CGuildManager16GetAttendanceExpEji  [NEAR]  pm=8
```diff
-movzbl %al,%edx
-mov    %ebx,%eax
-shl    $0x4,%eax
-add    %ebx,%eax
+movzbl %al,%eax
+mov    %ebx,%edx
+shl    $0x4,%edx
+add    %ebx,%edx
```

## _ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo  [DIFF]  pm=56
```diff
+push   %esi
-sub    $0x24,%esp
+sub    $0x20,%esp
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15a>
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    0x10(%ebp),%ebx
-movzwl %ax,%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x4(%eax)
+movzwl %ax,%eax
+mov    %eax,0x4(%ebx)
-je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
+je     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    0x10(%ebp),%ebx
-mov    0x10(%ebp),%edx
-mov    %eax,(%edx)
+mov    %eax,(%ebx)
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
+mov    -0xc(%ebp),%edx
+mov    &_ZL15guild_att_phase(,%edx,4),%edx
+mov    0x10(%ebp),%esi
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0x14(%eax)
+lea    (%edx,%eax,1),%eax
+mov    &_ZL13guild_att_exp(,%eax,4),%eax
+mov    %eax,0x14(%esi)
-js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
+js     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
-jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-mov    -0xc(%ebp),%eax
-mov    &_ZL15guild_att_phase(,%eax,4),%eax
-mov    %eax,%edx
+jg     <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x157>
+mov    -0xc(%ebp),%edx
+mov    &_ZL15guild_att_phase(,%edx,4),%edx
+mov    0x10(%ebp),%esi
-add    %edx,%eax
-mov    &_ZL13guild_att_exp(,%eax,4),%edx
-mov    0x10(%ebp),%eax
-mov    %edx,0xc(%eax)
-jmp    <T> <_ZN13CGuildManager17GetAttendanceInfoEjR16STAttendanceInfo+0x15b>
-nop
-mov    -0x4(%ebp),%ebx
-leave
+lea    (%edx,%eax,1),%eax
+mov    &_ZL13guild_att_exp(,%eax,4),%eax
+mov    %eax,0xc(%esi)
+lea    -0x8(%ebp),%esp
+add    $0x0,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
```

## _ZN13CPowerManager23SendPowerWarProcessInfoEj  [DIFF]  pm=6
```diff
-mov    -0x14(%ebp),%ebx
-mov    %ebx,0x4(%esp)
+mov    -0x14(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    -0xc(%ebp),%eax
-mov    -0xc(%ebp),%eax
```

## _ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc  [DIFF]  pm=133
```diff
-movl   $0x0,-0x14(%ebp)
-mov    %eax,-0x10(%ebp)
-lea    -0x64(%ebp),%eax
-mov    -0x10(%ebp),%edx
+mov    %eax,-0x14(%ebp)
+lea    -0x64(%ebp),%eax
+mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x312>
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x31a>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x2cd>
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x156>
+movl   $0x463,0x8(%esp)
+movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CharacInfo is NULL",0x8(%esp)
+movl   $"./log/PowerResult",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
+mov    -0x1c(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
... (53 lines omitted) ...
-mov    0x4(%eax),%edx
+add    $0x4,%eax
+mov    (%eax),%ecx
+mov    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
-mov    -0x20(%ebp),%esi
+mov    -0x28(%ebp),%esi
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-mov    -0x18(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0xc(%ebp),%eax
+jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x30b>
+mov    -0x1c(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%esi
+mov    -0x10(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x34(%ebp),%eax
-movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x303>
-movl   $0x463,0x8(%esp)
-movl   $&_ZZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEcE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CharacInfo is NULL",0x8(%esp)
-mov    -0x10(%ebp),%edx
+mov    -0x14(%ebp),%edx
-jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x10c>
+jne    <T> <_ZN13CPowerManager34SendPowerWarEndInfoInSpecificPowerEc+0x105>
```

## _ZN13CTcpNetSystem10SendPacketEv  [NEAR]  pm=12
```diff
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
```

## _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE  [DIFF]  pm=3
```diff
-jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
+jmp    <T> <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
-nop
```

## _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader  [DIFF]  pm=19
```diff
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1ef>
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18e>
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18f>
+jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x18e>
-movzwl %ax,%edx
+movzwl %ax,%eax
+lea    0x4(%eax),%edx
-add    $0x4,%edx
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1ef>
-movzwl %ax,%edx
+movzwl %ax,%eax
+lea    0x4(%eax),%edx
-add    $0x4,%edx
-nop
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1f0>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x1ef>
```

## _ZN14CPacketDecoderC1Ev  [DIFF]  pm=6
```diff
-mov    -0x4(%ebp),%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
+mov    -0x4(%ebp),%eax
+lea    0x4(%eax),%edx
+mov    0x8(%ebp),%eax
```

## _ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader  [DIFF]  pm=202
```diff
-lea    -0x70(%ebp),%eax
+lea    -0x60(%ebp),%eax
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0xba>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0xbf>
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x11c>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x126>
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x60(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-xor    $0x1,%eax
-test   %al,%al
... (122 lines omitted) ...
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movb   $0xc3,-0x71(%ebp)
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x379>
+jne    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x390>
+movl   $0x18d5,0x8(%esp)
+movl   $"OnGuildCargo",0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x18d5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater12OnGuildCargoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x372>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x389>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3d3>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ea>
-lea    -0x38(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3ce>
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildCargoEP12PacketHeader+0x3e5>
```

## _ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader  [DIFF]  pm=193
```diff
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xe2>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xe5>
+lea    -0x35(%ebp),%eax
-lea    -0x51(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x58(%ebp),%esi
+lea    -0x3c(%ebp),%esi
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xc2>
-lea    -0x51(%ebp),%eax
+lea    -0x35(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x321>
-lea    -0x51(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x35(%ebp),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x34(%ebp)
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x34(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x15b>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
+je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x15e>
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
... (113 lines omitted) ...
+mov    %ax,-0xb30(%ebp)
+movzwl -0x26(%ebp),%edx
+lea    -0xb32(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f5>
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x39d>
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x39b>
+movl   $0xde9,0x8(%esp)
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xde9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x396>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x394>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f5>
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f2>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f0>
```

## _ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader  [DIFF]  pm=497
```diff
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xfa>
-lea    -0x91(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xee>
+lea    -0x7d(%ebp),%eax
-lea    -0x91(%ebp),%eax
+lea    -0x7d(%ebp),%eax
-movl   $"CPacketTranslater::OnMonitorSendGuildLetter : 0 == m_pclApp",0x4(%esp)
-lea    -0x98(%ebp),%eax
+movl   $"CPacketTranslater::OnCallGuildInvite : 0 == m_pclApp",0x4(%esp)
+lea    -0x84(%ebp),%eax
-lea    -0x98(%ebp),%esi
+lea    -0x84(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x9f>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x99>
-lea    -0x98(%ebp),%eax
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x99>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x93>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb3>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
-lea    -0x98(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb3>
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xd4>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xcb>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb9>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0xb3>
-lea    -0x91(%ebp),%eax
+lea    -0x7d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x849>
-lea    -0x91(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x818>
+lea    -0x7d(%ebp),%eax
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0xae(%ebp),%eax
+lea    -0x9a(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
... (417 lines omitted) ...
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
-jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8c5>
+jne    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x898>
+movl   $0x92d,0x8(%esp)
+movl   $"OnCallGuildInvite",0x4(%esp)
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x92d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8be>
+lea    -0xa4(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x891>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91f>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f8>
-lea    -0x38(%ebp),%eax
+lea    -0xac(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x91a>
+lea    -0xac(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater17OnCallGuildInviteEP12PacketHeader+0x8f3>
```

## _ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader  [DIFF]  pm=57
```diff
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xe2>
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xe5>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0xc2>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x20d>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
-mov    0x12(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x159>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x161>
+mov    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x318>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x318>
-jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2af>
+jne    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2b2>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2a8>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x2ab>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x315>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x318>
-jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x310>
+jmp    <T> <_ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader+0x313>
```

## _ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader  [DIFF]  pm=162
```diff
-sub    $0x60,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
+sub    $0x70,%esp
-jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x59>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x4c>
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x14d>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13IsGuildMasterEj>
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xc0>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xb6>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
... (82 lines omitted) ...
-call   <T> <_ZN36Packet_DB_Request_Approve_Join_GuildC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x49(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x45(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x41(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x3d(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0x53(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
-jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x211>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x204>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x20a>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x1fd>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x25e>
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x259>
-add    $0x60,%esp
+add    $0x70,%esp
```

## _ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader  [DIFF]  pm=201
```diff
-sub    $0x8c,%esp
+sub    $0x7c,%esp
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xf2>
-lea    -0x69(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xef>
+lea    -0x51(%ebp),%eax
-lea    -0x69(%ebp),%eax
+lea    -0x51(%ebp),%eax
-lea    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x70(%ebp),%esi
+lea    -0x58(%ebp),%esi
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x98>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x95>
-lea    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x92>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x8f>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
-lea    -0x70(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xcf>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xcc>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb7>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0xb4>
-lea    -0x69(%ebp),%eax
+lea    -0x51(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3c7>
-lea    -0x69(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x3b4>
+lea    -0x51(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1df>
-lea    -0x61(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x1d6>
+lea    -0x49(%ebp),%eax
... (121 lines omitted) ...
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
-jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x447>
+jne    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x432>
+movl   $0xda7,0x8(%esp)
+movl   $"OnCallGuildLevelUp",0x4(%esp)
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xda7,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x440>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x42b>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a5>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x490>
-lea    -0x38(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x4a0>
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnCallGuildLevelUpEP12PacketHeader+0x48b>
-add    $0x8c,%esp
+add    $0x7c,%esp
```

## _ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader  [DIFF]  pm=110
```diff
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%esi
+lea    -0x38(%ebp),%esi
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x31(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x1d2>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x1cb>
+lea    -0x31(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x2d,%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x20(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,%ebx
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0x2d,%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x28(%ebp),%eax
+lea    0x16(%eax),%edi
+mov    -0x28(%ebp),%eax
... (30 lines omitted) ...
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d1>
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d1>
-jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x274>
+jne    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x26b>
+movl   $0x290,0x8(%esp)
+movl   $"OnNoticeGuildEnter",0x4(%esp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x290,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x26d>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x264>
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d1>
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2d5>
+jmp    <T> <_ZN17CPacketTranslater18OnNoticeGuildEnterEP12PacketHeader+0x2cc>
```

## _ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader  [DIFF]  pm=74
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
-lea    -0x1d3(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
+lea    -0x1d7(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x1c9(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x1cd(%ebp)
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
-movb   $0x0,-0x1c5(%ebp)
-lea    -0x1d3(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
+movb   $0x0,-0x25(%ebp)
+lea    -0x1d7(%ebp),%eax
-lea    -0x1d3(%ebp),%eax
-add    $0xe,%eax
+lea    -0x25(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-movzwl -0x1d1(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1d3(%ebp),%eax
-mov    %edx,0x8(%esp)
+movzbl -0x25(%ebp),%eax
+mov    %al,-0x1c9(%ebp)
+lea    -0x1d7(%ebp),%eax
+movl   $0x19f,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
-jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1a3>
+jne    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x19c>
+movl   $0xf45,0x8(%esp)
+movl   $"OnRequestBlackList",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xf45,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnRequestBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x19c>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x195>
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1fd>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f6>
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f8>
+jmp    <T> <_ZN17CPacketTranslater18OnRequestBlackListEP12PacketHeader+0x1f1>
```

## _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader  [DIFF]  pm=103
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %bl
-lea    -0x38(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x108>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x101>
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0xf0>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0xe9>
-lea    -0x31(%ebp),%eax
+lea    -0x21(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x1b7>
-lea    -0x31(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x1ac>
+lea    -0x21(%ebp),%eax
... (23 lines omitted) ...
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x28f>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-mov    %eax,-0x44(%ebp)
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x233>
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x226>
+movl   $0xf16,0x8(%esp)
+movl   $"OnDeleteToBlackList",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xf16,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x22c>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x21f>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x280>
-lea    -0x20(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x288>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x27b>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x290>
-nop
```

## _ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader  [DIFF]  pm=191
```diff
-push   %edi
-sub    $0x9fc,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
+sub    $0x9f0,%esp
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x4f>
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
-lea    -0x68(%ebp),%eax
+lea    -0x58(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x20(%ebp)
-add    $0x10,%eax
-mov    %eax,-0x2c(%ebp)
-mov    -0x30(%ebp),%eax
-mov    0xe(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x20(%ebp),%eax
-mov    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0xba>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0xb3>
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
-lea    -0x60(%ebp),%eax
+lea    -0x50(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
-mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
... (111 lines omitted) ...
+movl   $0x1906,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnGuildCargoHistory GUILD CARGO LOCKED!(%d,%d)",0x8(%esp)
+movl   $"./log/GuildCargo",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
-jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2dd>
+jne    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2d5>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2d6>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x2ce>
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x337>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32f>
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x332>
+jmp    <T> <_ZN17CPacketTranslater19OnGuildCargoHistoryEP12PacketHeader+0x32a>
-add    $0x9fc,%esp
+add    $0x9f0,%esp
-pop    %edi
```

## _ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader  [DIFF]  pm=136
```diff
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xe2>
-lea    -0x39(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xe5>
+lea    -0x29(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x30(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xc2>
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x2b9>
-lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x29(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x165>
-lea    -0x5a(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x168>
+lea    -0x4a(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x40(%ebp)
... (56 lines omitted) ...
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
+mov    -0x28(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x335>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x331>
+movl   $0x2f9,0x8(%esp)
+movl   $"OnNoticeGuildSecede",0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x2f9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x68(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x32e>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
-lea    -0x30(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x70(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38a>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x386>
```

## _ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader  [DIFF]  pm=255
```diff
-lea    -0x49(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x35(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x50(%ebp),%esi
+lea    -0x3c(%ebp),%esi
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3bc>
-lea    -0x49(%ebp),%eax
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x3b6>
+lea    -0x35(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49c>
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x492>
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x233>
... (175 lines omitted) ...
+mov    -0x24(%ebp),%eax
-lea    -0xcd(%ebp),%edx
+lea    -0xcb(%ebp),%edx
-lea    -0x5e(%ebp),%eax
+lea    -0x4a(%ebp),%eax
-movl   $0x9,-0x54(%ebp)
-lea    -0x5e(%ebp),%eax
+movl   $0x9,-0x40(%ebp)
+lea    -0x4a(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x492>
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x43c>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x434>
+movl   $0x76d,0x8(%esp)
+movl   $"OnNoticeGuildWarEnd",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x76d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x54(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x435>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x42d>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x492>
-lea    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x495>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x48d>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildWarEndEP12PacketHeader+0x49d>
-nop
```

## _ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader  [DIFF]  pm=282
```diff
-sub    $0xbc,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
+sub    $0xcc,%esp
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x50>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    %eax,-0x3c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0xba>
+je     <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0xb9>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
-lea    -0xaf(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
+lea    -0xbf(%ebp),%eax
-lea    -0x81(%ebp),%eax
+lea    -0x91(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x77(%ebp)
-mov    -0x77(%ebp),%eax
-mov    %eax,-0xa5(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0xb5(%ebp)
+mov    -0x3c(%ebp),%eax
+mov    %eax,-0x87(%ebp)
... (202 lines omitted) ...
+mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e8>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3ea>
+movl   $0x116d,0x8(%esp)
+movl   $"OnDBReplyGuildCreate",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x116d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e1>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x3e3>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x442>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x444>
-lea    -0x34(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x43d>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildCreateEP12PacketHeader+0x43f>
-add    $0xbc,%esp
+add    $0xcc,%esp
```

## _ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader  [DIFF]  pm=392
```diff
-sub    $0x114c,%esp
+sub    $0x216c,%esp
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5e8>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x5c4>
-mov    0x8(%ebp),%eax
+lea    -0x135(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    0x8(%ebp),%eax
+movzbl 0x1a(%eax),%eax
+mov    %al,-0x2d(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x3d(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x3c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-lea    -0x125(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN31Packet_Guild_Reply_Guild_SecedeC1Ev>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
... (312 lines omitted) ...
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x11d(%ebp)
+lea    -0x135(%ebp),%eax
+movl   $0x52,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
-jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x664>
+jne    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x644>
+movl   $0xbff,0x8(%esp)
+movl   $"OnDBReplyGuildSecede",0x4(%esp)
+lea    -0x98(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xbff,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x98(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x65d>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x63d>
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6be>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6a4>
-lea    -0x38(%ebp),%eax
+lea    -0xa0(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0xa0(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x6b9>
+jmp    <T> <_ZN17CPacketTranslater20OnDBReplyGuildSecedeEP12PacketHeader+0x69f>
-add    $0x114c,%esp
+add    $0x216c,%esp
```

## _ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader  [DIFF]  pm=536
```diff
-mov    %eax,-0x34(%ebp)
-lea    -0xd7(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+lea    -0xdf(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0xc9(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0xd1(%ebp)
+mov    -0x3c(%ebp),%eax
-mov    %eax,-0xc4(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x1b(%eax),%edx
+mov    %eax,-0xcc(%ebp)
+mov    -0x3c(%ebp),%eax
+add    $0x1b,%eax
+mov    (%eax),%edx
+mov    %edx,-0xc8(%ebp)
+mov    0x4(%eax),%edx
+mov    %edx,-0xc4(%ebp)
+mov    0x8(%eax),%edx
-mov    0x1f(%eax),%edx
+mov    0xc(%eax),%edx
-mov    0x23(%eax),%edx
+mov    0x10(%eax),%edx
-mov    0x27(%eax),%edx
+mov    0x14(%eax),%edx
-mov    0x2b(%eax),%edx
+mov    0x18(%eax),%edx
-mov    0x2f(%eax),%edx
+mov    0x1c(%eax),%edx
-mov    0x33(%eax),%edx
+mov    0x20(%eax),%edx
-mov    0x37(%eax),%edx
+mov    0x24(%eax),%edx
-mov    0x3b(%eax),%edx
+mov    0x28(%eax),%edx
-mov    0x3f(%eax),%edx
+mov    0x2c(%eax),%edx
-mov    0x43(%eax),%edx
... (456 lines omitted) ...
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
-jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x750>
+jne    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x729>
+movl   $0x1a48,0x8(%esp)
+movl   $"OnGuildCargoPushItem",0x4(%esp)
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1a48,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x749>
+lea    -0x88(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x722>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7aa>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x789>
-lea    -0x3c(%ebp),%eax
+lea    -0x90(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x7a5>
+lea    -0x90(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnGuildCargoPushItemEP12PacketHeader+0x784>
```

## _ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader  [DIFF]  pm=87
```diff
-lea    -0x3d(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%esi
+lea    -0x34(%ebp),%esi
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x3d(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x218>
-lea    -0x3d(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x213>
+lea    -0x2d(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x5a(%ebp),%eax
+lea    -0x4a(%ebp),%eax
-movl   $0x0,-0x50(%ebp)
+movl   $0x0,-0x40(%ebp)
-mov    %eax,-0x4c(%ebp)
-movl   $0x1,-0x48(%ebp)
+mov    %eax,-0x3c(%ebp)
+movl   $0x1,-0x38(%ebp)
-lea    -0x5a(%ebp),%edx
+lea    -0x4a(%ebp),%edx
-movl   $0x0,-0x50(%ebp)
+movl   $0x0,-0x40(%ebp)
-mov    %eax,-0x4c(%ebp)
-movl   $0x2,-0x48(%ebp)
... (7 lines omitted) ...
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x319>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x319>
-jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2ba>
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2b3>
+movl   $0x3c9,0x8(%esp)
+movl   $"OnNoticeGuildDismiss",0x4(%esp)
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x3c9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x54(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2ac>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x319>
-lea    -0x2c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x31b>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x314>
```

## _ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader  [DIFF]  pm=130
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x4f>
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
-mov    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
+mov    0x8(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0xb9>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0xb8>
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
... (50 lines omitted) ...
+mov    0x8(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x328>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x31c>
+movl   $0x1110,0x8(%esp)
+movl   $"OnRequestGuildCreate",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1110,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x321>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x315>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x37d>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x371>
```

## _ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader  [DIFF]  pm=102
```diff
-push   %edi
-sub    $0x7c,%esp
+add    $0xffffff80,%esp
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    0xc(%eax),%eax
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x14(%ebp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0xb2>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
... (22 lines omitted) ...
+mov    -0x1c(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x54(%ebp)
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,-0x48(%ebp)
-lea    -0x62(%ebp),%edx
+lea    -0x5c(%ebp),%edx
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x229>
-jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1d1>
+jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1cf>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1ca>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1c8>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x229>
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x226>
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x224>
-add    $0x7c,%esp
+sub    $0xffffff80,%esp
-pop    %edi
```

## _ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader  [DIFF]  pm=61
```diff
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4ae>
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f8>
-je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
+je     <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f8>
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x14c>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x149>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
+mov    -0x34(%ebp),%edx
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f2>
-mov    -0x34(%ebp),%eax
-movb   $0x1,0xa(%eax)
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f9>
-mov    -0x34(%ebp),%eax
-movb   $0x2,0xa(%eax)
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f0>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x1f5>
+mov    $0x2,%eax
+mov    %al,0xa(%edx)
-cwtl
-movl   $0x1,-0x28(%ebp)
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x23d>
-movl   $0x2,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x234>
+mov    $0x2,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x239>
+mov    $0x1,%eax
+mov    %eax,-0x28(%ebp)
-cwtl
-lea    -0x70(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
+lea    -0x70(%ebp),%edx
+mov    %edx,0x4(%esp)
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x39a>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x398>
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x373>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3c6>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x371>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3c4>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3d6>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x3d4>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x452>
+jne    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x450>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x44b>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x449>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4aa>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4a7>
+jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4a5>
-jmp    <T> <_ZN17CPacketTranslater21OnChangePowerWarPointEP12PacketHeader+0x4af>
-nop
```

## _ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader  [DIFF]  pm=59
```diff
-mov    0x12(%eax),%edi
+mov    0x14(%eax),%edi
-mov    0xe(%eax),%esi
+mov    0x10(%eax),%esi
-mov    0xa(%eax),%ebx
+mov    0xc(%eax),%ebx
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-mov    0xa(%eax),%eax
+mov    0xc(%eax),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-mov    0xe(%eax),%edi
+mov    0x10(%eax),%edi
-mov    0xa(%eax),%esi
+mov    0xc(%eax),%esi
-mov    0x12(%eax),%ebx
+mov    0x14(%eax),%ebx
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1db>
+jne    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d9>
+movl   $0x1e29,0x8(%esp)
+movl   $"OnWebGuildBoardDelete",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1e29,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d4>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x1d2>
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x235>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x233>
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x230>
+jmp    <T> <_ZN17CPacketTranslater21OnWebGuildBoardDeleteEP12PacketHeader+0x22e>
```

## _ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader  [DIFF]  pm=110
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x52>
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x4c>
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
+mov    0x8(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0xb6>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0xab>
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
... (30 lines omitted) ...
-call   <T> <memcpy>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x192>
-mov    -0x18(%ebp),%eax
-add    $0x12,%eax
-movl   $0x14,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x6f(%ebp),%eax
+lea    -0x6b(%ebp),%eax
-lea    -0x6f(%ebp),%edx
+lea    -0x6b(%ebp),%edx
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
-jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x262>
+jne    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x23b>
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x234>
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x295>
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x2b7>
+jmp    <T> <_ZN17CPacketTranslater22OnWriteGuildMemberMemoEP12PacketHeader+0x290>
```

## _ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader  [DIFF]  pm=85
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x120>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x11d>
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
... (5 lines omitted) ...
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
-jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x208>
+jne    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x1fd>
+movl   $0xfca,0x8(%esp)
+movl   $"OnDBMWDeleteToBlackList",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xfca,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x201>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x1f6>
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x262>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x257>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x25d>
+jmp    <T> <_ZN17CPacketTranslater23OnDBMWDeleteToBlackListEP12PacketHeader+0x252>
```

## _ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader  [DIFF]  pm=45
```diff
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%esi
+lea    -0x30(%ebp),%esi
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x217>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x247>
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1bd>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1e1>
-mov    %eax,%ebx
+mov    %eax,0x4(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break : %s\n",(%esp)
+call   <T> <printf>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1b6>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x1da>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x217>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x247>
+movl   $"CPacketTranslater::OnNoticeGuildMailArrive() Exception Break",(%esp)
+call   <T> <puts>
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x40(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x212>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMailArriveEP12PacketHeader+0x242>
```

## _ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader  [DIFF]  pm=16
```diff
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x1ab>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x1a6>
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x166>
+je     <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x161>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
-jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x24d>
+jne    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x246>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x241>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
-jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2ae>
+jmp    <T> <_ZN17CPacketTranslater23OnNoticeGuildMarkChangeEP12PacketHeader+0x2a9>
```

## _ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader  [DIFF]  pm=129
```diff
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x14(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x120>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x11d>
-movzwl -0x63(%ebp),%eax
-movzwl %ax,%edx
-mov    %edx,0x8(%esp)
+movl   $0x31,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
-mov    -0x10(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
... (49 lines omitted) ...
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
+movb   $0x2,-0x35(%ebp)
+lea    -0x65(%ebp),%eax
+movl   $0x31,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
-jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x264>
+jne    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x260>
+movl   $0xf8d,0x8(%esp)
+movl   $"OnDBMWResisterToBlackList",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xf8d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x25d>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x259>
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2be>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2ba>
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater25OnDBMWResisterToBlackListEP12PacketHeader+0x2b5>
```

## _ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader  [DIFF]  pm=247
```diff
-mov    0x8(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50>
-lea    -0x7c(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-lea    -0x7c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x30(%ebp)
-add    $0x10,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
... (167 lines omitted) ...
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4b3>
+jne    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4a0>
+movl   $0x1994,0x8(%esp)
+movl   $"OnGuildCargoCheckPushItem",0x4(%esp)
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x1994,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4ac>
+lea    -0x74(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x499>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x50d>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4fa>
-lea    -0x3c(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x508>
+lea    -0x7c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater25OnGuildCargoCheckPushItemEP12PacketHeader+0x4f5>
```

## _ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader  [DIFF]  pm=67
```diff
-jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xdf>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xdc>
+lea    -0x25(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xbc>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0xb9>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x13c>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x134>
+lea    -0x25(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23a>
+mov    -0x24(%ebp),%eax
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23a>
-jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1de>
+jne    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1d4>
+movl   $0x6a4,0x8(%esp)
+movl   $"OnUpdateChangableCharInfo",0x4(%esp)
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x6a4,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1d7>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x1cd>
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x244>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23a>
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x23f>
+jmp    <T> <_ZN17CPacketTranslater25OnUpdateChangableCharInfoEP12PacketHeader+0x235>
```

## _ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader  [DIFF]  pm=159
```diff
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x50(%ebp),%esi
+lea    -0x40(%ebp),%esi
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x29e>
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x298>
+lea    -0x39(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x63(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x53(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x48(%ebp),%esi
+lea    -0x38(%ebp),%esi
... (79 lines omitted) ...
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x55(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x51(%ebp)
-lea    -0x63(%ebp),%eax
-movl   $0x13,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x374>
-jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x31e>
+jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x316>
+movl   $0xb19,0x8(%esp)
+movl   $"OnDBMWReplySendGuildLetter",0x4(%esp)
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0xb19,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x30f>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x374>
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x377>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x36f>
```

## _ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader  [DIFF]  pm=152
```diff
-push   %edi
-sub    $0x7c,%esp
+sub    $0x60,%esp
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x53>
-movl   $0x1c9d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp",0x8(%esp)
-movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x54(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x198>
+mov    -0x20(%ebp),%eax
+mov    0x11(%eax),%eax
+mov    %eax,-0x1c(%ebp)
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x1c(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0xb7>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x7f>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
... (72 lines omitted) ...
-mov    -0x28(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
+movl   $0x1c9d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp",0x8(%esp)
+movl   $"./log/GuildBoard",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x25e>
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x24f>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x257>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x248>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a9>
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2a4>
-add    $0x7c,%esp
+add    $0x60,%esp
-pop    %edi
```

## _ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader  [DIFF]  pm=57
```diff
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x158>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x152>
+lea    -0x25(%ebp),%eax
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x230>
+je     <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
-xor    $0x1,%eax
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x233>
+je     <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
-jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1d4>
+jne    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1f2>
-mov    %eax,%ebx
+mov    %eax,0x4(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break : %s\n",(%esp)
+call   <T> <printf>
-mov    %ebx,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%edx
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    %eax,0xc(%esp)
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1cd>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x1eb>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x258>
+movl   $"CPacketTranslater::OnNoticeGuildWarEnd Exception Break",(%esp)
+call   <T> <puts>
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x229>
+jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x253>
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
-nop
-jmp    <T> <_ZN17CPacketTranslater27OnNoticeGuildWarPointChangeEP12PacketHeader+0x234>
-nop
```

## _ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader  [DIFF]  pm=16
```diff
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32c>
+je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32a>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-nop
```

## _ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader  [DIFF]  pm=75
```diff
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
+mov    -0x18(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x147>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x14c>
-mov    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%ecx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-xor    $0x1,%eax
+cmp    $0x1,%eax
+setne  %al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x143>
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x148>
-mov    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%ecx
-mov    0x12(%eax),%ecx
+mov    0x12(%eax),%eax
+mov    %eax,%ecx
-add    -0x14(%ebp),%eax
+add    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%ebx
+mov    -0x18(%ebp),%ebx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-mov    -0x14(%ebp),%ecx
+mov    -0x18(%ebp),%ecx
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x201>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x204>
+movl   $0x101b,0x8(%esp)
+movl   $"OnDBMWResponseBlackListOnLogin",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,%ebx
-movl   $0x101b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x1fa>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x1fd>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25e>
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x259>
```

## _ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader  [DIFF]  pm=383
```diff
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x2c(%ebp)
-lea    -0x58(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x58(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-mov    -0x20(%ebp),%eax
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
+mov    -0x2c(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0xc7>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x103c,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBMWChangeUnconnectedGuildMemberGrade : 0 == pclGuild(%d)",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-lea    -0x92(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN41Packet_Monitor_Set_Sub_Guild_Master_ReplyC1Ev>
-movl   $0x0,-0x88(%ebp)
-mov    -0x20(%ebp),%eax
-movzbl 0x30(%eax),%eax
-cmp    $0xff,%al
... (303 lines omitted) ...
-mov    %al,-0x7c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+movzbl 0x30(%eax),%eax
+mov    %al,-0x80(%ebp)
+mov    -0x2c(%ebp),%eax
-lea    -0x92(%ebp),%eax
+lea    -0x96(%ebp),%eax
-lea    -0x92(%ebp),%eax
+lea    -0x96(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
-jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x414>
+jne    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3f9>
-lea    -0x38(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x40d>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x3f2>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x453>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x469>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x44e>
-jmp    <T> <_ZN17CPacketTranslater39OnDBMWChangeUnconnectedGuildMemberGradeEP12PacketHeader+0x471>
-nop
```

## _ZN17CUdpNetworkThread8dispatchEPv  [DIFF]  pm=470
```diff
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x54(%ebp),%esi
+lea    -0x5c(%ebp),%esi
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x4d(%ebp),%eax
+lea    -0x55(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4cb>
-lea    -0x4d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4d9>
+lea    -0x55(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4b3>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x4c1>
-lea    -0x68(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-mov    %eax,-0x58(%ebp)
-lea    -0x68(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuardI6CMutexED1Ev>
-movl   $0x1800,-0x5c(%ebp)
-movw   $0x0,-0x5e(%ebp)
-movl   $0x0,-0x64(%ebp)
-mov    -0x58(%ebp),%eax
-mov    %eax,%edx
+mov    %eax,-0x2c(%ebp)
+lea    -0x6c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuardI6CMutexED1Ev>
+movl   $0x1800,-0x60(%ebp)
+movw   $0x0,-0x62(%ebp)
+movl   $0x0,-0x68(%ebp)
+mov    -0x2c(%ebp),%edx
-lea    -0x5e(%ebp),%ecx
... (390 lines omitted) ...
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x59f>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5ad>
-lea    -0x2d(%ebp),%eax
+lea    -0x35(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5db>
-lea    -0x2d(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x5e9>
+lea    -0x35(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-movl   $"CNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+movl   $"CUdpNetworkThread::dispatch() Recv  Socket Exception Break!",0x4(%esp)
+lea    -0x34(%ebp),%eax
-lea    -0x2c(%ebp),%esi
+lea    -0x34(%ebp),%esi
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x683>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x691>
-lea    -0x2c(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x67d>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x68b>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
-lea    -0x2c(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b7>
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6c5>
-jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6a2>
+jne    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6b0>
-lea    -0x25(%ebp),%eax
+lea    -0x2d(%ebp),%eax
-jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6de>
-lea    -0x25(%ebp),%eax
+jmp    <T> <_ZN17CUdpNetworkThread8dispatchEPv+0x6ec>
+lea    -0x2d(%ebp),%eax
```

## _ZN17STGuildDBInfoOnlyC1Ev  [DIFF]  pm=8
```diff
-movzbl 0x1c(%eax),%edx
+movzbl 0x1c(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
-movzbl 0x1c(%eax),%edx
+movzbl 0x1c(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
```

## _ZN18CFrameCountHandler17GetFrameCountInfoEv  [DIFF]  pm=243
```diff
-sub    $0x6c,%esp
-movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
+sub    $0x4c,%esp
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x14d>
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x12a>
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
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
+lea    -0x21(%ebp),%eax
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xf0>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xcd>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xea>
-mov    %eax,%ecx
... (163 lines omitted) ...
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
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
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
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x345>
-add    $0x6c,%esp
+add    $0x4c,%esp
```

## _ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt  [NEAR]  pm=4
```diff
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%edx
+mov    0x10(%ebp),%edx
-mov    0x10(%ebp),%edx
```

## _ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii  [DIFF]  pm=166
```diff
-sub    $0x70,%esp
+add    $0xffffff80,%esp
-mov    %al,-0x4c(%ebp)
+mov    %al,-0x5c(%ebp)
+mov    %eax,-0x34(%ebp)
+mov    0x18(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    0x1c(%ebp),%eax
-mov    0x18(%ebp),%eax
+mov    0x20(%ebp),%eax
-mov    0x1c(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    0x20(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x24(%ebp)
+movl   $0x0,-0x20(%ebp)
-mov    %eax,%ebx
+mov    %eax,-0x1c(%ebp)
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-mov    %ebx,0x1c(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x1c(%esp)
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%eax
-lea    -0x40(%ebp),%eax
+lea    -0x48(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x20e>
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x220>
... (86 lines omitted) ...
+mov    -0x50(%ebp),%eax
+mov    -0x14(%ebp),%edx
-mov    -0x48(%ebp),%eax
-mov    -0x14(%ebp),%edx
+mov    -0x50(%ebp),%eax
+mov    -0x18(%ebp),%edx
-lea    -0x48(%ebp),%eax
+lea    -0x50(%ebp),%eax
-mov    -0x48(%ebp),%eax
+mov    -0x50(%ebp),%eax
-mov    -0x48(%ebp),%eax
+mov    -0x50(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x24(%ebp),%eax
-lea    -0x34(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-addl   $0x1,-0x18(%ebp)
-lea    -0x44(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0x211>
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16AddPowerWarPointEj>
+movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+addl   $0x1,-0x24(%ebp)
+lea    -0x4c(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xb7>
+jne    <T> <_ZN18CPowerWarGuildInfo24RewardGuildPowerWarPointER13CGuildManagerbiiii+0xbb>
```

## _ZN5CPeer11recv_packetEv  [DIFF]  pm=30
```diff
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-mov    -0xc(%ebp),%eax
-shr    $0x1f,%eax
-test   %al,%al
-je     <T> <_ZN5CPeer11recv_packetEv+0x126>
+cmpl   $0x0,-0xc(%ebp)
+jns    <T> <_ZN5CPeer11recv_packetEv+0x144>
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xc1>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xd7>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-je     <T> <_ZN5CPeer11recv_packetEv+0xda>
+jne    <T> <_ZN5CPeer11recv_packetEv+0xed>
+mov    $0x0,%eax
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-jne    <T> <_ZN5CPeer11recv_packetEv+0xe4>
+jne    <T> <_ZN5CPeer11recv_packetEv+0x102>
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
-jne    <T> <_ZN5CPeer11recv_packetEv+0x197>
+jne    <T> <_ZN5CPeer11recv_packetEv+0x1b5>
-jmp    <T> <_ZN5CPeer11recv_packetEv+0x19a>
+jmp    <T> <_ZN5CPeer11recv_packetEv+0x1b8>
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
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-mov    0x1834(%eax),%ebx
+mov    0x1834(%eax),%eax
+mov    %eax,%ebx
-setle  %al
-test   %al,%al
-je     <T> <_ZN5CPeer11send_packetEv+0xdf>
+setle  %bl
+test   %bl,%bl
+je     <T> <_ZN5CPeer11send_packetEv+0xe1>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x92>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x92>
-je     <T> <_ZN5CPeer11send_packetEv+0x90>
+je     <T> <_ZN5CPeer11send_packetEv+0x92>
-jne    <T> <_ZN5CPeer11send_packetEv+0x9a>
+jne    <T> <_ZN5CPeer11send_packetEv+0x9c>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-jle    <T> <_ZN5CPeer11send_packetEv+0x243>
+jle    <T> <_ZN5CPeer11send_packetEv+0x247>
-jle    <T> <_ZN5CPeer11send_packetEv+0x1ef>
+jle    <T> <_ZN5CPeer11send_packetEv+0x1f3>
-mov    0x1834(%eax),%edx
-mov    -0xc(%ebp),%eax
-sub    %eax,%edx
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
+sub    -0xc(%ebp),%edx
-jbe    <T> <_ZN5CPeer11send_packetEv+0x1a5>
+ja     <T> <_ZN5CPeer11send_packetEv+0x18a>
+mov    0x8(%ebp),%eax
+mov    0x1834(%eax),%eax
+mov    %eax,%edx
... (2 lines omitted) ...
+mov    0x8(%ebp),%ecx
+add    $0x183c,%ecx
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
+jmp    <T> <_ZN5CPeer11send_packetEv+0x247>
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
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-jge    <T> <_ZN5CPeer11send_packetEv+0x224>
+jge    <T> <_ZN5CPeer11send_packetEv+0x228>
-jmp    <T> <_ZN5CPeer11send_packetEv+0x246>
+jmp    <T> <_ZN5CPeer11send_packetEv+0x24a>
-add    $0x30,%esp
+add    $0x20,%esp
```

## _ZN6CGuild12AddGuildFundEj  [NEAR]  pm=8
```diff
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
```

## _ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj  [DIFF]  pm=79
```diff
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x165>
+je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x1e>
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x165>
+jne    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x28>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x169>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0xdb>
-movl   $0x1,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %ebx,0xc(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    0x8(%ebp),%edx
-add    $0xc4,%edx
-movl   $0x14,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x15e>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0xf7>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x15e>
+je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x164>
+jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x164>
+movl   $0x1,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %ebx,0xc(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    0x8(%ebp),%edx
+add    $0xc4,%edx
+movl   $0x14,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
-jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x16a>
-mov    $0x0,%eax
```

## _ZN6CGuild17InsertGuildMemberEjP5CUser  [DIFF]  pm=13
```diff
-je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xff>
+jne    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x1a>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x103>
+xor    $0x1,%eax
-je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x82>
-mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x104>
+je     <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0xfe>
-jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x104>
-mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser+0x103>
+mov    $0x1,%eax
```

## _ZN6CGuild17SetSubGuildMasterEjb  [DIFF]  pm=26
```diff
-jg     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jg     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe6>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe7>
-jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe2>
+jne    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xe3>
-movzbl %al,%eax
-mov    -0xc(%ebp),%edx
-not    %edx
-add    %edx,%eax
+movzbl %al,%edx
+mov    -0xc(%ebp),%eax
+not    %eax
+lea    (%edx,%eax,1),%eax
-seta   %al
-test   %al,%al
-je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0xff>
+seta   %bl
+test   %bl,%bl
+je     <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
-jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x100>
+jmp    <T> <_ZN6CGuild17SetSubGuildMasterEjb+0x101>
```

## _ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh  [DIFF]  pm=16
```diff
-je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd9>
+je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xcc>
-jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd8>
+jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xcf>
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xa7>
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9f>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9b>
+je     <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x94>
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0x9c>
-nop
-jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd9>
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd0>
+nop
+jmp    <T> <_ZN6CGuild18DBSaveGuildMembersEhP14CServerHandlerh+0xd0>
```

## _ZN6CGuild19SetTodayGuildMemberER18STTodayGuildMember  [NEAR]  pm=2
```diff
+mov    0xc(%ebp),%edx
-mov    0xc(%ebp),%edx
```

## _ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc  [DIFF]  pm=32
```diff
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11a>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x120>
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11d>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x123>
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x106>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x10c>
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
-je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x102>
+je     <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x108>
+mov    0x8(%ebp),%ecx
-add    $0xf0,%eax
-add    0x8(%ebp),%eax
-add    $0x19,%eax
+add    $0x100,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x9,%eax
+mov    0x8(%ebp),%ecx
-add    $0xf0,%eax
-add    0x8(%ebp),%eax
-lea    0x19(%eax),%edx
+add    $0x100,%eax
+lea    (%ecx,%eax,1),%eax
+lea    0x9(%eax),%edx
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
-jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x11e>
+jmp    <T> <_ZN6CGuild20WriteGuildMemberMemoEP5CUserPKc+0x124>
```

## _ZN6CGuild22NotifyTodayGuildMemberEP5CUser  [DIFF]  pm=50
```diff
-mov    0x66ec(%eax),%edx
-mov    %edx,-0x2f(%ebp)
-mov    0x66f0(%eax),%edx
-mov    %edx,-0x2b(%ebp)
-mov    0x66f4(%eax),%edx
-mov    %edx,-0x27(%ebp)
-mov    0x66f8(%eax),%edx
-mov    %edx,-0x23(%ebp)
-mov    0x66fc(%eax),%edx
-mov    %edx,-0x1f(%ebp)
-mov    0x6700(%eax),%edx
-mov    %edx,-0x1b(%ebp)
-mov    0x6704(%eax),%edx
-mov    %edx,-0x17(%ebp)
-mov    0x6708(%eax),%edx
-mov    %edx,-0x13(%ebp)
-mov    0x670c(%eax),%edx
-mov    %edx,-0xf(%ebp)
-movzwl 0x6710(%eax),%edx
-mov    %dx,-0xb(%ebp)
+mov    0x66ec(%eax),%eax
+mov    %eax,-0x2f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f0(%eax),%eax
+mov    %eax,-0x2b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f4(%eax),%eax
+mov    %eax,-0x27(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f8(%eax),%eax
+mov    %eax,-0x23(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66fc(%eax),%eax
+mov    %eax,-0x1f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6700(%eax),%eax
+mov    %eax,-0x1b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6704(%eax),%eax
+mov    %eax,-0x17(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6708(%eax),%eax
+mov    %eax,-0x13(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x670c(%eax),%eax
+mov    %eax,-0xf(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x6710(%eax),%eax
+mov    %ax,-0xb(%ebp)
+mov    0x8(%ebp),%eax
```

## _ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo  [DIFF]  pm=70
```diff
-push   %ebx
-sub    $0x34,%esp
-movl   $0x0,-0xc(%ebp)
+sub    $0x38,%esp
+movl   $0x0,-0x10(%ebp)
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x146>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x13d>
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x3c>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x3b>
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x149>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x140>
+lea    -0x18(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x117>
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x10e>
+lea    -0x18(%ebp),%eax
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x89>
-cmpl   $0x12b,-0xc(%ebp)
-jg     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x89>
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x88>
+cmpl   $0x12b,-0x10(%ebp)
+jg     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x88>
-jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x8e>
+jmp    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x8d>
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x10c>
-mov    -0xc(%ebp),%edx
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x103>
+mov    -0x10(%ebp),%edx
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+add    0xc(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x18(%ebp),%eax
-mov    %eax,(%ebx)
-lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %eax,(%edx)
+lea    -0x18(%ebp),%eax
-je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x108>
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0xff>
+lea    -0x18(%ebp),%eax
-mov    %al,0x4(%ebx)
-addl   $0x1,-0xc(%ebp)
-lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
+mov    %al,0x4(%edx)
+addl   $0x1,-0x10(%ebp)
+lea    -0x18(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
-jne    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x67>
-mov    -0xc(%ebp),%eax
-mov    -0x4(%ebp),%ebx
+jne    <T> <_ZN6CGuild22ReplyGuildMembersToWebEP24STGuildMemberWebConnInfo+0x66>
+mov    -0x10(%ebp),%eax
```

## _ZN6CGuild22SendGuildInfoToMembersEb  [DIFF]  pm=44
```diff
-mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
-jg     <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x9b>
-mov    -0xc(%ebp),%eax
-mov    0x8(%ebp),%edx
-add    $0x4d0a,%edx
+mov    %eax,-0x10(%ebp)
+cmpl   $0x64,-0x10(%ebp)
+jbe    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x79>
+movl   $0x64,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+lea    0x4d0a(%eax),%edx
+mov    -0x10(%ebp),%eax
-lea    -0x151(%ebp),%eax
-add    $0xd4,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xc2>
-mov    0x8(%ebp),%eax
-add    $0x4d0a,%eax
-movl   $0x64,0x8(%esp)
-mov    %eax,0x4(%esp)
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x154>
+jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x12d>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x148>
-mov    -0x10(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x121>
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x149>
+jmp    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0x122>
-jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xd9>
+jne    <T> <_ZN6CGuild22SendGuildInfoToMembersEb+0xb7>
```

## _ZN6CGuild23LoadGuildOneMemberProxyEP5CUser  [DIFF]  pm=102
```diff
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f4>
+je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x2a>
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f4>
+jne    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x34>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1dc>
-ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x16e>
+ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x158>
-movzwl %ax,%ebx
+mov    %ax,-0xa(%ebp)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
+lea    (%esi,%eax,1),%eax
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%edx
+mov    0x8(%ebp),%ebx
+movzwl -0xa(%ebp),%edx
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-add    $0x11,%eax
+add    $0xe0,%eax
+lea    (%ebx,%eax,1),%eax
+add    $0x1,%eax
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    0x8(%ebp),%ecx
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dl,0xf(%eax)
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%ebx
+lea    (%esi,%eax,1),%eax
+add    $0xff,%eax
... (22 lines omitted) ...
+lea    (%esi,%eax,1),%eax
+add    $0x103,%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%esi
+movzwl -0xa(%ebp),%ebx
-mov    %eax,%edx
-mov    0x8(%ebp),%ecx
+movzbl %al,%edx
-lea    (%ecx,%eax,1),%eax
-add    $0xf0,%eax
-mov    %dx,0x11(%eax)
+lea    (%esi,%eax,1),%eax
+add    $0x100,%eax
+mov    %dx,0x1(%eax)
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1df>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1c9>
+movl   $0x73d,0x8(%esp)
+movl   $"LoadGuildOneMemberProxy",0x4(%esp)
+lea    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-movzwl %ax,%esi
+movzwl %ax,%edx
-mov    0x18(%eax),%ebx
-movl   $0x73d,0x8(%esp)
-movl   $&_ZZN6CGuild23LoadGuildOneMemberProxyEP5CUserE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x18(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1df>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1c9>
-jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser+0x1f9>
-mov    $0x0,%eax
```

## _ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy  [DIFF]  pm=40
```diff
-push   %esi
-push   %ebx
-sub    $0x30,%esp
+sub    $0x38,%esp
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x109>
+je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x28>
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x109>
+jne    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x32>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x10a>
-ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x83>
+ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x86>
+mov    0x8(%ebp),%ecx
-add    0x8(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf4>
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf7>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+movzwl 0x1e(%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf4>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf7>
-jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x10e>
-mov    $0x0,%eax
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
```

## _ZN6CGuild23SendGuildInfoToManagersEv  [DIFF]  pm=22
```diff
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x191>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x180>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x162>
+jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x151>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x153>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x146>
-xor    $0x1,%eax
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
+jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0xf7>
-xor    $0x1,%eax
-je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x109>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0xfe>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x10e>
+jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x103>
-jne    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x156>
+je     <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x146>
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x157>
-nop
-jmp    <T> <_ZN6CGuild23SendGuildInfoToManagersEv+0x157>
-nop
```

## _ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh  [DIFF]  pm=34
```diff
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
-je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xca>
-je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xca>
-jne    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0x76>
-movzbl -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-add    %edx,%eax
+jne    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0x78>
+movzbl -0x10(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+lea    (%edx,%eax,1),%eax
-jmp    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
-movzbl -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x6,%eax
-lea    (%eax,%edx,1),%ecx
+jmp    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xca>
+movzbl -0x10(%ebp),%eax
+mov    %eax,%edx
+shl    $0x6,%edx
+lea    (%edx,%eax,1),%ecx
+mov    0x8(%ebp),%ebx
-add    0x8(%ebp),%eax
+lea    (%ebx,%eax,1),%eax
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
```

## _ZN6CGuild25ChangeGuildMemberCharNameEjPc  [DIFF]  pm=57
```diff
-movb   $0x0,-0xd(%ebp)
+movb   $0x0,-0x11(%ebp)
-je     <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x16a>
+je     <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x175>
-jmp    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xac>
+jmp    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xb5>
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xa8>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0xb1>
+mov    0x8(%ebp),%ecx
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-add    $0x11,%eax
+add    $0xe0,%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x1,%eax
+mov    0x8(%ebp),%ecx
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-lea    0x11(%eax),%edx
+add    $0xe0,%eax
+lea    (%ecx,%eax,1),%eax
+lea    0x1(%eax),%edx
-movb   $0x1,-0xd(%ebp)
+movb   $0x1,-0x11(%ebp)
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x2e>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x31>
-mov    0x66ec(%eax),%eax
+add    $0x66ec,%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x11b>
-mov    0x8(%ebp),%eax
-add    $0x66f0,%eax
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x126>
+mov    -0x10(%ebp),%eax
+add    $0x4,%eax
-mov    0x8(%ebp),%eax
-lea    0x66f0(%eax),%edx
+mov    -0x10(%ebp),%eax
+add    $0x4,%eax
-mov    0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
-movb   $0x1,-0xd(%ebp)
+movb   $0x1,-0x11(%ebp)
-jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x16a>
+jne    <T> <_ZN6CGuild25ChangeGuildMemberCharNameEjPc+0x175>
-movb   $0x1,-0xd(%ebp)
-movzbl -0xd(%ebp),%eax
+movb   $0x1,-0x11(%ebp)
+movzbl -0x11(%ebp),%eax
```

## _ZN6CGuild25NotifyAllTodayGuildMemberEv  [DIFF]  pm=60
```diff
-mov    0x66ec(%eax),%edx
-mov    %edx,-0x3b(%ebp)
-mov    0x66f0(%eax),%edx
-mov    %edx,-0x37(%ebp)
-mov    0x66f4(%eax),%edx
-mov    %edx,-0x33(%ebp)
-mov    0x66f8(%eax),%edx
-mov    %edx,-0x2f(%ebp)
-mov    0x66fc(%eax),%edx
-mov    %edx,-0x2b(%ebp)
-mov    0x6700(%eax),%edx
-mov    %edx,-0x27(%ebp)
-mov    0x6704(%eax),%edx
-mov    %edx,-0x23(%ebp)
-mov    0x6708(%eax),%edx
-mov    %edx,-0x1f(%ebp)
-mov    0x670c(%eax),%edx
-mov    %edx,-0x1b(%ebp)
-movzwl 0x6710(%eax),%edx
-mov    %dx,-0x17(%ebp)
+mov    0x66ec(%eax),%eax
+mov    %eax,-0x3b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f0(%eax),%eax
+mov    %eax,-0x37(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f4(%eax),%eax
+mov    %eax,-0x33(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66f8(%eax),%eax
+mov    %eax,-0x2f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x66fc(%eax),%eax
+mov    %eax,-0x2b(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6700(%eax),%eax
+mov    %eax,-0x27(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6704(%eax),%eax
+mov    %eax,-0x23(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x6708(%eax),%eax
+mov    %eax,-0x1f(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x670c(%eax),%eax
+mov    %eax,-0x1b(%ebp)
+mov    0x8(%ebp),%eax
+movzwl 0x6710(%eax),%eax
+mov    %ax,-0x17(%ebp)
+mov    0x8(%ebp),%eax
-jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x101>
+jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x11a>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xf5>
+je     <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x10e>
-jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xf6>
+jmp    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0x10f>
-jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xa1>
+jne    <T> <_ZN6CGuild25NotifyAllTodayGuildMemberEv+0xbf>
```

## _ZN6CGuild26NotifyAllAchieveAttendanceEjj  [DIFF]  pm=8
```diff
-jmp    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x9b>
+jmp    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x93>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x8f>
+je     <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x88>
-jmp    <T> <_ZN6CGuild26NotifyAllAchieveAttendanceEjj+0x90>
-nop
```

## _ZN6CGuild26NotifyMessageToGuildMemberEv  [DIFF]  pm=22
```diff
-je     <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x156>
+je     <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x153>
-jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x155>
+jne    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x153>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x64,-0xc(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x64,-0x10(%ebp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN6CGuild26NotifyMessageToGuildMemberEv+0x156>
-nop
```

## _ZN6CGuild26SendGuildAgitInfoToMembersEv  [DIFF]  pm=8
```diff
-jmp    <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv+0xb3>
+jmp    <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv+0xab>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv+0xa7>
+je     <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv+0xa0>
-jmp    <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv+0xa8>
-nop
```

## _ZN6CGuild26UpdateChangableInfoProcessEv  [DIFF]  pm=25
```diff
-je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x100>
+je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xfe>
-seta   %al
-test   %al,%al
-je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x100>
+jbe    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xfe>
-jmp    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xd2>
+jmp    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xd0>
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
+test   %eax,%eax
+setne  %al
-je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xce>
+je     <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0xcc>
+mov    0x8(%ebp),%ebx
-mov    -0x10(%ebp),%eax
-mov    %eax,%ecx
-mov    0x8(%ebp),%ebx
+mov    -0x10(%ebp),%ecx
-add    $0xf0,%eax
-mov    %ecx,0x15(%eax)
+add    $0x100,%eax
+mov    %ecx,0x5(%eax)
-jne    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x7f>
+jne    <T> <_ZN6CGuild26UpdateChangableInfoProcessEv+0x7a>
```

## _ZN6CGuild27DismissGuildMemberAndNoticeEi  [DIFF]  pm=16
```diff
-je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x141>
+je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x138>
-jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x140>
+jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x13b>
-jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x10f>
+jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x107>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x103>
+je     <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0xfc>
-jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x104>
-nop
-jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x141>
+jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x13c>
+nop
+jmp    <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi+0x13c>
```

## _ZN6CGuild28SendGuildNameChangeToMembersEv  [DIFF]  pm=8
```diff
-jmp    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xb1>
+jmp    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xa9>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xa5>
+je     <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0x9e>
-jmp    <T> <_ZN6CGuild28SendGuildNameChangeToMembersEv+0xa6>
-nop
```

## _ZN6CGuild29getUnconnectedGuildMemberNameEj  [NEAR]  pm=2
```diff
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
```

## _ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji  [NEAR]  pm=18
```diff
-je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x86>
+je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x85>
-je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x86>
+je     <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x85>
-jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x72>
+jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x71>
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
-jne    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x6e>
+jne    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x6d>
+mov    0x8(%ebp),%ebx
-mov    0x8(%ebp),%ebx
-add    $0xf0,%eax
-mov    %cl,0x14(%eax)
-jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x86>
+add    $0x104,%eax
+mov    %cl,(%eax)
+jmp    <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji+0x85>
```

## _ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc  [DIFF]  pm=37
```diff
-jne    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16a>
+jne    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16d>
-je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16b>
+je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16d>
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x8a>
+jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x50>
+addb   $0x1,-0xd(%ebp)
+addl   $0x1,-0xc(%ebp)
+mov    0xc(%ebp),%eax
+movzbl 0x44(%eax),%eax
+movzbl %al,%eax
+cmp    -0xc(%ebp),%eax
+jle    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa0>
-jg     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa3>
-addb   $0x1,-0xd(%ebp)
-addl   $0x1,-0xc(%ebp)
-mov    0xc(%ebp),%eax
-movzbl 0x44(%eax),%eax
-movzbl %al,%eax
-cmp    -0xc(%ebp),%eax
-setg   %al
+jg     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa0>
+mov    $0x1,%eax
+jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa5>
+mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa4>
-nop
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0xa4>
-nop
-je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x10c>
+je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x111>
-je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x155>
+je     <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x15a>
-jge    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x155>
+jge    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x15a>
-jmp    <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc+0x16b>
-nop
```

## _ZN8WongWork11CGMAccounts4isGMEj  [NEAR]  pm=18
```diff
-movl   $0x0,-0x20(%ebp)
-movl   $0x0,-0x1c(%ebp)
-movl   $0x3,-0x1c(%ebp)
+movl   $0x0,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+movl   $0x3,-0x14(%ebp)
-mov    %eax,-0x20(%ebp)
+mov    %eax,-0x18(%ebp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x14(%ebp),%eax
-lea    -0x20(%ebp),%edx
+lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
-lea    -0x14(%ebp),%eax
+lea    -0x20(%ebp),%eax
```

## _ZN9CGuildWar13DBSaveProcessEP12CApplication  [DIFF]  pm=21
```diff
-sub    $0x78,%esp
+push   %ebx
+sub    $0x74,%esp
-jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x97>
+jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x98>
-sete   %al
-test   %al,%al
-jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9a>
+sete   %bl
+test   %bl,%bl
+jne    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9b>
-je     <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x8e>
+je     <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x8f>
-jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9b>
+jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9c>
-jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9b>
+jmp    <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication+0x9c>
-leave
+add    $0x74,%esp
+pop    %ebx
+pop    %ebp
```

## _ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info  [DIFF]  pm=30
```diff
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x11a>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x126>
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xe9>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xf5>
-je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xde>
+je     <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0xea>
+mov    0xc(%ebp),%ecx
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
+lea    (%ecx,%eax,1),%ebx
+mov    0xc(%ebp),%ecx
-mov    %eax,%ebx
-add    0xc(%ebp),%ebx
+add    $0x4,%eax
+lea    (%ecx,%eax,1),%ebx
-mov    %eax,0x4(%ebx)
+mov    %eax,(%ebx)
+mov    0xc(%ebp),%ebx
-add    0xc(%ebp),%eax
+lea    (%ebx,%eax,1),%eax
+mov    0xc(%ebp),%ecx
-add    0xc(%ebp),%eax
+add    $0x8,%eax
+lea    (%ecx,%eax,1),%edx
-mov    -0xc(%ebp),%edx
-mov    %dx,0x8(%eax)
+mov    -0xc(%ebp),%eax
+mov    %ax,(%edx)
-jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x11b>
+jmp    <T> <_ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info+0x127>
```

## _ZNK11CUdpHandler12SendToServerEPcitPKc  [DIFF]  pm=2
```diff
-lea    -0x48(%ebp),%eax
+lea    -0x48(%ebp),%eax
```

## _ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo  [DIFF]  pm=23
```diff
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
-je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x21>
+je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x22>
-jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x93>
+jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x96>
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
-je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x8e>
+je     <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x91>
+mov    0x10(%ebp),%ebx
-mov    0x10(%ebp),%edx
-mov    0x4(%eax),%eax
-mov    %eax,(%edx)
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,(%ebx)
-jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x93>
+jmp    <T> <_ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo+0x96>
+mov    -0x4(%ebp),%ebx
```
