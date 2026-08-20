# process

`_ZN27Dispatcher_Open_Guild_Board7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Open_Guild_Board::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Open_Guild_Board` | `0x081d30d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d30d0  _ZN27Dispatcher_Open_Guild_Board7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Open_Guild_Board::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d30d0, 0x081d3149]
081d30d0 +0x00:  push   %ebp
081d30d1 +0x01:  mov    %esp,%ebp
081d30d3 +0x03:  push   %edi
081d30d4 +0x04:  push   %esi
081d30d5 +0x05:  push   %ebx
081d30d6 +0x06:  sub    $0x2c,%esp
081d30d9 +0x09:  mov    0x14(%ebp),%eax
081d30dc +0x0c:  mov    %eax,-0x20(%ebp)
081d30df +0x0f:  mov    0x10(%ebp),%eax
081d30e2 +0x12:  mov    %eax,-0x1c(%ebp)
081d30e5 +0x15:  mov    -0x1c(%ebp),%eax
081d30e8 +0x18:  movzbl 0xb2(%eax),%eax
081d30ef +0x1f:  movsbl %al,%edi
081d30f2 +0x22:  mov    0xc(%ebp),%eax
081d30f5 +0x25:  mov    %eax,(%esp)
081d30f8 +0x28:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d30fd +0x2d:  mov    %eax,%esi
081d30ff +0x2f:  mov    0xc(%ebp),%eax
081d3102 +0x32:  mov    %eax,(%esp)
081d3105 +0x35:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d310a +0x3a:  mov    %eax,%ebx
081d310c +0x3c:  mov    0xc(%ebp),%eax
081d310f +0x3f:  mov    %eax,(%esp)
081d3112 +0x42:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d3117 +0x47:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d311d +0x4d:  mov    %eax,0x4(%esp)
081d3121 +0x51:  mov    %edx,(%esp)
081d3124 +0x54:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d3129 +0x59:  mov    %edi,0xc(%esp)
081d312d +0x5d:  mov    %esi,0x8(%esp)
081d3131 +0x61:  mov    %ebx,0x4(%esp)
081d3135 +0x65:  mov    %eax,(%esp)
081d3138 +0x68:  call   0846efce <_ZN17CGuildServerProxy18SendGuildBoardOpenEjjc>  ; CGuildServerProxy::SendGuildBoardOpen(unsigned int, unsigned int, char)
081d313d +0x6d:  mov    $0x0,%eax
081d3142 +0x72:  add    $0x2c,%esp
081d3145 +0x75:  pop    %ebx
081d3146 +0x76:  pop    %esi
081d3147 +0x77:  pop    %edi
081d3148 +0x78:  pop    %ebp
081d3149 +0x79:  ret
```

## 反编译 C

```c
// Dispatcher_Open_Guild_Board::process @ 0x81d30d0

/* Dispatcher_Open_Guild_Board::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_Open_Guild_Board::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  
  PVar1 = param_3[0xb2];
  uVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  uVar4 = CUser::GetServerGroup((CUser *)param_2);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::SendGuildBoardOpen(this,uVar3,uVar2,(char)PVar1);
  return 0;
}
```
