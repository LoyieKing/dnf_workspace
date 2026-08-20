# find_user_by_charac_name

`_ZN9GameWorld24find_user_by_charac_nameEPKc`

`GameWorld::find_user_by_charac_name(char const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c9464` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c9464  _ZN9GameWorld24find_user_by_charac_nameEPKc
#           GameWorld::find_user_by_charac_name(char const*)
# range [0x086c9464, 0x086c954b]
086c9464 +0x00:  push   %ebp
086c9465 +0x01:  mov    %esp,%ebp
086c9467 +0x03:  sub    $0x28,%esp
086c946a +0x06:  mov    0x8(%ebp),%eax
086c946d +0x09:  lea    0x134(%eax),%edx
086c9473 +0x0f:  lea    -0x18(%ebp),%eax
086c9476 +0x12:  mov    %edx,0x4(%esp)
086c947a +0x16:  mov    %eax,(%esp)
086c947d +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c9482 +0x1e:  sub    $0x4,%esp
086c9485 +0x21:  jmp    086c950f <+0xab>
086c948a +0x26:  lea    -0x18(%ebp),%eax
086c948d +0x29:  mov    %eax,(%esp)
086c9490 +0x2c:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c9495 +0x31:  mov    0x4(%eax),%eax
086c9498 +0x34:  mov    %eax,-0xc(%ebp)
086c949b +0x37:  cmpl   $0x0,-0xc(%ebp)
086c949f +0x3b:  je     086c94f2 <+0x8e>
086c94a1 +0x3d:  mov    -0xc(%ebp),%eax
086c94a4 +0x40:  mov    %eax,(%esp)
086c94a7 +0x43:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c94ac +0x48:  cmp    $0x2,%eax
086c94af +0x4b:  setg   %al
086c94b2 +0x4e:  test   %al,%al
086c94b4 +0x50:  je     086c94f2 <+0x8e>
086c94b6 +0x52:  mov    -0xc(%ebp),%eax
086c94b9 +0x55:  mov    %eax,(%esp)
086c94bc +0x58:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086c94c1 +0x5d:  test   %eax,%eax
086c94c3 +0x5f:  setne  %al
086c94c6 +0x62:  test   %al,%al
086c94c8 +0x64:  je     086c94f2 <+0x8e>
086c94ca +0x66:  mov    -0xc(%ebp),%eax
086c94cd +0x69:  mov    %eax,(%esp)
086c94d0 +0x6c:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c94d5 +0x71:  mov    0xc(%ebp),%edx
086c94d8 +0x74:  mov    %edx,0x4(%esp)
086c94dc +0x78:  mov    %eax,(%esp)
086c94df +0x7b:  call   0807e4e0 <_init+0xdd8>
086c94e4 +0x80:  test   %eax,%eax
086c94e6 +0x82:  sete   %al
086c94e9 +0x85:  test   %al,%al
086c94eb +0x87:  je     086c94f2 <+0x8e>
086c94ed +0x89:  mov    -0xc(%ebp),%eax
086c94f0 +0x8c:  jmp    086c9549 <+0xe5>
086c94f2 +0x8e:  lea    -0x10(%ebp),%eax
086c94f5 +0x91:  movl   $0x0,0x8(%esp)
086c94fd +0x99:  lea    -0x18(%ebp),%edx
086c9500 +0x9c:  mov    %edx,0x4(%esp)
086c9504 +0xa0:  mov    %eax,(%esp)
086c9507 +0xa3:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c950c +0xa8:  sub    $0x4,%esp
086c950f +0xab:  mov    0x8(%ebp),%eax
086c9512 +0xae:  lea    0x134(%eax),%edx
086c9518 +0xb4:  lea    -0x14(%ebp),%eax
086c951b +0xb7:  mov    %edx,0x4(%esp)
086c951f +0xbb:  mov    %eax,(%esp)
086c9522 +0xbe:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c9527 +0xc3:  sub    $0x4,%esp
086c952a +0xc6:  lea    -0x14(%ebp),%eax
086c952d +0xc9:  mov    %eax,0x4(%esp)
086c9531 +0xcd:  lea    -0x18(%ebp),%eax
086c9534 +0xd0:  mov    %eax,(%esp)
086c9537 +0xd3:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c953c +0xd8:  test   %al,%al
086c953e +0xda:  jne    086c948a <+0x26>
086c9544 +0xe0:  mov    $0x0,%eax
086c9549 +0xe5:  leave
086c954a +0xe6:  ret
086c954b +0xe7:  nop
```

## 反编译 C

```c
// GameWorld::find_user_by_charac_name @ 0x86c9464

/* GameWorld::find_user_by_charac_name(char const*) */

CUser * __thiscall GameWorld::find_user_by_charac_name(GameWorld *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *__s1;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUserCharacInfo *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') {
      return (CUser *)0x0;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUserCharacInfo **)(iVar2 + 4);
    if (((local_10 != (CUserCharacInfo *)0x0) &&
        (iVar2 = CUser::get_state((CUser *)local_10), 2 < iVar2)) &&
       (iVar2 = CUserCharacInfo::getCurCharacR(local_10), iVar2 != 0)) {
      __s1 = (char *)CUserCharacInfo::getCurCharacName(local_10);
      iVar2 = strcmp(__s1,param_1);
      if (iVar2 == 0) {
        return (CUser *)local_10;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  } while( true );
}
```
