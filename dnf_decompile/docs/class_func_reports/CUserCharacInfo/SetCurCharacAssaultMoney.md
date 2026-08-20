# SetCurCharacAssaultMoney

`_ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi`

`CUserCharacInfo::SetCurCharacAssaultMoney(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868ef42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ef42  _ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi
#           CUserCharacInfo::SetCurCharacAssaultMoney(int)
# range [0x0868ef42, 0x0868ef5f]
0868ef42 +0x00:  push   %ebp
0868ef43 +0x01:  mov    %esp,%ebp
0868ef45 +0x03:  mov    0x8(%ebp),%eax
0868ef48 +0x06:  mov    0x10(%eax),%eax
0868ef4b +0x09:  test   %eax,%eax
0868ef4d +0x0b:  je     0868ef5e <+0x1c>
0868ef4f +0x0d:  mov    0x8(%ebp),%eax
0868ef52 +0x10:  mov    0x10(%eax),%eax
0868ef55 +0x13:  mov    0xc(%ebp),%edx
0868ef58 +0x16:  mov    %edx,0x12b1(%eax)
0868ef5e +0x1c:  pop    %ebp
0868ef5f +0x1d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::SetCurCharacAssaultMoney @ 0x868ef42

/* CUserCharacInfo::SetCurCharacAssaultMoney(int) */

void __thiscall CUserCharacInfo::SetCurCharacAssaultMoney(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(int *)(*(int *)(this + 0x10) + 0x12b1) = param_1;
  }
  return;
}
```
