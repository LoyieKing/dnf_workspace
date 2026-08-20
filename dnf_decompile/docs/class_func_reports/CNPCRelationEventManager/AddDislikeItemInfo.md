# AddDislikeItemInfo

`_ZN24CNPCRelationEventManager18AddDislikeItemInfoEtj`

`CNPCRelationEventManager::AddDislikeItemInfo(unsigned short, unsigned int)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890d07a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890d07a  _ZN24CNPCRelationEventManager18AddDislikeItemInfoEtj
#           CNPCRelationEventManager::AddDislikeItemInfo(unsigned short, unsigned int)
# range [0x0890d07a, 0x0890d0ff]
0890d07a +0x00:  push   %ebp
0890d07b +0x01:  mov    %esp,%ebp
0890d07d +0x03:  sub    $0x38,%esp
0890d080 +0x06:  mov    0xc(%ebp),%eax
0890d083 +0x09:  mov    %ax,-0x1c(%ebp)
0890d087 +0x0d:  mov    0x8(%ebp),%edx
0890d08a +0x10:  lea    -0x18(%ebp),%eax
0890d08d +0x13:  lea    -0x1c(%ebp),%ecx
0890d090 +0x16:  mov    %ecx,0x8(%esp)
0890d094 +0x1a:  mov    %edx,0x4(%esp)
0890d098 +0x1e:  mov    %eax,(%esp)
0890d09b +0x21:  call   0891feb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b95
0890d0a0 +0x26:  sub    $0x4,%esp
0890d0a3 +0x29:  mov    0x8(%ebp),%edx
0890d0a6 +0x2c:  lea    -0x14(%ebp),%eax
0890d0a9 +0x2f:  mov    %edx,0x4(%esp)
0890d0ad +0x33:  mov    %eax,(%esp)
0890d0b0 +0x36:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890d0b5 +0x3b:  sub    $0x4,%esp
0890d0b8 +0x3e:  lea    -0x14(%ebp),%eax
0890d0bb +0x41:  mov    %eax,0x4(%esp)
0890d0bf +0x45:  lea    -0x18(%ebp),%eax
0890d0c2 +0x48:  mov    %eax,(%esp)
0890d0c5 +0x4b:  call   0891fee2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bc1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bc1
0890d0ca +0x50:  test   %al,%al
0890d0cc +0x52:  jne    0890d0fc <+0x82>
0890d0ce +0x54:  lea    -0x18(%ebp),%eax
0890d0d1 +0x57:  mov    %eax,(%esp)
0890d0d4 +0x5a:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890d0d9 +0x5f:  mov    0x4(%eax),%eax
0890d0dc +0x62:  mov    %eax,-0xc(%ebp)
0890d0df +0x65:  mov    0x10(%ebp),%eax
0890d0e2 +0x68:  mov    %eax,-0x10(%ebp)
0890d0e5 +0x6b:  mov    -0xc(%ebp),%eax
0890d0e8 +0x6e:  lea    0x3c(%eax),%edx
0890d0eb +0x71:  lea    -0x10(%ebp),%eax
0890d0ee +0x74:  mov    %eax,0x4(%esp)
0890d0f2 +0x78:  mov    %edx,(%esp)
0890d0f5 +0x7b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0890d0fa +0x80:  jmp    0890d0fd <+0x83>
0890d0fc +0x82:  nop
0890d0fd +0x83:  leave
0890d0fe +0x84:  ret
0890d0ff +0x85:  nop
```

## 反编译 C

```c
// CNPCRelationEventManager::AddDislikeItemInfo @ 0x890d07a

/* CNPCRelationEventManager::AddDislikeItemInfo(unsigned short, unsigned int) */

void __thiscall
CNPCRelationEventManager::AddDislikeItemInfo
          (CNPCRelationEventManager *this,ushort param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_1c [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_18 [4];
  uint local_14;
  int local_10;
  
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
    local_10 = *(int *)(iVar2 + 4);
    local_14 = param_2;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(local_10 + 0x3c),(int *)&local_14);
  }
  return;
}
```
