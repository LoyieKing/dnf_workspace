# InsertMonsterKey

`_ZN19CDungeonDataManager16InsertMonsterKeyEi`

`CDungeonDataManager::InsertMonsterKey(int)`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x0848580a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848580a  _ZN19CDungeonDataManager16InsertMonsterKeyEi
#           CDungeonDataManager::InsertMonsterKey(int)
# range [0x0848580a, 0x08485899]
0848580a +0x00:  push   %ebp
0848580b +0x01:  mov    %esp,%ebp
0848580d +0x03:  sub    $0x28,%esp
08485810 +0x06:  mov    0x8(%ebp),%edx
08485813 +0x09:  lea    -0x18(%ebp),%eax
08485816 +0x0c:  mov    %edx,0x4(%esp)
0848581a +0x10:  mov    %eax,(%esp)
0848581d +0x13:  call   08487c06 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1640>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1640
08485822 +0x18:  sub    $0x4,%esp
08485825 +0x1b:  jmp    08485867 <+0x5d>
08485827 +0x1d:  lea    -0x18(%ebp),%eax
0848582a +0x20:  mov    %eax,(%esp)
0848582d +0x23:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
08485832 +0x28:  add    $0xc,%eax
08485835 +0x2b:  mov    %eax,-0xc(%ebp)
08485838 +0x2e:  mov    0xc(%ebp),%eax
0848583b +0x31:  mov    %eax,0x4(%esp)
0848583f +0x35:  mov    -0xc(%ebp),%eax
08485842 +0x38:  mov    %eax,(%esp)
08485845 +0x3b:  call   084852de <_ZN12CDungeonNode16InsertMonsterKeyEi>  ; CDungeonNode::InsertMonsterKey(int)
0848584a +0x40:  lea    -0x10(%ebp),%eax
0848584d +0x43:  movl   $0x0,0x8(%esp)
08485855 +0x4b:  lea    -0x18(%ebp),%edx
08485858 +0x4e:  mov    %edx,0x4(%esp)
0848585c +0x52:  mov    %eax,(%esp)
0848585f +0x55:  call   08487c2c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1666>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1666
08485864 +0x5a:  sub    $0x4,%esp
08485867 +0x5d:  mov    0x8(%ebp),%edx
0848586a +0x60:  lea    -0x14(%ebp),%eax
0848586d +0x63:  mov    %edx,0x4(%esp)
08485871 +0x67:  mov    %eax,(%esp)
08485874 +0x6a:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
08485879 +0x6f:  sub    $0x4,%esp
0848587c +0x72:  lea    -0x14(%ebp),%eax
0848587f +0x75:  mov    %eax,0x4(%esp)
08485883 +0x79:  lea    -0x18(%ebp),%eax
08485886 +0x7c:  mov    %eax,(%esp)
08485889 +0x7f:  call   084879d8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1412>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1412
0848588e +0x84:  test   %al,%al
08485890 +0x86:  jne    08485827 <+0x1d>
08485892 +0x88:  mov    $0x1,%eax
08485897 +0x8d:  leave
08485898 +0x8e:  ret
08485899 +0x8f:  nop
```

## 反编译 C

```c
// CDungeonDataManager::InsertMonsterKey @ 0x848580a

/* CDungeonDataManager::InsertMonsterKey(int) */

undefined4 CDungeonDataManager::InsertMonsterKey(int param_1)

{
  char cVar1;
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1c [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> local_14 [4];
  int local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    local_10 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_1c);
    local_10 = local_10 + 0xc;
    CDungeonNode::InsertMonsterKey(local_10);
    std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator++
              (local_14,(int)local_1c);
  }
  return 1;
}
```
