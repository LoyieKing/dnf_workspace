# HASH64withTransform

`_ZN8TaoCrypt19HASH64withTransformC1Ejj`

`TaoCrypt::HASH64withTransform::HASH64withTransform(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASH64withTransform` | `0x08758c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758c20  _ZN8TaoCrypt19HASH64withTransformC1Ejj
#           TaoCrypt::HASH64withTransform::HASH64withTransform(unsigned int, unsigned int)
# range [0x08758c20, 0x08758c3e]
08758c20 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08758c25 +0x05:  add    $0xc13f73,%ecx
08758c2b +0x0b:  push   %ebp
08758c2c +0x0c:  mov    %esp,%ebp
08758c2e +0x0e:  mov    -0x1fc(%ecx),%eax
08758c34 +0x14:  lea    0x8(%eax),%edx
08758c37 +0x17:  mov    0x8(%ebp),%eax
08758c3a +0x1a:  mov    %edx,(%eax)
08758c3c +0x1c:  pop    %ebp
08758c3d +0x1d:  ret
08758c3e +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::HASH64withTransform::HASH64withTransform @ 0x8758c20

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* TaoCrypt::HASH64withTransform::HASH64withTransform(unsigned int, unsigned int) */

void __thiscall
TaoCrypt::HASH64withTransform::HASH64withTransform
          (HASH64withTransform *this,uint param_1,uint param_2)

{
  *(undefined **)this = PTR_vtable_0936c99c + 8;
  return;
}
```
