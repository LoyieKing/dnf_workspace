# SlangFilter

`_GLOBAL__I__ZN11SlangFilterC2Ev`

`global constructors keyed to SlangFilter::SlangFilter()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to SlangFilter` | `0x080950aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080950aa  _GLOBAL__I__ZN11SlangFilterC2Ev
#           global constructors keyed to SlangFilter::SlangFilter()
# range [0x080950aa, 0x080950d3]
080950aa +0x00:  push   %ebp
080950ab +0x01:  mov    %esp,%ebp
080950ad +0x03:  sub    $0x18,%esp
080950b0 +0x06:  movl   $0xffff,0x4(%esp)
080950b8 +0x0e:  movl   $0x1,(%esp)
080950bf +0x15:  call   0809506a <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080950c4 +0x1a:  leave
080950c5 +0x1b:  ret
080950c6 +0x1c:  push   %ebp
080950c7 +0x1d:  mov    %esp,%ebp
080950c9 +0x1f:  mov    0x8(%ebp),%eax
080950cc +0x22:  mov    0x4(%eax),%eax
080950cf +0x25:  pop    %ebp
080950d0 +0x26:  ret
080950d1 +0x27:  nop
080950d2 +0x28:  nop
080950d3 +0x29:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80950aa

/* SlangFilter::SlangFilter() */

void SlangFilter::_GLOBAL__I_SlangFilter(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
