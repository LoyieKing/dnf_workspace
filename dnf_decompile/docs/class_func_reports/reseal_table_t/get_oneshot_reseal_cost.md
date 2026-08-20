# get_oneshot_reseal_cost

`_ZN14reseal_table_t23get_oneshot_reseal_costEhhh`

`reseal_table_t::get_oneshot_reseal_cost(unsigned char, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `reseal_table_t` | `0x08900be0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08900be0  _ZN14reseal_table_t23get_oneshot_reseal_costEhhh
#           reseal_table_t::get_oneshot_reseal_cost(unsigned char, unsigned char, unsigned char)
# range [0x08900be0, 0x08900c25]
08900be0 +0x00:  push   %ebp
08900be1 +0x01:  mov    %esp,%ebp
08900be3 +0x03:  sub    $0xc,%esp
08900be6 +0x06:  mov    0xc(%ebp),%ecx
08900be9 +0x09:  mov    0x10(%ebp),%edx
08900bec +0x0c:  mov    0x14(%ebp),%eax
08900bef +0x0f:  mov    %cl,-0x4(%ebp)
08900bf2 +0x12:  mov    %dl,-0x8(%ebp)
08900bf5 +0x15:  mov    %al,-0xc(%ebp)
08900bf8 +0x18:  cmpb   $0x0,-0x8(%ebp)
08900bfc +0x1c:  jne    08900c05 <+0x25>
08900bfe +0x1e:  mov    $0xffffffff,%eax
08900c03 +0x23:  jmp    08900c24 <+0x44>
08900c05 +0x25:  cmpb   $0x5,-0x4(%ebp)
08900c09 +0x29:  jbe    08900c12 <+0x32>
08900c0b +0x2b:  mov    $0xfffffffe,%eax
08900c10 +0x30:  jmp    08900c24 <+0x44>
08900c12 +0x32:  cmpb   $0x63,-0x8(%ebp)
08900c16 +0x36:  jbe    08900c1f <+0x3f>
08900c18 +0x38:  mov    $0xfffffffd,%eax
08900c1d +0x3d:  jmp    08900c24 <+0x44>
08900c1f +0x3f:  mov    $0x1,%eax
08900c24 +0x44:  leave
08900c25 +0x45:  ret
```

## 反编译 C

```c
// reseal_table_t::get_oneshot_reseal_cost @ 0x8900be0

/* reseal_table_t::get_oneshot_reseal_cost(unsigned char, unsigned char, unsigned char) */

undefined4 reseal_table_t::get_oneshot_reseal_cost(uchar param_1,uchar param_2,uchar param_3)

{
  undefined4 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < 6) {
    if (param_3 < 100) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xfffffffd;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}
```
