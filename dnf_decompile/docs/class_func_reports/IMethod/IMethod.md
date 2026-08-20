# IMethod

`_ZN7IMethodC1Ev`

`IMethod::IMethod()`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b4294` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b4294  _ZN7IMethodC1Ev
#           IMethod::IMethod()
# range [0x080b4294, 0x080b42d1]
080b4294 +0x00:  push   %ebp
080b4295 +0x01:  mov    %esp,%ebp
080b4297 +0x03:  mov    0x8(%ebp),%eax
080b429a +0x06:  movl   $&_ZTV7IMethod+0x8,(%eax)
080b42a0 +0x0c:  mov    0x8(%ebp),%eax
080b42a3 +0x0f:  movb   $0x0,0x4(%eax)
080b42a7 +0x13:  mov    0x8(%ebp),%eax
080b42aa +0x16:  movl   $0x0,0x8(%eax)
080b42b1 +0x1d:  mov    0x8(%ebp),%eax
080b42b4 +0x20:  movl   $0x0,0xc(%eax)
080b42bb +0x27:  mov    0x8(%ebp),%eax
080b42be +0x2a:  movl   $0x0,0x10(%eax)
080b42c5 +0x31:  mov    0x8(%ebp),%eax
080b42c8 +0x34:  movl   $0x0,0x14(%eax)
080b42cf +0x3b:  pop    %ebp
080b42d0 +0x3c:  ret
080b42d1 +0x3d:  nop
```

## 反编译 C

```c
// IMethod::IMethod @ 0x80b4294

/* IMethod::IMethod() */

void __thiscall IMethod::IMethod(IMethod *this)

{
  *(undefined ***)this = &PTR__IMethod_08b1f3e8;
  this[4] = (IMethod)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}
```
