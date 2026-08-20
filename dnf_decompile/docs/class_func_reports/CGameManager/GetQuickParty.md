# GetQuickParty

`_ZN12CGameManager13GetQuickPartyEv`

`CGameManager::GetQuickParty()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295450  _ZN12CGameManager13GetQuickPartyEv
#           CGameManager::GetQuickParty()
# range [0x08295450, 0x08295571]
08295450 +0x000:  push   %ebp
08295451 +0x001:  mov    %esp,%ebp
08295453 +0x003:  sub    $0x48,%esp
08295456 +0x006:  mov    0x8(%ebp),%eax
08295459 +0x009:  add    $0x1cc,%eax
0829545e +0x00e:  mov    %eax,(%esp)
08295461 +0x011:  call   082b17b0 <_GLOBAL__I__ZN4CLog5this_E+0xdbd7>  ; global constructors keyed to CLog::this_+0xdbd7
08295466 +0x016:  mov    %eax,-0xc(%ebp)
08295469 +0x019:  cmpl   $0x0,-0xc(%ebp)
0829546d +0x01d:  jne    08295479 <+0x29>
0829546f +0x01f:  mov    $0x0,%eax
08295474 +0x024:  jmp    0829556f <+0x11f>
08295479 +0x029:  mov    0x8(%ebp),%eax
0829547c +0x02c:  lea    0x1cc(%eax),%edx
08295482 +0x032:  mov    -0xc(%ebp),%eax
08295485 +0x035:  mov    %eax,0x4(%esp)
08295489 +0x039:  mov    %edx,(%esp)
0829548c +0x03c:  call   082b18cc <_GLOBAL__I__ZN4CLog5this_E+0xdcf3>  ; global constructors keyed to CLog::this_+0xdcf3
08295491 +0x041:  mov    %eax,0x4(%esp)
08295495 +0x045:  mov    -0xc(%ebp),%eax
08295498 +0x048:  mov    %eax,(%esp)
0829549b +0x04b:  call   082a69be <_GLOBAL__I__ZN4CLog5this_E+0x2de5>  ; global constructors keyed to CLog::this_+0x2de5
082954a0 +0x050:  mov    -0xc(%ebp),%eax
082954a3 +0x053:  mov    %eax,(%esp)
082954a6 +0x056:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
082954ab +0x05b:  mov    %eax,-0x1c(%ebp)
082954ae +0x05e:  mov    0x8(%ebp),%eax
082954b1 +0x061:  lea    0x2d4(%eax),%ecx
082954b7 +0x067:  lea    -0x24(%ebp),%eax
082954ba +0x06a:  lea    -0x1c(%ebp),%edx
082954bd +0x06d:  mov    %edx,0x8(%esp)
082954c1 +0x071:  mov    %ecx,0x4(%esp)
082954c5 +0x075:  mov    %eax,(%esp)
082954c8 +0x078:  call   082b19fc <_GLOBAL__I__ZN4CLog5this_E+0xde23>  ; global constructors keyed to CLog::this_+0xde23
082954cd +0x07d:  sub    $0x4,%esp
082954d0 +0x080:  mov    0x8(%ebp),%eax
082954d3 +0x083:  lea    0x2d4(%eax),%edx
082954d9 +0x089:  lea    -0x18(%ebp),%eax
082954dc +0x08c:  mov    %edx,0x4(%esp)
082954e0 +0x090:  mov    %eax,(%esp)
082954e3 +0x093:  call   082b1a28 <_GLOBAL__I__ZN4CLog5this_E+0xde4f>  ; global constructors keyed to CLog::this_+0xde4f
082954e8 +0x098:  sub    $0x4,%esp
082954eb +0x09b:  lea    -0x18(%ebp),%eax
082954ee +0x09e:  mov    %eax,0x4(%esp)
082954f2 +0x0a2:  lea    -0x24(%ebp),%eax
082954f5 +0x0a5:  mov    %eax,(%esp)
082954f8 +0x0a8:  call   082b1a4e <_GLOBAL__I__ZN4CLog5this_E+0xde75>  ; global constructors keyed to CLog::this_+0xde75
082954fd +0x0ad:  test   %al,%al
082954ff +0x0af:  je     08295531 <+0xe1>
08295501 +0x0b1:  mov    -0xc(%ebp),%eax
08295504 +0x0b4:  mov    %eax,(%esp)
08295507 +0x0b7:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0829550c +0x0bc:  mov    %eax,-0x10(%ebp)
0829550f +0x0bf:  mov    0x8(%ebp),%eax
08295512 +0x0c2:  lea    0x2d4(%eax),%edx
08295518 +0x0c8:  lea    -0x10(%ebp),%eax
0829551b +0x0cb:  mov    %eax,0x4(%esp)
0829551f +0x0cf:  mov    %edx,(%esp)
08295522 +0x0d2:  call   082b1a62 <_GLOBAL__I__ZN4CLog5this_E+0xde89>  ; global constructors keyed to CLog::this_+0xde89
08295527 +0x0d7:  mov    -0xc(%ebp),%edx
0829552a +0x0da:  mov    %edx,(%eax)
0829552c +0x0dc:  mov    -0xc(%ebp),%eax
0829552f +0x0df:  jmp    0829556f <+0x11f>
08295531 +0x0e1:  mov    -0xc(%ebp),%eax
08295534 +0x0e4:  mov    %eax,(%esp)
08295537 +0x0e7:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
0829553c +0x0ec:  mov    %eax,0x14(%esp)
08295540 +0x0f0:  movl   $"QUICK_PARTY_LOG : 이미 존재하는 QUICK 파티 할당 요청: %d",0x10(%esp)
08295548 +0x0f8:  movl   $0xb64,0xc(%esp)
08295550 +0x100:  movl   $&_ZZN12CGameManager13GetQuickPartyEvE19__PRETTY_FUNCTION__,0x8(%esp)
08295558 +0x108:  movl   $"App.cpp",0x4(%esp)
08295560 +0x110:  movl   $0x1,(%esp)
08295567 +0x117:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0829556c +0x11c:  mov    -0xc(%ebp),%eax
0829556f +0x11f:  leave
08295570 +0x120:  ret
08295571 +0x121:  nop
```

## 反编译 C

```c
// CGameManager::GetQuickParty @ 0x8295450

/* CGameManager::GetQuickParty() */

CQuickParty * __thiscall CGameManager::GetQuickParty(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_1c [8];
  int local_14;
  CQuickParty *local_10;
  
  local_10 = (CQuickParty *)
             StaticPool<QuickParty::CQuickParty,300>::Acquire
                       ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc));
  if (local_10 == (CQuickParty *)0x0) {
    local_10 = (CQuickParty *)0x0;
  }
  else {
    iVar2 = StaticPool<QuickParty::CQuickParty,300>::GetIndex
                      ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc),local_10);
    QuickParty::CQuickParty::set_quick_party_index(local_10,iVar2);
    local_20 = QuickParty::CQuickParty::get_quick_party_index(local_10);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      uVar4 = QuickParty::CQuickParty::get_quick_party_index(local_10);
      LogManager::logFormat
                (1,"App.cpp","QuickParty::CQuickParty* CGameManager::GetQuickParty()",0xb64,
                 &DAT_08c16bf8,uVar4);
    }
    else {
      local_14 = QuickParty::CQuickParty::get_quick_party_index(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
               ::operator[]((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
                             *)(this + 0x2d4),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}
```
