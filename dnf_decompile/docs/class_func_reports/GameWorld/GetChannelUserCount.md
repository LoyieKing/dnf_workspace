# GetChannelUserCount

`_ZN9GameWorld19GetChannelUserCountE17ENUM_SERVER_GROUPR19stOccStatisticByAge`

`GameWorld::GetChannelUserCount(ENUM_SERVER_GROUP, stOccStatisticByAge&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cb61a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cb61a  _ZN9GameWorld19GetChannelUserCountE17ENUM_SERVER_GROUPR19stOccStatisticByAge
#           GameWorld::GetChannelUserCount(ENUM_SERVER_GROUP, stOccStatisticByAge&)
# range [0x086cb61a, 0x086cb729]
086cb61a +0x000:  push   %ebp
086cb61b +0x001:  mov    %esp,%ebp
086cb61d +0x003:  sub    $0x38,%esp
086cb620 +0x006:  movl   $0x0,-0x14(%ebp)
086cb627 +0x00d:  mov    0x8(%ebp),%eax
086cb62a +0x010:  lea    0x134(%eax),%edx
086cb630 +0x016:  lea    -0x20(%ebp),%eax
086cb633 +0x019:  mov    %edx,0x4(%esp)
086cb637 +0x01d:  mov    %eax,(%esp)
086cb63a +0x020:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cb63f +0x025:  sub    $0x4,%esp
086cb642 +0x028:  jmp    086cb6ef <+0xd5>
086cb647 +0x02d:  lea    -0x20(%ebp),%eax
086cb64a +0x030:  mov    %eax,(%esp)
086cb64d +0x033:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cb652 +0x038:  mov    0x4(%eax),%eax
086cb655 +0x03b:  mov    %eax,-0x10(%ebp)
086cb658 +0x03e:  cmpl   $0x0,-0x10(%ebp)
086cb65c +0x042:  je     086cb6d2 <+0xb8>
086cb65e +0x044:  mov    -0x10(%ebp),%eax
086cb661 +0x047:  mov    %eax,(%esp)
086cb664 +0x04a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
086cb669 +0x04f:  cmp    0xc(%ebp),%eax
086cb66c +0x052:  sete   %al
086cb66f +0x055:  test   %al,%al
086cb671 +0x057:  je     086cb6d2 <+0xb8>
086cb673 +0x059:  addl   $0x1,-0x14(%ebp)
086cb677 +0x05d:  mov    -0x10(%ebp),%eax
086cb67a +0x060:  mov    %eax,(%esp)
086cb67d +0x063:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
086cb682 +0x068:  mov    %eax,-0xc(%ebp)
086cb685 +0x06b:  cmpl   $0x63,-0xc(%ebp)
086cb689 +0x06f:  jbe    086cb6a4 <+0x8a>
086cb68b +0x071:  mov    0x10(%ebp),%eax
086cb68e +0x074:  movzwl 0xc6(%eax),%eax
086cb695 +0x07b:  lea    0x1(%eax),%edx
086cb698 +0x07e:  mov    0x10(%ebp),%eax
086cb69b +0x081:  mov    %dx,0xc6(%eax)
086cb6a2 +0x088:  jmp    086cb6d2 <+0xb8>
086cb6a4 +0x08a:  cmpl   $0x0,-0xc(%ebp)
086cb6a8 +0x08e:  jne    086cb6bb <+0xa1>
086cb6aa +0x090:  mov    0x10(%ebp),%eax
086cb6ad +0x093:  movzwl (%eax),%eax
086cb6b0 +0x096:  lea    0x1(%eax),%edx
086cb6b3 +0x099:  mov    0x10(%ebp),%eax
086cb6b6 +0x09c:  mov    %dx,(%eax)
086cb6b9 +0x09f:  jmp    086cb6d2 <+0xb8>
086cb6bb +0x0a1:  mov    -0xc(%ebp),%eax
086cb6be +0x0a4:  sub    $0x1,%eax
086cb6c1 +0x0a7:  mov    0x10(%ebp),%edx
086cb6c4 +0x0aa:  movzwl (%edx,%eax,2),%edx
086cb6c8 +0x0ae:  lea    0x1(%edx),%ecx
086cb6cb +0x0b1:  mov    0x10(%ebp),%edx
086cb6ce +0x0b4:  mov    %cx,(%edx,%eax,2)
086cb6d2 +0x0b8:  lea    -0x18(%ebp),%eax
086cb6d5 +0x0bb:  movl   $0x0,0x8(%esp)
086cb6dd +0x0c3:  lea    -0x20(%ebp),%edx
086cb6e0 +0x0c6:  mov    %edx,0x4(%esp)
086cb6e4 +0x0ca:  mov    %eax,(%esp)
086cb6e7 +0x0cd:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cb6ec +0x0d2:  sub    $0x4,%esp
086cb6ef +0x0d5:  mov    0x8(%ebp),%eax
086cb6f2 +0x0d8:  lea    0x134(%eax),%edx
086cb6f8 +0x0de:  lea    -0x1c(%ebp),%eax
086cb6fb +0x0e1:  mov    %edx,0x4(%esp)
086cb6ff +0x0e5:  mov    %eax,(%esp)
086cb702 +0x0e8:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cb707 +0x0ed:  sub    $0x4,%esp
086cb70a +0x0f0:  lea    -0x1c(%ebp),%eax
086cb70d +0x0f3:  mov    %eax,0x4(%esp)
086cb711 +0x0f7:  lea    -0x20(%ebp),%eax
086cb714 +0x0fa:  mov    %eax,(%esp)
086cb717 +0x0fd:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cb71c +0x102:  test   %al,%al
086cb71e +0x104:  jne    086cb647 <+0x2d>
086cb724 +0x10a:  mov    -0x14(%ebp),%eax
086cb727 +0x10d:  leave
086cb728 +0x10e:  ret
086cb729 +0x10f:  nop
```

## 反编译 C

```c
// GameWorld::GetChannelUserCount @ 0x86cb61a

/* GameWorld::GetChannelUserCount(ENUM_SERVER_GROUP, stOccStatisticByAge&) */

int __thiscall GameWorld::GetChannelUserCount(undefined4 this,int param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_24 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [4];
  int local_18;
  CUser *local_14;
  uint local_10;
  
  local_18 = 0;
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_24);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_24);
    local_14 = *(CUser **)(iVar2 + 4);
    if (local_14 != (CUser *)0x0) {
      iVar2 = CUser::GetServerGroup(local_14);
      if (iVar2 == param_2) {
        local_18 = local_18 + 1;
        local_10 = CUser::GetAge(local_14);
        if (local_10 < 100) {
          if (local_10 == 0) {
            *param_3 = *param_3 + 1;
          }
          else {
            param_3[local_10 - 1] = param_3[local_10 - 1] + 1;
          }
        }
        else {
          param_3[99] = param_3[99] + 1;
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_1c,(int)local_24);
  }
  return local_18;
}
```
