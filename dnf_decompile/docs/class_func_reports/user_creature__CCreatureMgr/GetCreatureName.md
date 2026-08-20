# GetCreatureName

`_ZNK13user_creature12CCreatureMgr15GetCreatureNameEv`

`user_creature::CCreatureMgr::GetCreatureName() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a688` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a688  _ZNK13user_creature12CCreatureMgr15GetCreatureNameEv
#           user_creature::CCreatureMgr::GetCreatureName() const
# range [0x0833a688, 0x0833a6af]
0833a688 +0x00:  push   %ebp
0833a689 +0x01:  mov    %esp,%ebp
0833a68b +0x03:  sub    $0x18,%esp
0833a68e +0x06:  mov    0x8(%ebp),%eax
0833a691 +0x09:  mov    0x18(%eax),%eax
0833a694 +0x0c:  test   %eax,%eax
0833a696 +0x0e:  je     0833a6a8 <+0x20>
0833a698 +0x10:  mov    0x8(%ebp),%eax
0833a69b +0x13:  mov    0x18(%eax),%eax
0833a69e +0x16:  mov    %eax,(%esp)
0833a6a1 +0x19:  call   0833f058 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1125>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1125
0833a6a6 +0x1e:  jmp    0833a6ad <+0x25>
0833a6a8 +0x20:  mov    $"",%eax
0833a6ad +0x25:  leave
0833a6ae +0x26:  ret
0833a6af +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetCreatureName @ 0x833a688

/* user_creature::CCreatureMgr::GetCreatureName() const */

undefined * __thiscall user_creature::CCreatureMgr::GetCreatureName(CCreatureMgr *this)

{
  undefined *puVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    puVar1 = &DAT_08c2d760;
  }
  else {
    puVar1 = (undefined *)CCreature::GetName(*(CCreature **)(this + 0x18));
  }
  return puVar1;
}
```
