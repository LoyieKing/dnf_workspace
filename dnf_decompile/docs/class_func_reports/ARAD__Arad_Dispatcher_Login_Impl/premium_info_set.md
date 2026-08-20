# premium_info_set

`_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi`

`ARAD::Arad_Dispatcher_Login_Impl::premium_info_set(SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&, int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818f1ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818f1ca  _ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi
#           ARAD::Arad_Dispatcher_Login_Impl::premium_info_set(SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&, int)
# range [0x0818f1ca, 0x0818f4a5]
0818f1ca +0x000:  push   %ebp
0818f1cb +0x001:  mov    %esp,%ebp
0818f1cd +0x003:  push   %esi
0818f1ce +0x004:  push   %ebx
0818f1cf +0x005:  sub    $0x60,%esp
0818f1d2 +0x008:  movl   $0x0,-0xc(%ebp)
0818f1d9 +0x00f:  mov    0xc(%ebp),%eax
0818f1dc +0x012:  movl   $0x0,0x2294(%eax)
0818f1e6 +0x01c:  mov    0xc(%ebp),%eax
0818f1e9 +0x01f:  movw   $0x0,0x293a(%eax)
0818f1f2 +0x028:  mov    0xc(%ebp),%eax
0818f1f5 +0x02b:  movl   $0x0,0x394c(%eax)
0818f1ff +0x035:  lea    -0x24(%ebp),%eax
0818f202 +0x038:  mov    %eax,(%esp)
0818f205 +0x03b:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0818f20a +0x040:  lea    -0x30(%ebp),%eax
0818f20d +0x043:  mov    %eax,(%esp)
0818f210 +0x046:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0818f215 +0x04b:  lea    -0x34(%ebp),%eax
0818f218 +0x04e:  mov    0x10(%ebp),%edx
0818f21b +0x051:  mov    %edx,0x4(%esp)
0818f21f +0x055:  mov    %eax,(%esp)
0818f222 +0x058:  call   0818d7ea <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x56a>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x56a
0818f227 +0x05d:  sub    $0x4,%esp
0818f22a +0x060:  lea    -0x38(%ebp),%eax
0818f22d +0x063:  mov    0x10(%ebp),%edx
0818f230 +0x066:  mov    %edx,0x4(%esp)
0818f234 +0x06a:  mov    %eax,(%esp)
0818f237 +0x06d:  call   0818d356 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0xd6>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0xd6
0818f23c +0x072:  sub    $0x4,%esp
0818f23f +0x075:  jmp    0818f426 <+0x25c>
0818f244 +0x07a:  lea    -0x34(%ebp),%eax
0818f247 +0x07d:  mov    %eax,(%esp)
0818f24a +0x080:  call   0818d73a <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x4ba>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x4ba
0818f24f +0x085:  mov    (%eax),%edx
0818f251 +0x087:  mov    %edx,-0x50(%ebp)
0818f254 +0x08a:  mov    0x4(%eax),%edx
0818f257 +0x08d:  mov    %edx,-0x4c(%ebp)
0818f25a +0x090:  mov    0x8(%eax),%edx
0818f25d +0x093:  mov    %edx,-0x48(%ebp)
0818f260 +0x096:  mov    0xc(%eax),%edx
0818f263 +0x099:  mov    %edx,-0x44(%ebp)
0818f266 +0x09c:  mov    0x10(%eax),%edx
0818f269 +0x09f:  mov    %edx,-0x40(%ebp)
0818f26c +0x0a2:  mov    0x14(%eax),%eax
0818f26f +0x0a5:  mov    %eax,-0x3c(%ebp)
0818f272 +0x0a8:  lea    -0x34(%ebp),%eax
0818f275 +0x0ab:  mov    %eax,(%esp)
0818f278 +0x0ae:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f27d +0x0b3:  mov    (%eax),%eax
0818f27f +0x0b5:  cmp    $0xc34f,%eax
0818f284 +0x0ba:  jle    0818f29a <+0xd0>
0818f286 +0x0bc:  lea    -0x34(%ebp),%eax
0818f289 +0x0bf:  mov    %eax,(%esp)
0818f28c +0x0c2:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f291 +0x0c7:  mov    (%eax),%eax
0818f293 +0x0c9:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
0818f298 +0x0ce:  jle    0818f2a1 <+0xd7>
0818f29a +0x0d0:  mov    $0x1,%eax
0818f29f +0x0d5:  jmp    0818f2a6 <+0xdc>
0818f2a1 +0x0d7:  mov    $0x0,%eax
0818f2a6 +0x0dc:  test   %al,%al
0818f2a8 +0x0de:  jne    0818f41a <+0x250>
0818f2ae +0x0e4:  lea    -0x34(%ebp),%eax
0818f2b1 +0x0e7:  mov    %eax,(%esp)
0818f2b4 +0x0ea:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f2b9 +0x0ef:  mov    (%eax),%eax
0818f2bb +0x0f1:  cmp    $&_ZL14gUnicodeBuffer+0x6c43,%eax
0818f2c0 +0x0f6:  jle    0818f2dd <+0x113>
0818f2c2 +0x0f8:  lea    -0x34(%ebp),%eax
0818f2c5 +0x0fb:  mov    %eax,(%esp)
0818f2c8 +0x0fe:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f2cd +0x103:  mov    (%eax),%eax
0818f2cf +0x105:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
0818f2d4 +0x10a:  jg     0818f2dd <+0x113>
0818f2d6 +0x10c:  mov    $0x1,%eax
0818f2db +0x111:  jmp    0818f2e2 <+0x118>
0818f2dd +0x113:  mov    $0x0,%eax
0818f2e2 +0x118:  test   %al,%al
0818f2e4 +0x11a:  je     0818f31f <+0x155>
0818f2e6 +0x11c:  mov    0xc(%ebp),%eax
0818f2e9 +0x11f:  movzwl 0x293a(%eax),%ebx
0818f2f0 +0x126:  movzwl %bx,%esi
0818f2f3 +0x129:  lea    -0x34(%ebp),%eax
0818f2f6 +0x12c:  mov    %eax,(%esp)
0818f2f9 +0x12f:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f2fe +0x134:  mov    (%eax),%edx
0818f300 +0x136:  mov    0xc(%ebp),%eax
0818f303 +0x139:  lea    0xa4c(%esi),%ecx
0818f309 +0x13f:  mov    %edx,0xc(%eax,%ecx,4)
0818f30d +0x143:  lea    0x1(%ebx),%edx
0818f310 +0x146:  mov    0xc(%ebp),%eax
0818f313 +0x149:  mov    %dx,0x293a(%eax)
0818f31a +0x150:  jmp    0818f41b <+0x251>
0818f31f +0x155:  lea    -0x34(%ebp),%eax
0818f322 +0x158:  mov    %eax,(%esp)
0818f325 +0x15b:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f32a +0x160:  mov    (%eax),%eax
0818f32c +0x162:  mov    %eax,(%esp)
0818f32f +0x165:  call   086af7c4 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi>  ; WongWork::CUserPremium::IsRestrictedPremium(int)
0818f334 +0x16a:  test   %al,%al
0818f336 +0x16c:  je     0818f371 <+0x1a7>
0818f338 +0x16e:  mov    0xc(%ebp),%eax
0818f33b +0x171:  movzwl 0x293a(%eax),%ebx
0818f342 +0x178:  movzwl %bx,%esi
0818f345 +0x17b:  lea    -0x34(%ebp),%eax
0818f348 +0x17e:  mov    %eax,(%esp)
0818f34b +0x181:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f350 +0x186:  mov    (%eax),%edx
0818f352 +0x188:  mov    0xc(%ebp),%eax
0818f355 +0x18b:  lea    0xa4c(%esi),%ecx
0818f35b +0x191:  mov    %edx,0xc(%eax,%ecx,4)
0818f35f +0x195:  lea    0x1(%ebx),%edx
0818f362 +0x198:  mov    0xc(%ebp),%eax
0818f365 +0x19b:  mov    %dx,0x293a(%eax)
0818f36c +0x1a2:  jmp    0818f41b <+0x251>
0818f371 +0x1a7:  lea    -0x34(%ebp),%eax
0818f374 +0x1aa:  mov    %eax,(%esp)
0818f377 +0x1ad:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f37c +0x1b2:  mov    (%eax),%eax
0818f37e +0x1b4:  cmp    $0xa028,%eax
0818f383 +0x1b9:  jle    0818f3a0 <+0x1d6>
0818f385 +0x1bb:  lea    -0x34(%ebp),%eax
0818f388 +0x1be:  mov    %eax,(%esp)
0818f38b +0x1c1:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0818f390 +0x1c6:  mov    (%eax),%eax
0818f392 +0x1c8:  cmp    $0xa02b,%eax
0818f397 +0x1cd:  jg     0818f3a0 <+0x1d6>
0818f399 +0x1cf:  mov    $0x1,%eax
0818f39e +0x1d4:  jmp    0818f3a5 <+0x1db>
0818f3a0 +0x1d6:  mov    $0x0,%eax
0818f3a5 +0x1db:  test   %al,%al
0818f3a7 +0x1dd:  je     0818f3c4 <+0x1fa>
0818f3a9 +0x1df:  mov    0x14(%ebp),%eax
0818f3ac +0x1e2:  mov    %eax,0x8(%esp)
0818f3b0 +0x1e6:  lea    -0x50(%ebp),%eax
0818f3b3 +0x1e9:  mov    %eax,0x4(%esp)
0818f3b7 +0x1ed:  mov    0xc(%ebp),%eax
0818f3ba +0x1f0:  mov    %eax,(%esp)
0818f3bd +0x1f3:  call   0818ca69 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, int)
0818f3c2 +0x1f8:  jmp    0818f41b <+0x251>
0818f3c4 +0x1fa:  lea    -0x30(%ebp),%eax
0818f3c7 +0x1fd:  mov    %eax,0x4(%esp)
0818f3cb +0x201:  lea    -0x18(%ebp),%eax
0818f3ce +0x204:  mov    %eax,(%esp)
0818f3d1 +0x207:  call   080eaa36 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x66f>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x66f
0818f3d6 +0x20c:  lea    -0x18(%ebp),%eax
0818f3d9 +0x20f:  mov    %eax,0xc(%esp)
0818f3dd +0x213:  lea    -0x24(%ebp),%eax
0818f3e0 +0x216:  mov    %eax,0x8(%esp)
0818f3e4 +0x21a:  lea    -0x50(%ebp),%eax
0818f3e7 +0x21d:  mov    %eax,0x4(%esp)
0818f3eb +0x221:  mov    0xc(%ebp),%eax
0818f3ee +0x224:  mov    %eax,(%esp)
0818f3f1 +0x227:  call   0818cc74 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >)
0818f3f6 +0x22c:  jmp    0818f40d <+0x243>
0818f3f8 +0x22e:  mov    %edx,%ebx
0818f3fa +0x230:  mov    %eax,%esi
0818f3fc +0x232:  lea    -0x18(%ebp),%eax
0818f3ff +0x235:  mov    %eax,(%esp)
0818f402 +0x238:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0818f407 +0x23d:  mov    %esi,%eax
0818f409 +0x23f:  mov    %ebx,%edx
0818f40b +0x241:  jmp    0818f45e <+0x294>
0818f40d +0x243:  lea    -0x18(%ebp),%eax
0818f410 +0x246:  mov    %eax,(%esp)
0818f413 +0x249:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0818f418 +0x24e:  jmp    0818f41b <+0x251>
0818f41a +0x250:  nop
0818f41b +0x251:  lea    -0x34(%ebp),%eax
0818f41e +0x254:  mov    %eax,(%esp)
0818f421 +0x257:  call   0818fca6 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1a8>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1a8
0818f426 +0x25c:  lea    -0x38(%ebp),%eax
0818f429 +0x25f:  mov    %eax,0x4(%esp)
0818f42d +0x263:  lea    -0x34(%ebp),%eax
0818f430 +0x266:  mov    %eax,(%esp)
0818f433 +0x269:  call   0818fc79 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x17b>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x17b
0818f438 +0x26e:  test   %al,%al
0818f43a +0x270:  jne    0818f244 <+0x7a>
0818f440 +0x276:  mov    0xc(%ebp),%eax
0818f443 +0x279:  mov    -0xc(%ebp),%edx
0818f446 +0x27c:  mov    %edx,0x2294(%eax)
0818f44c +0x282:  mov    $0x0,%ebx
0818f451 +0x287:  lea    -0x30(%ebp),%eax
0818f454 +0x28a:  mov    %eax,(%esp)
0818f457 +0x28d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0818f45c +0x292:  jmp    0818f48e <+0x2c4>
0818f45e +0x294:  mov    %edx,%ebx
0818f460 +0x296:  mov    %eax,%esi
0818f462 +0x298:  lea    -0x30(%ebp),%eax
0818f465 +0x29b:  mov    %eax,(%esp)
0818f468 +0x29e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0818f46d +0x2a3:  mov    %esi,%eax
0818f46f +0x2a5:  mov    %ebx,%edx
0818f471 +0x2a7:  jmp    0818f473 <+0x2a9>
0818f473 +0x2a9:  mov    %edx,%ebx
0818f475 +0x2ab:  mov    %eax,%esi
0818f477 +0x2ad:  lea    -0x24(%ebp),%eax
0818f47a +0x2b0:  mov    %eax,(%esp)
0818f47d +0x2b3:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0818f482 +0x2b8:  mov    %esi,%eax
0818f484 +0x2ba:  mov    %ebx,%edx
0818f486 +0x2bc:  mov    %eax,(%esp)
0818f489 +0x2bf:  call   08ae3750 <_Unwind_Resume>
0818f48e +0x2c4:  lea    -0x24(%ebp),%eax
0818f491 +0x2c7:  mov    %eax,(%esp)
0818f494 +0x2ca:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0818f499 +0x2cf:  mov    %ebx,%eax
0818f49b +0x2d1:  lea    -0x8(%ebp),%esp
0818f49e +0x2d4:  add    $0x0,%esp
0818f4a1 +0x2d7:  pop    %ebx
0818f4a2 +0x2d8:  pop    %esi
0818f4a3 +0x2d9:  pop    %ebp
0818f4a4 +0x2da:  ret
0818f4a5 +0x2db:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::premium_info_set @ 0x818f1ca

/* ARAD::Arad_Dispatcher_Login_Impl::premium_info_set(SIG_LOGIN_DATA*,
   std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&, int) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::premium_info_set
          (Arad_Dispatcher_Login_Impl *this,SIG_LOGIN_DATA *param_1,vector *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  __normal_iterator local_3c [4];
  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
  local_38 [4];
  vector<int,std::allocator<int>> local_34 [12];
  vector<int,std::allocator<int>> local_28 [12];
  vector<int,std::allocator<int>> local_1c [12];
  undefined4 local_10;
  
  local_10 = 0;
  *(undefined4 *)(param_1 + 0x2294) = 0;
  *(undefined2 *)(param_1 + 0x293a) = 0;
  *(undefined4 *)(param_1 + 0x394c) = 0;
  std::vector<int,std::allocator<int>>::vector(local_28);
                    /* try { // try from 0818f210 to 0818f214 has its CatchHandler @ 0818f473 */
  std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 0818f222 to 0818f3d5 has its CatchHandler @ 0818f45e */
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::begin();
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::end();
  do {
    bVar3 = __gnu_cxx::operator!=(local_38,local_3c);
    if (!bVar3) {
      *(undefined4 *)(param_1 + 0x2294) = local_10;
                    /* try { // try from 0818f457 to 0818f45b has its CatchHandler @ 0818f473 */
      std::vector<int,std::allocator<int>>::~vector(local_34);
      std::vector<int,std::allocator<int>>::~vector(local_28);
      return 0;
    }
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
             ::operator*(local_38);
    local_54 = *puVar4;
    local_50 = puVar4[1];
    local_4c = puVar4[2];
    local_48 = puVar4[3];
    local_44 = puVar4[4];
    local_40 = puVar4[5];
    piVar5 = (int *)__gnu_cxx::
                    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                    ::operator->(local_38);
    if (*piVar5 < 50000) {
LAB_0818f29a:
      bVar3 = true;
    }
    else {
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_38);
      if (89999 < *piVar5) goto LAB_0818f29a;
      bVar3 = false;
    }
    if (!bVar3) {
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_38);
      if (*piVar5 < 70000) {
LAB_0818f2dd:
        bVar3 = false;
      }
      else {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_38);
        if (89999 < *piVar5) goto LAB_0818f2dd;
        bVar3 = true;
      }
      if (bVar3) {
        uVar1 = *(ushort *)(param_1 + 0x293a);
        puVar4 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                 ::operator->(local_38);
        *(undefined4 *)(param_1 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar4;
        *(ushort *)(param_1 + 0x293a) = uVar1 + 1;
      }
      else {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_38);
        cVar2 = WongWork::CUserPremium::IsRestrictedPremium(*piVar5);
        if (cVar2 == '\0') {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                          ::operator->(local_38);
          if (*piVar5 < 0xa029) {
LAB_0818f3a0:
            bVar3 = false;
          }
          else {
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_38);
            if (0xa02b < *piVar5) goto LAB_0818f3a0;
            bVar3 = true;
          }
          if (bVar3) {
            DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast
                      (param_1,(tagDNFEventEntry *)&local_54,param_3);
          }
          else {
            std::vector<int,std::allocator<int>>::vector(local_1c,(vector *)local_34);
                    /* try { // try from 0818f3f1 to 0818f3f5 has its CatchHandler @ 0818f3f8 */
            DATABASE::LOGIN_QUERY::arad_sp_select_member_premium
                      (param_1,&local_54,local_28,local_1c);
                    /* try { // try from 0818f413 to 0818f437 has its CatchHandler @ 0818f45e */
            std::vector<int,std::allocator<int>>::~vector(local_1c);
          }
        }
        else {
          uVar1 = *(ushort *)(param_1 + 0x293a);
          puVar4 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                   ::operator->(local_38);
          *(undefined4 *)(param_1 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar4;
          *(ushort *)(param_1 + 0x293a) = uVar1 + 1;
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
    ::operator++(local_38);
  } while( true );
}
```
