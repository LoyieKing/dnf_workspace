# GetCreaturePoolRemainSize

`_ZN13user_creature25GetCreaturePoolRemainSizeEv`

`user_creature::GetCreaturePoolRemainSize()`

| 类 | 地址 |
|---|---|
| `user_creature` | `0x08336cba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336cba  _ZN13user_creature25GetCreaturePoolRemainSizeEv
#           user_creature::GetCreaturePoolRemainSize()
# range [0x08336cba, 0x08336cd7]
08336cba +0x00:  push   %ebp
08336cbb +0x01:  mov    %esp,%ebp
08336cbd +0x03:  sub    $0x18,%esp
08336cc0 +0x06:  call   0833f715 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x17e2>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x17e2
08336cc5 +0x0b:  movl   $0x1,0x4(%esp)
08336ccd +0x13:  mov    %eax,(%esp)
08336cd0 +0x16:  call   0833f510 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x15dd>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x15dd
08336cd5 +0x1b:  leave
08336cd6 +0x1c:  ret
08336cd7 +0x1d:  nop
```

## 反编译 C

```c
// user_creature::GetCreaturePoolRemainSize @ 0x8336cba

/* user_creature::GetCreaturePoolRemainSize() */

void user_creature::GetCreaturePoolRemainSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetRemainSize(pCVar1,1);
  return;
}
```
