# operator-

`_ZNK4TickmiEi`

`Tick::operator-(int) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade94c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade94c  _ZNK4TickmiEi
#           Tick::operator-(int) const
# range [0x08ade94c, 0x08ade977]
08ade94c +0x00:  push   %ebp
08ade94d +0x01:  mov    %esp,%ebp
08ade94f +0x03:  push   %ebx
08ade950 +0x04:  sub    $0x8,%esp
08ade953 +0x07:  mov    0x8(%ebp),%ebx
08ade956 +0x0a:  mov    0xc(%ebp),%eax
08ade959 +0x0d:  mov    (%eax),%edx
08ade95b +0x0f:  mov    0x10(%ebp),%eax
08ade95e +0x12:  mov    %edx,%ecx
08ade960 +0x14:  sub    %eax,%ecx
08ade962 +0x16:  mov    %ecx,%eax
08ade964 +0x18:  mov    %eax,0x4(%esp)
08ade968 +0x1c:  mov    %ebx,(%esp)
08ade96b +0x1f:  call   08ade836 <_ZN4TickC1Ej>  ; Tick::Tick(unsigned int)
08ade970 +0x24:  mov    %ebx,%eax
08ade972 +0x26:  add    $0x8,%esp
08ade975 +0x29:  pop    %ebx
08ade976 +0x2a:  pop    %ebp
08ade977 +0x2b:  ret    $0x4
```

## 反编译 C

```c
// Tick::operator- @ 0x8ade94c

/* DWARF original prototype: Tick operator-(Tick * this, int32 span) */

Tick __thiscall Tick::operator-(Tick *this,int32 span)

{
  int in_stack_0000000c;
  
  Tick(this,*(int *)span - in_stack_0000000c);
  return (Tick)(uint32)this;
}
```
