# ~CQuickPartySystemManager

`_ZN10QuickParty24CQuickPartySystemManagerD1Ev`

`QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x08269bf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269bf8  _ZN10QuickParty24CQuickPartySystemManagerD1Ev
#           QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager()
# range [0x08269bf8, 0x08269c0b]
08269bf8 +0x00:  push   %ebp
08269bf9 +0x01:  mov    %esp,%ebp
08269bfb +0x03:  sub    $0x18,%esp
08269bfe +0x06:  mov    0x8(%ebp),%eax
08269c01 +0x09:  mov    %eax,(%esp)
08269c04 +0x0c:  call   0826b9be <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x28c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x28c
08269c09 +0x11:  leave
08269c0a +0x12:  ret
08269c0b +0x13:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager @ 0x8269bf8

/* QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager() */

void __thiscall
QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager(CQuickPartySystemManager *this)

{
  std::
  map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
  ::~map((map<QuickParty::STQuickPartyPoolMap_Key,QuickParty::STQuickPartyPoolMap_Data,std::less<QuickParty::STQuickPartyPoolMap_Key>,std::allocator<std::pair<QuickParty::STQuickPartyPoolMap_Key_const,QuickParty::STQuickPartyPoolMap_Data>>>
          *)this);
  return;
}
```
