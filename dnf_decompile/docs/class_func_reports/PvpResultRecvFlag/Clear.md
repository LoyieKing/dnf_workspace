# Clear

`_ZN17PvpResultRecvFlag5ClearEv`

`PvpResultRecvFlag::Clear()`

| 类 | 地址 |
|---|---|
| `PvpResultRecvFlag` | `0x085d5fc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d5fc6  _ZN17PvpResultRecvFlag5ClearEv
#           PvpResultRecvFlag::Clear()
# range [0x085d5fc6, 0x085d5fef]
085d5fc6 +0x00:  push   %ebp
085d5fc7 +0x01:  mov    %esp,%ebp
085d5fc9 +0x03:  sub    $0x10,%esp
085d5fcc +0x06:  movl   $0x0,-0x4(%ebp)
085d5fd3 +0x0d:  jmp    085d5fe3 <+0x1d>
085d5fd5 +0x0f:  mov    -0x4(%ebp),%eax
085d5fd8 +0x12:  mov    0x8(%ebp),%edx
085d5fdb +0x15:  movb   $0x0,(%edx,%eax,1)
085d5fdf +0x19:  addl   $0x1,-0x4(%ebp)
085d5fe3 +0x1d:  cmpl   $0x7,-0x4(%ebp)
085d5fe7 +0x21:  setle  %al
085d5fea +0x24:  test   %al,%al
085d5fec +0x26:  jne    085d5fd5 <+0xf>
085d5fee +0x28:  leave
085d5fef +0x29:  ret
```

## 反编译 C

```c
// PvpResultRecvFlag::Clear @ 0x85d5fc6

/* PvpResultRecvFlag::Clear() */

void __thiscall PvpResultRecvFlag::Clear(PvpResultRecvFlag *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    this[local_8] = (PvpResultRecvFlag)0x0;
  }
  return;
}
```
