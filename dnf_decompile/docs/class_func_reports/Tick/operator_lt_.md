# operator<

`_ZNK4TickltES_`

`Tick::operator<(Tick) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade9b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade9b2  _ZNK4TickltES_
#           Tick::operator<(Tick) const
# range [0x08ade9b2, 0x08ade9c7]
08ade9b2 +0x00:  push   %ebp
08ade9b3 +0x01:  mov    %esp,%ebp
08ade9b5 +0x03:  mov    0x8(%ebp),%eax
08ade9b8 +0x06:  mov    (%eax),%edx
08ade9ba +0x08:  mov    0xc(%ebp),%eax
08ade9bd +0x0b:  mov    %edx,%ecx
08ade9bf +0x0d:  sub    %eax,%ecx
08ade9c1 +0x0f:  mov    %ecx,%eax
08ade9c3 +0x11:  shr    $0x1f,%eax
08ade9c6 +0x14:  pop    %ebp
08ade9c7 +0x15:  ret
```

## 反编译 C

```c
// Tick::operator< @ 0x8ade9b2

/* DWARF original prototype: bool operator<(Tick * this, Tick tick) */

bool __thiscall Tick::operator<(Tick *this,Tick tick)

{
  return SUB41(this->value_ - tick.value_ >> 0x1f,0);
}
```
