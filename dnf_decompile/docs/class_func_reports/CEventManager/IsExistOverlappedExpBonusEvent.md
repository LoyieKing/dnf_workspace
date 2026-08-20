# IsExistOverlappedExpBonusEvent

`_ZN13CEventManager30IsExistOverlappedExpBonusEventEv`

`CEventManager::IsExistOverlappedExpBonusEvent()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08116212` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08116212  _ZN13CEventManager30IsExistOverlappedExpBonusEventEv
#           CEventManager::IsExistOverlappedExpBonusEvent()
# range [0x08116212, 0x08116275]
08116212 +0x00:  push   %ebp
08116213 +0x01:  mov    %esp,%ebp
08116215 +0x03:  sub    $0x28,%esp
08116218 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0811621d +0x0b:  movl   $0x66,0x4(%esp)
08116225 +0x13:  mov    %eax,(%esp)
08116228 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0811622d +0x1b:  mov    (%eax),%edx
0811622f +0x1d:  add    $0x34,%edx
08116232 +0x20:  mov    (%edx),%edx
08116234 +0x22:  movl   $0x0,0x4(%esp)
0811623c +0x2a:  mov    %eax,(%esp)
0811623f +0x2d:  call   *%edx
08116241 +0x2f:  mov    %al,-0xa(%ebp)
08116244 +0x32:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
08116249 +0x37:  movl   $0x2,0x4(%esp)
08116251 +0x3f:  mov    %eax,(%esp)
08116254 +0x42:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
08116259 +0x47:  mov    %al,-0x9(%ebp)
0811625c +0x4a:  cmpb   $0x0,-0xa(%ebp)
08116260 +0x4e:  jne    08116268 <+0x56>
08116262 +0x50:  cmpb   $0x0,-0x9(%ebp)
08116266 +0x54:  je     0811626f <+0x5d>
08116268 +0x56:  mov    $0x1,%eax
0811626d +0x5b:  jmp    08116274 <+0x62>
0811626f +0x5d:  mov    $0x0,%eax
08116274 +0x62:  leave
08116275 +0x63:  ret
```

## 反编译 C

```c
// CEventManager::IsExistOverlappedExpBonusEvent @ 0x8116212

/* CEventManager::IsExistOverlappedExpBonusEvent() */

undefined4 CEventManager::IsExistOverlappedExpBonusEvent(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)GetRepeatEvent(GlobalData::s_event_manager,0x66);
  cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  cVar2 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,2);
  if ((cVar1 == '\0') && (cVar2 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
