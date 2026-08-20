# process_event

`_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser`

`Dispatcher_GrowthCreatureChangeInfinityCreature::process_event(CUser*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthCreatureChangeInfinityCreature` | `0x081e863a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e863a  _ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser
#           Dispatcher_GrowthCreatureChangeInfinityCreature::process_event(CUser*)
# range [0x081e863a, 0x081e86a5]
081e863a +0x00:  push   %ebp
081e863b +0x01:  mov    %esp,%ebp
081e863d +0x03:  sub    $0x28,%esp
081e8640 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8645 +0x0b:  movl   $0x67,0x4(%esp)
081e864d +0x13:  mov    %eax,(%esp)
081e8650 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8655 +0x1b:  mov    (%eax),%edx
081e8657 +0x1d:  add    $0x34,%edx
081e865a +0x20:  mov    (%edx),%edx
081e865c +0x22:  movl   $0x0,0x4(%esp)
081e8664 +0x2a:  mov    %eax,(%esp)
081e8667 +0x2d:  call   *%edx
081e8669 +0x2f:  test   %al,%al
081e866b +0x31:  je     081e869f <+0x65>
081e866d +0x33:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8672 +0x38:  movl   $0x67,0x4(%esp)
081e867a +0x40:  mov    %eax,(%esp)
081e867d +0x43:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8682 +0x48:  mov    %eax,-0xc(%ebp)
081e8685 +0x4b:  cmpl   $0x0,-0xc(%ebp)
081e8689 +0x4f:  je     081e869f <+0x65>
081e868b +0x51:  mov    0xc(%ebp),%eax
081e868e +0x54:  mov    %eax,0x4(%esp)
081e8692 +0x58:  mov    -0xc(%ebp),%eax
081e8695 +0x5b:  mov    %eax,(%esp)
081e8698 +0x5e:  call   081b6f76 <_ZN21GiveGrowCreatureEvent12processEventER5CUser>  ; GiveGrowCreatureEvent::processEvent(CUser&)
081e869d +0x63:  jmp    081e86a4 <+0x6a>
081e869f +0x65:  mov    $0x0,%eax
081e86a4 +0x6a:  leave
081e86a5 +0x6b:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::process_event @ 0x81e863a

/* Dispatcher_GrowthCreatureChangeInfinityCreature::process_event(CUser*) */

undefined4 __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::process_event
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1)

{
  char cVar1;
  int *piVar2;
  GiveGrowCreatureEvent *this_00;
  undefined4 uVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if ((cVar1 != '\0') &&
     (this_00 = (GiveGrowCreatureEvent *)
                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x67),
     this_00 != (GiveGrowCreatureEvent *)0x0)) {
    uVar3 = GiveGrowCreatureEvent::processEvent(this_00,param_1);
    return uVar3;
  }
  return 0;
}
```
