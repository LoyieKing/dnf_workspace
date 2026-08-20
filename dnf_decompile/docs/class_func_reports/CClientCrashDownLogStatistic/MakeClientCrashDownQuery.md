# MakeClientCrashDownQuery

`_ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi`

`CClientCrashDownLogStatistic::MakeClientCrashDownQuery(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, int)`

| 类 | 地址 |
|---|---|
| `CClientCrashDownLogStatistic` | `0x0860d1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860d1fe  _ZN28CClientCrashDownLogStatistic24MakeClientCrashDownQueryERSt6vectorISsSaISsEEi
#           CClientCrashDownLogStatistic::MakeClientCrashDownQuery(std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >&, int)
# range [0x0860d1fe, 0x0860d443]
0860d1fe +0x000:  push   %ebp
0860d1ff +0x001:  mov    %esp,%ebp
0860d201 +0x003:  push   %edi
0860d202 +0x004:  push   %esi
0860d203 +0x005:  push   %ebx
0860d204 +0x006:  sub    $0x13c,%esp
0860d20a +0x00c:  lea    -0x20(%ebp),%eax
0860d20d +0x00f:  mov    %eax,(%esp)
0860d210 +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0860d215 +0x017:  movl   $0x0,-0x1c(%ebp)
0860d21c +0x01e:  jmp    0860d3f5 <+0x1f7>
0860d221 +0x023:  lea    -0x20(%ebp),%eax
0860d224 +0x026:  mov    %eax,(%esp)
0860d227 +0x029:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0860d22c +0x02e:  mov    0x8(%ebp),%eax
0860d22f +0x031:  lea    0x18(%eax),%edx
0860d232 +0x034:  mov    -0x1c(%ebp),%eax
0860d235 +0x037:  mov    %eax,0x4(%esp)
0860d239 +0x03b:  mov    %edx,(%esp)
0860d23c +0x03e:  call   086111b0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x122e>  ; global constructors keyed to Statistics::Statistics()+0x122e
0860d241 +0x043:  lea    0x4(%eax),%edx
0860d244 +0x046:  lea    -0x24(%ebp),%eax
0860d247 +0x049:  mov    %edx,0x4(%esp)
0860d24b +0x04d:  mov    %eax,(%esp)
0860d24e +0x050:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0860d253 +0x055:  sub    $0x4,%esp
0860d256 +0x058:  mov    0x8(%ebp),%eax
0860d259 +0x05b:  lea    0x18(%eax),%edx
0860d25c +0x05e:  mov    -0x1c(%ebp),%eax
0860d25f +0x061:  mov    %eax,0x4(%esp)
0860d263 +0x065:  mov    %edx,(%esp)
0860d266 +0x068:  call   086111b0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x122e>  ; global constructors keyed to Statistics::Statistics()+0x122e
0860d26b +0x06d:  lea    0x4(%eax),%edx
0860d26e +0x070:  lea    -0x28(%ebp),%eax
0860d271 +0x073:  mov    %edx,0x4(%esp)
0860d275 +0x077:  mov    %eax,(%esp)
0860d278 +0x07a:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860d27d +0x07f:  sub    $0x4,%esp
0860d280 +0x082:  jmp    0860d3b0 <+0x1b2>
0860d285 +0x087:  lea    -0x20(%ebp),%eax
0860d288 +0x08a:  mov    %eax,(%esp)
0860d28b +0x08d:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0860d290 +0x092:  mov    $0x6000,%edx
0860d295 +0x097:  mov    %edx,%ecx
0860d297 +0x099:  sub    %eax,%ecx
0860d299 +0x09b:  mov    %ecx,%eax
0860d29b +0x09d:  cmp    0x10(%ebp),%eax
0860d29e +0x0a0:  setge  %al
0860d2a1 +0x0a3:  test   %al,%al
0860d2a3 +0x0a5:  je     0860d3cc <+0x1ce>
0860d2a9 +0x0ab:  lea    -0x20(%ebp),%eax
0860d2ac +0x0ae:  mov    %eax,(%esp)
0860d2af +0x0b1:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0860d2b4 +0x0b6:  xor    $0x1,%eax
0860d2b7 +0x0b9:  test   %al,%al
0860d2b9 +0x0bb:  je     0860d2ce <+0xd0>
0860d2bb +0x0bd:  movl   $",",0x4(%esp)
0860d2c3 +0x0c5:  lea    -0x20(%ebp),%eax
0860d2c6 +0x0c8:  mov    %eax,(%esp)
0860d2c9 +0x0cb:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0860d2ce +0x0d0:  lea    -0x127(%ebp),%edx
0860d2d4 +0x0d6:  mov    $0xff,%ebx
0860d2d9 +0x0db:  mov    $0x0,%eax
0860d2de +0x0e0:  mov    %edx,%ecx
0860d2e0 +0x0e2:  and    $0x1,%ecx
0860d2e3 +0x0e5:  test   %ecx,%ecx
0860d2e5 +0x0e7:  je     0860d2ef <+0xf1>
0860d2e7 +0x0e9:  mov    %al,(%edx)
0860d2e9 +0x0eb:  add    $0x1,%edx
0860d2ec +0x0ee:  sub    $0x1,%ebx
0860d2ef +0x0f1:  mov    %edx,%ecx
0860d2f1 +0x0f3:  and    $0x2,%ecx
0860d2f4 +0x0f6:  test   %ecx,%ecx
0860d2f6 +0x0f8:  je     0860d301 <+0x103>
0860d2f8 +0x0fa:  mov    %ax,(%edx)
0860d2fb +0x0fd:  add    $0x2,%edx
0860d2fe +0x100:  sub    $0x2,%ebx
0860d301 +0x103:  mov    %ebx,%ecx
0860d303 +0x105:  shr    $0x2,%ecx
0860d306 +0x108:  mov    %edx,%edi
0860d308 +0x10a:  rep stos %eax,%es:(%edi)
0860d30a +0x10c:  mov    %edi,%edx
0860d30c +0x10e:  mov    %ebx,%ecx
0860d30e +0x110:  and    $0x2,%ecx
0860d311 +0x113:  test   %ecx,%ecx
0860d313 +0x115:  je     0860d31b <+0x11d>
0860d315 +0x117:  mov    %ax,(%edx)
0860d318 +0x11a:  add    $0x2,%edx
0860d31b +0x11d:  mov    %ebx,%ecx
0860d31d +0x11f:  and    $0x1,%ecx
0860d320 +0x122:  test   %ecx,%ecx
0860d322 +0x124:  je     0860d329 <+0x12b>
0860d324 +0x126:  mov    %al,(%edx)
0860d326 +0x128:  add    $0x1,%edx
0860d329 +0x12b:  lea    -0x24(%ebp),%eax
0860d32c +0x12e:  mov    %eax,(%esp)
0860d32f +0x131:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0860d334 +0x136:  mov    0x4(%eax),%edi
0860d337 +0x139:  lea    -0x24(%ebp),%eax
0860d33a +0x13c:  mov    %eax,(%esp)
0860d33d +0x13f:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0860d342 +0x144:  mov    (%eax),%esi
0860d344 +0x146:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0860d349 +0x14b:  mov    %eax,(%esp)
0860d34c +0x14e:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0860d351 +0x153:  mov    %eax,%ebx
0860d353 +0x155:  mov    0x8(%ebp),%eax
0860d356 +0x158:  lea    0x18(%eax),%edx
0860d359 +0x15b:  mov    -0x1c(%ebp),%eax
0860d35c +0x15e:  mov    %eax,0x4(%esp)
0860d360 +0x162:  mov    %edx,(%esp)
0860d363 +0x165:  call   086111b0 <_GLOBAL__I__ZN10StatisticsC2Ev+0x122e>  ; global constructors keyed to Statistics::Statistics()+0x122e
0860d368 +0x16a:  mov    (%eax),%eax
0860d36a +0x16c:  mov    %edi,0x14(%esp)
0860d36e +0x170:  mov    %esi,0x10(%esp)
0860d372 +0x174:  mov    %ebx,0xc(%esp)
0860d376 +0x178:  mov    %eax,0x8(%esp)
0860d37a +0x17c:  movl   $"(from_unixtime(%d),%d,%d,%d)",0x4(%esp)
0860d382 +0x184:  lea    -0x127(%ebp),%eax
0860d388 +0x18a:  mov    %eax,(%esp)
0860d38b +0x18d:  call   0807e440 <_init+0xd38>
0860d390 +0x192:  lea    -0x127(%ebp),%eax
0860d396 +0x198:  mov    %eax,0x4(%esp)
0860d39a +0x19c:  lea    -0x20(%ebp),%eax
0860d39d +0x19f:  mov    %eax,(%esp)
0860d3a0 +0x1a2:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0860d3a5 +0x1a7:  lea    -0x24(%ebp),%eax
0860d3a8 +0x1aa:  mov    %eax,(%esp)
0860d3ab +0x1ad:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0860d3b0 +0x1b2:  lea    -0x28(%ebp),%eax
0860d3b3 +0x1b5:  mov    %eax,0x4(%esp)
0860d3b7 +0x1b9:  lea    -0x24(%ebp),%eax
0860d3ba +0x1bc:  mov    %eax,(%esp)
0860d3bd +0x1bf:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860d3c2 +0x1c4:  test   %al,%al
0860d3c4 +0x1c6:  jne    0860d285 <+0x87>
0860d3ca +0x1cc:  jmp    0860d3cd <+0x1cf>
0860d3cc +0x1ce:  nop
0860d3cd +0x1cf:  lea    -0x20(%ebp),%eax
0860d3d0 +0x1d2:  mov    %eax,(%esp)
0860d3d3 +0x1d5:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0860d3d8 +0x1da:  xor    $0x1,%eax
0860d3db +0x1dd:  test   %al,%al
0860d3dd +0x1df:  je     0860d3f1 <+0x1f3>
0860d3df +0x1e1:  lea    -0x20(%ebp),%eax
0860d3e2 +0x1e4:  mov    %eax,0x4(%esp)
0860d3e6 +0x1e8:  mov    0xc(%ebp),%eax
0860d3e9 +0x1eb:  mov    %eax,(%esp)
0860d3ec +0x1ee:  call   086111d2 <_GLOBAL__I__ZN10StatisticsC2Ev+0x1250>  ; global constructors keyed to Statistics::Statistics()+0x1250
0860d3f1 +0x1f3:  addl   $0x1,-0x1c(%ebp)
0860d3f5 +0x1f7:  mov    0x8(%ebp),%eax
0860d3f8 +0x1fa:  add    $0x18,%eax
0860d3fb +0x1fd:  mov    %eax,(%esp)
0860d3fe +0x200:  call   0861118e <_GLOBAL__I__ZN10StatisticsC2Ev+0x120c>  ; global constructors keyed to Statistics::Statistics()+0x120c
0860d403 +0x205:  cmp    -0x1c(%ebp),%eax
0860d406 +0x208:  seta   %al
0860d409 +0x20b:  test   %al,%al
0860d40b +0x20d:  jne    0860d221 <+0x23>
0860d411 +0x213:  jmp    0860d42e <+0x230>
0860d413 +0x215:  mov    %edx,%ebx
0860d415 +0x217:  mov    %eax,%esi
0860d417 +0x219:  lea    -0x20(%ebp),%eax
0860d41a +0x21c:  mov    %eax,(%esp)
0860d41d +0x21f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0860d422 +0x224:  mov    %esi,%eax
0860d424 +0x226:  mov    %ebx,%edx
0860d426 +0x228:  mov    %eax,(%esp)
0860d429 +0x22b:  call   08ae3750 <_Unwind_Resume>
0860d42e +0x230:  lea    -0x20(%ebp),%eax
0860d431 +0x233:  mov    %eax,(%esp)
0860d434 +0x236:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0860d439 +0x23b:  lea    -0xc(%ebp),%esp
0860d43c +0x23e:  add    $0x0,%esp
0860d43f +0x241:  pop    %ebx
0860d440 +0x242:  pop    %esi
0860d441 +0x243:  pop    %edi
0860d442 +0x244:  pop    %ebp
0860d443 +0x245:  ret
```

