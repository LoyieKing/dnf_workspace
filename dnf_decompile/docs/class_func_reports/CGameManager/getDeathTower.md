# getDeathTower

`_ZN12CGameManager13getDeathTowerEv`

`CGameManager::getDeathTower()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082956c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082956c8  _ZN12CGameManager13getDeathTowerEv
#           CGameManager::getDeathTower()
# range [0x082956c8, 0x082957bb]
082956c8 +0x00:  push   %ebp
082956c9 +0x01:  mov    %esp,%ebp
082956cb +0x03:  sub    $0x38,%esp
082956ce +0x06:  mov    0x8(%ebp),%eax
082956d1 +0x09:  add    $0x13c,%eax
082956d6 +0x0e:  mov    %eax,(%esp)
082956d9 +0x11:  call   082b1c28 <_GLOBAL__I__ZN4CLog5this_E+0xe04f>  ; global constructors keyed to CLog::this_+0xe04f
082956de +0x16:  mov    %eax,-0xc(%ebp)
082956e1 +0x19:  cmpl   $0x0,-0xc(%ebp)
082956e5 +0x1d:  jne    082956f1 <+0x29>
082956e7 +0x1f:  mov    $0x0,%eax
082956ec +0x24:  jmp    082957b9 <+0xf1>
082956f1 +0x29:  mov    0x8(%ebp),%eax
082956f4 +0x2c:  lea    0x13c(%eax),%edx
082956fa +0x32:  mov    -0xc(%ebp),%eax
082956fd +0x35:  mov    %eax,0x4(%esp)
08295701 +0x39:  mov    %edx,(%esp)
08295704 +0x3c:  call   082b1d56 <_GLOBAL__I__ZN4CLog5this_E+0xe17d>  ; global constructors keyed to CLog::this_+0xe17d
08295709 +0x41:  mov    %eax,0x4(%esp)
0829570d +0x45:  mov    -0xc(%ebp),%eax
08295710 +0x48:  mov    %eax,(%esp)
08295713 +0x4b:  call   082a7578 <_GLOBAL__I__ZN4CLog5this_E+0x399f>  ; global constructors keyed to CLog::this_+0x399f
08295718 +0x50:  mov    -0xc(%ebp),%eax
0829571b +0x53:  mov    %eax,(%esp)
0829571e +0x56:  call   082a7586 <_GLOBAL__I__ZN4CLog5this_E+0x39ad>  ; global constructors keyed to CLog::this_+0x39ad
08295723 +0x5b:  mov    %eax,-0x1c(%ebp)
08295726 +0x5e:  mov    0x8(%ebp),%eax
08295729 +0x61:  lea    0x298(%eax),%ecx
0829572f +0x67:  lea    -0x24(%ebp),%eax
08295732 +0x6a:  lea    -0x1c(%ebp),%edx
08295735 +0x6d:  mov    %edx,0x8(%esp)
08295739 +0x71:  mov    %ecx,0x4(%esp)
0829573d +0x75:  mov    %eax,(%esp)
08295740 +0x78:  call   082b1e92 <_GLOBAL__I__ZN4CLog5this_E+0xe2b9>  ; global constructors keyed to CLog::this_+0xe2b9
08295745 +0x7d:  sub    $0x4,%esp
08295748 +0x80:  mov    0x8(%ebp),%eax
0829574b +0x83:  lea    0x298(%eax),%edx
08295751 +0x89:  lea    -0x18(%ebp),%eax
08295754 +0x8c:  mov    %edx,0x4(%esp)
08295758 +0x90:  mov    %eax,(%esp)
0829575b +0x93:  call   082b1ebe <_GLOBAL__I__ZN4CLog5this_E+0xe2e5>  ; global constructors keyed to CLog::this_+0xe2e5
08295760 +0x98:  sub    $0x4,%esp
08295763 +0x9b:  lea    -0x18(%ebp),%eax
08295766 +0x9e:  mov    %eax,0x4(%esp)
0829576a +0xa2:  lea    -0x24(%ebp),%eax
0829576d +0xa5:  mov    %eax,(%esp)
08295770 +0xa8:  call   082b1ee4 <_GLOBAL__I__ZN4CLog5this_E+0xe30b>  ; global constructors keyed to CLog::this_+0xe30b
08295775 +0xad:  test   %al,%al
08295777 +0xaf:  je     082957b4 <+0xec>
08295779 +0xb1:  mov    -0xc(%ebp),%eax
0829577c +0xb4:  mov    %eax,(%esp)
0829577f +0xb7:  call   082a7586 <_GLOBAL__I__ZN4CLog5this_E+0x39ad>  ; global constructors keyed to CLog::this_+0x39ad
08295784 +0xbc:  mov    %eax,-0x10(%ebp)
08295787 +0xbf:  mov    0x8(%ebp),%eax
0829578a +0xc2:  lea    0x298(%eax),%edx
08295790 +0xc8:  lea    -0x10(%ebp),%eax
08295793 +0xcb:  mov    %eax,0x4(%esp)
08295797 +0xcf:  mov    %edx,(%esp)
0829579a +0xd2:  call   082b1ef8 <_GLOBAL__I__ZN4CLog5this_E+0xe31f>  ; global constructors keyed to CLog::this_+0xe31f
0829579f +0xd7:  mov    -0xc(%ebp),%edx
082957a2 +0xda:  mov    %edx,(%eax)
082957a4 +0xdc:  mov    -0xc(%ebp),%eax
082957a7 +0xdf:  mov    %eax,(%esp)
082957aa +0xe2:  call   082a7592 <_GLOBAL__I__ZN4CLog5this_E+0x39b9>  ; global constructors keyed to CLog::this_+0x39b9
082957af +0xe7:  mov    -0xc(%ebp),%eax
082957b2 +0xea:  jmp    082957b9 <+0xf1>
082957b4 +0xec:  mov    $0x0,%eax
082957b9 +0xf1:  leave
082957ba +0xf2:  ret
082957bb +0xf3:  nop
```

## 反编译 C

```c
// CGameManager::getDeathTower @ 0x82956c8

/* CGameManager::getDeathTower() */

CDeathTower * __thiscall CGameManager::getDeathTower(CGameManager *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_28 [8];
  undefined4 local_20;
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  local_1c [8];
  int local_14;
  CDeathTower *local_10;
  
  local_10 = (CDeathTower *)
             StaticPool<WongWork::CDeathTower,600>::Acquire
                       ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c));
  if (local_10 == (CDeathTower *)0x0) {
    local_10 = (CDeathTower *)0x0;
  }
  else {
    iVar2 = StaticPool<WongWork::CDeathTower,600>::GetIndex
                      ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c),local_10);
    WongWork::CDeathTower::setIdx(local_10,iVar2);
    local_20 = WongWork::CDeathTower::getIdx(local_10);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::find((int *)local_28);
    __gnu_cxx::
    hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
    ::end(local_1c);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CDeathTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CDeathTower*>>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
            ::operator==(local_28,(_Hashtable_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_10 = (CDeathTower *)0x0;
    }
    else {
      local_14 = WongWork::CDeathTower::getIdx(local_10);
      puVar3 = (undefined4 *)
               __gnu_cxx::
               hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
               ::operator[]((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
                             *)(this + 0x298),&local_14);
      *puVar3 = local_10;
      WongWork::CDeathTower::reset(local_10);
    }
  }
  return local_10;
}
```
