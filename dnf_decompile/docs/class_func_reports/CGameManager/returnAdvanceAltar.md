# returnAdvanceAltar

`_ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE`

`CGameManager::returnAdvanceAltar(advancealtar::StageControl*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295cce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295cce  _ZN12CGameManager18returnAdvanceAltarEPN12advancealtar12StageControlE
#           CGameManager::returnAdvanceAltar(advancealtar::StageControl*)
# range [0x08295cce, 0x08295d81]
08295cce +0x00:  push   %ebp
08295ccf +0x01:  mov    %esp,%ebp
08295cd1 +0x03:  sub    $0x38,%esp
08295cd4 +0x06:  cmpl   $0x0,0xc(%ebp)
08295cd8 +0x0a:  je     08295d7f <+0xb1>
08295cde +0x10:  mov    0xc(%ebp),%eax
08295ce1 +0x13:  mov    %eax,(%esp)
08295ce4 +0x16:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08295ce9 +0x1b:  mov    %eax,-0x18(%ebp)
08295cec +0x1e:  mov    0x8(%ebp),%eax
08295cef +0x21:  lea    0x2c0(%eax),%ecx
08295cf5 +0x27:  lea    -0x20(%ebp),%eax
08295cf8 +0x2a:  lea    -0x18(%ebp),%edx
08295cfb +0x2d:  mov    %edx,0x8(%esp)
08295cff +0x31:  mov    %ecx,0x4(%esp)
08295d03 +0x35:  mov    %eax,(%esp)
08295d06 +0x38:  call   082b27e2 <_GLOBAL__I__ZN4CLog5this_E+0xec09>  ; global constructors keyed to CLog::this_+0xec09
08295d0b +0x3d:  sub    $0x4,%esp
08295d0e +0x40:  mov    0x8(%ebp),%eax
08295d11 +0x43:  lea    0x2c0(%eax),%edx
08295d17 +0x49:  lea    -0x14(%ebp),%eax
08295d1a +0x4c:  mov    %edx,0x4(%esp)
08295d1e +0x50:  mov    %eax,(%esp)
08295d21 +0x53:  call   082b280e <_GLOBAL__I__ZN4CLog5this_E+0xec35>  ; global constructors keyed to CLog::this_+0xec35
08295d26 +0x58:  sub    $0x4,%esp
08295d29 +0x5b:  lea    -0x14(%ebp),%eax
08295d2c +0x5e:  mov    %eax,0x4(%esp)
08295d30 +0x62:  lea    -0x20(%ebp),%eax
08295d33 +0x65:  mov    %eax,(%esp)
08295d36 +0x68:  call   082b289a <_GLOBAL__I__ZN4CLog5this_E+0xecc1>  ; global constructors keyed to CLog::this_+0xecc1
08295d3b +0x6d:  test   %al,%al
08295d3d +0x6f:  je     08295d80 <+0xb2>
08295d3f +0x71:  mov    0xc(%ebp),%eax
08295d42 +0x74:  mov    %eax,(%esp)
08295d45 +0x77:  call   081348ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4c1
08295d4a +0x7c:  mov    %eax,-0xc(%ebp)
08295d4d +0x7f:  mov    0x8(%ebp),%eax
08295d50 +0x82:  lea    0x2c0(%eax),%edx
08295d56 +0x88:  lea    -0xc(%ebp),%eax
08295d59 +0x8b:  mov    %eax,0x4(%esp)
08295d5d +0x8f:  mov    %edx,(%esp)
08295d60 +0x92:  call   082b28ae <_GLOBAL__I__ZN4CLog5this_E+0xecd5>  ; global constructors keyed to CLog::this_+0xecd5
08295d65 +0x97:  mov    0x8(%ebp),%eax
08295d68 +0x9a:  lea    0x19c(%eax),%edx
08295d6e +0xa0:  mov    0xc(%ebp),%eax
08295d71 +0xa3:  mov    %eax,0x4(%esp)
08295d75 +0xa7:  mov    %edx,(%esp)
08295d78 +0xaa:  call   082b28c8 <_GLOBAL__I__ZN4CLog5this_E+0xecef>  ; global constructors keyed to CLog::this_+0xecef
08295d7d +0xaf:  jmp    08295d80 <+0xb2>
08295d7f +0xb1:  nop
08295d80 +0xb2:  leave
08295d81 +0xb3:  ret
```

## 反编译 C

```c
// CGameManager::returnAdvanceAltar @ 0x8295cce

/* CGameManager::returnAdvanceAltar(advancealtar::StageControl*) */

void __thiscall CGameManager::returnAdvanceAltar(CGameManager *this,StageControl *param_1)

{
  char cVar1;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_24 [8];
  undefined4 local_1c;
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_18 [8];
  int local_10 [3];
  
  if (param_1 != (StageControl *)0x0) {
    local_1c = advancealtar::StageControl::getIndex(param_1);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::find((int *)local_24);
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::end(local_18);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator!=(local_24,(_Hashtable_iterator *)local_18);
    if (cVar1 != '\0') {
      local_10[0] = advancealtar::StageControl::getIndex(param_1);
      __gnu_cxx::
      hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::erase((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
               *)(this + 0x2c0),local_10);
      StaticPool<advancealtar::StageControl,600>::Free
                ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),param_1);
    }
  }
  return;
}
```
