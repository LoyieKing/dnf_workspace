# ~BestClearTime

`_ZN13BestClearTimeD0Ev`

`BestClearTime::~BestClearTime()`

| 类 | 地址 |
|---|---|
| `BestClearTime` | `0x080c85f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c85f8  _ZN13BestClearTimeD0Ev
#           BestClearTime::~BestClearTime()
# range [0x080c85f8, 0x080c8615]
080c85f8 +0x00:  push   %ebp
080c85f9 +0x01:  mov    %esp,%ebp
080c85fb +0x03:  sub    $0x18,%esp
080c85fe +0x06:  mov    0x8(%ebp),%eax
080c8601 +0x09:  mov    %eax,(%esp)
080c8604 +0x0c:  call   080c8596 <_ZN13BestClearTimeD1Ev>  ; BestClearTime::~BestClearTime()
080c8609 +0x11:  mov    0x8(%ebp),%eax
080c860c +0x14:  mov    %eax,(%esp)
080c860f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080c8614 +0x1c:  leave
080c8615 +0x1d:  ret
```

## 反编译 C

```c
// BestClearTime::~BestClearTime @ 0x80c85f8

/* BestClearTime::~BestClearTime() */

void __thiscall BestClearTime::~BestClearTime(BestClearTime *this)

{
  ~BestClearTime(this);
  operator_delete(this);
  return;
}
```
