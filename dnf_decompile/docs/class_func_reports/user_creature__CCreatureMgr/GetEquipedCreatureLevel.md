# GetEquipedCreatureLevel

`_ZNK13user_creature12CCreatureMgr23GetEquipedCreatureLevelEv`

`user_creature::CCreatureMgr::GetEquipedCreatureLevel() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a6b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a6b0  _ZNK13user_creature12CCreatureMgr23GetEquipedCreatureLevelEv
#           user_creature::CCreatureMgr::GetEquipedCreatureLevel() const
# range [0x0833a6b0, 0x0833a6d7]
0833a6b0 +0x00:  push   %ebp
0833a6b1 +0x01:  mov    %esp,%ebp
0833a6b3 +0x03:  sub    $0x18,%esp
0833a6b6 +0x06:  mov    0x8(%ebp),%eax
0833a6b9 +0x09:  mov    0x18(%eax),%eax
0833a6bc +0x0c:  test   %eax,%eax
0833a6be +0x0e:  je     0833a6d0 <+0x20>
0833a6c0 +0x10:  mov    0x8(%ebp),%eax
0833a6c3 +0x13:  mov    0x18(%eax),%eax
0833a6c6 +0x16:  mov    %eax,(%esp)
0833a6c9 +0x19:  call   0833f09a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1167>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1167
0833a6ce +0x1e:  jmp    0833a6d5 <+0x25>
0833a6d0 +0x20:  mov    $0x0,%eax
0833a6d5 +0x25:  leave
0833a6d6 +0x26:  ret
0833a6d7 +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetEquipedCreatureLevel @ 0x833a6b0

/* user_creature::CCreatureMgr::GetEquipedCreatureLevel() const */

undefined4 __thiscall user_creature::CCreatureMgr::GetEquipedCreatureLevel(CCreatureMgr *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreature::GetLevel(*(CCreature **)(this + 0x18));
  }
  return uVar1;
}
```
