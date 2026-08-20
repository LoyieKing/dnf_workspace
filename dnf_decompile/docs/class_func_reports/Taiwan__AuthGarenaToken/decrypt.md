# decrypt

`_ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE`

`Taiwan::AuthGarenaToken::decrypt(char const*, int, Taiwan::GarenaAuthData&)`

| 类 | 地址 |
|---|---|
| `Taiwan::AuthGarenaToken` | `0x081731f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081731f2  _ZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataE
#           Taiwan::AuthGarenaToken::decrypt(char const*, int, Taiwan::GarenaAuthData&)
# range [0x081731f2, 0x0817356e]
081731f2 +0x000:  push   %ebp
081731f3 +0x001:  mov    %esp,%ebp
081731f5 +0x003:  push   %edi
081731f6 +0x004:  push   %esi
081731f7 +0x005:  push   %ebx
081731f8 +0x006:  sub    $0x8c,%esp
081731fe +0x00c:  cmpl   $0x0,0x8(%ebp)
08173202 +0x010:  jne    08173244 <+0x52>
08173204 +0x012:  movl   $0x5,0xc(%esp)
0817320c +0x01a:  movl   $0x7a,0x8(%esp)
08173214 +0x022:  movl   $&_ZZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataEE12__FUNCTION__,0x4(%esp)
0817321c +0x02a:  lea    -0x48(%ebp),%eax
0817321f +0x02d:  mov    %eax,(%esp)
08173222 +0x030:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173227 +0x035:  movl   $"[Taiwan, Auth] Token is null!",0x4(%esp)
0817322f +0x03d:  lea    -0x48(%ebp),%eax
08173232 +0x040:  mov    %eax,(%esp)
08173235 +0x043:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817323a +0x048:  mov    $0x7b,%ebx
0817323f +0x04d:  jmp    08173562 <+0x370>
08173244 +0x052:  mov    0x8(%ebp),%eax
08173247 +0x055:  mov    %eax,-0x20(%ebp)
0817324a +0x058:  lea    -0x54(%ebp),%eax
0817324d +0x05b:  mov    %eax,(%esp)
08173250 +0x05e:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
08173255 +0x063:  lea    -0x31(%ebp),%eax
08173258 +0x066:  mov    %eax,(%esp)
0817325b +0x069:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08173260 +0x06e:  lea    -0x31(%ebp),%eax
08173263 +0x071:  mov    %eax,0x8(%esp)
08173267 +0x075:  mov    -0x20(%ebp),%eax
0817326a +0x078:  mov    %eax,0x4(%esp)
0817326e +0x07c:  lea    -0x38(%ebp),%eax
08173271 +0x07f:  mov    %eax,(%esp)
08173274 +0x082:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08173279 +0x087:  lea    -0x54(%ebp),%eax
0817327c +0x08a:  mov    %eax,0x4(%esp)
08173280 +0x08e:  lea    -0x38(%ebp),%eax
08173283 +0x091:  mov    %eax,(%esp)
08173286 +0x094:  call   0807ebf4 <_Z13base64_decodeRKSsRSt6vectorIhSaIhEE>  ; base64_decode(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<unsigned char, std::allocator<unsigned char> >&)
0817328b +0x099:  jmp    081732a2 <+0xb0>
0817328d +0x09b:  mov    %edx,%ebx
0817328f +0x09d:  mov    %eax,%esi
08173291 +0x09f:  lea    -0x38(%ebp),%eax
08173294 +0x0a2:  mov    %eax,(%esp)
08173297 +0x0a5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0817329c +0x0aa:  mov    %esi,%eax
0817329e +0x0ac:  mov    %ebx,%edx
081732a0 +0x0ae:  jmp    081732af <+0xbd>
081732a2 +0x0b0:  lea    -0x38(%ebp),%eax
081732a5 +0x0b3:  mov    %eax,(%esp)
081732a8 +0x0b6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081732ad +0x0bb:  jmp    081732c7 <+0xd5>
081732af +0x0bd:  mov    %edx,%ebx
081732b1 +0x0bf:  mov    %eax,%esi
081732b3 +0x0c1:  lea    -0x31(%ebp),%eax
081732b6 +0x0c4:  mov    %eax,(%esp)
081732b9 +0x0c7:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081732be +0x0cc:  mov    %esi,%eax
081732c0 +0x0ce:  mov    %ebx,%edx
081732c2 +0x0d0:  jmp    0817353c <+0x34a>
081732c7 +0x0d5:  lea    -0x31(%ebp),%eax
081732ca +0x0d8:  mov    %eax,(%esp)
081732cd +0x0db:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
081732d2 +0x0e0:  lea    -0x54(%ebp),%eax
081732d5 +0x0e3:  mov    %eax,(%esp)
081732d8 +0x0e6:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
081732dd +0x0eb:  test   %eax,%eax
081732df +0x0ed:  sete   %al
081732e2 +0x0f0:  test   %al,%al
081732e4 +0x0f2:  je     0817331c <+0x12a>
081732e6 +0x0f4:  movl   $"[Taiwan, Auth] Invalid token format!",0x10(%esp)
081732ee +0x0fc:  movl   $0x83,0xc(%esp)
081732f6 +0x104:  movl   $&_ZZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataEE12__FUNCTION__,0x8(%esp)
081732fe +0x10c:  movl   $"localtaiwan/System/TaiwanAuth.cpp",0x4(%esp)
08173306 +0x114:  movl   $0x1,(%esp)
0817330d +0x11b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08173312 +0x120:  mov    $0x84,%ebx
08173317 +0x125:  jmp    08173557 <+0x365>
0817331c +0x12a:  lea    -0x60(%ebp),%eax
0817331f +0x12d:  mov    %eax,(%esp)
08173322 +0x130:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
08173327 +0x135:  lea    -0x54(%ebp),%eax
0817332a +0x138:  mov    %eax,(%esp)
0817332d +0x13b:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
08173332 +0x140:  mov    %eax,%ebx
08173334 +0x142:  movl   $0x0,0x4(%esp)
0817333c +0x14a:  lea    -0x54(%ebp),%eax
0817333f +0x14d:  mov    %eax,(%esp)
08173342 +0x150:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
08173347 +0x155:  lea    -0x60(%ebp),%edx
0817334a +0x158:  mov    %edx,0xc(%esp)
0817334e +0x15c:  mov    %ebx,0x8(%esp)
08173352 +0x160:  mov    %eax,0x4(%esp)
08173356 +0x164:  movl   $&_ZN6Taiwan15AuthGarenaToken11openSSLRSA_E,(%esp)
0817335d +0x16b:  call   0816c532 <_ZN11COpensslRSA7DecryptEPKciRSt6vectorIhSaIhEE>  ; COpensslRSA::Decrypt(char const*, int, std::vector<unsigned char, std::allocator<unsigned char> >&)
08173362 +0x170:  mov    %al,-0x19(%ebp)
08173365 +0x173:  movzbl -0x19(%ebp),%eax
08173369 +0x177:  xor    $0x1,%eax
0817336c +0x17a:  test   %al,%al
0817336e +0x17c:  je     081733a6 <+0x1b4>
08173370 +0x17e:  movl   $"[Taiwan, Auth] Decrypt token failed!",0x10(%esp)
08173378 +0x186:  movl   $0x8b,0xc(%esp)
08173380 +0x18e:  movl   $&_ZZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataEE12__FUNCTION__,0x8(%esp)
08173388 +0x196:  movl   $"localtaiwan/System/TaiwanAuth.cpp",0x4(%esp)
08173390 +0x19e:  movl   $0x1,(%esp)
08173397 +0x1a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817339c +0x1aa:  mov    $0x8c,%ebx
081733a1 +0x1af:  jmp    0817352f <+0x33d>
081733a6 +0x1b4:  lea    -0x60(%ebp),%eax
081733a9 +0x1b7:  mov    %eax,(%esp)
081733ac +0x1ba:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
081733b1 +0x1bf:  cmp    $0x68,%eax
081733b4 +0x1c2:  seta   %al
081733b7 +0x1c5:  test   %al,%al
081733b9 +0x1c7:  je     08173408 <+0x216>
081733bb +0x1c9:  lea    -0x60(%ebp),%eax
081733be +0x1cc:  mov    %eax,(%esp)
081733c1 +0x1cf:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
081733c6 +0x1d4:  mov    %eax,0x18(%esp)
081733ca +0x1d8:  movl   $0x68,0x14(%esp)
081733d2 +0x1e0:  movl   $"[Taiwan, Auth] Invalid decrypted token length! (buffer_size:%u, token_size:%u)",0x10(%esp)
081733da +0x1e8:  movl   $0x92,0xc(%esp)
081733e2 +0x1f0:  movl   $&_ZZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataEE12__FUNCTION__,0x8(%esp)
081733ea +0x1f8:  movl   $"localtaiwan/System/TaiwanAuth.cpp",0x4(%esp)
081733f2 +0x200:  movl   $0x1,(%esp)
081733f9 +0x207:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081733fe +0x20c:  mov    $0x93,%ebx
08173403 +0x211:  jmp    0817352f <+0x33d>
08173408 +0x216:  movl   $0x68,0x8(%esp)
08173410 +0x21e:  movl   $0x0,0x4(%esp)
08173418 +0x226:  mov    0x10(%ebp),%eax
0817341b +0x229:  mov    %eax,(%esp)
0817341e +0x22c:  call   0807dcc0 <_init+0x5b8>
08173423 +0x231:  lea    -0x60(%ebp),%eax
08173426 +0x234:  mov    %eax,(%esp)
08173429 +0x237:  call   0807f5a0 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x670>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x670
0817342e +0x23c:  lea    -0x1(%eax),%ebx
08173431 +0x23f:  movl   $0x0,0x4(%esp)
08173439 +0x247:  lea    -0x60(%ebp),%eax
0817343c +0x24a:  mov    %eax,(%esp)
0817343f +0x24d:  call   080e4db0 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xd6>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xd6
08173444 +0x252:  mov    %ebx,0x8(%esp)
08173448 +0x256:  mov    %eax,0x4(%esp)
0817344c +0x25a:  mov    0x10(%ebp),%eax
0817344f +0x25d:  mov    %eax,(%esp)
08173452 +0x260:  call   0807d8a0 <_init+0x198>
08173457 +0x265:  mov    0x10(%ebp),%eax
0817345a +0x268:  mov    %eax,(%esp)
0817345d +0x26b:  call   08173022 <_ZN6Taiwan14GarenaAuthData13getMobileAuthEv>  ; Taiwan::GarenaAuthData::getMobileAuth()
08173462 +0x270:  test   %al,%al
08173464 +0x272:  je     0817346d <+0x27b>
08173466 +0x274:  mov    $0x1,%ebx
0817346b +0x279:  jmp    08173472 <+0x280>
0817346d +0x27b:  mov    $0x0,%ebx
08173472 +0x280:  mov    0x10(%ebp),%eax
08173475 +0x283:  mov    %eax,(%esp)
08173478 +0x286:  call   0817304e <_ZN6Taiwan14GarenaAuthData17getGoldMemberTypeEv>  ; Taiwan::GarenaAuthData::getGoldMemberType()
0817347d +0x28b:  movzbl %al,%eax
08173480 +0x28e:  mov    %eax,-0x74(%ebp)
08173483 +0x291:  mov    0x10(%ebp),%eax
08173486 +0x294:  mov    %eax,(%esp)
08173489 +0x297:  call   08173008 <_ZN6Taiwan14GarenaAuthData10getGcaTypeEv>  ; Taiwan::GarenaAuthData::getGcaType()
0817348e +0x29c:  movzwl %ax,%eax
08173491 +0x29f:  mov    %eax,-0x70(%ebp)
08173494 +0x2a2:  mov    0x10(%ebp),%eax
08173497 +0x2a5:  mov    %eax,(%esp)
0817349a +0x2a8:  call   08172fea <_ZN6Taiwan14GarenaAuthData12getTimeStampEv>  ; Taiwan::GarenaAuthData::getTimeStamp()
0817349f +0x2ad:  mov    %eax,-0x6c(%ebp)
081734a2 +0x2b0:  mov    0x10(%ebp),%eax
081734a5 +0x2b3:  mov    %eax,(%esp)
081734a8 +0x2b6:  call   08172fde <_ZN6Taiwan14GarenaAuthData8getUnameEv>  ; Taiwan::GarenaAuthData::getUname()
081734ad +0x2bb:  mov    %eax,%edi
081734af +0x2bd:  mov    0x10(%ebp),%eax
081734b2 +0x2c0:  mov    %eax,(%esp)
081734b5 +0x2c3:  call   08172fc8 <_ZN6Taiwan14GarenaAuthData6getUidEv>  ; Taiwan::GarenaAuthData::getUid()
081734ba +0x2c8:  mov    %eax,%esi
081734bc +0x2ca:  movl   $0x0,0xc(%esp)
081734c4 +0x2d2:  movl   $0x99,0x8(%esp)
081734cc +0x2da:  movl   $&_ZZN6Taiwan15AuthGarenaToken7decryptEPKciRNS_14GarenaAuthDataEE12__FUNCTION__,0x4(%esp)
081734d4 +0x2e2:  lea    -0x30(%ebp),%eax
081734d7 +0x2e5:  mov    %eax,(%esp)
081734da +0x2e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081734df +0x2ed:  mov    %ebx,0x1c(%esp)
081734e3 +0x2f1:  mov    -0x74(%ebp),%eax
081734e6 +0x2f4:  mov    %eax,0x18(%esp)
081734ea +0x2f8:  mov    -0x70(%ebp),%eax
081734ed +0x2fb:  mov    %eax,0x14(%esp)
081734f1 +0x2ff:  mov    -0x6c(%ebp),%eax
081734f4 +0x302:  mov    %eax,0x10(%esp)
081734f8 +0x306:  mov    %edi,0xc(%esp)
081734fc +0x30a:  mov    %esi,0x8(%esp)
08173500 +0x30e:  movl   $"[Taiwan, Auth] Success!! Uid:%u, UserName:%s, Timestamp:%u, GcaType:%u, GoldMemberType:%u, Mobile:%u",0x4(%esp)
08173508 +0x316:  lea    -0x30(%ebp),%eax
0817350b +0x319:  mov    %eax,(%esp)
0817350e +0x31c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173513 +0x321:  mov    $0x0,%ebx
08173518 +0x326:  jmp    0817352f <+0x33d>
0817351a +0x328:  mov    %edx,%ebx
0817351c +0x32a:  mov    %eax,%esi
0817351e +0x32c:  lea    -0x60(%ebp),%eax
08173521 +0x32f:  mov    %eax,(%esp)
08173524 +0x332:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
08173529 +0x337:  mov    %esi,%eax
0817352b +0x339:  mov    %ebx,%edx
0817352d +0x33b:  jmp    0817353c <+0x34a>
0817352f +0x33d:  lea    -0x60(%ebp),%eax
08173532 +0x340:  mov    %eax,(%esp)
08173535 +0x343:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0817353a +0x348:  jmp    08173557 <+0x365>
0817353c +0x34a:  mov    %edx,%ebx
0817353e +0x34c:  mov    %eax,%esi
08173540 +0x34e:  lea    -0x54(%ebp),%eax
08173543 +0x351:  mov    %eax,(%esp)
08173546 +0x354:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0817354b +0x359:  mov    %esi,%eax
0817354d +0x35b:  mov    %ebx,%edx
0817354f +0x35d:  mov    %eax,(%esp)
08173552 +0x360:  call   08ae3750 <_Unwind_Resume>
08173557 +0x365:  lea    -0x54(%ebp),%eax
0817355a +0x368:  mov    %eax,(%esp)
0817355d +0x36b:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
08173562 +0x370:  mov    %ebx,%eax
08173564 +0x372:  add    $0x8c,%esp
0817356a +0x378:  pop    %ebx
0817356b +0x379:  pop    %esi
0817356c +0x37a:  pop    %edi
0817356d +0x37b:  pop    %ebp
0817356e +0x37c:  ret
```

