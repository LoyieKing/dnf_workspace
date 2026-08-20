# _debugCommandGuildLevelUp

`_ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser`

`DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858f64c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858f64c  _ZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUser
#           DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*)
# range [0x0858f64c, 0x0858f7b5]
0858f64c +0x000:  push   %ebp
0858f64d +0x001:  mov    %esp,%ebp
0858f64f +0x003:  push   %edi
0858f650 +0x004:  push   %esi
0858f651 +0x005:  push   %ebx
0858f652 +0x006:  sub    $0x5c,%esp
0858f655 +0x009:  mov    0xc(%ebp),%eax
0858f658 +0x00c:  mov    %eax,(%esp)
0858f65b +0x00f:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858f660 +0x014:  xor    $0x1,%eax
0858f663 +0x017:  test   %al,%al
0858f665 +0x019:  je     0858f671 <+0x25>
0858f667 +0x01b:  mov    $0x0,%eax
0858f66c +0x020:  jmp    0858f7ae <+0x162>
0858f671 +0x025:  mov    0xc(%ebp),%eax
0858f674 +0x028:  mov    %eax,(%esp)
0858f677 +0x02b:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0858f67c +0x030:  test   %eax,%eax
0858f67e +0x032:  sete   %al
0858f681 +0x035:  test   %al,%al
0858f683 +0x037:  je     0858f6d6 <+0x8a>
0858f685 +0x039:  mov    0xc(%ebp),%eax
0858f688 +0x03c:  mov    %eax,(%esp)
0858f68b +0x03f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0858f690 +0x044:  mov    %eax,%ebx
0858f692 +0x046:  movl   $0x0,0xc(%esp)
0858f69a +0x04e:  movl   $0x20a,0x8(%esp)
0858f6a2 +0x056:  movl   $&_ZZN23DisPatcher_DebugCommand25_debugCommandGuildLevelUpEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0858f6aa +0x05e:  lea    -0x2c(%ebp),%eax
0858f6ad +0x061:  mov    %eax,(%esp)
0858f6b0 +0x064:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858f6b5 +0x069:  mov    %ebx,0x8(%esp)
0858f6b9 +0x06d:  movl   $"GM is not Guild Member!( %d )",0x4(%esp)
0858f6c1 +0x075:  lea    -0x2c(%ebp),%eax
0858f6c4 +0x078:  mov    %eax,(%esp)
0858f6c7 +0x07b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858f6cc +0x080:  mov    $0x0,%eax
0858f6d1 +0x085:  jmp    0858f7ae <+0x162>
0858f6d6 +0x08a:  mov    0xc(%ebp),%eax
0858f6d9 +0x08d:  mov    %eax,(%esp)
0858f6dc +0x090:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0858f6e1 +0x095:  mov    %eax,%edi
0858f6e3 +0x097:  mov    0xc(%ebp),%eax
0858f6e6 +0x09a:  mov    %eax,(%esp)
0858f6e9 +0x09d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0858f6ee +0x0a2:  mov    %eax,%esi
0858f6f0 +0x0a4:  mov    0xc(%ebp),%eax
0858f6f3 +0x0a7:  mov    %eax,(%esp)
0858f6f6 +0x0aa:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0858f6fb +0x0af:  mov    %eax,%ebx
0858f6fd +0x0b1:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0858f702 +0x0b6:  movl   $0x0,0x4(%esp)
0858f70a +0x0be:  mov    %eax,(%esp)
0858f70d +0x0c1:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0858f712 +0x0c6:  movl   $0x0,0x10(%esp)
0858f71a +0x0ce:  mov    %edi,0xc(%esp)
0858f71e +0x0d2:  mov    %esi,0x8(%esp)
0858f722 +0x0d6:  mov    %ebx,0x4(%esp)
0858f726 +0x0da:  mov    %eax,(%esp)
0858f729 +0x0dd:  call   0846dd8a <_ZN17CGuildServerProxy16SendGuildLevelupEijjj>  ; CGuildServerProxy::SendGuildLevelup(int, unsigned int, unsigned int, unsigned int)
0858f72e +0x0e2:  mov    0xc(%ebp),%eax
0858f731 +0x0e5:  mov    %eax,(%esp)
0858f734 +0x0e8:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0858f739 +0x0ed:  mov    %eax,-0x1c(%ebp)
0858f73c +0x0f0:  mov    -0x1c(%ebp),%eax
0858f73f +0x0f3:  movzbl 0x95(%eax),%eax
0858f746 +0x0fa:  movzbl %al,%ecx
0858f749 +0x0fd:  mov    -0x1c(%ebp),%eax
0858f74c +0x100:  movzbl 0x1b(%eax),%eax
0858f750 +0x104:  add    $0x1,%eax
0858f753 +0x107:  movzbl %al,%edx
0858f756 +0x10a:  mov    -0x1c(%ebp),%eax
0858f759 +0x10d:  mov    %ecx,0xc(%esp)
0858f75d +0x111:  mov    %edx,0x8(%esp)
0858f761 +0x115:  mov    %eax,0x4(%esp)
0858f765 +0x119:  lea    -0x46(%ebp),%eax
0858f768 +0x11c:  mov    %eax,(%esp)
0858f76b +0x11f:  call   084ed19a <_GLOBAL__I__Z7getUserj+0x414c>  ; global constructors keyed to getUser(unsigned int)+0x414c
0858f770 +0x124:  movb   $0x0,-0x2d(%ebp)
0858f774 +0x128:  mov    0xc(%ebp),%eax
0858f777 +0x12b:  mov    %eax,(%esp)
0858f77a +0x12e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0858f77f +0x133:  mov    %eax,%ebx
0858f781 +0x135:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0858f786 +0x13a:  movl   $0x0,0x4(%esp)
0858f78e +0x142:  mov    %eax,(%esp)
0858f791 +0x145:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0858f796 +0x14a:  lea    -0x46(%ebp),%edx
0858f799 +0x14d:  mov    %edx,0x8(%esp)
0858f79d +0x151:  mov    %ebx,0x4(%esp)
0858f7a1 +0x155:  mov    %eax,(%esp)
0858f7a4 +0x158:  call   0846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)
0858f7a9 +0x15d:  mov    $0x1,%eax
0858f7ae +0x162:  add    $0x5c,%esp
0858f7b1 +0x165:  pop    %ebx
0858f7b2 +0x166:  pop    %esi
0858f7b3 +0x167:  pop    %edi
0858f7b4 +0x168:  pop    %ebp
0858f7b5 +0x169:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandGuildLevelUp @ 0x858f64c

/* DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandGuildLevelUp(DisPatcher_DebugCommand *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  CGuildServerProxy *pCVar6;
  STGuildProxy local_4a [25];
  undefined1 local_31;
  cMyTrace local_30 [16];
  char *local_20;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_30,"bool DisPatcher_DebugCommand::_debugCommandGuildLevelUp(CUser*)",
                         0x20a,0);
      cMyTrace::operator()(local_30,"GM is not Guild Member!( %d )",uVar2);
      uVar2 = 0;
    }
    else {
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      iVar3 = CUser::GetUID(param_1);
      pCVar6 = (CGuildServerProxy *)
               CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildLevelup(pCVar6,iVar3,uVar5,uVar4,0);
      local_20 = (char *)CUser::GetGuildDBInfo(param_1);
      STGuildProxy::STGuildProxy(local_4a,local_20,local_20[0x1b] + '\x01',local_20[0x95]);
      local_31 = 0;
      uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      pCVar6 = (CGuildServerProxy *)
               CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::ModifyGuildInfoProxy(pCVar6,uVar4,local_4a);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
