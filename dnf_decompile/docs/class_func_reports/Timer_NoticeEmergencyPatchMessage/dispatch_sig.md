# dispatch_sig

`_ZN33Timer_NoticeEmergencyPatchMessage12dispatch_sigEiij`

`Timer_NoticeEmergencyPatchMessage::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_NoticeEmergencyPatchMessage` | `0x0863b6c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b6c4  _ZN33Timer_NoticeEmergencyPatchMessage12dispatch_sigEiij
#           Timer_NoticeEmergencyPatchMessage::dispatch_sig(int, int, unsigned int)
# range [0x0863b6c4, 0x0863b87d]
0863b6c4 +0x000:  push   %ebp
0863b6c5 +0x001:  mov    %esp,%ebp
0863b6c7 +0x003:  push   %edi
0863b6c8 +0x004:  push   %esi
0863b6c9 +0x005:  push   %ebx
0863b6ca +0x006:  sub    $0x43c,%esp
0863b6d0 +0x00c:  lea    -0x38(%ebp),%eax
0863b6d3 +0x00f:  mov    %eax,(%esp)
0863b6d6 +0x012:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0863b6db +0x017:  movl   $0xc,0x8(%esp)
0863b6e3 +0x01f:  movl   $0x0,0x4(%esp)
0863b6eb +0x027:  lea    -0x38(%ebp),%eax
0863b6ee +0x02a:  mov    %eax,(%esp)
0863b6f1 +0x02d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0863b6f6 +0x032:  movl   $0x0,0x4(%esp)
0863b6fe +0x03a:  lea    -0x38(%ebp),%eax
0863b701 +0x03d:  mov    %eax,(%esp)
0863b704 +0x040:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b709 +0x045:  movl   $0x0,0x4(%esp)
0863b711 +0x04d:  lea    -0x38(%ebp),%eax
0863b714 +0x050:  mov    %eax,(%esp)
0863b717 +0x053:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0863b71c +0x058:  movl   $0x0,0x4(%esp)
0863b724 +0x060:  lea    -0x38(%ebp),%eax
0863b727 +0x063:  mov    %eax,(%esp)
0863b72a +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0863b72f +0x06b:  lea    -0x438(%ebp),%ebx
0863b735 +0x071:  mov    $0x0,%eax
0863b73a +0x076:  mov    $0x100,%edx
0863b73f +0x07b:  mov    %ebx,%edi
0863b741 +0x07d:  mov    %edx,%ecx
0863b743 +0x07f:  rep stos %eax,%es:(%edi)
0863b745 +0x081:  call   080f61b8 <_Z30GameserverDemonManagerInstancev>  ; GameserverDemonManagerInstance()
0863b74a +0x086:  mov    %eax,(%esp)
0863b74d +0x089:  call   0863bff6 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x507>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x507
0863b752 +0x08e:  mov    0x8(%ebp),%edx
0863b755 +0x091:  mov    0x4(%edx),%edx
0863b758 +0x094:  mov    %eax,0xc(%esp)
0863b75c +0x098:  mov    %edx,0x8(%esp)
0863b760 +0x09c:  movl   $"%d분뒤 서버점검이 있습니다. %s",0x4(%esp)
0863b768 +0x0a4:  lea    -0x438(%ebp),%eax
0863b76e +0x0aa:  mov    %eax,(%esp)
0863b771 +0x0ad:  call   0807e440 <_init+0xd38>
0863b776 +0x0b2:  lea    -0x438(%ebp),%eax
0863b77c +0x0b8:  mov    %eax,(%esp)
0863b77f +0x0bb:  call   0807e3b0 <_init+0xca8>
0863b784 +0x0c0:  mov    %eax,-0x1c(%ebp)
0863b787 +0x0c3:  mov    -0x1c(%ebp),%eax
0863b78a +0x0c6:  mov    %eax,0x4(%esp)
0863b78e +0x0ca:  lea    -0x38(%ebp),%eax
0863b791 +0x0cd:  mov    %eax,(%esp)
0863b794 +0x0d0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0863b799 +0x0d5:  mov    -0x1c(%ebp),%eax
0863b79c +0x0d8:  mov    %eax,0x8(%esp)
0863b7a0 +0x0dc:  lea    -0x438(%ebp),%eax
0863b7a6 +0x0e2:  mov    %eax,0x4(%esp)
0863b7aa +0x0e6:  lea    -0x38(%ebp),%eax
0863b7ad +0x0e9:  mov    %eax,(%esp)
0863b7b0 +0x0ec:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0863b7b5 +0x0f1:  movl   $0x1,0x4(%esp)
0863b7bd +0x0f9:  lea    -0x38(%ebp),%eax
0863b7c0 +0x0fc:  mov    %eax,(%esp)
0863b7c3 +0x0ff:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0863b7c8 +0x104:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863b7cd +0x109:  lea    -0x38(%ebp),%edx
0863b7d0 +0x10c:  mov    %edx,0x4(%esp)
0863b7d4 +0x110:  mov    %eax,(%esp)
0863b7d7 +0x113:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0863b7dc +0x118:  mov    0x8(%ebp),%eax
0863b7df +0x11b:  mov    0x4(%eax),%eax
0863b7e2 +0x11e:  lea    -0x1(%eax),%edx
0863b7e5 +0x121:  mov    0x8(%ebp),%eax
0863b7e8 +0x124:  mov    %edx,0x4(%eax)
0863b7eb +0x127:  mov    0x8(%ebp),%eax
0863b7ee +0x12a:  mov    0x4(%eax),%eax
0863b7f1 +0x12d:  test   %eax,%eax
0863b7f3 +0x12f:  jne    0863b83f <+0x17b>
0863b7f5 +0x131:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
0863b7fa +0x136:  mov    %eax,(%esp)
0863b7fd +0x139:  call   082a35a6 <_ZN15CShutdowManager18SendShutdownSignalEv>  ; CShutdowManager::SendShutdownSignal()
0863b802 +0x13e:  movl   $0x0,0xc(%esp)
0863b80a +0x146:  movl   $0x1849,0x8(%esp)
0863b812 +0x14e:  movl   $&_ZZN33Timer_NoticeEmergencyPatchMessage12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863b81a +0x156:  lea    -0x2c(%ebp),%eax
0863b81d +0x159:  mov    %eax,(%esp)
0863b820 +0x15c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863b825 +0x161:  movl   $"Emergency Patch Message Received",0x4(%esp)
0863b82d +0x169:  lea    -0x2c(%ebp),%eax
0863b830 +0x16c:  mov    %eax,(%esp)
0863b833 +0x16f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863b838 +0x174:  mov    $0x1,%ebx
0863b83d +0x179:  jmp    0863b866 <+0x1a2>
0863b83f +0x17b:  call   0863b87e <_ZN33Timer_NoticeEmergencyPatchMessage15RegistNextTimerEv>  ; Timer_NoticeEmergencyPatchMessage::RegistNextTimer()
0863b844 +0x180:  mov    $0x1,%ebx
0863b849 +0x185:  jmp    0863b866 <+0x1a2>
0863b84b +0x187:  mov    %edx,%ebx
0863b84d +0x189:  mov    %eax,%esi
0863b84f +0x18b:  lea    -0x38(%ebp),%eax
0863b852 +0x18e:  mov    %eax,(%esp)
0863b855 +0x191:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b85a +0x196:  mov    %esi,%eax
0863b85c +0x198:  mov    %ebx,%edx
0863b85e +0x19a:  mov    %eax,(%esp)
0863b861 +0x19d:  call   08ae3750 <_Unwind_Resume>
0863b866 +0x1a2:  lea    -0x38(%ebp),%eax
0863b869 +0x1a5:  mov    %eax,(%esp)
0863b86c +0x1a8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0863b871 +0x1ad:  mov    %ebx,%eax
0863b873 +0x1af:  add    $0x43c,%esp
0863b879 +0x1b5:  pop    %ebx
0863b87a +0x1b6:  pop    %esi
0863b87b +0x1b7:  pop    %edi
0863b87c +0x1b8:  pop    %ebp
0863b87d +0x1b9:  ret
```

