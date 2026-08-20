# getRewordItem

`_ZN15AttendanceEvent13getRewordItemEv`

`AttendanceEvent::getRewordItem()`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c8446` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8446  _ZN15AttendanceEvent13getRewordItemEv
#           AttendanceEvent::getRewordItem()
# range [0x080c8446, 0x080c8467]
080c8446 +0x00:  push   %ebp
080c8447 +0x01:  mov    %esp,%ebp
080c8449 +0x03:  sub    $0x28,%esp
080c844c +0x06:  mov    0x8(%ebp),%edx
080c844f +0x09:  lea    -0xc(%ebp),%eax
080c8452 +0x0c:  mov    %edx,0x4(%esp)
080c8456 +0x10:  mov    %eax,(%esp)
080c8459 +0x13:  call   080c84d0 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x28>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x28
080c845e +0x18:  sub    $0x4,%esp
080c8461 +0x1b:  movzwl -0xc(%ebp),%eax
080c8465 +0x1f:  cwtl
080c8466 +0x20:  leave
080c8467 +0x21:  ret
```

## 反编译 C

```c
// AttendanceEvent::getRewordItem @ 0x80c8446

/* AttendanceEvent::getRewordItem() */

int AttendanceEvent::getRewordItem(void)

{
  undefined2 local_10;
  
  CEventBase::GetAddInfo();
  return (int)local_10;
}
```
