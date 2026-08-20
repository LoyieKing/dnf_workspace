# init

`_ZN8WongWork13CSecurityCard4initEv`

`WongWork::CSecurityCard::init()`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCard` | `0x085fdd68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fdd68  _ZN8WongWork13CSecurityCard4initEv
#           WongWork::CSecurityCard::init()
# range [0x085fdd68, 0x085fddb1]
085fdd68 +0x00:  push   %ebp
085fdd69 +0x01:  mov    %esp,%ebp
085fdd6b +0x03:  mov    0x8(%ebp),%eax
085fdd6e +0x06:  movb   $0x0,0x2f(%eax)
085fdd72 +0x0a:  mov    0x8(%ebp),%eax
085fdd75 +0x0d:  movb   $0x0,0x30(%eax)
085fdd79 +0x11:  mov    0x8(%ebp),%eax
085fdd7c +0x14:  movl   $0x0,0x34(%eax)
085fdd83 +0x1b:  mov    0x8(%ebp),%eax
085fdd86 +0x1e:  movl   $0x0,0x44(%eax)
085fdd8d +0x25:  mov    0x8(%ebp),%eax
085fdd90 +0x28:  movl   $0x0,0x48(%eax)
085fdd97 +0x2f:  mov    0x8(%ebp),%eax
085fdd9a +0x32:  movl   $0x0,0x38(%eax)
085fdda1 +0x39:  mov    0x8(%ebp),%eax
085fdda4 +0x3c:  movb   $0x0,0x31(%eax)
085fdda8 +0x40:  mov    0x8(%ebp),%eax
085fddab +0x43:  movb   $0x0,0x40(%eax)
085fddaf +0x47:  pop    %ebp
085fddb0 +0x48:  ret
085fddb1 +0x49:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCard::init @ 0x85fdd68

/* WongWork::CSecurityCard::init() */

void __thiscall WongWork::CSecurityCard::init(CSecurityCard *this)

{
  this[0x2f] = (CSecurityCard)0x0;
  this[0x30] = (CSecurityCard)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x31] = (CSecurityCard)0x0;
  this[0x40] = (CSecurityCard)0x0;
  return;
}
```
