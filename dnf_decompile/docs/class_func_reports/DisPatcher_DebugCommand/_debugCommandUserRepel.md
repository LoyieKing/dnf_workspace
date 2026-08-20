# _debugCommandUserRepel

`_ZN23DisPatcher_DebugCommand22_debugCommandUserRepelEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandUserRepel(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0859048e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859048e  _ZN23DisPatcher_DebugCommand22_debugCommandUserRepelEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandUserRepel(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0859048e, 0x08590505]
0859048e +0x00:  push   %ebp
0859048f +0x01:  mov    %esp,%ebp
08590491 +0x03:  push   %edi
08590492 +0x04:  push   %esi
08590493 +0x05:  push   %ebx
08590494 +0x06:  sub    $0x3c,%esp
08590497 +0x09:  mov    0x10(%ebp),%eax
0859049a +0x0c:  mov    0xe(%eax),%edi
0859049d +0x0f:  mov    0x10(%ebp),%eax
085904a0 +0x12:  add    $0x12,%eax
085904a3 +0x15:  mov    %eax,-0x1c(%ebp)
085904a6 +0x18:  mov    0xc(%ebp),%eax
085904a9 +0x1b:  mov    %eax,(%esp)
085904ac +0x1e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085904b1 +0x23:  mov    %eax,%esi
085904b3 +0x25:  mov    0xc(%ebp),%eax
085904b6 +0x28:  mov    %eax,(%esp)
085904b9 +0x2b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085904be +0x30:  mov    %eax,%ebx
085904c0 +0x32:  mov    0xc(%ebp),%eax
085904c3 +0x35:  mov    %eax,(%esp)
085904c6 +0x38:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085904cb +0x3d:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
085904d1 +0x43:  mov    %eax,0x4(%esp)
085904d5 +0x47:  mov    %edx,(%esp)
085904d8 +0x4a:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
085904dd +0x4f:  mov    %edi,0x10(%esp)
085904e1 +0x53:  mov    -0x1c(%ebp),%edx
085904e4 +0x56:  mov    %edx,0xc(%esp)
085904e8 +0x5a:  mov    %esi,0x8(%esp)
085904ec +0x5e:  mov    %ebx,0x4(%esp)
085904f0 +0x62:  mov    %eax,(%esp)
085904f3 +0x65:  call   0847101a <_ZN19CMonitorServerProxy13SendUserRepelEjjPci>  ; CMonitorServerProxy::SendUserRepel(unsigned int, unsigned int, char*, int)
085904f8 +0x6a:  mov    $0x1,%eax
085904fd +0x6f:  add    $0x3c,%esp
08590500 +0x72:  pop    %ebx
08590501 +0x73:  pop    %esi
08590502 +0x74:  pop    %edi
08590503 +0x75:  pop    %ebp
08590504 +0x76:  ret
08590505 +0x77:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandUserRepel @ 0x859048e

/* DisPatcher_DebugCommand::_debugCommandUserRepel(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 __thiscall
DisPatcher_DebugCommand::_debugCommandUserRepel
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  CMonitorServerProxy *this_00;
  
  iVar1 = *(int *)(param_2 + 0xe);
  uVar2 = CUser::GetUID(param_1);
  uVar3 = CUser::get_acc_id(param_1);
  uVar4 = CUser::GetServerGroup(param_1);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,uVar4);
  CMonitorServerProxy::SendUserRepel(this_00,uVar3,uVar2,(char *)(param_2 + 0x12),iVar1);
  return 1;
}
```
