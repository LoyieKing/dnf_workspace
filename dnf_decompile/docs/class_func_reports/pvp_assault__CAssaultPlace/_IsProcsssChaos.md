# _IsProcsssChaos

`_ZN11pvp_assault13CAssaultPlace15_IsProcsssChaosEv`

`pvp_assault::CAssaultPlace::_IsProcsssChaos()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ebd64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ebd64  _ZN11pvp_assault13CAssaultPlace15_IsProcsssChaosEv
#           pvp_assault::CAssaultPlace::_IsProcsssChaos()
# range [0x082ebd64, 0x082ebda5]
082ebd64 +0x00:  push   %ebp
082ebd65 +0x01:  mov    %esp,%ebp
082ebd67 +0x03:  sub    $0x18,%esp
082ebd6a +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
082ebd6f +0x0b:  movl   $0x20,0x4(%esp)
082ebd77 +0x13:  mov    %eax,(%esp)
082ebd7a +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
082ebd7f +0x1b:  mov    (%eax),%edx
082ebd81 +0x1d:  add    $0x34,%edx
082ebd84 +0x20:  mov    (%edx),%edx
082ebd86 +0x22:  movl   $0x0,0x4(%esp)
082ebd8e +0x2a:  mov    %eax,(%esp)
082ebd91 +0x2d:  call   *%edx
082ebd93 +0x2f:  test   %al,%al
082ebd95 +0x31:  je     082ebd9e <+0x3a>
082ebd97 +0x33:  mov    $0x0,%eax
082ebd9c +0x38:  jmp    082ebda3 <+0x3f>
082ebd9e +0x3a:  mov    $0x1,%eax
082ebda3 +0x3f:  leave
082ebda4 +0x40:  ret
082ebda5 +0x41:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_IsProcsssChaos @ 0x82ebd64

/* pvp_assault::CAssaultPlace::_IsProcsssChaos() */

bool pvp_assault::CAssaultPlace::_IsProcsssChaos(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x20);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 == '\0';
}
```
