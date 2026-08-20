# ~CNPCRelationEventManager

`_ZN24CNPCRelationEventManagerD1Ev`

`CNPCRelationEventManager::~CNPCRelationEventManager()`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890ce34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890ce34  _ZN24CNPCRelationEventManagerD1Ev
#           CNPCRelationEventManager::~CNPCRelationEventManager()
# range [0x0890ce34, 0x0890cee9]
0890ce34 +0x00:  push   %ebp
0890ce35 +0x01:  mov    %esp,%ebp
0890ce37 +0x03:  push   %esi
0890ce38 +0x04:  push   %ebx
0890ce39 +0x05:  sub    $0x20,%esp
0890ce3c +0x08:  mov    0x8(%ebp),%edx
0890ce3f +0x0b:  lea    -0x14(%ebp),%eax
0890ce42 +0x0e:  mov    %edx,0x4(%esp)
0890ce46 +0x12:  mov    %eax,(%esp)
0890ce49 +0x15:  call   0891fd30 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a0f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a0f
0890ce4e +0x1a:  sub    $0x4,%esp
0890ce51 +0x1d:  jmp    0890ce8c <+0x58>
0890ce53 +0x1f:  lea    -0x14(%ebp),%eax
0890ce56 +0x22:  mov    %eax,(%esp)
0890ce59 +0x25:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890ce5e +0x2a:  mov    0x4(%eax),%eax
0890ce61 +0x2d:  mov    %eax,-0xc(%ebp)
0890ce64 +0x30:  cmpl   $0x0,-0xc(%ebp)
0890ce68 +0x34:  je     0890ce81 <+0x4d>
0890ce6a +0x36:  mov    -0xc(%ebp),%ebx
0890ce6d +0x39:  test   %ebx,%ebx
0890ce6f +0x3b:  je     0890ce81 <+0x4d>
0890ce71 +0x3d:  mov    %ebx,(%esp)
0890ce74 +0x40:  call   0891c8be <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x359d>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x359d
0890ce79 +0x45:  mov    %ebx,(%esp)
0890ce7c +0x48:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0890ce81 +0x4d:  lea    -0x14(%ebp),%eax
0890ce84 +0x50:  mov    %eax,(%esp)
0890ce87 +0x53:  call   0891fdfc <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6adb>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6adb
0890ce8c +0x58:  mov    0x8(%ebp),%edx
0890ce8f +0x5b:  lea    -0x10(%ebp),%eax
0890ce92 +0x5e:  mov    %edx,0x4(%esp)
0890ce96 +0x62:  mov    %eax,(%esp)
0890ce99 +0x65:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890ce9e +0x6a:  sub    $0x4,%esp
0890cea1 +0x6d:  lea    -0x10(%ebp),%eax
0890cea4 +0x70:  mov    %eax,0x4(%esp)
0890cea8 +0x74:  lea    -0x14(%ebp),%eax
0890ceab +0x77:  mov    %eax,(%esp)
0890ceae +0x7a:  call   0891fd7c <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a5b>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a5b
0890ceb3 +0x7f:  test   %al,%al
0890ceb5 +0x81:  jne    0890ce53 <+0x1f>
0890ceb7 +0x83:  jmp    0890ced4 <+0xa0>
0890ceb9 +0x85:  mov    %edx,%ebx
0890cebb +0x87:  mov    %eax,%esi
0890cebd +0x89:  mov    0x8(%ebp),%eax
0890cec0 +0x8c:  mov    %eax,(%esp)
0890cec3 +0x8f:  call   0891c896 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x3575>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x3575
0890cec8 +0x94:  mov    %esi,%eax
0890ceca +0x96:  mov    %ebx,%edx
0890cecc +0x98:  mov    %eax,(%esp)
0890cecf +0x9b:  call   08ae3750 <_Unwind_Resume>
0890ced4 +0xa0:  mov    0x8(%ebp),%eax
0890ced7 +0xa3:  mov    %eax,(%esp)
0890ceda +0xa6:  call   0891c896 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x3575>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x3575
0890cedf +0xab:  lea    -0x8(%ebp),%esp
0890cee2 +0xae:  add    $0x0,%esp
0890cee5 +0xb1:  pop    %ebx
0890cee6 +0xb2:  pop    %esi
0890cee7 +0xb3:  pop    %ebp
0890cee8 +0xb4:  ret
0890cee9 +0xb5:  nop
```

## 反编译 C

```c
// CNPCRelationEventManager::~CNPCRelationEventManager @ 0x890ce34

/* CNPCRelationEventManager::~CNPCRelationEventManager() */

void __thiscall CNPCRelationEventManager::~CNPCRelationEventManager(CNPCRelationEventManager *this)

{
  stNPCRelationEventInfo *this_00;
  char cVar1;
  int iVar2;
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_18 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [4];
  stNPCRelationEventInfo *local_10;
  
                    /* try { // try from 0890ce49 to 0890ce9d has its CatchHandler @ 0890ceb9 */
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> *
                       )local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> *
                       )local_18);
    this_00 = *(stNPCRelationEventInfo **)(iVar2 + 4);
    local_10 = this_00;
    if ((this_00 != (stNPCRelationEventInfo *)0x0) && (this_00 != (stNPCRelationEventInfo *)0x0)) {
      stNPCRelationEventInfo::~stNPCRelationEventInfo(this_00);
      operator_delete(this_00);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> *)
               local_18);
  }
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::~map((map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
          *)this);
  return;
}
```
