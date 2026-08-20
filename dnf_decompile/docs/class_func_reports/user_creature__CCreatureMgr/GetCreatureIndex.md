# GetCreatureIndex

`_ZN13user_creature12CCreatureMgr16GetCreatureIndexEv`

`user_creature::CCreatureMgr::GetCreatureIndex()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08338f36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08338f36  _ZN13user_creature12CCreatureMgr16GetCreatureIndexEv
#           user_creature::CCreatureMgr::GetCreatureIndex()
# range [0x08338f36, 0x08338f4b]
08338f36 +0x00:  push   %ebp
08338f37 +0x01:  mov    %esp,%ebp
08338f39 +0x03:  sub    $0x18,%esp
08338f3c +0x06:  mov    0x8(%ebp),%eax
08338f3f +0x09:  mov    0x18(%eax),%eax
08338f42 +0x0c:  mov    %eax,(%esp)
08338f45 +0x0f:  call   0833f0da <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11a7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11a7
08338f4a +0x14:  leave
08338f4b +0x15:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetCreatureIndex @ 0x8338f36

/* user_creature::CCreatureMgr::GetCreatureIndex() */

void __thiscall user_creature::CCreatureMgr::GetCreatureIndex(CCreatureMgr *this)

{
  CCreature::GetCreatureId(*(CCreature **)(this + 0x18));
  return;
}
```
