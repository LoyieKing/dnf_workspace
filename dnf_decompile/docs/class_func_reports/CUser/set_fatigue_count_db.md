# set_fatigue_count_db

`_ZN5CUser20set_fatigue_count_dbEii`

`CUser::set_fatigue_count_db(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d4a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d4a2  _ZN5CUser20set_fatigue_count_dbEii
#           CUser::set_fatigue_count_db(int, int)
# range [0x0868d4a2, 0x0868d4c3]
0868d4a2 +0x00:  push   %ebp
0868d4a3 +0x01:  mov    %esp,%ebp
0868d4a5 +0x03:  mov    0xc(%ebp),%eax
0868d4a8 +0x06:  mov    %eax,%edx
0868d4aa +0x08:  mov    0x8(%ebp),%eax
0868d4ad +0x0b:  mov    %dl,0x8eb4d(%eax)
0868d4b3 +0x11:  mov    0x10(%ebp),%eax
0868d4b6 +0x14:  mov    %eax,%edx
0868d4b8 +0x16:  mov    0x8(%ebp),%eax
0868d4bb +0x19:  mov    %dl,0x8eb4c(%eax)
0868d4c1 +0x1f:  pop    %ebp
0868d4c2 +0x20:  ret
0868d4c3 +0x21:  nop
```

## 反编译 C

```c
// CUser::set_fatigue_count_db @ 0x868d4a2

/* CUser::set_fatigue_count_db(int, int) */

void __thiscall CUser::set_fatigue_count_db(CUser *this,int param_1,int param_2)

{
  this[0x8eb4d] = SUB41(param_1,0);
  this[0x8eb4c] = SUB41(param_2,0);
  return;
}
```
