# unlockDeleteCharac

`_ZN5CUser18unlockDeleteCharacEv`

`CUser::unlockDeleteCharac()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aa48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aa48  _ZN5CUser18unlockDeleteCharacEv
#           CUser::unlockDeleteCharac()
# range [0x0864aa48, 0x0864aa77]
0864aa48 +0x00:  push   %ebp
0864aa49 +0x01:  mov    %esp,%ebp
0864aa4b +0x03:  sub    $0x18,%esp
0864aa4e +0x06:  mov    0x8(%ebp),%eax
0864aa51 +0x09:  mov    %eax,(%esp)
0864aa54 +0x0c:  call   0864aa78 <_ZN5CUser20isLockedDeleteCharacEv>  ; CUser::isLockedDeleteCharac()
0864aa59 +0x11:  xor    $0x1,%eax
0864aa5c +0x14:  test   %al,%al
0864aa5e +0x16:  je     0864aa67 <+0x1f>
0864aa60 +0x18:  mov    $0x0,%eax
0864aa65 +0x1d:  jmp    0864aa76 <+0x2e>
0864aa67 +0x1f:  mov    0x8(%ebp),%eax
0864aa6a +0x22:  movb   $0x0,0x8d0f1(%eax)
0864aa71 +0x29:  mov    $0x1,%eax
0864aa76 +0x2e:  leave
0864aa77 +0x2f:  ret
```

## 反编译 C

```c
// CUser::unlockDeleteCharac @ 0x864aa48

/* CUser::unlockDeleteCharac() */

bool __thiscall CUser::unlockDeleteCharac(CUser *this)

{
  char cVar1;
  
  cVar1 = isLockedDeleteCharac(this);
  if (cVar1 == '\x01') {
    this[0x8d0f1] = (CUser)0x0;
  }
  return cVar1 == '\x01';
}
```
