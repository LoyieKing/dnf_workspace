# GetCreatureEggPoolRemainSize

`_ZN13user_creature28GetCreatureEggPoolRemainSizeEv`

`user_creature::GetCreatureEggPoolRemainSize()`

| 类 | 地址 |
|---|---|
| `user_creature` | `0x08336c9d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336c9d  _ZN13user_creature28GetCreatureEggPoolRemainSizeEv
#           user_creature::GetCreatureEggPoolRemainSize()
# range [0x08336c9d, 0x08336cb9]
08336c9d +0x00:  push   %ebp
08336c9e +0x01:  mov    %esp,%ebp
08336ca0 +0x03:  sub    $0x18,%esp
08336ca3 +0x06:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
08336ca8 +0x0b:  movl   $0x0,0x4(%esp)
08336cb0 +0x13:  mov    %eax,(%esp)
08336cb3 +0x16:  call   0833f510 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x15dd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x15dd
08336cb8 +0x1b:  leave
08336cb9 +0x1c:  ret
```

## 反编译 C

```c
// user_creature::GetCreatureEggPoolRemainSize @ 0x8336c9d

/* user_creature::GetCreatureEggPoolRemainSize() */

void user_creature::GetCreatureEggPoolRemainSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetRemainSize(pCVar1,0);
  return;
}
```
