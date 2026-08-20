# UpdateSkill

`_ZN15CDungeonJobNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonJobNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonJobNode` | `0x08484bac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08484bac  _ZN15CDungeonJobNode11UpdateSkillEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonJobNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x08484bac, 0x08484c2f]
08484bac +0x00:  push   %ebp
08484bad +0x01:  mov    %esp,%ebp
08484baf +0x03:  sub    $0x28,%esp
08484bb2 +0x06:  mov    0xc(%ebp),%eax
08484bb5 +0x09:  lea    0x1c(%eax),%ecx
08484bb8 +0x0c:  mov    0x8(%ebp),%edx
08484bbb +0x0f:  lea    -0x14(%ebp),%eax
08484bbe +0x12:  mov    %ecx,0x8(%esp)
08484bc2 +0x16:  mov    %edx,0x4(%esp)
08484bc6 +0x1a:  mov    %eax,(%esp)
08484bc9 +0x1d:  call   0848708a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xac4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xac4
08484bce +0x22:  sub    $0x4,%esp
08484bd1 +0x25:  mov    0x8(%ebp),%edx
08484bd4 +0x28:  lea    -0x10(%ebp),%eax
08484bd7 +0x2b:  mov    %edx,0x4(%esp)
08484bdb +0x2f:  mov    %eax,(%esp)
08484bde +0x32:  call   084870b6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xaf0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xaf0
08484be3 +0x37:  sub    $0x4,%esp
08484be6 +0x3a:  lea    -0x10(%ebp),%eax
08484be9 +0x3d:  mov    %eax,0x4(%esp)
08484bed +0x41:  lea    -0x14(%ebp),%eax
08484bf0 +0x44:  mov    %eax,(%esp)
08484bf3 +0x47:  call   084871a2 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xbdc>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xbdc
08484bf8 +0x4c:  test   %al,%al
08484bfa +0x4e:  je     08484c03 <+0x57>
08484bfc +0x50:  mov    $0x0,%eax
08484c01 +0x55:  jmp    08484c2e <+0x82>
08484c03 +0x57:  lea    -0x14(%ebp),%eax
08484c06 +0x5a:  mov    %eax,(%esp)
08484c09 +0x5d:  call   084871b6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xbf0>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xbf0
08484c0e +0x62:  add    $0x4,%eax
08484c11 +0x65:  mov    %eax,-0xc(%ebp)
08484c14 +0x68:  mov    0xc(%ebp),%eax
08484c17 +0x6b:  add    $0x64,%eax
08484c1a +0x6e:  mov    %eax,0x4(%esp)
08484c1e +0x72:  mov    -0xc(%ebp),%eax
08484c21 +0x75:  mov    %eax,(%esp)
08484c24 +0x78:  call   08486902 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x33c>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x33c
08484c29 +0x7d:  mov    $0x1,%eax
08484c2e +0x82:  leave
08484c2f +0x83:  ret
```

## 反编译 C

```c
// CDungeonJobNode::UpdateSkill @ 0x8484bac

/* CDungeonJobNode::UpdateSkill(SIG_DUNGEON_DATA_STATISTIC*) */

bool __thiscall
CDungeonJobNode::UpdateSkill(CDungeonJobNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,Skill>> local_18 [4];
  map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>> local_14 [4];
  Skill *local_10;
  
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::find
            ((int *)local_18);
  std::map<int,Skill,std::less<int>,std::allocator<std::pair<int_const,Skill>>>::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator==
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,Skill>>::operator->(local_18);
    local_10 = (Skill *)(iVar2 + 4);
    Skill::operator+=(local_10,(Skill *)(param_1 + 100));
  }
  return cVar1 == '\0';
}
```
