# send_group

`_ZN4Area10send_groupER11PacketGuardP7CBelong`

`Area::send_group(PacketGuard&, CBelong*)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c2e1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c2e1e  _ZN4Area10send_groupER11PacketGuardP7CBelong
#           Area::send_group(PacketGuard&, CBelong*)
# range [0x086c2e1e, 0x086c2f2b]
086c2e1e +0x000:  push   %ebp
086c2e1f +0x001:  mov    %esp,%ebp
086c2e21 +0x003:  sub    $0x48,%esp
086c2e24 +0x006:  movl   $0x0,-0xc(%ebp)
086c2e2b +0x00d:  lea    -0x1c(%ebp),%eax
086c2e2e +0x010:  mov    %eax,(%esp)
086c2e31 +0x013:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c2e36 +0x018:  mov    0x8(%ebp),%eax
086c2e39 +0x01b:  lea    0x44(%eax),%edx
086c2e3c +0x01e:  lea    -0x2c(%ebp),%eax
086c2e3f +0x021:  mov    %edx,0x4(%esp)
086c2e43 +0x025:  mov    %eax,(%esp)
086c2e46 +0x028:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c2e4b +0x02d:  sub    $0x4,%esp
086c2e4e +0x030:  mov    -0x2c(%ebp),%eax
086c2e51 +0x033:  mov    %eax,-0x1c(%ebp)
086c2e54 +0x036:  jmp    086c2ef8 <+0xda>
086c2e59 +0x03b:  lea    -0x1c(%ebp),%eax
086c2e5c +0x03e:  mov    %eax,(%esp)
086c2e5f +0x041:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c2e64 +0x046:  mov    0x4(%eax),%eax
086c2e67 +0x049:  mov    %eax,-0xc(%ebp)
086c2e6a +0x04c:  cmpl   $0x0,-0xc(%ebp)
086c2e6e +0x050:  je     086c2e80 <+0x62>
086c2e70 +0x052:  mov    -0xc(%ebp),%eax
086c2e73 +0x055:  mov    %eax,(%esp)
086c2e76 +0x058:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c2e7b +0x05d:  cmp    $0x2,%eax
086c2e7e +0x060:  jg     086c2e87 <+0x69>
086c2e80 +0x062:  mov    $0x1,%eax
086c2e85 +0x067:  jmp    086c2e8c <+0x6e>
086c2e87 +0x069:  mov    $0x0,%eax
086c2e8c +0x06e:  test   %al,%al
086c2e8e +0x070:  je     086c2eaf <+0x91>
086c2e90 +0x072:  lea    -0x14(%ebp),%eax
086c2e93 +0x075:  movl   $0x0,0x8(%esp)
086c2e9b +0x07d:  lea    -0x1c(%ebp),%edx
086c2e9e +0x080:  mov    %edx,0x4(%esp)
086c2ea2 +0x084:  mov    %eax,(%esp)
086c2ea5 +0x087:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2eaa +0x08c:  sub    $0x4,%esp
086c2ead +0x08f:  jmp    086c2ef8 <+0xda>
086c2eaf +0x091:  mov    0x10(%ebp),%eax
086c2eb2 +0x094:  mov    (%eax),%eax
086c2eb4 +0x096:  mov    (%eax),%edx
086c2eb6 +0x098:  mov    -0xc(%ebp),%eax
086c2eb9 +0x09b:  mov    %eax,0x4(%esp)
086c2ebd +0x09f:  mov    0x10(%ebp),%eax
086c2ec0 +0x0a2:  mov    %eax,(%esp)
086c2ec3 +0x0a5:  call   *%edx
086c2ec5 +0x0a7:  test   %al,%al
086c2ec7 +0x0a9:  je     086c2edb <+0xbd>
086c2ec9 +0x0ab:  mov    0xc(%ebp),%eax
086c2ecc +0x0ae:  mov    %eax,0x4(%esp)
086c2ed0 +0x0b2:  mov    -0xc(%ebp),%eax
086c2ed3 +0x0b5:  mov    %eax,(%esp)
086c2ed6 +0x0b8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c2edb +0x0bd:  lea    -0x10(%ebp),%eax
086c2ede +0x0c0:  movl   $0x0,0x8(%esp)
086c2ee6 +0x0c8:  lea    -0x1c(%ebp),%edx
086c2ee9 +0x0cb:  mov    %edx,0x4(%esp)
086c2eed +0x0cf:  mov    %eax,(%esp)
086c2ef0 +0x0d2:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2ef5 +0x0d7:  sub    $0x4,%esp
086c2ef8 +0x0da:  mov    0x8(%ebp),%eax
086c2efb +0x0dd:  lea    0x44(%eax),%edx
086c2efe +0x0e0:  lea    -0x18(%ebp),%eax
086c2f01 +0x0e3:  mov    %edx,0x4(%esp)
086c2f05 +0x0e7:  mov    %eax,(%esp)
086c2f08 +0x0ea:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c2f0d +0x0ef:  sub    $0x4,%esp
086c2f10 +0x0f2:  lea    -0x18(%ebp),%eax
086c2f13 +0x0f5:  mov    %eax,0x4(%esp)
086c2f17 +0x0f9:  lea    -0x1c(%ebp),%eax
086c2f1a +0x0fc:  mov    %eax,(%esp)
086c2f1d +0x0ff:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c2f22 +0x104:  test   %al,%al
086c2f24 +0x106:  jne    086c2e59 <+0x3b>
086c2f2a +0x10c:  leave
086c2f2b +0x10d:  ret
```

## 反编译 C

```c
// Area::send_group @ 0x86c2e1e

/* Area::send_group(PacketGuard&, CBelong*) */

void __thiscall Area::send_group(Area *this,PacketGuard *param_1,CBelong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [4];
  undefined4 local_20;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
    local_10 = *(CUser **)(iVar3 + 4);
    if (local_10 == (CUser *)0x0) {
LAB_086c2e80:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_10);
      if (iVar3 < 3) goto LAB_086c2e80;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_20);
    }
    else {
      cVar2 = (*(code *)**(undefined4 **)param_2)(param_2,local_10);
      if (cVar2 != '\0') {
        CUser::Send(local_10,param_1);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_20);
    }
  } while( true );
}
```
