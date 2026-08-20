# _reset

`_ZN10CTitleBook6_resetEv`

`CTitleBook::_reset()`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086410b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086410b6  _ZN10CTitleBook6_resetEv
#           CTitleBook::_reset()
# range [0x086410b6, 0x086410d5]
086410b6 +0x00:  push   %ebp
086410b7 +0x01:  mov    %esp,%ebp
086410b9 +0x03:  sub    $0x18,%esp
086410bc +0x06:  mov    0x8(%ebp),%eax
086410bf +0x09:  movl   $0x0,0x8(%eax)
086410c6 +0x10:  mov    0x8(%ebp),%eax
086410c9 +0x13:  add    $0xc,%eax
086410cc +0x16:  mov    %eax,(%esp)
086410cf +0x19:  call   0848f6e4 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x3c2>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x3c2
086410d4 +0x1e:  leave
086410d5 +0x1f:  ret
```

## 反编译 C

```c
// CTitleBook::_reset @ 0x86410b6

/* CTitleBook::_reset() */

void __thiscall CTitleBook::_reset(CTitleBook *this)

{
  *(undefined4 *)(this + 8) = 0;
  stTitleBook::clear((stTitleBook *)(this + 0xc));
  return;
}
```
