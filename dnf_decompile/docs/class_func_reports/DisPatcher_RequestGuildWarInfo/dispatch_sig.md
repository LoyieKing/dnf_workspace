# dispatch_sig

`_ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_RequestGuildWarInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_RequestGuildWarInfo` | `0x0820439a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820439a  _ZN30DisPatcher_RequestGuildWarInfo12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_RequestGuildWarInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820439a, 0x08204457]
0820439a +0x00:  push   %ebp
0820439b +0x01:  mov    %esp,%ebp
0820439d +0x03:  push   %ebx
0820439e +0x04:  sub    $0x174,%esp
082043a4 +0x0a:  mov    0xc(%ebp),%eax
082043a7 +0x0d:  mov    %eax,(%esp)
082043aa +0x10:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082043af +0x15:  cmp    $0x1,%eax
082043b2 +0x18:  jle    082043c3 <+0x29>
082043b4 +0x1a:  mov    0xc(%ebp),%eax
082043b7 +0x1d:  mov    %eax,(%esp)
082043ba +0x20:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082043bf +0x25:  test   %eax,%eax
082043c1 +0x27:  jne    082043ca <+0x30>
082043c3 +0x29:  mov    $0x1,%eax
082043c8 +0x2e:  jmp    082043cf <+0x35>
082043ca +0x30:  mov    $0x0,%eax
082043cf +0x35:  test   %al,%al
082043d1 +0x37:  je     082043da <+0x40>
082043d3 +0x39:  mov    $0x0,%eax
082043d8 +0x3e:  jmp    0820444e <+0xb4>
082043da +0x40:  lea    -0x164(%ebp),%eax
082043e0 +0x46:  mov    %eax,(%esp)
082043e3 +0x49:  call   0822badc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1186>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1186
082043e8 +0x4e:  mov    0xc(%ebp),%eax
082043eb +0x51:  mov    %eax,(%esp)
082043ee +0x54:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082043f3 +0x59:  mov    %eax,-0x15a(%ebp)
082043f9 +0x5f:  movl   $0xffffffff,0x4(%esp)
08204401 +0x67:  mov    0xc(%ebp),%eax
08204404 +0x6a:  mov    %eax,(%esp)
08204407 +0x6d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0820440c +0x72:  mov    %eax,-0x156(%ebp)
08204412 +0x78:  lea    -0x164(%ebp),%ebx
08204418 +0x7e:  mov    0xc(%ebp),%eax
0820441b +0x81:  mov    %eax,(%esp)
0820441e +0x84:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08204423 +0x89:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08204429 +0x8f:  mov    %eax,0x4(%esp)
0820442d +0x93:  mov    %edx,(%esp)
08204430 +0x96:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08204435 +0x9b:  movl   $0x15c,0x8(%esp)
0820443d +0xa3:  mov    %ebx,0x4(%esp)
08204441 +0xa7:  mov    %eax,(%esp)
08204444 +0xaa:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
08204449 +0xaf:  mov    $0x0,%eax
0820444e +0xb4:  add    $0x174,%esp
08204454 +0xba:  pop    %ebx
08204455 +0xbb:  pop    %ebp
08204456 +0xbc:  ret
08204457 +0xbd:  nop
```

## 反编译 C

```c
// DisPatcher_RequestGuildWarInfo::dispatch_sig @ 0x820439a

/* DisPatcher_RequestGuildWarInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_RequestGuildWarInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CGuildServerProxy *this;
  Packet_Notice_Guild_War_Info local_168 [10];
  undefined4 local_15e;
  undefined4 local_15a;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 2) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Packet_Notice_Guild_War_Info::Packet_Notice_Guild_War_Info(local_168);
    local_15e = CUser::GetUID((CUser *)param_2);
    local_15a = CUser::get_charac_no((CUser *)param_2,-1);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::SendPacket(this,(char *)local_168,0x15c);
  }
  return 0;
}
```
