# resetPremiumBonusExp

`_ZN15CUserCharacInfo20resetPremiumBonusExpEv`

`CUserCharacInfo::resetPremiumBonusExp()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e284  _ZN15CUserCharacInfo20resetPremiumBonusExpEv
#           CUserCharacInfo::resetPremiumBonusExp()
# range [0x0868e284, 0x0868e2a3]
0868e284 +0x00:  push   %ebp
0868e285 +0x01:  mov    %esp,%ebp
0868e287 +0x03:  mov    0x8(%ebp),%eax
0868e28a +0x06:  mov    0x10(%eax),%eax
0868e28d +0x09:  test   %eax,%eax
0868e28f +0x0b:  je     0868e2a1 <+0x1d>
0868e291 +0x0d:  mov    0x8(%ebp),%eax
0868e294 +0x10:  mov    0x10(%eax),%eax
0868e297 +0x13:  movl   $0x0,0x128d(%eax)
0868e2a1 +0x1d:  pop    %ebp
0868e2a2 +0x1e:  ret
0868e2a3 +0x1f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::resetPremiumBonusExp @ 0x868e284

/* CUserCharacInfo::resetPremiumBonusExp() */

void __thiscall CUserCharacInfo::resetPremiumBonusExp(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0x128d) = 0;
  }
  return;
}
```
