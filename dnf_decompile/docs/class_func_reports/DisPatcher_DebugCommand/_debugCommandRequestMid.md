# _debugCommandRequestMid

`_ZN23DisPatcher_DebugCommand23_debugCommandRequestMidEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandRequestMid(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x08590506` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08590506  _ZN23DisPatcher_DebugCommand23_debugCommandRequestMidEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandRequestMid(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08590506, 0x08590589]
08590506 +0x00:  push   %ebp
08590507 +0x01:  mov    %esp,%ebp
08590509 +0x03:  push   %edi
0859050a +0x04:  push   %esi
0859050b +0x05:  push   %ebx
0859050c +0x06:  sub    $0x3c,%esp
0859050f +0x09:  mov    0x10(%ebp),%eax
08590512 +0x0c:  mov    0xe(%eax),%eax
08590515 +0x0f:  cmp    $0x1d,%eax
08590518 +0x12:  jg     0859057d <+0x77>
0859051a +0x14:  mov    0x10(%ebp),%eax
0859051d +0x17:  mov    0xe(%eax),%eax
08590520 +0x1a:  mov    %eax,-0x1c(%ebp)
08590523 +0x1d:  mov    0x10(%ebp),%eax
08590526 +0x20:  add    $0x12,%eax
08590529 +0x23:  mov    %eax,%edi
0859052b +0x25:  mov    0xc(%ebp),%eax
0859052e +0x28:  mov    %eax,(%esp)
08590531 +0x2b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08590536 +0x30:  mov    %eax,%esi
08590538 +0x32:  mov    0xc(%ebp),%eax
0859053b +0x35:  mov    %eax,(%esp)
0859053e +0x38:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08590543 +0x3d:  mov    %eax,%ebx
08590545 +0x3f:  mov    0xc(%ebp),%eax
08590548 +0x42:  mov    %eax,(%esp)
0859054b +0x45:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08590550 +0x4a:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08590556 +0x50:  mov    %eax,0x4(%esp)
0859055a +0x54:  mov    %edx,(%esp)
0859055d +0x57:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
08590562 +0x5c:  mov    -0x1c(%ebp),%edx
08590565 +0x5f:  mov    %edx,0x10(%esp)
08590569 +0x63:  mov    %edi,0xc(%esp)
0859056d +0x67:  mov    %esi,0x8(%esp)
08590571 +0x6b:  mov    %ebx,0x4(%esp)
08590575 +0x6f:  mov    %eax,(%esp)
08590578 +0x72:  call   084711a6 <_ZN19CMonitorServerProxy18SendRequestUserMidEjjPci>  ; CMonitorServerProxy::SendRequestUserMid(unsigned int, unsigned int, char*, int)
0859057d +0x77:  mov    $0x1,%eax
08590582 +0x7c:  add    $0x3c,%esp
08590585 +0x7f:  pop    %ebx
08590586 +0x80:  pop    %esi
08590587 +0x81:  pop    %edi
08590588 +0x82:  pop    %ebp
08590589 +0x83:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandRequestMid @ 0x8590506

/* DisPatcher_DebugCommand::_debugCommandRequestMid(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandRequestMid
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CMonitorServerProxy *this_00;
  
  if (*(int *)(param_2 + 0xe) < 0x1e) {
    iVar1 = *(int *)(param_2 + 0xe);
    uVar2 = CUser::GetUID(param_1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = CUser::GetServerGroup(param_1);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar4);
    CMonitorServerProxy::SendRequestUserMid(this_00,uVar3,uVar2,(char *)(param_2 + 0x12),iVar1);
  }
  return 1;
}
```
