# CCreatureScriptMgr

`_ZN13user_creature18CCreatureScriptMgrC1Ev`

`user_creature::CCreatureScriptMgr::CCreatureScriptMgr()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureScriptMgr` | `0x0833cb60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833cb60  _ZN13user_creature18CCreatureScriptMgrC1Ev
#           user_creature::CCreatureScriptMgr::CCreatureScriptMgr()
# range [0x0833cb60, 0x0833cba5]
0833cb60 +0x00:  push   %ebp
0833cb61 +0x01:  mov    %esp,%ebp
0833cb63 +0x03:  push   %esi
0833cb64 +0x04:  push   %ebx
0833cb65 +0x05:  sub    $0x10,%esp
0833cb68 +0x08:  mov    0x8(%ebp),%eax
0833cb6b +0x0b:  mov    %eax,(%esp)
0833cb6e +0x0e:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
0833cb73 +0x13:  mov    0x8(%ebp),%eax
0833cb76 +0x16:  add    $0x18,%eax
0833cb79 +0x19:  mov    %eax,(%esp)
0833cb7c +0x1c:  call   0834193a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3a07>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3a07
0833cb81 +0x21:  jmp    0833cb9e <+0x3e>
0833cb83 +0x23:  mov    %edx,%ebx
0833cb85 +0x25:  mov    %eax,%esi
0833cb87 +0x27:  mov    0x8(%ebp),%eax
0833cb8a +0x2a:  mov    %eax,(%esp)
0833cb8d +0x2d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0833cb92 +0x32:  mov    %esi,%eax
0833cb94 +0x34:  mov    %ebx,%edx
0833cb96 +0x36:  mov    %eax,(%esp)
0833cb99 +0x39:  call   08ae3750 <_Unwind_Resume>
0833cb9e +0x3e:  add    $0x10,%esp
0833cba1 +0x41:  pop    %ebx
0833cba2 +0x42:  pop    %esi
0833cba3 +0x43:  pop    %ebp
0833cba4 +0x44:  ret
0833cba5 +0x45:  nop
```

## 反编译 C

```c
// user_creature::CCreatureScriptMgr::CCreatureScriptMgr @ 0x833cb60

/* user_creature::CCreatureScriptMgr::CCreatureScriptMgr() */

void __thiscall user_creature::CCreatureScriptMgr::CCreatureScriptMgr(CCreatureScriptMgr *this)

{
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
                    /* try { // try from 0833cb7c to 0833cb80 has its CatchHandler @ 0833cb83 */
  std::
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  ::map((map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
         *)(this + 0x18));
  return;
}
```
