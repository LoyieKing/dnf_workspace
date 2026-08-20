# process

`_ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser`

`Dispatcher_SecurityCardAuthCancel::process(CUser*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthCancel` | `0x0820a580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820a580  _ZN33Dispatcher_SecurityCardAuthCancel7processEP5CUser
#           Dispatcher_SecurityCardAuthCancel::process(CUser*)
# range [0x0820a580, 0x0820a6bb]
0820a580 +0x000:  push   %ebp
0820a581 +0x001:  mov    %esp,%ebp
0820a583 +0x003:  push   %esi
0820a584 +0x004:  push   %ebx
0820a585 +0x005:  sub    $0x10,%esp
0820a588 +0x008:  mov    0x8(%ebp),%eax
0820a58b +0x00b:  mov    %eax,(%esp)
0820a58e +0x00e:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a593 +0x013:  mov    %eax,(%esp)
0820a596 +0x016:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a59b +0x01b:  test   %al,%al
0820a59d +0x01d:  je     0820a614 <+0x94>
0820a59f +0x01f:  mov    0x8(%ebp),%eax
0820a5a2 +0x022:  mov    %eax,(%esp)
0820a5a5 +0x025:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a5aa +0x02a:  movl   $0x0,0x4(%esp)
0820a5b2 +0x032:  mov    %eax,(%esp)
0820a5b5 +0x035:  call   0822ef64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x460e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x460e
0820a5ba +0x03a:  mov    0x8(%ebp),%eax
0820a5bd +0x03d:  mov    %eax,(%esp)
0820a5c0 +0x040:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a5c5 +0x045:  mov    %eax,(%esp)
0820a5c8 +0x048:  call   0822ef32 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45dc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45dc
0820a5cd +0x04d:  mov    0x8(%ebp),%eax
0820a5d0 +0x050:  mov    %eax,(%esp)
0820a5d3 +0x053:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a5d8 +0x058:  mov    %eax,(%esp)
0820a5db +0x05b:  call   0822ef4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45f6
0820a5e0 +0x060:  mov    %eax,%ebx
0820a5e2 +0x062:  mov    0x8(%ebp),%eax
0820a5e5 +0x065:  mov    %eax,(%esp)
0820a5e8 +0x068:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820a5ed +0x06d:  mov    %ebx,0x4(%esp)
0820a5f1 +0x071:  mov    %eax,(%esp)
0820a5f4 +0x074:  call   0842c112 <_ZN30DB_SecurityCardUpdateCancelCnt11makeRequestEjj>  ; DB_SecurityCardUpdateCancelCnt::makeRequest(unsigned int, unsigned int)
0820a5f9 +0x079:  mov    0x8(%ebp),%eax
0820a5fc +0x07c:  mov    %eax,(%esp)
0820a5ff +0x07f:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a604 +0x084:  mov    %eax,(%esp)
0820a607 +0x087:  call   0822ef4c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45f6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45f6
0820a60c +0x08c:  cmp    $0x9,%eax
0820a60f +0x08f:  jmp    0820a6b0 <+0x130>
0820a614 +0x094:  mov    0x8(%ebp),%eax
0820a617 +0x097:  mov    %eax,(%esp)
0820a61a +0x09a:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a61f +0x09f:  mov    %eax,(%esp)
0820a622 +0x0a2:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
0820a627 +0x0a7:  test   %al,%al
0820a629 +0x0a9:  je     0820a6b0 <+0x130>
0820a62f +0x0af:  mov    0x8(%ebp),%eax
0820a632 +0x0b2:  mov    %eax,(%esp)
0820a635 +0x0b5:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a63a +0x0ba:  movl   $0x0,0x4(%esp)
0820a642 +0x0c2:  mov    %eax,(%esp)
0820a645 +0x0c5:  call   0822efcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4676>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4676
0820a64a +0x0ca:  mov    0x8(%ebp),%eax
0820a64d +0x0cd:  mov    %eax,(%esp)
0820a650 +0x0d0:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a655 +0x0d5:  mov    %eax,(%esp)
0820a658 +0x0d8:  call   0822ef9a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4644>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4644
0820a65d +0x0dd:  mov    0x8(%ebp),%eax
0820a660 +0x0e0:  mov    %eax,(%esp)
0820a663 +0x0e3:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
0820a668 +0x0e8:  mov    %eax,%ebx
0820a66a +0x0ea:  mov    0x8(%ebp),%eax
0820a66d +0x0ed:  mov    %eax,(%esp)
0820a670 +0x0f0:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a675 +0x0f5:  mov    %eax,(%esp)
0820a678 +0x0f8:  call   0822efb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x465e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x465e
0820a67d +0x0fd:  mov    %eax,%esi
0820a67f +0x0ff:  mov    0x8(%ebp),%eax
0820a682 +0x102:  mov    %eax,(%esp)
0820a685 +0x105:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820a68a +0x10a:  mov    %ebx,0x8(%esp)
0820a68e +0x10e:  mov    %esi,0x4(%esp)
0820a692 +0x112:  mov    %eax,(%esp)
0820a695 +0x115:  call   0842403a <_ZN25DB_PassPadUpdateCancelCnt11makeRequestEjjPc>  ; DB_PassPadUpdateCancelCnt::makeRequest(unsigned int, unsigned int, char*)
0820a69a +0x11a:  mov    0x8(%ebp),%eax
0820a69d +0x11d:  mov    %eax,(%esp)
0820a6a0 +0x120:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a6a5 +0x125:  mov    %eax,(%esp)
0820a6a8 +0x128:  call   0822efb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x465e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x465e
0820a6ad +0x12d:  cmp    $0x9,%eax
0820a6b0 +0x130:  mov    $0x1,%eax
0820a6b5 +0x135:  add    $0x10,%esp
0820a6b8 +0x138:  pop    %ebx
0820a6b9 +0x139:  pop    %esi
0820a6ba +0x13a:  pop    %ebp
0820a6bb +0x13b:  ret
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthCancel::process @ 0x820a580

/* Dispatcher_SecurityCardAuthCancel::process(CUser*) */

undefined4 Dispatcher_SecurityCardAuthCancel::process(CUser *param_1)

{
  char cVar1;
  CSecurityCard *pCVar2;
  uint uVar3;
  uint uVar4;
  CPad *pCVar5;
  char *pcVar6;
  
  pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar2);
  if (cVar1 == '\0') {
    pCVar5 = (CPad *)CUser::getPad(param_1);
    cVar1 = Sanicova::CPad::isActivate(pCVar5);
    if (cVar1 != '\0') {
      pCVar5 = (CPad *)CUser::getPad(param_1);
      Sanicova::CPad::setRequestState(pCVar5,0);
      pCVar5 = (CPad *)CUser::getPad(param_1);
      Sanicova::CPad::incCancelCnt(pCVar5);
      pcVar6 = (char *)CUser::getWebAddress(param_1);
      pCVar5 = (CPad *)CUser::getPad(param_1);
      uVar3 = Sanicova::CPad::getCancelCnt(pCVar5);
      uVar4 = CUser::get_acc_id(param_1);
      DB_PassPadUpdateCancelCnt::makeRequest(uVar4,uVar3,pcVar6);
      pCVar5 = (CPad *)CUser::getPad(param_1);
      Sanicova::CPad::getCancelCnt(pCVar5);
    }
  }
  else {
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::setRequestState(pCVar2,0);
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::incCancelCnt(pCVar2);
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar3 = WongWork::CSecurityCard::getCancelCnt(pCVar2);
    uVar4 = CUser::get_acc_id(param_1);
    DB_SecurityCardUpdateCancelCnt::makeRequest(uVar4,uVar3);
    pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    WongWork::CSecurityCard::getCancelCnt(pCVar2);
  }
  return 1;
}
```
