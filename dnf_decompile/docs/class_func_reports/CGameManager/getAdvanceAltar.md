# getAdvanceAltar

`_ZN12CGameManager15getAdvanceAltarEv`

`CGameManager::getAdvanceAltar()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295b44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295b44  _ZN12CGameManager15getAdvanceAltarEv
#           CGameManager::getAdvanceAltar()
# range [0x08295b44, 0x08295c37]
08295b44 +0x00:  push   %ebp
08295b45 +0x01:  mov    %esp,%ebp
08295b47 +0x03:  sub    $0x38,%esp
08295b4a +0x06:  mov    0x8(%ebp),%eax
08295b4d +0x09:  add    $0x19c,%eax
08295b52 +0x0e:  mov    %eax,(%esp)
08295b55 +0x11:  call   082b2578 <_GLOBAL__I__ZN4CLog5this_E+0xe99f>  ; global constructors keyed to CLog::this_+0xe99f
08295b5a +0x16:  mov    %eax,-0xc(%ebp)
08295b5d +0x19:  cmpl   $0x0,-0xc(%ebp)
08295b61 +0x1d:  jne    08295b6d <+0x29>
08295b63 +0x1f:  mov    $0x0,%eax
08295b68 +0x24:  jmp    08295c35 <+0xf1>
08295b6d +0x29:  mov    0x8(%ebp),%eax
08295b70 +0x2c:  lea    0x19c(%eax),%edx
08295b76 +0x32:  mov    -0xc(%ebp),%eax
08295b79 +0x35:  mov    %eax,0x4(%esp)
08295b7d +0x39:  mov    %edx,(%esp)
08295b80 +0x3c:  call   082b26a6 <_GLOBAL__I__ZN4CLog5this_E+0xeacd>  ; global constructors keyed to CLog::this_+0xeacd
08295b85 +0x41:  mov    %eax,0x4(%esp)
08295b89 +0x45:  mov    -0xc(%ebp),%eax
08295b8c +0x48:  mov    %eax,(%esp)
08295b8f +0x4b:  call   082a669c <_GLOBAL__I__ZN4CLog5this_E+0x2ac3>  ; global constructors keyed to CLog::this_+0x2ac3
08295b94 +0x50:  mov    -0xc(%ebp),%eax
08295b97 +0x53:  mov    %eax,(%esp)
08295b9a +0x56:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08295b9f +0x5b:  mov    %eax,-0x1c(%ebp)
08295ba2 +0x5e:  mov    0x8(%ebp),%eax
08295ba5 +0x61:  lea    0x2c0(%eax),%ecx
08295bab +0x67:  lea    -0x24(%ebp),%eax
08295bae +0x6a:  lea    -0x1c(%ebp),%edx
08295bb1 +0x6d:  mov    %edx,0x8(%esp)
08295bb5 +0x71:  mov    %ecx,0x4(%esp)
08295bb9 +0x75:  mov    %eax,(%esp)
08295bbc +0x78:  call   082b27e2 <_GLOBAL__I__ZN4CLog5this_E+0xec09>  ; global constructors keyed to CLog::this_+0xec09
08295bc1 +0x7d:  sub    $0x4,%esp
08295bc4 +0x80:  mov    0x8(%ebp),%eax
08295bc7 +0x83:  lea    0x2c0(%eax),%edx
08295bcd +0x89:  lea    -0x18(%ebp),%eax
08295bd0 +0x8c:  mov    %edx,0x4(%esp)
08295bd4 +0x90:  mov    %eax,(%esp)
08295bd7 +0x93:  call   082b280e <_GLOBAL__I__ZN4CLog5this_E+0xec35>  ; global constructors keyed to CLog::this_+0xec35
08295bdc +0x98:  sub    $0x4,%esp
08295bdf +0x9b:  lea    -0x18(%ebp),%eax
08295be2 +0x9e:  mov    %eax,0x4(%esp)
08295be6 +0xa2:  lea    -0x24(%ebp),%eax
08295be9 +0xa5:  mov    %eax,(%esp)
08295bec +0xa8:  call   082b2834 <_GLOBAL__I__ZN4CLog5this_E+0xec5b>  ; global constructors keyed to CLog::this_+0xec5b
08295bf1 +0xad:  test   %al,%al
08295bf3 +0xaf:  je     08295c30 <+0xec>
08295bf5 +0xb1:  mov    -0xc(%ebp),%eax
08295bf8 +0xb4:  mov    %eax,(%esp)
08295bfb +0xb7:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08295c00 +0xbc:  mov    %eax,-0x10(%ebp)
08295c03 +0xbf:  mov    0x8(%ebp),%eax
08295c06 +0xc2:  lea    0x2c0(%eax),%edx
08295c0c +0xc8:  lea    -0x10(%ebp),%eax
08295c0f +0xcb:  mov    %eax,0x4(%esp)
08295c13 +0xcf:  mov    %edx,(%esp)
08295c16 +0xd2:  call   082b2848 <_GLOBAL__I__ZN4CLog5this_E+0xec6f>  ; global constructors keyed to CLog::this_+0xec6f
08295c1b +0xd7:  mov    -0xc(%ebp),%edx
08295c1e +0xda:  mov    %edx,(%eax)
08295c20 +0xdc:  mov    -0xc(%ebp),%eax
08295c23 +0xdf:  mov    %eax,(%esp)
08295c26 +0xe2:  call   0812fa54 <_ZN12advancealtar12StageControl5resetEv>  ; advancealtar::StageControl::reset()
08295c2b +0xe7:  mov    -0xc(%ebp),%eax
08295c2e +0xea:  jmp    08295c35 <+0xf1>
08295c30 +0xec:  mov    $0x0,%eax
08295c35 +0xf1:  leave
08295c36 +0xf2:  ret
08295c37 +0xf3:  nop
```

## 反编译 C

```c
// CGameManager::getAdvanceAltar @ 0x8295b44

/* CGameManager::getAdvanceAltar() */

StageControl * __thiscall CGameManager::getAdvanceAltar(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_1c [8];
  int local_14;
  StageControl *local_10;
  
  local_10 = (StageControl *)
             StaticPool<advancealtar::StageControl,600>::Acquire
                       ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c));
  if (local_10 == (StageControl *)0x0) {
    local_10 = (StageControl *)0x0;
  }
  else {
    iVar2 = StaticPool<advancealtar::StageControl,600>::GetIndex
                      ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),local_10);
    advancealtar::StageControl::setIndex(local_10,iVar2);
    local_20 = advancealtar::StageControl::getIndex(local_10);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (StageControl *)0x0;
    }
    else {
      local_14 = advancealtar::StageControl::getIndex(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
               ::operator[]((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                             *)(this + 0x2c0),&local_14);
      *puVar3 = local_10;
      advancealtar::StageControl::reset(local_10);
    }
  }
  return local_10;
}
```
