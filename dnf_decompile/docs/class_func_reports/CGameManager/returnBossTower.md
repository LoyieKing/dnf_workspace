# returnBossTower

`_ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE`

`CGameManager::returnBossTower(WongWork::CBossTower*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295a90  _ZN12CGameManager15returnBossTowerEPN8WongWork10CBossTowerE
#           CGameManager::returnBossTower(WongWork::CBossTower*)
# range [0x08295a90, 0x08295b43]
08295a90 +0x00:  push   %ebp
08295a91 +0x01:  mov    %esp,%ebp
08295a93 +0x03:  sub    $0x38,%esp
08295a96 +0x06:  cmpl   $0x0,0xc(%ebp)
08295a9a +0x0a:  je     08295b41 <+0xb1>
08295aa0 +0x10:  mov    0xc(%ebp),%eax
08295aa3 +0x13:  mov    %eax,(%esp)
08295aa6 +0x16:  call   082aa728 <_GLOBAL__I__ZN4CLog5this_E+0x6b4f>  ; global constructors keyed to CLog::this_+0x6b4f
08295aab +0x1b:  mov    %eax,-0x18(%ebp)
08295aae +0x1e:  mov    0x8(%ebp),%eax
08295ab1 +0x21:  lea    0x2ac(%eax),%ecx
08295ab7 +0x27:  lea    -0x20(%ebp),%eax
08295aba +0x2a:  lea    -0x18(%ebp),%edx
08295abd +0x2d:  mov    %edx,0x8(%esp)
08295ac1 +0x31:  mov    %ecx,0x4(%esp)
08295ac5 +0x35:  mov    %eax,(%esp)
08295ac8 +0x38:  call   082b233a <_GLOBAL__I__ZN4CLog5this_E+0xe761>  ; global constructors keyed to CLog::this_+0xe761
08295acd +0x3d:  sub    $0x4,%esp
08295ad0 +0x40:  mov    0x8(%ebp),%eax
08295ad3 +0x43:  lea    0x2ac(%eax),%edx
08295ad9 +0x49:  lea    -0x14(%ebp),%eax
08295adc +0x4c:  mov    %edx,0x4(%esp)
08295ae0 +0x50:  mov    %eax,(%esp)
08295ae3 +0x53:  call   082b2366 <_GLOBAL__I__ZN4CLog5this_E+0xe78d>  ; global constructors keyed to CLog::this_+0xe78d
08295ae8 +0x58:  sub    $0x4,%esp
08295aeb +0x5b:  lea    -0x14(%ebp),%eax
08295aee +0x5e:  mov    %eax,0x4(%esp)
08295af2 +0x62:  lea    -0x20(%ebp),%eax
08295af5 +0x65:  mov    %eax,(%esp)
08295af8 +0x68:  call   082b23f2 <_GLOBAL__I__ZN4CLog5this_E+0xe819>  ; global constructors keyed to CLog::this_+0xe819
08295afd +0x6d:  test   %al,%al
08295aff +0x6f:  je     08295b42 <+0xb2>
08295b01 +0x71:  mov    0xc(%ebp),%eax
08295b04 +0x74:  mov    %eax,(%esp)
08295b07 +0x77:  call   082aa728 <_GLOBAL__I__ZN4CLog5this_E+0x6b4f>  ; global constructors keyed to CLog::this_+0x6b4f
08295b0c +0x7c:  mov    %eax,-0xc(%ebp)
08295b0f +0x7f:  mov    0x8(%ebp),%eax
08295b12 +0x82:  lea    0x2ac(%eax),%edx
08295b18 +0x88:  lea    -0xc(%ebp),%eax
08295b1b +0x8b:  mov    %eax,0x4(%esp)
08295b1f +0x8f:  mov    %edx,(%esp)
08295b22 +0x92:  call   082b2406 <_GLOBAL__I__ZN4CLog5this_E+0xe82d>  ; global constructors keyed to CLog::this_+0xe82d
08295b27 +0x97:  mov    0x8(%ebp),%eax
08295b2a +0x9a:  lea    0x16c(%eax),%edx
08295b30 +0xa0:  mov    0xc(%ebp),%eax
08295b33 +0xa3:  mov    %eax,0x4(%esp)
08295b37 +0xa7:  mov    %edx,(%esp)
08295b3a +0xaa:  call   082b2420 <_GLOBAL__I__ZN4CLog5this_E+0xe847>  ; global constructors keyed to CLog::this_+0xe847
08295b3f +0xaf:  jmp    08295b42 <+0xb2>
08295b41 +0xb1:  nop
08295b42 +0xb2:  leave
08295b43 +0xb3:  ret
```

## 反编译 C

```c
// CGameManager::returnBossTower @ 0x8295a90

/* CGameManager::returnBossTower(WongWork::CBossTower*) */

void __thiscall CGameManager::returnBossTower(CGameManager *this,CBossTower *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (CBossTower *)0x0) {
    local_1c = WongWork::CBossTower::getIdx(param_1);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,WongWork::CBossTower*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,WongWork::CBossTower*>>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = WongWork::CBossTower::getIdx(param_1);
      __gnu_cxx::
      hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
      ::erase((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
               *)(this + 0x2ac),local_10);
      StaticPool<WongWork::CBossTower,600>::Free
                ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c),param_1);
    }
  }
  return;
}
```
