# UpdateCharacter

`_ZN19CDungeonSuccessNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC`

`CDungeonSuccessNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)`

| 类 | 地址 |
|---|---|
| `CDungeonSuccessNode` | `0x084851de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084851de  _ZN19CDungeonSuccessNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC
#           CDungeonSuccessNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
# range [0x084851de, 0x084852dd]
084851de +0x00:  push   %ebp
084851df +0x01:  mov    %esp,%ebp
084851e1 +0x03:  sub    $0x38,%esp
084851e4 +0x06:  mov    0xc(%ebp),%eax
084851e7 +0x09:  lea    0x44(%eax),%ecx
084851ea +0x0c:  mov    0x8(%ebp),%edx
084851ed +0x0f:  lea    -0x1c(%ebp),%eax
084851f0 +0x12:  mov    %ecx,0x8(%esp)
084851f4 +0x16:  mov    %edx,0x4(%esp)
084851f8 +0x1a:  mov    %eax,(%esp)
084851fb +0x1d:  call   08487374 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xdae>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xdae
08485200 +0x22:  sub    $0x4,%esp
08485203 +0x25:  mov    0x8(%ebp),%edx
08485206 +0x28:  lea    -0x18(%ebp),%eax
08485209 +0x2b:  mov    %edx,0x4(%esp)
0848520d +0x2f:  mov    %eax,(%esp)
08485210 +0x32:  call   084873a0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xdda>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xdda
08485215 +0x37:  sub    $0x4,%esp
08485218 +0x3a:  lea    -0x18(%ebp),%eax
0848521b +0x3d:  mov    %eax,0x4(%esp)
0848521f +0x41:  lea    -0x1c(%ebp),%eax
08485222 +0x44:  mov    %eax,(%esp)
08485225 +0x47:  call   084873c6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xe00>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xe00
0848522a +0x4c:  test   %al,%al
0848522c +0x4e:  je     08485263 <+0x85>
0848522e +0x50:  lea    -0x1c(%ebp),%eax
08485231 +0x53:  mov    %eax,(%esp)
08485234 +0x56:  call   08487670 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10aa>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10aa
08485239 +0x5b:  add    $0x4,%eax
0848523c +0x5e:  mov    %eax,-0x10(%ebp)
0848523f +0x61:  mov    0xc(%ebp),%eax
08485242 +0x64:  lea    0x24(%eax),%edx
08485245 +0x67:  mov    -0x10(%ebp),%eax
08485248 +0x6a:  mov    %edx,0x4(%esp)
0848524c +0x6e:  mov    %eax,(%esp)
0848524f +0x71:  call   084866e8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x122>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x122
08485254 +0x76:  mov    -0x10(%ebp),%eax
08485257 +0x79:  mov    0x3c(%eax),%eax
0848525a +0x7c:  lea    0x1(%eax),%edx
0848525d +0x7f:  mov    -0x10(%ebp),%eax
08485260 +0x82:  mov    %edx,0x3c(%eax)
08485263 +0x85:  mov    0xc(%ebp),%eax
08485266 +0x88:  lea    0x10(%eax),%ecx
08485269 +0x8b:  mov    0x8(%ebp),%eax
0848526c +0x8e:  lea    0x18(%eax),%edx
0848526f +0x91:  lea    -0x20(%ebp),%eax
08485272 +0x94:  mov    %ecx,0x8(%esp)
08485276 +0x98:  mov    %edx,0x4(%esp)
0848527a +0x9c:  mov    %eax,(%esp)
0848527d +0x9f:  call   084874d4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf0e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf0e
08485282 +0xa4:  sub    $0x4,%esp
08485285 +0xa7:  mov    0x8(%ebp),%eax
08485288 +0xaa:  lea    0x18(%eax),%edx
0848528b +0xad:  lea    -0x14(%ebp),%eax
0848528e +0xb0:  mov    %edx,0x4(%esp)
08485292 +0xb4:  mov    %eax,(%esp)
08485295 +0xb7:  call   08487500 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf3a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf3a
0848529a +0xbc:  sub    $0x4,%esp
0848529d +0xbf:  lea    -0x14(%ebp),%eax
084852a0 +0xc2:  mov    %eax,0x4(%esp)
084852a4 +0xc6:  lea    -0x20(%ebp),%eax
084852a7 +0xc9:  mov    %eax,(%esp)
084852aa +0xcc:  call   08487526 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf60>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf60
084852af +0xd1:  test   %al,%al
084852b1 +0xd3:  je     084852d6 <+0xf8>
084852b3 +0xd5:  lea    -0x20(%ebp),%eax
084852b6 +0xd8:  mov    %eax,(%esp)
084852b9 +0xdb:  call   0848767e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x10b8>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x10b8
084852be +0xe0:  add    $0x8,%eax
084852c1 +0xe3:  mov    %eax,-0xc(%ebp)
084852c4 +0xe6:  mov    0xc(%ebp),%eax
084852c7 +0xe9:  mov    %eax,0x4(%esp)
084852cb +0xed:  mov    -0xc(%ebp),%eax
084852ce +0xf0:  mov    %eax,(%esp)
084852d1 +0xf3:  call   08484d4c <_ZN15CSuccessJobNode15UpdateCharacterEP26SIG_DUNGEON_DATA_STATISTIC>  ; CSuccessJobNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*)
084852d6 +0xf8:  mov    $0x1,%eax
084852db +0xfd:  leave
084852dc +0xfe:  ret
084852dd +0xff:  nop
```

## 反编译 C

```c
// CDungeonSuccessNode::UpdateCharacter @ 0x84851de

/* CDungeonSuccessNode::UpdateCharacter(SIG_DUNGEON_DATA_STATISTIC*) */

undefined4 __thiscall
CDungeonSuccessNode::UpdateCharacter(CDungeonSuccessNode *this,SIG_DUNGEON_DATA_STATISTIC *param_1)

{
  char cVar1;
  int iVar2;
  JobKey local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,Party>> local_20 [4];
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_1c [4];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_18 [4];
  PlayInfo *local_14;
  CSuccessJobNode *local_10;
  
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::find
            ((int *)local_20);
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator->(local_20);
    local_14 = (PlayInfo *)(iVar2 + 4);
    PlayInfo::operator+=(local_14,(PlayInfo *)(param_1 + 0x24));
    *(int *)(local_14 + 0x3c) = *(int *)(local_14 + 0x3c) + 1;
  }
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::find(local_24);
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator!=
                    ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_24,
                     (_Rb_tree_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator->
                      ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_24);
    local_10 = (CSuccessJobNode *)(iVar2 + 8);
    CSuccessJobNode::UpdateCharacter(local_10,param_1);
  }
  return 1;
}
```
