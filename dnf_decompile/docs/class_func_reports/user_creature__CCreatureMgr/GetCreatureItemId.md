# GetCreatureItemId

`_ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv`

`user_creature::CCreatureMgr::GetCreatureItemId() const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833a638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833a638  _ZNK13user_creature12CCreatureMgr17GetCreatureItemIdEv
#           user_creature::CCreatureMgr::GetCreatureItemId() const
# range [0x0833a638, 0x0833a65f]
0833a638 +0x00:  push   %ebp
0833a639 +0x01:  mov    %esp,%ebp
0833a63b +0x03:  sub    $0x18,%esp
0833a63e +0x06:  mov    0x8(%ebp),%eax
0833a641 +0x09:  mov    0x18(%eax),%eax
0833a644 +0x0c:  test   %eax,%eax
0833a646 +0x0e:  je     0833a658 <+0x20>
0833a648 +0x10:  mov    0x8(%ebp),%eax
0833a64b +0x13:  mov    0x18(%eax),%eax
0833a64e +0x16:  mov    %eax,(%esp)
0833a651 +0x19:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
0833a656 +0x1e:  jmp    0833a65d <+0x25>
0833a658 +0x20:  mov    $0x0,%eax
0833a65d +0x25:  leave
0833a65e +0x26:  ret
0833a65f +0x27:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetCreatureItemId @ 0x833a638

/* user_creature::CCreatureMgr::GetCreatureItemId() const */

undefined4 __thiscall user_creature::CCreatureMgr::GetCreatureItemId(CCreatureMgr *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CCreatureItem::GetItemId(*(CCreatureItem **)(this + 0x18));
  }
  return uVar1;
}
```
