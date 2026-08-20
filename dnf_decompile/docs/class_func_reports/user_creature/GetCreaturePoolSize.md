# GetCreaturePoolSize

`_ZN13user_creature19GetCreaturePoolSizeEv`

`user_creature::GetCreaturePoolSize()`

| 类 | 地址 |
|---|---|
| `user_creature` | `0x08336c80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336c80  _ZN13user_creature19GetCreaturePoolSizeEv
#           user_creature::GetCreaturePoolSize()
# range [0x08336c80, 0x08336c9c]
08336c80 +0x00:  push   %ebp
08336c81 +0x01:  mov    %esp,%ebp
08336c83 +0x03:  sub    $0x18,%esp
08336c86 +0x06:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
08336c8b +0x0b:  movl   $0x1,0x4(%esp)
08336c93 +0x13:  mov    %eax,(%esp)
08336c96 +0x16:  call   0833f546 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1613>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1613
08336c9b +0x1b:  leave
08336c9c +0x1c:  ret
```

## 反编译 C

```c
// user_creature::GetCreaturePoolSize @ 0x8336c80

/* user_creature::GetCreaturePoolSize() */

void user_creature::GetCreaturePoolSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetSize(pCVar1,1);
  return;
}
```
