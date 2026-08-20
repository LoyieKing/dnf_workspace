# IsCurCharacVisible

`_ZN15CUserCharacInfo18IsCurCharacVisibleEv`

`CUserCharacInfo::IsCurCharacVisible()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868bee4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868bee4  _ZN15CUserCharacInfo18IsCurCharacVisibleEv
#           CUserCharacInfo::IsCurCharacVisible()
# range [0x0868bee4, 0x0868bf13]
0868bee4 +0x00:  push   %ebp
0868bee5 +0x01:  mov    %esp,%ebp
0868bee7 +0x03:  mov    0x8(%ebp),%eax
0868beea +0x06:  mov    0x10(%eax),%eax
0868beed +0x09:  test   %eax,%eax
0868beef +0x0b:  je     0868bf0c <+0x28>
0868bef1 +0x0d:  mov    0x8(%ebp),%eax
0868bef4 +0x10:  mov    0x10(%eax),%eax
0868bef7 +0x13:  movzbl 0xe40(%eax),%eax
0868befe +0x1a:  and    $0x1,%eax
0868bf01 +0x1d:  test   %al,%al
0868bf03 +0x1f:  je     0868bf0c <+0x28>
0868bf05 +0x21:  mov    $0x1,%eax
0868bf0a +0x26:  jmp    0868bf11 <+0x2d>
0868bf0c +0x28:  mov    $0x0,%eax
0868bf11 +0x2d:  pop    %ebp
0868bf12 +0x2e:  ret
0868bf13 +0x2f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::IsCurCharacVisible @ 0x868bee4

/* CUserCharacInfo::IsCurCharacVisible() */

undefined4 __thiscall CUserCharacInfo::IsCurCharacVisible(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x10) == 0) || ((*(byte *)(*(int *)(this + 0x10) + 0xe40) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
