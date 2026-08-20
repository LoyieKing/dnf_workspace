# IsDieCreature

`_ZNK13user_creature12CCreatureMgr13IsDieCreatureEv`

`user_creature::CCreatureMgr::IsDieCreature() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a660  _ZNK13user_creature12CCreatureMgr13IsDieCreatureEv
#           user_creature::CCreatureMgr::IsDieCreature() const
# range [0x0833a660, 0x0833a687]
0833a660 +0x00:  push   %ebp
0833a661 +0x01:  mov    %esp,%ebp
0833a663 +0x03:  sub    $0x18,%esp
0833a666 +0x06:  mov    0x8(%ebp),%eax
0833a669 +0x09:  mov    0x18(%eax),%eax
0833a66c +0x0c:  test   %eax,%eax
0833a66e +0x0e:  je     0833a680 <+0x20>
0833a670 +0x10:  mov    0x8(%ebp),%eax
0833a673 +0x13:  mov    0x18(%eax),%eax
0833a676 +0x16:  mov    %eax,(%esp)
0833a679 +0x19:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
0833a67e +0x1e:  jmp    0833a685 <+0x25>
0833a680 +0x20:  mov    $0x1,%eax
0833a685 +0x25:  leave
0833a686 +0x26:  ret
0833a687 +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::IsDieCreature @ 0x833a660

/* user_creature::CCreatureMgr::IsDieCreature() const */

undefined4 __thiscall user_creature::CCreatureMgr::IsDieCreature(CCreatureMgr *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
  }
  return uVar1;
}
```