## 反编译 C

```c
// Timer_NoticeEmergencyPatchMessage::dispatch_sig @ 0x863b6c4

/* Timer_NoticeEmergencyPatchMessage::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_NoticeEmergencyPatchMessage::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GameServerDemonManager *this;
  undefined4 uVar1;
  GameWorld *this_00;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_43c [1024];
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  size_t local_20;
  
  bVar4 = 0;
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 0863b6f1 to 0863b843 has its CatchHandler @ 0863b84b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_3c,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
  pcVar3 = local_43c;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
  }
  this = (GameServerDemonManager *)GameserverDemonManagerInstance();
  uVar1 = GameServerDemonManager::GetNoticeMessage(this);
  sprintf(local_43c,&DAT_08ce7180,*(undefined4 *)(param_1 + 4),uVar1);
  local_20 = strlen(local_43c);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,local_20);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_3c,local_43c,local_20);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_3c);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if (*(int *)(param_1 + 4) == 0) {
    GetInstanceShutdowManager();
    CShutdowManager::SendShutdownSignal();
    cMyTrace::cMyTrace(local_30,
                       "virtual bool Timer_NoticeEmergencyPatchMessage::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x1849,0);
    cMyTrace::operator()(local_30,"Emergency Patch Message Received");
  }
  else {
    RegistNextTimer();
  }
  PacketGuard::~PacketGuard(local_3c);
  return 1;
}
```
