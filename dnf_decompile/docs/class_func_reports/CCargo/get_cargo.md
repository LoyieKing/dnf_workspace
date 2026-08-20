# get_cargo

`_ZNK6CCargo9get_cargoEPv`

`CCargo::get_cargo(void*) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b164` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b164  _ZNK6CCargo9get_cargoEPv
#           CCargo::get_cargo(void*) const
# range [0x0850b164, 0x0850b19f]
0850b164 +0x00:  push   %ebp
0850b165 +0x01:  mov    %esp,%ebp
0850b167 +0x03:  sub    $0x18,%esp
0850b16a +0x06:  mov    0x8(%ebp),%eax
0850b16d +0x09:  mov    0xc(%eax),%eax
0850b170 +0x0c:  test   %eax,%eax
0850b172 +0x0e:  jg     0850b17b <+0x17>
0850b174 +0x10:  mov    $0x0,%eax
0850b179 +0x15:  jmp    0850b19d <+0x39>
0850b17b +0x17:  mov    0x8(%ebp),%eax
0850b17e +0x1a:  mov    0x4(%eax),%eax
0850b181 +0x1d:  movl   $0x2438,0x8(%esp)
0850b189 +0x25:  mov    %eax,0x4(%esp)
0850b18d +0x29:  mov    0xc(%ebp),%eax
0850b190 +0x2c:  mov    %eax,(%esp)
0850b193 +0x2f:  call   0807d8a0 <_init+0x198>
0850b198 +0x34:  mov    $0x1,%eax
0850b19d +0x39:  leave
0850b19e +0x3a:  ret
0850b19f +0x3b:  nop
```

## 反编译 C

```c
// CCargo::get_cargo @ 0x850b164

/* CCargo::get_cargo(void*) const */

bool __thiscall CCargo::get_cargo(CCargo *this,void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  if (0 < iVar1) {
    memcpy(param_1,*(void **)(this + 4),0x2438);
  }
  return 0 < iVar1;
}
```
