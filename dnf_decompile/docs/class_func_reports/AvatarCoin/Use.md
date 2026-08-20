# Use

`_ZN10AvatarCoin3UseEv`

`AvatarCoin::Use()`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817ff14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ff14  _ZN10AvatarCoin3UseEv
#           AvatarCoin::Use()
# range [0x0817ff14, 0x0817ff43]
0817ff14 +0x00:  push   %ebp
0817ff15 +0x01:  mov    %esp,%ebp
0817ff17 +0x03:  sub    $0x18,%esp
0817ff1a +0x06:  mov    0x8(%ebp),%eax
0817ff1d +0x09:  mov    %eax,(%esp)
0817ff20 +0x0c:  call   0817ff44 <_ZNK10AvatarCoin8IsUsableEv>  ; AvatarCoin::IsUsable() const
0817ff25 +0x11:  test   %al,%al
0817ff27 +0x13:  je     0817ff3d <+0x29>
0817ff29 +0x15:  mov    0x8(%ebp),%eax
0817ff2c +0x18:  mov    (%eax),%eax
0817ff2e +0x1a:  lea    -0x1(%eax),%edx
0817ff31 +0x1d:  mov    0x8(%ebp),%eax
0817ff34 +0x20:  mov    %edx,(%eax)
0817ff36 +0x22:  mov    $0x1,%eax
0817ff3b +0x27:  jmp    0817ff42 <+0x2e>
0817ff3d +0x29:  mov    $0x0,%eax
0817ff42 +0x2e:  leave
0817ff43 +0x2f:  ret
```

## 反编译 C

```c
// AvatarCoin::Use @ 0x817ff14

/* AvatarCoin::Use() */

bool __thiscall AvatarCoin::Use(AvatarCoin *this)

{
  char cVar1;
  
  cVar1 = IsUsable(this);
  if (cVar1 != '\0') {
    *(int *)this = *(int *)this + -1;
  }
  return cVar1 != '\0';
}
```
