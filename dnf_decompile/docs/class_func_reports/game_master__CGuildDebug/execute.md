# execute

`_ZN11game_master11CGuildDebug7executeEv`

`game_master::CGuildDebug::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CGuildDebug` | `0x084ac76c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac76c  _ZN11game_master11CGuildDebug7executeEv
#           game_master::CGuildDebug::execute()
# range [0x084ac76c, 0x084ac809]
084ac76c +0x00:  push   %ebp
084ac76d +0x01:  mov    %esp,%ebp
084ac76f +0x03:  push   %esi
084ac770 +0x04:  push   %ebx
084ac771 +0x05:  sub    $0x40,%esp
084ac774 +0x08:  mov    0x8(%ebp),%eax
084ac777 +0x0b:  mov    %eax,(%esp)
084ac77a +0x0e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ac77f +0x13:  mov    %eax,-0xc(%ebp)
084ac782 +0x16:  lea    -0x2a(%ebp),%eax
084ac785 +0x19:  mov    %eax,(%esp)
084ac788 +0x1c:  call   084b41a8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x25b>  ; global constructors keyed to game_master::CMacro::Reset()+0x25b
084ac78d +0x21:  movl   $0xffffffff,0x4(%esp)
084ac795 +0x29:  mov    -0xc(%ebp),%eax
084ac798 +0x2c:  mov    %eax,(%esp)
084ac79b +0x2f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ac7a0 +0x34:  mov    %eax,-0x1c(%ebp)
084ac7a3 +0x37:  mov    -0xc(%ebp),%eax
084ac7a6 +0x3a:  mov    %eax,(%esp)
084ac7a9 +0x3d:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084ac7ae +0x42:  mov    %eax,-0x20(%ebp)
084ac7b1 +0x45:  mov    0x8(%ebp),%eax
084ac7b4 +0x48:  mov    0x8(%eax),%eax
084ac7b7 +0x4b:  mov    %eax,-0x18(%ebp)
084ac7ba +0x4e:  mov    0x8(%ebp),%eax
084ac7bd +0x51:  mov    0xc(%eax),%eax
084ac7c0 +0x54:  mov    %eax,-0x14(%ebp)
084ac7c3 +0x57:  mov    0x8(%ebp),%eax
084ac7c6 +0x5a:  mov    0x10(%eax),%eax
084ac7c9 +0x5d:  mov    %eax,-0x10(%ebp)
084ac7cc +0x60:  movzwl -0x28(%ebp),%eax
084ac7d0 +0x64:  movzwl %ax,%esi
084ac7d3 +0x67:  lea    -0x2a(%ebp),%ebx
084ac7d6 +0x6a:  mov    -0xc(%ebp),%eax
084ac7d9 +0x6d:  mov    %eax,(%esp)
084ac7dc +0x70:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ac7e1 +0x75:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084ac7e7 +0x7b:  mov    %eax,0x4(%esp)
084ac7eb +0x7f:  mov    %edx,(%esp)
084ac7ee +0x82:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084ac7f3 +0x87:  mov    %esi,0x8(%esp)
084ac7f7 +0x8b:  mov    %ebx,0x4(%esp)
084ac7fb +0x8f:  mov    %eax,(%esp)
084ac7fe +0x92:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
084ac803 +0x97:  add    $0x40,%esp
084ac806 +0x9a:  pop    %ebx
084ac807 +0x9b:  pop    %esi
084ac808 +0x9c:  pop    %ebp
084ac809 +0x9d:  ret
```

## 反编译 C

```c
// game_master::CGuildDebug::execute @ 0x84ac76c

/* game_master::CGuildDebug::execute() */

void __thiscall game_master::CGuildDebug::execute(CGuildDebug *this)

{
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Debug local_2e [2];
  ushort local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  Packet_Guild_Debug::Packet_Guild_Debug(local_2e);
  local_20 = CUser::get_charac_no(local_10,-1);
  local_24 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)local_10);
  local_1c = *(undefined4 *)(this + 8);
  local_18 = *(undefined4 *)(this + 0xc);
  local_14 = *(undefined4 *)(this + 0x10);
  uVar1 = CUser::GetServerGroup(local_10);
  this_00 = (CGuildServerProxy *)
            CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar1);
  CGuildServerProxy::SendTcpPacket(this_00,(char *)local_2e,(uint)local_2c);
  return;
}
```
