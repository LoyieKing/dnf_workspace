# MakeNotiEventInfo

`_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser`

`CEventManager::MakeNotiEventInfo(PacketGuard&, CUser*)`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08115de2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08115de2  _ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser
#           CEventManager::MakeNotiEventInfo(PacketGuard&, CUser*)
# range [0x08115de2, 0x08116107]
08115de2 +0x000:  push   %ebp
08115de3 +0x001:  mov    %esp,%ebp
08115de5 +0x003:  push   %esi
08115de6 +0x004:  push   %ebx
08115de7 +0x005:  sub    $0x50,%esp
08115dea +0x008:  lea    -0x30(%ebp),%eax
08115ded +0x00b:  mov    %eax,(%esp)
08115df0 +0x00e:  call   081178dc <_GLOBAL__I__ZN13CEventManagerC2Ev+0xff1>  ; global constructors keyed to CEventManager::CEventManager()+0xff1
08115df5 +0x013:  mov    0xc(%ebp),%eax
08115df8 +0x016:  mov    %eax,(%esp)
08115dfb +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08115e00 +0x01e:  mov    0xc(%ebp),%eax
08115e03 +0x021:  movl   $0x6c,0x8(%esp)
08115e0b +0x029:  movl   $0x0,0x4(%esp)
08115e13 +0x031:  mov    %eax,(%esp)
08115e16 +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08115e1b +0x039:  movl   $0x0,-0x34(%ebp)
08115e22 +0x040:  movl   $0x0,-0x1c(%ebp)
08115e29 +0x047:  mov    0xc(%ebp),%eax
08115e2c +0x04a:  mov    %eax,(%esp)
08115e2f +0x04d:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
08115e34 +0x052:  mov    %eax,-0x34(%ebp)
08115e37 +0x055:  mov    0xc(%ebp),%eax
08115e3a +0x058:  mov    -0x1c(%ebp),%edx
08115e3d +0x05b:  mov    %edx,0x4(%esp)
08115e41 +0x05f:  mov    %eax,(%esp)
08115e44 +0x062:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08115e49 +0x067:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08115e4e +0x06c:  test   %eax,%eax
08115e50 +0x06e:  je     08115f17 <+0x135>
08115e56 +0x074:  movl   $0x0,-0x18(%ebp)
08115e5d +0x07b:  jmp    08115f05 <+0x123>
08115e62 +0x080:  mov    -0x18(%ebp),%eax
08115e65 +0x083:  mov    %eax,0x4(%esp)
08115e69 +0x087:  mov    0x8(%ebp),%eax
08115e6c +0x08a:  mov    %eax,(%esp)
08115e6f +0x08d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08115e74 +0x092:  mov    %eax,-0x14(%ebp)
08115e77 +0x095:  cmpl   $0x0,-0x14(%ebp)
08115e7b +0x099:  je     08115f01 <+0x11f>
08115e81 +0x09f:  mov    -0x14(%ebp),%eax
08115e84 +0x0a2:  mov    (%eax),%eax
08115e86 +0x0a4:  add    $0x34,%eax
08115e89 +0x0a7:  mov    (%eax),%edx
08115e8b +0x0a9:  mov    0x10(%ebp),%eax
08115e8e +0x0ac:  mov    %eax,0x4(%esp)
08115e92 +0x0b0:  mov    -0x14(%ebp),%eax
08115e95 +0x0b3:  mov    %eax,(%esp)
08115e98 +0x0b6:  call   *%edx
08115e9a +0x0b8:  test   %al,%al
08115e9c +0x0ba:  je     08115f01 <+0x11f>
08115e9e +0x0bc:  mov    0xc(%ebp),%eax
08115ea1 +0x0bf:  mov    -0x18(%ebp),%edx
08115ea4 +0x0c2:  mov    %edx,0x4(%esp)
08115ea8 +0x0c6:  mov    %eax,(%esp)
08115eab +0x0c9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08115eb0 +0x0ce:  addl   $0x1,-0x1c(%ebp)
08115eb4 +0x0d2:  mov    -0x14(%ebp),%eax
08115eb7 +0x0d5:  mov    (%eax),%eax
08115eb9 +0x0d7:  add    $0x1c,%eax
08115ebc +0x0da:  mov    (%eax),%ecx
08115ebe +0x0dc:  lea    -0x38(%ebp),%eax
08115ec1 +0x0df:  mov    -0x14(%ebp),%edx
08115ec4 +0x0e2:  mov    %edx,0x4(%esp)
08115ec8 +0x0e6:  mov    %eax,(%esp)
08115ecb +0x0e9:  call   *%ecx
08115ecd +0x0eb:  sub    $0x4,%esp
08115ed0 +0x0ee:  movzwl -0x38(%ebp),%eax
08115ed4 +0x0f2:  test   %ax,%ax
08115ed7 +0x0f5:  js     08115f01 <+0x11f>
08115ed9 +0x0f7:  mov    -0x18(%ebp),%eax
08115edc +0x0fa:  mov    %eax,-0x40(%ebp)
08115edf +0x0fd:  movzwl -0x38(%ebp),%eax
08115ee3 +0x101:  mov    %ax,-0x3c(%ebp)
08115ee7 +0x105:  movzwl -0x36(%ebp),%eax
08115eeb +0x109:  mov    %ax,-0x3a(%ebp)
08115eef +0x10d:  lea    -0x40(%ebp),%eax
08115ef2 +0x110:  mov    %eax,0x4(%esp)
08115ef6 +0x114:  lea    -0x30(%ebp),%eax
08115ef9 +0x117:  mov    %eax,(%esp)
08115efc +0x11a:  call   0811794e <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1063>  ; global constructors keyed to CEventManager::CEventManager()+0x1063
08115f01 +0x11f:  addl   $0x1,-0x18(%ebp)
08115f05 +0x123:  cmpl   $0xa5,-0x18(%ebp)
08115f0c +0x12a:  setle  %al
08115f0f +0x12d:  test   %al,%al
08115f11 +0x12f:  jne    08115e62 <+0x80>
08115f17 +0x135:  mov    0xc(%ebp),%eax
08115f1a +0x138:  mov    -0x1c(%ebp),%edx
08115f1d +0x13b:  mov    %edx,0x8(%esp)
08115f21 +0x13f:  lea    -0x34(%ebp),%edx
08115f24 +0x142:  mov    %edx,0x4(%esp)
08115f28 +0x146:  mov    %eax,(%esp)
08115f2b +0x149:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
08115f30 +0x14e:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08115f35 +0x153:  test   %eax,%eax
08115f37 +0x155:  je     08115fa5 <+0x1c3>
08115f39 +0x157:  movl   $0x0,-0x10(%ebp)
08115f40 +0x15e:  jmp    08115f97 <+0x1b5>
08115f42 +0x160:  mov    -0x10(%ebp),%eax
08115f45 +0x163:  mov    %eax,0x4(%esp)
08115f49 +0x167:  mov    0x8(%ebp),%eax
08115f4c +0x16a:  mov    %eax,(%esp)
08115f4f +0x16d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08115f54 +0x172:  mov    %eax,-0xc(%ebp)
08115f57 +0x175:  cmpl   $0x0,-0xc(%ebp)
08115f5b +0x179:  je     08115f93 <+0x1b1>
08115f5d +0x17b:  mov    -0xc(%ebp),%eax
08115f60 +0x17e:  mov    (%eax),%eax
08115f62 +0x180:  add    $0x34,%eax
08115f65 +0x183:  mov    (%eax),%edx
08115f67 +0x185:  mov    0x10(%ebp),%eax
08115f6a +0x188:  mov    %eax,0x4(%esp)
08115f6e +0x18c:  mov    -0xc(%ebp),%eax
08115f71 +0x18f:  mov    %eax,(%esp)
08115f74 +0x192:  call   *%edx
08115f76 +0x194:  test   %al,%al
08115f78 +0x196:  je     08115f93 <+0x1b1>
08115f7a +0x198:  mov    -0xc(%ebp),%eax
08115f7d +0x19b:  mov    (%eax),%eax
08115f7f +0x19d:  add    $0x18,%eax
08115f82 +0x1a0:  mov    (%eax),%edx
08115f84 +0x1a2:  mov    0xc(%ebp),%eax
08115f87 +0x1a5:  mov    %eax,0x4(%esp)
08115f8b +0x1a9:  mov    -0xc(%ebp),%eax
08115f8e +0x1ac:  mov    %eax,(%esp)
08115f91 +0x1af:  call   *%edx
08115f93 +0x1b1:  addl   $0x1,-0x10(%ebp)
08115f97 +0x1b5:  cmpl   $0xa5,-0x10(%ebp)
08115f9e +0x1bc:  setle  %al
08115fa1 +0x1bf:  test   %al,%al
08115fa3 +0x1c1:  jne    08115f42 <+0x160>
08115fa5 +0x1c3:  lea    -0x30(%ebp),%eax
08115fa8 +0x1c6:  mov    %eax,(%esp)
08115fab +0x1c9:  call   081179c2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x10d7>  ; global constructors keyed to CEventManager::CEventManager()+0x10d7
08115fb0 +0x1ce:  xor    $0x1,%eax
08115fb3 +0x1d1:  test   %al,%al
08115fb5 +0x1d3:  je     081160af <+0x2cd>
08115fbb +0x1d9:  lea    -0x30(%ebp),%eax
08115fbe +0x1dc:  mov    %eax,(%esp)
08115fc1 +0x1df:  call   08117a06 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x111b>  ; global constructors keyed to CEventManager::CEventManager()+0x111b
08115fc6 +0x1e4:  mov    %eax,%edx
08115fc8 +0x1e6:  mov    0xc(%ebp),%eax
08115fcb +0x1e9:  mov    %edx,0x4(%esp)
08115fcf +0x1ed:  mov    %eax,(%esp)
08115fd2 +0x1f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08115fd7 +0x1f5:  lea    -0x24(%ebp),%eax
08115fda +0x1f8:  lea    -0x30(%ebp),%edx
08115fdd +0x1fb:  mov    %edx,0x4(%esp)
08115fe1 +0x1ff:  mov    %eax,(%esp)
08115fe4 +0x202:  call   08117a22 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1137>  ; global constructors keyed to CEventManager::CEventManager()+0x1137
08115fe9 +0x207:  sub    $0x4,%esp
08115fec +0x20a:  lea    -0x24(%ebp),%eax
08115fef +0x20d:  mov    %eax,0x4(%esp)
08115ff3 +0x211:  lea    -0x44(%ebp),%eax
08115ff6 +0x214:  mov    %eax,(%esp)
08115ff9 +0x217:  call   08117a46 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x115b>  ; global constructors keyed to CEventManager::CEventManager()+0x115b
08115ffe +0x21c:  lea    -0x20(%ebp),%eax
08116001 +0x21f:  lea    -0x30(%ebp),%edx
08116004 +0x222:  mov    %edx,0x4(%esp)
08116008 +0x226:  mov    %eax,(%esp)
0811600b +0x229:  call   08117a60 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1175>  ; global constructors keyed to CEventManager::CEventManager()+0x1175
08116010 +0x22e:  sub    $0x4,%esp
08116013 +0x231:  lea    -0x20(%ebp),%eax
08116016 +0x234:  mov    %eax,0x4(%esp)
0811601a +0x238:  lea    -0x48(%ebp),%eax
0811601d +0x23b:  mov    %eax,(%esp)
08116020 +0x23e:  call   08117a46 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x115b>  ; global constructors keyed to CEventManager::CEventManager()+0x115b
08116025 +0x243:  jmp    08116093 <+0x2b1>
08116027 +0x245:  lea    -0x44(%ebp),%eax
0811602a +0x248:  mov    %eax,(%esp)
0811602d +0x24b:  call   08117ab2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x11c7>  ; global constructors keyed to CEventManager::CEventManager()+0x11c7
08116032 +0x250:  mov    (%eax),%eax
08116034 +0x252:  movswl %ax,%edx
08116037 +0x255:  mov    0xc(%ebp),%eax
0811603a +0x258:  mov    %edx,0x4(%esp)
0811603e +0x25c:  mov    %eax,(%esp)
08116041 +0x25f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08116046 +0x264:  lea    -0x44(%ebp),%eax
08116049 +0x267:  mov    %eax,(%esp)
0811604c +0x26a:  call   08117ab2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x11c7>  ; global constructors keyed to CEventManager::CEventManager()+0x11c7
08116051 +0x26f:  movzwl 0x4(%eax),%eax
08116055 +0x273:  movswl %ax,%edx
08116058 +0x276:  mov    0xc(%ebp),%eax
0811605b +0x279:  mov    %edx,0x4(%esp)
0811605f +0x27d:  mov    %eax,(%esp)
08116062 +0x280:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08116067 +0x285:  lea    -0x44(%ebp),%eax
0811606a +0x288:  mov    %eax,(%esp)
0811606d +0x28b:  call   08117ab2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x11c7>  ; global constructors keyed to CEventManager::CEventManager()+0x11c7
08116072 +0x290:  movzwl 0x6(%eax),%eax
08116076 +0x294:  movswl %ax,%edx
08116079 +0x297:  mov    0xc(%ebp),%eax
0811607c +0x29a:  mov    %edx,0x4(%esp)
08116080 +0x29e:  mov    %eax,(%esp)
08116083 +0x2a1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08116088 +0x2a6:  lea    -0x44(%ebp),%eax
0811608b +0x2a9:  mov    %eax,(%esp)
0811608e +0x2ac:  call   08117abc <_GLOBAL__I__ZN13CEventManagerC2Ev+0x11d1>  ; global constructors keyed to CEventManager::CEventManager()+0x11d1
08116093 +0x2b1:  lea    -0x48(%ebp),%eax
08116096 +0x2b4:  mov    %eax,0x4(%esp)
0811609a +0x2b8:  lea    -0x44(%ebp),%eax
0811609d +0x2bb:  mov    %eax,(%esp)
081160a0 +0x2be:  call   08117a86 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x119b>  ; global constructors keyed to CEventManager::CEventManager()+0x119b
081160a5 +0x2c3:  test   %al,%al
081160a7 +0x2c5:  jne    08116027 <+0x245>
081160ad +0x2cb:  jmp    081160c2 <+0x2e0>
081160af +0x2cd:  mov    0xc(%ebp),%eax
081160b2 +0x2d0:  movl   $0x0,0x4(%esp)
081160ba +0x2d8:  mov    %eax,(%esp)
081160bd +0x2db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081160c2 +0x2e0:  mov    0xc(%ebp),%eax
081160c5 +0x2e3:  movl   $0x1,0x4(%esp)
081160cd +0x2eb:  mov    %eax,(%esp)
081160d0 +0x2ee:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081160d5 +0x2f3:  jmp    081160f2 <+0x310>
081160d7 +0x2f5:  mov    %edx,%ebx
081160d9 +0x2f7:  mov    %eax,%esi
081160db +0x2f9:  lea    -0x30(%ebp),%eax
081160de +0x2fc:  mov    %eax,(%esp)
081160e1 +0x2ff:  call   081178f0 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1005>  ; global constructors keyed to CEventManager::CEventManager()+0x1005
081160e6 +0x304:  mov    %esi,%eax
081160e8 +0x306:  mov    %ebx,%edx
081160ea +0x308:  mov    %eax,(%esp)
081160ed +0x30b:  call   08ae3750 <_Unwind_Resume>
081160f2 +0x310:  lea    -0x30(%ebp),%eax
081160f5 +0x313:  mov    %eax,(%esp)
081160f8 +0x316:  call   081178f0 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1005>  ; global constructors keyed to CEventManager::CEventManager()+0x1005
081160fd +0x31b:  lea    -0x8(%ebp),%esp
08116100 +0x31e:  add    $0x0,%esp
08116103 +0x321:  pop    %ebx
08116104 +0x322:  pop    %esi
08116105 +0x323:  pop    %ebp
08116106 +0x324:  ret
08116107 +0x325:  nop
```

## 反编译 C

```c
// CEventManager::MakeNotiEventInfo @ 0x8115de2

