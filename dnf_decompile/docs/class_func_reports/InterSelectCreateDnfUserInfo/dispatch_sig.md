# dispatch_sig

`_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci`

`InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterSelectCreateDnfUserInfo` | `0x08161012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08161012  _ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci
#           InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int)
# range [0x08161012, 0x08161217]
08161012 +0x000:  push   %ebp
08161013 +0x001:  mov    %esp,%ebp
08161015 +0x003:  push   %esi
08161016 +0x004:  push   %ebx
08161017 +0x005:  sub    $0x40,%esp
0816101a +0x008:  mov    0x10(%ebp),%eax
0816101d +0x00b:  mov    %eax,-0x14(%ebp)
08161020 +0x00e:  cmpl   $0x0,-0x14(%ebp)
08161024 +0x012:  jne    0816105c <+0x4a>
08161026 +0x014:  movl   $"[Taiwan, Event] interMsg is null.",0x10(%esp)
0816102e +0x01c:  movl   $0x12e,0xc(%esp)
08161036 +0x024:  movl   $&_ZZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0816103e +0x02c:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08161046 +0x034:  movl   $0x1,(%esp)
0816104d +0x03b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08161052 +0x040:  mov    $0x12f,%ebx
08161057 +0x045:  jmp    0816120e <+0x1fc>
0816105c +0x04a:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08161061 +0x04f:  movl   $0xa0,0x4(%esp)
08161069 +0x057:  mov    %eax,(%esp)
0816106c +0x05a:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08161071 +0x05f:  mov    %eax,-0x10(%ebp)
08161074 +0x062:  cmpl   $0x0,-0x10(%ebp)
08161078 +0x066:  je     0816109b <+0x89>
0816107a +0x068:  mov    -0x10(%ebp),%eax
0816107d +0x06b:  mov    (%eax),%eax
0816107f +0x06d:  add    $0x34,%eax
08161082 +0x070:  mov    (%eax),%edx
08161084 +0x072:  mov    -0x10(%ebp),%eax
08161087 +0x075:  movl   $0x0,0x4(%esp)
0816108f +0x07d:  mov    %eax,(%esp)
08161092 +0x080:  call   *%edx
08161094 +0x082:  xor    $0x1,%eax
08161097 +0x085:  test   %al,%al
08161099 +0x087:  je     081610a2 <+0x90>
0816109b +0x089:  mov    $0x1,%eax
081610a0 +0x08e:  jmp    081610a7 <+0x95>
081610a2 +0x090:  mov    $0x0,%eax
081610a7 +0x095:  test   %al,%al
081610a9 +0x097:  je     08161118 <+0x106>
081610ab +0x099:  mov    -0x10(%ebp),%eax
081610ae +0x09c:  mov    (%eax),%eax
081610b0 +0x09e:  add    $0x34,%eax
081610b3 +0x0a1:  mov    (%eax),%edx
081610b5 +0x0a3:  mov    -0x10(%ebp),%eax
081610b8 +0x0a6:  movl   $0x0,0x4(%esp)
081610c0 +0x0ae:  mov    %eax,(%esp)
081610c3 +0x0b1:  call   *%edx
081610c5 +0x0b3:  movzbl %al,%edx
081610c8 +0x0b6:  cmpl   $0x0,-0x10(%ebp)
081610cc +0x0ba:  jne    081610d5 <+0xc3>
081610ce +0x0bc:  mov    $"nullptr",%eax
081610d3 +0x0c1:  jmp    081610da <+0xc8>
081610d5 +0x0c3:  mov    $"ok",%eax
081610da +0x0c8:  mov    %edx,0x18(%esp)
081610de +0x0cc:  mov    %eax,0x14(%esp)
081610e2 +0x0d0:  movl   $"[Taiwan, Event] stayEvent=%s eventing:%d",0x10(%esp)
081610ea +0x0d8:  movl   $0x138,0xc(%esp)
081610f2 +0x0e0:  movl   $&_ZZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
081610fa +0x0e8:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08161102 +0x0f0:  movl   $0x1,(%esp)
08161109 +0x0f7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816110e +0x0fc:  mov    $0x139,%ebx
08161113 +0x101:  jmp    0816120e <+0x1fc>
08161118 +0x106:  movb   $0x0,-0x9(%ebp)
0816111c +0x10a:  mov    -0x14(%ebp),%eax
0816111f +0x10d:  movzbl 0x4(%eax),%eax
08161123 +0x111:  xor    $0x1,%eax
08161126 +0x114:  test   %al,%al
08161128 +0x116:  je     08161140 <+0x12e>
0816112a +0x118:  mov    -0x10(%ebp),%eax
0816112d +0x11b:  mov    %eax,(%esp)
08161130 +0x11e:  call   08164092 <_ZN15CEventCreateDnf17IsRewardConditionEv>  ; CEventCreateDnf::IsRewardCondition()
08161135 +0x123:  test   %al,%al
08161137 +0x125:  je     08161140 <+0x12e>
08161139 +0x127:  mov    $0x1,%eax
0816113e +0x12c:  jmp    08161145 <+0x133>
08161140 +0x12e:  mov    $0x0,%eax
08161145 +0x133:  test   %al,%al
08161147 +0x135:  je     0816114d <+0x13b>
08161149 +0x137:  movb   $0x1,-0x9(%ebp)
0816114d +0x13b:  mov    -0x14(%ebp),%eax
08161150 +0x13e:  movzbl 0x4(%eax),%eax
08161154 +0x142:  movzbl %al,%eax
08161157 +0x145:  mov    %eax,0x4(%esp)
0816115b +0x149:  mov    0xc(%ebp),%eax
0816115e +0x14c:  mov    %eax,(%esp)
08161161 +0x14f:  call   08693198 <_ZN5CUser23SetEventCreateDnfRewardEb>  ; CUser::SetEventCreateDnfReward(bool)
08161166 +0x154:  lea    -0x20(%ebp),%eax
08161169 +0x157:  mov    %eax,(%esp)
0816116c +0x15a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08161171 +0x15f:  movl   $0x22d,0x8(%esp)
08161179 +0x167:  movl   $0x0,0x4(%esp)
08161181 +0x16f:  lea    -0x20(%ebp),%eax
08161184 +0x172:  mov    %eax,(%esp)
08161187 +0x175:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0816118c +0x17a:  mov    -0x10(%ebp),%eax
0816118f +0x17d:  mov    %eax,(%esp)
08161192 +0x180:  call   08164260 <_ZN15CEventCreateDnf7GetRateEv>  ; CEventCreateDnf::GetRate()
08161197 +0x185:  movzwl %ax,%eax
0816119a +0x188:  mov    %eax,0x4(%esp)
0816119e +0x18c:  lea    -0x20(%ebp),%eax
081611a1 +0x18f:  mov    %eax,(%esp)
081611a4 +0x192:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081611a9 +0x197:  movsbl -0x9(%ebp),%eax
081611ad +0x19b:  mov    %eax,0x4(%esp)
081611b1 +0x19f:  lea    -0x20(%ebp),%eax
081611b4 +0x1a2:  mov    %eax,(%esp)
081611b7 +0x1a5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081611bc +0x1aa:  movl   $0x1,0x4(%esp)
081611c4 +0x1b2:  lea    -0x20(%ebp),%eax
081611c7 +0x1b5:  mov    %eax,(%esp)
081611ca +0x1b8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081611cf +0x1bd:  lea    -0x20(%ebp),%eax
081611d2 +0x1c0:  mov    %eax,0x4(%esp)
081611d6 +0x1c4:  mov    0xc(%ebp),%eax
081611d9 +0x1c7:  mov    %eax,(%esp)
081611dc +0x1ca:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081611e1 +0x1cf:  mov    $0x0,%ebx
081611e6 +0x1d4:  lea    -0x20(%ebp),%eax
081611e9 +0x1d7:  mov    %eax,(%esp)
081611ec +0x1da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081611f1 +0x1df:  jmp    0816120e <+0x1fc>
081611f3 +0x1e1:  mov    %edx,%ebx
081611f5 +0x1e3:  mov    %eax,%esi
081611f7 +0x1e5:  lea    -0x20(%ebp),%eax
081611fa +0x1e8:  mov    %eax,(%esp)
081611fd +0x1eb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08161202 +0x1f0:  mov    %esi,%eax
08161204 +0x1f2:  mov    %ebx,%edx
08161206 +0x1f4:  mov    %eax,(%esp)
08161209 +0x1f7:  call   08ae3750 <_Unwind_Resume>
0816120e +0x1fc:  mov    %ebx,%eax
08161210 +0x1fe:  add    $0x40,%esp
08161213 +0x201:  pop    %ebx
08161214 +0x202:  pop    %esi
08161215 +0x203:  pop    %ebp
08161216 +0x204:  ret
08161217 +0x205:  nop
```

