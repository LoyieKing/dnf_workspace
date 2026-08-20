# resetFinishLoadingVar

`_ZN6CParty21resetFinishLoadingVarEv`

`CParty::resetFinishLoadingVar()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8e0e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8e0e  _ZN6CParty21resetFinishLoadingVarEv
#           CParty::resetFinishLoadingVar()
# range [0x085a8e0e, 0x085a8e3b]
085a8e0e +0x00:  push   %ebp
085a8e0f +0x01:  mov    %esp,%ebp
085a8e11 +0x03:  sub    $0x10,%esp
085a8e14 +0x06:  movl   $0x0,-0x4(%ebp)
085a8e1b +0x0d:  jmp    085a8e2f <+0x21>
085a8e1d +0x0f:  mov    -0x4(%ebp),%eax
085a8e20 +0x12:  mov    0x8(%ebp),%edx
085a8e23 +0x15:  movb   $0x0,0x37c(%edx,%eax,1)
085a8e2b +0x1d:  addl   $0x1,-0x4(%ebp)
085a8e2f +0x21:  cmpl   $0x3,-0x4(%ebp)
085a8e33 +0x25:  setle  %al
085a8e36 +0x28:  test   %al,%al
085a8e38 +0x2a:  jne    085a8e1d <+0xf>
085a8e3a +0x2c:  leave
085a8e3b +0x2d:  ret
```

## 反编译 C

```c
// CParty::resetFinishLoadingVar @ 0x85a8e0e

/* CParty::resetFinishLoadingVar() */

void __thiscall CParty::resetFinishLoadingVar(CParty *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    this[local_8 + 0x37c] = (CParty)0x0;
  }
  return;
}
```
