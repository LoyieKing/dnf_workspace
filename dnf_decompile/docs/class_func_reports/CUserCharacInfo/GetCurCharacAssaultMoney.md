# GetCurCharacAssaultMoney

`_ZN15CUserCharacInfo24GetCurCharacAssaultMoneyEv`

`CUserCharacInfo::GetCurCharacAssaultMoney()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ef20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ef20  _ZN15CUserCharacInfo24GetCurCharacAssaultMoneyEv
#           CUserCharacInfo::GetCurCharacAssaultMoney()
# range [0x0868ef20, 0x0868ef41]
0868ef20 +0x00:  push   %ebp
0868ef21 +0x01:  mov    %esp,%ebp
0868ef23 +0x03:  mov    0x8(%ebp),%eax
0868ef26 +0x06:  mov    0x10(%eax),%eax
0868ef29 +0x09:  test   %eax,%eax
0868ef2b +0x0b:  je     0868ef3b <+0x1b>
0868ef2d +0x0d:  mov    0x8(%ebp),%eax
0868ef30 +0x10:  mov    0x10(%eax),%eax
0868ef33 +0x13:  mov    0x12b1(%eax),%eax
0868ef39 +0x19:  jmp    0868ef40 <+0x20>
0868ef3b +0x1b:  mov    $0x0,%eax
0868ef40 +0x20:  pop    %ebp
0868ef41 +0x21:  ret
```

## 反编译 C

```c
// CUserCharacInfo::GetCurCharacAssaultMoney @ 0x868ef20

/* CUserCharacInfo::GetCurCharacAssaultMoney() */

undefined4 __thiscall CUserCharacInfo::GetCurCharacAssaultMoney(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12b1);
  }
  return uVar1;
}
```
