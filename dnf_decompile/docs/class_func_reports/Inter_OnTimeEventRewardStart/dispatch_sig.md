# dispatch_sig

`_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci`

`Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_OnTimeEventRewardStart` | `0x084e0dc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e0dc6  _ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci
#           Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int)
# range [0x084e0dc6, 0x084e0f81]
084e0dc6 +0x000:  push   %ebp
084e0dc7 +0x001:  mov    %esp,%ebp
084e0dc9 +0x003:  push   %esi
084e0dca +0x004:  push   %ebx
084e0dcb +0x005:  sub    $0x60,%esp
084e0dce +0x008:  mov    0x10(%ebp),%eax
084e0dd1 +0x00b:  mov    %eax,-0x10(%ebp)
084e0dd4 +0x00e:  mov    -0x10(%ebp),%eax
084e0dd7 +0x011:  mov    0xe(%eax),%ebx
084e0dda +0x014:  movl   $0x0,0xc(%esp)
084e0de2 +0x01c:  movl   $0x4fba,0x8(%esp)
084e0dea +0x024:  movl   $&_ZZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0df2 +0x02c:  lea    -0x30(%ebp),%eax
084e0df5 +0x02f:  mov    %eax,(%esp)
084e0df8 +0x032:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0dfd +0x037:  mov    %ebx,0x8(%esp)
084e0e01 +0x03b:  movl   $"[ON_TIME_EVENT] Reward Start(remain time : %u)",0x4(%esp)
084e0e09 +0x043:  lea    -0x30(%ebp),%eax
084e0e0c +0x046:  mov    %eax,(%esp)
084e0e0f +0x049:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0e14 +0x04e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e0e19 +0x053:  movl   $0x33,0x4(%esp)
084e0e21 +0x05b:  mov    %eax,(%esp)
084e0e24 +0x05e:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e0e29 +0x063:  mov    %eax,-0xc(%ebp)
084e0e2c +0x066:  cmpl   $0x0,-0xc(%ebp)
084e0e30 +0x06a:  je     084e0e57 <+0x91>
084e0e32 +0x06c:  mov    -0xc(%ebp),%eax
084e0e35 +0x06f:  mov    (%eax),%eax
084e0e37 +0x071:  add    $0x34,%eax
084e0e3a +0x074:  mov    (%eax),%edx
084e0e3c +0x076:  mov    -0xc(%ebp),%eax
084e0e3f +0x079:  movl   $0x0,0x4(%esp)
084e0e47 +0x081:  mov    %eax,(%esp)
084e0e4a +0x084:  call   *%edx
084e0e4c +0x086:  test   %al,%al
084e0e4e +0x088:  je     084e0e57 <+0x91>
084e0e50 +0x08a:  mov    $0x1,%eax
084e0e55 +0x08f:  jmp    084e0e5c <+0x96>
084e0e57 +0x091:  mov    $0x0,%eax
084e0e5c +0x096:  test   %al,%al
084e0e5e +0x098:  je     084e0ec1 <+0xfb>
084e0e60 +0x09a:  mov    -0x10(%ebp),%eax
084e0e63 +0x09d:  mov    0xe(%eax),%eax
084e0e66 +0x0a0:  mov    %eax,%ebx
084e0e68 +0x0a2:  mov    -0x10(%ebp),%eax
084e0e6b +0x0a5:  mov    0x16(%eax),%eax
084e0e6e +0x0a8:  mov    %eax,%ecx
084e0e70 +0x0aa:  mov    -0x10(%ebp),%eax
084e0e73 +0x0ad:  mov    0x12(%eax),%eax
084e0e76 +0x0b0:  mov    %eax,%edx
084e0e78 +0x0b2:  mov    -0x10(%ebp),%eax
084e0e7b +0x0b5:  mov    0xa(%eax),%eax
084e0e7e +0x0b8:  mov    %ebx,0x10(%esp)
084e0e82 +0x0bc:  mov    %ecx,0xc(%esp)
084e0e86 +0x0c0:  mov    %edx,0x8(%esp)
084e0e8a +0x0c4:  mov    %eax,0x4(%esp)
084e0e8e +0x0c8:  mov    -0xc(%ebp),%eax
084e0e91 +0x0cb:  mov    %eax,(%esp)
084e0e94 +0x0ce:  call   081bbce0 <_ZN12COnTimeEvent24process_set_reward_startEiiii>  ; COnTimeEvent::process_set_reward_start(int, int, int, int)
084e0e99 +0x0d3:  lea    -0x3c(%ebp),%eax
084e0e9c +0x0d6:  mov    %eax,(%esp)
084e0e9f +0x0d9:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e0ea4 +0x0de:  movl   $0x105,0x8(%esp)
084e0eac +0x0e6:  movl   $0x0,0x4(%esp)
084e0eb4 +0x0ee:  lea    -0x3c(%ebp),%eax
084e0eb7 +0x0f1:  mov    %eax,(%esp)
084e0eba +0x0f4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e0ebf +0x0f9:  jmp    084e0f08 <+0x142>
084e0ec1 +0x0fb:  mov    -0x10(%ebp),%eax
084e0ec4 +0x0fe:  mov    0xa(%eax),%ebx
084e0ec7 +0x101:  movl   $0x5,0xc(%esp)
084e0ecf +0x109:  movl   $0x4fc5,0x8(%esp)
084e0ed7 +0x111:  movl   $&_ZZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e0edf +0x119:  lea    -0x20(%ebp),%eax
084e0ee2 +0x11c:  mov    %eax,(%esp)
084e0ee5 +0x11f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e0eea +0x124:  mov    %ebx,0x8(%esp)
084e0eee +0x128:  movl   $"[ON_TIME_EVENT] isEventing = not, event_no(%u)",0x4(%esp)
084e0ef6 +0x130:  lea    -0x20(%ebp),%eax
084e0ef9 +0x133:  mov    %eax,(%esp)
084e0efc +0x136:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e0f01 +0x13b:  mov    $0x0,%ebx
084e0f06 +0x140:  jmp    084e0f79 <+0x1b3>
084e0f08 +0x142:  mov    -0x10(%ebp),%eax
084e0f0b +0x145:  mov    0xe(%eax),%eax
084e0f0e +0x148:  mov    %eax,0x4(%esp)
084e0f12 +0x14c:  lea    -0x3c(%ebp),%eax
084e0f15 +0x14f:  mov    %eax,(%esp)
084e0f18 +0x152:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e0f1d +0x157:  movl   $0x1,0x4(%esp)
084e0f25 +0x15f:  lea    -0x3c(%ebp),%eax
084e0f28 +0x162:  mov    %eax,(%esp)
084e0f2b +0x165:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e0f30 +0x16a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e0f35 +0x16f:  movl   $0x3,0x8(%esp)
084e0f3d +0x177:  lea    -0x3c(%ebp),%edx
084e0f40 +0x17a:  mov    %edx,0x4(%esp)
084e0f44 +0x17e:  mov    %eax,(%esp)
084e0f47 +0x181:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
084e0f4c +0x186:  mov    $0x0,%ebx
084e0f51 +0x18b:  lea    -0x3c(%ebp),%eax
084e0f54 +0x18e:  mov    %eax,(%esp)
084e0f57 +0x191:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e0f5c +0x196:  jmp    084e0f79 <+0x1b3>
084e0f5e +0x198:  mov    %edx,%ebx
084e0f60 +0x19a:  mov    %eax,%esi
084e0f62 +0x19c:  lea    -0x3c(%ebp),%eax
084e0f65 +0x19f:  mov    %eax,(%esp)
084e0f68 +0x1a2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e0f6d +0x1a7:  mov    %esi,%eax
084e0f6f +0x1a9:  mov    %ebx,%edx
084e0f71 +0x1ab:  mov    %eax,(%esp)
084e0f74 +0x1ae:  call   08ae3750 <_Unwind_Resume>
084e0f79 +0x1b3:  mov    %ebx,%eax
084e0f7b +0x1b5:  add    $0x60,%esp
084e0f7e +0x1b8:  pop    %ebx
084e0f7f +0x1b9:  pop    %esi
084e0f80 +0x1ba:  pop    %ebp
084e0f81 +0x1bb:  ret
```

