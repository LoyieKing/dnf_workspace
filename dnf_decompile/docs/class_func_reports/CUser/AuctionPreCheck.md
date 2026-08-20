# AuctionPreCheck

`_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE`

`CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08680a96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08680a96  _ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE
#           CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE)
# range [0x08680a96, 0x08680bd1]
08680a96 +0x000:  push   %ebp
08680a97 +0x001:  mov    %esp,%ebp
08680a99 +0x003:  sub    $0x28,%esp
08680a9c +0x006:  cmpl   $0x1,0x10(%ebp)
08680aa0 +0x00a:  jne    08680abd <+0x27>
08680aa2 +0x00c:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
08680aa7 +0x011:  mov    %eax,(%esp)
08680aaa +0x014:  call   08234f54 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5fe
08680aaf +0x019:  xor    $0x1,%eax
08680ab2 +0x01c:  test   %al,%al
08680ab4 +0x01e:  je     08680abd <+0x27>
08680ab6 +0x020:  mov    $0x1,%eax
08680abb +0x025:  jmp    08680ac2 <+0x2c>
08680abd +0x027:  mov    $0x0,%eax
08680ac2 +0x02c:  test   %al,%al
08680ac4 +0x02e:  je     08680af1 <+0x5b>
08680ac6 +0x030:  mov    0x10(%ebp),%eax
08680ac9 +0x033:  mov    %eax,0xc(%esp)
08680acd +0x037:  movl   $0x8c,0x8(%esp)
08680ad5 +0x03f:  mov    0xc(%ebp),%eax
08680ad8 +0x042:  mov    %eax,0x4(%esp)
08680adc +0x046:  mov    0x8(%ebp),%eax
08680adf +0x049:  mov    %eax,(%esp)
08680ae2 +0x04c:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08680ae7 +0x051:  mov    $0x0,%eax
08680aec +0x056:  jmp    08680bd0 <+0x13a>
08680af1 +0x05b:  cmpl   $0x0,0x10(%ebp)
08680af5 +0x05f:  jne    08680b12 <+0x7c>
08680af7 +0x061:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
08680afc +0x066:  mov    %eax,(%esp)
08680aff +0x069:  call   08234f44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa5ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa5ee
08680b04 +0x06e:  xor    $0x1,%eax
08680b07 +0x071:  test   %al,%al
08680b09 +0x073:  je     08680b12 <+0x7c>
08680b0b +0x075:  mov    $0x1,%eax
08680b10 +0x07a:  jmp    08680b17 <+0x81>
08680b12 +0x07c:  mov    $0x0,%eax
08680b17 +0x081:  test   %al,%al
08680b19 +0x083:  je     08680b46 <+0xb0>
08680b1b +0x085:  mov    0x10(%ebp),%eax
08680b1e +0x088:  mov    %eax,0xc(%esp)
08680b22 +0x08c:  movl   $0x8c,0x8(%esp)
08680b2a +0x094:  mov    0xc(%ebp),%eax
08680b2d +0x097:  mov    %eax,0x4(%esp)
08680b31 +0x09b:  mov    0x8(%ebp),%eax
08680b34 +0x09e:  mov    %eax,(%esp)
08680b37 +0x0a1:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08680b3c +0x0a6:  mov    $0x0,%eax
08680b41 +0x0ab:  jmp    08680bd0 <+0x13a>
08680b46 +0x0b0:  mov    0x8(%ebp),%eax
08680b49 +0x0b3:  mov    %eax,(%esp)
08680b4c +0x0b6:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08680b51 +0x0bb:  cmp    $0x2,%eax
08680b54 +0x0be:  jle    08680b65 <+0xcf>
08680b56 +0x0c0:  mov    0x8(%ebp),%eax
08680b59 +0x0c3:  mov    %eax,(%esp)
08680b5c +0x0c6:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08680b61 +0x0cb:  test   %eax,%eax
08680b63 +0x0cd:  jne    08680b6c <+0xd6>
08680b65 +0x0cf:  mov    $0x1,%eax
08680b6a +0x0d4:  jmp    08680b71 <+0xdb>
08680b6c +0x0d6:  mov    $0x0,%eax
08680b71 +0x0db:  test   %al,%al
08680b73 +0x0dd:  je     08680b7c <+0xe6>
08680b75 +0x0df:  mov    $0x8151,%eax
08680b7a +0x0e4:  jmp    08680bd0 <+0x13a>
08680b7c +0x0e6:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08680b81 +0x0eb:  movl   $0x35,0x8(%esp)
08680b89 +0x0f3:  mov    0x8(%ebp),%edx
08680b8c +0x0f6:  mov    %edx,0x4(%esp)
08680b90 +0x0fa:  mov    %eax,(%esp)
08680b93 +0x0fd:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08680b98 +0x102:  mov    %eax,-0xc(%ebp)
08680b9b +0x105:  cmpl   $0x0,-0xc(%ebp)
08680b9f +0x109:  je     08680bcb <+0x135>
08680ba1 +0x10b:  mov    -0xc(%ebp),%eax
08680ba4 +0x10e:  movzbl %al,%eax
08680ba7 +0x111:  mov    0x10(%ebp),%edx
08680baa +0x114:  mov    %edx,0xc(%esp)
08680bae +0x118:  mov    %eax,0x8(%esp)
08680bb2 +0x11c:  mov    0xc(%ebp),%eax
08680bb5 +0x11f:  mov    %eax,0x4(%esp)
08680bb9 +0x123:  mov    0x8(%ebp),%eax
08680bbc +0x126:  mov    %eax,(%esp)
08680bbf +0x129:  call   0867c022 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh8PAY_TYPE>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PAY_TYPE)
08680bc4 +0x12e:  mov    $0x0,%eax
08680bc9 +0x133:  jmp    08680bd0 <+0x13a>
08680bcb +0x135:  mov    $0xffffffff,%eax
08680bd0 +0x13a:  leave
08680bd1 +0x13b:  ret
```

## 反编译 C

```c
// CUser::AuctionPreCheck @ 0x8680a96

/* CUser::AuctionPreCheck(ENUM_CMDPACKET, PAY_TYPE) */

undefined4 __thiscall CUser::AuctionPreCheck(CUser *this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((param_3 == 1) &&
     (cVar2 = CCeraAuctionServerProxy::IsRunning(GlobalData::s_cera_auction_proxy), cVar2 != '\x01')
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    SendCmdErrorPacket(this,param_2,0x8c,param_3);
    return 0;
  }
  if ((param_3 == 0) &&
     (cVar2 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar3 = get_state(this);
    if ((iVar3 < 3) || (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this), iVar3 == 0)
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 0x8151;
    }
    else {
      uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,this,0x35);
      if (uVar5 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        SendCmdErrorPacket(this,param_2,uVar5 & 0xff,param_3);
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  SendCmdErrorPacket(this,param_2,0x8c,param_3);
  return 0;
}
```
