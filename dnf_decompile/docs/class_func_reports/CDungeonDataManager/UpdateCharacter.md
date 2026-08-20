# UpdateCharacter

`_ZN19CDungeonDataManager15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonDataManager::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x08485956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485956  _ZN19CDungeonDataManager15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonDataManager::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x08485956, 0x084859d7]
08485956 +0x00:  push   %ebp
08485957 +0x01:  mov    %esp,%ebp
08485959 +0x03:  sub    $0x28,%esp
0848595c +0x06:  mov    0xc(%ebp),%eax
0848595f +0x09:  lea    0x4(%eax),%ecx
08485962 +0x0c:  mov    0x8(%ebp),%edx
08485965 +0x0f:  lea    -0x14(%ebp),%eax
08485968 +0x12:  mov    %ecx,0x8(%esp)
0848596c +0x16:  mov    %edx,0x4(%esp)
08485970 +0x1a:  mov    %eax,(%esp)
08485973 +0x1d:  call   08487986 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13c0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13c0
08485978 +0x22:  sub    $0x4,%esp
0848597b +0x25:  mov    0x8(%ebp),%edx
0848597e +0x28:  lea    -0x10(%ebp),%eax
08485981 +0x2b:  mov    %edx,0x4(%esp)
08485985 +0x2f:  mov    %eax,(%esp)
08485988 +0x32:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
0848598d +0x37:  sub    $0x4,%esp
08485990 +0x3a:  lea    -0x10(%ebp),%eax
08485993 +0x3d:  mov    %eax,0x4(%esp)
08485997 +0x41:  lea    -0x14(%ebp),%eax
0848599a +0x44:  mov    %eax,(%esp)
0848599d +0x47:  call   08487c78 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16b2
084859a2 +0x4c:  test   %al,%al
084859a4 +0x4e:  je     084859ad <+0x57>
084859a6 +0x50:  mov    $0x0,%eax
084859ab +0x55:  jmp    084859d5 <+0x7f>
084859ad +0x57:  lea    -0x14(%ebp),%eax
084859b0 +0x5a:  mov    %eax,(%esp)
084859b3 +0x5d:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
084859b8 +0x62:  add    $0xc,%eax
084859bb +0x65:  mov    %eax,-0xc(%ebp)
084859be +0x68:  mov    0xc(%ebp),%eax
084859c1 +0x6b:  mov    %eax,0x4(%esp)
084859c5 +0x6f:  mov    -0xc(%ebp),%eax
084859c8 +0x72:  mov    %eax,(%esp)
084859cb +0x75:  call   08485564 <_ZN12CDungeonNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC>  ; CDungeonNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
084859d0 +0x7a:  mov    $0x1,%eax
084859d5 +0x7f:  leave
084859d6 +0x80:  ret
084859d7 +0x81:  nop
```

## 反编译 C

```c
// CDungeonDataManager::UpdateCharacter @ 0x8485956

/* CDungeonDataManager::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonDataManager::UpdateCharacter(CDungeonDataManager *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  DungeonKey local_18 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_14 [4];
  CDungeonNode *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::find(local_18);
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator==
                    ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_18);
    local_10 = (CDungeonNode *)(iVar2 + 0xc);
    CDungeonNode::UpdateCharacter(local_10,param_1);
  }
  return cVar1 == '\0';
}
```
