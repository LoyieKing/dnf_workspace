# unlockCreateCharac

`_ZN5CUser18unlockCreateCharacEv`

`CUser::unlockCreateCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aab6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aab6  _ZN5CUser18unlockCreateCharacEv
#           CUser::unlockCreateCharac()
# range [0x0864aab6, 0x0864aae5]
0864aab6 +0x00:  push   %ebp
0864aab7 +0x01:  mov    %esp,%ebp
0864aab9 +0x03:  sub    $0x18,%esp
0864aabc +0x06:  mov    0x8(%ebp),%eax
0864aabf +0x09:  mov    %eax,(%esp)
0864aac2 +0x0c:  call   0864aae6 <_ZN5CUser20isLockedCreateCharacEv>  ; CUser::isLockedCreateCharac()
0864aac7 +0x11:  xor    $0x1,%eax
0864aaca +0x14:  test   %al,%al
0864aacc +0x16:  je     0864aad5 <+0x1f>
0864aace +0x18:  mov    $0x0,%eax
0864aad3 +0x1d:  jmp    0864aae4 <+0x2e>
0864aad5 +0x1f:  mov    0x8(%ebp),%eax
0864aad8 +0x22:  movb   $0x0,0x8d0f2(%eax)
0864aadf +0x29:  mov    $0x1,%eax
0864aae4 +0x2e:  leave
0864aae5 +0x2f:  ret
```

## 反编译 C

```c
// CUser::unlockCreateCharac @ 0x864aab6

/* CUser::unlockCreateCharac() */

bool __thiscall CUser::unlockCreateCharac(CUser *this)

{
  char cVar1;
  
  cVar1 = isLockedCreateCharac(this);
  if (cVar1 == '\x01') {
    this[0x8d0f2] = (CUser)0x0;
  }
  return cVar1 == '\x01';
}
```
