## monitor _ZN15init_accusation22CInitAccusationListMgr11setScheduleERKb [DIFF] pm=45
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

## monitor _ZN16CDNFProhibitUser20IsTimeOutConnectableEv [DIFF] pm=14
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

## monitor _ZN16CDNFProhibitUser22SetUserConnectableTimeEjscb [DIFF] pm=2
```diff
+movzwl -0x4(%ebp),%edx
-movzwl -0x4(%ebp),%edx
```

## monitor _ZN16CServerInterface19IsHeartBeatTimeOverEv [DIFF] pm=16
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

## monitor _ZN16village_attacked23CVillageAttackedManager10OnScheduleEv [DIFF] pm=74
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

## monitor _ZN16village_attacked23CVillageAttackedManager11InsertTimerEii [DIFF] pm=94
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
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+mov    %ebx,-0x28(%ebp)
+mov    -0x28(%ebp),%ebx
-mov    &_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE,%eax
-mov    0xc(%ebp),%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+mov    0xc(%ebp),%eax
+sub    $0x3c,%eax
-mov    %ebx,%eax
-mov    %eax,%ebx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager11InsertTimerEii+0x144>
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

## monitor _ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv [DIFF] pm=48
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

## monitor _ZN16village_attacked23CVillageAttackedManager25SendRequestRevengeDungeonEPc [DIFF] pm=17
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

## monitor _ZN16village_attacked23CVillageAttackedManager34OnServerGroupRewardVillageAttackedEv [DIFF] pm=17
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

## monitor _ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader [DIFF] pm=32
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

## monitor _ZN17CPacketTranslater11OnUserRepelEP12PacketHeader [DIFF] pm=70
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

## monitor _ZN17CPacketTranslater12OnCeraUpdateEP12PacketHeader [DIFF] pm=10
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

## monitor _ZN17CPacketTranslater12OnEventStartEP12PacketHeader [DIFF] pm=68
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

## monitor _ZN17CPacketTranslater14OnGMRequestMidEP12PacketHeader [DIFF] pm=32
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

