# UpdateSkill

`_ZN19CDungeonDataManager11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonDataManager::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x084859d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084859d8  _ZN19CDungeonDataManager11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonDataManager::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x084859d8, 0x08485a59]
084859d8 +0x00:  push   %ebp
084859d9 +0x01:  mov    %esp,%ebp
084859db +0x03:  sub    $0x28,%esp
084859de +0x06:  mov    0xc(%ebp),%eax
084859e1 +0x09:  lea    0x4(%eax),%ecx
084859e4 +0x0c:  mov    0x8(%ebp),%edx
084859e7 +0x0f:  lea    -0x14(%ebp),%eax
084859ea +0x12:  mov    %ecx,0x8(%esp)
084859ee +0x16:  mov    %edx,0x4(%esp)
084859f2 +0x1a:  mov    %eax,(%esp)
084859f5 +0x1d:  call   08487986 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13c0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13c0
084859fa +0x22:  sub    $0x4,%esp
084859fd +0x25:  mov    0x8(%ebp),%edx
08485a00 +0x28:  lea    -0x10(%ebp),%eax
08485a03 +0x2b:  mov    %edx,0x4(%esp)
08485a07 +0x2f:  mov    %eax,(%esp)
08485a0a +0x32:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
08485a0f +0x37:  sub    $0x4,%esp
08485a12 +0x3a:  lea    -0x10(%ebp),%eax
08485a15 +0x3d:  mov    %eax,0x4(%esp)
08485a19 +0x41:  lea    -0x14(%ebp),%eax
08485a1c +0x44:  mov    %eax,(%esp)
08485a1f +0x47:  call   08487c78 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16b2
08485a24 +0x4c:  test   %al,%al
08485a26 +0x4e:  je     08485a2f <+0x57>
08485a28 +0x50:  mov    $0x0,%eax
08485a2d +0x55:  jmp    08485a57 <+0x7f>
08485a2f +0x57:  lea    -0x14(%ebp),%eax
08485a32 +0x5a:  mov    %eax,(%esp)
08485a35 +0x5d:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
08485a3a +0x62:  add    $0xc,%eax
08485a3d +0x65:  mov    %eax,-0xc(%ebp)
08485a40 +0x68:  mov    0xc(%ebp),%eax
08485a43 +0x6b:  mov    %eax,0x4(%esp)
08485a47 +0x6f:  mov    -0xc(%ebp),%eax
08485a4a +0x72:  mov    %eax,(%esp)
08485a4d +0x75:  call   0848559a <_ZN12CDungeonNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC>  ; CDungeonNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)
08485a52 +0x7a:  mov    $0x1,%eax
08485a57 +0x7f:  leave
08485a58 +0x80:  ret
08485a59 +0x81:  nop
```

## 反编译 C

```c
// CDungeonDataManager::UpdateSkill @ 0x84859d8

/* CDungeonDataManager::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonDataManager::UpdateSkill(CDungeonDataManager *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

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
    CDungeonNode::UpdateSkill(local_10,param_1);
  }
  return cVar1 == '\0';
}
```
