# ~IMethod

`_ZN7IMethodD1Ev`

`IMethod::~IMethod()`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b42d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b42d2  _ZN7IMethodD1Ev
#           IMethod::~IMethod()
# range [0x080b42d2, 0x080b42f7]
080b42d2 +0x00:  push   %ebp
080b42d3 +0x01:  mov    %esp,%ebp
080b42d5 +0x03:  sub    $0x18,%esp
080b42d8 +0x06:  mov    0x8(%ebp),%eax
080b42db +0x09:  movl   $&_ZTV7IMethod+0x8,(%eax)
080b42e1 +0x0f:  mov    $0x0,%eax
080b42e6 +0x14:  test   %al,%al
080b42e8 +0x16:  je     080b42f5 <+0x23>
080b42ea +0x18:  mov    0x8(%ebp),%eax
080b42ed +0x1b:  mov    %eax,(%esp)
080b42f0 +0x1e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b42f5 +0x23:  leave
080b42f6 +0x24:  ret
080b42f7 +0x25:  nop
```

## 反编译 C

```c
// IMethod::~IMethod @ 0x80b42d2

/* WARNING: Removing unreachable block (ram,0x080b42ea) */
/* IMethod::~IMethod() */

void __thiscall IMethod::~IMethod(IMethod *this)

{
  *(undefined ***)this = &PTR__IMethod_08b1f3e8;
  return;
}
```
