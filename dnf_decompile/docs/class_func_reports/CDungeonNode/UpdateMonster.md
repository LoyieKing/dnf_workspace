# UpdateMonster

`_ZN12CDungeonNode13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonNode::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonNode` | `0x08485628` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08485628  _ZN12CDungeonNode13UpdateMonsterEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonNode::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x08485628, 0x084856ab]
08485628 +0x00:  push   %ebp
08485629 +0x01:  mov    %esp,%ebp
0848562b +0x03:  sub    $0x28,%esp
0848562e +0x06:  mov    0xc(%ebp),%eax
08485631 +0x09:  lea    0x18(%eax),%ecx
08485634 +0x0c:  mov    0x8(%ebp),%edx
08485637 +0x0f:  lea    -0x14(%ebp),%eax
0848563a +0x12:  mov    %ecx,0x8(%esp)
0848563e +0x16:  mov    %edx,0x4(%esp)
08485642 +0x1a:  mov    %eax,(%esp)
08485645 +0x1d:  call   0848768c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10c6>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10c6
0848564a +0x22:  sub    $0x4,%esp
0848564d +0x25:  mov    0x8(%ebp),%edx
08485650 +0x28:  lea    -0x10(%ebp),%eax
08485653 +0x2b:  mov    %edx,0x4(%esp)
08485657 +0x2f:  mov    %eax,(%esp)
0848565a +0x32:  call   084876b8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10f2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10f2
0848565f +0x37:  sub    $0x4,%esp
08485662 +0x3a:  lea    -0x10(%ebp),%eax
08485665 +0x3d:  mov    %eax,0x4(%esp)
08485669 +0x41:  lea    -0x14(%ebp),%eax
0848566c +0x44:  mov    %eax,(%esp)
0848566f +0x47:  call   08487964 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x139e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x139e
08485674 +0x4c:  test   %al,%al
08485676 +0x4e:  je     0848567f <+0x57>
08485678 +0x50:  mov    $0x0,%eax
0848567d +0x55:  jmp    084856aa <+0x82>
0848567f +0x57:  lea    -0x14(%ebp),%eax
08485682 +0x5a:  mov    %eax,(%esp)
08485685 +0x5d:  call   08487978 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x13b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x13b2
0848568a +0x62:  add    $0x4,%eax
0848568d +0x65:  mov    %eax,-0xc(%ebp)
08485690 +0x68:  mov    0xc(%ebp),%eax
08485693 +0x6b:  add    $0x74,%eax
08485696 +0x6e:  mov    %eax,0x4(%esp)
0848569a +0x72:  mov    -0xc(%ebp),%eax
0848569d +0x75:  mov    %eax,(%esp)
084856a0 +0x78:  call   08486996 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x3d0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x3d0
084856a5 +0x7d:  mov    $0x1,%eax
084856aa +0x82:  leave
084856ab +0x83:  ret
```

## 反编译 C

```c
// CDungeonNode::UpdateMonster @ 0x8485628

/* CDungeonNode::UpdateMonster(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall CDungeonNode::UpdateMonster(CDungeonNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,Monster>> local_18 [4];
  map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>> local_14 [4];
  Monster *local_10;
  
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::find
            ((int *)local_18);
  std::map<int,Monster,std::less<int>,std::allocator<std::pair<int_const,Monster>>>::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,Monster>>::operator->(local_18);
    local_10 = (Monster *)(iVar2 + 4);
    Monster::operator+=(local_10,(Monster *)(param_1 + 0x74));
  }
  return cVar1 == '\0';
}
```
