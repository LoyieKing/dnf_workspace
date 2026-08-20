# ~CSHA1

`_ZN5CSHA1D1Ev`

`CSHA1::~CSHA1()`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x08087d4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08087d4c  _ZN5CSHA1D1Ev
#           CSHA1::~CSHA1()
# range [0x08087d4c, 0x08087d5f]
08087d4c +0x00:  push   %ebp
08087d4d +0x01:  mov    %esp,%ebp
08087d4f +0x03:  sub    $0x18,%esp
08087d52 +0x06:  mov    0x8(%ebp),%eax
08087d55 +0x09:  mov    %eax,(%esp)
08087d58 +0x0c:  call   08087d60 <_ZN5CSHA15ResetEv>  ; CSHA1::Reset()
08087d5d +0x11:  leave
08087d5e +0x12:  ret
08087d5f +0x13:  nop
```

## 反编译 C

```c
// CSHA1::~CSHA1 @ 0x8087d4c

/* CSHA1::~CSHA1() */

void __thiscall CSHA1::~CSHA1(CSHA1 *this)

{
  Reset(this);
  return;
}
```
