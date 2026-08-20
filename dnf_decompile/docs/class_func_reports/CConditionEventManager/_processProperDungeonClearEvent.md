# _processProperDungeonClearEvent

`_ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers`

`CConditionEventManager::_processProperDungeonClearEvent(CUser*, short)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x083355e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083355e6  _ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers
#           CConditionEventManager::_processProperDungeonClearEvent(CUser*, short)
# range [0x083355e6, 0x083356a3]
083355e6 +0x00:  push   %ebp
083355e7 +0x01:  mov    %esp,%ebp
083355e9 +0x03:  push   %esi
083355ea +0x04:  push   %ebx
083355eb +0x05:  sub    $0x40,%esp
083355ee +0x08:  mov    0x10(%ebp),%eax
083355f1 +0x0b:  mov    %ax,-0x2c(%ebp)
083355f5 +0x0f:  mov    0xc(%ebp),%eax
083355f8 +0x12:  mov    %eax,(%esp)
083355fb +0x15:  call   08335ba8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x4e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x4e
08335600 +0x1a:  cwtl
08335601 +0x1b:  mov    %eax,-0x10(%ebp)
08335604 +0x1e:  mov    -0x10(%ebp),%eax
08335607 +0x21:  add    $0x1,%eax
0833560a +0x24:  movswl %ax,%edx
0833560d +0x27:  lea    -0x18(%ebp),%eax
08335610 +0x2a:  mov    %edx,0x8(%esp)
08335614 +0x2e:  mov    0x8(%ebp),%edx
08335617 +0x31:  mov    %edx,0x4(%esp)
0833561b +0x35:  mov    %eax,(%esp)
0833561e +0x38:  call   083356a4 <_ZN22CConditionEventManager21_getRequiredParameterEs>  ; CConditionEventManager::_getRequiredParameter(short)
08335623 +0x3d:  sub    $0x4,%esp
08335626 +0x40:  mov    0xc(%ebp),%eax
08335629 +0x43:  mov    %eax,(%esp)
0833562c +0x46:  call   08335c80 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x126>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x126
08335631 +0x4b:  cwtl
08335632 +0x4c:  mov    %eax,-0xc(%ebp)
08335635 +0x4f:  lea    -0x24(%ebp),%eax
08335638 +0x52:  mov    %eax,(%esp)
0833563b +0x55:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08335640 +0x5a:  mov    -0x18(%ebp),%eax
08335643 +0x5d:  cmp    $0xffffffff,%eax
08335646 +0x60:  je     08335666 <+0x80>
08335648 +0x62:  mov    -0x18(%ebp),%eax
0833564b +0x65:  cmp    -0xc(%ebp),%eax
0833564e +0x68:  jg     08335666 <+0x80>
08335650 +0x6a:  mov    0xc(%ebp),%eax
08335653 +0x6d:  mov    %eax,(%esp)
08335656 +0x70:  call   08335bcc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x72>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x72
0833565b +0x75:  mov    0xc(%ebp),%eax
0833565e +0x78:  mov    %eax,(%esp)
08335661 +0x7b:  call   086818fc <_ZN5CUser22SendConditionEventInfoEv>  ; CUser::SendConditionEventInfo()
08335666 +0x80:  mov    0xc(%ebp),%eax
08335669 +0x83:  mov    %eax,(%esp)
0833566c +0x86:  call   08681820 <_ZN5CUser27SendProperDungeonClearCountEv>  ; CUser::SendProperDungeonClearCount()
08335671 +0x8b:  jmp    0833568e <+0xa8>
08335673 +0x8d:  mov    %edx,%ebx
08335675 +0x8f:  mov    %eax,%esi
08335677 +0x91:  lea    -0x24(%ebp),%eax
0833567a +0x94:  mov    %eax,(%esp)
0833567d +0x97:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08335682 +0x9c:  mov    %esi,%eax
08335684 +0x9e:  mov    %ebx,%edx
08335686 +0xa0:  mov    %eax,(%esp)
08335689 +0xa3:  call   08ae3750 <_Unwind_Resume>
0833568e +0xa8:  lea    -0x24(%ebp),%eax
08335691 +0xab:  mov    %eax,(%esp)
08335694 +0xae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08335699 +0xb3:  lea    -0x8(%ebp),%esp
0833569c +0xb6:  add    $0x0,%esp
0833569f +0xb9:  pop    %ebx
083356a0 +0xba:  pop    %esi
083356a1 +0xbb:  pop    %ebp
083356a2 +0xbc:  ret
083356a3 +0xbd:  nop
```

## 反编译 C

```c
// CConditionEventManager::_processProperDungeonClearEvent @ 0x83355e6

/* CConditionEventManager::_processProperDungeonClearEvent(CUser*, short) */

void CConditionEventManager::_processProperDungeonClearEvent(CUser *param_1,short param_2)

{
  short sVar1;
  undefined2 in_stack_0000000a;
  PacketGuard local_28 [12];
  int local_1c [2];
  int local_14;
  int local_10;
  
  sVar1 = CUserCharacInfo::GetCurConditionEventStep(_param_2);
  local_14 = (int)sVar1;
  _getRequiredParameter((short)local_1c);
  sVar1 = CUserCharacInfo::GetProperDungeonClearCount(_param_2);
  local_10 = (int)sVar1;
  PacketGuard::PacketGuard(local_28);
  if ((local_1c[0] != -1) && (local_1c[0] <= local_10)) {
    CUserCharacInfo::IncCurConditionEventStep(_param_2);
                    /* try { // try from 08335661 to 08335670 has its CatchHandler @ 08335673 */
    CUser::SendConditionEventInfo((CUser *)_param_2);
  }
  CUser::SendProperDungeonClearCount((CUser *)_param_2);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
