## guild _ZN6CGuild25ChangeGuildMemberCharNameEjPc [DIFF] pm=57
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

## guild _ZN6CGuild25NotifyAllTodayGuildMemberEv [DIFF] pm=60
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

## guild _ZN6CGuild26NotifyAllAchieveAttendanceEjj [DIFF] pm=8
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

## guild _ZN6CGuild26NotifyMessageToGuildMemberEv [DIFF] pm=22
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

## guild _ZN6CGuild26SendGuildAgitInfoToMembersEv [DIFF] pm=8
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

## guild _ZN6CGuild26UpdateChangableInfoProcessEv [DIFF] pm=25
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

## guild _ZN6CGuild27DismissGuildMemberAndNoticeEi [DIFF] pm=16
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

## guild _ZN6CGuild28SendGuildNameChangeToMembersEv [DIFF] pm=8
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

## guild _ZN6CGuild29getUnconnectedGuildMemberNameEj [NEAR] pm=2
```diff
+mov    0x8(%ebp),%ecx
-mov    0x8(%ebp),%ecx
```

## guild _ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji [NEAR] pm=18
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

## guild _ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc [DIFF] pm=37
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

## guild _ZN8WongWork11CGMAccounts4isGMEj [NEAR] pm=18
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

## guild _ZN9CGuildWar13DBSaveProcessEP12CApplication [DIFF] pm=21
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

## guild _ZN9CGuildWar15GetGuildWarInfoEP22ST_Guild_War_Rank_Info [DIFF] pm=30
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

## guild _ZNK11CUdpHandler12SendToServerEPcitPKc [DIFF] pm=2
```diff
-lea    -0x48(%ebp),%eax
+lea    -0x48(%ebp),%eax
```

## guild _ZNK6CGuild28PopGuildMemberChanglableInfoEjR26STGuildMemberChangableInfo [DIFF] pm=23
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

## monitor _ZN10CAppConfig11Parse_TableEPci [NEAR] pm=10
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

## monitor _ZN10CIPCounter11setLoadTermEh [DIFF] pm=24
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

## monitor _ZN10CIPCounter13setMinIPCountEh [DIFF] pm=10
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

## monitor _ZN10CIPCounter9setOptionEhh [NEAR] pm=20
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

## monitor _ZN11CCashObject15GetBuddysObjectEPP6CBuddy [NEAR] pm=22
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

## monitor _ZN11CUdpHandler16InitServerSocketEi [DIFF] pm=71
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

## monitor _ZN12CApplication15TranslateSignalEv [DIFF] pm=58
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

