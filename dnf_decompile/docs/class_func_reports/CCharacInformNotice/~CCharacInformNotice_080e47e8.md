# ~CCharacInformNotice

`_ZN19CCharacInformNoticeD0Ev`

`CCharacInformNotice::~CCharacInformNotice()`

| 类 | 地址 |
|---|---|
| `CCharacInformNotice` | `0x080e47e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e47e8  _ZN19CCharacInformNoticeD0Ev
#           CCharacInformNotice::~CCharacInformNotice()
# range [0x080e47e8, 0x080e4805]
080e47e8 +0x00:  push   %ebp
080e47e9 +0x01:  mov    %esp,%ebp
080e47eb +0x03:  sub    $0x18,%esp
080e47ee +0x06:  mov    0x8(%ebp),%eax
080e47f1 +0x09:  mov    %eax,(%esp)
080e47f4 +0x0c:  call   080e47b8 <_ZN19CCharacInformNoticeD1Ev>  ; CCharacInformNotice::~CCharacInformNotice()
080e47f9 +0x11:  mov    0x8(%ebp),%eax
080e47fc +0x14:  mov    %eax,(%esp)
080e47ff +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e4804 +0x1c:  leave
080e4805 +0x1d:  ret
```

## 反编译 C

```c
// CCharacInformNotice::~CCharacInformNotice @ 0x80e47e8

/* CCharacInformNotice::~CCharacInformNotice() */

void __thiscall CCharacInformNotice::~CCharacInformNotice(CCharacInformNotice *this)

{
  ~CCharacInformNotice(this);
  operator_delete(this);
  return;
}
```