## 反编译 C

```c
// InterSelectCreateDnfUserInfo::dispatch_sig @ 0x8161012

/* InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectCreateDnfUserInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  PacketGuard local_24 [12];
  int local_18;
  CEventCreateDnf *local_14;
  char local_d;
  
  local_18 = param_3;
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "virtual int InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int)",0x12e,
               "[Taiwan, Event] interMsg is null.");
    return 0x12f;
  }
  local_14 = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if ((local_14 == (CEventCreateDnf *)0x0) ||
     (cVar2 = (**(code **)(*(int *)local_14 + 0x34))(local_14,0), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    local_d = '\0';
    if ((*(char *)(local_18 + 4) == '\x01') ||
       (cVar2 = CEventCreateDnf::IsRewardCondition(local_14), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_d = '\x01';
    }
    CUser::SetEventCreateDnfReward((CUser *)param_2,*(bool *)(local_18 + 4));
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08161187 to 081611e0 has its CatchHandler @ 081611f3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x22d);
    uVar3 = CEventCreateDnf::GetRate(local_14);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar3 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)local_d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send((CUser *)param_2,local_24);
    PacketGuard::~PacketGuard(local_24);
    return 0;
  }
  uVar3 = (**(code **)(*(int *)local_14 + 0x34))(local_14,0);
  if (local_14 == (CEventCreateDnf *)0x0) {
    pcVar4 = "nullptr";
  }
  else {
    pcVar4 = "ok";
  }
  LogManager::logFormat
            (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
             "virtual int InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int)",0x138,
             "[Taiwan, Event] stayEvent=%s eventing:%d",pcVar4,uVar3 & 0xff);
  return 0x139;
}
```
