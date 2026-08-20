# WorkPerTenMin

`_ZN5CUser13WorkPerTenMinEv`

`CUser::WorkPerTenMin()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08653196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08653196  _ZN5CUser13WorkPerTenMinEv
#           CUser::WorkPerTenMin()
# range [0x08653196, 0x0865326f]
08653196 +0x00:  push   %ebp
08653197 +0x01:  mov    %esp,%ebp
08653199 +0x03:  push   %ebx
0865319a +0x04:  sub    $0x24,%esp
0865319d +0x07:  mov    0x8(%ebp),%eax
086531a0 +0x0a:  mov    0x8cfc4(%eax),%eax
086531a6 +0x10:  cmp    $0x2,%eax
086531a9 +0x13:  jle    08653268 <+0xd2>
086531af +0x19:  mov    0x8(%ebp),%eax
086531b2 +0x1c:  mov    %eax,(%esp)
086531b5 +0x1f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086531ba +0x24:  test   %eax,%eax
086531bc +0x26:  sete   %al
086531bf +0x29:  test   %al,%al
086531c1 +0x2b:  je     0865321c <+0x86>
086531c3 +0x2d:  mov    0x8(%ebp),%eax
086531c6 +0x30:  mov    %eax,(%esp)
086531c9 +0x33:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086531ce +0x38:  movl   $0x0,0x4(%esp)
086531d6 +0x40:  mov    %eax,(%esp)
086531d9 +0x43:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
086531de +0x48:  mov    %eax,%ebx
086531e0 +0x4a:  movl   $0x5,0xc(%esp)
086531e8 +0x52:  movl   $0x1d71,0x8(%esp)
086531f0 +0x5a:  movl   $&_ZZN5CUser13WorkPerTenMinEvE19__PRETTY_FUNCTION__,0x4(%esp)
086531f8 +0x62:  lea    -0x18(%ebp),%eax
086531fb +0x65:  mov    %eax,(%esp)
086531fe +0x68:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08653203 +0x6d:  mov    %ebx,0x8(%esp)
08653207 +0x71:  movl   $"CUser::WorkPerTenMin() m_id(%s) character - m_selected is null",0x4(%esp)
0865320f +0x79:  lea    -0x18(%ebp),%eax
08653212 +0x7c:  mov    %eax,(%esp)
08653215 +0x7f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865321a +0x84:  jmp    08653269 <+0xd3>
0865321c +0x86:  mov    0x8(%ebp),%eax
0865321f +0x89:  mov    %eax,(%esp)
08653222 +0x8c:  call   0822f5c4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c6e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c6e
08653227 +0x91:  test   %eax,%eax
08653229 +0x93:  setne  %al
0865322c +0x96:  test   %al,%al
0865322e +0x98:  je     08653269 <+0xd3>
08653230 +0x9a:  mov    0x8(%ebp),%eax
08653233 +0x9d:  mov    %eax,(%esp)
08653236 +0xa0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0865323b +0xa5:  mov    %eax,%ebx
0865323d +0xa7:  mov    0x8(%ebp),%eax
08653240 +0xaa:  mov    %eax,(%esp)
08653243 +0xad:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08653248 +0xb2:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
0865324e +0xb8:  mov    %eax,0x4(%esp)
08653252 +0xbc:  mov    %edx,(%esp)
08653255 +0xbf:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0865325a +0xc4:  mov    %ebx,0x4(%esp)
0865325e +0xc8:  mov    %eax,(%esp)
08653261 +0xcb:  call   08471170 <_ZN19CMonitorServerProxy18SendNoticeCharLiveEj>  ; CMonitorServerProxy::SendNoticeCharLive(unsigned int)
08653266 +0xd0:  jmp    08653269 <+0xd3>
08653268 +0xd2:  nop
08653269 +0xd3:  add    $0x24,%esp
0865326c +0xd6:  pop    %ebx
0865326d +0xd7:  pop    %ebp
0865326e +0xd8:  ret
0865326f +0xd9:  nop
```

## 反编译 C

```c
// CUser::WorkPerTenMin @ 0x8653196

/* CUser::WorkPerTenMin() */

void __thiscall CUser::WorkPerTenMin(CUser *this)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  CMonitorServerProxy *this_00;
  cMyTrace local_1c [20];
  
  if (2 < *(int *)(this + 0x8cfc4)) {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (iVar1 == 0) {
      uVar2 = get_acc_id(this);
      uVar3 = NumberToString(uVar2,0);
      cMyTrace::cMyTrace(local_1c,"void CUser::WorkPerTenMin()",0x1d71,5);
      cMyTrace::operator()
                (local_1c,"CUser::WorkPerTenMin() m_id(%s) character - m_selected is null",uVar3);
    }
    else {
      iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)this);
      if (iVar1 != 0) {
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        uVar3 = GetServerGroup(this);
        this_00 = (CMonitorServerProxy *)
                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                            (GlobalData::s_monitor_proxy_mgr,uVar3);
        CMonitorServerProxy::SendNoticeCharLive(this_00,uVar2);
      }
    }
  }
  return;
}
```
