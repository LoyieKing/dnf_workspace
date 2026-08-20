# get_fatigue_count_db

`_ZN5CUser20get_fatigue_count_dbEi`

`CUser::get_fatigue_count_db(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d4c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d4c4  _ZN5CUser20get_fatigue_count_dbEi
#           CUser::get_fatigue_count_db(int)
# range [0x0868d4c4, 0x0868d4ef]
0868d4c4 +0x00:  push   %ebp
0868d4c5 +0x01:  mov    %esp,%ebp
0868d4c7 +0x03:  mov    0x8(%ebp),%eax
0868d4ca +0x06:  movzbl 0x8eb4d(%eax),%eax
0868d4d1 +0x0d:  movzbl %al,%eax
0868d4d4 +0x10:  cmp    0xc(%ebp),%eax
0868d4d7 +0x13:  jne    0868d4e8 <+0x24>
0868d4d9 +0x15:  mov    0x8(%ebp),%eax
0868d4dc +0x18:  movzbl 0x8eb4c(%eax),%eax
0868d4e3 +0x1f:  movzbl %al,%eax
0868d4e6 +0x22:  jmp    0868d4ed <+0x29>
0868d4e8 +0x24:  mov    $0x0,%eax
0868d4ed +0x29:  pop    %ebp
0868d4ee +0x2a:  ret
0868d4ef +0x2b:  nop
```

## 反编译 C

```c
// CUser::get_fatigue_count_db @ 0x868d4c4

/* CUser::get_fatigue_count_db(int) */

CUser __thiscall CUser::get_fatigue_count_db(CUser *this,int param_1)

{
  CUser CVar1;
  
  if ((uint)(byte)this[0x8eb4d] == param_1) {
    CVar1 = this[0x8eb4c];
  }
  else {
    CVar1 = (CUser)0x0;
  }
  return CVar1;
}
```
