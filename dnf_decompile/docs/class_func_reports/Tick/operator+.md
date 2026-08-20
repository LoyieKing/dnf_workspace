# operator+

`_ZNK4TickplEi`

`Tick::operator+(int) const`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade920` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade920  _ZNK4TickplEi
#           Tick::operator+(int) const
# range [0x08ade920, 0x08ade94b]
08ade920 +0x00:  push   %ebp
08ade921 +0x01:  mov    %esp,%ebp
08ade923 +0x03:  push   %ebx
08ade924 +0x04:  sub    $0x8,%esp
08ade927 +0x07:  mov    0x8(%ebp),%ebx
08ade92a +0x0a:  mov    0xc(%ebp),%eax
08ade92d +0x0d:  mov    (%eax),%edx
08ade92f +0x0f:  mov    0x10(%ebp),%eax
08ade932 +0x12:  lea    (%edx,%eax,1),%eax
08ade935 +0x15:  mov    %eax,0x4(%esp)
08ade939 +0x19:  mov    %ebx,(%esp)
08ade93c +0x1c:  call   08ade836 <_ZN4TickC1Ej>  ; Tick::Tick(unsigned int)
08ade941 +0x21:  mov    %ebx,%eax
08ade943 +0x23:  add    $0x8,%esp
08ade946 +0x26:  pop    %ebx
08ade947 +0x27:  pop    %ebp
08ade948 +0x28:  ret    $0x4
08ade94b +0x2b:  nop
```

## 反编译 C

```c
// Tick::operator+ @ 0x8ade920

/* DWARF original prototype: Tick operator+(Tick * this, int32 span) */

Tick __thiscall Tick::operator+(Tick *this,int32 span)

{
  int in_stack_0000000c;
  
  Tick(this,*(int *)span + in_stack_0000000c);
  return (Tick)(uint32)this;
}
```
