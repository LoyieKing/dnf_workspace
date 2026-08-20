# ~CRijndael

`_ZN9CRijndaelD0Ev`

`CRijndael::~CRijndael()`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b6202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b6202  _ZN9CRijndaelD0Ev
#           CRijndael::~CRijndael()
# range [0x080b6202, 0x080b621f]
080b6202 +0x00:  push   %ebp
080b6203 +0x01:  mov    %esp,%ebp
080b6205 +0x03:  sub    $0x18,%esp
080b6208 +0x06:  mov    0x8(%ebp),%eax
080b620b +0x09:  mov    %eax,(%esp)
080b620e +0x0c:  call   080b61d2 <_ZN9CRijndaelD1Ev>  ; CRijndael::~CRijndael()
080b6213 +0x11:  mov    0x8(%ebp),%eax
080b6216 +0x14:  mov    %eax,(%esp)
080b6219 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b621e +0x1c:  leave
080b621f +0x1d:  ret
```

## 反编译 C

```c
// CRijndael::~CRijndael @ 0x80b6202

/* CRijndael::~CRijndael() */

void __thiscall CRijndael::~CRijndael(CRijndael *this)

{
  ~CRijndael(this);
  operator_delete(this);
  return;
}
```
