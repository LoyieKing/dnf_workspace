# dispatch_sig

`_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardDisuse` | `0x0820a0f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820a0f6  _ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820a0f6, 0x0820a2c3]
0820a0f6 +0x000:  push   %ebp
0820a0f7 +0x001:  mov    %esp,%ebp
0820a0f9 +0x003:  push   %esi
0820a0fa +0x004:  push   %ebx
0820a0fb +0x005:  sub    $0x20,%esp
0820a0fe +0x008:  mov    0xc(%ebp),%eax
0820a101 +0x00b:  mov    %eax,(%esp)
0820a104 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820a109 +0x013:  cmp    $0x3,%eax
0820a10c +0x016:  setne  %al
0820a10f +0x019:  test   %al,%al
0820a111 +0x01b:  je     0820a13e <+0x48>
0820a113 +0x01d:  movl   $0x0,0xc(%esp)
0820a11b +0x025:  movl   $0x0,0x8(%esp)
0820a123 +0x02d:  movl   $&_ZZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a12b +0x035:  movl   $0xa5dc,(%esp)
0820a132 +0x03c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a137 +0x041:  mov    %eax,%ebx
0820a139 +0x043:  jmp    0820a2bb <+0x1c5>
0820a13e +0x048:  mov    0xc(%ebp),%eax
0820a141 +0x04b:  mov    %eax,(%esp)
0820a144 +0x04e:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a149 +0x053:  mov    %eax,(%esp)
0820a14c +0x056:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a151 +0x05b:  xor    $0x1,%eax
0820a154 +0x05e:  test   %al,%al
0820a156 +0x060:  je     0820a183 <+0x8d>
0820a158 +0x062:  movl   $0x0,0xc(%esp)
0820a160 +0x06a:  movl   $0x0,0x8(%esp)
0820a168 +0x072:  movl   $&_ZZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a170 +0x07a:  movl   $0xa5e3,(%esp)
0820a177 +0x081:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a17c +0x086:  mov    %eax,%ebx
0820a17e +0x088:  jmp    0820a2bb <+0x1c5>
0820a183 +0x08d:  mov    0xc(%ebp),%eax
0820a186 +0x090:  mov    %eax,(%esp)
0820a189 +0x093:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a18e +0x098:  mov    %eax,(%esp)
0820a191 +0x09b:  call   0822ef1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45c4
0820a196 +0x0a0:  xor    $0x1,%eax
0820a199 +0x0a3:  test   %al,%al
0820a19b +0x0a5:  je     0820a1c8 <+0xd2>
0820a19d +0x0a7:  movl   $0x0,0xc(%esp)
0820a1a5 +0x0af:  movl   $0x0,0x8(%esp)
0820a1ad +0x0b7:  movl   $&_ZZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a1b5 +0x0bf:  movl   $0xa5e6,(%esp)
0820a1bc +0x0c6:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a1c1 +0x0cb:  mov    %eax,%ebx
0820a1c3 +0x0cd:  jmp    0820a2bb <+0x1c5>
0820a1c8 +0x0d2:  mov    0xc(%ebp),%eax
0820a1cb +0x0d5:  mov    %eax,(%esp)
0820a1ce +0x0d8:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a1d3 +0x0dd:  mov    %eax,(%esp)
0820a1d6 +0x0e0:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
0820a1db +0x0e5:  cmp    $0x2,%eax
0820a1de +0x0e8:  seta   %al
0820a1e1 +0x0eb:  test   %al,%al
0820a1e3 +0x0ed:  je     0820a20a <+0x114>
0820a1e5 +0x0ef:  movl   $0x7a,0x8(%esp)
0820a1ed +0x0f7:  movl   $0xa5,0x4(%esp)
0820a1f5 +0x0ff:  mov    0xc(%ebp),%eax
0820a1f8 +0x102:  mov    %eax,(%esp)
0820a1fb +0x105:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820a200 +0x10a:  mov    $0x0,%ebx
0820a205 +0x10f:  jmp    0820a2bb <+0x1c5>
0820a20a +0x114:  lea    -0x14(%ebp),%eax
0820a20d +0x117:  mov    %eax,(%esp)
0820a210 +0x11a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820a215 +0x11f:  movl   $0xa5,0x8(%esp)
0820a21d +0x127:  movl   $0x1,0x4(%esp)
0820a225 +0x12f:  lea    -0x14(%ebp),%eax
0820a228 +0x132:  mov    %eax,(%esp)
0820a22b +0x135:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820a230 +0x13a:  movl   $0x1,0x4(%esp)
0820a238 +0x142:  lea    -0x14(%ebp),%eax
0820a23b +0x145:  mov    %eax,(%esp)
0820a23e +0x148:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820a243 +0x14d:  movl   $0x1,0x4(%esp)
0820a24b +0x155:  lea    -0x14(%ebp),%eax
0820a24e +0x158:  mov    %eax,(%esp)
0820a251 +0x15b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820a256 +0x160:  lea    -0x14(%ebp),%eax
0820a259 +0x163:  mov    %eax,0x4(%esp)
0820a25d +0x167:  mov    0xc(%ebp),%eax
0820a260 +0x16a:  mov    %eax,(%esp)
0820a263 +0x16d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820a268 +0x172:  mov    0xc(%ebp),%eax
0820a26b +0x175:  mov    %eax,(%esp)
0820a26e +0x178:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820a273 +0x17d:  mov    %eax,(%esp)
0820a276 +0x180:  call   0842b790 <_ZN21DB_SecurityCardDisuse11makeRequestEj>  ; DB_SecurityCardDisuse::makeRequest(unsigned int)
0820a27b +0x185:  mov    0xc(%ebp),%eax
0820a27e +0x188:  mov    %eax,(%esp)
0820a281 +0x18b:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a286 +0x190:  mov    %eax,(%esp)
0820a289 +0x193:  call   085fdd68 <_ZN8WongWork13CSecurityCard4initEv>  ; WongWork::CSecurityCard::init()
0820a28e +0x198:  mov    $0x0,%ebx
0820a293 +0x19d:  lea    -0x14(%ebp),%eax
0820a296 +0x1a0:  mov    %eax,(%esp)
0820a299 +0x1a3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820a29e +0x1a8:  jmp    0820a2bb <+0x1c5>
0820a2a0 +0x1aa:  mov    %edx,%ebx
0820a2a2 +0x1ac:  mov    %eax,%esi
0820a2a4 +0x1ae:  lea    -0x14(%ebp),%eax
0820a2a7 +0x1b1:  mov    %eax,(%esp)
0820a2aa +0x1b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820a2af +0x1b9:  mov    %esi,%eax
0820a2b1 +0x1bb:  mov    %ebx,%edx
0820a2b3 +0x1bd:  mov    %eax,(%esp)
0820a2b6 +0x1c0:  call   08ae3750 <_Unwind_Resume>
0820a2bb +0x1c5:  mov    %ebx,%eax
0820a2bd +0x1c7:  add    $0x20,%esp
0820a2c0 +0x1ca:  pop    %ebx
0820a2c1 +0x1cb:  pop    %esi
0820a2c2 +0x1cc:  pop    %ebp
0820a2c3 +0x1cd:  ret
```

## 反编译 C

```c
// Dispatcher_SecurityCardDisuse::dispatch_sig @ 0x820a0f6

/* Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_SecurityCardDisuse::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  uint uVar5;
  PacketGuard local_18 [12];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
    if (cVar1 == '\x01') {
      pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      cVar1 = WongWork::CSecurityCard::isCertified(pCVar4);
      if (cVar1 == '\x01') {
        pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
        uVar5 = WongWork::CSecurityCard::getFailCnt(pCVar4);
        if (uVar5 < 3) {
          PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0820a22b to 0820a28d has its CatchHandler @ 0820a2a0 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xa5);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
          CUser::Send((CUser *)param_2,local_18);
          uVar5 = CUser::get_acc_id((CUser *)param_2);
          DB_SecurityCardDisuse::makeRequest(uVar5);
          pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
          WongWork::CSecurityCard::init(pCVar4);
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_18);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xa5,0x7a);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xa5e6,
                         "virtual int Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa5e3,
                       "virtual int Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = LineFunc(0xa5dc,
                     "virtual int Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
  }
  return uVar3;
}
```
