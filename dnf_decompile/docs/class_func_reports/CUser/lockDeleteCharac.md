# lockDeleteCharac

`_ZN5CUser16lockDeleteCharacEv`

`CUser::lockDeleteCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aa1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aa1a  _ZN5CUser16lockDeleteCharacEv
#           CUser::lockDeleteCharac()
# range [0x0864aa1a, 0x0864aa47]
0864aa1a +0x00:  push   %ebp
0864aa1b +0x01:  mov    %esp,%ebp
0864aa1d +0x03:  sub    $0x18,%esp
0864aa20 +0x06:  mov    0x8(%ebp),%eax
0864aa23 +0x09:  mov    %eax,(%esp)
0864aa26 +0x0c:  call   0864aa78 <_ZN5CUser20isLockedDeleteCharacEv>  ; CUser::isLockedDeleteCharac()
0864aa2b +0x11:  test   %al,%al
0864aa2d +0x13:  je     0864aa36 <+0x1c>
0864aa2f +0x15:  mov    $0x0,%eax
0864aa34 +0x1a:  jmp    0864aa45 <+0x2b>
0864aa36 +0x1c:  mov    0x8(%ebp),%eax
0864aa39 +0x1f:  movb   $0x1,0x8d0f1(%eax)
0864aa40 +0x26:  mov    $0x1,%eax
0864aa45 +0x2b:  leave
0864aa46 +0x2c:  ret
0864aa47 +0x2d:  nop
```

## 反编译 C

```c
// CUser::lockDeleteCharac @ 0x864aa1a

/* CUser::lockDeleteCharac() */

bool __thiscall CUser::lockDeleteCharac(CUser *this)

{
  char cVar1;
  
  cVar1 = isLockedDeleteCharac(this);
  if (cVar1 == '\0') {
    this[0x8d0f1] = (CUser)0x1;
  }
  return cVar1 == '\0';
}
```
