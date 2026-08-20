# ProcessCheckStepUp

`_ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers`

`CConditionEventManager::ProcessCheckStepUp(CUser*, short)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08335566` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08335566  _ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers
#           CConditionEventManager::ProcessCheckStepUp(CUser*, short)
# range [0x08335566, 0x083355e5]
08335566 +0x00:  push   %ebp
08335567 +0x01:  mov    %esp,%ebp
08335569 +0x03:  sub    $0x38,%esp
0833556c +0x06:  mov    0x10(%ebp),%eax
0833556f +0x09:  mov    %ax,-0x1c(%ebp)
08335573 +0x0d:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08335578 +0x12:  movl   $0x71,0x4(%esp)
08335580 +0x1a:  mov    %eax,(%esp)
08335583 +0x1d:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08335588 +0x22:  mov    (%eax),%edx
0833558a +0x24:  add    $0x34,%edx
0833558d +0x27:  mov    (%edx),%edx
0833558f +0x29:  movl   $0x0,0x4(%esp)
08335597 +0x31:  mov    %eax,(%esp)
0833559a +0x34:  call   *%edx
0833559c +0x36:  xor    $0x1,%eax
0833559f +0x39:  test   %al,%al
083355a1 +0x3b:  jne    083355df <+0x79>
083355a3 +0x3d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083355a8 +0x42:  mov    0x4d98(%eax),%eax
083355ae +0x48:  mov    %eax,-0xc(%ebp)
083355b1 +0x4b:  movswl -0x1c(%ebp),%eax
083355b5 +0x4f:  cmp    -0xc(%ebp),%eax
083355b8 +0x52:  jne    083355e2 <+0x7c>
083355ba +0x54:  movswl -0x1c(%ebp),%eax
083355be +0x58:  cmp    $0x2,%eax
083355c1 +0x5b:  jne    083355e3 <+0x7d>
083355c3 +0x5d:  movswl -0x1c(%ebp),%eax
083355c7 +0x61:  mov    %eax,0x8(%esp)
083355cb +0x65:  mov    0xc(%ebp),%eax
083355ce +0x68:  mov    %eax,0x4(%esp)
083355d2 +0x6c:  mov    0x8(%ebp),%eax
083355d5 +0x6f:  mov    %eax,(%esp)
083355d8 +0x72:  call   083355e6 <_ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers>  ; CConditionEventManager::_processProperDungeonClearEvent(CUser*, short)
083355dd +0x77:  jmp    083355e3 <+0x7d>
083355df +0x79:  nop
083355e0 +0x7a:  jmp    083355e3 <+0x7d>
083355e2 +0x7c:  nop
083355e3 +0x7d:  leave
083355e4 +0x7e:  ret
083355e5 +0x7f:  nop
```

## 反编译 C

```c
// CConditionEventManager::ProcessCheckStepUp @ 0x8335566

/* CConditionEventManager::ProcessCheckStepUp(CUser*, short) */

void __thiscall
CConditionEventManager::ProcessCheckStepUp
          (CConditionEventManager *this,CUser *param_1,short param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (((cVar1 == '\x01') && (iVar3 = G_CDataManager(), (int)param_2 == *(int *)(iVar3 + 0x4d98))) &&
     (param_2 == 2)) {
    _processProperDungeonClearEvent((CUser *)this,(short)param_1);
  }
  return;
}
```
