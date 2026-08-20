# process

`_ZN27Dispatcher_RefreshGuildInfo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RefreshGuildInfo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RefreshGuildInfo` | `0x081d4886` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d4886  _ZN27Dispatcher_RefreshGuildInfo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RefreshGuildInfo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d4886, 0x081d491f]
081d4886 +0x00:  push   %ebp
081d4887 +0x01:  mov    %esp,%ebp
081d4889 +0x03:  push   %esi
081d488a +0x04:  push   %ebx
081d488b +0x05:  sub    $0x10,%esp
081d488e +0x08:  mov    0xc(%ebp),%eax
081d4891 +0x0b:  mov    %eax,(%esp)
081d4894 +0x0e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d4899 +0x13:  cmp    $0x2,%eax
081d489c +0x16:  setle  %al
081d489f +0x19:  test   %al,%al
081d48a1 +0x1b:  je     081d48aa <+0x24>
081d48a3 +0x1d:  mov    $0x0,%eax
081d48a8 +0x22:  jmp    081d4919 <+0x93>
081d48aa +0x24:  mov    0xc(%ebp),%eax
081d48ad +0x27:  mov    %eax,(%esp)
081d48b0 +0x2a:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d48b5 +0x2f:  test   %eax,%eax
081d48b7 +0x31:  sete   %al
081d48ba +0x34:  test   %al,%al
081d48bc +0x36:  je     081d48c5 <+0x3f>
081d48be +0x38:  mov    $0x0,%eax
081d48c3 +0x3d:  jmp    081d4919 <+0x93>
081d48c5 +0x3f:  mov    0xc(%ebp),%eax
081d48c8 +0x42:  mov    %eax,(%esp)
081d48cb +0x45:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d48d0 +0x4a:  mov    %eax,%ebx
081d48d2 +0x4c:  movl   $0xffffffff,0x4(%esp)
081d48da +0x54:  mov    0xc(%ebp),%eax
081d48dd +0x57:  mov    %eax,(%esp)
081d48e0 +0x5a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081d48e5 +0x5f:  mov    %eax,%esi
081d48e7 +0x61:  mov    0xc(%ebp),%eax
081d48ea +0x64:  mov    %eax,(%esp)
081d48ed +0x67:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d48f2 +0x6c:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d48f8 +0x72:  mov    %eax,0x4(%esp)
081d48fc +0x76:  mov    %edx,(%esp)
081d48ff +0x79:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d4904 +0x7e:  mov    %ebx,0x8(%esp)
081d4908 +0x82:  mov    %esi,0x4(%esp)
081d490c +0x86:  mov    %eax,(%esp)
081d490f +0x89:  call   0846f16c <_ZN17CGuildServerProxy20SendRefreshGuildInfoEjj>  ; CGuildServerProxy::SendRefreshGuildInfo(unsigned int, unsigned int)
081d4914 +0x8e:  mov    $0x0,%eax
081d4919 +0x93:  add    $0x10,%esp
081d491c +0x96:  pop    %ebx
081d491d +0x97:  pop    %esi
081d491e +0x98:  pop    %ebp
081d491f +0x99:  ret
```

## 反编译 C

```c
// Dispatcher_RefreshGuildInfo::process @ 0x81d4886

/* Dispatcher_RefreshGuildInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_RefreshGuildInfo::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2), iVar1 != 0)) {
    uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::SendRefreshGuildInfo(this,uVar3,uVar2);
  }
  return 0;
}
```
