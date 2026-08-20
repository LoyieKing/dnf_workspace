# getItemValueStirng

`_ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs`

`advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&, advancealtar::AdvanceAltarShopType::T, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `advancealtar::SyncScript` | `0x08134132` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08134132  _ZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSs
#           advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&, advancealtar::AdvanceAltarShopType::T, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x08134132, 0x0813438f]
08134132 +0x000:  push   %ebp
08134133 +0x001:  mov    %esp,%ebp
08134135 +0x003:  push   %edi
08134136 +0x004:  push   %esi
08134137 +0x005:  push   %ebx
08134138 +0x006:  sub    $0x85c,%esp
0813413e +0x00c:  movl   $0x0,-0x24(%ebp)
08134145 +0x013:  mov    0x10(%ebp),%eax
08134148 +0x016:  cmp    $0x1,%eax
0813414b +0x019:  je     08134161 <+0x2f>
0813414d +0x01b:  cmp    $0x2,%eax
08134150 +0x01e:  je     0813416c <+0x3a>
08134152 +0x020:  test   %eax,%eax
08134154 +0x022:  jne    08134177 <+0x45>
08134156 +0x024:  mov    0xc(%ebp),%eax
08134159 +0x027:  add    $0x4,%eax
0813415c +0x02a:  mov    %eax,-0x24(%ebp)
0813415f +0x02d:  jmp    08134181 <+0x4f>
08134161 +0x02f:  mov    0xc(%ebp),%eax
08134164 +0x032:  add    $0x10,%eax
08134167 +0x035:  mov    %eax,-0x24(%ebp)
0813416a +0x038:  jmp    08134181 <+0x4f>
0813416c +0x03a:  mov    0xc(%ebp),%eax
0813416f +0x03d:  add    $0x1c,%eax
08134172 +0x040:  mov    %eax,-0x24(%ebp)
08134175 +0x043:  jmp    08134181 <+0x4f>
08134177 +0x045:  mov    $0x0,%ebx
0813417c +0x04a:  jmp    08134383 <+0x251>
08134181 +0x04f:  mov    -0x24(%ebp),%eax
08134184 +0x052:  mov    %eax,(%esp)
08134187 +0x055:  call   0813687c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2483>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2483
0813418c +0x05a:  mov    %eax,-0x20(%ebp)
0813418f +0x05d:  lea    -0x40(%ebp),%eax
08134192 +0x060:  mov    -0x24(%ebp),%edx
08134195 +0x063:  mov    %edx,0x4(%esp)
08134199 +0x067:  mov    %eax,(%esp)
0813419c +0x06a:  call   0813689e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x24a5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x24a5
081341a1 +0x06f:  sub    $0x4,%esp
081341a4 +0x072:  movl   $0x0,-0x1c(%ebp)
081341ab +0x079:  jmp    0813434f <+0x21d>
081341b0 +0x07e:  lea    -0x44(%ebp),%eax
081341b3 +0x081:  mov    %eax,(%esp)
081341b6 +0x084:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081341bb +0x089:  lea    -0x444(%ebp),%esi
081341c1 +0x08f:  mov    $0x0,%eax
081341c6 +0x094:  mov    $0x100,%edx
081341cb +0x099:  mov    %esi,%edi
081341cd +0x09b:  mov    %edx,%ecx
081341cf +0x09d:  rep stos %eax,%es:(%edi)
081341d1 +0x09f:  lea    -0x40(%ebp),%eax
081341d4 +0x0a2:  mov    %eax,(%esp)
081341d7 +0x0a5:  call   08136956 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x255d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x255d
081341dc +0x0aa:  add    $0xc,%eax
081341df +0x0ad:  mov    %eax,(%esp)
081341e2 +0x0b0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081341e7 +0x0b5:  lea    -0x444(%ebp),%edx
081341ed +0x0bb:  mov    %edx,0x4(%esp)
081341f1 +0x0bf:  mov    %eax,(%esp)
081341f4 +0x0c2:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
081341f9 +0x0c7:  xor    $0x1,%eax
081341fc +0x0ca:  test   %al,%al
081341fe +0x0cc:  je     0813428b <+0x159>
08134204 +0x0d2:  lea    -0x40(%ebp),%eax
08134207 +0x0d5:  mov    %eax,(%esp)
0813420a +0x0d8:  call   08136956 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x255d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x255d
0813420f +0x0dd:  add    $0xc,%eax
08134212 +0x0e0:  mov    %eax,(%esp)
08134215 +0x0e3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813421a +0x0e8:  mov    %eax,%edi
0813421c +0x0ea:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08134221 +0x0ef:  mov    %eax,%esi
08134223 +0x0f1:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08134228 +0x0f6:  mov    %eax,%ebx
0813422a +0x0f8:  movl   $0x5,0xc(%esp)
08134232 +0x100:  movl   $0xd36,0x8(%esp)
0813423a +0x108:  movl   $&_ZZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSsE19__PRETTY_FUNCTION__,0x4(%esp)
08134242 +0x110:  lea    -0x38(%ebp),%eax
08134245 +0x113:  mov    %eax,(%esp)
08134248 +0x116:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0813424d +0x11b:  movl   $0xd36,0x18(%esp)
08134255 +0x123:  movl   $&_ZZN12advancealtar10SyncScript18getItemValueStirngEiRKNS_11BuyShopDataENS_20AdvanceAltarShopType1TERSsE19__PRETTY_FUNCTION__,0x14(%esp)
0813425d +0x12b:  mov    %edi,0x10(%esp)
08134261 +0x12f:  mov    %esi,0xc(%esp)
08134265 +0x133:  mov    %ebx,0x8(%esp)
08134269 +0x137:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08134271 +0x13f:  lea    -0x38(%ebp),%eax
08134274 +0x142:  mov    %eax,(%esp)
08134277 +0x145:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0813427c +0x14a:  mov    $0x0,%ebx
08134281 +0x14f:  mov    $0x0,%esi
08134286 +0x154:  jmp    0813431f <+0x1ed>
0813428b +0x159:  lea    -0x40(%ebp),%eax
0813428e +0x15c:  mov    %eax,(%esp)
08134291 +0x15f:  call   08136956 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x255d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x255d
08134296 +0x164:  mov    (%eax),%edx
08134298 +0x166:  mov    0x10(%ebp),%eax
0813429b +0x169:  lea    -0x444(%ebp),%ecx
081342a1 +0x16f:  mov    %ecx,0x14(%esp)
081342a5 +0x173:  mov    %edx,0x10(%esp)
081342a9 +0x177:  mov    %eax,0xc(%esp)
081342ad +0x17b:  mov    0x8(%ebp),%eax
081342b0 +0x17e:  mov    %eax,0x8(%esp)
081342b4 +0x182:  movl   $"(%d,%d,%d,'%s')",0x4(%esp)
081342bc +0x18a:  lea    -0x844(%ebp),%eax
081342c2 +0x190:  mov    %eax,(%esp)
081342c5 +0x193:  call   0807e440 <_init+0xd38>
081342ca +0x198:  lea    -0x844(%ebp),%eax
081342d0 +0x19e:  mov    %eax,0x4(%esp)
081342d4 +0x1a2:  mov    0x14(%ebp),%eax
081342d7 +0x1a5:  mov    %eax,(%esp)
081342da +0x1a8:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081342df +0x1ad:  mov    -0x20(%ebp),%eax
081342e2 +0x1b0:  sub    $0x1,%eax
081342e5 +0x1b3:  cmp    -0x1c(%ebp),%eax
081342e8 +0x1b6:  jle    081342fd <+0x1cb>
081342ea +0x1b8:  movl   $", ",0x4(%esp)
081342f2 +0x1c0:  mov    0x14(%ebp),%eax
081342f5 +0x1c3:  mov    %eax,(%esp)
081342f8 +0x1c6:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081342fd +0x1cb:  mov    $0x1,%esi
08134302 +0x1d0:  jmp    0813431f <+0x1ed>
08134304 +0x1d2:  mov    %edx,%ebx
08134306 +0x1d4:  mov    %eax,%esi
08134308 +0x1d6:  lea    -0x44(%ebp),%eax
0813430b +0x1d9:  mov    %eax,(%esp)
0813430e +0x1dc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08134313 +0x1e1:  mov    %esi,%eax
08134315 +0x1e3:  mov    %ebx,%edx
08134317 +0x1e5:  mov    %eax,(%esp)
0813431a +0x1e8:  call   08ae3750 <_Unwind_Resume>
0813431f +0x1ed:  lea    -0x44(%ebp),%eax
08134322 +0x1f0:  mov    %eax,(%esp)
08134325 +0x1f3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813432a +0x1f8:  test   %esi,%esi
0813432c +0x1fa:  je     08134383 <+0x251>
0813432e +0x1fc:  lea    -0x28(%ebp),%eax
08134331 +0x1ff:  movl   $0x0,0x8(%esp)
08134339 +0x207:  lea    -0x40(%ebp),%edx
0813433c +0x20a:  mov    %edx,0x4(%esp)
08134340 +0x20e:  mov    %eax,(%esp)
08134343 +0x211:  call   08136922 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2529>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2529
08134348 +0x216:  sub    $0x4,%esp
0813434b +0x219:  addl   $0x1,-0x1c(%ebp)
0813434f +0x21d:  lea    -0x3c(%ebp),%eax
08134352 +0x220:  mov    -0x24(%ebp),%edx
08134355 +0x223:  mov    %edx,0x4(%esp)
08134359 +0x227:  mov    %eax,(%esp)
0813435c +0x22a:  call   081368ca <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x24d1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x24d1
08134361 +0x22f:  sub    $0x4,%esp
08134364 +0x232:  lea    -0x3c(%ebp),%eax
08134367 +0x235:  mov    %eax,0x4(%esp)
0813436b +0x239:  lea    -0x40(%ebp),%eax
0813436e +0x23c:  mov    %eax,(%esp)
08134371 +0x23f:  call   081368f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x24fd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x24fd
08134376 +0x244:  test   %al,%al
08134378 +0x246:  jne    081341b0 <+0x7e>
0813437e +0x24c:  mov    $0x1,%ebx
08134383 +0x251:  mov    %ebx,%eax
08134385 +0x253:  lea    -0xc(%ebp),%esp
08134388 +0x256:  add    $0x0,%esp
0813438b +0x259:  pop    %ebx
0813438c +0x25a:  pop    %esi
0813438d +0x25b:  pop    %edi
0813438e +0x25c:  pop    %ebp
0813438f +0x25d:  ret
```

