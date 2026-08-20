# OnFight

`_ZN15CRelayBattleMgr7OnFightEv`

`CRelayBattleMgr::OnFight()`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de358` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de358  _ZN15CRelayBattleMgr7OnFightEv
#           CRelayBattleMgr::OnFight()
# range [0x085de358, 0x085de389]
085de358 +0x00:  push   %ebp
085de359 +0x01:  mov    %esp,%ebp
085de35b +0x03:  sub    $0x18,%esp
085de35e +0x06:  mov    0x8(%ebp),%eax
085de361 +0x09:  movl   $0x0,0x70(%eax)
085de368 +0x10:  mov    0x8(%ebp),%eax
085de36b +0x13:  mov    %eax,(%esp)
085de36e +0x16:  call   085de8ee <_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv>  ; CRelayBattleMgr::ArrangeMatchSequence()
085de373 +0x1b:  mov    0x8(%ebp),%eax
085de376 +0x1e:  mov    %eax,(%esp)
085de379 +0x21:  call   085dead6 <_ZN15CRelayBattleMgr10TurnPlayerEv>  ; CRelayBattleMgr::TurnPlayer()
085de37e +0x26:  mov    0x8(%ebp),%eax
085de381 +0x29:  movl   $0x1,0x74(%eax)
085de388 +0x30:  leave
085de389 +0x31:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::OnFight @ 0x85de358

/* CRelayBattleMgr::OnFight() */

void __thiscall CRelayBattleMgr::OnFight(CRelayBattleMgr *this)

{
  *(undefined4 *)(this + 0x70) = 0;
  ArrangeMatchSequence(this);
  TurnPlayer(this);
  *(undefined4 *)(this + 0x74) = 1;
  return;
}
```
