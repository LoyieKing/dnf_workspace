# Reset

`_ZN15CRelayBattleMgr5ResetEv`

`CRelayBattleMgr::Reset()`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de046` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de046  _ZN15CRelayBattleMgr5ResetEv
#           CRelayBattleMgr::Reset()
# range [0x085de046, 0x085de09b]
085de046 +0x00:  push   %ebp
085de047 +0x01:  mov    %esp,%ebp
085de049 +0x03:  sub    $0x28,%esp
085de04c +0x06:  movl   $0x0,-0xc(%ebp)
085de053 +0x0d:  jmp    085de070 <+0x2a>
085de055 +0x0f:  mov    -0xc(%ebp),%edx
085de058 +0x12:  mov    %edx,%eax
085de05a +0x14:  add    %eax,%eax
085de05c +0x16:  add    %edx,%eax
085de05e +0x18:  shl    $0x2,%eax
085de061 +0x1b:  add    0x8(%ebp),%eax
085de064 +0x1e:  mov    %eax,(%esp)
085de067 +0x21:  call   085de01a <_ZN12CRelayBattle5ResetEv>  ; CRelayBattle::Reset()
085de06c +0x26:  addl   $0x1,-0xc(%ebp)
085de070 +0x2a:  cmpl   $0x7,-0xc(%ebp)
085de074 +0x2e:  setle  %al
085de077 +0x31:  test   %al,%al
085de079 +0x33:  jne    085de055 <+0xf>
085de07b +0x35:  mov    0x8(%ebp),%eax
085de07e +0x38:  mov    %eax,(%esp)
085de081 +0x3b:  call   085de09c <_ZN15CRelayBattleMgr24ResetChangeSequenceCountEv>  ; CRelayBattleMgr::ResetChangeSequenceCount()
085de086 +0x40:  mov    0x8(%ebp),%eax
085de089 +0x43:  movl   $0x0,0x70(%eax)
085de090 +0x4a:  mov    0x8(%ebp),%eax
085de093 +0x4d:  movl   $0x0,0x74(%eax)
085de09a +0x54:  leave
085de09b +0x55:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::Reset @ 0x85de046

/* CRelayBattleMgr::Reset() */

void __thiscall CRelayBattleMgr::Reset(CRelayBattleMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    CRelayBattle::Reset((CRelayBattle *)(this + local_10 * 0xc));
  }
  ResetChangeSequenceCount(this);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  return;
}
```
