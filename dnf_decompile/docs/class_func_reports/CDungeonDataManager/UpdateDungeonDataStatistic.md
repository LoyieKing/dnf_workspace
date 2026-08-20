# UpdateDungeonDataStatistic

`_ZN19CDungeonDataManager26UpdateDungeonDataStatisticEv`

`CDungeonDataManager::UpdateDungeonDataStatistic()`

| 类 | 地址 |
|---|---|
| `CDungeonDataManager` | `0x08485adc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485adc  _ZN19CDungeonDataManager26UpdateDungeonDataStatisticEv
#           CDungeonDataManager::UpdateDungeonDataStatistic()
# range [0x08485adc, 0x08485b78]
08485adc +0x00:  push   %ebp
08485add +0x01:  mov    %esp,%ebp
08485adf +0x03:  sub    $0x38,%esp
08485ae2 +0x06:  mov    0x8(%ebp),%edx
08485ae5 +0x09:  lea    -0x1c(%ebp),%eax
08485ae8 +0x0c:  mov    %edx,0x4(%esp)
08485aec +0x10:  mov    %eax,(%esp)
08485aef +0x13:  call   08487c06 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1640>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1640
08485af4 +0x18:  sub    $0x4,%esp
08485af7 +0x1b:  jmp    08485b47 <+0x6b>
08485af9 +0x1d:  lea    -0x1c(%ebp),%eax
08485afc +0x20:  mov    %eax,(%esp)
08485aff +0x23:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
08485b04 +0x28:  add    $0xc,%eax
08485b07 +0x2b:  mov    %eax,-0x10(%ebp)
08485b0a +0x2e:  lea    -0x1c(%ebp),%eax
08485b0d +0x31:  mov    %eax,(%esp)
08485b10 +0x34:  call   08487c6a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x16a4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x16a4
08485b15 +0x39:  mov    %eax,-0xc(%ebp)
08485b18 +0x3c:  mov    -0xc(%ebp),%eax
08485b1b +0x3f:  mov    %eax,0x4(%esp)
08485b1f +0x43:  mov    -0x10(%ebp),%eax
08485b22 +0x46:  mov    %eax,(%esp)
08485b25 +0x49:  call   08485ba4 <_ZN12CDungeonNode8InsertDBERK10DungeonKey>  ; CDungeonNode::InsertDB(DungeonKey const&)
08485b2a +0x4e:  lea    -0x14(%ebp),%eax
08485b2d +0x51:  movl   $0x0,0x8(%esp)
08485b35 +0x59:  lea    -0x1c(%ebp),%edx
08485b38 +0x5c:  mov    %edx,0x4(%esp)
08485b3c +0x60:  mov    %eax,(%esp)
08485b3f +0x63:  call   08487c2c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1666>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1666
08485b44 +0x68:  sub    $0x4,%esp
08485b47 +0x6b:  mov    0x8(%ebp),%edx
08485b4a +0x6e:  lea    -0x18(%ebp),%eax
08485b4d +0x71:  mov    %edx,0x4(%esp)
08485b51 +0x75:  mov    %eax,(%esp)
08485b54 +0x78:  call   084879b2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13ec>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13ec
08485b59 +0x7d:  sub    $0x4,%esp
08485b5c +0x80:  lea    -0x18(%ebp),%eax
08485b5f +0x83:  mov    %eax,0x4(%esp)
08485b63 +0x87:  lea    -0x1c(%ebp),%eax
08485b66 +0x8a:  mov    %eax,(%esp)
08485b69 +0x8d:  call   084879d8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1412>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1412
08485b6e +0x92:  test   %al,%al
08485b70 +0x94:  jne    08485af9 <+0x1d>
08485b72 +0x96:  mov    $0x1,%eax
08485b77 +0x9b:  leave
08485b78 +0x9c:  ret
```

## 反编译 C

```c
// CDungeonDataManager::UpdateDungeonDataStatistic @ 0x8485adc

/* CDungeonDataManager::UpdateDungeonDataStatistic() */

undefined4 CDungeonDataManager::UpdateDungeonDataStatistic(void)

{
  char cVar1;
  int iVar2;
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_20 [4];
  map<DungeonKey,CDungeonNode,std::less<DungeonKey>,std::allocator<std::pair<DungeonKey_const,CDungeonNode>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> local_18 [4];
  CDungeonNode *local_14;
  DungeonKey *local_10;
  
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
    iVar2 = std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20);
    local_14 = (CDungeonNode *)(iVar2 + 0xc);
    local_10 = (DungeonKey *)
               std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator->
                         ((_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>> *)local_20);
    CDungeonNode::InsertDB(local_14,local_10);
    std::_Rb_tree_iterator<std::pair<DungeonKey_const,CDungeonNode>>::operator++
              (local_18,(int)local_20);
  }
  return 1;
}
```
