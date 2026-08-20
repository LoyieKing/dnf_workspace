# dispatch_sig

`_ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthCancel` | `0x0820a42c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820a42c  _ZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820a42c, 0x0820a57f]
0820a42c +0x000:  push   %ebp
0820a42d +0x001:  mov    %esp,%ebp
0820a42f +0x003:  sub    $0x18,%esp
0820a432 +0x006:  mov    0xc(%ebp),%eax
0820a435 +0x009:  mov    %eax,(%esp)
0820a438 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820a43d +0x011:  cmp    $0x1,%eax
0820a440 +0x014:  setle  %al
0820a443 +0x017:  test   %al,%al
0820a445 +0x019:  je     0820a470 <+0x44>
0820a447 +0x01b:  movl   $0x0,0xc(%esp)
0820a44f +0x023:  movl   $0x0,0x8(%esp)
0820a457 +0x02b:  movl   $&_ZZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a45f +0x033:  movl   $0xa62d,(%esp)
0820a466 +0x03a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a46b +0x03f:  jmp    0820a57d <+0x151>
0820a470 +0x044:  mov    0xc(%ebp),%eax
0820a473 +0x047:  mov    %eax,(%esp)
0820a476 +0x04a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a47b +0x04f:  mov    %eax,(%esp)
0820a47e +0x052:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a483 +0x057:  test   %al,%al
0820a485 +0x059:  je     0820a4e6 <+0xba>
0820a487 +0x05b:  mov    0xc(%ebp),%eax
0820a48a +0x05e:  mov    %eax,(%esp)
0820a48d +0x061:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a492 +0x066:  mov    %eax,(%esp)
0820a495 +0x069:  call   0822ef58 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4602>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4602
0820a49a +0x06e:  cmp    $0x1,%eax
0820a49d +0x071:  setne  %al
0820a4a0 +0x074:  test   %al,%al
0820a4a2 +0x076:  je     0820a4ae <+0x82>
0820a4a4 +0x078:  mov    $0x0,%eax
0820a4a9 +0x07d:  jmp    0820a57d <+0x151>
0820a4ae +0x082:  mov    0xc(%ebp),%eax
0820a4b1 +0x085:  mov    %eax,(%esp)
0820a4b4 +0x088:  call   0820a580 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser>  ; Dispatcher_SecurityCardAuthCancel::process(CUser*)
0820a4b9 +0x08d:  test   %eax,%eax
0820a4bb +0x08f:  sete   %al
0820a4be +0x092:  test   %al,%al
0820a4c0 +0x094:  je     0820a578 <+0x14c>
0820a4c6 +0x09a:  movl   $0x7d,0x8(%esp)
0820a4ce +0x0a2:  movl   $0xaf,0x4(%esp)
0820a4d6 +0x0aa:  mov    0xc(%ebp),%eax
0820a4d9 +0x0ad:  mov    %eax,(%esp)
0820a4dc +0x0b0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820a4e1 +0x0b5:  jmp    0820a578 <+0x14c>
0820a4e6 +0x0ba:  mov    0xc(%ebp),%eax
0820a4e9 +0x0bd:  mov    %eax,(%esp)
0820a4ec +0x0c0:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a4f1 +0x0c5:  mov    %eax,(%esp)
0820a4f4 +0x0c8:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
0820a4f9 +0x0cd:  test   %al,%al
0820a4fb +0x0cf:  je     0820a552 <+0x126>
0820a4fd +0x0d1:  mov    0xc(%ebp),%eax
0820a500 +0x0d4:  mov    %eax,(%esp)
0820a503 +0x0d7:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a508 +0x0dc:  mov    %eax,(%esp)
0820a50b +0x0df:  call   0822efc0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x466a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x466a
0820a510 +0x0e4:  cmp    $0x1,%eax
0820a513 +0x0e7:  setne  %al
0820a516 +0x0ea:  test   %al,%al
0820a518 +0x0ec:  je     0820a521 <+0xf5>
0820a51a +0x0ee:  mov    $0x0,%eax
0820a51f +0x0f3:  jmp    0820a57d <+0x151>
0820a521 +0x0f5:  mov    0xc(%ebp),%eax
0820a524 +0x0f8:  mov    %eax,(%esp)
0820a527 +0x0fb:  call   0820a580 <_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser>  ; Dispatcher_SecurityCardAuthCancel::process(CUser*)
0820a52c +0x100:  test   %eax,%eax
0820a52e +0x102:  sete   %al
0820a531 +0x105:  test   %al,%al
0820a533 +0x107:  je     0820a578 <+0x14c>
0820a535 +0x109:  movl   $0x8b,0x8(%esp)
0820a53d +0x111:  movl   $0xaf,0x4(%esp)
0820a545 +0x119:  mov    0xc(%ebp),%eax
0820a548 +0x11c:  mov    %eax,(%esp)
0820a54b +0x11f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820a550 +0x124:  jmp    0820a578 <+0x14c>
0820a552 +0x126:  movl   $0x0,0xc(%esp)
0820a55a +0x12e:  movl   $0x0,0x8(%esp)
0820a562 +0x136:  movl   $&_ZZN33Dispatcher_SecurityCardAuthCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a56a +0x13e:  movl   $0xa650,(%esp)
0820a571 +0x145:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a576 +0x14a:  jmp    0820a57d <+0x151>
0820a578 +0x14c:  mov    $0x0,%eax
0820a57d +0x151:  leave
0820a57e +0x152:  ret
0820a57f +0x153:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthCancel::dispatch_sig @ 0x820a42c

/* Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  CPad *pCVar5;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa62d,
                     "virtual int Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
  if (cVar1 == '\0') {
    pCVar5 = (CPad *)CUser::getPad((CUser *)param_2);
    cVar1 = Sanicova::CPad::isActivate(pCVar5);
    if (cVar1 == '\0') {
      uVar3 = LineFunc(0xa650,
                       "virtual int Dispatcher_SecurityCardAuthCancel::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar3;
    }
    pCVar5 = (CPad *)CUser::getPad((CUser *)param_2);
    iVar2 = Sanicova::CPad::getRequestState(pCVar5);
    if (iVar2 != 1) {
      return 0;
    }
    iVar2 = process((CUser *)param_2);
    if (iVar2 == 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xaf,0x8b);
    }
  }
  else {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    iVar2 = WongWork::CSecurityCard::getRequestState(pCVar4);
    if (iVar2 != 1) {
      return 0;
    }
    iVar2 = process((CUser *)param_2);
    if (iVar2 == 0) {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xaf,0x7d);
    }
  }
  return 0;
}
```
