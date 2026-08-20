# get_user_id_list

`_ZN4Area16get_user_id_listERSt6vectorItSaItEE`

`Area::get_user_id_list(std::vector<unsigned short, std::allocator<unsigned short> >&)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c305e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c305e  _ZN4Area16get_user_id_listERSt6vectorItSaItEE
#           Area::get_user_id_list(std::vector<unsigned short, std::allocator<unsigned short> >&)
# range [0x086c305e, 0x086c3161]
086c305e +0x000:  push   %ebp
086c305f +0x001:  mov    %esp,%ebp
086c3061 +0x003:  sub    $0x48,%esp
086c3064 +0x006:  movl   $0x0,-0xc(%ebp)
086c306b +0x00d:  lea    -0x20(%ebp),%eax
086c306e +0x010:  mov    %eax,(%esp)
086c3071 +0x013:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c3076 +0x018:  mov    0x8(%ebp),%eax
086c3079 +0x01b:  lea    0x44(%eax),%edx
086c307c +0x01e:  lea    -0x2c(%ebp),%eax
086c307f +0x021:  mov    %edx,0x4(%esp)
086c3083 +0x025:  mov    %eax,(%esp)
086c3086 +0x028:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c308b +0x02d:  sub    $0x4,%esp
086c308e +0x030:  mov    -0x2c(%ebp),%eax
086c3091 +0x033:  mov    %eax,-0x20(%ebp)
086c3094 +0x036:  jmp    086c312d <+0xcf>
086c3099 +0x03b:  lea    -0x20(%ebp),%eax
086c309c +0x03e:  mov    %eax,(%esp)
086c309f +0x041:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c30a4 +0x046:  mov    0x4(%eax),%eax
086c30a7 +0x049:  mov    %eax,-0xc(%ebp)
086c30aa +0x04c:  cmpl   $0x0,-0xc(%ebp)
086c30ae +0x050:  je     086c30c0 <+0x62>
086c30b0 +0x052:  mov    -0xc(%ebp),%eax
086c30b3 +0x055:  mov    %eax,(%esp)
086c30b6 +0x058:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c30bb +0x05d:  cmp    $0x2,%eax
086c30be +0x060:  jg     086c30c7 <+0x69>
086c30c0 +0x062:  mov    $0x1,%eax
086c30c5 +0x067:  jmp    086c30cc <+0x6e>
086c30c7 +0x069:  mov    $0x0,%eax
086c30cc +0x06e:  test   %al,%al
086c30ce +0x070:  je     086c30ef <+0x91>
086c30d0 +0x072:  lea    -0x18(%ebp),%eax
086c30d3 +0x075:  movl   $0x0,0x8(%esp)
086c30db +0x07d:  lea    -0x20(%ebp),%edx
086c30de +0x080:  mov    %edx,0x4(%esp)
086c30e2 +0x084:  mov    %eax,(%esp)
086c30e5 +0x087:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c30ea +0x08c:  sub    $0x4,%esp
086c30ed +0x08f:  jmp    086c312d <+0xcf>
086c30ef +0x091:  mov    -0xc(%ebp),%eax
086c30f2 +0x094:  mov    %eax,(%esp)
086c30f5 +0x097:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c30fa +0x09c:  mov    %ax,-0x12(%ebp)
086c30fe +0x0a0:  lea    -0x12(%ebp),%eax
086c3101 +0x0a3:  mov    %eax,0x4(%esp)
086c3105 +0x0a7:  mov    0xc(%ebp),%eax
086c3108 +0x0aa:  mov    %eax,(%esp)
086c310b +0x0ad:  call   085c05ee <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1b4c>  ; global constructors keyed to CParty::cMember::cMember()+0x1b4c
086c3110 +0x0b2:  lea    -0x10(%ebp),%eax
086c3113 +0x0b5:  movl   $0x0,0x8(%esp)
086c311b +0x0bd:  lea    -0x20(%ebp),%edx
086c311e +0x0c0:  mov    %edx,0x4(%esp)
086c3122 +0x0c4:  mov    %eax,(%esp)
086c3125 +0x0c7:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c312a +0x0cc:  sub    $0x4,%esp
086c312d +0x0cf:  mov    0x8(%ebp),%eax
086c3130 +0x0d2:  lea    0x44(%eax),%edx
086c3133 +0x0d5:  lea    -0x1c(%ebp),%eax
086c3136 +0x0d8:  mov    %edx,0x4(%esp)
086c313a +0x0dc:  mov    %eax,(%esp)
086c313d +0x0df:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c3142 +0x0e4:  sub    $0x4,%esp
086c3145 +0x0e7:  lea    -0x1c(%ebp),%eax
086c3148 +0x0ea:  mov    %eax,0x4(%esp)
086c314c +0x0ee:  lea    -0x20(%ebp),%eax
086c314f +0x0f1:  mov    %eax,(%esp)
086c3152 +0x0f4:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c3157 +0x0f9:  test   %al,%al
086c3159 +0x0fb:  jne    086c3099 <+0x3b>
086c315f +0x101:  leave
086c3160 +0x102:  ret
086c3161 +0x103:  nop
```

## 反编译 C

```c
// Area::get_user_id_list @ 0x86c305e

/* Area::get_user_id_list(std::vector<unsigned short, std::allocator<unsigned short> >&) */

void __thiscall Area::get_user_id_list(Area *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [3];
  undefined4 local_24;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [6];
  ushort local_16;
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_24 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
    local_10 = *(CUser **)(iVar3 + 4);
    if (local_10 == (CUser *)0x0) {
LAB_086c30c0:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_10);
      if (iVar3 < 3) goto LAB_086c30c0;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_1c,(int)&local_24);
    }
    else {
      local_16 = CUser::get_unique_id(local_10);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back
                ((vector<unsigned_short,std::allocator<unsigned_short>> *)param_1,&local_16);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_24);
    }
  } while( true );
}
```
