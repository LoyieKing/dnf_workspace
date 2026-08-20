# cancelTimer

`_ZN26CSpecialItemRoutingManager11cancelTimerEP6CParty`

`CSpecialItemRoutingManager::cancelTimer(CParty*)`

| 类 | 地址 |
|---|---|
| `CSpecialItemRoutingManager` | `0x0860b4c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b4c2  _ZN26CSpecialItemRoutingManager11cancelTimerEP6CParty
#           CSpecialItemRoutingManager::cancelTimer(CParty*)
# range [0x0860b4c2, 0x0860b4dc]
0860b4c2 +0x00:  push   %ebp
0860b4c3 +0x01:  mov    %esp,%ebp
0860b4c5 +0x03:  sub    $0x18,%esp
0860b4c8 +0x06:  movl   $0x2b,0x4(%esp)
0860b4d0 +0x0e:  mov    0xc(%ebp),%eax
0860b4d3 +0x11:  mov    %eax,(%esp)
0860b4d6 +0x14:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
0860b4db +0x19:  leave
0860b4dc +0x1a:  ret
```

## 反编译 C

```c
// CSpecialItemRoutingManager::cancelTimer @ 0x860b4c2

/* CSpecialItemRoutingManager::cancelTimer(CParty*) */

void __thiscall
CSpecialItemRoutingManager::cancelTimer(CSpecialItemRoutingManager *this,CParty *param_1)

{
  CParty::gen_timer_key(param_1,0x2b);
  return;
}
```
