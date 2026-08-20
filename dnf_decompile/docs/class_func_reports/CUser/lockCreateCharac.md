# lockCreateCharac

`_ZN5CUser16lockCreateCharacEv`

`CUser::lockCreateCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aa88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aa88  _ZN5CUser16lockCreateCharacEv
#           CUser::lockCreateCharac()
# range [0x0864aa88, 0x0864aab5]
0864aa88 +0x00:  push   %ebp
0864aa89 +0x01:  mov    %esp,%ebp
0864aa8b +0x03:  sub    $0x18,%esp
0864aa8e +0x06:  mov    0x8(%ebp),%eax
0864aa91 +0x09:  mov    %eax,(%esp)
0864aa94 +0x0c:  call   0864aae6 <_ZN5CUser20isLockedCreateCharacEv>  ; CUser::isLockedCreateCharac()
0864aa99 +0x11:  test   %al,%al
0864aa9b +0x13:  je     0864aaa4 <+0x1c>
0864aa9d +0x15:  mov    $0x0,%eax
0864aaa2 +0x1a:  jmp    0864aab3 <+0x2b>
0864aaa4 +0x1c:  mov    0x8(%ebp),%eax
0864aaa7 +0x1f:  movb   $0x1,0x8d0f2(%eax)
0864aaae +0x26:  mov    $0x1,%eax
0864aab3 +0x2b:  leave
0864aab4 +0x2c:  ret
0864aab5 +0x2d:  nop
```

## 反编译 C

```c
// CUser::lockCreateCharac @ 0x864aa88

/* CUser::lockCreateCharac() */

bool __thiscall CUser::lockCreateCharac(CUser *this)

{
  char cVar1;
  
  cVar1 = isLockedCreateCharac(this);
  if (cVar1 == '\0') {
    this[0x8d0f2] = (CUser)0x1;
  }
  return cVar1 == '\0';
}
```
