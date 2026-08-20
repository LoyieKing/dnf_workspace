# CSHA1

`_ZN5CSHA1C1Ev`

`CSHA1::CSHA1()`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x08087d28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08087d28  _ZN5CSHA1C1Ev
#           CSHA1::CSHA1()
# range [0x08087d28, 0x08087d4b]
08087d28 +0x00:  push   %ebp
08087d29 +0x01:  mov    %esp,%ebp
08087d2b +0x03:  sub    $0x18,%esp
08087d2e +0x06:  mov    0x8(%ebp),%eax
08087d31 +0x09:  sub    $0xffffff80,%eax
08087d34 +0x0c:  mov    %eax,%edx
08087d36 +0x0e:  mov    0x8(%ebp),%eax
08087d39 +0x11:  mov    %edx,0xc0(%eax)
08087d3f +0x17:  mov    0x8(%ebp),%eax
08087d42 +0x1a:  mov    %eax,(%esp)
08087d45 +0x1d:  call   08087d60 <_ZN5CSHA15ResetEv>  ; CSHA1::Reset()
08087d4a +0x22:  leave
08087d4b +0x23:  ret
```

## 反编译 C

```c
// CSHA1::CSHA1 @ 0x8087d28

/* CSHA1::CSHA1() */

void __thiscall CSHA1::CSHA1(CSHA1 *this)

{
  *(CSHA1 **)(this + 0xc0) = this + 0x80;
  Reset(this);
  return;
}
```
