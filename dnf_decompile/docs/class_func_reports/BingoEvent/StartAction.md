# StartAction

`_ZN10BingoEvent11StartActionEv`

`BingoEvent::StartAction()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9bb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9bb8  _ZN10BingoEvent11StartActionEv
#           BingoEvent::StartAction()
# range [0x080c9bb8, 0x080c9d2f]
080c9bb8 +0x000:  push   %ebp
080c9bb9 +0x001:  mov    %esp,%ebp
080c9bbb +0x003:  push   %ebx
080c9bbc +0x004:  sub    $0x44,%esp
080c9bbf +0x007:  mov    $0x0,%ebx
080c9bc4 +0x00c:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
080c9bc9 +0x011:  lea    0x22c(%eax),%edx
080c9bcf +0x017:  lea    -0x28(%ebp),%eax
080c9bd2 +0x01a:  mov    %ebx,0x8(%esp)
080c9bd6 +0x01e:  mov    %edx,0x4(%esp)
080c9bda +0x022:  mov    %eax,(%esp)
080c9bdd +0x025:  call   080ce770 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35bd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35bd
080c9be2 +0x02a:  sub    $0x4,%esp
080c9be5 +0x02d:  lea    -0x28(%ebp),%eax
080c9be8 +0x030:  mov    %eax,-0x1c(%ebp)
080c9beb +0x033:  mov    -0x1c(%ebp),%eax
080c9bee +0x036:  mov    %eax,(%esp)
080c9bf1 +0x039:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
080c9bf6 +0x03e:  test   %al,%al
080c9bf8 +0x040:  jne    080c9d2a <+0x172>
080c9bfe +0x046:  mov    $0x0,%edx
080c9c03 +0x04b:  lea    -0x24(%ebp),%eax
080c9c06 +0x04e:  mov    %edx,0xc(%esp)
080c9c0a +0x052:  movl   $0x0,0x8(%esp)
080c9c12 +0x05a:  mov    -0x1c(%ebp),%edx
080c9c15 +0x05d:  mov    %edx,0x4(%esp)
080c9c19 +0x061:  mov    %eax,(%esp)
080c9c1c +0x064:  call   080ce7a1 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35ee>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35ee
080c9c21 +0x069:  sub    $0x4,%esp
080c9c24 +0x06c:  lea    -0x24(%ebp),%eax
080c9c27 +0x06f:  mov    %eax,-0x18(%ebp)
080c9c2a +0x072:  mov    -0x18(%ebp),%eax
080c9c2d +0x075:  mov    %eax,(%esp)
080c9c30 +0x078:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
080c9c35 +0x07d:  test   %al,%al
080c9c37 +0x07f:  jne    080c9d2a <+0x172>
080c9c3d +0x085:  mov    $0x0,%edx
080c9c42 +0x08a:  lea    -0x20(%ebp),%eax
080c9c45 +0x08d:  mov    %edx,0xc(%esp)
080c9c49 +0x091:  movl   $0x0,0x8(%esp)
080c9c51 +0x099:  mov    -0x1c(%ebp),%edx
080c9c54 +0x09c:  mov    %edx,0x4(%esp)
080c9c58 +0x0a0:  mov    %eax,(%esp)
080c9c5b +0x0a3:  call   080ce7ea <_GLOBAL__I__ZN10BingoEventC2Ev+0x3637>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3637
080c9c60 +0x0a8:  sub    $0x4,%esp
080c9c63 +0x0ab:  lea    -0x20(%ebp),%eax
080c9c66 +0x0ae:  mov    %eax,-0x14(%ebp)
080c9c69 +0x0b1:  mov    -0x14(%ebp),%eax
080c9c6c +0x0b4:  mov    %eax,(%esp)
080c9c6f +0x0b7:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
080c9c74 +0x0bc:  test   %al,%al
080c9c76 +0x0be:  jne    080c9d2a <+0x172>
080c9c7c +0x0c4:  movb   $0x1,-0x29(%ebp)
080c9c80 +0x0c8:  jmp    080c9ced <+0x135>
080c9c82 +0x0ca:  lea    -0x29(%ebp),%eax
080c9c85 +0x0cd:  mov    %eax,(%esp)
080c9c88 +0x0d0:  call   080ccf24 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d71>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d71
080c9c8d +0x0d5:  test   %al,%al
080c9c8f +0x0d7:  jne    080c9cd2 <+0x11a>
080c9c91 +0x0d9:  movl   $0x0,0x4(%esp)
080c9c99 +0x0e1:  mov    -0x18(%ebp),%eax
080c9c9c +0x0e4:  mov    %eax,(%esp)
080c9c9f +0x0e7:  call   080ce87f <_GLOBAL__I__ZN10BingoEventC2Ev+0x36cc>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36cc
080c9ca4 +0x0ec:  mov    %eax,-0x10(%ebp)
080c9ca7 +0x0ef:  jmp    080c9cc7 <+0x10f>
080c9ca9 +0x0f1:  mov    -0x10(%ebp),%eax
080c9cac +0x0f4:  mov    0x4(%eax),%eax
080c9caf +0x0f7:  mov    %eax,-0xc(%ebp)
080c9cb2 +0x0fa:  cmpl   $0x0,-0xc(%ebp)
080c9cb6 +0x0fe:  je     080c9cc3 <+0x10b>
080c9cb8 +0x100:  mov    -0xc(%ebp),%eax
080c9cbb +0x103:  mov    %eax,(%esp)
080c9cbe +0x106:  call   0869134e <_ZN5CUser13sendBingoDataEv>  ; CUser::sendBingoData()
080c9cc3 +0x10b:  movb   $0x1,-0x29(%ebp)
080c9cc7 +0x10f:  movzbl -0x29(%ebp),%eax
080c9ccb +0x113:  xor    $0x1,%eax
080c9cce +0x116:  test   %al,%al
080c9cd0 +0x118:  jne    080c9ca9 <+0xf1>
080c9cd2 +0x11a:  movzbl -0x29(%ebp),%eax
080c9cd6 +0x11e:  test   %al,%al
080c9cd8 +0x120:  je     080c9ced <+0x135>
080c9cda +0x122:  movl   $0x0,0x4(%esp)
080c9ce2 +0x12a:  mov    -0x18(%ebp),%eax
080c9ce5 +0x12d:  mov    %eax,(%esp)
080c9ce8 +0x130:  call   080ce864 <_GLOBAL__I__ZN10BingoEventC2Ev+0x36b1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36b1
080c9ced +0x135:  movzbl -0x29(%ebp),%eax
080c9cf1 +0x139:  test   %al,%al
080c9cf3 +0x13b:  je     080c9d1d <+0x165>
080c9cf5 +0x13d:  movl   $0x0,0x8(%esp)
080c9cfd +0x145:  mov    -0x14(%ebp),%eax
080c9d00 +0x148:  mov    %eax,0x4(%esp)
080c9d04 +0x14c:  mov    -0x18(%ebp),%eax
080c9d07 +0x14f:  mov    %eax,(%esp)
080c9d0a +0x152:  call   080ce833 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3680>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3680
080c9d0f +0x157:  xor    $0x1,%eax
080c9d12 +0x15a:  test   %al,%al
080c9d14 +0x15c:  je     080c9d1d <+0x165>
080c9d16 +0x15e:  mov    $0x1,%eax
080c9d1b +0x163:  jmp    080c9d22 <+0x16a>
080c9d1d +0x165:  mov    $0x0,%eax
080c9d22 +0x16a:  test   %al,%al
080c9d24 +0x16c:  jne    080c9c82 <+0xca>
080c9d2a +0x172:  mov    -0x4(%ebp),%ebx
080c9d2d +0x175:  leave
080c9d2e +0x176:  ret
080c9d2f +0x177:  nop
```

