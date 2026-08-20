# destroy

`_ZN11CCharacList7destroyEv`

`CCharacList::destroy()`

| 类 | 地址 |
|---|---|
| `CCharacList` | `0x083494da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083494da  _ZN11CCharacList7destroyEv
#           CCharacList::destroy()
# range [0x083494da, 0x08349513]
083494da +0x00:  push   %ebp
083494db +0x01:  mov    %esp,%ebp
083494dd +0x03:  sub    $0x28,%esp
083494e0 +0x06:  movl   $0x0,-0x10(%ebp)
083494e7 +0x0d:  jmp    08349507 <+0x2d>
083494e9 +0x0f:  mov    -0x10(%ebp),%eax
083494ec +0x12:  imul   $0x7dc,%eax,%eax
083494f2 +0x18:  add    0x8(%ebp),%eax
083494f5 +0x1b:  mov    %eax,-0xc(%ebp)
083494f8 +0x1e:  mov    -0xc(%ebp),%eax
083494fb +0x21:  mov    %eax,(%esp)
083494fe +0x24:  call   083485c4 <_ZN10CCharacter7destroyEv>  ; CCharacter::destroy()
08349503 +0x29:  addl   $0x1,-0x10(%ebp)
08349507 +0x2d:  cmpl   $0xa,-0x10(%ebp)
0834950b +0x31:  setle  %al
0834950e +0x34:  test   %al,%al
08349510 +0x36:  jne    083494e9 <+0xf>
08349512 +0x38:  leave
08349513 +0x39:  ret
```

## 反编译 C

```c
// CCharacList::destroy @ 0x83494da

/* CCharacList::destroy() */

void __thiscall CCharacList::destroy(CCharacList *this)

{
  int local_14;
  
  for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
    CCharacter::destroy((CCharacter *)(this + local_14 * 0x7dc));
  }
  return;
}
```
