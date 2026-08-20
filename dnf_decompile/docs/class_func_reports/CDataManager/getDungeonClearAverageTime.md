# getDungeonClearAverageTime

`_ZN12CDataManager26getDungeonClearAverageTimeEii23ENUM_DUNGEON_DIFFICULTY`

`CDataManager::getDungeonClearAverageTime(int, int, ENUM_DUNGEON_DIFFICULTY)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x083639d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083639d2  _ZN12CDataManager26getDungeonClearAverageTimeEii23ENUM_DUNGEON_DIFFICULTY
#           CDataManager::getDungeonClearAverageTime(int, int, ENUM_DUNGEON_DIFFICULTY)
# range [0x083639d2, 0x08363ac7]
083639d2 +0x00:  push   %ebp
083639d3 +0x01:  mov    %esp,%ebp
083639d5 +0x03:  sub    $0x38,%esp
083639d8 +0x06:  movl   $0x0,-0xc(%ebp)
083639df +0x0d:  lea    -0x18(%ebp),%eax
083639e2 +0x10:  mov    %eax,(%esp)
083639e5 +0x13:  call   08370d1c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xace8>  ; global constructors keyed to CServerEvent::m_nExpRate+0xace8
083639ea +0x18:  mov    0xc(%ebp),%eax
083639ed +0x1b:  mov    %eax,-0x18(%ebp)
083639f0 +0x1e:  mov    0x10(%ebp),%eax
083639f3 +0x21:  mov    %eax,-0x14(%ebp)
083639f6 +0x24:  mov    0x8(%ebp),%eax
083639f9 +0x27:  lea    0x5108(%eax),%ecx
083639ff +0x2d:  lea    -0x1c(%ebp),%eax
08363a02 +0x30:  lea    -0x18(%ebp),%edx
08363a05 +0x33:  mov    %edx,0x8(%esp)
08363a09 +0x37:  mov    %ecx,0x4(%esp)
08363a0d +0x3b:  mov    %eax,(%esp)
08363a10 +0x3e:  call   08394fec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24a8c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24a8c
08363a15 +0x43:  sub    $0x4,%esp
08363a18 +0x46:  mov    0x8(%ebp),%eax
08363a1b +0x49:  lea    0x5108(%eax),%edx
08363a21 +0x4f:  lea    -0x10(%ebp),%eax
08363a24 +0x52:  mov    %edx,0x4(%esp)
08363a28 +0x56:  mov    %eax,(%esp)
08363a2b +0x59:  call   08395018 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ab8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ab8
08363a30 +0x5e:  sub    $0x4,%esp
08363a33 +0x61:  lea    -0x1c(%ebp),%eax
08363a36 +0x64:  mov    %eax,0x4(%esp)
08363a3a +0x68:  lea    -0x10(%ebp),%eax
08363a3d +0x6b:  mov    %eax,(%esp)
08363a40 +0x6e:  call   0839503e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24ade>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24ade
08363a45 +0x73:  test   %al,%al
08363a47 +0x75:  je     08363a50 <+0x7e>
08363a49 +0x77:  mov    $0x0,%eax
08363a4e +0x7c:  jmp    08363ac5 <+0xf3>
08363a50 +0x7e:  mov    0x14(%ebp),%eax
08363a53 +0x81:  cmp    $0x1,%eax
08363a56 +0x84:  je     08363a82 <+0xb0>
08363a58 +0x86:  cmp    $0x1,%eax
08363a5b +0x89:  jg     08363a63 <+0x91>
08363a5d +0x8b:  test   %eax,%eax
08363a5f +0x8d:  je     08363a6f <+0x9d>
08363a61 +0x8f:  jmp    08363abb <+0xe9>
08363a63 +0x91:  cmp    $0x2,%eax
08363a66 +0x94:  je     08363a95 <+0xc3>
08363a68 +0x96:  cmp    $0x3,%eax
08363a6b +0x99:  je     08363aa8 <+0xd6>
08363a6d +0x9b:  jmp    08363abb <+0xe9>
08363a6f +0x9d:  lea    -0x1c(%ebp),%eax
08363a72 +0xa0:  mov    %eax,(%esp)
08363a75 +0xa3:  call   08395052 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24af2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24af2
08363a7a +0xa8:  mov    0x8(%eax),%eax
08363a7d +0xab:  mov    %eax,-0xc(%ebp)
08363a80 +0xae:  jmp    08363ac2 <+0xf0>
08363a82 +0xb0:  lea    -0x1c(%ebp),%eax
08363a85 +0xb3:  mov    %eax,(%esp)
08363a88 +0xb6:  call   08395052 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24af2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24af2
08363a8d +0xbb:  mov    0xc(%eax),%eax
08363a90 +0xbe:  mov    %eax,-0xc(%ebp)
08363a93 +0xc1:  jmp    08363ac2 <+0xf0>
08363a95 +0xc3:  lea    -0x1c(%ebp),%eax
08363a98 +0xc6:  mov    %eax,(%esp)
08363a9b +0xc9:  call   08395052 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24af2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24af2
08363aa0 +0xce:  mov    0x10(%eax),%eax
08363aa3 +0xd1:  mov    %eax,-0xc(%ebp)
08363aa6 +0xd4:  jmp    08363ac2 <+0xf0>
08363aa8 +0xd6:  lea    -0x1c(%ebp),%eax
08363aab +0xd9:  mov    %eax,(%esp)
08363aae +0xdc:  call   08395052 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24af2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24af2
08363ab3 +0xe1:  mov    0x14(%eax),%eax
08363ab6 +0xe4:  mov    %eax,-0xc(%ebp)
08363ab9 +0xe7:  jmp    08363ac2 <+0xf0>
08363abb +0xe9:  mov    $0x0,%eax
08363ac0 +0xee:  jmp    08363ac5 <+0xf3>
08363ac2 +0xf0:  mov    -0xc(%ebp),%eax
08363ac5 +0xf3:  leave
08363ac6 +0xf4:  ret
08363ac7 +0xf5:  nop
```

