# ResetChangeSequenceCount

`_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv`

`CRelayBattleMgr::ResetChangeSequenceCount()`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de09c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de09c  _ZN15CRelayBattleMgr24ResetChangeSequenceCountEv
#           CRelayBattleMgr::ResetChangeSequenceCount()
# range [0x085de09c, 0x085de0cb]
085de09c +0x00:  push   %ebp
085de09d +0x01:  mov    %esp,%ebp
085de09f +0x03:  sub    $0x10,%esp
085de0a2 +0x06:  movl   $0x1,-0x4(%ebp)
085de0a9 +0x0d:  jmp    085de0bf <+0x23>
085de0ab +0x0f:  mov    -0x4(%ebp),%edx
085de0ae +0x12:  mov    0x8(%ebp),%eax
085de0b1 +0x15:  add    $0x18,%edx
085de0b4 +0x18:  movl   $0x0,(%eax,%edx,4)
085de0bb +0x1f:  addl   $0x1,-0x4(%ebp)
085de0bf +0x23:  cmpl   $0x2,-0x4(%ebp)
085de0c3 +0x27:  setle  %al
085de0c6 +0x2a:  test   %al,%al
085de0c8 +0x2c:  jne    085de0ab <+0xf>
085de0ca +0x2e:  leave
085de0cb +0x2f:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::ResetChangeSequenceCount @ 0x85de09c

/* CRelayBattleMgr::ResetChangeSequenceCount() */

void __thiscall CRelayBattleMgr::ResetChangeSequenceCount(CRelayBattleMgr *this)

{
  int local_8;
  
  for (local_8 = 1; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x18) * 4) = 0;
  }
  return;
}
```
