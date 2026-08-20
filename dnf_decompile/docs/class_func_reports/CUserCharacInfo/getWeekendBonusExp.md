# getWeekendBonusExp

`_ZN15CUserCharacInfo18getWeekendBonusExpEv`

`CUserCharacInfo::getWeekendBonusExp()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e328` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e328  _ZN15CUserCharacInfo18getWeekendBonusExpEv
#           CUserCharacInfo::getWeekendBonusExp()
# range [0x0868e328, 0x0868e349]
0868e328 +0x00:  push   %ebp
0868e329 +0x01:  mov    %esp,%ebp
0868e32b +0x03:  mov    0x8(%ebp),%eax
0868e32e +0x06:  mov    0x10(%eax),%eax
0868e331 +0x09:  test   %eax,%eax
0868e333 +0x0b:  je     0868e343 <+0x1b>
0868e335 +0x0d:  mov    0x8(%ebp),%eax
0868e338 +0x10:  mov    0x10(%eax),%eax
0868e33b +0x13:  mov    0x1291(%eax),%eax
0868e341 +0x19:  jmp    0868e348 <+0x20>
0868e343 +0x1b:  mov    $0x0,%eax
0868e348 +0x20:  pop    %ebp
0868e349 +0x21:  ret
```

## 反编译 C

```c
// CUserCharacInfo::getWeekendBonusExp @ 0x868e328

/* CUserCharacInfo::getWeekendBonusExp() */

undefined4 __thiscall CUserCharacInfo::getWeekendBonusExp(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x1291);
  }
  return uVar1;
}
```