## monitor _ZN12CApplication4LoadEiPPc [DIFF] pm=561
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
-lea    -0x8d(%ebp),%eax
+lea    -0x85(%ebp),%eax
-lea    -0x8d(%ebp),%edx
+lea    -0x85(%ebp),%edx
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-lea    -0x94(%ebp),%edx
+lea    -0x8c(%ebp),%edx
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-lea    -0x94(%ebp),%eax
+lea    -0x8c(%ebp),%eax
-lea    -0x8d(%ebp),%eax
+lea    -0x85(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x8d(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x85(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-je     <T> <_ZN12CApplication4LoadEiPPc+0x438>
-lea    -0x85(%ebp),%eax
+je     <T> <_ZN12CApplication4LoadEiPPc+0x42c>
+lea    -0x7d(%ebp),%eax
-lea    -0x85(%ebp),%eax
+lea    -0x7d(%ebp),%eax
-lea    -0x8c(%ebp),%eax
+lea    -0x84(%ebp),%eax
-lea    -0x8c(%ebp),%esi
+lea    -0x84(%ebp),%esi
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3dd>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3d7>
-lea    -0x8c(%ebp),%eax
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3d7>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3d1>
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f1>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
-lea    -0x8c(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x3f1>
+lea    -0x84(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x412>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x409>
-jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f7>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0x3f1>
-lea    -0x85(%ebp),%eax
+lea    -0x7d(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x85(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x7d(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x467>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x45b>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x4de>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x521>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x52c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+mov    %ebx,%edx
-je     <T> <_ZN12CApplication4LoadEiPPc+0x563>
+je     <T> <_ZN12CApplication4LoadEiPPc+0x56c>
-lea    -0x84(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-lea    -0x84(%ebp),%eax
+lea    -0x7c(%ebp),%eax
-mov    %eax,-0x38(%ebp)
+mov    %eax,-0x34(%ebp)
-mov    %ax,-0x32(%ebp)
+mov    %ax,-0x2e(%ebp)
-mov    %eax,-0x30(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x34(%ebp),%eax
-cmpw   $0x0,-0x32(%ebp)
+cmpw   $0x0,-0x2e(%ebp)
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-lea    -0x75(%ebp),%eax
+lea    -0x6d(%ebp),%eax
-lea    -0x75(%ebp),%eax
+lea    -0x6d(%ebp),%eax
-mov    -0x38(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x7c(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x74(%ebp),%eax
-lea    -0x7c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+lea    -0x74(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x68f>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x7c(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x692>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x74(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x69c>
-lea    -0x7c(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x69f>
+lea    -0x74(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6b4>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x75(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x6b7>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x6d(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x75(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x6d(%ebp),%eax
-movzwl -0x32(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
-movzwl -0x32(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%ebx
+mov    -0x2c(%ebp),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x34(%ebp),%edx
-xor    $0x1,%eax
-movzwl -0x32(%ebp),%eax
+movzwl -0x2e(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-movzwl -0x32(%ebp),%esi
+movzwl -0x2e(%ebp),%esi
-lea    -0x74(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
-lea    -0x74(%ebp),%eax
+lea    -0x6c(%ebp),%eax
-movzwl -0x32(%ebp),%esi
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%esi
+mov    -0x2c(%ebp),%eax
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x34(%ebp),%eax
-lea    -0x6c(%ebp),%eax
+lea    -0x64(%ebp),%eax
-movzwl -0x32(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+movzwl -0x2e(%ebp),%ebx
+mov    -0x2c(%ebp),%eax
-mov    -0x38(%ebp),%edx
+mov    -0x34(%ebp),%edx
-lea    -0x64(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-lea    -0x64(%ebp),%eax
+lea    -0x5c(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x28(%ebp)
-mov    %ax,-0x26(%ebp)
+mov    %ax,-0x22(%ebp)
-mov    %eax,-0x24(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x28(%ebp),%eax
-je     <T> <_ZN12CApplication4LoadEiPPc+0xa6d>
-cmpw   $0x0,-0x26(%ebp)
-je     <T> <_ZN12CApplication4LoadEiPPc+0xa6d>
+je     <T> <_ZN12CApplication4LoadEiPPc+0xa6a>
+cmpw   $0x0,-0x22(%ebp)
+je     <T> <_ZN12CApplication4LoadEiPPc+0xa6a>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x54(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x5c(%ebp),%eax
+lea    -0x54(%ebp),%eax
-lea    -0x55(%ebp),%eax
+lea    -0x4d(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
-lea    -0x55(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+lea    -0x4d(%ebp),%eax
-movzwl -0x26(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+movzwl -0x22(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
-movzwl -0x26(%ebp),%ebx
-mov    -0x24(%ebp),%eax
+movzwl -0x22(%ebp),%ebx
+mov    -0x20(%ebp),%eax
-mov    -0x2c(%ebp),%edx
+mov    -0x28(%ebp),%edx
-xor    $0x1,%eax
-je     <T> <_ZN12CApplication4LoadEiPPc+0x9eb>
-movzwl -0x26(%ebp),%eax
+je     <T> <_ZN12CApplication4LoadEiPPc+0x9e8>
+movzwl -0x22(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
-movzwl -0x26(%ebp),%esi
+movzwl -0x22(%ebp),%esi
-lea    -0x54(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x54(%ebp),%eax
+lea    -0x4c(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaaf>
-movzwl -0x26(%ebp),%esi
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaac>
+movzwl -0x22(%ebp),%esi
+mov    -0x20(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
-lea    -0x4c(%ebp),%eax
+lea    -0x44(%ebp),%eax
-movzwl -0x26(%ebp),%ebx
-mov    -0x24(%ebp),%eax
+movzwl -0x22(%ebp),%ebx
+mov    -0x20(%ebp),%eax
-mov    -0x2c(%ebp),%edx
+mov    -0x28(%ebp),%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaaf>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xaac>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xb09>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xb06>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-setge  %al
+setae  %al
-je     <T> <_ZN12CApplication4LoadEiPPc+0xb7b>
+je     <T> <_ZN12CApplication4LoadEiPPc+0xb8f>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xb76>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-mov    %ebx,-0x20(%ebp)
-mov    -0x20(%ebp),%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xbce>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
+mov    %ebx,%eax
+mov    %eax,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xbed>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xc16>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-lea    -0x16b(%ebp),%eax
+lea    -0x128(%ebp),%eax
-movb   $0x1,-0x161(%ebp)
+movb   $0x1,-0x11e(%ebp)
-mov    %eax,-0x160(%ebp)
-movl   $0x0,-0x15c(%ebp)
+mov    %eax,-0x11d(%ebp)
+movl   $0x0,-0x119(%ebp)
-lea    -0x16b(%ebp),%edx
+lea    -0x128(%ebp),%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xc75>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xc9e>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-jne    <T> <_ZN12CApplication4LoadEiPPc+0xce5>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0xd0e>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xcda>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd03>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-jne    <T> <_ZN12CApplication4LoadEiPPc+0xd2c>
+jne    <T> <_ZN12CApplication4LoadEiPPc+0xd55>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd21>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd4a>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd73>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xd9c>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-lea    -0xae(%ebp),%eax
+lea    -0xa6(%ebp),%eax
-lea    -0xae(%ebp),%edx
+lea    -0xa6(%ebp),%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0xdf9>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
-jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1065>
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0xe22>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN12CApplication4LoadEiPPc+0x1094>
-lea    -0xb8(%ebp),%eax
+lea    -0xb0(%ebp),%eax
-lea    -0xb8(%ebp),%edx
+lea    -0xb0(%ebp),%edx
-mov    %eax,-0xbc(%ebp)
-lea    -0xbc(%ebp),%eax
+mov    %eax,-0xb4(%ebp)
+lea    -0xb4(%ebp),%eax
-mov    %edx,-0xe8(%ebp)
+mov    %edx,-0x128(%ebp)
-mov    %edx,-0xe4(%ebp)
+mov    %edx,-0x124(%ebp)
-mov    %edx,-0xe0(%ebp)
+mov    %edx,-0x120(%ebp)
-mov    %edx,-0xdc(%ebp)
+mov    %edx,-0x11c(%ebp)
-mov    %edx,-0xd8(%ebp)
+mov    %edx,-0x118(%ebp)
-mov    %edx,-0xd4(%ebp)
+mov    %edx,-0x114(%ebp)
-mov    %edx,-0xd0(%ebp)
+mov    %edx,-0x110(%ebp)
-mov    %edx,-0xcc(%ebp)
+mov    %edx,-0x10c(%ebp)
-mov    %edx,-0xc8(%ebp)
+mov    %edx,-0x108(%ebp)
-mov    %edx,-0xc4(%ebp)
+mov    %edx,-0x104(%ebp)
-mov    %eax,-0xc0(%ebp)
-mov    -0xe0(%ebp),%eax
+mov    %eax,-0x100(%ebp)
+mov    -0x120(%ebp),%eax
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

## monitor _ZN12CBuddyHandle11addFromCashEP6CBuddy [DIFF] pm=7
```diff
-jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xa7>
+jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xaa>
-movzbl -0x1c(%ebp),%ebx
+movzbl -0x1c(%ebp),%eax
+movzbl %al,%ebx
-jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xa7>
+jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xaa>
```