## 反编译 C

```c
// CClientCrashDownLogStatistic::MakeClientCrashDownQuery @ 0x860d1fe

/* CClientCrashDownLogStatistic::MakeClientCrashDownQuery(std::vector<std::string,
   std::allocator<std::string > >&, int) */

void __thiscall
CClientCrashDownLogStatistic::MakeClientCrashDownQuery
          (CClientCrashDownLogStatistic *this,vector *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  CEnvironment *this_00;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  byte bVar11;
  char local_12b;
  char local_12a [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  string local_24;
  uint local_20;
  
  bVar11 = 0;
  std::string::string((string *)&local_24);
  local_20 = 0;
  while (uVar7 = std::
                 vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                 ::size((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                         *)(this + 0x18)), local_20 < uVar7) {
                    /* try { // try from 0860d227 to 0860d3f0 has its CatchHandler @ 0860d413 */
    std::string::clear((string *)&local_24);
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::operator[]((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                  *)(this + 0x18),local_20);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_28);
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::operator[]((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                  *)(this + 0x18),local_20);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_2c);
    while ((cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28,
                               (_Rb_tree_iterator *)local_2c), cVar3 != '\0' &&
           (iVar4 = std::string::size((string *)&local_24), param_2 <= 0x6000 - iVar4))) {
      cVar3 = std::string::empty((string *)&local_24);
      if (cVar3 != '\x01') {
        std::string::operator+=((string *)&local_24,",");
      }
      pcVar9 = &local_12b;
      uVar7 = 0xff;
      bVar10 = ((uint)pcVar9 & 1) != 0;
      if (bVar10) {
        local_12b = '\0';
        pcVar9 = local_12a;
        uVar7 = 0xfe;
      }
      if (((uint)pcVar9 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
        uVar7 = uVar7 - 2;
      }
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar11 * -2 + 1) * 4;
      }
      if ((uVar7 & 2) != 0) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9 = pcVar9 + 2;
      }
      if (!bVar10) {
        *pcVar9 = '\0';
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28);
      uVar1 = *(undefined4 *)(iVar4 + 4);
      puVar5 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28);
      uVar2 = *puVar5;
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar6 = CEnvironment::get_channel_no(this_00);
      puVar5 = (undefined4 *)
               std::
               vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
               ::operator[]((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                             *)(this + 0x18),local_20);
      sprintf(&local_12b,"(from_unixtime(%d),%d,%d,%d)",*puVar5,uVar6,uVar2,uVar1);
      std::string::operator+=((string *)&local_24,&local_12b);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_28);
    }
    cVar3 = std::string::empty((string *)&local_24);
    if (cVar3 != '\x01') {
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,&local_24);
    }
    local_20 = local_20 + 1;
  }
  std::string::~string((string *)&local_24);
  return;
}
```
