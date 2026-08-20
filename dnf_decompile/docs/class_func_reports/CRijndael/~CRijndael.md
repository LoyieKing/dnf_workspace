# ~CRijndael

`_ZN9CRijndaelD1Ev`

`CRijndael::~CRijndael()`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b61d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b61d2  _ZN9CRijndaelD1Ev
#           CRijndael::~CRijndael()
# range [0x080b61d2, 0x080b6201]
080b61d2 +0x00:  push   %ebp
080b61d3 +0x01:  mov    %esp,%ebp
080b61d5 +0x03:  sub    $0x18,%esp
080b61d8 +0x06:  mov    0x8(%ebp),%eax
080b61db +0x09:  movl   $&_ZTV9CRijndael+0x8,(%eax)
080b61e1 +0x0f:  mov    0x8(%ebp),%eax
080b61e4 +0x12:  mov    %eax,(%esp)
080b61e7 +0x15:  call   080b42d2 <_ZN7IMethodD1Ev>  ; IMethod::~IMethod()
080b61ec +0x1a:  mov    $0x0,%eax
080b61f1 +0x1f:  test   %al,%al
080b61f3 +0x21:  je     080b6200 <+0x2e>
080b61f5 +0x23:  mov    0x8(%ebp),%eax
080b61f8 +0x26:  mov    %eax,(%esp)
080b61fb +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b6200 +0x2e:  leave
080b6201 +0x2f:  ret
```

## 反编译 C

```c
// CRijndael::~CRijndael @ 0x80b61d2

/* WARNING: Removing unreachable block (ram,0x080b61f5) */
/* CRijndael::~CRijndael() */

void __thiscall CRijndael::~CRijndael(CRijndael *this)

{
  *(undefined ***)this = &PTR__CRijndael_08b22f68;
  IMethod::~IMethod((IMethod *)this);
  return;
}
```
