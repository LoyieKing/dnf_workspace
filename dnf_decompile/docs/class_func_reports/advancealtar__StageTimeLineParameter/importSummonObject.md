# importSummonObject

`_ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv`

`advancealtar::StageTimeLineParameter::importSummonObject()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageTimeLineParameter` | `0x0889a21e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889a21e  _ZN12advancealtar22StageTimeLineParameter18importSummonObjectEv
#           advancealtar::StageTimeLineParameter::importSummonObject()
# range [0x0889a21e, 0x0889a56d]
0889a21e +0x000:  push   %ebp
0889a21f +0x001:  mov    %esp,%ebp
0889a221 +0x003:  push   %esi
0889a222 +0x004:  push   %ebx
0889a223 +0x005:  sub    $0xa0,%esp
0889a229 +0x00b:  movb   $0x0,-0x61(%ebp)
0889a22d +0x00f:  jmp    0889a230 <+0x12>
0889a22f +0x011:  nop
0889a230 +0x012:  lea    -0x90(%ebp),%eax
0889a236 +0x018:  mov    %eax,(%esp)
0889a239 +0x01b:  call   08134650 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x257>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x257
0889a23e +0x020:  lea    -0x61(%ebp),%eax
0889a241 +0x023:  mov    %eax,(%esp)
0889a244 +0x026:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a249 +0x02b:  mov    %eax,-0x90(%ebp)
0889a24f +0x031:  movzbl -0x61(%ebp),%eax
0889a253 +0x035:  xor    $0x1,%eax
0889a256 +0x038:  test   %al,%al
0889a258 +0x03a:  je     0889a264 <+0x46>
0889a25a +0x03c:  mov    $0x0,%ebx
0889a25f +0x041:  jmp    0889a561 <+0x343>
0889a264 +0x046:  lea    -0x68(%ebp),%eax
0889a267 +0x049:  mov    %eax,(%esp)
0889a26a +0x04c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889a26f +0x051:  lea    -0x68(%ebp),%eax
0889a272 +0x054:  mov    %eax,(%esp)
0889a275 +0x057:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889a27a +0x05c:  xor    $0x1,%eax
0889a27d +0x05f:  test   %al,%al
0889a27f +0x061:  je     0889a290 <+0x72>
0889a281 +0x063:  mov    $0x20b,%ebx
0889a286 +0x068:  mov    $0x0,%esi
0889a28b +0x06d:  jmp    0889a54e <+0x330>
0889a290 +0x072:  movl   $"enemy",0x4(%esp)
0889a298 +0x07a:  lea    -0x68(%ebp),%eax
0889a29b +0x07d:  mov    %eax,(%esp)
0889a29e +0x080:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a2a3 +0x085:  test   %al,%al
0889a2a5 +0x087:  je     0889a2b0 <+0x92>
0889a2a7 +0x089:  movb   $0x1,-0x8c(%ebp)
0889a2ae +0x090:  jmp    0889a2fa <+0xdc>
0889a2b0 +0x092:  movl   $"friend",0x4(%esp)
0889a2b8 +0x09a:  lea    -0x68(%ebp),%eax
0889a2bb +0x09d:  mov    %eax,(%esp)
0889a2be +0x0a0:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a2c3 +0x0a5:  test   %al,%al
0889a2c5 +0x0a7:  je     0889a2d0 <+0xb2>
0889a2c7 +0x0a9:  movb   $0x0,-0x8c(%ebp)
0889a2ce +0x0b0:  jmp    0889a2fa <+0xdc>
0889a2d0 +0x0b2:  lea    -0x68(%ebp),%eax
0889a2d3 +0x0b5:  mov    %eax,(%esp)
0889a2d6 +0x0b8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0889a2db +0x0bd:  mov    %eax,0x4(%esp)
0889a2df +0x0c1:  movl   $"advancealtar : SummonObject.isEnemy undefined='%s'\n",(%esp)
0889a2e6 +0x0c8:  call   0807db60 <_init+0x458>
0889a2eb +0x0cd:  mov    $0x218,%ebx
0889a2f0 +0x0d2:  mov    $0x0,%esi
0889a2f5 +0x0d7:  jmp    0889a54e <+0x330>
0889a2fa +0x0dc:  lea    -0x6c(%ebp),%eax
0889a2fd +0x0df:  mov    %eax,(%esp)
0889a300 +0x0e2:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0889a305 +0x0e7:  lea    -0x6c(%ebp),%eax
0889a308 +0x0ea:  mov    %eax,(%esp)
0889a30b +0x0ed:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0889a310 +0x0f2:  xor    $0x1,%eax
0889a313 +0x0f5:  test   %al,%al
0889a315 +0x0f7:  je     0889a326 <+0x108>
0889a317 +0x0f9:  mov    $0x21d,%ebx
0889a31c +0x0fe:  mov    $0x0,%esi
0889a321 +0x103:  jmp    0889a516 <+0x2f8>
0889a326 +0x108:  movl   $"normal",0x4(%esp)
0889a32e +0x110:  lea    -0x6c(%ebp),%eax
0889a331 +0x113:  mov    %eax,(%esp)
0889a334 +0x116:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a339 +0x11b:  test   %al,%al
0889a33b +0x11d:  je     0889a349 <+0x12b>
0889a33d +0x11f:  movl   $0x0,-0x88(%ebp)
0889a347 +0x129:  jmp    0889a3b9 <+0x19b>
0889a349 +0x12b:  movl   $"named",0x4(%esp)
0889a351 +0x133:  lea    -0x6c(%ebp),%eax
0889a354 +0x136:  mov    %eax,(%esp)
0889a357 +0x139:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a35c +0x13e:  test   %al,%al
0889a35e +0x140:  je     0889a36c <+0x14e>
0889a360 +0x142:  movl   $0x1,-0x88(%ebp)
0889a36a +0x14c:  jmp    0889a3b9 <+0x19b>
0889a36c +0x14e:  movl   $"boss",0x4(%esp)
0889a374 +0x156:  lea    -0x6c(%ebp),%eax
0889a377 +0x159:  mov    %eax,(%esp)
0889a37a +0x15c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0889a37f +0x161:  test   %al,%al
0889a381 +0x163:  je     0889a38f <+0x171>
0889a383 +0x165:  movl   $0x2,-0x88(%ebp)
0889a38d +0x16f:  jmp    0889a3b9 <+0x19b>
0889a38f +0x171:  lea    -0x6c(%ebp),%eax
0889a392 +0x174:  mov    %eax,(%esp)
0889a395 +0x177:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0889a39a +0x17c:  mov    %eax,0x4(%esp)
0889a39e +0x180:  movl   $"advancealtar : SummonObject.Type undefined='%s'\n",(%esp)
0889a3a5 +0x187:  call   0807db60 <_init+0x458>
0889a3aa +0x18c:  mov    $0x22e,%ebx
0889a3af +0x191:  mov    $0x0,%esi
0889a3b4 +0x196:  jmp    0889a516 <+0x2f8>
0889a3b9 +0x19b:  lea    -0x61(%ebp),%eax
0889a3bc +0x19e:  mov    %eax,(%esp)
0889a3bf +0x1a1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a3c4 +0x1a6:  mov    %eax,-0x84(%ebp)
0889a3ca +0x1ac:  movzbl -0x61(%ebp),%eax
0889a3ce +0x1b0:  xor    $0x1,%eax
0889a3d1 +0x1b3:  test   %al,%al
0889a3d3 +0x1b5:  je     0889a3e4 <+0x1c6>
0889a3d5 +0x1b7:  mov    $0x232,%ebx
0889a3da +0x1bc:  mov    $0x0,%esi
0889a3df +0x1c1:  jmp    0889a516 <+0x2f8>
0889a3e4 +0x1c6:  lea    -0x61(%ebp),%eax
0889a3e7 +0x1c9:  mov    %eax,(%esp)
0889a3ea +0x1cc:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a3ef +0x1d1:  mov    %ax,-0x80(%ebp)
0889a3f3 +0x1d5:  movzbl -0x61(%ebp),%eax
0889a3f7 +0x1d9:  xor    $0x1,%eax
0889a3fa +0x1dc:  test   %al,%al
0889a3fc +0x1de:  je     0889a40d <+0x1ef>
0889a3fe +0x1e0:  mov    $0x235,%ebx
0889a403 +0x1e5:  mov    $0x0,%esi
0889a408 +0x1ea:  jmp    0889a516 <+0x2f8>
0889a40d +0x1ef:  lea    -0x61(%ebp),%eax
0889a410 +0x1f2:  mov    %eax,(%esp)
0889a413 +0x1f5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a418 +0x1fa:  mov    %eax,-0x7c(%ebp)
0889a41b +0x1fd:  movzbl -0x61(%ebp),%eax
0889a41f +0x201:  xor    $0x1,%eax
0889a422 +0x204:  test   %al,%al
0889a424 +0x206:  je     0889a435 <+0x217>
0889a426 +0x208:  mov    $0x238,%ebx
0889a42b +0x20d:  mov    $0x0,%esi
0889a430 +0x212:  jmp    0889a516 <+0x2f8>
0889a435 +0x217:  lea    -0x61(%ebp),%eax
0889a438 +0x21a:  mov    %eax,(%esp)
0889a43b +0x21d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a440 +0x222:  mov    %eax,-0x78(%ebp)
0889a443 +0x225:  movzbl -0x61(%ebp),%eax
0889a447 +0x229:  xor    $0x1,%eax
0889a44a +0x22c:  test   %al,%al
0889a44c +0x22e:  je     0889a45d <+0x23f>
0889a44e +0x230:  mov    $0x23b,%ebx
0889a453 +0x235:  mov    $0x0,%esi
0889a458 +0x23a:  jmp    0889a516 <+0x2f8>
0889a45d +0x23f:  lea    -0x61(%ebp),%eax
0889a460 +0x242:  mov    %eax,(%esp)
0889a463 +0x245:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a468 +0x24a:  mov    %eax,-0x74(%ebp)
0889a46b +0x24d:  movzbl -0x61(%ebp),%eax
0889a46f +0x251:  xor    $0x1,%eax
0889a472 +0x254:  test   %al,%al
0889a474 +0x256:  je     0889a485 <+0x267>
0889a476 +0x258:  mov    $0x23e,%ebx
0889a47b +0x25d:  mov    $0x0,%esi
0889a480 +0x262:  jmp    0889a516 <+0x2f8>
0889a485 +0x267:  lea    -0x61(%ebp),%eax
0889a488 +0x26a:  mov    %eax,(%esp)
0889a48b +0x26d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0889a490 +0x272:  mov    %eax,-0x70(%ebp)
0889a493 +0x275:  movzbl -0x61(%ebp),%eax
0889a497 +0x279:  xor    $0x1,%eax
0889a49a +0x27c:  test   %al,%al
0889a49c +0x27e:  je     0889a4aa <+0x28c>
0889a49e +0x280:  mov    $0x241,%ebx
0889a4a3 +0x285:  mov    $0x0,%esi
0889a4a8 +0x28a:  jmp    0889a516 <+0x2f8>
0889a4aa +0x28c:  lea    -0x30(%ebp),%eax
0889a4ad +0x28f:  lea    -0x90(%ebp),%edx
0889a4b3 +0x295:  mov    %edx,0x8(%esp)
0889a4b7 +0x299:  lea    -0x90(%ebp),%edx
0889a4bd +0x29f:  mov    %edx,0x4(%esp)
0889a4c1 +0x2a3:  mov    %eax,(%esp)
0889a4c4 +0x2a6:  call   0889c06d <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x736>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x736
0889a4c9 +0x2ab:  sub    $0x4,%esp
0889a4cc +0x2ae:  lea    -0x30(%ebp),%eax
0889a4cf +0x2b1:  mov    %eax,0x4(%esp)
0889a4d3 +0x2b5:  lea    -0x58(%ebp),%eax
0889a4d6 +0x2b8:  mov    %eax,(%esp)
0889a4d9 +0x2bb:  call   0889c0ac <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x775>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x775
0889a4de +0x2c0:  mov    0x8(%ebp),%edx
0889a4e1 +0x2c3:  lea    -0x60(%ebp),%eax
0889a4e4 +0x2c6:  lea    -0x58(%ebp),%ecx
0889a4e7 +0x2c9:  mov    %ecx,0x8(%esp)
0889a4eb +0x2cd:  mov    %edx,0x4(%esp)
0889a4ef +0x2d1:  mov    %eax,(%esp)
0889a4f2 +0x2d4:  call   0889c10c <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x7d5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0x7d5
0889a4f7 +0x2d9:  sub    $0x4,%esp
0889a4fa +0x2dc:  mov    $0x1,%esi
0889a4ff +0x2e1:  jmp    0889a516 <+0x2f8>
0889a501 +0x2e3:  mov    %edx,%ebx
0889a503 +0x2e5:  mov    %eax,%esi
0889a505 +0x2e7:  lea    -0x6c(%ebp),%eax
0889a508 +0x2ea:  mov    %eax,(%esp)
0889a50b +0x2ed:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a510 +0x2f2:  mov    %esi,%eax
0889a512 +0x2f4:  mov    %ebx,%edx
0889a514 +0x2f6:  jmp    0889a533 <+0x315>
0889a516 +0x2f8:  lea    -0x6c(%ebp),%eax
0889a519 +0x2fb:  mov    %eax,(%esp)
0889a51c +0x2fe:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a521 +0x303:  test   %esi,%esi
0889a523 +0x305:  jne    0889a52c <+0x30e>
0889a525 +0x307:  mov    $0x0,%esi
0889a52a +0x30c:  jmp    0889a54e <+0x330>
0889a52c +0x30e:  mov    $0x1,%esi
0889a531 +0x313:  jmp    0889a54e <+0x330>
0889a533 +0x315:  mov    %edx,%ebx
0889a535 +0x317:  mov    %eax,%esi
0889a537 +0x319:  lea    -0x68(%ebp),%eax
0889a53a +0x31c:  mov    %eax,(%esp)
0889a53d +0x31f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a542 +0x324:  mov    %esi,%eax
0889a544 +0x326:  mov    %ebx,%edx
0889a546 +0x328:  mov    %eax,(%esp)
0889a549 +0x32b:  call   08ae3750 <_Unwind_Resume>
0889a54e +0x330:  lea    -0x68(%ebp),%eax
0889a551 +0x333:  mov    %eax,(%esp)
0889a554 +0x336:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0889a559 +0x33b:  test   %esi,%esi
0889a55b +0x33d:  jne    0889a22f <+0x11>
0889a561 +0x343:  mov    %ebx,%eax
0889a563 +0x345:  lea    -0x8(%ebp),%esp
0889a566 +0x348:  add    $0x0,%esp
0889a569 +0x34b:  pop    %ebx
0889a56a +0x34c:  pop    %esi
0889a56b +0x34d:  pop    %ebp
0889a56c +0x34e:  ret
0889a56d +0x34f:  nop
```

