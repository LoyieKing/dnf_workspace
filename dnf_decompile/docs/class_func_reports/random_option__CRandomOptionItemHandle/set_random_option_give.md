# set_random_option_give

`_ZN13random_option23CRandomOptionItemHandle22set_random_option_giveEP17CRandomOptionGive`

`random_option::CRandomOptionItemHandle::set_random_option_give(CRandomOptionGive*)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f0ea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0ea2  _ZN13random_option23CRandomOptionItemHandle22set_random_option_giveEP17CRandomOptionGive
#           random_option::CRandomOptionItemHandle::set_random_option_give(CRandomOptionGive*)
# range [0x085f0ea2, 0x085f0eaf]
085f0ea2 +0x00:  push   %ebp
085f0ea3 +0x01:  mov    %esp,%ebp
085f0ea5 +0x03:  mov    0x8(%ebp),%eax
085f0ea8 +0x06:  mov    0xc(%ebp),%edx
085f0eab +0x09:  mov    %edx,0x14(%eax)
085f0eae +0x0c:  pop    %ebp
085f0eaf +0x0d:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::set_random_option_give @ 0x85f0ea2

/* random_option::CRandomOptionItemHandle::set_random_option_give(CRandomOptionGive*) */

void __thiscall
random_option::CRandomOptionItemHandle::set_random_option_give
          (CRandomOptionItemHandle *this,CRandomOptionGive *param_1)

{
  *(CRandomOptionGive **)(this + 0x14) = param_1;
  return;
}
```
