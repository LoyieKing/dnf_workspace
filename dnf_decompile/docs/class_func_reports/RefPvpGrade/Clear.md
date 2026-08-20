# Clear

`_ZN11RefPvpGrade5ClearEv`

`RefPvpGrade::Clear()`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d4722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4722  _ZN11RefPvpGrade5ClearEv
#           RefPvpGrade::Clear()
# range [0x085d4722, 0x085d4767]
085d4722 +0x00:  push   %ebp
085d4723 +0x01:  mov    %esp,%ebp
085d4725 +0x03:  sub    $0x10,%esp
085d4728 +0x06:  mov    0x8(%ebp),%eax
085d472b +0x09:  movl   $0x0,(%eax)
085d4731 +0x0f:  movl   $0x0,-0x4(%ebp)
085d4738 +0x16:  jmp    085d475a <+0x38>
085d473a +0x18:  mov    -0x4(%ebp),%edx
085d473d +0x1b:  mov    0x8(%ebp),%eax
085d4740 +0x1e:  movl   $0x0,0x4(%eax,%edx,8)
085d4748 +0x26:  mov    -0x4(%ebp),%edx
085d474b +0x29:  mov    0x8(%ebp),%eax
085d474e +0x2c:  movl   $0x0,0x8(%eax,%edx,8)
085d4756 +0x34:  addl   $0x1,-0x4(%ebp)
085d475a +0x38:  cmpl   $0x25,-0x4(%ebp)
085d475e +0x3c:  setle  %al
085d4761 +0x3f:  test   %al,%al
085d4763 +0x41:  jne    085d473a <+0x18>
085d4765 +0x43:  leave
085d4766 +0x44:  ret
085d4767 +0x45:  nop
```

## 反编译 C

```c
// RefPvpGrade::Clear @ 0x85d4722

/* RefPvpGrade::Clear() */

void __thiscall RefPvpGrade::Clear(RefPvpGrade *this)

{
  int local_8;
  
  *(undefined4 *)this = 0;
  for (local_8 = 0; local_8 < 0x26; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 8 + 4) = 0;
    *(undefined4 *)(this + local_8 * 8 + 8) = 0;
  }
  return;
}
```
