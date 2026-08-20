# dailyresetData

`_ZN10BingoEvent14dailyresetDataEv`

`BingoEvent::dailyresetData()`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9d82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9d82  _ZN10BingoEvent14dailyresetDataEv
#           BingoEvent::dailyresetData()
# range [0x080c9d82, 0x080c9fe9]
080c9d82 +0x000:  push   %ebp
080c9d83 +0x001:  mov    %esp,%ebp
080c9d85 +0x003:  push   %ebx
080c9d86 +0x004:  sub    $0x54,%esp
080c9d89 +0x007:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080c9d8e +0x00c:  mov    0x37c(%eax),%eax
080c9d94 +0x012:  mov    %eax,-0x28(%ebp)
080c9d97 +0x015:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
080c9d9e +0x01c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
080c9da3 +0x021:  mov    %eax,-0x24(%ebp)
080c9da6 +0x024:  mov    0x8(%ebp),%eax
080c9da9 +0x027:  add    $0xc,%eax
080c9dac +0x02a:  mov    %eax,(%esp)
080c9daf +0x02d:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080c9db4 +0x032:  mov    -0x28(%ebp),%edx
080c9db7 +0x035:  mov    %edx,0x8(%esp)
080c9dbb +0x039:  mov    -0x24(%ebp),%edx
080c9dbe +0x03c:  mov    %edx,0x4(%esp)
080c9dc2 +0x040:  mov    %eax,(%esp)
080c9dc5 +0x043:  call   080ca942 <_ZN6CBingo8getTodayEli>  ; CBingo::getToday(long, int)
080c9dca +0x048:  mov    %eax,-0x20(%ebp)
080c9dcd +0x04b:  cmpl   $0x0,-0x20(%ebp)
080c9dd1 +0x04f:  jle    080c9e50 <+0xce>
080c9dd3 +0x051:  cmpl   $0x1f,-0x20(%ebp)
080c9dd7 +0x055:  jg     080c9e50 <+0xce>
080c9dd9 +0x057:  mov    0x8(%ebp),%eax
080c9ddc +0x05a:  add    $0xc,%eax
080c9ddf +0x05d:  mov    %eax,(%esp)
080c9de2 +0x060:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080c9de7 +0x065:  mov    -0x20(%ebp),%edx
080c9dea +0x068:  mov    %edx,0x4(%esp)
080c9dee +0x06c:  mov    %eax,(%esp)
080c9df1 +0x06f:  call   080ca9b8 <_ZN6CBingo10resetBoardEi>  ; CBingo::resetBoard(int)
080c9df6 +0x074:  mov    0x8(%ebp),%eax
080c9df9 +0x077:  add    $0xc,%eax
080c9dfc +0x07a:  mov    %eax,(%esp)
080c9dff +0x07d:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080c9e04 +0x082:  mov    -0x20(%ebp),%edx
080c9e07 +0x085:  mov    %edx,0x4(%esp)
080c9e0b +0x089:  mov    %eax,(%esp)
080c9e0e +0x08c:  call   080caa64 <_ZN6CBingo9resetQuizEi>  ; CBingo::resetQuiz(int)
080c9e13 +0x091:  movl   $0x0,0xc(%esp)
080c9e1b +0x099:  movl   $0x50,0x8(%esp)
080c9e23 +0x0a1:  movl   $&_ZZN10BingoEvent14dailyresetDataEvE19__PRETTY_FUNCTION__,0x4(%esp)
080c9e2b +0x0a9:  lea    -0x44(%ebp),%eax
080c9e2e +0x0ac:  mov    %eax,(%esp)
080c9e31 +0x0af:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080c9e36 +0x0b4:  mov    -0x20(%ebp),%eax
080c9e39 +0x0b7:  mov    %eax,0x8(%esp)
080c9e3d +0x0bb:  movl   $"BingoEvent Day(%d)",0x4(%esp)
080c9e45 +0x0c3:  lea    -0x44(%ebp),%eax
080c9e48 +0x0c6:  mov    %eax,(%esp)
080c9e4b +0x0c9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080c9e50 +0x0ce:  mov    $0x0,%ebx
080c9e55 +0x0d3:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
080c9e5a +0x0d8:  lea    0x22c(%eax),%edx
080c9e60 +0x0de:  lea    -0x34(%ebp),%eax
080c9e63 +0x0e1:  mov    %ebx,0x8(%esp)
080c9e67 +0x0e5:  mov    %edx,0x4(%esp)
080c9e6b +0x0e9:  mov    %eax,(%esp)
080c9e6e +0x0ec:  call   080ce770 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35bd>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35bd
080c9e73 +0x0f1:  sub    $0x4,%esp
080c9e76 +0x0f4:  lea    -0x34(%ebp),%eax
080c9e79 +0x0f7:  mov    %eax,-0x1c(%ebp)
080c9e7c +0x0fa:  mov    -0x1c(%ebp),%eax
080c9e7f +0x0fd:  mov    %eax,(%esp)
080c9e82 +0x100:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
080c9e87 +0x105:  test   %al,%al
080c9e89 +0x107:  jne    080c9fe4 <+0x262>
080c9e8f +0x10d:  mov    $0x0,%edx
080c9e94 +0x112:  lea    -0x30(%ebp),%eax
080c9e97 +0x115:  mov    %edx,0xc(%esp)
080c9e9b +0x119:  movl   $0x0,0x8(%esp)
080c9ea3 +0x121:  mov    -0x1c(%ebp),%edx
080c9ea6 +0x124:  mov    %edx,0x4(%esp)
080c9eaa +0x128:  mov    %eax,(%esp)
080c9ead +0x12b:  call   080ce7a1 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35ee>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35ee
080c9eb2 +0x130:  sub    $0x4,%esp
080c9eb5 +0x133:  lea    -0x30(%ebp),%eax
080c9eb8 +0x136:  mov    %eax,-0x18(%ebp)
080c9ebb +0x139:  mov    -0x18(%ebp),%eax
080c9ebe +0x13c:  mov    %eax,(%esp)
080c9ec1 +0x13f:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
080c9ec6 +0x144:  test   %al,%al
080c9ec8 +0x146:  jne    080c9fe4 <+0x262>
080c9ece +0x14c:  mov    $0x0,%edx
080c9ed3 +0x151:  lea    -0x2c(%ebp),%eax
080c9ed6 +0x154:  mov    %edx,0xc(%esp)
080c9eda +0x158:  movl   $0x0,0x8(%esp)
080c9ee2 +0x160:  mov    -0x1c(%ebp),%edx
080c9ee5 +0x163:  mov    %edx,0x4(%esp)
080c9ee9 +0x167:  mov    %eax,(%esp)
080c9eec +0x16a:  call   080ce7ea <_GLOBAL__I__ZN10BingoEventC2Ev+0x3637>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3637
080c9ef1 +0x16f:  sub    $0x4,%esp
080c9ef4 +0x172:  lea    -0x2c(%ebp),%eax
080c9ef7 +0x175:  mov    %eax,-0x14(%ebp)
080c9efa +0x178:  mov    -0x14(%ebp),%eax
080c9efd +0x17b:  mov    %eax,(%esp)
080c9f00 +0x17e:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
080c9f05 +0x183:  test   %al,%al
080c9f07 +0x185:  jne    080c9fe4 <+0x262>
080c9f0d +0x18b:  movb   $0x1,-0x45(%ebp)
080c9f11 +0x18f:  jmp    080c9fa7 <+0x225>
080c9f16 +0x194:  lea    -0x45(%ebp),%eax
080c9f19 +0x197:  mov    %eax,(%esp)
080c9f1c +0x19a:  call   080ccf24 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d71>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d71
080c9f21 +0x19f:  test   %al,%al
080c9f23 +0x1a1:  jne    080c9f8c <+0x20a>
080c9f25 +0x1a3:  movl   $0x0,0x4(%esp)
080c9f2d +0x1ab:  mov    -0x18(%ebp),%eax
080c9f30 +0x1ae:  mov    %eax,(%esp)
080c9f33 +0x1b1:  call   080ce87f <_GLOBAL__I__ZN10BingoEventC2Ev+0x36cc>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36cc
080c9f38 +0x1b6:  mov    %eax,-0x10(%ebp)
080c9f3b +0x1b9:  jmp    080c9f81 <+0x1ff>
080c9f3d +0x1bb:  mov    -0x10(%ebp),%eax
080c9f40 +0x1be:  mov    0x4(%eax),%eax
080c9f43 +0x1c1:  mov    %eax,-0xc(%ebp)
080c9f46 +0x1c4:  cmpl   $0x0,-0xc(%ebp)
080c9f4a +0x1c8:  je     080c9f7d <+0x1fb>
080c9f4c +0x1ca:  mov    -0xc(%ebp),%eax
080c9f4f +0x1cd:  mov    %eax,(%esp)
080c9f52 +0x1d0:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080c9f57 +0x1d5:  mov    %eax,(%esp)
080c9f5a +0x1d8:  call   080cbc6c <_GLOBAL__I__ZN10BingoEventC2Ev+0xab9>  ; global constructors keyed to BingoEvent::BingoEvent()+0xab9
080c9f5f +0x1dd:  mov    -0xc(%ebp),%eax
080c9f62 +0x1e0:  mov    %eax,(%esp)
080c9f65 +0x1e3:  call   0869134e <_ZN5CUser13sendBingoDataEv>  ; CUser::sendBingoData()
080c9f6a +0x1e8:  movl   $0x0,0x4(%esp)
080c9f72 +0x1f0:  mov    -0xc(%ebp),%eax
080c9f75 +0x1f3:  mov    %eax,(%esp)
080c9f78 +0x1f6:  call   08690d9a <_ZN5CUser23sendDecorationObjectCntEs>  ; CUser::sendDecorationObjectCnt(short)
080c9f7d +0x1fb:  movb   $0x1,-0x45(%ebp)
080c9f81 +0x1ff:  movzbl -0x45(%ebp),%eax
080c9f85 +0x203:  xor    $0x1,%eax
080c9f88 +0x206:  test   %al,%al
080c9f8a +0x208:  jne    080c9f3d <+0x1bb>
080c9f8c +0x20a:  movzbl -0x45(%ebp),%eax
080c9f90 +0x20e:  test   %al,%al
080c9f92 +0x210:  je     080c9fa7 <+0x225>
080c9f94 +0x212:  movl   $0x0,0x4(%esp)
080c9f9c +0x21a:  mov    -0x18(%ebp),%eax
080c9f9f +0x21d:  mov    %eax,(%esp)
080c9fa2 +0x220:  call   080ce864 <_GLOBAL__I__ZN10BingoEventC2Ev+0x36b1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36b1
080c9fa7 +0x225:  movzbl -0x45(%ebp),%eax
080c9fab +0x229:  test   %al,%al
080c9fad +0x22b:  je     080c9fd7 <+0x255>
080c9faf +0x22d:  movl   $0x0,0x8(%esp)
080c9fb7 +0x235:  mov    -0x14(%ebp),%eax
080c9fba +0x238:  mov    %eax,0x4(%esp)
080c9fbe +0x23c:  mov    -0x18(%ebp),%eax
080c9fc1 +0x23f:  mov    %eax,(%esp)
080c9fc4 +0x242:  call   080ce833 <_GLOBAL__I__ZN10BingoEventC2Ev+0x3680>  ; global constructors keyed to BingoEvent::BingoEvent()+0x3680
080c9fc9 +0x247:  xor    $0x1,%eax
080c9fcc +0x24a:  test   %al,%al
080c9fce +0x24c:  je     080c9fd7 <+0x255>
080c9fd0 +0x24e:  mov    $0x1,%eax
080c9fd5 +0x253:  jmp    080c9fdc <+0x25a>
080c9fd7 +0x255:  mov    $0x0,%eax
080c9fdc +0x25a:  test   %al,%al
080c9fde +0x25c:  jne    080c9f16 <+0x194>
080c9fe4 +0x262:  mov    -0x4(%ebp),%ebx
080c9fe7 +0x265:  leave
080c9fe8 +0x266:  ret
080c9fe9 +0x267:  nop
```

## 反编译 C

```c
// BingoEvent::dailyresetData @ 0x80c9d82

