# AddRewardItemInfo

`_ZN24CNPCRelationEventManager17AddRewardItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj`

`CNPCRelationEventManager::AddRewardItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890cfda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890cfda  _ZN24CNPCRelationEventManager17AddRewardItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj
#           CNPCRelationEventManager::AddRewardItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND, unsigned int, unsigned int)
# range [0x0890cfda, 0x0890d079]
0890cfda +0x00:  push   %ebp
0890cfdb +0x01:  mov    %esp,%ebp
0890cfdd +0x03:  sub    $0x38,%esp
0890cfe0 +0x06:  mov    0xc(%ebp),%eax
0890cfe3 +0x09:  mov    %ax,-0x1c(%ebp)
0890cfe7 +0x0d:  mov    0x8(%ebp),%edx
0890cfea +0x10:  lea    -0x14(%ebp),%eax
0890cfed +0x13:  lea    -0x1c(%ebp),%ecx
0890cff0 +0x16:  mov    %ecx,0x8(%esp)
0890cff4 +0x1a:  mov    %edx,0x4(%esp)
0890cff8 +0x1e:  mov    %eax,(%esp)
0890cffb +0x21:  call   0891feb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b95
0890d000 +0x26:  sub    $0x4,%esp
0890d003 +0x29:  mov    0x8(%ebp),%edx
0890d006 +0x2c:  lea    -0x10(%ebp),%eax
0890d009 +0x2f:  mov    %edx,0x4(%esp)
0890d00d +0x33:  mov    %eax,(%esp)
0890d010 +0x36:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890d015 +0x3b:  sub    $0x4,%esp
0890d018 +0x3e:  lea    -0x10(%ebp),%eax
0890d01b +0x41:  mov    %eax,0x4(%esp)
0890d01f +0x45:  lea    -0x14(%ebp),%eax
0890d022 +0x48:  mov    %eax,(%esp)
0890d025 +0x4b:  call   0891fee2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bc1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bc1
0890d02a +0x50:  test   %al,%al
0890d02c +0x52:  jne    0890d077 <+0x9d>
0890d02e +0x54:  lea    -0x14(%ebp),%eax
0890d031 +0x57:  mov    %eax,(%esp)
0890d034 +0x5a:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890d039 +0x5f:  mov    0x4(%eax),%eax
0890d03c +0x62:  mov    %eax,-0xc(%ebp)
0890d03f +0x65:  mov    0x10(%ebp),%edx
0890d042 +0x68:  mov    -0xc(%ebp),%ecx
0890d045 +0x6b:  mov    %edx,%eax
0890d047 +0x6d:  shl    $0x2,%eax
0890d04a +0x70:  add    %edx,%eax
0890d04c +0x72:  shl    $0x2,%eax
0890d04f +0x75:  lea    (%ecx,%eax,1),%eax
0890d052 +0x78:  lea    0xc(%eax),%edx
0890d055 +0x7b:  mov    0x14(%ebp),%eax
0890d058 +0x7e:  mov    %eax,(%edx)
0890d05a +0x80:  mov    0x10(%ebp),%edx
0890d05d +0x83:  mov    -0xc(%ebp),%ecx
0890d060 +0x86:  mov    %edx,%eax
0890d062 +0x88:  shl    $0x2,%eax
0890d065 +0x8b:  add    %edx,%eax
0890d067 +0x8d:  shl    $0x2,%eax
0890d06a +0x90:  lea    (%ecx,%eax,1),%eax
0890d06d +0x93:  lea    0x10(%eax),%edx
0890d070 +0x96:  mov    0x18(%ebp),%eax
0890d073 +0x99:  mov    %eax,(%edx)
0890d075 +0x9b:  jmp    0890d078 <+0x9e>
0890d077 +0x9d:  nop
0890d078 +0x9e:  leave
0890d079 +0x9f:  ret
```

## 反编译 C

```c
// CNPCRelationEventManager::AddRewardItemInfo @ 0x890cfda

/* CNPCRelationEventManager::AddRewardItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND,
   unsigned int, unsigned int) */

void __thiscall
CNPCRelationEventManager::AddRewardItemInfo
          (undefined4 this,undefined4 param_1,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_18 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [16];
  
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_18);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_18);
    iVar2 = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + param_3 * 0x14 + 0xc) = param_4;
    *(undefined4 *)(iVar2 + param_3 * 0x14 + 0x10) = param_5;
  }
  return;
}
```
