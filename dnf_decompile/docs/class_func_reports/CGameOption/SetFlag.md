# SetFlag

`_ZN11CGameOption7SetFlagEb`

`CGameOption::SetFlag(bool)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b71bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b71bc  _ZN11CGameOption7SetFlagEb
#           CGameOption::SetFlag(bool)
# range [0x084b71bc, 0x084b71d7]
084b71bc +0x00:  push   %ebp
084b71bd +0x01:  mov    %esp,%ebp
084b71bf +0x03:  sub    $0x4,%esp
084b71c2 +0x06:  mov    0xc(%ebp),%eax
084b71c5 +0x09:  mov    %al,-0x4(%ebp)
084b71c8 +0x0c:  mov    0x8(%ebp),%eax
084b71cb +0x0f:  movzbl -0x4(%ebp),%edx
084b71cf +0x13:  mov    %dl,0x62b(%eax)
084b71d5 +0x19:  leave
084b71d6 +0x1a:  ret
084b71d7 +0x1b:  nop
```

## 反编译 C

```c
// CGameOption::SetFlag @ 0x84b71bc

/* CGameOption::SetFlag(bool) */

void __thiscall CGameOption::SetFlag(CGameOption *this,bool param_1)

{
  this[0x62b] = (CGameOption)param_1;
  return;
}
```
