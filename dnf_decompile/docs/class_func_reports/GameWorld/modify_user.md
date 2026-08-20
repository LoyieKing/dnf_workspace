# modify_user

`_ZN9GameWorld11modify_userEP13CUserModifier`

`GameWorld::modify_user(CUserModifier*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c9308` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c9308  _ZN9GameWorld11modify_userEP13CUserModifier
#           GameWorld::modify_user(CUserModifier*)
# range [0x086c9308, 0x086c93a1]
086c9308 +0x00:  push   %ebp
086c9309 +0x01:  mov    %esp,%ebp
086c930b +0x03:  sub    $0x28,%esp
086c930e +0x06:  mov    0x8(%ebp),%eax
086c9311 +0x09:  lea    0x134(%eax),%edx
086c9317 +0x0f:  lea    -0x18(%ebp),%eax
086c931a +0x12:  mov    %edx,0x4(%esp)
086c931e +0x16:  mov    %eax,(%esp)
086c9321 +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c9326 +0x1e:  sub    $0x4,%esp
086c9329 +0x21:  jmp    086c936f <+0x67>
086c932b +0x23:  lea    -0x18(%ebp),%eax
086c932e +0x26:  mov    %eax,(%esp)
086c9331 +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c9336 +0x2e:  mov    0x4(%eax),%eax
086c9339 +0x31:  mov    %eax,-0xc(%ebp)
086c933c +0x34:  mov    0xc(%ebp),%eax
086c933f +0x37:  mov    (%eax),%eax
086c9341 +0x39:  mov    (%eax),%edx
086c9343 +0x3b:  mov    -0xc(%ebp),%eax
086c9346 +0x3e:  mov    %eax,0x4(%esp)
086c934a +0x42:  mov    0xc(%ebp),%eax
086c934d +0x45:  mov    %eax,(%esp)
086c9350 +0x48:  call   *%edx
086c9352 +0x4a:  lea    -0x10(%ebp),%eax
086c9355 +0x4d:  movl   $0x0,0x8(%esp)
086c935d +0x55:  lea    -0x18(%ebp),%edx
086c9360 +0x58:  mov    %edx,0x4(%esp)
086c9364 +0x5c:  mov    %eax,(%esp)
086c9367 +0x5f:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c936c +0x64:  sub    $0x4,%esp
086c936f +0x67:  mov    0x8(%ebp),%eax
086c9372 +0x6a:  lea    0x134(%eax),%edx
086c9378 +0x70:  lea    -0x14(%ebp),%eax
086c937b +0x73:  mov    %edx,0x4(%esp)
086c937f +0x77:  mov    %eax,(%esp)
086c9382 +0x7a:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c9387 +0x7f:  sub    $0x4,%esp
086c938a +0x82:  lea    -0x14(%ebp),%eax
086c938d +0x85:  mov    %eax,0x4(%esp)
086c9391 +0x89:  lea    -0x18(%ebp),%eax
086c9394 +0x8c:  mov    %eax,(%esp)
086c9397 +0x8f:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c939c +0x94:  test   %al,%al
086c939e +0x96:  jne    086c932b <+0x23>
086c93a0 +0x98:  leave
086c93a1 +0x99:  ret
```

## 反编译 C

```c
// GameWorld::modify_user @ 0x86c9308

/* GameWorld::modify_user(CUserModifier*) */

void __thiscall GameWorld::modify_user(GameWorld *this,CUserModifier *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  undefined4 local_10;
  
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
    local_10 = *(undefined4 *)(iVar2 + 4);
    (*(code *)**(undefined4 **)param_1)(param_1,local_10);
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
