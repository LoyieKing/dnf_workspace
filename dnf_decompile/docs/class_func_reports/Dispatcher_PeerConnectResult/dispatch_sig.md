# dispatch_sig

`_ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PeerConnectResult` | `0x082033e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082033e6  _ZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&)
# range [0x082033e6, 0x0820350d]
082033e6 +0x000:  push   %ebp
082033e7 +0x001:  mov    %esp,%ebp
082033e9 +0x003:  push   %ebx
082033ea +0x004:  sub    $0x24,%esp
082033ed +0x007:  movb   $0x0,-0x15(%ebp)
082033f1 +0x00b:  movw   $0x0,-0x18(%ebp)
082033f7 +0x011:  lea    -0x15(%ebp),%eax
082033fa +0x014:  mov    %eax,0x4(%esp)
082033fe +0x018:  mov    0x10(%ebp),%eax
08203401 +0x01b:  mov    %eax,(%esp)
08203404 +0x01e:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08203409 +0x023:  xor    $0x1,%eax
0820340c +0x026:  test   %al,%al
0820340e +0x028:  je     08203439 <+0x53>
08203410 +0x02a:  movl   $0x0,0xc(%esp)
08203418 +0x032:  movl   $0x0,0x8(%esp)
08203420 +0x03a:  movl   $&_ZZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203428 +0x042:  movl   $0x9a1c,(%esp)
0820342f +0x049:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203434 +0x04e:  jmp    08203507 <+0x121>
08203439 +0x053:  lea    -0x18(%ebp),%eax
0820343c +0x056:  mov    %eax,0x4(%esp)
08203440 +0x05a:  mov    0x10(%ebp),%eax
08203443 +0x05d:  mov    %eax,(%esp)
08203446 +0x060:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0820344b +0x065:  xor    $0x1,%eax
0820344e +0x068:  test   %al,%al
08203450 +0x06a:  je     0820347b <+0x95>
08203452 +0x06c:  movl   $0x0,0xc(%esp)
0820345a +0x074:  movl   $0x0,0x8(%esp)
08203462 +0x07c:  movl   $&_ZZN28Dispatcher_PeerConnectResult12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820346a +0x084:  movl   $0x9a1f,(%esp)
08203471 +0x08b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203476 +0x090:  jmp    08203507 <+0x121>
0820347b +0x095:  movzwl -0x18(%ebp),%eax
0820347f +0x099:  movzwl %ax,%ebx
08203482 +0x09c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08203487 +0x0a1:  mov    %ebx,0x4(%esp)
0820348b +0x0a5:  mov    %eax,(%esp)
0820348e +0x0a8:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
08203493 +0x0ad:  mov    %eax,-0x14(%ebp)
08203496 +0x0b0:  cmpl   $0x0,-0x14(%ebp)
0820349a +0x0b4:  sete   %al
0820349d +0x0b7:  test   %al,%al
0820349f +0x0b9:  je     082034a8 <+0xc2>
082034a1 +0x0bb:  mov    $0x0,%eax
082034a6 +0x0c0:  jmp    08203507 <+0x121>
082034a8 +0x0c2:  mov    0xc(%ebp),%eax
082034ab +0x0c5:  add    $0xe0,%eax
082034b0 +0x0ca:  mov    %eax,(%esp)
082034b3 +0x0cd:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
082034b8 +0x0d2:  movsbl %al,%eax
082034bb +0x0d5:  mov    %eax,-0x10(%ebp)
082034be +0x0d8:  mov    -0x14(%ebp),%eax
082034c1 +0x0db:  add    $0xe0,%eax
082034c6 +0x0e0:  mov    %eax,(%esp)
082034c9 +0x0e3:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
082034ce +0x0e8:  movsbl %al,%eax
082034d1 +0x0eb:  mov    %eax,-0xc(%ebp)
082034d4 +0x0ee:  movzbl -0x15(%ebp),%eax
082034d8 +0x0f2:  movzbl %al,%ebx
082034db +0x0f5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082034e0 +0x0fa:  mov    %eax,(%esp)
082034e3 +0x0fd:  call   082343ba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9a64>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9a64
082034e8 +0x102:  mov    %ebx,0xc(%esp)
082034ec +0x106:  mov    -0xc(%ebp),%edx
082034ef +0x109:  mov    %edx,0x8(%esp)
082034f3 +0x10d:  mov    -0x10(%ebp),%edx
082034f6 +0x110:  mov    %edx,0x4(%esp)
082034fa +0x114:  mov    %eax,(%esp)
082034fd +0x117:  call   0860c86c <_ZN17StatisticsNatType15IncreaseNatTypeEiih>  ; StatisticsNatType::IncreaseNatType(int, int, unsigned char)
08203502 +0x11c:  mov    $0x0,%eax
08203507 +0x121:  add    $0x24,%esp
0820350a +0x124:  pop    %ebx
0820350b +0x125:  pop    %ebp
0820350c +0x126:  ret
0820350d +0x127:  nop
```

## 反编译 C

```c
// Dispatcher_PeerConnectResult::dispatch_sig @ 0x82033e6

/* Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_PeerConnectResult::dispatch_sig
          (Dispatcher_PeerConnectResult *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  uchar uVar2;
  char cVar3;
  undefined4 uVar4;
  GameWorld *pGVar5;
  StatisticsNatType *this_00;
  ushort local_1c;
  uchar local_19;
  int local_18;
  int local_14;
  int local_10;
  
  local_19 = '\0';
  local_1c = 0;
  cVar3 = PacketBuf::get_byte(param_2,&local_19);
  if (cVar3 == '\x01') {
    cVar3 = PacketBuf::get_short(param_2,(short *)&local_1c);
    uVar1 = local_1c;
    if (cVar3 == '\x01') {
      pGVar5 = (GameWorld *)G_GameWorld();
      local_18 = GameWorld::find_from_world(pGVar5,uVar1);
      if (local_18 == 0) {
        uVar4 = 0;
      }
      else {
        cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(param_1 + 0xe0));
        local_14 = (int)cVar3;
        cVar3 = CNetwork<4096,450000>::get_nat_type((CNetwork<4096,450000> *)(local_18 + 0xe0));
        uVar2 = local_19;
        local_10 = (int)cVar3;
        pGVar5 = (GameWorld *)G_GameWorld();
        this_00 = (StatisticsNatType *)GameWorld::GetStatisticsNatType(pGVar5);
        StatisticsNatType::IncreaseNatType(this_00,local_14,local_10,uVar2);
        uVar4 = 0;
      }
    }
    else {
      uVar4 = LineFunc(0x9a1f,
                       "virtual int Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  else {
    uVar4 = LineFunc(0x9a1c,
                     "virtual int Dispatcher_PeerConnectResult::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  return uVar4;
}
```
