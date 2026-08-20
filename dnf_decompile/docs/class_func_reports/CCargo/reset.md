# reset

`_ZN6CCargo5resetEv`

`CCargo::reset()`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b0c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b0c2  _ZN6CCargo5resetEv
#           CCargo::reset()
# range [0x0850b0c2, 0x0850b115]
0850b0c2 +0x00:  push   %ebp
0850b0c3 +0x01:  mov    %esp,%ebp
0850b0c5 +0x03:  sub    $0x18,%esp
0850b0c8 +0x06:  mov    0x8(%ebp),%eax
0850b0cb +0x09:  movl   $0x0,0x8(%eax)
0850b0d2 +0x10:  mov    0x8(%ebp),%eax
0850b0d5 +0x13:  movl   $0x0,(%eax)
0850b0db +0x19:  mov    0x8(%ebp),%eax
0850b0de +0x1c:  movl   $0x0,0xc(%eax)
0850b0e5 +0x23:  mov    0x8(%ebp),%eax
0850b0e8 +0x26:  movb   $0x0,0x10(%eax)
0850b0ec +0x2a:  mov    0x8(%ebp),%eax
0850b0ef +0x2d:  mov    0x4(%eax),%eax
0850b0f2 +0x30:  test   %eax,%eax
0850b0f4 +0x32:  je     0850b114 <+0x52>
0850b0f6 +0x34:  mov    0x8(%ebp),%eax
0850b0f9 +0x37:  mov    0x4(%eax),%eax
0850b0fc +0x3a:  movl   $0x2438,0x8(%esp)
0850b104 +0x42:  movl   $0x0,0x4(%esp)
0850b10c +0x4a:  mov    %eax,(%esp)
0850b10f +0x4d:  call   0807dcc0 <_init+0x5b8>
0850b114 +0x52:  leave
0850b115 +0x53:  ret
```

## 反编译 C

```c
// CCargo::reset @ 0x850b0c2

/* CCargo::reset() */

void __thiscall CCargo::reset(CCargo *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CCargo)0x0;
  if (*(int *)(this + 4) != 0) {
    memset(*(void **)(this + 4),0,0x2438);
  }
  return;
}
```
