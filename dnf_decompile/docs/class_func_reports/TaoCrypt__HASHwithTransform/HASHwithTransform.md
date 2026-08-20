# HASHwithTransform

`_ZN8TaoCrypt17HASHwithTransformC1Ejj`

`TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::HASHwithTransform` | `0x08758bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08758bd0  _ZN8TaoCrypt17HASHwithTransformC1Ejj
#           TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
# range [0x08758bd0, 0x08758bee]
08758bd0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08758bd5 +0x05:  add    $0xc13fc3,%ecx
08758bdb +0x0b:  push   %ebp
08758bdc +0x0c:  mov    %esp,%ebp
08758bde +0x0e:  mov    -0x130(%ecx),%eax
08758be4 +0x14:  lea    0x8(%eax),%edx
08758be7 +0x17:  mov    0x8(%ebp),%eax
08758bea +0x1a:  mov    %edx,(%eax)
08758bec +0x1c:  pop    %ebp
08758bed +0x1d:  ret
08758bee +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::HASHwithTransform::HASHwithTransform @ 0x8758bd0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int) */

void __thiscall
TaoCrypt::HASHwithTransform::HASHwithTransform(HASHwithTransform *this,uint param_1,uint param_2)

{
  *(undefined **)this = PTR_vtable_0936ca68 + 8;
  return;
}
```