## 反编译 C

```c
// Inter_OnTimeEventRewardStart::dispatch_sig @ 0x84e0dc6

/* Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OnTimeEventRewardStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  GameWorld *this;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  COnTimeEvent *local_10;
  
  local_14 = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0xe);
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int)",
                     0x4fba,0);
  cMyTrace::operator()(local_34,"[ON_TIME_EVENT] Reward Start(remain time : %u)",uVar1);
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if (local_10 != (COnTimeEvent *)0x0) {
    cVar3 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_084e0e5c;
    }
  }
  bVar2 = false;
LAB_084e0e5c:
  if (bVar2) {
    COnTimeEvent::process_set_reward_start
              (local_10,*(int *)(local_14 + 10),*(int *)(local_14 + 0x12),*(int *)(local_14 + 0x16),
               *(int *)(local_14 + 0xe));
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084e0eba to 084e0ebe has its CatchHandler @ 084e0f5e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x105);
                    /* try { // try from 084e0f18 to 084e0f4b has its CatchHandler @ 084e0f5e */
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(local_14 + 0xe));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_40,3);
    PacketGuard::~PacketGuard(local_40);
  }
  else {
    uVar1 = *(undefined4 *)(local_14 + 10);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int)",
                       0x4fc5,5);
    cMyTrace::operator()(local_24,"[ON_TIME_EVENT] isEventing = not, event_no(%u)",uVar1);
  }
  return 0;
}
```
