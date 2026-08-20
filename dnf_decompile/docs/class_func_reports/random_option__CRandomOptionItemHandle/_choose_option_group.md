# _choose_option_group

`_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi`

`random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int, int&)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f2882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f2882  _ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi
#           random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int, int&)
# range [0x085f2882, 0x085f2b01]
085f2882 +0x000:  push   %ebp
085f2883 +0x001:  mov    %esp,%ebp
085f2885 +0x003:  sub    $0x88,%esp
085f288b +0x009:  mov    0xc(%ebp),%eax
085f288e +0x00c:  mov    %al,-0x5c(%ebp)
085f2891 +0x00f:  movb   $0xff,-0x5b(%ebp)
085f2895 +0x013:  mov    0x14(%ebp),%eax
085f2898 +0x016:  mov    %al,-0x5a(%ebp)
085f289b +0x019:  mov    0x18(%ebp),%eax
085f289e +0x01c:  mov    %al,-0x59(%ebp)
085f28a1 +0x01f:  mov    0x1c(%ebp),%eax
085f28a4 +0x022:  mov    %eax,-0x58(%ebp)
085f28a7 +0x025:  mov    0x8(%ebp),%eax
085f28aa +0x028:  mov    0x14(%eax),%eax
085f28ad +0x02b:  mov    (%eax),%eax
085f28af +0x02d:  add    $0x4,%eax
085f28b2 +0x030:  mov    (%eax),%edx
085f28b4 +0x032:  mov    0x8(%ebp),%eax
085f28b7 +0x035:  mov    0x14(%eax),%eax
085f28ba +0x038:  mov    %eax,(%esp)
085f28bd +0x03b:  call   *%edx
085f28bf +0x03d:  lea    -0x54(%ebp),%edx
085f28c2 +0x040:  lea    -0x5c(%ebp),%ecx
085f28c5 +0x043:  mov    %ecx,0x8(%esp)
085f28c9 +0x047:  mov    %eax,0x4(%esp)
085f28cd +0x04b:  mov    %edx,(%esp)
085f28d0 +0x04e:  call   085f4cca <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xce5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xce5
085f28d5 +0x053:  sub    $0x4,%esp
085f28d8 +0x056:  lea    -0x54(%ebp),%eax
085f28db +0x059:  mov    %eax,0x4(%esp)
085f28df +0x05d:  lea    -0x60(%ebp),%eax
085f28e2 +0x060:  mov    %eax,(%esp)
085f28e5 +0x063:  call   085f4cf6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd11>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd11
085f28ea +0x068:  mov    0x8(%ebp),%eax
085f28ed +0x06b:  mov    0x14(%eax),%eax
085f28f0 +0x06e:  mov    (%eax),%eax
085f28f2 +0x070:  add    $0x4,%eax
085f28f5 +0x073:  mov    (%eax),%edx
085f28f7 +0x075:  mov    0x8(%ebp),%eax
085f28fa +0x078:  mov    0x14(%eax),%eax
085f28fd +0x07b:  mov    %eax,(%esp)
085f2900 +0x07e:  call   *%edx
085f2902 +0x080:  lea    -0x4c(%ebp),%edx
085f2905 +0x083:  mov    %eax,0x4(%esp)
085f2909 +0x087:  mov    %edx,(%esp)
085f290c +0x08a:  call   085f4d06 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd21>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd21
085f2911 +0x08f:  sub    $0x4,%esp
085f2914 +0x092:  lea    -0x4c(%ebp),%eax
085f2917 +0x095:  mov    %eax,0x4(%esp)
085f291b +0x099:  lea    -0x50(%ebp),%eax
085f291e +0x09c:  mov    %eax,(%esp)
085f2921 +0x09f:  call   085f4cf6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd11>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd11
085f2926 +0x0a4:  lea    -0x50(%ebp),%eax
085f2929 +0x0a7:  mov    %eax,0x4(%esp)
085f292d +0x0ab:  lea    -0x60(%ebp),%eax
085f2930 +0x0ae:  mov    %eax,(%esp)
085f2933 +0x0b1:  call   085f4d2c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd47>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd47
085f2938 +0x0b6:  test   %al,%al
085f293a +0x0b8:  je     085f29e5 <+0x163>
085f2940 +0x0be:  mov    0x10(%ebp),%eax
085f2943 +0x0c1:  mov    %al,-0x5b(%ebp)
085f2946 +0x0c4:  mov    0x8(%ebp),%eax
085f2949 +0x0c7:  mov    0x14(%eax),%eax
085f294c +0x0ca:  mov    (%eax),%eax
085f294e +0x0cc:  add    $0x4,%eax
085f2951 +0x0cf:  mov    (%eax),%edx
085f2953 +0x0d1:  mov    0x8(%ebp),%eax
085f2956 +0x0d4:  mov    0x14(%eax),%eax
085f2959 +0x0d7:  mov    %eax,(%esp)
085f295c +0x0da:  call   *%edx
085f295e +0x0dc:  lea    -0x48(%ebp),%edx
085f2961 +0x0df:  lea    -0x5c(%ebp),%ecx
085f2964 +0x0e2:  mov    %ecx,0x8(%esp)
085f2968 +0x0e6:  mov    %eax,0x4(%esp)
085f296c +0x0ea:  mov    %edx,(%esp)
085f296f +0x0ed:  call   085f4cca <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xce5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xce5
085f2974 +0x0f2:  sub    $0x4,%esp
085f2977 +0x0f5:  lea    -0x48(%ebp),%eax
085f297a +0x0f8:  mov    %eax,0x4(%esp)
085f297e +0x0fc:  lea    -0x64(%ebp),%eax
085f2981 +0x0ff:  mov    %eax,(%esp)
085f2984 +0x102:  call   085f4cf6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd11>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd11
085f2989 +0x107:  mov    0x8(%ebp),%eax
085f298c +0x10a:  mov    0x14(%eax),%eax
085f298f +0x10d:  mov    (%eax),%eax
085f2991 +0x10f:  add    $0x4,%eax
085f2994 +0x112:  mov    (%eax),%edx
085f2996 +0x114:  mov    0x8(%ebp),%eax
085f2999 +0x117:  mov    0x14(%eax),%eax
085f299c +0x11a:  mov    %eax,(%esp)
085f299f +0x11d:  call   *%edx
085f29a1 +0x11f:  lea    -0x40(%ebp),%edx
085f29a4 +0x122:  mov    %eax,0x4(%esp)
085f29a8 +0x126:  mov    %edx,(%esp)
085f29ab +0x129:  call   085f4d06 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd21>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd21
085f29b0 +0x12e:  sub    $0x4,%esp
085f29b3 +0x131:  lea    -0x40(%ebp),%eax
085f29b6 +0x134:  mov    %eax,0x4(%esp)
085f29ba +0x138:  lea    -0x44(%ebp),%eax
085f29bd +0x13b:  mov    %eax,(%esp)
085f29c0 +0x13e:  call   085f4cf6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd11>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd11
085f29c5 +0x143:  lea    -0x44(%ebp),%eax
085f29c8 +0x146:  mov    %eax,0x4(%esp)
085f29cc +0x14a:  lea    -0x64(%ebp),%eax
085f29cf +0x14d:  mov    %eax,(%esp)
085f29d2 +0x150:  call   085f4d2c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd47>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd47
085f29d7 +0x155:  test   %al,%al
085f29d9 +0x157:  je     085f29e5 <+0x163>
085f29db +0x159:  mov    $0x29e,%eax
085f29e0 +0x15e:  jmp    085f2aff <+0x27d>
085f29e5 +0x163:  lea    -0x60(%ebp),%eax
085f29e8 +0x166:  mov    %eax,(%esp)
085f29eb +0x169:  call   085f4d40 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd5b
085f29f0 +0x16e:  mov    0x20(%eax),%eax
085f29f3 +0x171:  sub    $0x1,%eax
085f29f6 +0x174:  mov    %eax,-0x3c(%ebp)
085f29f9 +0x177:  mov    0x8(%ebp),%eax
085f29fc +0x17a:  mov    0x4(%eax),%eax
085f29ff +0x17d:  lea    0x3ab0(%eax),%edx
085f2a05 +0x183:  lea    -0x3c(%ebp),%eax
085f2a08 +0x186:  mov    %eax,0x4(%esp)
085f2a0c +0x18a:  mov    %edx,(%esp)
085f2a0f +0x18d:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f2a14 +0x192:  mov    %eax,-0x10(%ebp)
085f2a17 +0x195:  mov    -0x10(%ebp),%eax
085f2a1a +0x198:  mov    %eax,0x4(%esp)
085f2a1e +0x19c:  lea    -0x28(%ebp),%eax
085f2a21 +0x19f:  mov    %eax,(%esp)
085f2a24 +0x1a2:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f2a29 +0x1a7:  lea    -0x60(%ebp),%eax
085f2a2c +0x1aa:  mov    %eax,(%esp)
085f2a2f +0x1ad:  call   085f4d40 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd5b
085f2a34 +0x1b2:  lea    0x14(%eax),%edx
085f2a37 +0x1b5:  lea    -0x18(%ebp),%eax
085f2a3a +0x1b8:  mov    %edx,0x4(%esp)
085f2a3e +0x1bc:  mov    %eax,(%esp)
085f2a41 +0x1bf:  call   080e3324 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x10ca>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x10ca
085f2a46 +0x1c4:  sub    $0x4,%esp
085f2a49 +0x1c7:  lea    -0x60(%ebp),%eax
085f2a4c +0x1ca:  mov    %eax,(%esp)
085f2a4f +0x1cd:  call   085f4d40 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd5b
085f2a54 +0x1d2:  lea    0x14(%eax),%edx
085f2a57 +0x1d5:  lea    -0x14(%ebp),%eax
085f2a5a +0x1d8:  mov    %edx,0x4(%esp)
085f2a5e +0x1dc:  mov    %eax,(%esp)
085f2a61 +0x1df:  call   080e3350 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x10f6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x10f6
085f2a66 +0x1e4:  sub    $0x4,%esp
085f2a69 +0x1e7:  lea    -0x38(%ebp),%eax
085f2a6c +0x1ea:  mov    -0x28(%ebp),%edx
085f2a6f +0x1ed:  mov    %edx,0xc(%esp)
085f2a73 +0x1f1:  mov    -0x24(%ebp),%edx
085f2a76 +0x1f4:  mov    %edx,0x10(%esp)
085f2a7a +0x1f8:  mov    -0x20(%ebp),%edx
085f2a7d +0x1fb:  mov    %edx,0x14(%esp)
085f2a81 +0x1ff:  mov    -0x1c(%ebp),%edx
085f2a84 +0x202:  mov    %edx,0x18(%esp)
085f2a88 +0x206:  mov    -0x18(%ebp),%edx
085f2a8b +0x209:  mov    %edx,0x8(%esp)
085f2a8f +0x20d:  mov    -0x14(%ebp),%edx
085f2a92 +0x210:  mov    %edx,0x4(%esp)
085f2a96 +0x214:  mov    %eax,(%esp)
085f2a99 +0x217:  call   085f4be3 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbfe>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbfe
085f2a9e +0x21c:  sub    $0x4,%esp
085f2aa1 +0x21f:  lea    -0x38(%ebp),%eax
085f2aa4 +0x222:  mov    %eax,(%esp)
085f2aa7 +0x225:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f2aac +0x22a:  mov    %eax,-0xc(%ebp)
085f2aaf +0x22d:  lea    -0x60(%ebp),%eax
085f2ab2 +0x230:  mov    %eax,(%esp)
085f2ab5 +0x233:  call   085f4d40 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd5b
085f2aba +0x238:  add    $0x8,%eax
085f2abd +0x23b:  mov    %eax,(%esp)
085f2ac0 +0x23e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085f2ac5 +0x243:  cmp    -0xc(%ebp),%eax
085f2ac8 +0x246:  seta   %al
085f2acb +0x249:  test   %al,%al
085f2acd +0x24b:  je     085f2afa <+0x278>
085f2acf +0x24d:  lea    -0x60(%ebp),%eax
085f2ad2 +0x250:  mov    %eax,(%esp)
085f2ad5 +0x253:  call   085f4d40 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xd5b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xd5b
085f2ada +0x258:  lea    0x8(%eax),%edx
085f2add +0x25b:  mov    -0xc(%ebp),%eax
085f2ae0 +0x25e:  mov    %eax,0x4(%esp)
085f2ae4 +0x262:  mov    %edx,(%esp)
085f2ae7 +0x265:  call   083878f6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17396>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17396
085f2aec +0x26a:  mov    (%eax),%edx
085f2aee +0x26c:  mov    0x20(%ebp),%eax
085f2af1 +0x26f:  mov    %edx,(%eax)
085f2af3 +0x271:  mov    $0x0,%eax
085f2af8 +0x276:  jmp    085f2aff <+0x27d>
085f2afa +0x278:  mov    $0x2be,%eax
085f2aff +0x27d:  leave
085f2b00 +0x27e:  ret
085f2b01 +0x27f:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_choose_option_group @ 0x85f2882

/* random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int,
   int&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_choose_option_group
          (CRandomOptionItemHandle *this,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  _Rb_tree_iterator *p_Var6;
  undefined1 *puVar7;
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_68 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_64 [4];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  _Rb_tree_iterator local_58 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_54 [4];
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  local_50 [4];
  _Rb_tree_iterator local_4c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_48 [4];
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  local_44 [4];
  ulong local_40;
  CRandomList<unsigned_int> local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  local_60 = param_2;
  local_5f = 0xff;
  local_5e = param_4;
  local_5d = param_5;
  local_5c = param_6;
  (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14));
  puVar7 = &local_60;
  std::
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  ::find((ulonglong *)local_58);
  p_Var6 = local_58;
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  _Rb_tree_const_iterator(local_64,p_Var6);
  (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14),p_Var6,puVar7);
  std::
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  ::end(local_50);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  _Rb_tree_const_iterator(local_54,(_Rb_tree_iterator *)local_50);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
          operator==(local_64,(_Rb_tree_const_iterator *)local_54);
  if (cVar1 != '\0') {
    local_5f = param_3;
    (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14));
    puVar7 = &local_60;
    std::
    map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
    ::find((ulonglong *)local_4c);
    p_Var6 = local_4c;
    std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
    _Rb_tree_const_iterator(local_68,p_Var6);
    (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14),p_Var6,puVar7);
    std::
    map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
    ::end(local_44);
    std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
    _Rb_tree_const_iterator(local_48,(_Rb_tree_iterator *)local_44);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>
            ::operator==(local_68,(_Rb_tree_const_iterator *)local_48);
    if (cVar1 != '\0') {
      return 0x29e;
    }
  }
  iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
          operator->(local_64);
  local_40 = *(int *)(iVar2 + 0x20) - 1;
  local_14 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x3ab0),&local_40);
  CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_2c,local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  operator->(local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  operator->(local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,CRandomList<unsigned_int>>
            (local_3c,local_18,local_1c,local_2c,local_28,local_24,local_20);
  local_10 = CRandomList<unsigned_int>::get_value(local_3c);
  iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
          operator->(local_64);
  uVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)(iVar2 + 8))
  ;
  if (local_10 < uVar3) {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>
            ::operator->(local_64);
    puVar4 = (undefined4 *)
             std::vector<int,std::allocator<int>>::at
                       ((vector<int,std::allocator<int>> *)(iVar2 + 8),local_10);
    *param_7 = *puVar4;
    uVar5 = 0;
  }
  else {
    uVar5 = 0x2be;
  }
  return uVar5;
}
```
