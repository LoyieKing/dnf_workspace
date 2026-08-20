# dispatch_sig

`_ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CallGuildAllMembers::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildAllMembers` | `0x081ffb1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ffb1a  _ZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CallGuildAllMembers::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ffb1a, 0x081ffbdd]
081ffb1a +0x00:  push   %ebp
081ffb1b +0x01:  mov    %esp,%ebp
081ffb1d +0x03:  push   %esi
081ffb1e +0x04:  push   %ebx
081ffb1f +0x05:  sub    $0x10,%esp
081ffb22 +0x08:  mov    0xc(%ebp),%eax
081ffb25 +0x0b:  mov    %eax,(%esp)
081ffb28 +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ffb2d +0x13:  cmp    $0x2,%eax
081ffb30 +0x16:  jle    081ffb41 <+0x27>
081ffb32 +0x18:  mov    0xc(%ebp),%eax
081ffb35 +0x1b:  mov    %eax,(%esp)
081ffb38 +0x1e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ffb3d +0x23:  test   %eax,%eax
081ffb3f +0x25:  jne    081ffb48 <+0x2e>
081ffb41 +0x27:  mov    $0x1,%eax
081ffb46 +0x2c:  jmp    081ffb4d <+0x33>
081ffb48 +0x2e:  mov    $0x0,%eax
081ffb4d +0x33:  test   %al,%al
081ffb4f +0x35:  je     081ffb77 <+0x5d>
081ffb51 +0x37:  movl   $0x0,0xc(%esp)
081ffb59 +0x3f:  movl   $0x0,0x8(%esp)
081ffb61 +0x47:  movl   $&_ZZN30Dispatcher_CallGuildAllMembers12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ffb69 +0x4f:  movl   $0x93cd,(%esp)
081ffb70 +0x56:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ffb75 +0x5b:  jmp    081ffbd7 <+0xbd>
081ffb77 +0x5d:  mov    0xc(%ebp),%eax
081ffb7a +0x60:  mov    %eax,(%esp)
081ffb7d +0x63:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081ffb82 +0x68:  test   %eax,%eax
081ffb84 +0x6a:  setne  %al
081ffb87 +0x6d:  test   %al,%al
081ffb89 +0x6f:  je     081ffbd2 <+0xb8>
081ffb8b +0x71:  mov    0xc(%ebp),%eax
081ffb8e +0x74:  mov    %eax,(%esp)
081ffb91 +0x77:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081ffb96 +0x7c:  mov    %eax,%esi
081ffb98 +0x7e:  mov    0xc(%ebp),%eax
081ffb9b +0x81:  mov    %eax,(%esp)
081ffb9e +0x84:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081ffba3 +0x89:  mov    %eax,%ebx
081ffba5 +0x8b:  mov    0xc(%ebp),%eax
081ffba8 +0x8e:  mov    %eax,(%esp)
081ffbab +0x91:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081ffbb0 +0x96:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081ffbb6 +0x9c:  mov    %eax,0x4(%esp)
081ffbba +0xa0:  mov    %edx,(%esp)
081ffbbd +0xa3:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081ffbc2 +0xa8:  mov    %esi,0x8(%esp)
081ffbc6 +0xac:  mov    %ebx,0x4(%esp)
081ffbca +0xb0:  mov    %eax,(%esp)
081ffbcd +0xb3:  call   0846dd4e <_ZN17CGuildServerProxy29SendPacketCallGuildAllMembersEjj>  ; CGuildServerProxy::SendPacketCallGuildAllMembers(unsigned int, unsigned int)
081ffbd2 +0xb8:  mov    $0x0,%eax
081ffbd7 +0xbd:  add    $0x10,%esp
081ffbda +0xc0:  pop    %ebx
081ffbdb +0xc1:  pop    %esi
081ffbdc +0xc2:  pop    %ebp
081ffbdd +0xc3:  ret
```

## 反编译 C

```c
// Dispatcher_CallGuildAllMembers::dispatch_sig @ 0x81ffb1a

/* Dispatcher_CallGuildAllMembers::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildAllMembers::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  CGuildServerProxy *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081ffb4d;
    }
  }
  bVar1 = true;
LAB_081ffb4d:
  if (bVar1) {
    uVar3 = LineFunc(0x93cd,
                     "virtual int Dispatcher_CallGuildAllMembers::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar3 = CUser::GetServerGroup((CUser *)param_2);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3)
      ;
      CGuildServerProxy::SendPacketCallGuildAllMembers(this,uVar5,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
