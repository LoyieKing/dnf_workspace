# reset_option

`_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption`

`random_option::CRandomOptionItemHandle::reset_option(unsigned long, ENUM_RARITY, int, RandomOption*)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f39d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f39d2  _ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption
#           random_option::CRandomOptionItemHandle::reset_option(unsigned long, ENUM_RARITY, int, RandomOption*)
# range [0x085f39d2, 0x085f3cb7]
085f39d2 +0x000:  push   %ebp
085f39d3 +0x001:  mov    %esp,%ebp
085f39d5 +0x003:  push   %ebx
085f39d6 +0x004:  sub    $0x84,%esp
085f39dc +0x00a:  mov    0x14(%ebp),%eax
085f39df +0x00d:  mov    %eax,0x4(%esp)
085f39e3 +0x011:  mov    0x18(%ebp),%eax
085f39e6 +0x014:  mov    %eax,(%esp)
085f39e9 +0x017:  call   085f4040 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5b
085f39ee +0x01c:  test   %al,%al
085f39f0 +0x01e:  sete   %al
085f39f3 +0x021:  test   %al,%al
085f39f5 +0x023:  je     085f3a01 <+0x2f>
085f39f7 +0x025:  mov    $0x17,%eax
085f39fc +0x02a:  jmp    085f3cb2 <+0x2e0>
085f3a01 +0x02f:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f3a06 +0x034:  lea    0x200(%eax),%edx
085f3a0c +0x03a:  lea    -0x5c(%ebp),%eax
085f3a0f +0x03d:  mov    %edx,0x4(%esp)
085f3a13 +0x041:  mov    %eax,(%esp)
085f3a16 +0x044:  call   085692f0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xcba>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xcba
085f3a1b +0x049:  sub    $0x4,%esp
085f3a1e +0x04c:  mov    0x14(%ebp),%eax
085f3a21 +0x04f:  mov    %eax,0x4(%esp)
085f3a25 +0x053:  mov    0x18(%ebp),%eax
085f3a28 +0x056:  mov    %eax,(%esp)
085f3a2b +0x059:  call   085f4040 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x5b
085f3a30 +0x05e:  movzbl %al,%eax
085f3a33 +0x061:  mov    %eax,-0x54(%ebp)
085f3a36 +0x064:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f3a3b +0x069:  lea    0x200(%eax),%ecx
085f3a41 +0x06f:  lea    -0x58(%ebp),%eax
085f3a44 +0x072:  lea    -0x54(%ebp),%edx
085f3a47 +0x075:  mov    %edx,0x8(%esp)
085f3a4b +0x079:  mov    %ecx,0x4(%esp)
085f3a4f +0x07d:  mov    %eax,(%esp)
085f3a52 +0x080:  call   085692c4 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xc8e>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xc8e
085f3a57 +0x085:  sub    $0x4,%esp
085f3a5a +0x088:  lea    -0x5c(%ebp),%eax
085f3a5d +0x08b:  mov    %eax,0x4(%esp)
085f3a61 +0x08f:  lea    -0x58(%ebp),%eax
085f3a64 +0x092:  mov    %eax,(%esp)
085f3a67 +0x095:  call   08569316 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xce0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xce0
085f3a6c +0x09a:  test   %al,%al
085f3a6e +0x09c:  je     085f3a7a <+0xa8>
085f3a70 +0x09e:  mov    $0x17,%eax
085f3a75 +0x0a3:  jmp    085f3cb2 <+0x2e0>
085f3a7a +0x0a8:  mov    0x10(%ebp),%eax
085f3a7d +0x0ab:  mov    %al,-0x4d(%ebp)
085f3a80 +0x0ae:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f3a85 +0x0b3:  lea    0x1e8(%eax),%ecx
085f3a8b +0x0b9:  lea    -0x60(%ebp),%eax
085f3a8e +0x0bc:  lea    -0x4d(%ebp),%edx
085f3a91 +0x0bf:  mov    %edx,0x8(%esp)
085f3a95 +0x0c3:  mov    %ecx,0x4(%esp)
085f3a99 +0x0c7:  mov    %eax,(%esp)
085f3a9c +0x0ca:  call   085f4eba <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xed5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xed5
085f3aa1 +0x0cf:  sub    $0x4,%esp
085f3aa4 +0x0d2:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f3aa9 +0x0d7:  lea    0x1e8(%eax),%edx
085f3aaf +0x0dd:  lea    -0x4c(%ebp),%eax
085f3ab2 +0x0e0:  mov    %edx,0x4(%esp)
085f3ab6 +0x0e4:  mov    %eax,(%esp)
085f3ab9 +0x0e7:  call   085f4ee6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf01>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf01
085f3abe +0x0ec:  sub    $0x4,%esp
085f3ac1 +0x0ef:  lea    -0x4c(%ebp),%eax
085f3ac4 +0x0f2:  mov    %eax,0x4(%esp)
085f3ac8 +0x0f6:  lea    -0x60(%ebp),%eax
085f3acb +0x0f9:  mov    %eax,(%esp)
085f3ace +0x0fc:  call   085f4f0c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf27>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf27
085f3ad3 +0x101:  test   %al,%al
085f3ad5 +0x103:  je     085f3ae1 <+0x10f>
085f3ad7 +0x105:  mov    $0x13,%eax
085f3adc +0x10a:  jmp    085f3cb2 <+0x2e0>
085f3ae1 +0x10f:  lea    -0x60(%ebp),%eax
085f3ae4 +0x112:  mov    %eax,(%esp)
085f3ae7 +0x115:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3aec +0x11a:  mov    0x10(%eax),%eax
085f3aef +0x11d:  sub    $0x1,%eax
085f3af2 +0x120:  mov    %eax,-0x48(%ebp)
085f3af5 +0x123:  mov    0x8(%ebp),%eax
085f3af8 +0x126:  mov    0x4(%eax),%eax
085f3afb +0x129:  lea    0x6b98(%eax),%edx
085f3b01 +0x12f:  lea    -0x48(%ebp),%eax
085f3b04 +0x132:  mov    %eax,0x4(%esp)
085f3b08 +0x136:  mov    %edx,(%esp)
085f3b0b +0x139:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f3b10 +0x13e:  mov    %eax,-0x18(%ebp)
085f3b13 +0x141:  mov    -0x18(%ebp),%eax
085f3b16 +0x144:  mov    %eax,0x4(%esp)
085f3b1a +0x148:  lea    -0x34(%ebp),%eax
085f3b1d +0x14b:  mov    %eax,(%esp)
085f3b20 +0x14e:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f3b25 +0x153:  lea    -0x60(%ebp),%eax
085f3b28 +0x156:  mov    %eax,(%esp)
085f3b2b +0x159:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3b30 +0x15e:  lea    0x4(%eax),%edx
085f3b33 +0x161:  lea    -0x24(%ebp),%eax
085f3b36 +0x164:  mov    %edx,0x4(%esp)
085f3b3a +0x168:  mov    %eax,(%esp)
085f3b3d +0x16b:  call   085f4f5a <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf75>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf75
085f3b42 +0x170:  sub    $0x4,%esp
085f3b45 +0x173:  lea    -0x60(%ebp),%eax
085f3b48 +0x176:  mov    %eax,(%esp)
085f3b4b +0x179:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3b50 +0x17e:  lea    0x4(%eax),%edx
085f3b53 +0x181:  lea    -0x20(%ebp),%eax
085f3b56 +0x184:  mov    %edx,0x4(%esp)
085f3b5a +0x188:  mov    %eax,(%esp)
085f3b5d +0x18b:  call   085f4f2e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf49>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf49
085f3b62 +0x190:  sub    $0x4,%esp
085f3b65 +0x193:  lea    -0x44(%ebp),%eax
085f3b68 +0x196:  mov    -0x34(%ebp),%edx
085f3b6b +0x199:  mov    %edx,0xc(%esp)
085f3b6f +0x19d:  mov    -0x30(%ebp),%edx
085f3b72 +0x1a0:  mov    %edx,0x10(%esp)
085f3b76 +0x1a4:  mov    -0x2c(%ebp),%edx
085f3b79 +0x1a7:  mov    %edx,0x14(%esp)
085f3b7d +0x1ab:  mov    -0x28(%ebp),%edx
085f3b80 +0x1ae:  mov    %edx,0x18(%esp)
085f3b84 +0x1b2:  mov    -0x24(%ebp),%edx
085f3b87 +0x1b5:  mov    %edx,0x8(%esp)
085f3b8b +0x1b9:  mov    -0x20(%ebp),%edx
085f3b8e +0x1bc:  mov    %edx,0x4(%esp)
085f3b92 +0x1c0:  mov    %eax,(%esp)
085f3b95 +0x1c3:  call   085f4f86 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xfa1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xfa1
085f3b9a +0x1c8:  sub    $0x4,%esp
085f3b9d +0x1cb:  lea    -0x44(%ebp),%eax
085f3ba0 +0x1ce:  mov    %eax,(%esp)
085f3ba3 +0x1d1:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f3ba8 +0x1d6:  mov    %eax,-0x14(%ebp)
085f3bab +0x1d9:  lea    -0x60(%ebp),%eax
085f3bae +0x1dc:  mov    %eax,(%esp)
085f3bb1 +0x1df:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3bb6 +0x1e4:  add    $0x4,%eax
085f3bb9 +0x1e7:  mov    %eax,(%esp)
085f3bbc +0x1ea:  call   085f4ffe <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x1019>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x1019
085f3bc1 +0x1ef:  cmp    -0x14(%ebp),%eax
085f3bc4 +0x1f2:  setbe  %al
085f3bc7 +0x1f5:  test   %al,%al
085f3bc9 +0x1f7:  je     085f3bd5 <+0x203>
085f3bcb +0x1f9:  mov    $0x13,%eax
085f3bd0 +0x1fe:  jmp    085f3cb2 <+0x2e0>
085f3bd5 +0x203:  lea    -0x60(%ebp),%eax
085f3bd8 +0x206:  mov    %eax,(%esp)
085f3bdb +0x209:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3be0 +0x20e:  lea    0x4(%eax),%edx
085f3be3 +0x211:  mov    -0x14(%ebp),%eax
085f3be6 +0x214:  mov    %eax,0x4(%esp)
085f3bea +0x218:  mov    %edx,(%esp)
085f3bed +0x21b:  call   085f5020 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x103b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x103b
085f3bf2 +0x220:  mov    0x4(%eax),%ebx
085f3bf5 +0x223:  lea    -0x60(%ebp),%eax
085f3bf8 +0x226:  mov    %eax,(%esp)
085f3bfb +0x229:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3c00 +0x22e:  lea    0x4(%eax),%edx
085f3c03 +0x231:  mov    -0x14(%ebp),%eax
085f3c06 +0x234:  mov    %eax,0x4(%esp)
085f3c0a +0x238:  mov    %edx,(%esp)
085f3c0d +0x23b:  call   085f5020 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x103b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x103b
085f3c12 +0x240:  mov    (%eax),%eax
085f3c14 +0x242:  mov    %ebx,%edx
085f3c16 +0x244:  sub    %eax,%edx
085f3c18 +0x246:  mov    %edx,%eax
085f3c1a +0x248:  sub    $0x1,%eax
085f3c1d +0x24b:  mov    %eax,-0x10(%ebp)
085f3c20 +0x24e:  mov    -0x10(%ebp),%eax
085f3c23 +0x251:  mov    %eax,-0x1c(%ebp)
085f3c26 +0x254:  mov    0x8(%ebp),%eax
085f3c29 +0x257:  mov    0x4(%eax),%eax
085f3c2c +0x25a:  lea    0x7560(%eax),%edx
085f3c32 +0x260:  lea    -0x1c(%ebp),%eax
085f3c35 +0x263:  mov    %eax,0x4(%esp)
085f3c39 +0x267:  mov    %edx,(%esp)
085f3c3c +0x26a:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f3c41 +0x26f:  mov    %eax,%ebx
085f3c43 +0x271:  lea    -0x60(%ebp),%eax
085f3c46 +0x274:  mov    %eax,(%esp)
085f3c49 +0x277:  call   085f4f20 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xf3b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xf3b
085f3c4e +0x27c:  lea    0x4(%eax),%edx
085f3c51 +0x27f:  mov    -0x14(%ebp),%eax
085f3c54 +0x282:  mov    %eax,0x4(%esp)
085f3c58 +0x286:  mov    %edx,(%esp)
085f3c5b +0x289:  call   085f5020 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x103b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x103b
085f3c60 +0x28e:  mov    (%eax),%eax
085f3c62 +0x290:  lea    (%ebx,%eax,1),%eax
085f3c65 +0x293:  mov    %eax,-0xc(%ebp)
085f3c68 +0x296:  cmpl   $0x64,-0xc(%ebp)
085f3c6c +0x29a:  jbe    085f3c75 <+0x2a3>
085f3c6e +0x29c:  movl   $0x64,-0xc(%ebp)
085f3c75 +0x2a3:  mov    -0xc(%ebp),%eax
085f3c78 +0x2a6:  movzbl %al,%edx
085f3c7b +0x2a9:  mov    0x14(%ebp),%eax
085f3c7e +0x2ac:  mov    %edx,0x8(%esp)
085f3c82 +0x2b0:  mov    %eax,0x4(%esp)
085f3c86 +0x2b4:  mov    0x18(%ebp),%eax
085f3c89 +0x2b7:  mov    %eax,(%esp)
085f3c8c +0x2ba:  call   085f4078 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x93>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x93
085f3c91 +0x2bf:  mov    -0xc(%ebp),%eax
085f3c94 +0x2c2:  movzbl %al,%edx
085f3c97 +0x2c5:  mov    0x14(%ebp),%eax
085f3c9a +0x2c8:  mov    %edx,0x8(%esp)
085f3c9e +0x2cc:  mov    %eax,0x4(%esp)
085f3ca2 +0x2d0:  mov    0x18(%ebp),%eax
085f3ca5 +0x2d3:  mov    %eax,(%esp)
085f3ca8 +0x2d6:  call   085f40be <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd9>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd9
085f3cad +0x2db:  mov    $0x0,%eax
085f3cb2 +0x2e0:  mov    -0x4(%ebp),%ebx
085f3cb5 +0x2e3:  leave
085f3cb6 +0x2e4:  ret
085f3cb7 +0x2e5:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::reset_option @ 0x85f39d2

/* random_option::CRandomOptionItemHandle::reset_option(unsigned long, ENUM_RARITY, int,
   RandomOption*) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::reset_option
          (CRandomOptionItemHandle *this,undefined4 param_1,undefined1 param_3,undefined4 param_4,
          RandomOption *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>> local_64 [4];
  set<unsigned_long,std::less<unsigned_long>,std::allocator<unsigned_long>> local_60 [4];
  _Rb_tree_const_iterator<unsigned_long> local_5c [4];
  uint local_58;
  undefined1 local_51;
  map<unsigned_char,ResetValues,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,ResetValues>>>
  local_50 [4];
  ulong local_4c;
  CRandomList<unsigned_int> local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  ulong local_14;
  uint local_10;
  
  cVar1 = RandomOption::get_option_index(param_5,param_4);
  if (cVar1 == '\0') {
    uVar2 = 0x17;
  }
  else {
    GetRandomOption();
    std::set<unsigned_long,std::less<unsigned_long>,std::allocator<unsigned_long>>::end(local_60);
    local_58 = RandomOption::get_option_index(param_5,param_4);
    local_58 = local_58 & 0xff;
    GetRandomOption();
    std::set<unsigned_long,std::less<unsigned_long>,std::allocator<unsigned_long>>::find
              ((ulong *)local_5c);
    cVar1 = std::_Rb_tree_const_iterator<unsigned_long>::operator!=
                      (local_5c,(_Rb_tree_const_iterator *)local_60);
    if (cVar1 == '\0') {
      local_51 = param_3;
      GetRandomOption();
      std::
      map<unsigned_char,ResetValues,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,ResetValues>>>
      ::find((uchar *)local_64);
      GetRandomOption();
      std::
      map<unsigned_char,ResetValues,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,ResetValues>>>
      ::end(local_50);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator==
                        (local_64,(_Rb_tree_const_iterator *)local_50);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                          (local_64);
        local_4c = *(int *)(iVar3 + 0x10) - 1;
        local_1c = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x6b98),&local_4c);
        CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_38,local_1c);
        std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                  (local_64);
        std::vector<ResetValue,std::allocator<ResetValue>>::end();
        std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                  (local_64);
        std::vector<ResetValue,std::allocator<ResetValue>>::begin();
        std::
        for_each<__gnu_cxx::__normal_iterator<ResetValue_const*,std::vector<ResetValue,std::allocator<ResetValue>>>,CRandomList<unsigned_int>>
                  (local_48,local_24,local_28,local_38,local_34,local_30,local_2c);
        local_18 = CRandomList<unsigned_int>::get_value(local_48);
        iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                          (local_64);
        uVar4 = std::vector<ResetValue,std::allocator<ResetValue>>::size
                          ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar3 + 4));
        if (local_18 < uVar4) {
          iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::
                  operator->(local_64);
          iVar3 = std::vector<ResetValue,std::allocator<ResetValue>>::operator[]
                            ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar3 + 4),local_18);
          iVar3 = *(int *)(iVar3 + 4);
          iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::
                  operator->(local_64);
          piVar6 = (int *)std::vector<ResetValue,std::allocator<ResetValue>>::operator[]
                                    ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar5 + 4),
                                     local_18);
          local_20 = (iVar3 - *piVar6) - 1;
          local_14 = local_20;
          iVar3 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x7560),&local_20);
          iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::
                  operator->(local_64);
          piVar6 = (int *)std::vector<ResetValue,std::allocator<ResetValue>>::operator[]
                                    ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar5 + 4),
                                     local_18);
          local_10 = iVar3 + *piVar6;
          if (100 < local_10) {
            local_10 = 100;
          }
          RandomOption::set_first_value(param_5,param_4,local_10 & 0xff);
          RandomOption::set_second_value(param_5,param_4,local_10 & 0xff);
          uVar2 = 0;
        }
        else {
          uVar2 = 0x13;
        }
      }
      else {
        uVar2 = 0x13;
      }
    }
    else {
      uVar2 = 0x17;
    }
  }
  return uVar2;
}
```