## monitor _ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader [DIFF] pm=290
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
-call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0xa5>
-mov    -0x1c(%ebp),%eax
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x9b>
+mov    -0x2c(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x51a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x513>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50c>
-mov    -0x1c(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x34(%ebp),%eax
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %bl
+mov    %eax,-0x18(%ebp)
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x13a>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x129>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x122>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x111>
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x403>
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x3fe>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1ee>
-mov    -0x1c(%ebp),%eax
+movb   $0x0,-0x11(%ebp)
+movl   $0x0,-0x50(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1ea>
+mov    -0x2c(%ebp),%eax
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-mov    %al,-0x21(%ebp)
-cmpb   $0x3,-0x21(%ebp)
-sete   %al
-test   %al,%al
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x516>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %al,-0x11(%ebp)
+cmpb   $0x3,-0x11(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x508>
+mov    -0x24(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1b9>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x1b5>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
-movzbl -0x21(%ebp),%edx
+movzbl -0x11(%ebp),%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x3ce>
-mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x3c9>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x30(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x50(%ebp),%eax
-cmp    -0x20(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x519>
-movb   $0x2,-0x21(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x50(%ebp),%eax
+cmp    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x50b>
+movb   $0x2,-0x11(%ebp)
+mov    -0x20(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x278>
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x274>
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x272>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x26e>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-movb   $0x1,-0x21(%ebp)
-jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2b2>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2ae>
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
-cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2b2>
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x2ae>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x18(%ebp),%eax
-mov    -0x34(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h>
+mov    -0x24(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser>
+test   %al,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x319>
+movl   $0x0,0xc(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
+mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h>
-mov    -0x34(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x30(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x318>
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x35c>
+mov    -0x50(%ebp),%eax
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager28SendToDBMemberUpdateCharInfoEP14CServerHandlerjh>
-mov    -0x30(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CMemberManager16CheckEmptyMemberEP7CMemberP5CUser>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x356>
-mov    -0x50(%ebp),%eax
-movl   $0x0,0xc(%esp)
-mov    %eax,0x8(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x30(%ebp),%eax
-mov    -0x30(%ebp),%eax
+mov    -0x18(%ebp),%eax
-cmpb   $0x1,-0x21(%ebp)
-jne    <T> <_ZN17CPacketTranslater14OnMemberSecedeEP12PacketHeader+0x387>
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

## monitor _ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader [DIFF] pm=266
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
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+cmpl   $0x0,-0x44(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x177>
+mov    -0x48(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x48(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x48(%ebp),%eax
-lea    -0x6c(%ebp),%eax
+lea    -0x78(%ebp),%eax
-lea    -0x6c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-mov    -0x3c(%ebp),%eax
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x59a>
+mov    -0x44(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
-mov    %eax,-0x44(%ebp)
-cmpl   $0x0,-0x44(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x1e7>
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+cmpl   $0x0,-0x40(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x1e6>
+mov    -0x44(%ebp),%eax
-lea    -0x64(%ebp),%eax
+lea    -0x70(%ebp),%eax
-lea    -0x64(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-mov    -0x38(%ebp),%eax
+lea    -0x70(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x59a>
+mov    -0x48(%ebp),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
-mov    %eax,-0x40(%ebp)
-cmpl   $0x0,-0x40(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x269>
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+cmpl   $0x0,-0x3c(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x25d>
+mov    -0x48(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x48(%ebp),%eax
-mov    -0x38(%ebp),%eax
+mov    -0x48(%ebp),%eax
-lea    -0x5c(%ebp),%eax
+lea    -0x68(%ebp),%eax
-lea    -0x5c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x580>
-mov    -0x44(%ebp),%eax
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x59a>
+mov    -0x40(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-mov    -0x44(%ebp),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x40(%ebp),%eax
-movswl %ax,%ebx
+mov    %ax,-0x32(%ebp)
+movswl -0x32(%ebp),%ebx
-mov    -0x40(%ebp),%eax
+mov    -0x3c(%ebp),%eax
-fildl  -0x34(%ebp)
-fildl  -0x30(%ebp)
+fildl  -0x38(%ebp)
+mov    -0x30(%ebp),%eax
+mov    $0x0,%edx
+mov    %eax,-0xc8(%ebp)
+mov    %edx,-0xc4(%ebp)
+fildll -0xc8(%ebp)
-mov    -0x40(%ebp),%eax
+mov    -0x48(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    $0x0,%edx
+mov    %eax,-0xc8(%ebp)
+mov    %edx,-0xc4(%ebp)
+fildll -0xc8(%ebp)
+flds   -0x2c(%ebp)
+fmulp  %st,%st(1)
+fnstcw -0xca(%ebp)
+movzwl -0xca(%ebp),%eax
+mov    $0xc,%ah
+mov    %ax,-0xcc(%ebp)
+fldcw  -0xcc(%ebp)
+fistpl -0x28(%ebp)
+fldcw  -0xca(%ebp)
+mov    -0x3c(%ebp),%eax
-fildl  -0x34(%ebp)
-fildl  -0x30(%ebp)
-fdivrp %st,%st(1)
-fldl   &data#79b8813d(.rodata)
-fmulp  %st,%st(1)
-fstps  -0xbc(%ebp)
-flds   -0xbc(%ebp)
-faddp  %st,%st(1)
-fstps  -0x28(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0xe(%eax),%eax
+fildl  -0x38(%ebp)
+mov    -0x30(%ebp),%eax
-fmuls  -0x2c(%ebp)
+fdivrp %st,%st(1)
+fldl   &data#79b8813d(.rodata)
+fmulp  %st,%st(1)
+fstps  -0xbc(%ebp)
+flds   -0xbc(%ebp)
+faddp  %st,%st(1)
+fstps  -0x24(%ebp)
+mov    -0x48(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    $0x0,%edx
+mov    %eax,-0xc8(%ebp)
+mov    %edx,-0xc4(%ebp)
+fildll -0xc8(%ebp)
+flds   -0x24(%ebp)
+fmulp  %st,%st(1)
-fistpll -0xc8(%ebp)
+fistpl -0x20(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0x24(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    $0x0,%edx
-mov    %eax,-0xc8(%ebp)
-mov    %edx,-0xc4(%ebp)
-fildll -0xc8(%ebp)
-fmuls  -0x28(%ebp)
-fldcw  -0xcc(%ebp)
-fistpll -0xc8(%ebp)
-fldcw  -0xca(%ebp)
-mov    -0xc8(%ebp),%eax
-mov    -0xc4(%ebp),%edx
-mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x406>
-jne    <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x3e9>
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x57f>
-lea    -0xac(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnPayTaxToUpperEP12PacketHeader+0x59a>
+lea    -0xb8(%ebp),%eax
-mov    -0x44(%ebp),%eax
+mov    -0x40(%ebp),%eax
+mov    %eax,-0xae(%ebp)
+mov    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0xaa(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,-0xa6(%ebp)
+mov    -0x20(%ebp),%eax
-mov    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x9e(%ebp)
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

## monitor _ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader [DIFF] pm=134
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
+mov    -0x2c(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x24(%ebp)
+mov    -0x2c(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%ebx
+movl   $0x8a5,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"[LOGOUT COMPLETE] m_id : %s\tchannel No : %d\n",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2f6>
+mov    -0x2c(%ebp),%eax
+mov    0xa(%eax),%eax
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+movzbl 0xe(%eax),%eax
+movzbl %al,%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnLogoutCompleteEP12PacketHeader+0x2ec>
-mov    -0x24(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x8a5,0x8(%esp)
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

## monitor _ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader [DIFF] pm=102
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
-mov    -0x14(%ebp),%eax
-movzbl 0x16(%eax),%eax
-movzbl %al,%edx
-mov    %edx,0x8(%esp)
-lea    -0x46(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x10(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0x16(%eax),%eax
+movzbl %al,%eax
+mov    %eax,0x8(%esp)
+lea    -0x4e(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
-mov    -0x10(%ebp),%eax
+mov    -0x14(%ebp),%eax
-je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0xc3>
-mov    -0x14(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0xc8>
+mov    -0x18(%ebp),%eax
-jne    <T> <_ZN17CPacketTranslater16OnPvPChannelInfoEP12PacketHeader+0x18c>
-lea    -0x183e(%ebp),%eax
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

## monitor _ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader [DIFF] pm=194
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
-movl   $0x27,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x77(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
-mov    0x30(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x13f>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-test   %eax,%eax
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x139>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,(%esp)
-call   <T> <_ZN16CServerInterface12GetChannelNoEv>
-mov    %al,-0x3e(%ebp)
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x143>
-movb   $0xff,-0x3e(%ebp)
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x143>
-movb   $0xff,-0x3e(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x35(%eax),%eax
-mov    %al,-0x3d(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x14(%ebp),%edx
-mov    0x30(%edx),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x300,%ecx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN21CBuddyRegisterManager16addBuddyRegisterEjj>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x186>
-mov    -0x14(%ebp),%eax
-movzbl 0x35(%eax),%eax
-mov    %al,-0x3d(%ebp)
-movzwl -0x75(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x77(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0xb6>
-jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2b9>
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x2ab>
+lea    -0x77(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Add_Buddy_ReplyC1Ev>
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x6d(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x69(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0x35(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x1a9>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8AddBuddyER13STBuddyDBInfo>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+movl   $0x27,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x77(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x18(%ebp),%eax
+mov    0x30(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x140>
+movb   $0xff,-0x3e(%ebp)
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x170>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x15a>
+movb   $0xff,-0x3e(%ebp)
+jmp    <T> <_ZN17CPacketTranslater17OnAddBuddyDBReplyEP12PacketHeader+0x170>
+mov    -0x10(%ebp),%eax
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

## monitor _ZN17CPacketTranslater17OnCharacterDeleteEP12PacketHeader [DIFF] pm=60
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

## monitor _ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader [DIFF] pm=156
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
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser8DelBuddyEPc>
-mov    -0x14(%ebp),%eax
-add    $0x12,%eax
-movl   $0x1d,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x69(%ebp),%eax
-add    $0x12,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
-movzbl 0x30(%eax),%eax
-mov    %al,-0x39(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x14(%ebp),%edx
-mov    0xe(%edx),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x300,%ecx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN21CBuddyRegisterManager16delBuddyRegisterEjj>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x123>
-movb   $0x3,-0x39(%ebp)
-movzwl -0x67(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x69(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0xb6>
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x253>
+lea    -0x6d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_Del_Buddy_ReplyC1Ev>
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x63(%ebp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x5f(%ebp)
+mov    -0x18(%ebp),%eax
+movzbl 0x30(%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater17OnDelBuddyDBReplyEP12PacketHeader+0x157>
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser8DelBuddyEPc>
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+movl   $0x1d,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0x6d(%ebp),%eax
+add    $0x12,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+mov    -0x18(%ebp),%eax
+movzbl 0x30(%eax),%eax
+mov    %al,-0x3d(%ebp)
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

## monitor _ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader [DIFF] pm=169
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
-mov    -0x2c(%ebp),%eax
+cmpl   $0x0,-0x30(%ebp)
+jne    <T> <_ZN17CPacketTranslater17OnEventItemUpdateEP12PacketHeader+0x13c>
+mov    -0x38(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x20(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x68(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x16(%eax),%edi
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%esi
+mov    -0x38(%ebp),%eax
+mov    0x12(%eax),%ebx
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x70(%ebp),%eax
+lea    -0x58(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x68(%ebp),%eax
-mov    -0x6c(%ebp),%eax
-mov    %eax,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    %edi,0x18(%esp)
+mov    %esi,0x14(%esp)
+mov    %ebx,0x10(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,0xc(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x58(%ebp),%eax
-mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x30(%ebp),%eax
-movzbl %al,%eax
-mov    %eax,-0x68(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x1e(%eax),%eax
-mov    %eax,-0x64(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x1a(%eax),%eax
-mov    %eax,-0x60(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    0xe(%eax),%edi
-mov    -0x2c(%ebp),%eax
-mov    0x12(%eax),%esi
-mov    -0x2c(%ebp),%eax
+mov    %al,-0x29(%ebp)
+mov    -0x38(%ebp),%eax
-mov    %eax,%ebx
+mov    %eax,-0x28(%ebp)
+movzbl -0x29(%ebp),%eax
+mov    %eax,-0x64(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x1e(%eax),%eax
+mov    %eax,-0x60(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x1a(%eax),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x38(%ebp),%eax
+mov    0x16(%eax),%edi
+mov    -0x38(%ebp),%eax
+mov    0xe(%eax),%esi
+mov    -0x38(%ebp),%eax
+mov    0x12(%eax),%ebx
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x68(%ebp),%eax
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x64(%ebp),%eax
-mov    -0x64(%ebp),%eax
+mov    -0x60(%ebp),%eax
-mov    -0x60(%ebp),%eax
+mov    -0x5c(%ebp),%eax
-mov    -0x5c(%ebp),%eax
-mov    %eax,0x18(%esp)
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

## monitor _ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader [DIFF] pm=152
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
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
-movl   $0x1923,0x8(%esp)
+je     <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x1ef>
+mov    -0x28(%ebp),%eax
+movzbl 0xc(%eax),%eax
+movzbl %al,%eax
+mov    %eax,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer12SetChannelNoEh>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler13GetGameServerEj>
+mov    %eax,-0xc(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGameServer9SetSocketEj>
+mov    -0x10(%ebp),%eax
+add    $0xb,%eax
+movb   $0x0,(%eax)
+movl   $0x1930,0x8(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Game server regist failed. Channel: %d is already exist.",0x8(%esp)
+mov    -0x24(%ebp),%eax
+movzbl 0x1(%eax),%eax
+movzbl %al,%eax
+mov    %eax,0xc(%esp)
+movl   $"Game server regist success. Channel: %d",0x8(%esp)
-jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x23d>
-mov    -0x28(%ebp),%eax
-movzbl 0xc(%eax),%eax
-movzbl %al,%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnGameServerRegistEP12PacketHeader+0x23c>
+mov    -0x10(%ebp),%eax
+add    $0xb,%eax
+movb   $0x1,(%eax)
+movl   $0x1923,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnGameServerRegistEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x40(%ebp),%eax
-call   <T> <_ZN14CTcpGameServer12SetChannelNoEh>
+call   <T> <_ZN10CMyFileLogC1EPKci>
-movzbl %al,%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler13GetGameServerEj>
-mov    %eax,-0x10(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0x6(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CGameServer9SetSocketEj>
-mov    -0x14(%ebp),%eax
-movb   $0x0,0xb(%eax)
-mov    -0x24(%ebp),%eax
-movzbl 0x1(%eax),%eax
-movzbl %al,%ebx
-movl   $0x1930,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnGameServerRegistEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
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

## monitor _ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader [DIFF] pm=234
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
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
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
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x106>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x118>
-movzbl %al,%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %al,-0x31(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+movzbl -0x31(%ebp),%ebx
+mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x388>
-mov    -0x24(%ebp),%eax
-mov    0x6(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %ebx,0x4(%esp)
+jmp    <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    0x8(%ebp),%eax
+mov    0x6(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %eax,-0x38(%ebp)
+mov    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x38(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+cmpl   $0x0,-0x2c(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+movl   $0xc,0x8(%esp)
+movl   $0x1f40,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x381>
-movl   $0xc,0x8(%esp)
-movl   $0x1f40,0x4(%esp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+add    $0xa,%eax
+movb   $0x0,(%eax)
+mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+lea    0xb(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,(%ebx)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
+movl   $0xb,0x8(%esp)
+movl   $0x3ea,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+movl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x384>
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1df>
-movb   $0x0,0xa(%eax)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    -0x1c(%ebp),%edx
-mov    %al,0xb(%edx)
+add    $0xa,%eax
+movb   $0xc9,(%eax)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-movl   $0xb,0x8(%esp)
-movl   $0x3ea,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
-movl   $0x0,-0x14(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x1bd>
+movl   $0x123e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-movb   $0xc9,0xa(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
-mov    %eax,%ebx
-movl   $0x123e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x50(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x387>
-mov    -0x18(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater18OnInnerPacketLoginEP12PacketHeader+0x3a2>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+movb   $0x1,(%eax)
+mov    -0x14(%ebp),%eax
-mov    -0x10(%ebp),%eax
-movb   $0x1,0xa(%eax)
+mov    -0x10(%ebp),%ebx
-mov    -0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %ebx,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x2c(%ebp),%eax
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
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

## monitor _ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader [DIFF] pm=242
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
-lea    -0x31(%ebp),%eax
+lea    -0x39(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x40(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
+mov    %eax,-0x14(%ebp)
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x126>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x10e>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x272>
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x25b>
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager8FindUserEj>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x194>
+movl   $0xcb6,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x10(%eax),%edx
-lea    -0x38(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager17FindUser_CharNameESs>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-setne  %bl
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x119>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x101>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x273>
-lea    -0x31(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x254>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x190>
-movl   $0xcb6,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,-0x9f(%ebp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x97(%ebp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-mov    %eax,-0x75(%ebp)
-mov    -0x10(%ebp),%eax
+mov    %eax,-0x7d(%ebp)
+mov    -0x18(%ebp),%eax
-lea    -0xa1(%ebp),%eax
+lea    -0xa9(%ebp),%eax
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17DeleteToBlackListEj>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x226>
+movb   $0x2,-0x79(%ebp)
+movzwl -0xa7(%ebp),%eax
+movzwl %ax,%edx
+lea    -0xa9(%ebp),%eax
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser16SendToGameserverEPci>
+jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x348>
-call   <T> <_ZN5CUser17DeleteToBlackListEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x21f>
-movb   $0x2,-0x71(%ebp)
-movzwl -0x9f(%ebp),%eax
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x4c(%ebp)
+movb   $0x1,-0x79(%ebp)
+movzwl -0xa7(%ebp),%eax
-lea    -0xa1(%ebp),%eax
+lea    -0xa9(%ebp),%eax
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
-jmp    <T> <_ZN17CPacketTranslater19OnDeleteToBlackListEP12PacketHeader+0x349>
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x44(%ebp)
-movb   $0x1,-0x71(%ebp)
-movzwl -0x9f(%ebp),%eax
-movzwl %ax,%edx
-lea    -0xa1(%ebp),%eax
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
