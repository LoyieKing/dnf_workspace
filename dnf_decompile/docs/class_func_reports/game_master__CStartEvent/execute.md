# execute

`_ZN11game_master11CStartEvent7executeEv`

`game_master::CStartEvent::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CStartEvent` | `0x084ab886` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab886  _ZN11game_master11CStartEvent7executeEv
#           game_master::CStartEvent::execute()
# range [0x084ab886, 0x084ab913]
084ab886 +0x00:  push   %ebp
084ab887 +0x01:  mov    %esp,%ebp
084ab889 +0x03:  push   %ebx
084ab88a +0x04:  sub    $0x34,%esp
084ab88d +0x07:  mov    0x8(%ebp),%eax
084ab890 +0x0a:  mov    %eax,(%esp)
084ab893 +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ab898 +0x12:  mov    %eax,-0xc(%ebp)
084ab89b +0x15:  mov    -0xc(%ebp),%eax
084ab89e +0x18:  mov    %eax,(%esp)
084ab8a1 +0x1b:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
084ab8a6 +0x20:  xor    $0x1,%eax
084ab8a9 +0x23:  test   %al,%al
084ab8ab +0x25:  jne    084ab90d <+0x87>
084ab8ad +0x27:  lea    -0x1e(%ebp),%eax
084ab8b0 +0x2a:  mov    %eax,(%esp)
084ab8b3 +0x2d:  call   084b4184 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x237>  ; global constructors keyed to game_master::CMacro::Reset()+0x237
084ab8b8 +0x32:  mov    0x8(%ebp),%eax
084ab8bb +0x35:  mov    0xc(%eax),%eax
084ab8be +0x38:  mov    %eax,-0x14(%ebp)
084ab8c1 +0x3b:  mov    0x8(%ebp),%eax
084ab8c4 +0x3e:  movzwl 0x10(%eax),%eax
084ab8c8 +0x42:  mov    %ax,-0x10(%ebp)
084ab8cc +0x46:  mov    0x8(%ebp),%eax
084ab8cf +0x49:  movzwl 0x12(%eax),%eax
084ab8d3 +0x4d:  mov    %ax,-0xe(%ebp)
084ab8d7 +0x51:  lea    -0x1e(%ebp),%ebx
084ab8da +0x54:  mov    -0xc(%ebp),%eax
084ab8dd +0x57:  mov    %eax,(%esp)
084ab8e0 +0x5a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ab8e5 +0x5f:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084ab8eb +0x65:  mov    %eax,0x4(%esp)
084ab8ef +0x69:  mov    %edx,(%esp)
084ab8f2 +0x6c:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084ab8f7 +0x71:  movl   $0x12,0x8(%esp)
084ab8ff +0x79:  mov    %ebx,0x4(%esp)
084ab903 +0x7d:  mov    %eax,(%esp)
084ab906 +0x80:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084ab90b +0x85:  jmp    084ab90e <+0x88>
084ab90d +0x87:  nop
084ab90e +0x88:  add    $0x34,%esp
084ab911 +0x8b:  pop    %ebx
084ab912 +0x8c:  pop    %ebp
084ab913 +0x8d:  ret
```

## 反编译 C

```c
// game_master::CStartEvent::execute @ 0x84ab886

/* game_master::CStartEvent::execute() */

void __thiscall game_master::CStartEvent::execute(CStartEvent *this)

{
  char cVar1;
  undefined4 uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Event_Start local_22 [10];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  cVar1 = CUser::isGMUser(local_10);
  if (cVar1 == '\x01') {
    Packet_Monitor_Event_Start::Packet_Monitor_Event_Start(local_22);
    local_18 = *(undefined4 *)(this + 0xc);
    local_14 = *(undefined2 *)(this + 0x10);
    local_12 = *(undefined2 *)(this + 0x12);
    uVar2 = CUser::GetServerGroup(local_10);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar2);
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_22,0x12);
  }
  return;
}
```
