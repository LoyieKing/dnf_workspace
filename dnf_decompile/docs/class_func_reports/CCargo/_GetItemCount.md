# _GetItemCount

`_ZN6CCargo13_GetItemCountEv`

`CCargo::_GetItemCount()`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c462` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c462  _ZN6CCargo13_GetItemCountEv
#           CCargo::_GetItemCount()
# range [0x0850c462, 0x0850c4b9]
0850c462 +0x00:  push   %ebp
0850c463 +0x01:  mov    %esp,%ebp
0850c465 +0x03:  sub    $0x10,%esp
0850c468 +0x06:  mov    0x8(%ebp),%eax
0850c46b +0x09:  movl   $0x0,0x8(%eax)
0850c472 +0x10:  movl   $0x0,-0x4(%ebp)
0850c479 +0x17:  jmp    0850c4a4 <+0x42>
0850c47b +0x19:  mov    0x8(%ebp),%eax
0850c47e +0x1c:  mov    0x4(%eax),%edx
0850c481 +0x1f:  mov    -0x4(%ebp),%eax
0850c484 +0x22:  imul   $0x3d,%eax,%eax
0850c487 +0x25:  lea    (%edx,%eax,1),%eax
0850c48a +0x28:  mov    0x2(%eax),%eax
0850c48d +0x2b:  test   %eax,%eax
0850c48f +0x2d:  je     0850c4a0 <+0x3e>
0850c491 +0x2f:  mov    0x8(%ebp),%eax
0850c494 +0x32:  mov    0x8(%eax),%eax
0850c497 +0x35:  lea    0x1(%eax),%edx
0850c49a +0x38:  mov    0x8(%ebp),%eax
0850c49d +0x3b:  mov    %edx,0x8(%eax)
0850c4a0 +0x3e:  addl   $0x1,-0x4(%ebp)
0850c4a4 +0x42:  cmpl   $0x97,-0x4(%ebp)
0850c4ab +0x49:  setle  %al
0850c4ae +0x4c:  test   %al,%al
0850c4b0 +0x4e:  jne    0850c47b <+0x19>
0850c4b2 +0x50:  mov    0x8(%ebp),%eax
0850c4b5 +0x53:  mov    0x8(%eax),%eax
0850c4b8 +0x56:  leave
0850c4b9 +0x57:  ret
```

## 反编译 C

```c
// CCargo::_GetItemCount @ 0x850c462

/* CCargo::_GetItemCount() */

undefined4 __thiscall CCargo::_GetItemCount(CCargo *this)

{
  int local_8;
  
  *(undefined4 *)(this + 8) = 0;
  for (local_8 = 0; local_8 < 0x98; local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(this + 4) + local_8 * 0x3d + 2) != 0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
  }
  return *(undefined4 *)(this + 8);
}
```
