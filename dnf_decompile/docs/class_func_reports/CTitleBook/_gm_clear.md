# _gm_clear

`_ZN10CTitleBook9_gm_clearEv`

`CTitleBook::_gm_clear()`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x086410d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086410d6  _ZN10CTitleBook9_gm_clearEv
#           CTitleBook::_gm_clear()
# range [0x086410d6, 0x086410f7]
086410d6 +0x00:  push   %ebp
086410d7 +0x01:  mov    %esp,%ebp
086410d9 +0x03:  sub    $0x18,%esp
086410dc +0x06:  mov    0x8(%ebp),%eax
086410df +0x09:  mov    %eax,(%esp)
086410e2 +0x0c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
086410e7 +0x11:  mov    0x8(%ebp),%eax
086410ea +0x14:  add    $0xc,%eax
086410ed +0x17:  mov    %eax,(%esp)
086410f0 +0x1a:  call   0848f6e4 <_GLOBAL__I__ZN15exchange_server22AcquireCharacterMemoryEi+0x3c2>  ; global constructors keyed to exchange_server::AcquireCharacterMemory(int)+0x3c2
086410f5 +0x1f:  leave
086410f6 +0x20:  ret
086410f7 +0x21:  nop
```

## 反编译 C

```c
// CTitleBook::_gm_clear @ 0x86410d6

/* CTitleBook::_gm_clear() */

void __thiscall CTitleBook::_gm_clear(CTitleBook *this)

{
  charac_expand::CData::alter((CData *)this);
  stTitleBook::clear((stTitleBook *)(this + 0xc));
  return;
}
```
