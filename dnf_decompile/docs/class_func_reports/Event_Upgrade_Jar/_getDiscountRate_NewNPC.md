# _getDiscountRate_NewNPC

`_ZNK17Event_Upgrade_Jar23_getDiscountRate_NewNPCEv`

`Event_Upgrade_Jar::_getDiscountRate_NewNPC() const`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4d0c  _ZNK17Event_Upgrade_Jar23_getDiscountRate_NewNPCEv
#           Event_Upgrade_Jar::_getDiscountRate_NewNPC() const
# range [0x080f4d0c, 0x080f4d1f]
080f4d0c +0x00:  push   %ebp
080f4d0d +0x01:  mov    %esp,%ebp
080f4d0f +0x03:  sub    $0x4,%esp
080f4d12 +0x06:  mov    0x8(%ebp),%eax
080f4d15 +0x09:  mov    0x70(%eax),%eax
080f4d18 +0x0c:  mov    %eax,-0x4(%ebp)
080f4d1b +0x0f:  flds   -0x4(%ebp)
080f4d1e +0x12:  leave
080f4d1f +0x13:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::_getDiscountRate_NewNPC @ 0x80f4d0c

/* Event_Upgrade_Jar::_getDiscountRate_NewNPC() const */

longdouble __thiscall Event_Upgrade_Jar::_getDiscountRate_NewNPC(Event_Upgrade_Jar *this)

{
  return (longdouble)*(float *)(this + 0x70);
}
```
