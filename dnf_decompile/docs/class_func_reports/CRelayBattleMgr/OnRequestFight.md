# OnRequestFight

`_ZN15CRelayBattleMgr14OnRequestFightEi`

`CRelayBattleMgr::OnRequestFight(int)`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de18c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de18c  _ZN15CRelayBattleMgr14OnRequestFightEi
#           CRelayBattleMgr::OnRequestFight(int)
# range [0x085de18c, 0x085de251]
085de18c +0x00:  push   %ebp
085de18d +0x01:  mov    %esp,%ebp
085de18f +0x03:  sub    $0x18,%esp
085de192 +0x06:  cmpl   $0x0,0xc(%ebp)
085de196 +0x0a:  js     085de24b <+0xbf>
085de19c +0x10:  cmpl   $0x7,0xc(%ebp)
085de1a0 +0x14:  jg     085de24e <+0xc2>
085de1a6 +0x1a:  mov    0xc(%ebp),%edx
085de1a9 +0x1d:  mov    0x8(%ebp),%ecx
085de1ac +0x20:  mov    %edx,%eax
085de1ae +0x22:  add    %eax,%eax
085de1b0 +0x24:  add    %edx,%eax
085de1b2 +0x26:  shl    $0x2,%eax
085de1b5 +0x29:  movzbl 0x7(%eax,%ecx,1),%eax
085de1ba +0x2e:  xor    $0x1,%eax
085de1bd +0x31:  test   %al,%al
085de1bf +0x33:  je     085de1fd <+0x71>
085de1c1 +0x35:  mov    0xc(%ebp),%edx
085de1c4 +0x38:  mov    0x8(%ebp),%ecx
085de1c7 +0x3b:  mov    %edx,%eax
085de1c9 +0x3d:  add    %eax,%eax
085de1cb +0x3f:  add    %edx,%eax
085de1cd +0x41:  shl    $0x2,%eax
085de1d0 +0x44:  movb   $0x1,0x7(%eax,%ecx,1)
085de1d5 +0x49:  mov    0xc(%ebp),%edx
085de1d8 +0x4c:  mov    0x8(%ebp),%ecx
085de1db +0x4f:  mov    %edx,%eax
085de1dd +0x51:  add    %eax,%eax
085de1df +0x53:  add    %edx,%eax
085de1e1 +0x55:  shl    $0x2,%eax
085de1e4 +0x58:  movzbl 0x6(%eax,%ecx,1),%eax
085de1e9 +0x5d:  movsbl %al,%eax
085de1ec +0x60:  mov    %eax,0x4(%esp)
085de1f0 +0x64:  mov    0x8(%ebp),%eax
085de1f3 +0x67:  mov    %eax,(%esp)
085de1f6 +0x6a:  call   085de498 <_ZN15CRelayBattleMgr27IncreaseChangeSequenceCountEi>  ; CRelayBattleMgr::IncreaseChangeSequenceCount(int)
085de1fb +0x6f:  jmp    085de237 <+0xab>
085de1fd +0x71:  mov    0xc(%ebp),%edx
085de200 +0x74:  mov    0x8(%ebp),%ecx
085de203 +0x77:  mov    %edx,%eax
085de205 +0x79:  add    %eax,%eax
085de207 +0x7b:  add    %edx,%eax
085de209 +0x7d:  shl    $0x2,%eax
085de20c +0x80:  movb   $0x0,0x7(%eax,%ecx,1)
085de211 +0x85:  mov    0xc(%ebp),%edx
085de214 +0x88:  mov    0x8(%ebp),%ecx
085de217 +0x8b:  mov    %edx,%eax
085de219 +0x8d:  add    %eax,%eax
085de21b +0x8f:  add    %edx,%eax
085de21d +0x91:  shl    $0x2,%eax
085de220 +0x94:  movzbl 0x6(%eax,%ecx,1),%eax
085de225 +0x99:  movsbl %al,%eax
085de228 +0x9c:  mov    %eax,0x4(%esp)
085de22c +0xa0:  mov    0x8(%ebp),%eax
085de22f +0xa3:  mov    %eax,(%esp)
085de232 +0xa6:  call   085de53e <_ZN15CRelayBattleMgr27DecreaseChangeSequenceCountEi>  ; CRelayBattleMgr::DecreaseChangeSequenceCount(int)
085de237 +0xab:  mov    0xc(%ebp),%eax
085de23a +0xae:  mov    %eax,0x4(%esp)
085de23e +0xb2:  mov    0x8(%ebp),%eax
085de241 +0xb5:  mov    %eax,(%esp)
085de244 +0xb8:  call   085decd8 <_ZN15CRelayBattleMgr16SendRequestFightEi>  ; CRelayBattleMgr::SendRequestFight(int)
085de249 +0xbd:  jmp    085de24f <+0xc3>
085de24b +0xbf:  nop
085de24c +0xc0:  jmp    085de24f <+0xc3>
085de24e +0xc2:  nop
085de24f +0xc3:  leave
085de250 +0xc4:  ret
085de251 +0xc5:  nop
```

## 反编译 C

```c
// CRelayBattleMgr::OnRequestFight @ 0x85de18c

/* CRelayBattleMgr::OnRequestFight(int) */

void __thiscall CRelayBattleMgr::OnRequestFight(CRelayBattleMgr *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    if (this[param_1 * 0xc + 7] == (CRelayBattleMgr)0x1) {
      this[param_1 * 0xc + 7] = (CRelayBattleMgr)0x0;
      DecreaseChangeSequenceCount(this,(int)(char)this[param_1 * 0xc + 6]);
    }
    else {
      this[param_1 * 0xc + 7] = (CRelayBattleMgr)0x1;
      IncreaseChangeSequenceCount(this,(int)(char)this[param_1 * 0xc + 6]);
    }
    SendRequestFight(this,param_1);
  }
  return;
}
```
