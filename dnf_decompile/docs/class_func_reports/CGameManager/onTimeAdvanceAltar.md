# onTimeAdvanceAltar

`_ZN12CGameManager18onTimeAdvanceAltarEv`

`CGameManager::onTimeAdvanceAltar()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295d82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295d82  _ZN12CGameManager18onTimeAdvanceAltarEv
#           CGameManager::onTimeAdvanceAltar()
# range [0x08295d82, 0x08295e75]
08295d82 +0x00:  push   %ebp
08295d83 +0x01:  mov    %esp,%ebp
08295d85 +0x03:  sub    $0x48,%esp
08295d88 +0x06:  mov    0x8(%ebp),%eax
08295d8b +0x09:  lea    0x2c0(%eax),%edx
08295d91 +0x0f:  lea    -0x2c(%ebp),%eax
08295d94 +0x12:  mov    %edx,0x4(%esp)
08295d98 +0x16:  mov    %eax,(%esp)
08295d9b +0x19:  call   082b2a20 <_GLOBAL__I__ZN4CLog5this_E+0xee47>  ; global constructors keyed to CLog::this_+0xee47
08295da0 +0x1e:  sub    $0x4,%esp
08295da3 +0x21:  jmp    08295e3e <+0xbc>
08295da8 +0x26:  lea    -0x2c(%ebp),%eax
08295dab +0x29:  mov    %eax,(%esp)
08295dae +0x2c:  call   082b2886 <_GLOBAL__I__ZN4CLog5this_E+0xecad>  ; global constructors keyed to CLog::this_+0xecad
08295db3 +0x31:  mov    0x4(%eax),%eax
08295db6 +0x34:  mov    %eax,-0xc(%ebp)
08295db9 +0x37:  mov    -0xc(%ebp),%eax
08295dbc +0x3a:  mov    %eax,(%esp)
08295dbf +0x3d:  call   0812fb98 <_ZN12advancealtar12StageControl16onTimerStageTickEv>  ; advancealtar::StageControl::onTimerStageTick()
08295dc4 +0x42:  xor    $0x1,%eax
08295dc7 +0x45:  test   %al,%al
08295dc9 +0x47:  je     08295e21 <+0x9f>
08295dcb +0x49:  lea    -0x1c(%ebp),%eax
08295dce +0x4c:  movl   $0x0,0x8(%esp)
08295dd6 +0x54:  lea    -0x2c(%ebp),%edx
08295dd9 +0x57:  mov    %edx,0x4(%esp)
08295ddd +0x5b:  mov    %eax,(%esp)
08295de0 +0x5e:  call   082b2a46 <_GLOBAL__I__ZN4CLog5this_E+0xee6d>  ; global constructors keyed to CLog::this_+0xee6d
08295de5 +0x63:  sub    $0x4,%esp
08295de8 +0x66:  mov    0x8(%ebp),%eax
08295deb +0x69:  lea    0x2c0(%eax),%ecx
08295df1 +0x6f:  mov    -0x1c(%ebp),%eax
08295df4 +0x72:  mov    -0x18(%ebp),%edx
08295df7 +0x75:  mov    %eax,0x4(%esp)
08295dfb +0x79:  mov    %edx,0x8(%esp)
08295dff +0x7d:  mov    %ecx,(%esp)
08295e02 +0x80:  call   082b2a7c <_GLOBAL__I__ZN4CLog5this_E+0xeea3>  ; global constructors keyed to CLog::this_+0xeea3
08295e07 +0x85:  mov    0x8(%ebp),%eax
08295e0a +0x88:  lea    0x19c(%eax),%edx
08295e10 +0x8e:  mov    -0xc(%ebp),%eax
08295e13 +0x91:  mov    %eax,0x4(%esp)
08295e17 +0x95:  mov    %edx,(%esp)
08295e1a +0x98:  call   082b28c8 <_GLOBAL__I__ZN4CLog5this_E+0xecef>  ; global constructors keyed to CLog::this_+0xecef
08295e1f +0x9d:  jmp    08295e3e <+0xbc>
08295e21 +0x9f:  lea    -0x14(%ebp),%eax
08295e24 +0xa2:  movl   $0x0,0x8(%esp)
08295e2c +0xaa:  lea    -0x2c(%ebp),%edx
08295e2f +0xad:  mov    %edx,0x4(%esp)
08295e33 +0xb1:  mov    %eax,(%esp)
08295e36 +0xb4:  call   082b2a46 <_GLOBAL__I__ZN4CLog5this_E+0xee6d>  ; global constructors keyed to CLog::this_+0xee6d
08295e3b +0xb9:  sub    $0x4,%esp
08295e3e +0xbc:  mov    0x8(%ebp),%eax
08295e41 +0xbf:  lea    0x2c0(%eax),%edx
08295e47 +0xc5:  lea    -0x24(%ebp),%eax
08295e4a +0xc8:  mov    %edx,0x4(%esp)
08295e4e +0xcc:  mov    %eax,(%esp)
08295e51 +0xcf:  call   082b280e <_GLOBAL__I__ZN4CLog5this_E+0xec35>  ; global constructors keyed to CLog::this_+0xec35
08295e56 +0xd4:  sub    $0x4,%esp
08295e59 +0xd7:  lea    -0x24(%ebp),%eax
08295e5c +0xda:  mov    %eax,0x4(%esp)
08295e60 +0xde:  lea    -0x2c(%ebp),%eax
08295e63 +0xe1:  mov    %eax,(%esp)
08295e66 +0xe4:  call   082b289a <_GLOBAL__I__ZN4CLog5this_E+0xecc1>  ; global constructors keyed to CLog::this_+0xecc1
08295e6b +0xe9:  test   %al,%al
08295e6d +0xeb:  jne    08295da8 <+0x26>
08295e73 +0xf1:  leave
08295e74 +0xf2:  ret
08295e75 +0xf3:  nop
```

## 反编译 C

```c
// CGameManager::onTimeAdvanceAltar @ 0x8295d82

/* CGameManager::onTimeAdvanceAltar() */

void __thiscall CGameManager::onTimeAdvanceAltar(CGameManager *this)

{
  char cVar1;
  int iVar2;
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_30 [8];
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  local_18 [8];
  StageControl *local_10;
  
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::begin(local_30);
  while( true ) {
    __gnu_cxx::
    hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
    ::end(local_28);
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                          *)local_30,(_Hashtable_iterator *)local_28);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                          *)local_30);
    local_10 = *(StageControl **)(iVar2 + 4);
    cVar1 = advancealtar::StageControl::onTimerStageTick(local_10);
    if (cVar1 == '\x01') {
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::operator++(local_18,(int)local_30);
    }
    else {
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::operator++((_Hashtable_iterator<std::pair<int_const,advancealtar::StageControl*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,advancealtar::StageControl*>>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
                    *)&local_20,(int)local_30);
      __gnu_cxx::
      hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
      ::erase(this + 0x2c0,local_20,local_1c);
      StaticPool<advancealtar::StageControl,600>::Free
                ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c),local_10);
    }
  }
  return;
}
```
