# set_cargo

`_ZN6CCargo9set_cargoEPv`

`CCargo::set_cargo(void*)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b116` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b116  _ZN6CCargo9set_cargoEPv
#           CCargo::set_cargo(void*)
# range [0x0850b116, 0x0850b163]
0850b116 +0x00:  push   %ebp
0850b117 +0x01:  mov    %esp,%ebp
0850b119 +0x03:  sub    $0x18,%esp
0850b11c +0x06:  mov    0x8(%ebp),%eax
0850b11f +0x09:  mov    0xc(%eax),%eax
0850b122 +0x0c:  test   %eax,%eax
0850b124 +0x0e:  jg     0850b12d <+0x17>
0850b126 +0x10:  mov    $0x0,%eax
0850b12b +0x15:  jmp    0850b161 <+0x4b>
0850b12d +0x17:  mov    0x8(%ebp),%eax
0850b130 +0x1a:  movb   $0x0,0x10(%eax)
0850b134 +0x1e:  mov    0x8(%ebp),%eax
0850b137 +0x21:  mov    0x4(%eax),%eax
0850b13a +0x24:  movl   $0x2438,0x8(%esp)
0850b142 +0x2c:  mov    0xc(%ebp),%edx
0850b145 +0x2f:  mov    %edx,0x4(%esp)
0850b149 +0x33:  mov    %eax,(%esp)
0850b14c +0x36:  call   0807d8a0 <_init+0x198>
0850b151 +0x3b:  mov    0x8(%ebp),%eax
0850b154 +0x3e:  mov    %eax,(%esp)
0850b157 +0x41:  call   0850c462 <_ZN6CCargo13_GetItemCountEv>  ; CCargo::_GetItemCount()
0850b15c +0x46:  mov    $0x1,%eax
0850b161 +0x4b:  leave
0850b162 +0x4c:  ret
0850b163 +0x4d:  nop
```

## 反编译 C

```c
// CCargo::set_cargo @ 0x850b116

/* CCargo::set_cargo(void*) */

bool __thiscall CCargo::set_cargo(CCargo *this,void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    this[0x10] = (CCargo)0x0;
    memcpy(*(void **)(this + 4),param_1,0x2438);
    _GetItemCount(this);
  }
  return 0 < iVar1;
}
```
