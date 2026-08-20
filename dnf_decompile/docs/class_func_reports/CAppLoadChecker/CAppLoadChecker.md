# CAppLoadChecker

`_ZN15CAppLoadCheckerC1Ev`

`CAppLoadChecker::CAppLoadChecker()`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x085ffc6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ffc6a  _ZN15CAppLoadCheckerC1Ev
#           CAppLoadChecker::CAppLoadChecker()
# range [0x085ffc6a, 0x085ffcb1]
085ffc6a +0x00:  push   %ebp
085ffc6b +0x01:  mov    %esp,%ebp
085ffc6d +0x03:  mov    0x8(%ebp),%eax
085ffc70 +0x06:  movl   $0x0,(%eax)
085ffc76 +0x0c:  mov    0x8(%ebp),%eax
085ffc79 +0x0f:  movl   $0x0,0x4(%eax)
085ffc80 +0x16:  mov    0x8(%ebp),%eax
085ffc83 +0x19:  movl   $0x0,0x8(%eax)
085ffc8a +0x20:  mov    0x8(%ebp),%eax
085ffc8d +0x23:  movl   $0x0,0xc(%eax)
085ffc94 +0x2a:  mov    0x8(%ebp),%eax
085ffc97 +0x2d:  movb   $0x0,0x10(%eax)
085ffc9b +0x31:  mov    0x8(%ebp),%eax
085ffc9e +0x34:  movb   $0x0,0x11(%eax)
085ffca2 +0x38:  mov    0x8(%ebp),%eax
085ffca5 +0x3b:  movb   $0x0,0x12(%eax)
085ffca9 +0x3f:  mov    0x8(%ebp),%eax
085ffcac +0x42:  movb   $0x0,0x13(%eax)
085ffcb0 +0x46:  pop    %ebp
085ffcb1 +0x47:  ret
```

## 反编译 C

```c
// CAppLoadChecker::CAppLoadChecker @ 0x85ffc6a

/* CAppLoadChecker::CAppLoadChecker() */

void __thiscall CAppLoadChecker::CAppLoadChecker(CAppLoadChecker *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CAppLoadChecker)0x0;
  this[0x11] = (CAppLoadChecker)0x0;
  this[0x12] = (CAppLoadChecker)0x0;
  this[0x13] = (CAppLoadChecker)0x0;
  return;
}
```
