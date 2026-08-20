# check_error

`_ZN35Dispatcher_SeriaRoom_Ani_Deco_Event11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Ani_Deco_Event` | `0x081e8b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e8b20  _ZN35Dispatcher_SeriaRoom_Ani_Deco_Event11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser*, MSG_BASE&)
# range [0x081e8b20, 0x081e8b63]
081e8b20 +0x00:  push   %ebp
081e8b21 +0x01:  mov    %esp,%ebp
081e8b23 +0x03:  sub    $0x18,%esp
081e8b26 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
081e8b2b +0x0b:  movl   $0x69,0x4(%esp)
081e8b33 +0x13:  mov    %eax,(%esp)
081e8b36 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
081e8b3b +0x1b:  mov    (%eax),%edx
081e8b3d +0x1d:  add    $0x34,%edx
081e8b40 +0x20:  mov    (%edx),%edx
081e8b42 +0x22:  movl   $0x0,0x4(%esp)
081e8b4a +0x2a:  mov    %eax,(%esp)
081e8b4d +0x2d:  call   *%edx
081e8b4f +0x2f:  xor    $0x1,%eax
081e8b52 +0x32:  test   %al,%al
081e8b54 +0x34:  je     081e8b5d <+0x3d>
081e8b56 +0x36:  mov    $0x1,%eax
081e8b5b +0x3b:  jmp    081e8b62 <+0x42>
081e8b5d +0x3d:  mov    $0x0,%eax
081e8b62 +0x42:  leave
081e8b63 +0x43:  ret
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Ani_Deco_Event::check_error @ 0x81e8b20

/* Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser*, MSG_BASE&) */

bool Dispatcher_SeriaRoom_Ani_Deco_Event::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x69);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 != '\x01';
}
```
