# InsertSkillKey

`_ZN19CDungeonDataManager14InsertSkillKeyEii`

`CDungeonDataManager::InsertSkillKey(int, int)`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x0848589a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848589a  _ZN19CDungeonDataManager14InsertSkillKeyEii
#           CDungeonDataManager::InsertSkillKey(int, int)
# range [0x0848589a, 0x08485955]
0848589a +0x00:  push   %ebp
0848589b +0x01:  mov    %esp,%ebp
0848589d +0x03:  sub    $0x48,%esp
084858a0 +0x06:  mov    0x8(%ebp),%edx
084858a3 +0x09:  lea    -0x1c(%ebp),%eax
084858a6 +0x0c:  mov    %edx,0x4(%esp)
084858aa +0x10:  mov    %eax,(%esp)
084858ad +0x13:  call   08487c06 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1640>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1640
084858b2 +0x18:  sub    $0x4,%esp
084858b5 +0x1b:  jmp    0848591f <+0x85>
084858b7 +0x1d:  lea    -0x1c(%ebp),%eax
084858ba +0x20:  mov    %eax,(%esp)
084858bd +0x23:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
084858c2 +0x28:  add    $0xc,%eax
084858c5 +0x2b:  mov    %eax,-0x10(%ebp)
084858c8 +0x2e:  lea    -0x1c(%ebp),%eax
084858cb +0x31:  mov    %eax,(%esp)
084858ce +0x34:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
084858d3 +0x39:  mov    %eax,-0xc(%ebp)
084858d6 +0x3c:  mov    -0xc(%ebp),%eax
084858d9 +0x3f:  mov    0x4(%eax),%edx
084858dc +0x42:  mov    -0xc(%ebp),%eax
084858df +0x45:  mov    (%eax),%eax
084858e1 +0x47:  mov    %edx,0x10(%esp)
084858e5 +0x4b:  mov    %eax,0xc(%esp)
084858e9 +0x4f:  mov    0x10(%ebp),%eax
084858ec +0x52:  mov    %eax,0x8(%esp)
084858f0 +0x56:  mov    0xc(%ebp),%eax
084858f3 +0x59:  mov    %eax,0x4(%esp)
084858f7 +0x5d:  mov    -0x10(%ebp),%eax
084858fa +0x60:  mov    %eax,(%esp)
084858fd +0x63:  call   08485404 <_ZN12CDungeonNode14InsertSkillKeyEiiii>  ; CDungeonNode::InsertSkillKey(int, int, int, int)
08485902 +0x68:  lea    -0x14(%ebp),%eax
08485905 +0x6b:  movl   $0x0,0x8(%esp)
0848590d +0x73:  lea    -0x1c(%ebp),%edx
08485910 +0x76:  mov    %edx,0x4(%esp)
08485914 +0x7a:  mov    %eax,(%esp)
08485917 +0x7d:  call   08487c2c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1666>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1666
0848591c +0x82:  sub    $0x4,%esp
0848591f +0x85:  mov    0x8(%ebp),%edx
08485922 +0x88:  lea    -0x18(%ebp),%eax
08485925 +0x8b:  mov    %edx,0x4(%esp)
08485929 +0x8f:  mov    %eax,(%esp)
0848592c +0x92:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
08485931 +0x97:  sub    $0x4,%esp
08485934 +0x9a:  lea    -0x18(%ebp),%eax
08485937 +0x9d:  mov    %eax,0x4(%esp)
0848593b +0xa1:  lea    -0x1c(%ebp),%eax
0848593e +0xa4:  mov    %eax,(%esp)
08485941 +0xa7:  call   084879d8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1412>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1412
08485946 +0xac:  test   %al,%al
08485948 +0xae:  jne    084858b7 <+0x1d>
0848594e +0xb4:  mov    $0x1,%eax
08485953 +0xb9:  leave
08485954 +0xba:  ret
08485955 +0xbb:  nop
```

## 反编译 C

```c
// CDungeonDataManager::InsertSkillKey @ 0x848589a

/* CDungeonDataManager::InsertSkillKey(int, int) */

undefined4 __thiscall
CDungeonDataManager::InsertSkillKey(CDungeonDataManager *this,int param_1,int param_2)

{
  char cVar1;
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_20 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> local_18 [4];
  int local_14;
  int *local_10;
  
  std::
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator!=
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    local_14 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20);
    local_14 = local_14 + 0xc;
    local_10 = (int *)std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                                ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)
                                 local_20);
    CDungeonNode::InsertSkillKey(local_14,param_1,param_2,*local_10);
    std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator++
              (local_18,(int)local_20);
  }
  return 1;
}
```
