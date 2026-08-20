# IsDislikeItem

`_ZN24CNPCRelationEventManager13IsDislikeItemEtj`

`CNPCRelationEventManager::IsDislikeItem(unsigned short, unsigned int)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890d100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890d100  _ZN24CNPCRelationEventManager13IsDislikeItemEtj
#           CNPCRelationEventManager::IsDislikeItem(unsigned short, unsigned int)
# range [0x0890d100, 0x0890d1bf]
0890d100 +0x00:  push   %ebp
0890d101 +0x01:  mov    %esp,%ebp
0890d103 +0x03:  sub    $0x38,%esp
0890d106 +0x06:  mov    0xc(%ebp),%eax
0890d109 +0x09:  mov    %ax,-0x1c(%ebp)
0890d10d +0x0d:  mov    0x8(%ebp),%edx
0890d110 +0x10:  lea    -0x18(%ebp),%eax
0890d113 +0x13:  lea    -0x1c(%ebp),%ecx
0890d116 +0x16:  mov    %ecx,0x8(%esp)
0890d11a +0x1a:  mov    %edx,0x4(%esp)
0890d11e +0x1e:  mov    %eax,(%esp)
0890d121 +0x21:  call   0891feb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b95
0890d126 +0x26:  sub    $0x4,%esp
0890d129 +0x29:  mov    0x8(%ebp),%edx
0890d12c +0x2c:  lea    -0x14(%ebp),%eax
0890d12f +0x2f:  mov    %edx,0x4(%esp)
0890d133 +0x33:  mov    %eax,(%esp)
0890d136 +0x36:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890d13b +0x3b:  sub    $0x4,%esp
0890d13e +0x3e:  lea    -0x14(%ebp),%eax
0890d141 +0x41:  mov    %eax,0x4(%esp)
0890d145 +0x45:  lea    -0x18(%ebp),%eax
0890d148 +0x48:  mov    %eax,(%esp)
0890d14b +0x4b:  call   0891fee2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bc1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bc1
0890d150 +0x50:  test   %al,%al
0890d152 +0x52:  je     0890d15b <+0x5b>
0890d154 +0x54:  mov    $0x0,%eax
0890d159 +0x59:  jmp    0890d1be <+0xbe>
0890d15b +0x5b:  lea    -0x18(%ebp),%eax
0890d15e +0x5e:  mov    %eax,(%esp)
0890d161 +0x61:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890d166 +0x66:  mov    0x4(%eax),%eax
0890d169 +0x69:  mov    %eax,-0x10(%ebp)
0890d16c +0x6c:  movl   $0x0,-0xc(%ebp)
0890d173 +0x73:  jmp    0890d1a1 <+0xa1>
0890d175 +0x75:  mov    -0x10(%ebp),%eax
0890d178 +0x78:  lea    0x3c(%eax),%edx
0890d17b +0x7b:  mov    -0xc(%ebp),%eax
0890d17e +0x7e:  mov    %eax,0x4(%esp)
0890d182 +0x82:  mov    %edx,(%esp)
0890d185 +0x85:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
0890d18a +0x8a:  mov    (%eax),%eax
0890d18c +0x8c:  cmp    0x10(%ebp),%eax
0890d18f +0x8f:  sete   %al
0890d192 +0x92:  test   %al,%al
0890d194 +0x94:  je     0890d19d <+0x9d>
0890d196 +0x96:  mov    $0x1,%eax
0890d19b +0x9b:  jmp    0890d1be <+0xbe>
0890d19d +0x9d:  addl   $0x1,-0xc(%ebp)
0890d1a1 +0xa1:  mov    -0x10(%ebp),%eax
0890d1a4 +0xa4:  add    $0x3c,%eax
0890d1a7 +0xa7:  mov    %eax,(%esp)
0890d1aa +0xaa:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0890d1af +0xaf:  cmp    -0xc(%ebp),%eax
0890d1b2 +0xb2:  seta   %al
0890d1b5 +0xb5:  test   %al,%al
0890d1b7 +0xb7:  jne    0890d175 <+0x75>
0890d1b9 +0xb9:  mov    $0x0,%eax
0890d1be +0xbe:  leave
0890d1bf +0xbf:  ret
```

## 反编译 C

```c
// CNPCRelationEventManager::IsDislikeItem @ 0x890d100

/* CNPCRelationEventManager::IsDislikeItem(unsigned short, unsigned int) */

undefined4 __thiscall
CNPCRelationEventManager::IsDislikeItem(CNPCRelationEventManager *this,ushort param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_1c [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_1c);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_1c,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_1c);
    local_14 = *(int *)(iVar2 + 4);
    local_10 = 0;
    while (uVar4 = std::vector<int,std::allocator<int>>::size
                             ((vector<int,std::allocator<int>> *)(local_14 + 0x3c)),
          local_10 < uVar4) {
      puVar3 = (uint *)std::vector<int,std::allocator<int>>::at
                                 ((vector<int,std::allocator<int>> *)(local_14 + 0x3c),local_10);
      if (*puVar3 == param_2) {
        return 1;
      }
      local_10 = local_10 + 1;
    }
  }
  return 0;
}
```
