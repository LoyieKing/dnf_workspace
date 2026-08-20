# GetCreatureEggPoolSize

`_ZN13user_creature22GetCreatureEggPoolSizeEv`

`user_creature::GetCreatureEggPoolSize()`

| 类 | 地址 |
|---|---|
| `user_creature` | `0x08336c63` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336c63  _ZN13user_creature22GetCreatureEggPoolSizeEv
#           user_creature::GetCreatureEggPoolSize()
# range [0x08336c63, 0x08336c7f]
08336c63 +0x00:  push   %ebp
08336c64 +0x01:  mov    %esp,%ebp
08336c66 +0x03:  sub    $0x18,%esp
08336c69 +0x06:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
08336c6e +0x0b:  movl   $0x0,0x4(%esp)
08336c76 +0x13:  mov    %eax,(%esp)
08336c79 +0x16:  call   0833f546 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1613>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1613
08336c7e +0x1b:  leave
08336c7f +0x1c:  ret
```

## 反编译 C

```c
// user_creature::GetCreatureEggPoolSize @ 0x8336c63

/* user_creature::GetCreatureEggPoolSize() */

void user_creature::GetCreatureEggPoolSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetSize(pCVar1,0);
  return;
}
```
