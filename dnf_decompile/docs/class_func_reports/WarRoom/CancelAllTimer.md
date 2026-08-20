# CancelAllTimer

`_ZN7WarRoom14CancelAllTimerEv`

`WarRoom::CancelAllTimer()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be120  _ZN7WarRoom14CancelAllTimerEv
#           WarRoom::CancelAllTimer()
# range [0x086be120, 0x086be151]
086be120 +0x00:  push   %ebp
086be121 +0x01:  mov    %esp,%ebp
086be123 +0x03:  sub    $0x28,%esp
086be126 +0x06:  movl   $0x40,-0xc(%ebp)
086be12d +0x0d:  jmp    086be145 <+0x25>
086be12f +0x0f:  mov    -0xc(%ebp),%eax
086be132 +0x12:  mov    %eax,0x4(%esp)
086be136 +0x16:  mov    0x8(%ebp),%eax
086be139 +0x19:  mov    %eax,(%esp)
086be13c +0x1c:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086be141 +0x21:  addl   $0x1,-0xc(%ebp)
086be145 +0x25:  cmpl   $0x47,-0xc(%ebp)
086be149 +0x29:  setle  %al
086be14c +0x2c:  test   %al,%al
086be14e +0x2e:  jne    086be12f <+0xf>
086be150 +0x30:  leave
086be151 +0x31:  ret
```

## 反编译 C

```c
// WarRoom::CancelAllTimer @ 0x86be120

/* WarRoom::CancelAllTimer() */

void __thiscall WarRoom::CancelAllTimer(WarRoom *this)

{
  undefined4 local_10;
  
  for (local_10 = 0x40; local_10 < 0x48; local_10 = local_10 + 1) {
    GenTimerKey(this,local_10);
  }
  return;
}
```