/* CEventManager::MakeNotiEventInfo(PacketGuard&, CUser*) */

void __thiscall
CEventManager::MakeNotiEventInfo(CEventManager *this,PacketGuard *param_1,CUser *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int local_64;
  int local_60;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  short local_40;
  undefined2 local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> local_34 [12];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  
  piVar7 = (int *)&stack0xffffffa4;
  std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::vector(local_34);
                    /* try { // try from 08115dfb to 081160d4 has its CatchHandler @ 081160d7 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x6c);
  local_38 = 0;
  local_20 = 0;
  local_38 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_20);
  if (GlobalData::s_event_manager != 0) {
    piVar7 = (int *)&stack0xffffffa4;
    for (local_1c = 0; local_1c < 0xa6; local_1c = local_1c + 1) {
      piVar7[1] = local_1c;
      *piVar7 = (int)this;
      piVar7[-1] = 0x8115e74;
      local_18 = (int *)GetRepeatEvent((CEventManager *)*piVar7,piVar7[1]);
      piVar6 = piVar7;
      if (local_18 != (int *)0x0) {
        pcVar1 = *(code **)(*local_18 + 0x34);
        piVar7[1] = (int)param_2;
        *piVar7 = (int)local_18;
        piVar7[-1] = 0x8115e9a;
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          piVar7[1] = local_1c;
          *piVar7 = (int)param_1;
          piVar7[-1] = 0x8115eb0;
          InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
          local_20 = local_20 + 1;
          pcVar1 = *(code **)(*local_18 + 0x1c);
          piVar7[1] = (int)local_18;
          *piVar7 = (int)&local_3c;
          piVar7[-1] = 0x8115ecd;
          (*pcVar1)();
          piVar6 = piVar7 + -1;
          if (-1 < local_3c) {
            local_44 = local_1c;
            local_40 = local_3c;
            local_3e = local_3a;
            *piVar7 = (int)&local_44;
            piVar7[-1] = (int)local_34;
            piVar7[-2] = 0x8115f01;
            std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::push_back
                      ((vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> *)piVar7[-1],
                       (stEVENTADDINFO *)*piVar7);
            piVar6 = piVar7 + -1;
          }
        }
      }
      piVar7 = piVar6;
    }
  }
  piVar7[2] = local_20;
  piVar7[1] = (int)&local_38;
  *piVar7 = (int)param_1;
  piVar7[-1] = 0x8115f30;
  InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,(int *)piVar7[1],piVar7[2]);
  if (GlobalData::s_event_manager != 0) {
    for (local_14 = 0; local_14 < 0xa6; local_14 = local_14 + 1) {
      piVar7[1] = local_14;
      *piVar7 = (int)this;
      piVar7[-1] = 0x8115f54;
      local_10 = (int *)GetRepeatEvent((CEventManager *)*piVar7,piVar7[1]);
      if (local_10 != (int *)0x0) {
        pcVar1 = *(code **)(*local_10 + 0x34);
        piVar7[1] = (int)param_2;
        *piVar7 = (int)local_10;
        piVar7[-1] = 0x8115f76;
        cVar2 = (*pcVar1)();
        if (cVar2 != '\0') {
          pcVar1 = *(code **)(*local_10 + 0x18);
          piVar7[1] = (int)param_1;
          *piVar7 = (int)local_10;
          piVar7[-1] = 0x8115f93;
          (*pcVar1)();
        }
      }
    }
  }
  *piVar7 = (int)local_34;
  piVar7[-1] = 0x8115fb0;
  cVar2 = std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::empty();
  if (cVar2 == '\x01') {
    piVar7[1] = 0;
    *piVar7 = (int)param_1;
    piVar7[-1] = 0x81160c2;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)*piVar7,piVar7[1]);
  }
  else {
    *piVar7 = (int)local_34;
    piVar7[-1] = 0x8115fc6;
    iVar4 = std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::size
                      ((vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> *)*piVar7);
    piVar7[1] = iVar4;
    *piVar7 = (int)param_1;
    piVar7[-1] = 0x8115fd7;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)*piVar7,piVar7[1]);
    piVar7[1] = (int)local_34;
    *piVar7 = (int)local_28;
    piVar7[-1] = 0x8115fe9;
    std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::begin();
    piVar7[1] = (int)local_28;
    *piVar7 = (int)local_48;
    piVar7[-1] = 0x8115ffe;
    __gnu_cxx::
    __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
    ::__normal_iterator<stEVENTADDINFO*>
              ((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                *)*piVar7,(__normal_iterator *)piVar7[1]);
    piVar7[1] = (int)local_34;
    *piVar7 = (int)local_24;
    piVar7[-1] = 0x8116010;
    std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::end();
    piVar7[1] = (int)local_24;
    *piVar7 = (int)local_4c;
    piVar7[-1] = 0x8116025;
    __gnu_cxx::
    __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
    ::__normal_iterator<stEVENTADDINFO*>
              ((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                *)*piVar7,(__normal_iterator *)piVar7[1]);
    while( true ) {
      piVar7[1] = (int)local_4c;
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x81160a5;
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)*piVar7,(__normal_iterator *)piVar7[1]);
      if (!bVar3) break;
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116032;
      puVar5 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
               ::operator*((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                            *)*piVar7);
      piVar7[1] = (int)(short)*puVar5;
      *piVar7 = (int)param_1;
      piVar7[-1] = 0x8116046;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116051;
      iVar4 = __gnu_cxx::
              __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
              ::operator*((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                           *)*piVar7);
      piVar7[1] = (int)*(short *)(iVar4 + 4);
      *piVar7 = (int)param_1;
      piVar7[-1] = 0x8116067;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116072;
      iVar4 = __gnu_cxx::
              __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
              ::operator*((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                           *)*piVar7);
      piVar7[1] = (int)*(short *)(iVar4 + 6);
      *piVar7 = (int)param_1;
      piVar7[-1] = 0x8116088;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)*piVar7,piVar7[1]);
      *piVar7 = (int)local_48;
      piVar7[-1] = 0x8116093;
      __gnu_cxx::
      __normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
      ::operator++((__normal_iterator<stEVENTADDINFO_const*,std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>>
                    *)*piVar7);
    }
  }
  piVar7[1] = 1;
  *piVar7 = (int)param_1;
  piVar7[-1] = 0x81160d5;
  InterfacePacketBuf::finalize((InterfacePacketBuf *)*piVar7,SUB41(piVar7[1],0));
  *piVar7 = (int)local_34;
  piVar7[-1] = 0x81160fd;
  std::vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>>::~vector
            ((vector<stEVENTADDINFO,std::allocator<stEVENTADDINFO>> *)*piVar7);
  return;
}
```
