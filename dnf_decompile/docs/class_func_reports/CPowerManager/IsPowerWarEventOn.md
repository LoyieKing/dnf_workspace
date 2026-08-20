# IsPowerWarEventOn

`_ZN13CPowerManager17IsPowerWarEventOnEv`

`CPowerManager::IsPowerWarEventOn()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f910  _ZN13CPowerManager17IsPowerWarEventOnEv
#           CPowerManager::IsPowerWarEventOn()
# range [0x0847f910, 0x0847f951]
0847f910 +0x00:  push   %ebp
0847f911 +0x01:  mov    %esp,%ebp
0847f913 +0x03:  sub    $0x18,%esp
0847f916 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0847f91b +0x0b:  movl   $0x1e,0x4(%esp)
0847f923 +0x13:  mov    %eax,(%esp)
0847f926 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0847f92b +0x1b:  mov    (%eax),%edx
0847f92d +0x1d:  add    $0x34,%edx
0847f930 +0x20:  mov    (%edx),%edx
0847f932 +0x22:  movl   $0x0,0x4(%esp)
0847f93a +0x2a:  mov    %eax,(%esp)
0847f93d +0x2d:  call   *%edx
0847f93f +0x2f:  test   %al,%al
0847f941 +0x31:  je     0847f94a <+0x3a>
0847f943 +0x33:  mov    $0x1,%eax
0847f948 +0x38:  jmp    0847f94f <+0x3f>
0847f94a +0x3a:  mov    $0x0,%eax
0847f94f +0x3f:  leave
0847f950 +0x40:  ret
0847f951 +0x41:  nop
```

## 反编译 C

```c
// CPowerManager::IsPowerWarEventOn @ 0x847f910

/* CPowerManager::IsPowerWarEventOn() */

bool CPowerManager::IsPowerWarEventOn(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x1e);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 != '\0';
}
```
