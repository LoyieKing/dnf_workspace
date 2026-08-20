# CheckMapClear

`_ZN6CParty13CheckMapClearEv`

`CParty::CheckMapClear()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bea4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bea4a  _ZN6CParty13CheckMapClearEv
#           CParty::CheckMapClear()
# range [0x085bea4a, 0x085bea61]
085bea4a +0x00:  push   %ebp
085bea4b +0x01:  mov    %esp,%ebp
085bea4d +0x03:  sub    $0x18,%esp
085bea50 +0x06:  mov    0x8(%ebp),%eax
085bea53 +0x09:  add    $0xb24,%eax
085bea58 +0x0e:  mov    %eax,(%esp)
085bea5b +0x11:  call   0830a0e8 <_ZN13CBattle_Field16check_grid_clearEv>  ; CBattle_Field::check_grid_clear()
085bea60 +0x16:  leave
085bea61 +0x17:  ret
```

## 反编译 C

```c
// CParty::CheckMapClear @ 0x85bea4a

/* CParty::CheckMapClear() */

void __thiscall CParty::CheckMapClear(CParty *this)

{
  CBattle_Field::check_grid_clear((CBattle_Field *)(this + 0xb24));
  return;
}
```
