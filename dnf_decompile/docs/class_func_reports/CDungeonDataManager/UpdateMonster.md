# UpdateMonster

`_ZN19CDungeonDataManager13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonDataManager::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x08485a5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485a5a  _ZN19CDungeonDataManager13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonDataManager::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x08485a5a, 0x08485adb]
08485a5a +0x00:  push   %ebp
08485a5b +0x01:  mov    %esp,%ebp
08485a5d +0x03:  sub    $0x28,%esp
08485a60 +0x06:  mov    0xc(%ebp),%eax
08485a63 +0x09:  lea    0x4(%eax),%ecx
08485a66 +0x0c:  mov    0x8(%ebp),%edx
08485a69 +0x0f:  lea    -0x14(%ebp),%eax
08485a6c +0x12:  mov    %ecx,0x8(%esp)
08485a70 +0x16:  mov    %edx,0x4(%esp)
08485a74 +0x1a:  mov    %eax,(%esp)
08485a77 +0x1d:  call   08487986 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13c0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13c0
08485a7c +0x22:  sub    $0x4,%esp
08485a7f +0x25:  mov    0x8(%ebp),%edx
08485a82 +0x28:  lea    -0x10(%ebp),%eax
08485a85 +0x2b:  mov    %edx,0x4(%esp)
08485a89 +0x2f:  mov    %eax,(%esp)
08485a8c +0x32:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
08485a91 +0x37:  sub    $0x4,%esp
08485a94 +0x3a:  lea    -0x10(%ebp),%eax
08485a97 +0x3d:  mov    %eax,0x4(%esp)
08485a9b +0x41:  lea    -0x14(%ebp),%eax
08485a9e +0x44:  mov    %eax,(%esp)
08485aa1 +0x47:  call   08487c78 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16b2
08485aa6 +0x4c:  test   %al,%al
08485aa8 +0x4e:  je     08485ab1 <+0x57>
08485aaa +0x50:  mov    $0x0,%eax
08485aaf +0x55:  jmp    08485ad9 <+0x7f>
08485ab1 +0x57:  lea    -0x14(%ebp),%eax
08485ab4 +0x5a:  mov    %eax,(%esp)
08485ab7 +0x5d:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
08485abc +0x62:  add    $0xc,%eax
08485abf +0x65:  mov    %eax,-0xc(%ebp)
08485ac2 +0x68:  mov    0xc(%ebp),%eax
08485ac5 +0x6b:  mov    %eax,0x4(%esp)
08485ac9 +0x6f:  mov    -0xc(%ebp),%eax
08485acc +0x72:  mov    %eax,(%esp)
08485acf +0x75:  call   08485628 <_ZN12CDungeonNode13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC>  ; CDungeonNode::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*)
08485ad4 +0x7a:  mov    $0x1,%eax
08485ad9 +0x7f:  leave
08485ada +0x80:  ret
08485adb +0x81:  nop
```

## 反编译 C

```c
// CDungeonDataManager::UpdateMonster @ 0x8485a5a

/* CDungeonDataManager::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonDataManager::UpdateMonster(CDungeonDataManager *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

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
    CDungeonNode::UpdateMonster(local_10,param_1);
  }
  return cVar1 == '\0';
}
```