## 反编译 C

```c
// advancealtar::StageTimeLineParameter::importSummonObject @ 0x889a21e

/* advancealtar::StageTimeLineParameter::importSummonObject() */

undefined4 advancealtar::StageTimeLineParameter::importSummonObject(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  string local_70;
  string local_6c;
  bool local_65;
  pair local_64 [8];
  pair<int_const,advancealtar::_SummonObject> local_5c [40];
  int local_34 [10];
  
  local_65 = false;
  do {
    _SummonObject::_SummonObject((_SummonObject *)&local_94);
    local_94 = ScanInt(&local_65);
    if (local_65 != true) {
      return 0;
    }
    std::string::string((string *)&local_6c);
                    /* try { // try from 0889a275 to 0889a304 has its CatchHandler @ 0889a533 */
    cVar1 = ScanStr((string *)&local_6c);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_6c,"enemy");
      if (bVar2) {
        local_90 = 1;
      }
      else {
        bVar2 = std::operator==(&local_6c,"friend");
        if (!bVar2) {
          uVar3 = std::string::c_str((string *)&local_6c);
          printf("advancealtar : SummonObject.isEnemy undefined=\'%s\'\n",uVar3);
          unaff_EBX = 0x218;
          bVar2 = false;
          goto LAB_0889a54e;
        }
        local_90 = 0;
      }
      std::string::string((string *)&local_70);
                    /* try { // try from 0889a30b to 0889a4f6 has its CatchHandler @ 0889a501 */
      cVar1 = ScanStr((string *)&local_70);
      if (cVar1 == '\x01') {
        bVar2 = std::operator==(&local_70,"normal");
        if (bVar2) {
          local_8c = 0;
        }
        else {
          bVar2 = std::operator==(&local_70,"named");
          if (bVar2) {
            local_8c = 1;
          }
          else {
            bVar2 = std::operator==(&local_70,"boss");
            if (!bVar2) {
              uVar3 = std::string::c_str((string *)&local_70);
              printf("advancealtar : SummonObject.Type undefined=\'%s\'\n",uVar3);
              unaff_EBX = 0x22e;
              bVar2 = false;
              goto LAB_0889a516;
            }
            local_8c = 2;
          }
        }
        local_88 = ScanInt(&local_65);
        if (local_65 == true) {
          local_84 = ScanInt(&local_65);
          if (local_65 == true) {
            local_80 = ScanInt(&local_65);
            if (local_65 == true) {
              local_7c = ScanInt(&local_65);
              if (local_65 == true) {
                local_78 = ScanInt(&local_65);
                if (local_65 == true) {
                  local_74 = ScanInt(&local_65);
                  if (local_65 == true) {
                    std::make_pair<int&,advancealtar::_SummonObject&>
                              (local_34,(_SummonObject *)&local_94);
                    std::pair<int_const,advancealtar::_SummonObject>::
                    pair<int,advancealtar::_SummonObject>(local_5c,(pair *)local_34);
                    std::
                    map<int,advancealtar::_SummonObject,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_SummonObject>>>
                    ::insert(local_64);
                    bVar2 = true;
                  }
                  else {
                    unaff_EBX = 0x241;
                    bVar2 = false;
                  }
                }
                else {
                  unaff_EBX = 0x23e;
                  bVar2 = false;
                }
              }
              else {
                unaff_EBX = 0x23b;
                bVar2 = false;
              }
            }
            else {
              unaff_EBX = 0x238;
              bVar2 = false;
            }
          }
          else {
            unaff_EBX = 0x235;
            bVar2 = false;
          }
        }
        else {
          unaff_EBX = 0x232;
          bVar2 = false;
        }
      }
      else {
        unaff_EBX = 0x21d;
        bVar2 = false;
      }
LAB_0889a516:
                    /* try { // try from 0889a51c to 0889a520 has its CatchHandler @ 0889a533 */
      std::string::~string((string *)&local_70);
      if (bVar2) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      unaff_EBX = 0x20b;
      bVar2 = false;
    }
LAB_0889a54e:
    std::string::~string((string *)&local_6c);
    if (!bVar2) {
      return unaff_EBX;
    }
  } while( true );
}
```