## 反编译 C

```c
// advancealtar::SyncScript::getItemValueStirng @ 0x8134132

/* advancealtar::SyncScript::getItemValueStirng(int, advancealtar::BuyShopData const&,
   advancealtar::AdvanceAltarShopType::T, std::string&) */

undefined4
advancealtar::SyncScript::getItemValueStirng
          (undefined4 param_1,int param_2,int param_3,string *param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_EBX;
  byte bVar9;
  char local_848 [1024];
  char local_448 [1024];
  string local_48 [4];
  __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_44 [4];
  __normal_iterator local_40 [4];
  cMyTrace local_3c [16];
  __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_2c [4];
  vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *local_28;
  int local_24;
  int local_20;
  
  bVar9 = 0;
  if (param_3 == 1) {
    local_28 = (vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
               (param_2 + 0x10);
  }
  else if (param_3 == 2) {
    local_28 = (vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
               (param_2 + 0x1c);
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    local_28 = (vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>> *)
               (param_2 + 4);
  }
  local_24 = std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>
             ::size(local_28);
  std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin();
  local_20 = 0;
  while( true ) {
    std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end();
    bVar2 = __gnu_cxx::operator!=(local_44,local_40);
    if (!bVar2) {
      return 1;
    }
    std::string::string(local_48);
    pcVar3 = local_448;
    for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar9 * -2 + 1) * 4;
    }
    iVar8 = __gnu_cxx::
            __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
            ::operator->(local_44);
                    /* try { // try from 081341e2 to 081342fc has its CatchHandler @ 08134304 */
    pcVar3 = (char *)std::string::c_str((string *)(iVar8 + 0xc));
    cVar1 = CodePage::script2Database(pcVar3,local_448);
    if (cVar1 == '\x01') {
      puVar7 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
               ::operator->(local_44);
      sprintf(local_848,"(%d,%d,%d,\'%s\')",param_1,param_3,*puVar7,local_448);
      std::string::operator+=(param_4,local_848);
      if (local_20 < local_24 + -1) {
        std::string::operator+=(param_4,", ");
      }
      bVar2 = true;
    }
    else {
      iVar8 = __gnu_cxx::
              __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
              ::operator->(local_44);
      uVar4 = std::string::c_str((string *)(iVar8 + 0xc));
      uVar5 = CodePage::database();
      uVar6 = CodePage::script();
      cMyTrace::cMyTrace(local_3c,
                         "static bool advancealtar::SyncScript::getItemValueStirng(int, const advancealtar::BuyShopData&, advancealtar::AdvanceAltarShopType::T, std::tstring&)"
                         ,0xd36,5);
      cMyTrace::operator()
                (local_3c,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar4,
                 "static bool advancealtar::SyncScript::getItemValueStirng(int, const advancealtar::BuyShopData&, advancealtar::AdvanceAltarShopType::T, std::tstring&)"
                 ,0xd36);
      unaff_EBX = 0;
      bVar2 = false;
    }
    std::string::~string(local_48);
    if (!bVar2) break;
    __gnu_cxx::
    __normal_iterator<advancealtar::BuyUpgradeData_const*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
    ::operator++(local_2c,(int)local_44);
    local_20 = local_20 + 1;
  }
  return unaff_EBX;
}
```