/* BingoEvent::dailyresetData() */

void __thiscall BingoEvent::dailyresetData(BingoEvent *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CBingo *pCVar4;
  BingoData *this_00;
  bool local_49;
  cMyTrace local_48 [16];
  map local_38 [4];
  auto_any_base local_34 [4];
  auto_any_base local_30 [4];
  int local_2c;
  long local_28;
  int local_24;
  type2type *local_20;
  auto_any_base *local_1c;
  auto_any_base *local_18;
  int local_14;
  CUser *local_10;
  
  iVar3 = G_CEnvironment();
  local_2c = *(int *)(iVar3 + 0x37c);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pCVar4 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
  local_24 = CBingo::getToday(pCVar4,local_28,local_2c);
  if ((0 < local_24) && (local_24 < 0x20)) {
    pCVar4 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetBoard(pCVar4,local_24);
    pCVar4 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    CBingo::resetQuiz(pCVar4,local_24);
    cMyTrace::cMyTrace(local_48,"virtual void BingoEvent::dailyresetData()",0x50,0);
    cMyTrace::operator()(local_48,"BingoEvent Day(%d)",local_24);
  }
  iVar3 = G_CGameManager();
  boost::foreach_detail_::
  contain<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>>
            (local_38,(bool_ *)(iVar3 + 0x22c));
  local_20 = (type2type *)local_38;
  bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool((auto_any_base *)local_20);
  if (!bVar1) {
    boost::foreach_detail_::
    begin<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
              (local_34,local_20,(bool_ *)0x0);
    local_1c = local_34;
    bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_1c);
    if (!bVar1) {
      boost::foreach_detail_::
      end<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                (local_30,local_20,(bool_ *)0x0);
      local_18 = local_30;
      bVar1 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
      if (!bVar1) {
        local_49 = true;
LAB_080c9fa7:
        if (local_49 == false) {
LAB_080c9fd7:
          bVar1 = false;
        }
        else {
          bVar1 = boost::foreach_detail_::
                  done<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                            (local_1c,local_18,(type2type *)0x0);
          if (bVar1) goto LAB_080c9fd7;
          bVar1 = true;
        }
        if (bVar1) {
          cVar2 = boost::foreach_detail_::set_false(&local_49);
          if (cVar2 == '\0') {
            local_14 = boost::foreach_detail_::
                       deref<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                                 (local_1c,(type2type *)0x0);
            while (local_49 != true) {
              local_10 = *(CUser **)(local_14 + 4);
              if (local_10 != (CUser *)0x0) {
                this_00 = (BingoData *)CUser::getBingoData(local_10);
                BingoData::clear(this_00);
                CUser::sendBingoData(local_10);
                CUser::sendDecorationObjectCnt(local_10,0);
              }
              local_49 = true;
            }
          }
          if (local_49 != false) {
            boost::foreach_detail_::
            next<std::map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>,mpl_::bool_<false>>
                      (local_1c,(type2type *)0x0);
          }
          goto LAB_080c9fa7;
        }
      }
    }
  }
  return;
}
```
