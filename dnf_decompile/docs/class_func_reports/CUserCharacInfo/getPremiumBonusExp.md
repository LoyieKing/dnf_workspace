# getPremiumBonusExp

`_ZNK15CUserCharacInfo18getPremiumBonusExpEv`

`CUserCharacInfo::getPremiumBonusExp() const`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e262` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e262  _ZNK15CUserCharacInfo18getPremiumBonusExpEv
#           CUserCharacInfo::getPremiumBonusExp() const
# range [0x0868e262, 0x0868e283]
0868e262 +0x00:  push   %ebp
0868e263 +0x01:  mov    %esp,%ebp
0868e265 +0x03:  mov    0x8(%ebp),%eax
0868e268 +0x06:  mov    0x10(%eax),%eax
0868e26b +0x09:  test   %eax,%eax
0868e26d +0x0b:  je     0868e27d <+0x1b>
0868e26f +0x0d:  mov    0x8(%ebp),%eax
0868e272 +0x10:  mov    0x10(%eax),%eax
0868e275 +0x13:  mov    0x128d(%eax),%eax
0868e27b +0x19:  jmp    0868e282 <+0x20>
0868e27d +0x1b:  mov    $0x0,%eax
0868e282 +0x20:  pop    %ebp
0868e283 +0x21:  ret
```

## 反编译 C

```c
// CUserCharacInfo::getPremiumBonusExp @ 0x868e262

/* CUserCharacInfo::getPremiumBonusExp() const */

undefined4 __thiscall CUserCharacInfo::getPremiumBonusExp(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x128d);
  }
  return uVar1;
}
```
