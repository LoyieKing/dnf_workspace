# dispatch_sig

`_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthReq` | `0x0820a2c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820a2c4  _ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820a2c4, 0x0820a42b]
0820a2c4 +0x000:  push   %ebp
0820a2c5 +0x001:  mov    %esp,%ebp
0820a2c7 +0x003:  sub    $0x18,%esp
0820a2ca +0x006:  mov    0xc(%ebp),%eax
0820a2cd +0x009:  mov    %eax,(%esp)
0820a2d0 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820a2d5 +0x011:  cmp    $0x2,%eax
0820a2d8 +0x014:  setle  %al
0820a2db +0x017:  test   %al,%al
0820a2dd +0x019:  je     0820a308 <+0x44>
0820a2df +0x01b:  movl   $0x0,0xc(%esp)
0820a2e7 +0x023:  movl   $0x0,0x8(%esp)
0820a2ef +0x02b:  movl   $&_ZZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a2f7 +0x033:  movl   $0xa5fd,(%esp)
0820a2fe +0x03a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a303 +0x03f:  jmp    0820a429 <+0x165>
0820a308 +0x044:  mov    0xc(%ebp),%eax
0820a30b +0x047:  mov    %eax,(%esp)
0820a30e +0x04a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a313 +0x04f:  mov    %eax,(%esp)
0820a316 +0x052:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a31b +0x057:  test   %al,%al
0820a31d +0x059:  jne    0820a336 <+0x72>
0820a31f +0x05b:  mov    0xc(%ebp),%eax
0820a322 +0x05e:  mov    %eax,(%esp)
0820a325 +0x061:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a32a +0x066:  mov    %eax,(%esp)
0820a32d +0x069:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
0820a332 +0x06e:  test   %al,%al
0820a334 +0x070:  je     0820a33d <+0x79>
0820a336 +0x072:  mov    $0x1,%eax
0820a33b +0x077:  jmp    0820a342 <+0x7e>
0820a33d +0x079:  mov    $0x0,%eax
0820a342 +0x07e:  test   %al,%al
0820a344 +0x080:  je     0820a405 <+0x141>
0820a34a +0x086:  mov    0xc(%ebp),%eax
0820a34d +0x089:  mov    %eax,(%esp)
0820a350 +0x08c:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a355 +0x091:  mov    %eax,(%esp)
0820a358 +0x094:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
0820a35d +0x099:  test   %al,%al
0820a35f +0x09b:  je     0820a3a3 <+0xdf>
0820a361 +0x09d:  mov    0xc(%ebp),%eax
0820a364 +0x0a0:  mov    %eax,(%esp)
0820a367 +0x0a3:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
0820a36c +0x0a8:  mov    %eax,(%esp)
0820a36f +0x0ab:  call   0822ef26 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45d0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45d0
0820a374 +0x0b0:  cmp    $0x2,%eax
0820a377 +0x0b3:  seta   %al
0820a37a +0x0b6:  test   %al,%al
0820a37c +0x0b8:  je     0820a3e2 <+0x11e>
0820a37e +0x0ba:  movl   $0x7a,0x8(%esp)
0820a386 +0x0c2:  movl   $0xa6,0x4(%esp)
0820a38e +0x0ca:  mov    0xc(%ebp),%eax
0820a391 +0x0cd:  mov    %eax,(%esp)
0820a394 +0x0d0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820a399 +0x0d5:  mov    $0x0,%eax
0820a39e +0x0da:  jmp    0820a429 <+0x165>
0820a3a3 +0x0df:  mov    0xc(%ebp),%eax
0820a3a6 +0x0e2:  mov    %eax,(%esp)
0820a3a9 +0x0e5:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0820a3ae +0x0ea:  mov    %eax,(%esp)
0820a3b1 +0x0ed:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
0820a3b6 +0x0f2:  cmp    $0x2,%eax
0820a3b9 +0x0f5:  setg   %al
0820a3bc +0x0f8:  test   %al,%al
0820a3be +0x0fa:  je     0820a3e2 <+0x11e>
0820a3c0 +0x0fc:  movl   $0x88,0x8(%esp)
0820a3c8 +0x104:  movl   $0xa6,0x4(%esp)
0820a3d0 +0x10c:  mov    0xc(%ebp),%eax
0820a3d3 +0x10f:  mov    %eax,(%esp)
0820a3d6 +0x112:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820a3db +0x117:  mov    $0x0,%eax
0820a3e0 +0x11c:  jmp    0820a429 <+0x165>
0820a3e2 +0x11e:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0820a3e7 +0x123:  movl   $0x0,0x8(%esp)
0820a3ef +0x12b:  mov    0xc(%ebp),%edx
0820a3f2 +0x12e:  mov    %edx,0x4(%esp)
0820a3f6 +0x132:  mov    %eax,(%esp)
0820a3f9 +0x135:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0820a3fe +0x13a:  mov    $0x0,%eax
0820a403 +0x13f:  jmp    0820a429 <+0x165>
0820a405 +0x141:  movl   $0x0,0xc(%esp)
0820a40d +0x149:  movl   $0x0,0x8(%esp)
0820a415 +0x151:  movl   $&_ZZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820a41d +0x159:  movl   $0xa625,(%esp)
0820a424 +0x160:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820a429 +0x165:  leave
0820a42a +0x166:  ret
0820a42b +0x167:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthReq::dispatch_sig @ 0x820a2c4

/* Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CSecurityCard *pCVar5;
  CPad *pCVar6;
  uint uVar7;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0xa5fd,
                     "virtual int Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar4;
  }
  pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
  cVar2 = WongWork::CSecurityCard::isActivate(pCVar5);
  if (cVar2 == '\0') {
    pCVar6 = (CPad *)CUser::getPad((CUser *)param_2);
    cVar2 = Sanicova::CPad::isActivate(pCVar6);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0820a342;
    }
  }
  bVar1 = true;
LAB_0820a342:
  if (bVar1) {
    pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    cVar2 = WongWork::CSecurityCard::isActivate(pCVar5);
    if (cVar2 == '\0') {
      pCVar6 = (CPad *)CUser::getPad((CUser *)param_2);
      iVar3 = Sanicova::CPad::getFailCnt(pCVar6);
      if (2 < iVar3) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xa6,0x88);
        return 0;
      }
    }
    else {
      pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      uVar7 = WongWork::CSecurityCard::getFailCnt(pCVar5);
      if (2 < uVar7) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xa6,0x7a);
        return 0;
      }
    }
    CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0);
    uVar4 = 0;
  }
  else {
    uVar4 = LineFunc(0xa625,
                     "virtual int Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  return uVar4;
}
```
