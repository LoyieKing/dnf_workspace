# _S_initialize

`_ZNSt6locale13_S_initializeEv`

`std::locale::_S_initialize()`

| 类 | 地址 |
|---|---|
| `std::locale` | `0x086dcdf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dcdf0  _ZNSt6locale13_S_initializeEv
#           std::locale::_S_initialize()
# range [0x086dcdf0, 0x086dce2f]
086dcdf0 +0x00:  push   %ebp
086dcdf1 +0x01:  mov    $&data#bb92cc41(.plt),%eax
086dcdf6 +0x06:  mov    %esp,%ebp
086dcdf8 +0x08:  sub    $0x18,%esp
086dcdfb +0x0b:  test   %eax,%eax
086dcdfd +0x0d:  je     086dce13 <+0x23>
086dcdff +0x0f:  movl   $&_ZNSt6locale18_S_initialize_onceEv,0x4(%esp)
086dce07 +0x17:  movl   $&_ZNSt6locale7_S_onceE,(%esp)
086dce0e +0x1e:  call   0807e7c0 <_init+0x10b8>
086dce13 +0x23:  mov    &_ZNSt6locale10_S_classicE,%eax
086dce18 +0x28:  test   %eax,%eax
086dce1a +0x2a:  je     086dce20 <+0x30>
086dce1c +0x2c:  leave
086dce1d +0x2d:  ret
086dce1e +0x2e:  xchg   %ax,%ax
086dce20 +0x30:  leave
086dce21 +0x31:  jmp    086dcdc0 <_ZNSt6locale18_S_initialize_onceEv>  ; std::locale::_S_initialize_once()
086dce26 +0x36:  nop
086dce27 +0x37:  nop
086dce28 +0x38:  nop
086dce29 +0x39:  nop
086dce2a +0x3a:  nop
086dce2b +0x3b:  nop
086dce2c +0x3c:  nop
086dce2d +0x3d:  nop
086dce2e +0x3e:  nop
086dce2f +0x3f:  nop
```

## 反编译 C

```c
// std::locale::_S_initialize @ 0x86dcdf0

/* std::locale::_S_initialize() */

void std::locale::_S_initialize(void)

{
  pthread_once(&_S_once,_S_initialize_once);
  if (_S_classic == 0) {
    _S_initialize_once();
    return;
  }
  return;
}
```
