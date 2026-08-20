# ~IMethod

`_ZN7IMethodD0Ev`

`IMethod::~IMethod()`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b42f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b42f8  _ZN7IMethodD0Ev
#           IMethod::~IMethod()
# range [0x080b42f8, 0x080b4315]
080b42f8 +0x00:  push   %ebp
080b42f9 +0x01:  mov    %esp,%ebp
080b42fb +0x03:  sub    $0x18,%esp
080b42fe +0x06:  mov    0x8(%ebp),%eax
080b4301 +0x09:  mov    %eax,(%esp)
080b4304 +0x0c:  call   080b42d2 <_ZN7IMethodD1Ev>  ; IMethod::~IMethod()
080b4309 +0x11:  mov    0x8(%ebp),%eax
080b430c +0x14:  mov    %eax,(%esp)
080b430f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b4314 +0x1c:  leave
080b4315 +0x1d:  ret
```

## 反编译 C

```c
// IMethod::~IMethod @ 0x80b42f8

/* IMethod::~IMethod() */

void __thiscall IMethod::~IMethod(IMethod *this)

{
  ~IMethod(this);
  operator_delete(this);
  return;
}
```
