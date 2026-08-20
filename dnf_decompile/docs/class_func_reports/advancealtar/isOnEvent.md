# isOnEvent

`_ZN12advancealtar9isOnEventEv`

`advancealtar::isOnEvent()`

| 类 | 地址 |
|---|---|
| `advancealtar` | `0x0812cfa6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812cfa6  _ZN12advancealtar9isOnEventEv
#           advancealtar::isOnEvent()
# range [0x0812cfa6, 0x0812cfe9]
0812cfa6 +0x00:  push   %ebp
0812cfa7 +0x01:  mov    %esp,%ebp
0812cfa9 +0x03:  sub    $0x18,%esp
0812cfac +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0812cfb1 +0x0b:  movl   $0x77,0x4(%esp)
0812cfb9 +0x13:  mov    %eax,(%esp)
0812cfbc +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0812cfc1 +0x1b:  mov    (%eax),%edx
0812cfc3 +0x1d:  add    $0x34,%edx
0812cfc6 +0x20:  mov    (%edx),%edx
0812cfc8 +0x22:  movl   $0x0,0x4(%esp)
0812cfd0 +0x2a:  mov    %eax,(%esp)
0812cfd3 +0x2d:  call   *%edx
0812cfd5 +0x2f:  xor    $0x1,%eax
0812cfd8 +0x32:  test   %al,%al
0812cfda +0x34:  je     0812cfe3 <+0x3d>
0812cfdc +0x36:  mov    $0x0,%eax
0812cfe1 +0x3b:  jmp    0812cfe8 <+0x42>
0812cfe3 +0x3d:  mov    $0x1,%eax
0812cfe8 +0x42:  leave
0812cfe9 +0x43:  ret
```

## 反编译 C

```c
// advancealtar::isOnEvent @ 0x812cfa6

/* advancealtar::isOnEvent() */

bool advancealtar::isOnEvent(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x77);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 == '\x01';
}
```
