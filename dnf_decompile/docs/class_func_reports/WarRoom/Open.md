# Open

`_ZN7WarRoom4OpenEv`

`WarRoom::Open()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd504` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd504  _ZN7WarRoom4OpenEv
#           WarRoom::Open()
# range [0x086bd504, 0x086bd51f]
086bd504 +0x00:  push   %ebp
086bd505 +0x01:  mov    %esp,%ebp
086bd507 +0x03:  sub    $0x18,%esp
086bd50a +0x06:  movl   $0x0,0x4(%esp)
086bd512 +0x0e:  mov    0x8(%ebp),%eax
086bd515 +0x11:  mov    %eax,(%esp)
086bd518 +0x14:  call   082a5a56 <_GLOBAL__I__ZN4CLog5this_E+0x1e7d>  ; global constructors keyed to CLog::this_+0x1e7d
086bd51d +0x19:  leave
086bd51e +0x1a:  ret
086bd51f +0x1b:  nop
```

## 反编译 C

```c
// WarRoom::Open @ 0x86bd504

/* WarRoom::Open() */

void __thiscall WarRoom::Open(WarRoom *this)

{
  SetState(this,0);
  return;
}
```
