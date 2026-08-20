# resetMemberUseCoin

`_ZN6CParty18resetMemberUseCoinEv`

`CParty::resetMemberUseCoin()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bdcec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bdcec  _ZN6CParty18resetMemberUseCoinEv
#           CParty::resetMemberUseCoin()
# range [0x085bdcec, 0x085bdd29]
085bdcec +0x00:  push   %ebp
085bdced +0x01:  mov    %esp,%ebp
085bdcef +0x03:  sub    $0x10,%esp
085bdcf2 +0x06:  movl   $0x0,-0x4(%ebp)
085bdcf9 +0x0d:  jmp    085bdd1c <+0x30>
085bdcfb +0x0f:  mov    -0x4(%ebp),%edx
085bdcfe +0x12:  mov    0x8(%ebp),%ecx
085bdd01 +0x15:  mov    %edx,%eax
085bdd03 +0x17:  add    %eax,%eax
085bdd05 +0x19:  add    %edx,%eax
085bdd07 +0x1b:  shl    $0x3,%eax
085bdd0a +0x1e:  lea    (%ecx,%eax,1),%eax
085bdd0d +0x21:  add    $0x8c,%eax
085bdd12 +0x26:  movl   $0x0,(%eax)
085bdd18 +0x2c:  addl   $0x1,-0x4(%ebp)
085bdd1c +0x30:  cmpl   $0x3,-0x4(%ebp)
085bdd20 +0x34:  setle  %al
085bdd23 +0x37:  test   %al,%al
085bdd25 +0x39:  jne    085bdcfb <+0xf>
085bdd27 +0x3b:  leave
085bdd28 +0x3c:  ret
085bdd29 +0x3d:  nop
```

## 反编译 C

```c
// CParty::resetMemberUseCoin @ 0x85bdcec

/* CParty::resetMemberUseCoin() */

void __thiscall CParty::resetMemberUseCoin(CParty *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 0x18 + 0x8c) = 0;
  }
  return;
}
```
