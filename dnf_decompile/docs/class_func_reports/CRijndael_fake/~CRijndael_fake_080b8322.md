# ~CRijndael_fake

`_ZN14CRijndael_fakeD0Ev`

`CRijndael_fake::~CRijndael_fake()`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b8322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b8322  _ZN14CRijndael_fakeD0Ev
#           CRijndael_fake::~CRijndael_fake()
# range [0x080b8322, 0x080b833f]
080b8322 +0x00:  push   %ebp
080b8323 +0x01:  mov    %esp,%ebp
080b8325 +0x03:  sub    $0x18,%esp
080b8328 +0x06:  mov    0x8(%ebp),%eax
080b832b +0x09:  mov    %eax,(%esp)
080b832e +0x0c:  call   080b82c8 <_ZN14CRijndael_fakeD1Ev>  ; CRijndael_fake::~CRijndael_fake()
080b8333 +0x11:  mov    0x8(%ebp),%eax
080b8336 +0x14:  mov    %eax,(%esp)
080b8339 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080b833e +0x1c:  leave
080b833f +0x1d:  ret
```

## 反编译 C

```c
// CRijndael_fake::~CRijndael_fake @ 0x80b8322

/* CRijndael_fake::~CRijndael_fake() */

void __thiscall CRijndael_fake::~CRijndael_fake(CRijndael_fake *this)

{
  ~CRijndael_fake(this);
  operator_delete(this);
  return;
}
```
