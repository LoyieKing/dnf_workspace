# Close

`_ZN7WarRoom5CloseEv`

`WarRoom::Close()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd520  _ZN7WarRoom5CloseEv
#           WarRoom::Close()
# range [0x086bd520, 0x086bd53b]
086bd520 +0x00:  push   %ebp
086bd521 +0x01:  mov    %esp,%ebp
086bd523 +0x03:  sub    $0x18,%esp
086bd526 +0x06:  movl   $0xffffffff,0x4(%esp)
086bd52e +0x0e:  mov    0x8(%ebp),%eax
086bd531 +0x11:  mov    %eax,(%esp)
086bd534 +0x14:  call   082a5a56 <_GLOBAL__I__ZN4CLog5this_E+0x1e7d>  ; global constructors keyed to CLog::this_+0x1e7d
086bd539 +0x19:  leave
086bd53a +0x1a:  ret
086bd53b +0x1b:  nop
```

## 反编译 C

```c
// WarRoom::Close @ 0x86bd520

/* WarRoom::Close() */

void __thiscall WarRoom::Close(WarRoom *this)

{
  SetState(this,0xffffffff);
  return;
}
```
