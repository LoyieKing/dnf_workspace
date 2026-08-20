# getBossTower

`_ZN12CGameManager12getBossTowerEv`

`CGameManager::getBossTower()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295906  _ZN12CGameManager12getBossTowerEv
#           CGameManager::getBossTower()
# range [0x08295906, 0x082959f9]
08295906 +0x00:  push   %ebp
08295907 +0x01:  mov    %esp,%ebp
08295909 +0x03:  sub    $0x38,%esp
0829590c +0x06:  mov    0x8(%ebp),%eax
0829590f +0x09:  add    $0x16c,%eax
08295914 +0x0e:  mov    %eax,(%esp)
08295917 +0x11:  call   082b20d0 <_GLOBAL__I__ZN4CLog5this_E+0xe4f7>  ; global constructors keyed to CLog::this_+0xe4f7
0829591c +0x16:  mov    %eax,-0xc(%ebp)
0829591f +0x19:  cmpl   $0x0,-0xc(%ebp)
08295923 +0x1d:  jne    0829592f <+0x29>
08295925 +0x1f:  mov    $0x0,%eax
0829592a +0x24:  jmp    082959f7 <+0xf1>
0829592f +0x29:  mov    0x8(%ebp),%eax
08295932 +0x2c:  lea    0x16c(%eax),%edx
08295938 +0x32:  mov    -0xc(%ebp),%eax
0829593b +0x35:  mov    %eax,0x4(%esp)
0829593f +0x39:  mov    %edx,(%esp)
08295942 +0x3c:  call   082b21fe <_GLOBAL__I__ZN4CLog5this_E+0xe625>  ; global constructors keyed to CLog::this_+0xe625
08295947 +0x41:  mov    %eax,0x4(%esp)
0829594b +0x45:  mov    -0xc(%ebp),%eax
0829594e +0x48:  mov    %eax,(%esp)
08295951 +0x4b:  call   082aa716 <_GLOBAL__I__ZN4CLog5this_E+0x6b3d>  ; global constructors keyed to CLog::this_+0x6b3d
08295956 +0x50:  mov    -0xc(%ebp),%eax
08295959 +0x53:  mov    %eax,(%esp)
0829595c +0x56:  call   082aa728 <_GLOBAL__I__ZN4CLog5this_E+0x6b4f>  ; global constructors keyed to CLog::this_+0x6b4f
08295961 +0x5b:  mov    %eax,-0x1c(%ebp)
08295964 +0x5e:  mov    0x8(%ebp),%eax
08295967 +0x61:  lea    0x2ac(%eax),%ecx
0829596d +0x67:  lea    -0x24(%ebp),%eax
08295970 +0x6a:  lea    -0x1c(%ebp),%edx
08295973 +0x6d:  mov    %edx,0x8(%esp)
08295977 +0x71:  mov    %ecx,0x4(%esp)
0829597b +0x75:  mov    %eax,(%esp)
0829597e +0x78:  call   082b233a <_GLOBAL__I__ZN4CLog5this_E+0xe761>  ; global constructors keyed to CLog::this_+0xe761
08295983 +0x7d:  sub    $0x4,%esp
08295986 +0x80:  mov    0x8(%ebp),%eax
08295989 +0x83:  lea    0x2ac(%eax),%edx
0829598f +0x89:  lea    -0x18(%ebp),%eax
08295992 +0x8c:  mov    %edx,0x4(%esp)
08295996 +0x90:  mov    %eax,(%esp)
08295999 +0x93:  call   082b2366 <_GLOBAL__I__ZN4CLog5this_E+0xe78d>  ; global constructors keyed to CLog::this_+0xe78d
0829599e +0x98:  sub    $0x4,%esp
082959a1 +0x9b:  lea    -0x18(%ebp),%eax
082959a4 +0x9e:  mov    %eax,0x4(%esp)
082959a8 +0xa2:  lea    -0x24(%ebp),%eax
082959ab +0xa5:  mov    %eax,(%esp)
082959ae +0xa8:  call   082b238c <_GLOBAL__I__ZN4CLog5this_E+0xe7b3>  ; global constructors keyed to CLog::this_+0xe7b3
082959b3 +0xad:  test   %al,%al
082959b5 +0xaf:  je     082959f2 <+0xec>
082959b7 +0xb1:  mov    -0xc(%ebp),%eax
082959ba +0xb4:  mov    %eax,(%esp)
082959bd +0xb7:  call   082aa728 <_GLOBAL__I__ZN4CLog5this_E+0x6b4f>  ; global constructors keyed to CLog::this_+0x6b4f
082959c2 +0xbc:  mov    %eax,-0x10(%ebp)
082959c5 +0xbf:  mov    0x8(%ebp),%eax
082959c8 +0xc2:  lea    0x2ac(%eax),%edx
082959ce +0xc8:  lea    -0x10(%ebp),%eax
082959d1 +0xcb:  mov    %eax,0x4(%esp)
082959d5 +0xcf:  mov    %edx,(%esp)
082959d8 +0xd2:  call   082b23a0 <_GLOBAL__I__ZN4CLog5this_E+0xe7c7>  ; global constructors keyed to CLog::this_+0xe7c7
082959dd +0xd7:  mov    -0xc(%ebp),%edx
082959e0 +0xda:  mov    %edx,(%eax)
082959e2 +0xdc:  mov    -0xc(%ebp),%eax
082959e5 +0xdf:  mov    %eax,(%esp)
082959e8 +0xe2:  call   0814bea2 <_ZN8WongWork10CBossStage5resetEv>  ; WongWork::CBossStage::reset()
082959ed +0xe7:  mov    -0xc(%ebp),%eax
082959f0 +0xea:  jmp    082959f7 <+0xf1>
082959f2 +0xec:  mov    $0x0,%eax
082959f7 +0xf1:  leave
082959f8 +0xf2:  ret
082959f9 +0xf3:  nop
```

## 反编译 C

```c
// CGameManager::getBossTower @ 0x8295906

/* CGameManager::getBossTower() */

CBossTower * __thiscall CGameManager::getBossTower(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_1c [8];
  int local_14;
  CBossTower *local_10;
  
  local_10 = (CBossTower *)
             StaticPool<WongWork::CBossTower,600>::Acquire
                       ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c));
  if (local_10 == (CBossTower *)0x0) {
    local_10 = (CBossTower *)0x0;
  }
  else {
    iVar2 = StaticPool<WongWork::CBossTower,600>::GetIndex
                      ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c),local_10);
    WongWork::CBossTower::setIdx(local_10,iVar2);
    local_20 = WongWork::CBossTower::getIdx(local_10);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (CBossTower *)0x0;
    }
    else {
      local_14 = WongWork::CBossTower::getIdx(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
               ::operator[]((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
                             *)(this + 0x2ac),&local_14);
      *puVar3 = local_10;
      WongWork::CBossStage::reset((CBossStage *)local_10);
    }
  }
  return local_10;
}
```
