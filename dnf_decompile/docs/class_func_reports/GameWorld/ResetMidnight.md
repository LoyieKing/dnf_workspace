# ResetMidnight

`_ZN9GameWorld13ResetMidnightEv`

`GameWorld::ResetMidnight()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cc340` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cc340  _ZN9GameWorld13ResetMidnightEv
#           GameWorld::ResetMidnight()
# range [0x086cc340, 0x086cc3eb]
086cc340 +0x00:  push   %ebp
086cc341 +0x01:  mov    %esp,%ebp
086cc343 +0x03:  sub    $0x28,%esp
086cc346 +0x06:  mov    0x8(%ebp),%eax
086cc349 +0x09:  lea    0x134(%eax),%edx
086cc34f +0x0f:  lea    -0x18(%ebp),%eax
086cc352 +0x12:  mov    %edx,0x4(%esp)
086cc356 +0x16:  mov    %eax,(%esp)
086cc359 +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cc35e +0x1e:  sub    $0x4,%esp
086cc361 +0x21:  jmp    086cc3b4 <+0x74>
086cc363 +0x23:  lea    -0x18(%ebp),%eax
086cc366 +0x26:  mov    %eax,(%esp)
086cc369 +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cc36e +0x2e:  mov    0x4(%eax),%eax
086cc371 +0x31:  mov    %eax,-0xc(%ebp)
086cc374 +0x34:  mov    -0xc(%ebp),%eax
086cc377 +0x37:  mov    %eax,(%esp)
086cc37a +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cc37f +0x3f:  cmp    $0x2,%eax
086cc382 +0x42:  setle  %al
086cc385 +0x45:  test   %al,%al
086cc387 +0x47:  jne    086cc396 <+0x56>
086cc389 +0x49:  mov    -0xc(%ebp),%eax
086cc38c +0x4c:  mov    %eax,(%esp)
086cc38f +0x4f:  call   086d20b8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x8e9>  ; global constructors keyed to MAX_VILLAGE_NUM+0x8e9
086cc394 +0x54:  jmp    086cc397 <+0x57>
086cc396 +0x56:  nop
086cc397 +0x57:  lea    -0x10(%ebp),%eax
086cc39a +0x5a:  movl   $0x0,0x8(%esp)
086cc3a2 +0x62:  lea    -0x18(%ebp),%edx
086cc3a5 +0x65:  mov    %edx,0x4(%esp)
086cc3a9 +0x69:  mov    %eax,(%esp)
086cc3ac +0x6c:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cc3b1 +0x71:  sub    $0x4,%esp
086cc3b4 +0x74:  mov    0x8(%ebp),%eax
086cc3b7 +0x77:  lea    0x134(%eax),%edx
086cc3bd +0x7d:  lea    -0x14(%ebp),%eax
086cc3c0 +0x80:  mov    %edx,0x4(%esp)
086cc3c4 +0x84:  mov    %eax,(%esp)
086cc3c7 +0x87:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cc3cc +0x8c:  sub    $0x4,%esp
086cc3cf +0x8f:  lea    -0x14(%ebp),%eax
086cc3d2 +0x92:  mov    %eax,0x4(%esp)
086cc3d6 +0x96:  lea    -0x18(%ebp),%eax
086cc3d9 +0x99:  mov    %eax,(%esp)
086cc3dc +0x9c:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cc3e1 +0xa1:  test   %al,%al
086cc3e3 +0xa3:  jne    086cc363 <+0x23>
086cc3e9 +0xa9:  leave
086cc3ea +0xaa:  ret
086cc3eb +0xab:  nop
```

## 反编译 C

```c
// GameWorld::ResetMidnight @ 0x86cc340

/* GameWorld::ResetMidnight() */

void GameWorld::ResetMidnight(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      CUser::ResetDailyCharacExpandDataMidnight(local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
