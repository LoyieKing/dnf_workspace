# equivalent

`_ZNKSt14error_category10equivalentERKSt10error_codei`

`std::error_category::equivalent(std::error_code const&, int) const`

| 类 | 地址 |
|---|---|
| `std::error_category` | `0x086df600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df600  _ZNKSt14error_category10equivalentERKSt10error_codei
#           std::error_category::equivalent(std::error_code const&, int) const
# range [0x086df600, 0x086df62f]
086df600 +0x00:  push   %ebp
086df601 +0x01:  xor    %eax,%eax
086df603 +0x03:  mov    %esp,%ebp
086df605 +0x05:  mov    0xc(%ebp),%edx
086df608 +0x08:  mov    0x8(%ebp),%ecx
086df60b +0x0b:  cmp    0x4(%edx),%ecx
086df60e +0x0e:  je     086df618 <+0x18>
086df610 +0x10:  pop    %ebp
086df611 +0x11:  ret
086df612 +0x12:  lea    0x0(%esi),%esi
086df618 +0x18:  mov    0x10(%ebp),%eax
086df61b +0x1b:  cmp    (%edx),%eax
086df61d +0x1d:  pop    %ebp
086df61e +0x1e:  sete   %al
086df621 +0x21:  ret
086df622 +0x22:  nop
086df623 +0x23:  nop
086df624 +0x24:  nop
086df625 +0x25:  nop
086df626 +0x26:  nop
086df627 +0x27:  nop
086df628 +0x28:  nop
086df629 +0x29:  nop
086df62a +0x2a:  nop
086df62b +0x2b:  nop
086df62c +0x2c:  nop
086df62d +0x2d:  nop
086df62e +0x2e:  nop
086df62f +0x2f:  nop
```

## 反编译 C

```c
// std::error_category::equivalent @ 0x86df600

/* std::error_category::equivalent(std::error_code const&, int) const */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  if (this != *(error_category **)(param_1 + 4)) {
    return false;
  }
  return param_2 == *(int *)param_1;
}
```
