# send

`_ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase`

`Dispatcher_SecurityCardAuthRpy::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthRpy` | `0x08262f4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08262f4e  _ZN30Dispatcher_SecurityCardAuthRpy4sendEP5CUserR9ParamBase
#           Dispatcher_SecurityCardAuthRpy::send(CUser*, ParamBase&)
# range [0x08262f4e, 0x0826314b]
08262f4e +0x000:  push   %ebp
08262f4f +0x001:  mov    %esp,%ebp
08262f51 +0x003:  push   %esi
08262f52 +0x004:  push   %ebx
08262f53 +0x005:  sub    $0x40,%esp
08262f56 +0x008:  mov    0x10(%ebp),%eax
08262f59 +0x00b:  mov    %eax,-0x14(%ebp)
08262f5c +0x00e:  mov    -0x14(%ebp),%eax
08262f5f +0x011:  movzbl 0x4(%eax),%eax
08262f63 +0x015:  test   %al,%al
08262f65 +0x017:  je     08263069 <+0x11b>
08262f6b +0x01d:  mov    0xc(%ebp),%eax
08262f6e +0x020:  mov    %eax,(%esp)
08262f71 +0x023:  call   0822fe3e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54e8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54e8
08262f76 +0x028:  mov    %eax,%ebx
08262f78 +0x02a:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08262f7d +0x02f:  mov    %ebx,0x4(%esp)
08262f81 +0x033:  mov    %eax,(%esp)
08262f84 +0x036:  call   08294d8a <_ZN12CGameManager13GetTradeSpaceEi>  ; CGameManager::GetTradeSpace(int)
08262f89 +0x03b:  mov    %eax,-0x10(%ebp)
08262f8c +0x03e:  cmpl   $0x0,-0x10(%ebp)
08262f90 +0x042:  je     08262fab <+0x5d>
08262f92 +0x044:  mov    -0x10(%ebp),%eax
08262f95 +0x047:  mov    %eax,(%esp)
08262f98 +0x04a:  call   0823439a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a44
08262f9d +0x04f:  xor    $0x1,%eax
08262fa0 +0x052:  test   %al,%al
08262fa2 +0x054:  je     08262fab <+0x5d>
08262fa4 +0x056:  mov    $0x1,%eax
08262fa9 +0x05b:  jmp    08262fb0 <+0x62>
08262fab +0x05d:  mov    $0x0,%eax
08262fb0 +0x062:  test   %al,%al
08262fb2 +0x064:  je     08263144 <+0x1f6>
08262fb8 +0x06a:  lea    -0x20(%ebp),%eax
08262fbb +0x06d:  mov    %eax,(%esp)
08262fbe +0x070:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08262fc3 +0x075:  lea    -0x20(%ebp),%eax
08262fc6 +0x078:  mov    %eax,(%esp)
08262fc9 +0x07b:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08262fce +0x080:  movl   $0xb0,0x8(%esp)
08262fd6 +0x088:  movl   $0x0,0x4(%esp)
08262fde +0x090:  lea    -0x20(%ebp),%eax
08262fe1 +0x093:  mov    %eax,(%esp)
08262fe4 +0x096:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08262fe9 +0x09b:  movl   $0x0,0x4(%esp)
08262ff1 +0x0a3:  lea    -0x20(%ebp),%eax
08262ff4 +0x0a6:  mov    %eax,(%esp)
08262ff7 +0x0a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08262ffc +0x0ae:  movl   $0x1,0x4(%esp)
08263004 +0x0b6:  lea    -0x20(%ebp),%eax
08263007 +0x0b9:  mov    %eax,(%esp)
0826300a +0x0bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0826300f +0x0c1:  mov    0xc(%ebp),%eax
08263012 +0x0c4:  mov    %eax,0x4(%esp)
08263016 +0x0c8:  mov    -0x10(%ebp),%eax
08263019 +0x0cb:  mov    %eax,(%esp)
0826301c +0x0ce:  call   08529a72 <_ZN11CTradeSpace15GetOppositeUserEP5CUser>  ; CTradeSpace::GetOppositeUser(CUser*)
08263021 +0x0d3:  mov    %eax,-0xc(%ebp)
08263024 +0x0d6:  cmpl   $0x0,-0xc(%ebp)
08263028 +0x0da:  je     08263059 <+0x10b>
0826302a +0x0dc:  lea    -0x20(%ebp),%eax
0826302d +0x0df:  mov    %eax,0x4(%esp)
08263031 +0x0e3:  mov    -0xc(%ebp),%eax
08263034 +0x0e6:  mov    %eax,(%esp)
08263037 +0x0e9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0826303c +0x0ee:  jmp    08263059 <+0x10b>
0826303e +0x0f0:  mov    %edx,%ebx
08263040 +0x0f2:  mov    %eax,%esi
08263042 +0x0f4:  lea    -0x20(%ebp),%eax
08263045 +0x0f7:  mov    %eax,(%esp)
08263048 +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826304d +0x0ff:  mov    %esi,%eax
0826304f +0x101:  mov    %ebx,%edx
08263051 +0x103:  mov    %eax,(%esp)
08263054 +0x106:  call   08ae3750 <_Unwind_Resume>
08263059 +0x10b:  lea    -0x20(%ebp),%eax
0826305c +0x10e:  mov    %eax,(%esp)
0826305f +0x111:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08263064 +0x116:  jmp    08263144 <+0x1f6>
08263069 +0x11b:  mov    -0x14(%ebp),%eax
0826306c +0x11e:  movzbl 0x5(%eax),%eax
08263070 +0x122:  test   %al,%al
08263072 +0x124:  je     08263144 <+0x1f6>
08263078 +0x12a:  lea    -0x2c(%ebp),%eax
0826307b +0x12d:  mov    %eax,(%esp)
0826307e +0x130:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08263083 +0x135:  movl   $0xa7,0x8(%esp)
0826308b +0x13d:  movl   $0x1,0x4(%esp)
08263093 +0x145:  lea    -0x2c(%ebp),%eax
08263096 +0x148:  mov    %eax,(%esp)
08263099 +0x14b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0826309e +0x150:  movl   $0x0,0x4(%esp)
082630a6 +0x158:  lea    -0x2c(%ebp),%eax
082630a9 +0x15b:  mov    %eax,(%esp)
082630ac +0x15e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082630b1 +0x163:  mov    -0x14(%ebp),%eax
082630b4 +0x166:  movzbl 0x5(%eax),%eax
082630b8 +0x16a:  movzbl %al,%eax
082630bb +0x16d:  mov    %eax,0x4(%esp)
082630bf +0x171:  lea    -0x2c(%ebp),%eax
082630c2 +0x174:  mov    %eax,(%esp)
082630c5 +0x177:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082630ca +0x17c:  mov    -0x14(%ebp),%eax
082630cd +0x17f:  movzbl 0x5(%eax),%eax
082630d1 +0x183:  cmp    $0x87,%al
082630d3 +0x185:  jne    082630f7 <+0x1a9>
082630d5 +0x187:  mov    0xc(%ebp),%eax
082630d8 +0x18a:  mov    %eax,(%esp)
082630db +0x18d:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082630e0 +0x192:  mov    %eax,(%esp)
082630e3 +0x195:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
082630e8 +0x19a:  mov    %eax,0x4(%esp)
082630ec +0x19e:  lea    -0x2c(%ebp),%eax
082630ef +0x1a1:  mov    %eax,(%esp)
082630f2 +0x1a4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
082630f7 +0x1a9:  movl   $0x1,0x4(%esp)
082630ff +0x1b1:  lea    -0x2c(%ebp),%eax
08263102 +0x1b4:  mov    %eax,(%esp)
08263105 +0x1b7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0826310a +0x1bc:  lea    -0x2c(%ebp),%eax
0826310d +0x1bf:  mov    %eax,0x4(%esp)
08263111 +0x1c3:  mov    0xc(%ebp),%eax
08263114 +0x1c6:  mov    %eax,(%esp)
08263117 +0x1c9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0826311c +0x1ce:  jmp    08263139 <+0x1eb>
0826311e +0x1d0:  mov    %edx,%ebx
08263120 +0x1d2:  mov    %eax,%esi
08263122 +0x1d4:  lea    -0x2c(%ebp),%eax
08263125 +0x1d7:  mov    %eax,(%esp)
08263128 +0x1da:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0826312d +0x1df:  mov    %esi,%eax
0826312f +0x1e1:  mov    %ebx,%edx
08263131 +0x1e3:  mov    %eax,(%esp)
08263134 +0x1e6:  call   08ae3750 <_Unwind_Resume>
08263139 +0x1eb:  lea    -0x2c(%ebp),%eax
0826313c +0x1ee:  mov    %eax,(%esp)
0826313f +0x1f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08263144 +0x1f6:  add    $0x40,%esp
08263147 +0x1f9:  pop    %ebx
08263148 +0x1fa:  pop    %esi
08263149 +0x1fb:  pop    %ebp
0826314a +0x1fc:  ret
0826314b +0x1fd:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthRpy::send @ 0x8262f4e

/* Dispatcher_SecurityCardAuthRpy::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SecurityCardAuthRpy::send
          (Dispatcher_SecurityCardAuthRpy *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *this_00;
  CPad *this_01;
  PacketGuard local_30 [12];
  PacketGuard local_24 [12];
  ParamBase *local_18;
  CTradeSpace *local_14;
  CUser *local_10;
  
  local_18 = param_2;
  if (param_2[4] != (ParamBase)0x0) {
    iVar3 = CUser::GetTradeSpace(param_1);
    this_00 = (CGameManager *)G_CGameManager();
    local_14 = (CTradeSpace *)CGameManager::GetTradeSpace(this_00,iVar3);
    if ((local_14 == (CTradeSpace *)0x0) ||
       (cVar2 = CTradeSpace::is_empty(local_14), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08262fc9 to 0826303b has its CatchHandler @ 0826303e */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xb0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      local_10 = (CUser *)CTradeSpace::GetOppositeUser(local_14,param_1);
      if (local_10 != (CUser *)0x0) {
        CUser::Send(local_10,local_24);
      }
      PacketGuard::~PacketGuard(local_24);
    }
    return;
  }
  if (param_2[5] == (ParamBase)0x0) {
    return;
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08263099 to 0826311b has its CatchHandler @ 0826311e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xa7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)(byte)local_18[5]);
  if (local_18[5] == (ParamBase)0x87) {
    this_01 = (CPad *)CUser::getPad(param_1);
    iVar3 = Sanicova::CPad::getFailCnt(this_01);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,iVar3);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
