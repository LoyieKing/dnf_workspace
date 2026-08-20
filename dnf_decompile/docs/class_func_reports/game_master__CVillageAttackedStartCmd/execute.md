# execute

`_ZN11game_master24CVillageAttackedStartCmd7executeEv`

`game_master::CVillageAttackedStartCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CVillageAttackedStartCmd` | `0x084aa144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa144  _ZN11game_master24CVillageAttackedStartCmd7executeEv
#           game_master::CVillageAttackedStartCmd::execute()
# range [0x084aa144, 0x084aa1db]
084aa144 +0x00:  push   %ebp
084aa145 +0x01:  mov    %esp,%ebp
084aa147 +0x03:  push   %ebx
084aa148 +0x04:  sub    $0x34,%esp
084aa14b +0x07:  lea    -0x22(%ebp),%eax
084aa14e +0x0a:  mov    %eax,(%esp)
084aa151 +0x0d:  call   0822c088 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1732>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1732
084aa156 +0x12:  mov    0x8(%ebp),%eax
084aa159 +0x15:  mov    %eax,(%esp)
084aa15c +0x18:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa161 +0x1d:  mov    %eax,(%esp)
084aa164 +0x20:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084aa169 +0x25:  mov    %eax,-0x18(%ebp)
084aa16c +0x28:  mov    0x8(%ebp),%eax
084aa16f +0x2b:  mov    %eax,(%esp)
084aa172 +0x2e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa177 +0x33:  movl   $0xffffffff,0x4(%esp)
084aa17f +0x3b:  mov    %eax,(%esp)
084aa182 +0x3e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084aa187 +0x43:  mov    %eax,-0x14(%ebp)
084aa18a +0x46:  mov    0x8(%ebp),%eax
084aa18d +0x49:  mov    0x8(%eax),%eax
084aa190 +0x4c:  mov    %eax,-0x10(%ebp)
084aa193 +0x4f:  movl   $0x0,-0xc(%ebp)
084aa19a +0x56:  lea    -0x22(%ebp),%ebx
084aa19d +0x59:  mov    0x8(%ebp),%eax
084aa1a0 +0x5c:  mov    %eax,(%esp)
084aa1a3 +0x5f:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa1a8 +0x64:  mov    %eax,(%esp)
084aa1ab +0x67:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084aa1b0 +0x6c:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084aa1b6 +0x72:  mov    %eax,0x4(%esp)
084aa1ba +0x76:  mov    %edx,(%esp)
084aa1bd +0x79:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084aa1c2 +0x7e:  movl   $0x1a,0x8(%esp)
084aa1ca +0x86:  mov    %ebx,0x4(%esp)
084aa1ce +0x8a:  mov    %eax,(%esp)
084aa1d1 +0x8d:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084aa1d6 +0x92:  add    $0x34,%esp
084aa1d9 +0x95:  pop    %ebx
084aa1da +0x96:  pop    %ebp
084aa1db +0x97:  ret
```

## 反编译 C

```c
// game_master::CVillageAttackedStartCmd::execute @ 0x84aa144

/* game_master::CVillageAttackedStartCmd::execute() */

void __thiscall game_master::CVillageAttackedStartCmd::execute(CVillageAttackedStartCmd *this)

{
  CUser *pCVar1;
  undefined4 uVar2;
  CMonitorServerProxy *this_00;
  Packet_VillageAttackedGMCommand local_26 [10];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  Packet_VillageAttackedGMCommand::Packet_VillageAttackedGMCommand(local_26);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_1c = CUser::GetUID(pCVar1);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_18 = CUser::get_charac_no(pCVar1,-1);
  local_14 = *(undefined4 *)(this + 8);
  local_10 = 0;
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar2 = CUser::GetServerGroup(pCVar1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar2);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_26,0x1a);
  return;
}
```
