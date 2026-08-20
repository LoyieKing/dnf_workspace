# execute

`_ZN11game_master13CSetGuildFund7executeEv`

`game_master::CSetGuildFund::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CSetGuildFund` | `0x084ac6a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac6a0  _ZN11game_master13CSetGuildFund7executeEv
#           game_master::CSetGuildFund::execute()
# range [0x084ac6a0, 0x084ac71f]
084ac6a0 +0x00:  push   %ebp
084ac6a1 +0x01:  mov    %esp,%ebp
084ac6a3 +0x03:  push   %edi
084ac6a4 +0x04:  push   %esi
084ac6a5 +0x05:  push   %ebx
084ac6a6 +0x06:  sub    $0x3c,%esp
084ac6a9 +0x09:  mov    0x8(%ebp),%eax
084ac6ac +0x0c:  mov    %eax,(%esp)
084ac6af +0x0f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ac6b4 +0x14:  mov    %eax,-0x1c(%ebp)
084ac6b7 +0x17:  mov    0x8(%ebp),%eax
084ac6ba +0x1a:  mov    0x8(%eax),%edi
084ac6bd +0x1d:  mov    -0x1c(%ebp),%eax
084ac6c0 +0x20:  mov    %eax,(%esp)
084ac6c3 +0x23:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ac6c8 +0x28:  mov    %eax,%ebx
084ac6ca +0x2a:  movl   $0xffffffff,0x4(%esp)
084ac6d2 +0x32:  mov    -0x1c(%ebp),%eax
084ac6d5 +0x35:  mov    %eax,(%esp)
084ac6d8 +0x38:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ac6dd +0x3d:  mov    %eax,%esi
084ac6df +0x3f:  mov    -0x1c(%ebp),%eax
084ac6e2 +0x42:  mov    %eax,(%esp)
084ac6e5 +0x45:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ac6ea +0x4a:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084ac6f0 +0x50:  mov    %eax,0x4(%esp)
084ac6f4 +0x54:  mov    %edx,(%esp)
084ac6f7 +0x57:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084ac6fc +0x5c:  movl   $0x2,0x10(%esp)
084ac704 +0x64:  mov    %edi,0xc(%esp)
084ac708 +0x68:  mov    %ebx,0x8(%esp)
084ac70c +0x6c:  mov    %esi,0x4(%esp)
084ac710 +0x70:  mov    %eax,(%esp)
084ac713 +0x73:  call   0846f1a8 <_ZN17CGuildServerProxy16SendAddGuildFundEjjiN21Packet_Add_Guild_Fund9eFundTypeE>  ; CGuildServerProxy::SendAddGuildFund(unsigned int, unsigned int, int, Packet_Add_Guild_Fund::eFundType)
084ac718 +0x78:  add    $0x3c,%esp
084ac71b +0x7b:  pop    %ebx
084ac71c +0x7c:  pop    %esi
084ac71d +0x7d:  pop    %edi
084ac71e +0x7e:  pop    %ebp
084ac71f +0x7f:  ret
```

## 反编译 C

```c
// game_master::CSetGuildFund::execute @ 0x84ac6a0

/* game_master::CSetGuildFund::execute() */

void __thiscall game_master::CSetGuildFund::execute(CSetGuildFund *this)

{
  undefined4 uVar1;
  CUserCharacInfo *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CGuildServerProxy *pCVar5;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = CUserCharacInfo::get_charac_guildkey(this_00);
  uVar3 = CUser::get_charac_no((CUser *)this_00,-1);
  uVar4 = CUser::GetServerGroup((CUser *)this_00);
  pCVar5 = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::SendAddGuildFund(pCVar5,uVar3,uVar2,uVar1,2);
  return;
}
```
