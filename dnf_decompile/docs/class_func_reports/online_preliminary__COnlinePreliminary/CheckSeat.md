# CheckSeat

`_ZN18online_preliminary18COnlinePreliminary9CheckSeatEi`

`online_preliminary::COnlinePreliminary::CheckSeat(int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085608bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085608bc  _ZN18online_preliminary18COnlinePreliminary9CheckSeatEi
#           online_preliminary::COnlinePreliminary::CheckSeat(int)
# range [0x085608bc, 0x085608d3]
085608bc +0x00:  push   %ebp
085608bd +0x01:  mov    %esp,%ebp
085608bf +0x03:  cmpl   $0x2,0xc(%ebp)
085608c3 +0x07:  jne    085608cc <+0x10>
085608c5 +0x09:  mov    $0x0,%eax
085608ca +0x0e:  jmp    085608d1 <+0x15>
085608cc +0x10:  mov    $0x1,%eax
085608d1 +0x15:  pop    %ebp
085608d2 +0x16:  ret
085608d3 +0x17:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::CheckSeat @ 0x85608bc

/* online_preliminary::COnlinePreliminary::CheckSeat(int) */

bool __thiscall
online_preliminary::COnlinePreliminary::CheckSeat(COnlinePreliminary *this,int param_1)

{
  return param_1 != 2;
}
```
