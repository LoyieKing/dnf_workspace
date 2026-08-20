# AddFavorItemInfo

`_ZN24CNPCRelationEventManager16AddFavorItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj`

`CNPCRelationEventManager::AddFavorItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890cf44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890cf44  _ZN24CNPCRelationEventManager16AddFavorItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj
#           CNPCRelationEventManager::AddFavorItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND, unsigned int, unsigned int)
# range [0x0890cf44, 0x0890cfd9]
0890cf44 +0x00:  push   %ebp
0890cf45 +0x01:  mov    %esp,%ebp
0890cf47 +0x03:  sub    $0x48,%esp
0890cf4a +0x06:  mov    0xc(%ebp),%eax
0890cf4d +0x09:  mov    %ax,-0x2c(%ebp)
0890cf51 +0x0d:  mov    0x8(%ebp),%edx
0890cf54 +0x10:  lea    -0x14(%ebp),%eax
0890cf57 +0x13:  lea    -0x2c(%ebp),%ecx
0890cf5a +0x16:  mov    %ecx,0x8(%esp)
0890cf5e +0x1a:  mov    %edx,0x4(%esp)
0890cf62 +0x1e:  mov    %eax,(%esp)
0890cf65 +0x21:  call   0891feb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b95
0890cf6a +0x26:  sub    $0x4,%esp
0890cf6d +0x29:  mov    0x8(%ebp),%edx
0890cf70 +0x2c:  lea    -0x10(%ebp),%eax
0890cf73 +0x2f:  mov    %edx,0x4(%esp)
0890cf77 +0x33:  mov    %eax,(%esp)
0890cf7a +0x36:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890cf7f +0x3b:  sub    $0x4,%esp
0890cf82 +0x3e:  lea    -0x10(%ebp),%eax
0890cf85 +0x41:  mov    %eax,0x4(%esp)
0890cf89 +0x45:  lea    -0x14(%ebp),%eax
0890cf8c +0x48:  mov    %eax,(%esp)
0890cf8f +0x4b:  call   0891fee2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bc1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bc1
0890cf94 +0x50:  test   %al,%al
0890cf96 +0x52:  jne    0890cfd6 <+0x92>
0890cf98 +0x54:  lea    -0x14(%ebp),%eax
0890cf9b +0x57:  mov    %eax,(%esp)
0890cf9e +0x5a:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890cfa3 +0x5f:  mov    0x4(%eax),%eax
0890cfa6 +0x62:  mov    %eax,-0xc(%ebp)
0890cfa9 +0x65:  mov    0x14(%ebp),%eax
0890cfac +0x68:  mov    %eax,-0x1c(%ebp)
0890cfaf +0x6b:  mov    0x18(%ebp),%eax
0890cfb2 +0x6e:  mov    %eax,-0x18(%ebp)
0890cfb5 +0x71:  mov    0x10(%ebp),%edx
0890cfb8 +0x74:  mov    %edx,%eax
0890cfba +0x76:  shl    $0x2,%eax
0890cfbd +0x79:  add    %edx,%eax
0890cfbf +0x7b:  shl    $0x2,%eax
0890cfc2 +0x7e:  add    -0xc(%ebp),%eax
0890cfc5 +0x81:  lea    -0x1c(%ebp),%edx
0890cfc8 +0x84:  mov    %edx,0x4(%esp)
0890cfcc +0x88:  mov    %eax,(%esp)
0890cfcf +0x8b:  call   0891fef6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bd5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bd5
0890cfd4 +0x90:  jmp    0890cfd7 <+0x93>
0890cfd6 +0x92:  nop
0890cfd7 +0x93:  leave
0890cfd8 +0x94:  ret
0890cfd9 +0x95:  nop
```

## 反编译 C

```c
// CNPCRelationEventManager::AddFavorItemInfo @ 0x890cf44

/* CNPCRelationEventManager::AddFavorItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND,
   unsigned int, unsigned int) */

void __thiscall
CNPCRelationEventManager::AddFavorItemInfo
          (undefined4 this,undefined4 param_1,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_18 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [4];
  int local_10;
  
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
    local_10 = *(int *)(iVar2 + 4);
    local_20 = param_4;
    local_1c = param_5;
    std::vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>>::push_back
              ((vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>> *)
               (param_3 * 0x14 + local_10),(stNPCEventItemInfo *)&local_20);
  }
  return;
}
```
