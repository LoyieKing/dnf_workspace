# execute

`_ZN11game_master9CEndEvent7executeEv`

`game_master::CEndEvent::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CEndEvent` | `0x084ab94c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab94c  _ZN11game_master9CEndEvent7executeEv
#           game_master::CEndEvent::execute()
# range [0x084ab94c, 0x084ab9c3]
084ab94c +0x00:  push   %ebp
084ab94d +0x01:  mov    %esp,%ebp
084ab94f +0x03:  push   %ebx
084ab950 +0x04:  sub    $0x34,%esp
084ab953 +0x07:  mov    0x8(%ebp),%eax
084ab956 +0x0a:  mov    %eax,(%esp)
084ab959 +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab95e +0x12:  mov    %eax,-0xc(%ebp)
084ab961 +0x15:  mov    -0xc(%ebp),%eax
084ab964 +0x18:  mov    %eax,(%esp)
084ab967 +0x1b:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
084ab96c +0x20:  xor    $0x1,%eax
084ab96f +0x23:  test   %al,%al
084ab971 +0x25:  jne    084ab9bd <+0x71>
084ab973 +0x27:  lea    -0x1a(%ebp),%eax
084ab976 +0x2a:  mov    %eax,(%esp)
084ab979 +0x2d:  call   0826889a <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x22b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x22b
084ab97e +0x32:  mov    0x8(%ebp),%eax
084ab981 +0x35:  mov    0x8(%eax),%eax
084ab984 +0x38:  mov    %eax,-0x10(%ebp)
084ab987 +0x3b:  lea    -0x1a(%ebp),%ebx
084ab98a +0x3e:  mov    -0xc(%ebp),%eax
084ab98d +0x41:  mov    %eax,(%esp)
084ab990 +0x44:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ab995 +0x49:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084ab99b +0x4f:  mov    %eax,0x4(%esp)
084ab99f +0x53:  mov    %edx,(%esp)
084ab9a2 +0x56:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084ab9a7 +0x5b:  movl   $0xe,0x8(%esp)
084ab9af +0x63:  mov    %ebx,0x4(%esp)
084ab9b3 +0x67:  mov    %eax,(%esp)
084ab9b6 +0x6a:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084ab9bb +0x6f:  jmp    084ab9be <+0x72>
084ab9bd +0x71:  nop
084ab9be +0x72:  add    $0x34,%esp
084ab9c1 +0x75:  pop    %ebx
084ab9c2 +0x76:  pop    %ebp
084ab9c3 +0x77:  ret
```

## 反编译 C

```c
// game_master::CEndEvent::execute @ 0x84ab94c

/* game_master::CEndEvent::execute() */

void __thiscall game_master::CEndEvent::execute(CEndEvent *this)

{
  char cVar1;
  undefined4 uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Event_End local_1e [10];
  undefined4 local_14;
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUser::isGMUser(local_10);
  if (cVar1 == '\x01') {
    Packet_Monitor_Event_End::Packet_Monitor_Event_End(local_1e);
    local_14 = *(undefined4 *)(this + 8);
    uVar2 = CUser::GetServerGroup(local_10);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar2);
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_1e,0xe);
  }
  return;
}
```
