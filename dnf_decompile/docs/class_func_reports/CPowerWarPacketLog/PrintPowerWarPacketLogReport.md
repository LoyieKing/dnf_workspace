# PrintPowerWarPacketLogReport

`_ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv`

`CPowerWarPacketLog::PrintPowerWarPacketLogReport()`

| 类 | 地址 |
|---|---|
| `CPowerWarPacketLog` | `0x08480ac0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480ac0  _ZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEv
#           CPowerWarPacketLog::PrintPowerWarPacketLogReport()
# range [0x08480ac0, 0x08480d97]
08480ac0 +0x000:  push   %ebp
08480ac1 +0x001:  mov    %esp,%ebp
08480ac3 +0x003:  push   %edi
08480ac4 +0x004:  push   %esi
08480ac5 +0x005:  push   %ebx
08480ac6 +0x006:  sub    $0xbc,%esp
08480acc +0x00c:  movl   $0x0,0xc(%esp)
08480ad4 +0x014:  movl   $0x3a1,0x8(%esp)
08480adc +0x01c:  movl   $&_ZZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480ae4 +0x024:  lea    -0x7c(%ebp),%eax
08480ae7 +0x027:  mov    %eax,(%esp)
08480aea +0x02a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480aef +0x02f:  movl   $"-------------------------------------------------------------------------------------------------------------",0x4(%esp)
08480af7 +0x037:  lea    -0x7c(%ebp),%eax
08480afa +0x03a:  mov    %eax,(%esp)
08480afd +0x03d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480b02 +0x042:  movl   $0x0,0xc(%esp)
08480b0a +0x04a:  movl   $0x3a2,0x8(%esp)
08480b12 +0x052:  movl   $&_ZZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480b1a +0x05a:  lea    -0x6c(%ebp),%eax
08480b1d +0x05d:  mov    %eax,(%esp)
08480b20 +0x060:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480b25 +0x065:  movl   $"|                                   POWAR WAR PACKET RESULT REPORT                                          |",0x4(%esp)
08480b2d +0x06d:  lea    -0x6c(%ebp),%eax
08480b30 +0x070:  mov    %eax,(%esp)
08480b33 +0x073:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480b38 +0x078:  movl   $0x0,0xc(%esp)
08480b40 +0x080:  movl   $0x3a3,0x8(%esp)
08480b48 +0x088:  movl   $&_ZZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480b50 +0x090:  lea    -0x5c(%ebp),%eax
08480b53 +0x093:  mov    %eax,(%esp)
08480b56 +0x096:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480b5b +0x09b:  movl   $"-------------------------------------------------------------------------------------------------------------",0x4(%esp)
08480b63 +0x0a3:  lea    -0x5c(%ebp),%eax
08480b66 +0x0a6:  mov    %eax,(%esp)
08480b69 +0x0a9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480b6e +0x0ae:  lea    -0x88(%ebp),%eax
08480b74 +0x0b4:  mov    %eax,(%esp)
08480b77 +0x0b7:  call   084812fa <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x378>  ; global constructors keyed to CPowerManager::CPowerManager()+0x378
08480b7c +0x0bc:  mov    0x8(%ebp),%edx
08480b7f +0x0bf:  lea    -0x90(%ebp),%eax
08480b85 +0x0c5:  mov    %edx,0x4(%esp)
08480b89 +0x0c9:  mov    %eax,(%esp)
08480b8c +0x0cc:  call   08481190 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x20e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x20e
08480b91 +0x0d1:  sub    $0x4,%esp
08480b94 +0x0d4:  jmp    08480bc7 <+0x107>
08480b96 +0x0d6:  lea    -0x90(%ebp),%eax
08480b9c +0x0dc:  mov    %eax,(%esp)
08480b9f +0x0df:  call   084811f0 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x26e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x26e
08480ba4 +0x0e4:  add    $0x4,%eax
08480ba7 +0x0e7:  mov    %eax,0x4(%esp)
08480bab +0x0eb:  lea    -0x88(%ebp),%eax
08480bb1 +0x0f1:  mov    %eax,(%esp)
08480bb4 +0x0f4:  call   0848136c <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x3ea>  ; global constructors keyed to CPowerManager::CPowerManager()+0x3ea
08480bb9 +0x0f9:  lea    -0x90(%ebp),%eax
08480bbf +0x0ff:  mov    %eax,(%esp)
08480bc2 +0x102:  call   084811fe <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x27c>  ; global constructors keyed to CPowerManager::CPowerManager()+0x27c
08480bc7 +0x107:  mov    0x8(%ebp),%edx
08480bca +0x10a:  lea    -0x4c(%ebp),%eax
08480bcd +0x10d:  mov    %edx,0x4(%esp)
08480bd1 +0x111:  mov    %eax,(%esp)
08480bd4 +0x114:  call   084811b6 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x234>  ; global constructors keyed to CPowerManager::CPowerManager()+0x234
08480bd9 +0x119:  sub    $0x4,%esp
08480bdc +0x11c:  lea    -0x4c(%ebp),%eax
08480bdf +0x11f:  mov    %eax,0x4(%esp)
08480be3 +0x123:  lea    -0x90(%ebp),%eax
08480be9 +0x129:  mov    %eax,(%esp)
08480bec +0x12c:  call   084811dc <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x25a>  ; global constructors keyed to CPowerManager::CPowerManager()+0x25a
08480bf1 +0x131:  test   %al,%al
08480bf3 +0x133:  jne    08480b96 <+0xd6>
08480bf5 +0x135:  lea    -0x48(%ebp),%eax
08480bf8 +0x138:  lea    -0x88(%ebp),%edx
08480bfe +0x13e:  mov    %edx,0x4(%esp)
08480c02 +0x142:  mov    %eax,(%esp)
08480c05 +0x145:  call   08481404 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x482>  ; global constructors keyed to CPowerManager::CPowerManager()+0x482
08480c0a +0x14a:  sub    $0x4,%esp
08480c0d +0x14d:  lea    -0x44(%ebp),%eax
08480c10 +0x150:  lea    -0x88(%ebp),%edx
08480c16 +0x156:  mov    %edx,0x4(%esp)
08480c1a +0x15a:  mov    %eax,(%esp)
08480c1d +0x15d:  call   084813e0 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x45e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x45e
08480c22 +0x162:  sub    $0x4,%esp
08480c25 +0x165:  movl   $&_ZN11STPacketLog7CompareEPKS_S1_,0x8(%esp)
08480c2d +0x16d:  mov    -0x48(%ebp),%eax
08480c30 +0x170:  mov    %eax,0x4(%esp)
08480c34 +0x174:  mov    -0x44(%ebp),%eax
08480c37 +0x177:  mov    %eax,(%esp)
08480c3a +0x17a:  call   0848142a <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x4a8>  ; global constructors keyed to CPowerManager::CPowerManager()+0x4a8
08480c3f +0x17f:  lea    -0x8c(%ebp),%eax
08480c45 +0x185:  lea    -0x88(%ebp),%edx
08480c4b +0x18b:  mov    %edx,0x4(%esp)
08480c4f +0x18f:  mov    %eax,(%esp)
08480c52 +0x192:  call   084813e0 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x45e>  ; global constructors keyed to CPowerManager::CPowerManager()+0x45e
08480c57 +0x197:  sub    $0x4,%esp
08480c5a +0x19a:  jmp    08480cf4 <+0x234>
08480c5f +0x19f:  lea    -0x8c(%ebp),%eax
08480c65 +0x1a5:  mov    %eax,(%esp)
08480c68 +0x1a8:  call   084814c8 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x546>  ; global constructors keyed to CPowerManager::CPowerManager()+0x546
08480c6d +0x1ad:  mov    (%eax),%eax
08480c6f +0x1af:  mov    %eax,-0x1c(%ebp)
08480c72 +0x1b2:  mov    -0x1c(%ebp),%eax
08480c75 +0x1b5:  add    $0x10,%eax
08480c78 +0x1b8:  mov    %eax,(%esp)
08480c7b +0x1bb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08480c80 +0x1c0:  mov    %eax,%ebx
08480c82 +0x1c2:  mov    -0x1c(%ebp),%eax
08480c85 +0x1c5:  mov    0xc(%eax),%eax
08480c88 +0x1c8:  mov    %eax,-0x9c(%ebp)
08480c8e +0x1ce:  mov    -0x1c(%ebp),%eax
08480c91 +0x1d1:  mov    0x8(%eax),%edi
08480c94 +0x1d4:  mov    -0x1c(%ebp),%eax
08480c97 +0x1d7:  mov    0x4(%eax),%esi
08480c9a +0x1da:  movl   $0x0,0xc(%esp)
08480ca2 +0x1e2:  movl   $0x3b1,0x8(%esp)
08480caa +0x1ea:  movl   $&_ZZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480cb2 +0x1f2:  lea    -0x3c(%ebp),%eax
08480cb5 +0x1f5:  mov    %eax,(%esp)
08480cb8 +0x1f8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480cbd +0x1fd:  mov    %ebx,0x14(%esp)
08480cc1 +0x201:  mov    -0x9c(%ebp),%eax
08480cc7 +0x207:  mov    %eax,0x10(%esp)
08480ccb +0x20b:  mov    %edi,0xc(%esp)
08480ccf +0x20f:  mov    %esi,0x8(%esp)
08480cd3 +0x213:  movl   $"- PACKET CLASS:%d NO:%5d, COUNT:%8d, NAME:%s",0x4(%esp)
08480cdb +0x21b:  lea    -0x3c(%ebp),%eax
08480cde +0x21e:  mov    %eax,(%esp)
08480ce1 +0x221:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480ce6 +0x226:  lea    -0x8c(%ebp),%eax
08480cec +0x22c:  mov    %eax,(%esp)
08480cef +0x22f:  call   084814d2 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x550>  ; global constructors keyed to CPowerManager::CPowerManager()+0x550
08480cf4 +0x234:  lea    -0x40(%ebp),%eax
08480cf7 +0x237:  lea    -0x88(%ebp),%edx
08480cfd +0x23d:  mov    %edx,0x4(%esp)
08480d01 +0x241:  mov    %eax,(%esp)
08480d04 +0x244:  call   08481404 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x482>  ; global constructors keyed to CPowerManager::CPowerManager()+0x482
08480d09 +0x249:  sub    $0x4,%esp
08480d0c +0x24c:  lea    -0x40(%ebp),%eax
08480d0f +0x24f:  mov    %eax,0x4(%esp)
08480d13 +0x253:  lea    -0x8c(%ebp),%eax
08480d19 +0x259:  mov    %eax,(%esp)
08480d1c +0x25c:  call   0848149b <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x519>  ; global constructors keyed to CPowerManager::CPowerManager()+0x519
08480d21 +0x261:  test   %al,%al
08480d23 +0x263:  jne    08480c5f <+0x19f>
08480d29 +0x269:  movl   $0x0,0xc(%esp)
08480d31 +0x271:  movl   $0x3b6,0x8(%esp)
08480d39 +0x279:  movl   $&_ZZN18CPowerWarPacketLog28PrintPowerWarPacketLogReportEvE19__PRETTY_FUNCTION__,0x4(%esp)
08480d41 +0x281:  lea    -0x2c(%ebp),%eax
08480d44 +0x284:  mov    %eax,(%esp)
08480d47 +0x287:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08480d4c +0x28c:  movl   $"-------------------------------------------------------------------------------------------------------------",0x4(%esp)
08480d54 +0x294:  lea    -0x2c(%ebp),%eax
08480d57 +0x297:  mov    %eax,(%esp)
08480d5a +0x29a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08480d5f +0x29f:  jmp    08480d7f <+0x2bf>
08480d61 +0x2a1:  mov    %edx,%ebx
08480d63 +0x2a3:  mov    %eax,%esi
08480d65 +0x2a5:  lea    -0x88(%ebp),%eax
08480d6b +0x2ab:  mov    %eax,(%esp)
08480d6e +0x2ae:  call   0848130e <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x38c>  ; global constructors keyed to CPowerManager::CPowerManager()+0x38c
08480d73 +0x2b3:  mov    %esi,%eax
08480d75 +0x2b5:  mov    %ebx,%edx
08480d77 +0x2b7:  mov    %eax,(%esp)
08480d7a +0x2ba:  call   08ae3750 <_Unwind_Resume>
08480d7f +0x2bf:  lea    -0x88(%ebp),%eax
08480d85 +0x2c5:  mov    %eax,(%esp)
08480d88 +0x2c8:  call   0848130e <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x38c>  ; global constructors keyed to CPowerManager::CPowerManager()+0x38c
08480d8d +0x2cd:  lea    -0xc(%ebp),%esp
08480d90 +0x2d0:  add    $0x0,%esp
08480d93 +0x2d3:  pop    %ebx
08480d94 +0x2d4:  pop    %esi
08480d95 +0x2d5:  pop    %edi
08480d96 +0x2d6:  pop    %ebp
08480d97 +0x2d7:  ret
```

