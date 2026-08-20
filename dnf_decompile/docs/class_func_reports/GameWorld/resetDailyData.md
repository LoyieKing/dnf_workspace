# resetDailyData

`_ZN9GameWorld14resetDailyDataEv`

`GameWorld::resetDailyData()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ccf58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ccf58  _ZN9GameWorld14resetDailyDataEv
#           GameWorld::resetDailyData()
# range [0x086ccf58, 0x086cd003]
086ccf58 +0x00:  push   %ebp
086ccf59 +0x01:  mov    %esp,%ebp
086ccf5b +0x03:  sub    $0x28,%esp
086ccf5e +0x06:  mov    0x8(%ebp),%eax
086ccf61 +0x09:  lea    0x134(%eax),%edx
086ccf67 +0x0f:  lea    -0x18(%ebp),%eax
086ccf6a +0x12:  mov    %edx,0x4(%esp)
086ccf6e +0x16:  mov    %eax,(%esp)
086ccf71 +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086ccf76 +0x1e:  sub    $0x4,%esp
086ccf79 +0x21:  jmp    086ccfcc <+0x74>
086ccf7b +0x23:  lea    -0x18(%ebp),%eax
086ccf7e +0x26:  mov    %eax,(%esp)
086ccf81 +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086ccf86 +0x2e:  mov    0x4(%eax),%eax
086ccf89 +0x31:  mov    %eax,-0xc(%ebp)
086ccf8c +0x34:  mov    -0xc(%ebp),%eax
086ccf8f +0x37:  mov    %eax,(%esp)
086ccf92 +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086ccf97 +0x3f:  cmp    $0x1,%eax
086ccf9a +0x42:  setle  %al
086ccf9d +0x45:  test   %al,%al
086ccf9f +0x47:  jne    086ccfae <+0x56>
086ccfa1 +0x49:  mov    -0xc(%ebp),%eax
086ccfa4 +0x4c:  mov    %eax,(%esp)
086ccfa7 +0x4f:  call   08657450 <_ZN5CUser14resetDailyDataEv>  ; CUser::resetDailyData()
086ccfac +0x54:  jmp    086ccfaf <+0x57>
086ccfae +0x56:  nop
086ccfaf +0x57:  lea    -0x10(%ebp),%eax
086ccfb2 +0x5a:  movl   $0x0,0x8(%esp)
086ccfba +0x62:  lea    -0x18(%ebp),%edx
086ccfbd +0x65:  mov    %edx,0x4(%esp)
086ccfc1 +0x69:  mov    %eax,(%esp)
086ccfc4 +0x6c:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086ccfc9 +0x71:  sub    $0x4,%esp
086ccfcc +0x74:  mov    0x8(%ebp),%eax
086ccfcf +0x77:  lea    0x134(%eax),%edx
086ccfd5 +0x7d:  lea    -0x14(%ebp),%eax
086ccfd8 +0x80:  mov    %edx,0x4(%esp)
086ccfdc +0x84:  mov    %eax,(%esp)
086ccfdf +0x87:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086ccfe4 +0x8c:  sub    $0x4,%esp
086ccfe7 +0x8f:  lea    -0x14(%ebp),%eax
086ccfea +0x92:  mov    %eax,0x4(%esp)
086ccfee +0x96:  lea    -0x18(%ebp),%eax
086ccff1 +0x99:  mov    %eax,(%esp)
086ccff4 +0x9c:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086ccff9 +0xa1:  test   %al,%al
086ccffb +0xa3:  jne    086ccf7b <+0x23>
086cd001 +0xa9:  leave
086cd002 +0xaa:  ret
086cd003 +0xab:  nop
```

## 反编译 C

```c
// GameWorld::resetDailyData @ 0x86ccf58

/* GameWorld::resetDailyData() */

void GameWorld::resetDailyData(void)

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
    if (1 < iVar2) {
      CUser::resetDailyData(local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
