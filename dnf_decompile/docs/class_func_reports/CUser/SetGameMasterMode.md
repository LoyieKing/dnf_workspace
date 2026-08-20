# SetGameMasterMode

`_ZN5CUser17SetGameMasterModeEb`

`CUser::SetGameMasterMode(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086796dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086796dc  _ZN5CUser17SetGameMasterModeEb
#           CUser::SetGameMasterMode(bool)
# range [0x086796dc, 0x08679753]
086796dc +0x00:  push   %ebp
086796dd +0x01:  mov    %esp,%ebp
086796df +0x03:  push   %ebx
086796e0 +0x04:  sub    $0x34,%esp
086796e3 +0x07:  mov    0xc(%ebp),%eax
086796e6 +0x0a:  mov    %al,-0x1c(%ebp)
086796e9 +0x0d:  mov    0x8(%ebp),%eax
086796ec +0x10:  movzbl -0x1c(%ebp),%edx
086796f0 +0x14:  mov    %dl,0x711d8(%eax)
086796f6 +0x1a:  lea    -0x16(%ebp),%eax
086796f9 +0x1d:  mov    %eax,(%esp)
086796fc +0x20:  call   086945d4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xe29>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xe29
08679701 +0x25:  cmpb   $0x0,-0x1c(%ebp)
08679705 +0x29:  je     08679749 <+0x6d>
08679707 +0x2b:  mov    0x8(%ebp),%eax
0867970a +0x2e:  mov    %eax,(%esp)
0867970d +0x31:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08679712 +0x36:  mov    %eax,-0xc(%ebp)
08679715 +0x39:  lea    -0x16(%ebp),%ebx
08679718 +0x3c:  mov    0x8(%ebp),%eax
0867971b +0x3f:  mov    %eax,(%esp)
0867971e +0x42:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08679723 +0x47:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08679729 +0x4d:  mov    %eax,0x4(%esp)
0867972d +0x51:  mov    %edx,(%esp)
08679730 +0x54:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08679735 +0x59:  movl   $0xe,0x8(%esp)
0867973d +0x61:  mov    %ebx,0x4(%esp)
08679741 +0x65:  mov    %eax,(%esp)
08679744 +0x68:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
08679749 +0x6d:  mov    $0x1,%eax
0867974e +0x72:  add    $0x34,%esp
08679751 +0x75:  pop    %ebx
08679752 +0x76:  pop    %ebp
08679753 +0x77:  ret
```

## 反编译 C

```c
// CUser::SetGameMasterMode @ 0x86796dc

/* CUser::SetGameMasterMode(bool) */

undefined4 __thiscall CUser::SetGameMasterMode(CUser *this,bool param_1)

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  Packet_Register_GM_MID local_1a [10];
  undefined4 local_10;
  
  this[0x711d8] = (CUser)param_1;
  Packet_Register_GM_MID::Packet_Register_GM_MID(local_1a);
  if (param_1) {
    local_10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar1 = GetServerGroup(this);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_1a,0xe);
  }
  return 1;
}
```
