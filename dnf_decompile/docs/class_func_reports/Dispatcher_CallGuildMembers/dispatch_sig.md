# dispatch_sig

`_ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CallGuildMembers::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildMembers` | `0x081ffa56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ffa56  _ZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CallGuildMembers::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ffa56, 0x081ffb19]
081ffa56 +0x00:  push   %ebp
081ffa57 +0x01:  mov    %esp,%ebp
081ffa59 +0x03:  push   %esi
081ffa5a +0x04:  push   %ebx
081ffa5b +0x05:  sub    $0x10,%esp
081ffa5e +0x08:  mov    0xc(%ebp),%eax
081ffa61 +0x0b:  mov    %eax,(%esp)
081ffa64 +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ffa69 +0x13:  cmp    $0x2,%eax
081ffa6c +0x16:  jle    081ffa7d <+0x27>
081ffa6e +0x18:  mov    0xc(%ebp),%eax
081ffa71 +0x1b:  mov    %eax,(%esp)
081ffa74 +0x1e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081ffa79 +0x23:  test   %eax,%eax
081ffa7b +0x25:  jne    081ffa84 <+0x2e>
081ffa7d +0x27:  mov    $0x1,%eax
081ffa82 +0x2c:  jmp    081ffa89 <+0x33>
081ffa84 +0x2e:  mov    $0x0,%eax
081ffa89 +0x33:  test   %al,%al
081ffa8b +0x35:  je     081ffab3 <+0x5d>
081ffa8d +0x37:  movl   $0x0,0xc(%esp)
081ffa95 +0x3f:  movl   $0x0,0x8(%esp)
081ffa9d +0x47:  movl   $&_ZZN27Dispatcher_CallGuildMembers12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ffaa5 +0x4f:  movl   $0x93c0,(%esp)
081ffaac +0x56:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ffab1 +0x5b:  jmp    081ffb13 <+0xbd>
081ffab3 +0x5d:  mov    0xc(%ebp),%eax
081ffab6 +0x60:  mov    %eax,(%esp)
081ffab9 +0x63:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081ffabe +0x68:  test   %eax,%eax
081ffac0 +0x6a:  setne  %al
081ffac3 +0x6d:  test   %al,%al
081ffac5 +0x6f:  je     081ffb0e <+0xb8>
081ffac7 +0x71:  mov    0xc(%ebp),%eax
081ffaca +0x74:  mov    %eax,(%esp)
081ffacd +0x77:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081ffad2 +0x7c:  mov    %eax,%esi
081ffad4 +0x7e:  mov    0xc(%ebp),%eax
081ffad7 +0x81:  mov    %eax,(%esp)
081ffada +0x84:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081ffadf +0x89:  mov    %eax,%ebx
081ffae1 +0x8b:  mov    0xc(%ebp),%eax
081ffae4 +0x8e:  mov    %eax,(%esp)
081ffae7 +0x91:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081ffaec +0x96:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081ffaf2 +0x9c:  mov    %eax,0x4(%esp)
081ffaf6 +0xa0:  mov    %edx,(%esp)
081ffaf9 +0xa3:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081ffafe +0xa8:  mov    %esi,0x8(%esp)
081ffb02 +0xac:  mov    %ebx,0x4(%esp)
081ffb06 +0xb0:  mov    %eax,(%esp)
081ffb09 +0xb3:  call   0846dd12 <_ZN17CGuildServerProxy26SendPacketCallGuildMembersEjj>  ; CGuildServerProxy::SendPacketCallGuildMembers(unsigned int, unsigned int)
081ffb0e +0xb8:  mov    $0x0,%eax
081ffb13 +0xbd:  add    $0x10,%esp
081ffb16 +0xc0:  pop    %ebx
081ffb17 +0xc1:  pop    %esi
081ffb18 +0xc2:  pop    %ebp
081ffb19 +0xc3:  ret
```

## 反编译 C

```c
// Dispatcher_CallGuildMembers::dispatch_sig @ 0x81ffa56

/* Dispatcher_CallGuildMembers::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildMembers::dispatch_sig(CUser *param_1,PacketBuf *param_2)

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
      goto LAB_081ffa89;
    }
  }
  bVar1 = true;
LAB_081ffa89:
  if (bVar1) {
    uVar3 = LineFunc(0x93c0,
                     "virtual int Dispatcher_CallGuildMembers::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
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
      CGuildServerProxy::SendPacketCallGuildMembers(this,uVar5,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}
```
