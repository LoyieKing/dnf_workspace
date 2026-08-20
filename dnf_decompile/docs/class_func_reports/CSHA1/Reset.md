# Reset

`_ZN5CSHA15ResetEv`

`CSHA1::Reset()`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x08087d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08087d60  _ZN5CSHA15ResetEv
#           CSHA1::Reset()
# range [0x08087d60, 0x08087da9]
08087d60 +0x00:  push   %ebp
08087d61 +0x01:  mov    %esp,%ebp
08087d63 +0x03:  mov    0x8(%ebp),%eax
08087d66 +0x06:  movl   $0x67452301,(%eax)
08087d6c +0x0c:  mov    0x8(%ebp),%eax
08087d6f +0x0f:  movl   $0xefcdab89,0x4(%eax)
08087d76 +0x16:  mov    0x8(%ebp),%eax
08087d79 +0x19:  movl   $0x98badcfe,0x8(%eax)
08087d80 +0x20:  mov    0x8(%ebp),%eax
08087d83 +0x23:  movl   $0x10325476,0xc(%eax)
08087d8a +0x2a:  mov    0x8(%ebp),%eax
08087d8d +0x2d:  movl   $0xc3d2e1f0,0x10(%eax)
08087d94 +0x34:  mov    0x8(%ebp),%eax
08087d97 +0x37:  movl   $0x0,0x14(%eax)
08087d9e +0x3e:  mov    0x8(%ebp),%eax
08087da1 +0x41:  movl   $0x0,0x18(%eax)
08087da8 +0x48:  pop    %ebp
08087da9 +0x49:  ret
```

## 反编译 C

```c
// CSHA1::Reset @ 0x8087d60

/* CSHA1::Reset() */

void __thiscall CSHA1::Reset(CSHA1 *this)

{
  *(undefined4 *)this = 0x67452301;
  *(undefined4 *)(this + 4) = 0xefcdab89;
  *(undefined4 *)(this + 8) = 0x98badcfe;
  *(undefined4 *)(this + 0xc) = 0x10325476;
  *(undefined4 *)(this + 0x10) = 0xc3d2e1f0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}
```
