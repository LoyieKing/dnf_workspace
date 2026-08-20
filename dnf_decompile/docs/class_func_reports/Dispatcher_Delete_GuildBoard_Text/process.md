# process

`_ZN33Dispatcher_Delete_GuildBoard_Text7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Delete_GuildBoard_Text::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Delete_GuildBoard_Text` | `0x081d33a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d33a0  _ZN33Dispatcher_Delete_GuildBoard_Text7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Delete_GuildBoard_Text::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d33a0, 0x081d3415]
081d33a0 +0x00:  push   %ebp
081d33a1 +0x01:  mov    %esp,%ebp
081d33a3 +0x03:  push   %edi
081d33a4 +0x04:  push   %esi
081d33a5 +0x05:  push   %ebx
081d33a6 +0x06:  sub    $0x2c,%esp
081d33a9 +0x09:  mov    0x14(%ebp),%eax
081d33ac +0x0c:  mov    %eax,-0x20(%ebp)
081d33af +0x0f:  mov    0x10(%ebp),%eax
081d33b2 +0x12:  mov    %eax,-0x1c(%ebp)
081d33b5 +0x15:  mov    0xc(%ebp),%eax
081d33b8 +0x18:  mov    %eax,(%esp)
081d33bb +0x1b:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d33c0 +0x20:  mov    %eax,%esi
081d33c2 +0x22:  mov    0xc(%ebp),%eax
081d33c5 +0x25:  mov    %eax,(%esp)
081d33c8 +0x28:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d33cd +0x2d:  mov    %eax,%ebx
081d33cf +0x2f:  mov    -0x1c(%ebp),%eax
081d33d2 +0x32:  mov    0x89(%eax),%edi
081d33d8 +0x38:  mov    0xc(%ebp),%eax
081d33db +0x3b:  mov    %eax,(%esp)
081d33de +0x3e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d33e3 +0x43:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d33e9 +0x49:  mov    %eax,0x4(%esp)
081d33ed +0x4d:  mov    %edx,(%esp)
081d33f0 +0x50:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d33f5 +0x55:  mov    %esi,0xc(%esp)
081d33f9 +0x59:  mov    %ebx,0x8(%esp)
081d33fd +0x5d:  mov    %edi,0x4(%esp)
081d3401 +0x61:  mov    %eax,(%esp)
081d3404 +0x64:  call   0846f0b0 <_ZN17CGuildServerProxy20SendGuildBoardDeleteEjjj>  ; CGuildServerProxy::SendGuildBoardDelete(unsigned int, unsigned int, unsigned int)
081d3409 +0x69:  mov    $0x0,%eax
081d340e +0x6e:  add    $0x2c,%esp
081d3411 +0x71:  pop    %ebx
081d3412 +0x72:  pop    %esi
081d3413 +0x73:  pop    %edi
081d3414 +0x74:  pop    %ebp
081d3415 +0x75:  ret
```

## 反编译 C

```c
// Dispatcher_Delete_GuildBoard_Text::process @ 0x81d33a0

/* Dispatcher_Delete_GuildBoard_Text::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Delete_GuildBoard_Text::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  
  uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  uVar1 = *(uint *)(param_3 + 0x89);
  uVar4 = CUser::GetServerGroup((CUser *)param_2);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::SendGuildBoardDelete(this,uVar1,uVar3,uVar2);
  return 0;
}
```
