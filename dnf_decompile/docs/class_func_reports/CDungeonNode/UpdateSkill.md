# UpdateSkill

`_ZN12CDungeonNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonNode` | `0x0848559a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848559a  _ZN12CDungeonNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x0848559a, 0x08485627]
0848559a +0x00:  push   %ebp
0848559b +0x01:  mov    %esp,%ebp
0848559d +0x03:  sub    $0x28,%esp
084855a0 +0x06:  mov    0xc(%ebp),%eax
084855a3 +0x09:  mov    0x10(%eax),%eax
084855a6 +0x0c:  mov    %eax,-0x14(%ebp)
084855a9 +0x0f:  mov    0x8(%ebp),%eax
084855ac +0x12:  lea    0x18(%eax),%ecx
084855af +0x15:  lea    -0x18(%ebp),%eax
084855b2 +0x18:  lea    -0x14(%ebp),%edx
084855b5 +0x1b:  mov    %edx,0x8(%esp)
084855b9 +0x1f:  mov    %ecx,0x4(%esp)
084855bd +0x23:  mov    %eax,(%esp)
084855c0 +0x26:  call   0848779e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x11d8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x11d8
084855c5 +0x2b:  sub    $0x4,%esp
084855c8 +0x2e:  mov    0x8(%ebp),%eax
084855cb +0x31:  lea    0x18(%eax),%edx
084855ce +0x34:  lea    -0x10(%ebp),%eax
084855d1 +0x37:  mov    %edx,0x4(%esp)
084855d5 +0x3b:  mov    %eax,(%esp)
084855d8 +0x3e:  call   084877ca <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1204>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1204
084855dd +0x43:  sub    $0x4,%esp
084855e0 +0x46:  lea    -0x10(%ebp),%eax
084855e3 +0x49:  mov    %eax,0x4(%esp)
084855e7 +0x4d:  lea    -0x18(%ebp),%eax
084855ea +0x50:  mov    %eax,(%esp)
084855ed +0x53:  call   08487950 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x138a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x138a
084855f2 +0x58:  test   %al,%al
084855f4 +0x5a:  je     084855fd <+0x63>
084855f6 +0x5c:  mov    $0x0,%eax
084855fb +0x61:  jmp    08485625 <+0x8b>
084855fd +0x63:  lea    -0x18(%ebp),%eax
08485600 +0x66:  mov    %eax,(%esp)
08485603 +0x69:  call   08487804 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x123e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x123e
08485608 +0x6e:  add    $0x4,%eax
0848560b +0x71:  mov    %eax,-0xc(%ebp)
0848560e +0x74:  mov    0xc(%ebp),%eax
08485611 +0x77:  mov    %eax,0x4(%esp)
08485615 +0x7b:  mov    -0xc(%ebp),%eax
08485618 +0x7e:  mov    %eax,(%esp)
0848561b +0x81:  call   08484bac <_ZN15CDungeonJobNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC>  ; CDungeonJobNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)
08485620 +0x86:  mov    $0x1,%eax
08485625 +0x8b:  leave
08485626 +0x8c:  ret
08485627 +0x8d:  nop
```

## 反编译 C

```c
// CDungeonNode::UpdateSkill @ 0x848559a

/* CDungeonNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall CDungeonNode::UpdateSkill(CDungeonNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>> local_1c [4];
  undefined4 local_18;
  map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  local_14 [4];
  CDungeonJobNode *local_10;
  
  local_18 = *(undefined4 *)(param_1 + 0x10);
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::find((int *)local_1c);
  std::map<int,CDungeonJobNode,std::less<int>,std::allocator<std::pair<int_const,CDungeonJobNode>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator==
                    (local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CDungeonJobNode>>::operator->(local_1c);
    local_10 = (CDungeonJobNode *)(iVar2 + 4);
    CDungeonJobNode::UpdateSkill(local_10,param_1);
  }
  return cVar1 == '\0';
}
```