## 反编译 C

```c
// BingoEvent::StartAction @ 0x80c9bb8

/* BingoEvent::StartAction() */

void BingoEvent::StartAction(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  bool local_2d;
  map local_2c [4];
  auto_any_base local_28 [4];
  auto_any_base local_24 [4];
  type2type *local_20;
  auto_any_base *local_1c;
  auto_any_base *local_18;
  int local_14;
  CUser *local_10;
  
  iVar3 = G_CGameManager();
  boost::foreach_detail_::
  contain<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>>
            (local_2c,(bool_ *)(iVar3 + 0x22c));
  local_20 = (type2type *)local_2c;
  bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool((auto_any_base *)local_20);
  if (!bVar1) {
    boost::foreach_detail_::
    begin<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
              (local_28,local_20,(bool_ *)0x0);
    local_1c = local_28;
    bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_1c);
    if (!bVar1) {
      boost::foreach_detail_::
      end<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                (local_24,local_20,(bool_ *)0x0);
      local_18 = local_24;
      bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
      if (!bVar1) {
        local_2d = true;
LAB_080c9ced:
        if (local_2d == false) {
LAB_080c9d1d:
          bVar1 = false;
        }
        else {
          bVar1 = boost::foreach_detail_::
                  done<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                            (local_1c,local_18,(type2type *)0x0);
          if (bVar1) goto LAB_080c9d1d;
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = boost::foreach_detail_::set_false(&local_2d);
          if (cVar2 == '\0') {
            local_14 = boost::foreach_detail_::
                       deref<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                                 (local_1c,(type2type *)0x0);
            while (local_2d != true) {
              local_10 = *(CUser **)(local_14 + 4);
              if (local_10 != (CUser *)0x0) {
                CUser::sendBingoData(local_10);
              }
              local_2d = true;
            }
          }
          if (local_2d != false) {
            boost::foreach_detail_::
            next<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                      (local_1c,(type2type *)0x0);
          }
          goto LAB_080c9ced;
        }
      }
    }
  }
  return;
}
```