## 反编译 C

```c
// CDataManager::getDungeonClearAverageTime @ 0x83639d2

/* CDataManager::getDungeonClearAverageTime(int, int, ENUM_DUNGEON_DIFFICULTY) */

undefined4 __thiscall
CDataManager::getDungeonClearAverageTime
          (undefined4 this,undefined4 param_1,undefined4 param_2,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  stClearTimeAverageMapKey local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  map<stClearTimeAverageMapKey,stClearTimeAverage,std::less<stClearTimeAverageMapKey>,std::allocator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>>
  local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  stClearTimeAverageMapKey::stClearTimeAverageMapKey((stClearTimeAverageMapKey *)&local_1c);
  local_1c = param_1;
  local_18 = param_2;
  std::
  map<stClearTimeAverageMapKey,stClearTimeAverage,std::less<stClearTimeAverageMapKey>,std::allocator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>>
  ::find(local_20);
  std::
  map<stClearTimeAverageMapKey,stClearTimeAverage,std::less<stClearTimeAverageMapKey>,std::allocator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>::
          operator==((_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>
                      *)local_14,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    if (param_4 == 1) {
      iVar3 = std::_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>::
              operator->((_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>
                          *)local_20);
      uVar2 = *(undefined4 *)(iVar3 + 0xc);
    }
    else {
      if (param_4 < 2) {
        if (param_4 == 0) {
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>::
                  operator->((_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>
                              *)local_20);
          return *(undefined4 *)(iVar3 + 8);
        }
      }
      else {
        if (param_4 == 2) {
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>::
                  operator->((_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>
                              *)local_20);
          return *(undefined4 *)(iVar3 + 0x10);
        }
        if (param_4 == 3) {
          iVar3 = std::
                  _Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>::
                  operator->((_Rb_tree_iterator<std::pair<stClearTimeAverageMapKey_const,stClearTimeAverage>>
                              *)local_20);
          return *(undefined4 *)(iVar3 + 0x14);
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
