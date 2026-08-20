# PutQuickParty

`_ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE`

`CGameManager::PutQuickParty(QuickParty::CQuickParty*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295608` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295608  _ZN12CGameManager13PutQuickPartyEPN10QuickParty11CQuickPartyE
#           CGameManager::PutQuickParty(QuickParty::CQuickParty*)
# range [0x08295608, 0x082956c7]
08295608 +0x00:  push   %ebp
08295609 +0x01:  mov    %esp,%ebp
0829560b +0x03:  sub    $0x38,%esp
0829560e +0x06:  cmpl   $0x0,0xc(%ebp)
08295612 +0x0a:  je     082956c4 <+0xbc>
08295618 +0x10:  mov    0xc(%ebp),%eax
0829561b +0x13:  mov    %eax,(%esp)
0829561e +0x16:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
08295623 +0x1b:  mov    %eax,-0x18(%ebp)
08295626 +0x1e:  mov    0x8(%ebp),%eax
08295629 +0x21:  lea    0x2d4(%eax),%ecx
0829562f +0x27:  lea    -0x20(%ebp),%eax
08295632 +0x2a:  lea    -0x18(%ebp),%edx
08295635 +0x2d:  mov    %edx,0x8(%esp)
08295639 +0x31:  mov    %ecx,0x4(%esp)
0829563d +0x35:  mov    %eax,(%esp)
08295640 +0x38:  call   082b19fc <_GLOBAL__I__ZN4CLog5this_E+0xde23>  ; global constructors keyed to CLog::this_+0xde23
08295645 +0x3d:  sub    $0x4,%esp
08295648 +0x40:  mov    0x8(%ebp),%eax
0829564b +0x43:  lea    0x2d4(%eax),%edx
08295651 +0x49:  lea    -0x14(%ebp),%eax
08295654 +0x4c:  mov    %edx,0x4(%esp)
08295658 +0x50:  mov    %eax,(%esp)
0829565b +0x53:  call   082b1a28 <_GLOBAL__I__ZN4CLog5this_E+0xde4f>  ; global constructors keyed to CLog::this_+0xde4f
08295660 +0x58:  sub    $0x4,%esp
08295663 +0x5b:  lea    -0x14(%ebp),%eax
08295666 +0x5e:  mov    %eax,0x4(%esp)
0829566a +0x62:  lea    -0x20(%ebp),%eax
0829566d +0x65:  mov    %eax,(%esp)
08295670 +0x68:  call   082b1ab4 <_GLOBAL__I__ZN4CLog5this_E+0xdedb>  ; global constructors keyed to CLog::this_+0xdedb
08295675 +0x6d:  test   %al,%al
08295677 +0x6f:  je     082956c5 <+0xbd>
08295679 +0x71:  mov    0xc(%ebp),%eax
0829567c +0x74:  mov    %eax,(%esp)
0829567f +0x77:  call   0826b74e <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x1c>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x1c
08295684 +0x7c:  mov    %eax,-0xc(%ebp)
08295687 +0x7f:  mov    0x8(%ebp),%eax
0829568a +0x82:  lea    0x2d4(%eax),%edx
08295690 +0x88:  lea    -0xc(%ebp),%eax
08295693 +0x8b:  mov    %eax,0x4(%esp)
08295697 +0x8f:  mov    %edx,(%esp)
0829569a +0x92:  call   082b1ac8 <_GLOBAL__I__ZN4CLog5this_E+0xdeef>  ; global constructors keyed to CLog::this_+0xdeef
0829569f +0x97:  mov    0x8(%ebp),%eax
082956a2 +0x9a:  lea    0x1cc(%eax),%edx
082956a8 +0xa0:  mov    0xc(%ebp),%eax
082956ab +0xa3:  mov    %eax,0x4(%esp)
082956af +0xa7:  mov    %edx,(%esp)
082956b2 +0xaa:  call   082b1ae2 <_GLOBAL__I__ZN4CLog5this_E+0xdf09>  ; global constructors keyed to CLog::this_+0xdf09
082956b7 +0xaf:  mov    0xc(%ebp),%eax
082956ba +0xb2:  mov    %eax,(%esp)
082956bd +0xb5:  call   08269546 <_ZN10QuickParty11CQuickParty4initEv>  ; QuickParty::CQuickParty::init()
082956c2 +0xba:  jmp    082956c5 <+0xbd>
082956c4 +0xbc:  nop
082956c5 +0xbd:  leave
082956c6 +0xbe:  ret
082956c7 +0xbf:  nop
```

## 反编译 C

```c
// CGameManager::PutQuickParty @ 0x8295608

/* CGameManager::PutQuickParty(QuickParty::CQuickParty*) */

void __thiscall CGameManager::PutQuickParty(CGameManager *this,CQuickParty *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (CQuickParty *)0x0) {
    local_1c = QuickParty::CQuickParty::get_quick_party_index(param_1);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,QuickParty::CQuickParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,QuickParty::CQuickParty*>>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = QuickParty::CQuickParty::get_quick_party_index(param_1);
      __gnu_cxx::
      hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
      ::erase((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
               *)(this + 0x2d4),local_10);
      StaticPool<QuickParty::CQuickParty,300>::Free
                ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc),param_1);
      QuickParty::CQuickParty::init(param_1);
    }
  }
  return;
}
```
