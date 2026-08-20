# Clear

`_ZN12PvpResultSet5ClearEv`

`PvpResultSet::Clear()`

| 类 | 地址 |
|---|---|
| `PvpResultSet` | `0x085d5f6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5f6a  _ZN12PvpResultSet5ClearEv
#           PvpResultSet::Clear()
# range [0x085d5f6a, 0x085d5f7d]
085d5f6a +0x00:  push   %ebp
085d5f6b +0x01:  mov    %esp,%ebp
085d5f6d +0x03:  sub    $0x4,%esp
085d5f70 +0x06:  mov    0x8(%ebp),%eax
085d5f73 +0x09:  mov    %eax,(%esp)
085d5f76 +0x0c:  call   085d5dc0 <_ZN13PvpResultType5ClearEv>  ; PvpResultType::Clear()
085d5f7b +0x11:  leave
085d5f7c +0x12:  ret
085d5f7d +0x13:  nop
```

## 反编译 C

```c
// PvpResultSet::Clear @ 0x85d5f6a

/* PvpResultSet::Clear() */

void __thiscall PvpResultSet::Clear(PvpResultSet *this)

{
  PvpResultType::Clear((PvpResultType *)this);
  return;
}
```
