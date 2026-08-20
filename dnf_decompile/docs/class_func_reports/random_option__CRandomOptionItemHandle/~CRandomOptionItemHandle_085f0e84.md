# ~CRandomOptionItemHandle

`_ZN13random_option23CRandomOptionItemHandleD0Ev`

`random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle()`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f0e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f0e84  _ZN13random_option23CRandomOptionItemHandleD0Ev
#           random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle()
# range [0x085f0e84, 0x085f0ea1]
085f0e84 +0x00:  push   %ebp
085f0e85 +0x01:  mov    %esp,%ebp
085f0e87 +0x03:  sub    $0x18,%esp
085f0e8a +0x06:  mov    0x8(%ebp),%eax
085f0e8d +0x09:  mov    %eax,(%esp)
085f0e90 +0x0c:  call   085f0e46 <_ZN13random_option23CRandomOptionItemHandleD1Ev>  ; random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle()
085f0e95 +0x11:  mov    0x8(%ebp),%eax
085f0e98 +0x14:  mov    %eax,(%esp)
085f0e9b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085f0ea0 +0x1c:  leave
085f0ea1 +0x1d:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle @ 0x85f0e84

/* random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle() */

void __thiscall
random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle(CRandomOptionItemHandle *this)

{
  ~CRandomOptionItemHandle(this);
  operator_delete(this);
  return;
}
```