## 反编译 C

```c
// CPowerWarPacketLog::PrintPowerWarPacketLogReport @ 0x8480ac0

/* CPowerWarPacketLog::PrintPowerWarPacketLogReport() */

void CPowerWarPacketLog::PrintPowerWarPacketLogReport(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_94 [4];
  __normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>
  local_90 [4];
  vector<STPacketLog*,std::allocator<STPacketLog*>> local_8c [12];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>
  local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  __normal_iterator local_44 [4];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  cMyTrace::cMyTrace(local_80,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3a1,0);
  cMyTrace::operator()
            (local_80,
             "-------------------------------------------------------------------------------------------------------------"
            );
  cMyTrace::cMyTrace(local_70,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3a2,0);
  cMyTrace::operator()
            (local_70,
             "|                                   POWAR WAR PACKET RESULT REPORT                                          |"
            );
  cMyTrace::cMyTrace(local_60,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3a3,0);
  cMyTrace::operator()
            (local_60,
             "-------------------------------------------------------------------------------------------------------------"
            );
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::vector(local_8c);
                    /* try { // try from 08480b8c to 08480d5e has its CatchHandler @ 08480d61 */
  std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::begin
            (local_94);
  while( true ) {
    std::map<int,STPacketLog*,std::less<int>,std::allocator<std::pair<int_const,STPacketLog*>>>::end
              (local_50);
    cVar4 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_94,
                       (_Rb_tree_iterator *)local_50);
    if (cVar4 == '\0') break;
    iVar6 = std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_94);
    std::vector<STPacketLog*,std::allocator<STPacketLog*>>::push_back
              (local_8c,(STPacketLog **)(iVar6 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,STPacketLog*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STPacketLog*>> *)local_94);
  }
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::end();
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::begin();
  std::
  sort<__gnu_cxx::__normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>,bool(*)(STPacketLog_const*,STPacketLog_const*)>
            (local_48,local_4c,STPacketLog::Compare);
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::begin();
  while( true ) {
    std::vector<STPacketLog*,std::allocator<STPacketLog*>>::end();
    bVar5 = __gnu_cxx::operator!=(local_90,local_44);
    if (!bVar5) break;
    piVar7 = (int *)__gnu_cxx::
                    __normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>
                    ::operator*(local_90);
    local_20 = *piVar7;
    uVar8 = std::string::c_str((string *)(local_20 + 0x10));
    uVar1 = *(undefined4 *)(local_20 + 0xc);
    uVar2 = *(undefined4 *)(local_20 + 8);
    uVar3 = *(undefined4 *)(local_20 + 4);
    cMyTrace::cMyTrace(local_40,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3b1,0);
    cMyTrace::operator()
              (local_40,"- PACKET CLASS:%d NO:%5d, COUNT:%8d, NAME:%s",uVar3,uVar2,uVar1,uVar8);
    __gnu_cxx::
    __normal_iterator<STPacketLog**,std::vector<STPacketLog*,std::allocator<STPacketLog*>>>::
    operator++(local_90);
  }
  cMyTrace::cMyTrace(local_30,"void CPowerWarPacketLog::PrintPowerWarPacketLogReport()",0x3b6,0);
  cMyTrace::operator()
            (local_30,
             "-------------------------------------------------------------------------------------------------------------"
            );
  std::vector<STPacketLog*,std::allocator<STPacketLog*>>::~vector(local_8c);
  return;
}
```
