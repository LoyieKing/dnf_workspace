# ~IChecksum

`_ZN9IChecksumD0Ev`

`IChecksum::~IChecksum()`

| 类 | 地址 |
|---|---|
| `IChecksum` | `0x0809deae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809deae  _ZN9IChecksumD0Ev
#           IChecksum::~IChecksum()
# range [0x0809deae, 0x0809decb]
0809deae +0x00:  push   %ebp
0809deaf +0x01:  mov    %esp,%ebp
0809deb1 +0x03:  sub    $0x18,%esp
0809deb4 +0x06:  mov    0x8(%ebp),%eax
0809deb7 +0x09:  mov    %eax,(%esp)
0809deba +0x0c:  call   0809de88 <_ZN9IChecksumD1Ev>  ; IChecksum::~IChecksum()
0809debf +0x11:  mov    0x8(%ebp),%eax
0809dec2 +0x14:  mov    %eax,(%esp)
0809dec5 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0809deca +0x1c:  leave
0809decb +0x1d:  ret
```

## 反编译 C

```c
// IChecksum::~IChecksum @ 0x809deae

/* IChecksum::~IChecksum() */

void __thiscall IChecksum::~IChecksum(IChecksum *this)

{
  ~IChecksum(this);
  operator_delete(this);
  return;
}
```
