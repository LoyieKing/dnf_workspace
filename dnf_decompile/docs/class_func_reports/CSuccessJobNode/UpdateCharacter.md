# UpdateCharacter

`_ZN15CSuccessJobNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC`

`CSuccessJobNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CSuccessJobNode` | `0x08484d4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08484d4c  _ZN15CSuccessJobNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC
#           CSuccessJobNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x08484d4c, 0x08484dd9]
08484d4c +0x00:  push   %ebp
08484d4d +0x01:  mov    %esp,%ebp
08484d4f +0x03:  sub    $0x28,%esp
08484d52 +0x06:  mov    0xc(%ebp),%eax
08484d55 +0x09:  lea    0x44(%eax),%ecx
08484d58 +0x0c:  mov    0x8(%ebp),%edx
08484d5b +0x0f:  lea    -0x14(%ebp),%eax
08484d5e +0x12:  mov    %ecx,0x8(%esp)
08484d62 +0x16:  mov    %edx,0x4(%esp)
08484d66 +0x1a:  mov    %eax,(%esp)
08484d69 +0x1d:  call   0848723e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xc78>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xc78
08484d6e +0x22:  sub    $0x4,%esp
08484d71 +0x25:  mov    0x8(%ebp),%edx
08484d74 +0x28:  lea    -0x10(%ebp),%eax
08484d77 +0x2b:  mov    %edx,0x4(%esp)
08484d7b +0x2f:  mov    %eax,(%esp)
08484d7e +0x32:  call   0848726a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xca4>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xca4
08484d83 +0x37:  sub    $0x4,%esp
08484d86 +0x3a:  lea    -0x10(%ebp),%eax
08484d89 +0x3d:  mov    %eax,0x4(%esp)
08484d8d +0x41:  lea    -0x14(%ebp),%eax
08484d90 +0x44:  mov    %eax,(%esp)
08484d93 +0x47:  call   08487290 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xcca>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xcca
08484d98 +0x4c:  test   %al,%al
08484d9a +0x4e:  je     08484dba <+0x6e>
08484d9c +0x50:  lea    -0x14(%ebp),%eax
08484d9f +0x53:  mov    %eax,(%esp)
08484da2 +0x56:  call   0848733e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd78>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd78
08484da7 +0x5b:  add    $0x4,%eax
08484daa +0x5e:  mov    %eax,-0xc(%ebp)
08484dad +0x61:  mov    -0xc(%ebp),%eax
08484db0 +0x64:  mov    (%eax),%eax
08484db2 +0x66:  lea    0x1(%eax),%edx
08484db5 +0x69:  mov    -0xc(%ebp),%eax
08484db8 +0x6c:  mov    %edx,(%eax)
08484dba +0x6e:  mov    0xc(%ebp),%eax
08484dbd +0x71:  lea    0x24(%eax),%edx
08484dc0 +0x74:  mov    0x8(%ebp),%eax
08484dc3 +0x77:  add    $0x18,%eax
08484dc6 +0x7a:  mov    %edx,0x4(%esp)
08484dca +0x7e:  mov    %eax,(%esp)
08484dcd +0x81:  call   084867ee <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x228>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x228
08484dd2 +0x86:  mov    $0x1,%eax
08484dd7 +0x8b:  leave
08484dd8 +0x8c:  ret
08484dd9 +0x8d:  nop
```

## 反编译 C

```c
// CSuccessJobNode::UpdateCharacter @ 0x8484d4c

/* CSuccessJobNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

undefined4 __thiscall
CSuccessJobNode::UpdateCharacter(CSuccessJobNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,JobParty>> local_18 [4];
  map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>> local_14 [4];
  int *local_10;
  
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::find
            ((int *)local_18);
  std::map<int,JobParty,std::less<int>,std::allocator<std::pair<int_const,JobParty>>>::end(local_14)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,JobParty>>::operator->(local_18);
    local_10 = (int *)(iVar2 + 4);
    *local_10 = *local_10 + 1;
  }
  Character::operator+=((Character *)(this + 0x18),(Character *)(param_1 + 0x24));
  return 1;
}
```
