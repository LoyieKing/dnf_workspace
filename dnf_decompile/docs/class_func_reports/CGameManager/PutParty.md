# PutParty

`_ZN12CGameManager8PutPartyEP6CParty`

`CGameManager::PutParty(CParty*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08294fc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08294fc8  _ZN12CGameManager8PutPartyEP6CParty
#           CGameManager::PutParty(CParty*)
# range [0x08294fc8, 0x0829507b]
08294fc8 +0x00:  push   %ebp
08294fc9 +0x01:  mov    %esp,%ebp
08294fcb +0x03:  sub    $0x38,%esp
08294fce +0x06:  cmpl   $0x0,0xc(%ebp)
08294fd2 +0x0a:  je     08295079 <+0xb1>
08294fd8 +0x10:  mov    0xc(%ebp),%eax
08294fdb +0x13:  mov    %eax,(%esp)
08294fde +0x16:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08294fe3 +0x1b:  mov    %eax,-0x18(%ebp)
08294fe6 +0x1e:  mov    0x8(%ebp),%eax
08294fe9 +0x21:  lea    0x270(%eax),%ecx
08294fef +0x27:  lea    -0x20(%ebp),%eax
08294ff2 +0x2a:  lea    -0x18(%ebp),%edx
08294ff5 +0x2d:  mov    %edx,0x8(%esp)
08294ff9 +0x31:  mov    %ecx,0x4(%esp)
08294ffd +0x35:  mov    %eax,(%esp)
08295000 +0x38:  call   082b10c4 <_GLOBAL__I__ZN4CLog5this_E+0xd4eb>  ; global constructors keyed to CLog::this_+0xd4eb
08295005 +0x3d:  sub    $0x4,%esp
08295008 +0x40:  mov    0x8(%ebp),%eax
0829500b +0x43:  lea    0x270(%eax),%edx
08295011 +0x49:  lea    -0x14(%ebp),%eax
08295014 +0x4c:  mov    %edx,0x4(%esp)
08295018 +0x50:  mov    %eax,(%esp)
0829501b +0x53:  call   082b10f0 <_GLOBAL__I__ZN4CLog5this_E+0xd517>  ; global constructors keyed to CLog::this_+0xd517
08295020 +0x58:  sub    $0x4,%esp
08295023 +0x5b:  lea    -0x14(%ebp),%eax
08295026 +0x5e:  mov    %eax,0x4(%esp)
0829502a +0x62:  lea    -0x20(%ebp),%eax
0829502d +0x65:  mov    %eax,(%esp)
08295030 +0x68:  call   082b117c <_GLOBAL__I__ZN4CLog5this_E+0xd5a3>  ; global constructors keyed to CLog::this_+0xd5a3
08295035 +0x6d:  test   %al,%al
08295037 +0x6f:  je     0829507a <+0xb2>
08295039 +0x71:  mov    0xc(%ebp),%eax
0829503c +0x74:  mov    %eax,(%esp)
0829503f +0x77:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
08295044 +0x7c:  mov    %eax,-0xc(%ebp)
08295047 +0x7f:  mov    0x8(%ebp),%eax
0829504a +0x82:  lea    0x270(%eax),%edx
08295050 +0x88:  lea    -0xc(%ebp),%eax
08295053 +0x8b:  mov    %eax,0x4(%esp)
08295057 +0x8f:  mov    %edx,(%esp)
0829505a +0x92:  call   082b1190 <_GLOBAL__I__ZN4CLog5this_E+0xd5b7>  ; global constructors keyed to CLog::this_+0xd5b7
0829505f +0x97:  mov    0x8(%ebp),%eax
08295062 +0x9a:  lea    0xac(%eax),%edx
08295068 +0xa0:  mov    0xc(%ebp),%eax
0829506b +0xa3:  mov    %eax,0x4(%esp)
0829506f +0xa7:  mov    %edx,(%esp)
08295072 +0xaa:  call   082b11aa <_GLOBAL__I__ZN4CLog5this_E+0xd5d1>  ; global constructors keyed to CLog::this_+0xd5d1
08295077 +0xaf:  jmp    0829507a <+0xb2>
08295079 +0xb1:  nop
0829507a +0xb2:  leave
0829507b +0xb3:  ret
```

## 反编译 C

```c
// CGameManager::PutParty @ 0x8294fc8

/* CGameManager::PutParty(CParty*) */

void __thiscall CGameManager::PutParty(CGameManager *this,CParty *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> local_18 [8]
  ;
  int local_10 [3];
  
  if (param_1 != (CParty *)0x0) {
    local_1c = CParty::GetPartyIndex(param_1);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::find((int *)local_24);
    __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CParty*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CParty*>>,std::equal_to<int>,std::allocator<CParty*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = CParty::GetPartyIndex(param_1);
      __gnu_cxx::
      hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::erase
                ((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>
                  *)(this + 0x270),local_10);
      StaticPool<CParty,600>::Free((StaticPool<CParty,600> *)(this + 0xac),param_1);
    }
  }
  return;
}
```
