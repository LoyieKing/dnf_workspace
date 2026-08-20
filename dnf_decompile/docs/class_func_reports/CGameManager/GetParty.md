# GetParty

`_ZN12CGameManager8GetPartyEv`

`CGameManager::GetParty()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294e10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294e10  _ZN12CGameManager8GetPartyEv
#           CGameManager::GetParty()
# range [0x08294e10, 0x08294f31]
08294e10 +0x000:  push   %ebp
08294e11 +0x001:  mov    %esp,%ebp
08294e13 +0x003:  sub    $0x48,%esp
08294e16 +0x006:  mov    0x8(%ebp),%eax
08294e19 +0x009:  add    $0xac,%eax
08294e1e +0x00e:  mov    %eax,(%esp)
08294e21 +0x011:  call   082b0e5a <_GLOBAL__I__ZN4CLog5this_E+0xd281>  ; global constructors keyed to CLog::this_+0xd281
08294e26 +0x016:  mov    %eax,-0xc(%ebp)
08294e29 +0x019:  cmpl   $0x0,-0xc(%ebp)
08294e2d +0x01d:  jne    08294e39 <+0x29>
08294e2f +0x01f:  mov    $0x0,%eax
08294e34 +0x024:  jmp    08294f2f <+0x11f>
08294e39 +0x029:  mov    0x8(%ebp),%eax
08294e3c +0x02c:  lea    0xac(%eax),%edx
08294e42 +0x032:  mov    -0xc(%ebp),%eax
08294e45 +0x035:  mov    %eax,0x4(%esp)
08294e49 +0x039:  mov    %edx,(%esp)
08294e4c +0x03c:  call   082b0f88 <_GLOBAL__I__ZN4CLog5this_E+0xd3af>  ; global constructors keyed to CLog::this_+0xd3af
08294e51 +0x041:  mov    %eax,0x4(%esp)
08294e55 +0x045:  mov    -0xc(%ebp),%eax
08294e58 +0x048:  mov    %eax,(%esp)
08294e5b +0x04b:  call   082a59ca <_GLOBAL__I__ZN4CLog5this_E+0x1df1>  ; global constructors keyed to CLog::this_+0x1df1
08294e60 +0x050:  mov    -0xc(%ebp),%eax
08294e63 +0x053:  mov    %eax,(%esp)
08294e66 +0x056:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08294e6b +0x05b:  mov    %eax,-0x1c(%ebp)
08294e6e +0x05e:  mov    0x8(%ebp),%eax
08294e71 +0x061:  lea    0x270(%eax),%ecx
08294e77 +0x067:  lea    -0x24(%ebp),%eax
08294e7a +0x06a:  lea    -0x1c(%ebp),%edx
08294e7d +0x06d:  mov    %edx,0x8(%esp)
08294e81 +0x071:  mov    %ecx,0x4(%esp)
08294e85 +0x075:  mov    %eax,(%esp)
08294e88 +0x078:  call   082b10c4 <_GLOBAL__I__ZN4CLog5this_E+0xd4eb>  ; global constructors keyed to CLog::this_+0xd4eb
08294e8d +0x07d:  sub    $0x4,%esp
08294e90 +0x080:  mov    0x8(%ebp),%eax
08294e93 +0x083:  lea    0x270(%eax),%edx
08294e99 +0x089:  lea    -0x18(%ebp),%eax
08294e9c +0x08c:  mov    %edx,0x4(%esp)
08294ea0 +0x090:  mov    %eax,(%esp)
08294ea3 +0x093:  call   082b10f0 <_GLOBAL__I__ZN4CLog5this_E+0xd517>  ; global constructors keyed to CLog::this_+0xd517
08294ea8 +0x098:  sub    $0x4,%esp
08294eab +0x09b:  lea    -0x18(%ebp),%eax
08294eae +0x09e:  mov    %eax,0x4(%esp)
08294eb2 +0x0a2:  lea    -0x24(%ebp),%eax
08294eb5 +0x0a5:  mov    %eax,(%esp)
08294eb8 +0x0a8:  call   082b1116 <_GLOBAL__I__ZN4CLog5this_E+0xd53d>  ; global constructors keyed to CLog::this_+0xd53d
08294ebd +0x0ad:  test   %al,%al
08294ebf +0x0af:  je     08294ef1 <+0xe1>
08294ec1 +0x0b1:  mov    -0xc(%ebp),%eax
08294ec4 +0x0b4:  mov    %eax,(%esp)
08294ec7 +0x0b7:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08294ecc +0x0bc:  mov    %eax,-0x10(%ebp)
08294ecf +0x0bf:  mov    0x8(%ebp),%eax
08294ed2 +0x0c2:  lea    0x270(%eax),%edx
08294ed8 +0x0c8:  lea    -0x10(%ebp),%eax
08294edb +0x0cb:  mov    %eax,0x4(%esp)
08294edf +0x0cf:  mov    %edx,(%esp)
08294ee2 +0x0d2:  call   082b112a <_GLOBAL__I__ZN4CLog5this_E+0xd551>  ; global constructors keyed to CLog::this_+0xd551
08294ee7 +0x0d7:  mov    -0xc(%ebp),%edx
08294eea +0x0da:  mov    %edx,(%eax)
08294eec +0x0dc:  mov    -0xc(%ebp),%eax
08294eef +0x0df:  jmp    08294f2f <+0x11f>
08294ef1 +0x0e1:  mov    -0xc(%ebp),%eax
08294ef4 +0x0e4:  mov    %eax,(%esp)
08294ef7 +0x0e7:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08294efc +0x0ec:  mov    %eax,0x14(%esp)
08294f00 +0x0f0:  movl   $"이미 존재하는 방 할당 요청: %d",0x10(%esp)
08294f08 +0x0f8:  movl   $0xa5f,0xc(%esp)
08294f10 +0x100:  movl   $&_ZZN12CGameManager8GetPartyEvE19__PRETTY_FUNCTION__,0x8(%esp)
08294f18 +0x108:  movl   $"App.cpp",0x4(%esp)
08294f20 +0x110:  movl   $0x1,(%esp)
08294f27 +0x117:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08294f2c +0x11c:  mov    -0xc(%ebp),%eax
08294f2f +0x11f:  leave
08294f30 +0x120:  ret
08294f31 +0x121:  nop
```

## 反编译 C

```c
// CGameManager::GetParty @ 0x8294e10

/* CGameManager::GetParty() */

CParty * __thiscall CGameManager::GetParty(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_1c [8]
  ;
  int local_14;
  CParty *local_10;
  
  local_10 = (CParty *)StaticPool<CParty,600>::Acquire((StaticPool<CParty,600> *)(this + 0xac));
  if (local_10 == (CParty *)0x0) {
    local_10 = (CParty *)0x0;
  }
  else {
    iVar2 = StaticPool<CParty,600>::GetIndex((StaticPool<CParty,600> *)(this + 0xac),local_10);
    CParty::SetIDX(local_10,iVar2);
    local_20 = CParty::GetPartyIndex(local_10);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::find((int *)local_28);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      uVar4 = CParty::GetPartyIndex(local_10);
      LogManager::logFormat
                (1,"App.cpp","CParty* CGameManager::GetParty()",0xa5f,&DAT_08c16b70,uVar4);
    }
    else {
      local_14 = CParty::GetPartyIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
               ::operator[]((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
                             *)(this + 0x270),&local_14);
      *puVar3 = local_10;
    }
  }
  return local_10;
}
```
