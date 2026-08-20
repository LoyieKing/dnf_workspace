# start_game

`_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE`

`QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826a972` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826a972  _ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE
#           QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)
# range [0x0826a972, 0x0826a9fd]
0826a972 +0x00:  push   %ebp
0826a973 +0x01:  mov    %esp,%ebp
0826a975 +0x03:  sub    $0x18,%esp
0826a978 +0x06:  cmpl   $0x0,0xc(%ebp)
0826a97c +0x0a:  jne    0826a985 <+0x13>
0826a97e +0x0c:  mov    $0x0,%eax
0826a983 +0x11:  jmp    0826a9fc <+0x8a>
0826a985 +0x13:  mov    0xc(%ebp),%eax
0826a988 +0x16:  mov    %eax,(%esp)
0826a98b +0x19:  call   082698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>  ; QuickParty::CQuickParty::get_quick_party_count()
0826a990 +0x1e:  mov    %eax,0x8(%esp)
0826a994 +0x22:  mov    0x10(%ebp),%eax
0826a997 +0x25:  mov    %eax,0x4(%esp)
0826a99b +0x29:  mov    0x8(%ebp),%eax
0826a99e +0x2c:  mov    %eax,(%esp)
0826a9a1 +0x2f:  call   0826ab9e <_ZN10QuickParty24CQuickPartySystemManager27check_quick_party_min_countERKNS_23STQuickPartyPoolMap_KeyEi>  ; QuickParty::CQuickPartySystemManager::check_quick_party_min_count(QuickParty::STQuickPartyPoolMap_Key const&, int)
0826a9a6 +0x34:  xor    $0x1,%eax
0826a9a9 +0x37:  test   %al,%al
0826a9ab +0x39:  je     0826a9b4 <+0x42>
0826a9ad +0x3b:  mov    $0x0,%eax
0826a9b2 +0x40:  jmp    0826a9fc <+0x8a>
0826a9b4 +0x42:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0826a9b9 +0x47:  mov    %eax,(%esp)
0826a9bc +0x4a:  call   08298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>  ; CGameManager::GetQuickPartySystemManager()
0826a9c1 +0x4f:  mov    0x10(%ebp),%edx
0826a9c4 +0x52:  mov    %edx,0x8(%esp)
0826a9c8 +0x56:  mov    0xc(%ebp),%edx
0826a9cb +0x59:  mov    %edx,0x4(%esp)
0826a9cf +0x5d:  mov    %eax,(%esp)
0826a9d2 +0x60:  call   0826aa9a <_ZN10QuickParty24CQuickPartySystemManager26remove_quick_party_in_poolEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>  ; QuickParty::CQuickPartySystemManager::remove_quick_party_in_pool(QuickParty::CQuickParty*, QuickParty::STQuickPartyPoolMap_Key const&)
0826a9d7 +0x65:  xor    $0x1,%eax
0826a9da +0x68:  test   %al,%al
0826a9dc +0x6a:  je     0826a9e5 <+0x73>
0826a9de +0x6c:  mov    $0x0,%eax
0826a9e3 +0x71:  jmp    0826a9fc <+0x8a>
0826a9e5 +0x73:  mov    0xc(%ebp),%eax
0826a9e8 +0x76:  mov    %eax,0x4(%esp)
0826a9ec +0x7a:  mov    0x8(%ebp),%eax
0826a9ef +0x7d:  mov    %eax,(%esp)
0826a9f2 +0x80:  call   0826b58a <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyE>  ; QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*)
0826a9f7 +0x85:  mov    $0x1,%eax
0826a9fc +0x8a:  leave
0826a9fd +0x8b:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::start_game @ 0x826a972

/* QuickParty::CQuickPartySystemManager::start_game(QuickParty::CQuickParty*,
   QuickParty::STQuickPartyPoolMap_Key const&) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::start_game
          (CQuickPartySystemManager *this,CQuickParty *param_1,STQuickPartyPoolMap_Key *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CGameManager *this_00;
  CQuickParty *pCVar4;
  
  if (param_1 == (CQuickParty *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar3 = CQuickParty::get_quick_party_count(param_1);
    cVar1 = check_quick_party_min_count(this,param_2,iVar3);
    if (cVar1 == '\x01') {
      this_00 = (CGameManager *)G_CGameManager();
      pCVar4 = (CQuickParty *)CGameManager::GetQuickPartySystemManager(this_00);
      cVar1 = remove_quick_party_in_pool(pCVar4,(STQuickPartyPoolMap_Key *)param_1);
      if (cVar1 == '\x01') {
        start_game(this,param_1);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
