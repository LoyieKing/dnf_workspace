# send_group

`_ZN9GameWorld10send_groupER11PacketGuardP7CBelong`

`GameWorld::send_group(PacketGuard&, CBelong*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c9234` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c9234  _ZN9GameWorld10send_groupER11PacketGuardP7CBelong
#           GameWorld::send_group(PacketGuard&, CBelong*)
# range [0x086c9234, 0x086c9307]
086c9234 +0x00:  push   %ebp
086c9235 +0x01:  mov    %esp,%ebp
086c9237 +0x03:  sub    $0x28,%esp
086c923a +0x06:  mov    0x8(%ebp),%eax
086c923d +0x09:  lea    0x134(%eax),%edx
086c9243 +0x0f:  lea    -0x18(%ebp),%eax
086c9246 +0x12:  mov    %edx,0x4(%esp)
086c924a +0x16:  mov    %eax,(%esp)
086c924d +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c9252 +0x1e:  sub    $0x4,%esp
086c9255 +0x21:  jmp    086c92d1 <+0x9d>
086c9257 +0x23:  lea    -0x18(%ebp),%eax
086c925a +0x26:  mov    %eax,(%esp)
086c925d +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c9262 +0x2e:  mov    0x4(%eax),%eax
086c9265 +0x31:  mov    %eax,-0xc(%ebp)
086c9268 +0x34:  mov    -0xc(%ebp),%eax
086c926b +0x37:  mov    %eax,(%esp)
086c926e +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c9273 +0x3f:  cmp    $0x2,%eax
086c9276 +0x42:  jle    086c9299 <+0x65>
086c9278 +0x44:  mov    0x10(%ebp),%eax
086c927b +0x47:  mov    (%eax),%eax
086c927d +0x49:  mov    (%eax),%edx
086c927f +0x4b:  mov    -0xc(%ebp),%eax
086c9282 +0x4e:  mov    %eax,0x4(%esp)
086c9286 +0x52:  mov    0x10(%ebp),%eax
086c9289 +0x55:  mov    %eax,(%esp)
086c928c +0x58:  call   *%edx
086c928e +0x5a:  test   %al,%al
086c9290 +0x5c:  je     086c9299 <+0x65>
086c9292 +0x5e:  mov    $0x1,%eax
086c9297 +0x63:  jmp    086c929e <+0x6a>
086c9299 +0x65:  mov    $0x0,%eax
086c929e +0x6a:  test   %al,%al
086c92a0 +0x6c:  je     086c92b4 <+0x80>
086c92a2 +0x6e:  mov    0xc(%ebp),%eax
086c92a5 +0x71:  mov    %eax,0x4(%esp)
086c92a9 +0x75:  mov    -0xc(%ebp),%eax
086c92ac +0x78:  mov    %eax,(%esp)
086c92af +0x7b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c92b4 +0x80:  lea    -0x10(%ebp),%eax
086c92b7 +0x83:  movl   $0x0,0x8(%esp)
086c92bf +0x8b:  lea    -0x18(%ebp),%edx
086c92c2 +0x8e:  mov    %edx,0x4(%esp)
086c92c6 +0x92:  mov    %eax,(%esp)
086c92c9 +0x95:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c92ce +0x9a:  sub    $0x4,%esp
086c92d1 +0x9d:  mov    0x8(%ebp),%eax
086c92d4 +0xa0:  lea    0x134(%eax),%edx
086c92da +0xa6:  lea    -0x14(%ebp),%eax
086c92dd +0xa9:  mov    %edx,0x4(%esp)
086c92e1 +0xad:  mov    %eax,(%esp)
086c92e4 +0xb0:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c92e9 +0xb5:  sub    $0x4,%esp
086c92ec +0xb8:  lea    -0x14(%ebp),%eax
086c92ef +0xbb:  mov    %eax,0x4(%esp)
086c92f3 +0xbf:  lea    -0x18(%ebp),%eax
086c92f6 +0xc2:  mov    %eax,(%esp)
086c92f9 +0xc5:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c92fe +0xca:  test   %al,%al
086c9300 +0xcc:  jne    086c9257 <+0x23>
086c9306 +0xd2:  leave
086c9307 +0xd3:  ret
```

## 反编译 C

```c
// GameWorld::send_group @ 0x86c9234

/* GameWorld::send_group(PacketGuard&, CBelong*) */

void __thiscall GameWorld::send_group(GameWorld *this,PacketGuard *param_1,CBelong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar3 + 4);
    iVar3 = CUser::get_state(local_10);
    if (iVar3 < 3) {
LAB_086c9299:
      bVar1 = false;
    }
    else {
      cVar2 = (*(code *)**(undefined4 **)param_2)(param_2,local_10);
      if (cVar2 == '\0') goto LAB_086c9299;
      bVar1 = true;
    }
    if (bVar1) {
      CUser::Send(local_10,param_1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  } while( true );
}
```
