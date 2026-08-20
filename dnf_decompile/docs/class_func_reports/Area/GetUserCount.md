# GetUserCount

`_ZNK4Area12GetUserCountEv`

`Area::GetUserCount() const`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c31f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c31f2  _ZNK4Area12GetUserCountEv
#           Area::GetUserCount() const
# range [0x086c31f2, 0x086c32df]
086c31f2 +0x00:  push   %ebp
086c31f3 +0x01:  mov    %esp,%ebp
086c31f5 +0x03:  sub    $0x48,%esp
086c31f8 +0x06:  movl   $0x0,-0x10(%ebp)
086c31ff +0x0d:  lea    -0x20(%ebp),%eax
086c3202 +0x10:  mov    %eax,(%esp)
086c3205 +0x13:  call   086d38d6 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2107>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2107
086c320a +0x18:  mov    0x8(%ebp),%eax
086c320d +0x1b:  lea    0x44(%eax),%edx
086c3210 +0x1e:  lea    -0x2c(%ebp),%eax
086c3213 +0x21:  mov    %edx,0x4(%esp)
086c3217 +0x25:  mov    %eax,(%esp)
086c321a +0x28:  call   086d38e4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2115>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2115
086c321f +0x2d:  sub    $0x4,%esp
086c3222 +0x30:  mov    -0x2c(%ebp),%eax
086c3225 +0x33:  mov    %eax,-0x20(%ebp)
086c3228 +0x36:  movl   $0x0,-0xc(%ebp)
086c322f +0x3d:  jmp    086c32a8 <+0xb6>
086c3231 +0x3f:  lea    -0x20(%ebp),%eax
086c3234 +0x42:  mov    %eax,(%esp)
086c3237 +0x45:  call   086d3944 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2175>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2175
086c323c +0x4a:  mov    0x4(%eax),%eax
086c323f +0x4d:  mov    %eax,-0x10(%ebp)
086c3242 +0x50:  cmpl   $0x0,-0x10(%ebp)
086c3246 +0x54:  je     086c3258 <+0x66>
086c3248 +0x56:  mov    -0x10(%ebp),%eax
086c324b +0x59:  mov    %eax,(%esp)
086c324e +0x5c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c3253 +0x61:  cmp    $0x2,%eax
086c3256 +0x64:  jg     086c325f <+0x6d>
086c3258 +0x66:  mov    $0x1,%eax
086c325d +0x6b:  jmp    086c3264 <+0x72>
086c325f +0x6d:  mov    $0x0,%eax
086c3264 +0x72:  test   %al,%al
086c3266 +0x74:  je     086c3287 <+0x95>
086c3268 +0x76:  lea    -0x18(%ebp),%eax
086c326b +0x79:  movl   $0x0,0x8(%esp)
086c3273 +0x81:  lea    -0x20(%ebp),%edx
086c3276 +0x84:  mov    %edx,0x4(%esp)
086c327a +0x88:  mov    %eax,(%esp)
086c327d +0x8b:  call   086d3952 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2183>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2183
086c3282 +0x90:  sub    $0x4,%esp
086c3285 +0x93:  jmp    086c32a8 <+0xb6>
086c3287 +0x95:  addl   $0x1,-0xc(%ebp)
086c328b +0x99:  lea    -0x14(%ebp),%eax
086c328e +0x9c:  movl   $0x0,0x8(%esp)
086c3296 +0xa4:  lea    -0x20(%ebp),%edx
086c3299 +0xa7:  mov    %edx,0x4(%esp)
086c329d +0xab:  mov    %eax,(%esp)
086c32a0 +0xae:  call   086d3952 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2183>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2183
086c32a5 +0xb3:  sub    $0x4,%esp
086c32a8 +0xb6:  mov    0x8(%ebp),%eax
086c32ab +0xb9:  lea    0x44(%eax),%edx
086c32ae +0xbc:  lea    -0x1c(%ebp),%eax
086c32b1 +0xbf:  mov    %edx,0x4(%esp)
086c32b5 +0xc3:  mov    %eax,(%esp)
086c32b8 +0xc6:  call   086d390a <_GLOBAL__I_MAX_VILLAGE_NUM+0x213b>  ; global constructors keyed to MAX_VILLAGE_NUM+0x213b
086c32bd +0xcb:  sub    $0x4,%esp
086c32c0 +0xce:  lea    -0x1c(%ebp),%eax
086c32c3 +0xd1:  mov    %eax,0x4(%esp)
086c32c7 +0xd5:  lea    -0x20(%ebp),%eax
086c32ca +0xd8:  mov    %eax,(%esp)
086c32cd +0xdb:  call   086d3930 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2161>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2161
086c32d2 +0xe0:  test   %al,%al
086c32d4 +0xe2:  jne    086c3231 <+0x3f>
086c32da +0xe8:  mov    -0xc(%ebp),%eax
086c32dd +0xeb:  leave
086c32de +0xec:  ret
086c32df +0xed:  nop
```

## 反编译 C

```c
// Area::GetUserCount @ 0x86c31f2

/* Area::GetUserCount() const */

int Area::GetUserCount(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_30 [3];
  undefined4 local_24;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  CUser *local_14;
  int local_10;
  
  local_14 = (CUser *)0x0;
  std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_24 = local_30[0];
  local_10 = 0;
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24,
                       (_Rb_tree_const_iterator *)local_20);
    if (cVar2 == '\0') {
      return local_10;
    }
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24)
    ;
    local_14 = *(CUser **)(iVar3 + 4);
    if (local_14 == (CUser *)0x0) {
LAB_086c3258:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_14);
      if (iVar3 < 3) goto LAB_086c3258;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_1c,(int)&local_24);
    }
    else {
      local_10 = local_10 + 1;
      std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_24);
    }
  } while( true );
}
```
