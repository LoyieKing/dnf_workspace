# GetRewardItem

`_ZN24CNPCRelationEventManager13GetRewardItemEt34ENUM_NPC_RELATION_EVENT_FAVOR_KIND`

`CNPCRelationEventManager::GetRewardItem(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890d326` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890d326  _ZN24CNPCRelationEventManager13GetRewardItemEt34ENUM_NPC_RELATION_EVENT_FAVOR_KIND
#           CNPCRelationEventManager::GetRewardItem(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND)
# range [0x0890d326, 0x0890d3cd]
0890d326 +0x00:  push   %ebp
0890d327 +0x01:  mov    %esp,%ebp
0890d329 +0x03:  push   %ebx
0890d32a +0x04:  sub    $0x44,%esp
0890d32d +0x07:  mov    0x8(%ebp),%ebx
0890d330 +0x0a:  mov    0x10(%ebp),%eax
0890d333 +0x0d:  mov    %ax,-0x2c(%ebp)
0890d337 +0x11:  movl   $0x0,-0x18(%ebp)
0890d33e +0x18:  movl   $0x0,-0x14(%ebp)
0890d345 +0x1f:  mov    0xc(%ebp),%edx
0890d348 +0x22:  lea    -0x1c(%ebp),%eax
0890d34b +0x25:  lea    -0x2c(%ebp),%ecx
0890d34e +0x28:  mov    %ecx,0x8(%esp)
0890d352 +0x2c:  mov    %edx,0x4(%esp)
0890d356 +0x30:  mov    %eax,(%esp)
0890d359 +0x33:  call   0891feb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b95
0890d35e +0x38:  sub    $0x4,%esp
0890d361 +0x3b:  mov    0xc(%ebp),%edx
0890d364 +0x3e:  lea    -0x10(%ebp),%eax
0890d367 +0x41:  mov    %edx,0x4(%esp)
0890d36b +0x45:  mov    %eax,(%esp)
0890d36e +0x48:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890d373 +0x4d:  sub    $0x4,%esp
0890d376 +0x50:  lea    -0x10(%ebp),%eax
0890d379 +0x53:  mov    %eax,0x4(%esp)
0890d37d +0x57:  lea    -0x1c(%ebp),%eax
0890d380 +0x5a:  mov    %eax,(%esp)
0890d383 +0x5d:  call   0891fee2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bc1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bc1
0890d388 +0x62:  test   %al,%al
0890d38a +0x64:  je     0890d399 <+0x73>
0890d38c +0x66:  mov    -0x18(%ebp),%eax
0890d38f +0x69:  mov    -0x14(%ebp),%edx
0890d392 +0x6c:  mov    %eax,(%ebx)
0890d394 +0x6e:  mov    %edx,0x4(%ebx)
0890d397 +0x71:  jmp    0890d3c7 <+0xa1>
0890d399 +0x73:  lea    -0x1c(%ebp),%eax
0890d39c +0x76:  mov    %eax,(%esp)
0890d39f +0x79:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890d3a4 +0x7e:  mov    0x4(%eax),%eax
0890d3a7 +0x81:  mov    %eax,-0xc(%ebp)
0890d3aa +0x84:  mov    0x14(%ebp),%edx
0890d3ad +0x87:  mov    -0xc(%ebp),%ecx
0890d3b0 +0x8a:  mov    %edx,%eax
0890d3b2 +0x8c:  shl    $0x2,%eax
0890d3b5 +0x8f:  add    %edx,%eax
0890d3b7 +0x91:  shl    $0x2,%eax
0890d3ba +0x94:  mov    0x10(%eax,%ecx,1),%edx
0890d3be +0x98:  mov    0xc(%eax,%ecx,1),%eax
0890d3c2 +0x9c:  mov    %eax,(%ebx)
0890d3c4 +0x9e:  mov    %edx,0x4(%ebx)
0890d3c7 +0xa1:  mov    %ebx,%eax
0890d3c9 +0xa3:  mov    -0x4(%ebp),%ebx
0890d3cc +0xa6:  leave
0890d3cd +0xa7:  ret    $0x4
```

## 反编译 C

```c
// CNPCRelationEventManager::GetRewardItem @ 0x890d326

/* CNPCRelationEventManager::GetRewardItem(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND) */

undefined4 *
CNPCRelationEventManager::GetRewardItem
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [12];
  
  local_1c = 0;
  local_18 = 0;
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_20);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_20,(_Rb_tree_iterator *)local_14);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_20);
    uVar1 = *(undefined4 *)(param_4 * 0x14 + 0x10 + *(int *)(iVar3 + 4));
    *param_1 = *(undefined4 *)(param_4 * 0x14 + 0xc + *(int *)(iVar3 + 4));
    param_1[1] = uVar1;
  }
  else {
    *param_1 = local_1c;
    param_1[1] = local_18;
  }
  return param_1;
}
```