## 反编译 C

```c
// Taiwan::AuthGarenaToken::decrypt @ 0x81731f2

/* Taiwan::AuthGarenaToken::decrypt(char const*, int, Taiwan::GarenaAuthData&) */

undefined4 Taiwan::AuthGarenaToken::decrypt(char *param_1,int param_2,GarenaAuthData *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  void *__src;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  vector<unsigned_char,std::allocator<unsigned_char>> local_64 [12];
  vector<unsigned_char,std::allocator<unsigned_char>> local_58 [12];
  cMyTrace local_4c [16];
  string local_3c;
  allocator<char> local_35;
  cMyTrace local_34 [16];
  char *local_24;
  char local_1d;
  
  if (param_1 == (char *)0x0) {
    cMyTrace::cMyTrace(local_4c,"decrypt",0x7a,5);
    cMyTrace::operator()(local_4c,"[Taiwan, Auth] Token is null!");
    uVar8 = 0x7b;
  }
  else {
    local_24 = param_1;
    std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_58);
    std::allocator<char>::allocator();
                    /* try { // try from 08173274 to 08173278 has its CatchHandler @ 081732af */
    std::string::string((string *)&local_3c,local_24,(allocator *)&local_35);
                    /* try { // try from 08173286 to 0817328a has its CatchHandler @ 0817328d */
    base64_decode(&local_3c,(vector *)local_58);
                    /* try { // try from 081732a8 to 081732ac has its CatchHandler @ 081732af */
    std::string::~string((string *)&local_3c);
    std::allocator<char>::~allocator(&local_35);
    iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_58);
    if (iVar2 == 0) {
                    /* try { // try from 0817330d to 08173326 has its CatchHandler @ 0817353c */
      LogManager::logFormat
                (1,"localtaiwan/System/TaiwanAuth.cpp","decrypt",0x83,
                 "[Taiwan, Auth] Invalid token format!");
      uVar8 = 0x84;
    }
    else {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::vector(local_64);
      iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_58);
      pcVar3 = (char *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                 (local_58,0);
                    /* try { // try from 0817335d to 08173512 has its CatchHandler @ 0817351a */
      local_1d = COpensslRSA::Decrypt((COpensslRSA *)&openSSLRSA_,pcVar3,iVar2,(vector *)local_64);
      if (local_1d == '\x01') {
        uVar4 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_64);
        if (uVar4 < 0x69) {
          memset(param_3,0,0x68);
          iVar2 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_64);
          __src = (void *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                    (local_64,0);
          memcpy(param_3,__src,iVar2 - 1);
          cVar1 = GarenaAuthData::getMobileAuth(param_3);
          uVar4 = GarenaAuthData::getGoldMemberType(param_3);
          uVar5 = GarenaAuthData::getGcaType(param_3);
          uVar8 = GarenaAuthData::getTimeStamp(param_3);
          uVar6 = GarenaAuthData::getUname(param_3);
          uVar7 = GarenaAuthData::getUid(param_3);
          cMyTrace::cMyTrace(local_34,"decrypt",0x99,0);
          cMyTrace::operator()
                    (local_34,
                     "[Taiwan, Auth] Success!! Uid:%u, UserName:%s, Timestamp:%u, GcaType:%u, GoldMemberType:%u, Mobile:%u"
                     ,uVar7,uVar6,uVar8,uVar5 & 0xffff,uVar4 & 0xff,(uint)(cVar1 != '\0'));
          uVar8 = 0;
        }
        else {
          uVar8 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size(local_64);
          LogManager::logFormat
                    (1,"localtaiwan/System/TaiwanAuth.cpp","decrypt",0x92,
                     "[Taiwan, Auth] Invalid decrypted token length! (buffer_size:%u, token_size:%u)"
                     ,0x68,uVar8);
          uVar8 = 0x93;
        }
      }
      else {
        LogManager::logFormat
                  (1,"localtaiwan/System/TaiwanAuth.cpp","decrypt",0x8b,
                   "[Taiwan, Auth] Decrypt token failed!");
        uVar8 = 0x8c;
      }
                    /* try { // try from 08173535 to 08173539 has its CatchHandler @ 0817353c */
      std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_64);
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector(local_58);
  }
  return uVar8;
}
```
