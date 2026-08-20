# SendGrowthCreatureEventInfo

`_ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser`

`GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&)`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b6b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b6b70  _ZN21GiveGrowCreatureEvent27SendGrowthCreatureEventInfoER5CUser
#           GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&)
# range [0x081b6b70, 0x081b6e79]
081b6b70 +0x000:  push   %ebp
081b6b71 +0x001:  mov    %esp,%ebp
081b6b73 +0x003:  push   %esi
081b6b74 +0x004:  push   %ebx
081b6b75 +0x005:  sub    $0x50,%esp
081b6b78 +0x008:  lea    -0x30(%ebp),%eax
081b6b7b +0x00b:  mov    %eax,(%esp)
081b6b7e +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081b6b83 +0x013:  movl   $0x1c0,0x8(%esp)
081b6b8b +0x01b:  movl   $0x0,0x4(%esp)
081b6b93 +0x023:  lea    -0x30(%ebp),%eax
081b6b96 +0x026:  mov    %eax,(%esp)
081b6b99 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081b6b9e +0x02e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081b6ba5 +0x035:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081b6baa +0x03a:  mov    %eax,-0x1c(%ebp)
081b6bad +0x03d:  mov    0xc(%ebp),%eax
081b6bb0 +0x040:  mov    %eax,(%esp)
081b6bb3 +0x043:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081b6bb8 +0x048:  mov    %eax,-0x18(%ebp)
081b6bbb +0x04b:  mov    0xc(%ebp),%eax
081b6bbe +0x04e:  mov    %eax,(%esp)
081b6bc1 +0x051:  call   08691dbc <_ZN5CUser26getGrowthCreatureEventdataEv>  ; CUser::getGrowthCreatureEventdata()
081b6bc6 +0x056:  mov    %eax,-0x14(%ebp)
081b6bc9 +0x059:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6bce +0x05e:  mov    -0x1c(%ebp),%edx
081b6bd1 +0x061:  mov    %edx,0x4(%esp)
081b6bd5 +0x065:  mov    %eax,(%esp)
081b6bd8 +0x068:  call   08365a24 <_ZN12CDataManager32getGiveGrowCreatureEventJobCountEi>  ; CDataManager::getGiveGrowCreatureEventJobCount(int)
081b6bdd +0x06d:  mov    %eax,-0x10(%ebp)
081b6be0 +0x070:  mov    -0x10(%ebp),%eax
081b6be3 +0x073:  mov    %eax,0x4(%esp)
081b6be7 +0x077:  lea    -0x30(%ebp),%eax
081b6bea +0x07a:  mov    %eax,(%esp)
081b6bed +0x07d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081b6bf2 +0x082:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6bf7 +0x087:  lea    0x4c04(%eax),%edx
081b6bfd +0x08d:  lea    -0x34(%ebp),%eax
081b6c00 +0x090:  mov    %edx,0x4(%esp)
081b6c04 +0x094:  mov    %eax,(%esp)
081b6c07 +0x097:  call   081b749a <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x119>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x119
081b6c0c +0x09c:  sub    $0x4,%esp
081b6c0f +0x09f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b6c14 +0x0a4:  lea    0x4c04(%eax),%edx
081b6c1a +0x0aa:  lea    -0x38(%ebp),%eax
081b6c1d +0x0ad:  mov    %edx,0x4(%esp)
081b6c21 +0x0b1:  mov    %eax,(%esp)
081b6c24 +0x0b4:  call   081b74c0 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x13f>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x13f
081b6c29 +0x0b9:  sub    $0x4,%esp
081b6c2c +0x0bc:  jmp    081b6e09 <+0x299>
081b6c31 +0x0c1:  lea    -0x34(%ebp),%eax
081b6c34 +0x0c4:  mov    %eax,(%esp)
081b6c37 +0x0c7:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
081b6c3c +0x0cc:  mov    0x4(%eax),%eax
081b6c3f +0x0cf:  cmp    -0x1c(%ebp),%eax
081b6c42 +0x0d2:  jge    081b6c5e <+0xee>
081b6c44 +0x0d4:  lea    -0x34(%ebp),%eax
081b6c47 +0x0d7:  mov    %eax,(%esp)
081b6c4a +0x0da:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
081b6c4f +0x0df:  mov    0x8(%eax),%eax
081b6c52 +0x0e2:  cmp    -0x1c(%ebp),%eax
081b6c55 +0x0e5:  jle    081b6c5e <+0xee>
081b6c57 +0x0e7:  mov    $0x1,%eax
081b6c5c +0x0ec:  jmp    081b6c63 <+0xf3>
081b6c5e +0x0ee:  mov    $0x0,%eax
081b6c63 +0x0f3:  test   %al,%al
081b6c65 +0x0f5:  je     081b6dec <+0x27c>
081b6c6b +0x0fb:  lea    -0x34(%ebp),%eax
081b6c6e +0x0fe:  mov    %eax,(%esp)
081b6c71 +0x101:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
081b6c76 +0x106:  mov    (%eax),%eax
081b6c78 +0x108:  mov    %eax,0x4(%esp)
081b6c7c +0x10c:  lea    -0x30(%ebp),%eax
081b6c7f +0x10f:  mov    %eax,(%esp)
081b6c82 +0x112:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081b6c87 +0x117:  mov    -0x14(%ebp),%eax
081b6c8a +0x11a:  mov    %eax,(%esp)
081b6c8d +0x11d:  call   081b7546 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1c5>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1c5
081b6c92 +0x122:  xor    $0x1,%eax
081b6c95 +0x125:  test   %al,%al
081b6c97 +0x127:  je     081b6dad <+0x23d>
081b6c9d +0x12d:  mov    -0x14(%ebp),%edx
081b6ca0 +0x130:  lea    -0x3c(%ebp),%eax
081b6ca3 +0x133:  mov    %edx,0x4(%esp)
081b6ca7 +0x137:  mov    %eax,(%esp)
081b6caa +0x13a:  call   081b758a <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x209>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x209
081b6caf +0x13f:  sub    $0x4,%esp
081b6cb2 +0x142:  mov    -0x14(%ebp),%edx
081b6cb5 +0x145:  lea    -0x40(%ebp),%eax
081b6cb8 +0x148:  mov    %edx,0x4(%esp)
081b6cbc +0x14c:  mov    %eax,(%esp)
081b6cbf +0x14f:  call   081b75ae <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x22d>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x22d
081b6cc4 +0x154:  sub    $0x4,%esp
081b6cc7 +0x157:  jmp    081b6d91 <+0x221>
081b6ccc +0x15c:  lea    -0x3c(%ebp),%eax
081b6ccf +0x15f:  mov    %eax,(%esp)
081b6cd2 +0x162:  call   081b7634 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2b3>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2b3
081b6cd7 +0x167:  mov    0x8(%eax),%ebx
081b6cda +0x16a:  lea    -0x34(%ebp),%eax
081b6cdd +0x16d:  mov    %eax,(%esp)
081b6ce0 +0x170:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
081b6ce5 +0x175:  mov    (%eax),%eax
081b6ce7 +0x177:  cmp    %eax,%ebx
081b6ce9 +0x179:  sete   %al
081b6cec +0x17c:  test   %al,%al
081b6cee +0x17e:  je     081b6d74 <+0x204>
081b6cf4 +0x184:  lea    -0x3c(%ebp),%eax
081b6cf7 +0x187:  mov    %eax,(%esp)
081b6cfa +0x18a:  call   081b7634 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2b3>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2b3
081b6cff +0x18f:  add    $0xc,%eax
081b6d02 +0x192:  mov    %eax,(%esp)
081b6d05 +0x195:  call   0807e3b0 <_init+0xca8>
081b6d0a +0x19a:  mov    %eax,-0xc(%ebp)
081b6d0d +0x19d:  cmpl   $0x0,-0xc(%ebp)
081b6d11 +0x1a1:  jne    081b6d28 <+0x1b8>
081b6d13 +0x1a3:  movl   $0x1,0x4(%esp)
081b6d1b +0x1ab:  lea    -0x30(%ebp),%eax
081b6d1e +0x1ae:  mov    %eax,(%esp)
081b6d21 +0x1b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081b6d26 +0x1b6:  jmp    081b6d74 <+0x204>
081b6d28 +0x1b8:  movl   $0x2,0x4(%esp)
081b6d30 +0x1c0:  lea    -0x30(%ebp),%eax
081b6d33 +0x1c3:  mov    %eax,(%esp)
081b6d36 +0x1c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081b6d3b +0x1cb:  mov    -0xc(%ebp),%eax
081b6d3e +0x1ce:  mov    %eax,0x4(%esp)
081b6d42 +0x1d2:  lea    -0x30(%ebp),%eax
081b6d45 +0x1d5:  mov    %eax,(%esp)
081b6d48 +0x1d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081b6d4d +0x1dd:  lea    -0x3c(%ebp),%eax
081b6d50 +0x1e0:  mov    %eax,(%esp)
081b6d53 +0x1e3:  call   081b7634 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x2b3>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x2b3
081b6d58 +0x1e8:  add    $0xc,%eax
081b6d5b +0x1eb:  mov    -0xc(%ebp),%edx
081b6d5e +0x1ee:  mov    %edx,0x8(%esp)
081b6d62 +0x1f2:  mov    %eax,0x4(%esp)
081b6d66 +0x1f6:  lea    -0x30(%ebp),%eax
081b6d69 +0x1f9:  mov    %eax,(%esp)
081b6d6c +0x1fc:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
081b6d71 +0x201:  nop
081b6d72 +0x202:  jmp    081b6dec <+0x27c>
081b6d74 +0x204:  lea    -0x24(%ebp),%eax
081b6d77 +0x207:  movl   $0x0,0x8(%esp)
081b6d7f +0x20f:  lea    -0x3c(%ebp),%edx
081b6d82 +0x212:  mov    %edx,0x4(%esp)
081b6d86 +0x216:  mov    %eax,(%esp)
081b6d89 +0x219:  call   081b7600 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x27f>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x27f
081b6d8e +0x21e:  sub    $0x4,%esp
081b6d91 +0x221:  lea    -0x40(%ebp),%eax
081b6d94 +0x224:  mov    %eax,0x4(%esp)
081b6d98 +0x228:  lea    -0x3c(%ebp),%eax
081b6d9b +0x22b:  mov    %eax,(%esp)
081b6d9e +0x22e:  call   081b75d4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x253>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x253
081b6da3 +0x233:  test   %al,%al
081b6da5 +0x235:  jne    081b6ccc <+0x15c>
081b6dab +0x23b:  jmp    081b6dec <+0x27c>
081b6dad +0x23d:  lea    -0x34(%ebp),%eax
081b6db0 +0x240:  mov    %eax,(%esp)
081b6db3 +0x243:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
081b6db8 +0x248:  mov    (%eax),%eax
081b6dba +0x24a:  cmp    -0x18(%ebp),%eax
081b6dbd +0x24d:  sete   %al
081b6dc0 +0x250:  test   %al,%al
081b6dc2 +0x252:  je     081b6dd9 <+0x269>
081b6dc4 +0x254:  movl   $0x1,0x4(%esp)
081b6dcc +0x25c:  lea    -0x30(%ebp),%eax
081b6dcf +0x25f:  mov    %eax,(%esp)
081b6dd2 +0x262:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081b6dd7 +0x267:  jmp    081b6dec <+0x27c>
081b6dd9 +0x269:  movl   $0x0,0x4(%esp)
081b6de1 +0x271:  lea    -0x30(%ebp),%eax
081b6de4 +0x274:  mov    %eax,(%esp)
081b6de7 +0x277:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081b6dec +0x27c:  lea    -0x20(%ebp),%eax
081b6def +0x27f:  movl   $0x0,0x8(%esp)
081b6df7 +0x287:  lea    -0x34(%ebp),%edx
081b6dfa +0x28a:  mov    %edx,0x4(%esp)
081b6dfe +0x28e:  mov    %eax,(%esp)
081b6e01 +0x291:  call   081b74fa <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x179>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x179
081b6e06 +0x296:  sub    $0x4,%esp
081b6e09 +0x299:  lea    -0x38(%ebp),%eax
081b6e0c +0x29c:  mov    %eax,0x4(%esp)
081b6e10 +0x2a0:  lea    -0x34(%ebp),%eax
081b6e13 +0x2a3:  mov    %eax,(%esp)
081b6e16 +0x2a6:  call   081b74e6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x165>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x165
081b6e1b +0x2ab:  test   %al,%al
081b6e1d +0x2ad:  jne    081b6c31 <+0xc1>
081b6e23 +0x2b3:  movl   $0x1,0x4(%esp)
081b6e2b +0x2bb:  lea    -0x30(%ebp),%eax
081b6e2e +0x2be:  mov    %eax,(%esp)
081b6e31 +0x2c1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081b6e36 +0x2c6:  lea    -0x30(%ebp),%eax
081b6e39 +0x2c9:  mov    %eax,0x4(%esp)
081b6e3d +0x2cd:  mov    0xc(%ebp),%eax
081b6e40 +0x2d0:  mov    %eax,(%esp)
081b6e43 +0x2d3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081b6e48 +0x2d8:  jmp    081b6e65 <+0x2f5>
081b6e4a +0x2da:  mov    %edx,%ebx
081b6e4c +0x2dc:  mov    %eax,%esi
081b6e4e +0x2de:  lea    -0x30(%ebp),%eax
081b6e51 +0x2e1:  mov    %eax,(%esp)
081b6e54 +0x2e4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081b6e59 +0x2e9:  mov    %esi,%eax
081b6e5b +0x2eb:  mov    %ebx,%edx
081b6e5d +0x2ed:  mov    %eax,(%esp)
081b6e60 +0x2f0:  call   08ae3750 <_Unwind_Resume>
081b6e65 +0x2f5:  lea    -0x30(%ebp),%eax
081b6e68 +0x2f8:  mov    %eax,(%esp)
081b6e6b +0x2fb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081b6e70 +0x300:  lea    -0x8(%ebp),%esp
081b6e73 +0x303:  add    $0x0,%esp
081b6e76 +0x306:  pop    %ebx
081b6e77 +0x307:  pop    %esi
081b6e78 +0x308:  pop    %ebp
081b6e79 +0x309:  ret
```

## 反编译 C

```c
// GiveGrowCreatureEvent::SendGrowthCreatureEventInfo @ 0x81b6b70

/* GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(CUser&) */

void __thiscall
GiveGrowCreatureEvent::SendGrowthCreatureEventInfo(GiveGrowCreatureEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  int *piVar4;
  __normal_iterator local_44 [4];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_40 [4];
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_3c [4];
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_38 [4];
  PacketGuard local_34 [12];
  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
  local_28 [4];
  _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>> local_24 [4];
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  size_t local_10;
  
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 081b6b99 to 081b6e47 has its CatchHandler @ 081b6e4a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x1c0);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_18 = CUser::getGrowthCreatureEventdata(param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = CDataManager::getGiveGrowCreatureEventJobCount(this_00,local_20);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_14);
  G_CDataManager();
  std::
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  ::begin(local_38);
  G_CDataManager();
  std::
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  ::end(local_3c);
  do {
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          *)local_38,(_Rb_tree_iterator *)local_3c);
    if (cVar2 == '\0') {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
      PacketGuard::~PacketGuard(local_34);
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          *)local_38);
    if ((*(int *)(iVar3 + 4) < local_20) &&
       (iVar3 = std::
                _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                              *)local_38), local_20 < *(int *)(iVar3 + 8))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      piVar4 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                    *)local_38);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,*piVar4);
      cVar2 = std::
              vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
              ::empty();
      if (cVar2 == '\x01') {
        piVar4 = (int *)std::
                        _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                        ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                      *)local_38);
        if (*piVar4 == local_1c) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
        }
      }
      else {
        std::
        vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
        ::begin();
        std::
        vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>
        ::end();
        while (bVar1 = __gnu_cxx::operator!=(local_40,local_44), bVar1) {
          iVar3 = __gnu_cxx::
                  __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                  ::operator*(local_40);
          iVar3 = *(int *)(iVar3 + 8);
          piVar4 = (int *)std::
                          _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                        *)local_38);
          if (iVar3 == *piVar4) {
            iVar3 = __gnu_cxx::
                    __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                    ::operator*(local_40);
            local_10 = strlen((char *)(iVar3 + 0xc));
            if (local_10 != 0) {
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,2);
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_10);
              iVar3 = __gnu_cxx::
                      __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
                      ::operator*(local_40);
              InterfacePacketBuf::put_str
                        ((InterfacePacketBuf *)local_34,(char *)(iVar3 + 0xc),local_10);
              break;
            }
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
          }
          __gnu_cxx::
          __normal_iterator<GrowthCreatureEvent::eventCharacInfo*,std::vector<GrowthCreatureEvent::eventCharacInfo,std::allocator<GrowthCreatureEvent::eventCharacInfo>>>
          ::operator++(local_28,(int)local_40);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>::
    operator++(local_24,(int)local_38);
  } while( true );
}
```
