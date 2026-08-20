# ResetAllCleadpadPoint

`_ZN9GameWorld21ResetAllCleadpadPointEv`

`GameWorld::ResetAllCleadpadPoint()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cc8ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cc8ac  _ZN9GameWorld21ResetAllCleadpadPointEv
#           GameWorld::ResetAllCleadpadPoint()
# range [0x086cc8ac, 0x086cc991]
086cc8ac +0x00:  push   %ebp
086cc8ad +0x01:  mov    %esp,%ebp
086cc8af +0x03:  sub    $0x38,%esp
086cc8b2 +0x06:  mov    0x8(%ebp),%eax
086cc8b5 +0x09:  lea    0x134(%eax),%edx
086cc8bb +0x0f:  lea    -0x28(%ebp),%eax
086cc8be +0x12:  mov    %edx,0x4(%esp)
086cc8c2 +0x16:  mov    %eax,(%esp)
086cc8c5 +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cc8ca +0x1e:  sub    $0x4,%esp
086cc8cd +0x21:  jmp    086cc925 <+0x79>
086cc8cf +0x23:  lea    -0x28(%ebp),%eax
086cc8d2 +0x26:  mov    %eax,(%esp)
086cc8d5 +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cc8da +0x2e:  mov    0x4(%eax),%eax
086cc8dd +0x31:  mov    %eax,-0xc(%ebp)
086cc8e0 +0x34:  mov    -0xc(%ebp),%eax
086cc8e3 +0x37:  mov    %eax,(%esp)
086cc8e6 +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cc8eb +0x3f:  cmp    $0x2,%eax
086cc8ee +0x42:  setle  %al
086cc8f1 +0x45:  test   %al,%al
086cc8f3 +0x47:  jne    086cc907 <+0x5b>
086cc8f5 +0x49:  mov    -0xc(%ebp),%eax
086cc8f8 +0x4c:  add    $0x8e3f0,%eax
086cc8fd +0x51:  mov    %eax,(%esp)
086cc900 +0x54:  call   08694fa0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x17f5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x17f5
086cc905 +0x59:  jmp    086cc908 <+0x5c>
086cc907 +0x5b:  nop
086cc908 +0x5c:  lea    -0x20(%ebp),%eax
086cc90b +0x5f:  movl   $0x0,0x8(%esp)
086cc913 +0x67:  lea    -0x28(%ebp),%edx
086cc916 +0x6a:  mov    %edx,0x4(%esp)
086cc91a +0x6e:  mov    %eax,(%esp)
086cc91d +0x71:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086cc922 +0x76:  sub    $0x4,%esp
086cc925 +0x79:  mov    0x8(%ebp),%eax
086cc928 +0x7c:  lea    0x134(%eax),%edx
086cc92e +0x82:  lea    -0x24(%ebp),%eax
086cc931 +0x85:  mov    %edx,0x4(%esp)
086cc935 +0x89:  mov    %eax,(%esp)
086cc938 +0x8c:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cc93d +0x91:  sub    $0x4,%esp
086cc940 +0x94:  lea    -0x24(%ebp),%eax
086cc943 +0x97:  mov    %eax,0x4(%esp)
086cc947 +0x9b:  lea    -0x28(%ebp),%eax
086cc94a +0x9e:  mov    %eax,(%esp)
086cc94d +0xa1:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cc952 +0xa6:  test   %al,%al
086cc954 +0xa8:  jne    086cc8cf <+0x23>
086cc95a +0xae:  movl   $0x0,0xc(%esp)
086cc962 +0xb6:  movl   $0x1385,0x8(%esp)
086cc96a +0xbe:  movl   $&_ZZN9GameWorld21ResetAllCleadpadPointEvE19__PRETTY_FUNCTION__,0x4(%esp)
086cc972 +0xc6:  lea    -0x1c(%ebp),%eax
086cc975 +0xc9:  mov    %eax,(%esp)
086cc978 +0xcc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cc97d +0xd1:  movl   $"RESET ALL USER CLEANPAD POINT OK!!!!",0x4(%esp)
086cc985 +0xd9:  lea    -0x1c(%ebp),%eax
086cc988 +0xdc:  mov    %eax,(%esp)
086cc98b +0xdf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cc990 +0xe4:  leave
086cc991 +0xe5:  ret
```

## 反编译 C

```c
// GameWorld::ResetAllCleadpadPoint @ 0x86cc8ac

/* GameWorld::ResetAllCleadpadPoint() */

void GameWorld::ResetAllCleadpadPoint(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_2c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_28 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_24 [4];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_2c);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_28);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_2c,
                       (_Rb_tree_iterator *)local_28);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_2c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      WongWork::CMCAPManager::reset((CMCAPManager *)(local_10 + 0x8e3f0));
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_24,(int)local_2c);
  }
  cMyTrace::cMyTrace(local_20,"void GameWorld::ResetAllCleadpadPoint()",0x1385,0);
  cMyTrace::operator()(local_20,"RESET ALL USER CLEANPAD POINT OK!!!!");
  return;
}
```
