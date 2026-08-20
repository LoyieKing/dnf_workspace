# CQuickPartySystemManager

`_ZN10QuickParty24CQuickPartySystemManagerC1Ev`

`QuickParty::CQuickPartySystemManager::CQuickPartySystemManager()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x08269bb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269bb6  _ZN10QuickParty24CQuickPartySystemManagerC1Ev
#           QuickParty::CQuickPartySystemManager::CQuickPartySystemManager()
# range [0x08269bb6, 0x08269bf7]
08269bb6 +0x00:  push   %ebp
08269bb7 +0x01:  mov    %esp,%ebp
08269bb9 +0x03:  push   %esi
08269bba +0x04:  push   %ebx
08269bbb +0x05:  sub    $0x10,%esp
08269bbe +0x08:  mov    0x8(%ebp),%eax
08269bc1 +0x0b:  mov    %eax,(%esp)
08269bc4 +0x0e:  call   0826ba74 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x342>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x342
08269bc9 +0x13:  mov    0x8(%ebp),%eax
08269bcc +0x16:  mov    %eax,(%esp)
08269bcf +0x19:  call   0826baee <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x3bc>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x3bc
08269bd4 +0x1e:  jmp    08269bf1 <+0x3b>
08269bd6 +0x20:  mov    %edx,%ebx
08269bd8 +0x22:  mov    %eax,%esi
08269bda +0x24:  mov    0x8(%ebp),%eax
08269bdd +0x27:  mov    %eax,(%esp)
08269be0 +0x2a:  call   0826b9be <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28c
08269be5 +0x2f:  mov    %esi,%eax
08269be7 +0x31:  mov    %ebx,%edx
08269be9 +0x33:  mov    %eax,(%esp)
08269bec +0x36:  call   08ae3750 <_Unwind_Resume>
08269bf1 +0x3b:  add    $0x10,%esp
08269bf4 +0x3e:  pop    %ebx
08269bf5 +0x3f:  pop    %esi
08269bf6 +0x40:  pop    %ebp
08269bf7 +0x41:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::CQuickPartySystemManager @ 0x8269bb6

/* QuickParty::CQuickPartySystemManager::CQuickPartySystemManager() */

void __thiscall
QuickParty::CQuickPartySystemManager::CQuickPartySystemManager(CQuickPartySystemManager *this)

{
  std::
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  ::map((map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
         *)this);
                    /* try { // try from 08269bcf to 08269bd3 has its CatchHandler @ 08269bd6 */
  std::
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  ::clear((map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
           *)this);
  return;
}
```
