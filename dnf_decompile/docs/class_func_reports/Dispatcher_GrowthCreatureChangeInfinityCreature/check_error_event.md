# check_error_event

`_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser`

`Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event(CUser*)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthCreatureChangeInfinityCreature` | `0x081e86fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e86fc  _ZN47Dispatcher_GrowthCreatureChangeInfinityCreature17check_error_eventEP5CUser
#           Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event(CUser*)
# range [0x081e86fc, 0x081e8767]
081e86fc +0x00:  push   %ebp
081e86fd +0x01:  mov    %esp,%ebp
081e86ff +0x03:  sub    $0x28,%esp
081e8702 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8707 +0x0b:  movl   $0x67,0x4(%esp)
081e870f +0x13:  mov    %eax,(%esp)
081e8712 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8717 +0x1b:  mov    (%eax),%edx
081e8719 +0x1d:  add    $0x34,%edx
081e871c +0x20:  mov    (%edx),%edx
081e871e +0x22:  movl   $0x0,0x4(%esp)
081e8726 +0x2a:  mov    %eax,(%esp)
081e8729 +0x2d:  call   *%edx
081e872b +0x2f:  test   %al,%al
081e872d +0x31:  je     081e8761 <+0x65>
081e872f +0x33:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8734 +0x38:  movl   $0x67,0x4(%esp)
081e873c +0x40:  mov    %eax,(%esp)
081e873f +0x43:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8744 +0x48:  mov    %eax,-0xc(%ebp)
081e8747 +0x4b:  cmpl   $0x0,-0xc(%ebp)
081e874b +0x4f:  je     081e8761 <+0x65>
081e874d +0x51:  mov    0xc(%ebp),%eax
081e8750 +0x54:  mov    %eax,0x4(%esp)
081e8754 +0x58:  mov    -0xc(%ebp),%eax
081e8757 +0x5b:  mov    %eax,(%esp)
081e875a +0x5e:  call   081b6e7a <_ZN21GiveGrowCreatureEvent14CheckEventInfoER5CUser>  ; GiveGrowCreatureEvent::CheckEventInfo(CUser&)
081e875f +0x63:  jmp    081e8766 <+0x6a>
081e8761 +0x65:  mov    $0x1,%eax
081e8766 +0x6a:  leave
081e8767 +0x6b:  ret
```

## 反编译 C

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event @ 0x81e86fc

/* Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event(CUser*) */

undefined4 __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::check_error_event
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
    uVar3 = GiveGrowCreatureEvent::CheckEventInfo(this_00,param_1);
    return uVar3;
  }
  return 1;
}
```
