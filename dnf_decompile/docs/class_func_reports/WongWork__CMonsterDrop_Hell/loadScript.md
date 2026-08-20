# loadScript

`_ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc`

`WongWork::CMonsterDrop_Hell::loadScript(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop_Hell` | `0x08535344` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535344  _ZN8WongWork17CMonsterDrop_Hell10loadScriptEPKc
#           WongWork::CMonsterDrop_Hell::loadScript(char const*)
# range [0x08535344, 0x08535725]
08535344 +0x000:  push   %ebp
08535345 +0x001:  mov    %esp,%ebp
08535347 +0x003:  push   %esi
08535348 +0x004:  push   %ebx
08535349 +0x005:  add    $0xffffff80,%esp
0853534c +0x008:  mov    0xc(%ebp),%eax
0853534f +0x00b:  mov    %eax,0x4(%esp)
08535353 +0x00f:  movl   $"",(%esp)
0853535a +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0853535f +0x01b:  xor    $0x1,%eax
08535362 +0x01e:  test   %al,%al
08535364 +0x020:  je     08535370 <+0x2c>
08535366 +0x022:  mov    $0x302,%ebx
0853536b +0x027:  jmp    0853571d <+0x3d9>
08535370 +0x02c:  lea    -0x48(%ebp),%eax
08535373 +0x02f:  mov    %eax,(%esp)
08535376 +0x032:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0853537b +0x037:  movl   $0x0,-0x28(%ebp)
08535382 +0x03e:  movb   $0x0,-0x49(%ebp)
08535386 +0x042:  jmp    08535389 <+0x45>
08535388 +0x044:  nop
08535389 +0x045:  movl   $0x1,0x4(%esp)
08535391 +0x04d:  lea    -0x48(%ebp),%eax
08535394 +0x050:  mov    %eax,(%esp)
08535397 +0x053:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0853539c +0x058:  xor    $0x1,%eax
0853539f +0x05b:  test   %al,%al
085353a1 +0x05d:  jne    085356ca <+0x386>
085353a7 +0x063:  movl   $"[basis of rarity dicision]",0x4(%esp)
085353af +0x06b:  lea    -0x48(%ebp),%eax
085353b2 +0x06e:  mov    %eax,(%esp)
085353b5 +0x071:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085353ba +0x076:  test   %al,%al
085353bc +0x078:  je     0853545a <+0x116>
085353c2 +0x07e:  lea    -0x49(%ebp),%eax
085353c5 +0x081:  mov    %eax,(%esp)
085353c8 +0x084:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085353cd +0x089:  mov    %eax,-0x24(%ebp)
085353d0 +0x08c:  movzbl -0x49(%ebp),%eax
085353d4 +0x090:  xor    $0x1,%eax
085353d7 +0x093:  test   %al,%al
085353d9 +0x095:  je     085353e5 <+0xa1>
085353db +0x097:  mov    $0x311,%ebx
085353e0 +0x09c:  jmp    08535712 <+0x3ce>
085353e5 +0x0a1:  movl   $0x1,-0x20(%ebp)
085353ec +0x0a8:  jmp    08535445 <+0x101>
085353ee +0x0aa:  movl   $0x0,-0x1c(%ebp)
085353f5 +0x0b1:  jmp    08535436 <+0xf2>
085353f7 +0x0b3:  mov    -0x20(%ebp),%ebx
085353fa +0x0b6:  mov    -0x1c(%ebp),%esi
085353fd +0x0b9:  lea    -0x49(%ebp),%eax
08535400 +0x0bc:  mov    %eax,(%esp)
08535403 +0x0bf:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08535408 +0x0c4:  mov    %eax,%edx
0853540a +0x0c6:  mov    0x8(%ebp),%ecx
0853540d +0x0c9:  mov    %ebx,%eax
0853540f +0x0cb:  add    %eax,%eax
08535411 +0x0cd:  add    %ebx,%eax
08535413 +0x0cf:  add    %eax,%eax
08535415 +0x0d1:  add    %esi,%eax
08535417 +0x0d3:  add    $0xc,%eax
0853541a +0x0d6:  mov    %edx,(%ecx,%eax,4)
0853541d +0x0d9:  movzbl -0x49(%ebp),%eax
08535421 +0x0dd:  xor    $0x1,%eax
08535424 +0x0e0:  test   %al,%al
08535426 +0x0e2:  je     08535432 <+0xee>
08535428 +0x0e4:  mov    $0x319,%ebx
0853542d +0x0e9:  jmp    08535712 <+0x3ce>
08535432 +0x0ee:  addl   $0x1,-0x1c(%ebp)
08535436 +0x0f2:  cmpl   $0x5,-0x1c(%ebp)
0853543a +0x0f6:  setle  %al
0853543d +0x0f9:  test   %al,%al
0853543f +0x0fb:  jne    085353f7 <+0xb3>
08535441 +0x0fd:  addl   $0x1,-0x20(%ebp)
08535445 +0x101:  mov    -0x24(%ebp),%eax
08535448 +0x104:  add    $0x1,%eax
0853544b +0x107:  cmp    -0x20(%ebp),%eax
0853544e +0x10a:  setg   %al
08535451 +0x10d:  test   %al,%al
08535453 +0x10f:  jne    085353ee <+0xaa>
08535455 +0x111:  jmp    08535389 <+0x45>
0853545a +0x116:  movl   $"[drop prob count]",0x4(%esp)
08535462 +0x11e:  lea    -0x48(%ebp),%eax
08535465 +0x121:  mov    %eax,(%esp)
08535468 +0x124:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0853546d +0x129:  test   %al,%al
0853546f +0x12b:  je     085354ff <+0x1bb>
08535475 +0x131:  lea    -0x44(%ebp),%edx
08535478 +0x134:  mov    $0x0,%ecx
0853547d +0x139:  mov    $0x1c,%eax
08535482 +0x13e:  mov    %eax,%ebx
08535484 +0x140:  and    $0xfffffffc,%ebx
08535487 +0x143:  mov    $0x0,%eax
0853548c +0x148:  mov    %ecx,(%edx,%eax,1)
0853548f +0x14b:  add    $0x4,%eax
08535492 +0x14e:  cmp    %ebx,%eax
08535494 +0x150:  jb     0853548c <+0x148>
08535496 +0x152:  add    %eax,%edx
08535498 +0x154:  lea    -0x49(%ebp),%eax
0853549b +0x157:  mov    %eax,(%esp)
0853549e +0x15a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085354a3 +0x15f:  mov    0x8(%ebp),%edx
085354a6 +0x162:  lea    0x18(%edx),%ecx
085354a9 +0x165:  mov    -0x44(%ebp),%edx
085354ac +0x168:  mov    %edx,0x8(%esp)
085354b0 +0x16c:  mov    -0x40(%ebp),%edx
085354b3 +0x16f:  mov    %edx,0xc(%esp)
085354b7 +0x173:  mov    -0x3c(%ebp),%edx
085354ba +0x176:  mov    %edx,0x10(%esp)
085354be +0x17a:  mov    -0x38(%ebp),%edx
085354c1 +0x17d:  mov    %edx,0x14(%esp)
085354c5 +0x181:  mov    -0x34(%ebp),%edx
085354c8 +0x184:  mov    %edx,0x18(%esp)
085354cc +0x188:  mov    -0x30(%ebp),%edx
085354cf +0x18b:  mov    %edx,0x1c(%esp)
085354d3 +0x18f:  mov    -0x2c(%ebp),%edx
085354d6 +0x192:  mov    %edx,0x20(%esp)
085354da +0x196:  mov    %eax,0x4(%esp)
085354de +0x19a:  mov    %ecx,(%esp)
085354e1 +0x19d:  call   0853afec <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1278>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1278
085354e6 +0x1a2:  movzbl -0x49(%ebp),%eax
085354ea +0x1a6:  xor    $0x1,%eax
085354ed +0x1a9:  test   %al,%al
085354ef +0x1ab:  je     08535388 <+0x44>
085354f5 +0x1b1:  mov    $0x320,%ebx
085354fa +0x1b6:  jmp    08535712 <+0x3ce>
085354ff +0x1bb:  movl   $"[dungeon difficulty drop prob]",0x4(%esp)
08535507 +0x1c3:  lea    -0x48(%ebp),%eax
0853550a +0x1c6:  mov    %eax,(%esp)
0853550d +0x1c9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08535512 +0x1ce:  test   %al,%al
08535514 +0x1d0:  je     085355f0 <+0x2ac>
0853551a +0x1d6:  movl   $0x0,-0x18(%ebp)
08535521 +0x1dd:  jmp    085355cf <+0x28b>
08535526 +0x1e2:  mov    0x8(%ebp),%eax
08535529 +0x1e5:  lea    0x18(%eax),%edx
0853552c +0x1e8:  mov    -0x18(%ebp),%eax
0853552f +0x1eb:  mov    %eax,0x4(%esp)
08535533 +0x1ef:  mov    %edx,(%esp)
08535536 +0x1f2:  call   0853b0a0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x132c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x132c
0853553b +0x1f7:  mov    %eax,-0x14(%ebp)
0853553e +0x1fa:  lea    -0x49(%ebp),%eax
08535541 +0x1fd:  mov    %eax,(%esp)
08535544 +0x200:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08535549 +0x205:  mov    -0x14(%ebp),%edx
0853554c +0x208:  mov    %eax,(%edx)
0853554e +0x20a:  movzbl -0x49(%ebp),%eax
08535552 +0x20e:  xor    $0x1,%eax
08535555 +0x211:  test   %al,%al
08535557 +0x213:  je     08535563 <+0x21f>
08535559 +0x215:  mov    $0x328,%ebx
0853555e +0x21a:  jmp    08535712 <+0x3ce>
08535563 +0x21f:  lea    -0x49(%ebp),%eax
08535566 +0x222:  mov    %eax,(%esp)
08535569 +0x225:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853556e +0x22a:  mov    -0x14(%ebp),%edx
08535571 +0x22d:  mov    %eax,0x4(%edx)
08535574 +0x230:  movzbl -0x49(%ebp),%eax
08535578 +0x234:  xor    $0x1,%eax
0853557b +0x237:  test   %al,%al
0853557d +0x239:  je     08535589 <+0x245>
0853557f +0x23b:  mov    $0x32a,%ebx
08535584 +0x240:  jmp    08535712 <+0x3ce>
08535589 +0x245:  movl   $0x0,-0x10(%ebp)
08535590 +0x24c:  jmp    085355c0 <+0x27c>
08535592 +0x24e:  mov    -0x10(%ebp),%ebx
08535595 +0x251:  lea    -0x49(%ebp),%eax
08535598 +0x254:  mov    %eax,(%esp)
0853559b +0x257:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
085355a0 +0x25c:  mov    -0x14(%ebp),%edx
085355a3 +0x25f:  mov    %eax,0x8(%edx,%ebx,4)
085355a7 +0x263:  movzbl -0x49(%ebp),%eax
085355ab +0x267:  xor    $0x1,%eax
085355ae +0x26a:  test   %al,%al
085355b0 +0x26c:  je     085355bc <+0x278>
085355b2 +0x26e:  mov    $0x332,%ebx
085355b7 +0x273:  jmp    08535712 <+0x3ce>
085355bc +0x278:  addl   $0x1,-0x10(%ebp)
085355c0 +0x27c:  cmpl   $0x4,-0x10(%ebp)
085355c4 +0x280:  setle  %al
085355c7 +0x283:  test   %al,%al
085355c9 +0x285:  jne    08535592 <+0x24e>
085355cb +0x287:  addl   $0x1,-0x18(%ebp)
085355cf +0x28b:  mov    0x8(%ebp),%eax
085355d2 +0x28e:  add    $0x18,%eax
085355d5 +0x291:  mov    %eax,(%esp)
085355d8 +0x294:  call   0853b07e <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x130a>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x130a
085355dd +0x299:  cmp    -0x18(%ebp),%eax
085355e0 +0x29c:  seta   %al
085355e3 +0x29f:  test   %al,%al
085355e5 +0x2a1:  jne    08535526 <+0x1e2>
085355eb +0x2a7:  jmp    08535389 <+0x45>
085355f0 +0x2ac:  movl   $"[item drop ref table]",0x4(%esp)
085355f8 +0x2b4:  lea    -0x48(%ebp),%eax
085355fb +0x2b7:  mov    %eax,(%esp)
085355fe +0x2ba:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08535603 +0x2bf:  test   %al,%al
08535605 +0x2c1:  je     085356c3 <+0x37f>
0853560b +0x2c7:  mov    0x8(%ebp),%eax
0853560e +0x2ca:  movb   $0x0,0xc0(%eax)
08535615 +0x2d1:  mov    0x8(%ebp),%eax
08535618 +0x2d4:  movb   $0x0,0xc1(%eax)
0853561f +0x2db:  movl   $0x1,-0xc(%ebp)
08535626 +0x2e2:  jmp    085356ac <+0x368>
0853562b +0x2e7:  lea    -0x49(%ebp),%eax
0853562e +0x2ea:  mov    %eax,(%esp)
08535631 +0x2ed:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08535636 +0x2f2:  mov    %eax,-0x28(%ebp)
08535639 +0x2f5:  movzbl -0x49(%ebp),%eax
0853563d +0x2f9:  xor    $0x1,%eax
08535640 +0x2fc:  test   %al,%al
08535642 +0x2fe:  je     0853564e <+0x30a>
08535644 +0x300:  mov    $0x33f,%ebx
08535649 +0x305:  jmp    08535712 <+0x3ce>
0853564e +0x30a:  mov    -0x28(%ebp),%ebx
08535651 +0x30d:  lea    -0x49(%ebp),%eax
08535654 +0x310:  mov    %eax,(%esp)
08535657 +0x313:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853565c +0x318:  mov    %eax,%edx
0853565e +0x31a:  mov    0x8(%ebp),%eax
08535661 +0x31d:  lea    0x60(%ebx),%ecx
08535664 +0x320:  mov    %dl,(%eax,%ecx,2)
08535667 +0x323:  movzbl -0x49(%ebp),%eax
0853566b +0x327:  xor    $0x1,%eax
0853566e +0x32a:  test   %al,%al
08535670 +0x32c:  je     0853567c <+0x338>
08535672 +0x32e:  mov    $0x343,%ebx
08535677 +0x333:  jmp    08535712 <+0x3ce>
0853567c +0x338:  mov    -0x28(%ebp),%ebx
0853567f +0x33b:  lea    -0x49(%ebp),%eax
08535682 +0x33e:  mov    %eax,(%esp)
08535685 +0x341:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0853568a +0x346:  mov    %eax,%edx
0853568c +0x348:  mov    0x8(%ebp),%eax
0853568f +0x34b:  lea    0x60(%ebx),%ecx
08535692 +0x34e:  mov    %dl,0x1(%eax,%ecx,2)
08535696 +0x352:  movzbl -0x49(%ebp),%eax
0853569a +0x356:  xor    $0x1,%eax
0853569d +0x359:  test   %al,%al
0853569f +0x35b:  je     085356a8 <+0x364>
085356a1 +0x35d:  mov    $0x347,%ebx
085356a6 +0x362:  jmp    08535712 <+0x3ce>
085356a8 +0x364:  addl   $0x1,-0xc(%ebp)
085356ac +0x368:  cmpl   $0xc8,-0xc(%ebp)
085356b3 +0x36f:  setle  %al
085356b6 +0x372:  test   %al,%al
085356b8 +0x374:  jne    0853562b <+0x2e7>
085356be +0x37a:  jmp    08535389 <+0x45>
085356c3 +0x37f:  mov    $0x34b,%ebx
085356c8 +0x384:  jmp    08535712 <+0x3ce>
085356ca +0x386:  nop
085356cb +0x387:  mov    0x8(%ebp),%eax
085356ce +0x38a:  lea    0xc0(%eax),%edx
085356d4 +0x390:  mov    0x8(%ebp),%eax
085356d7 +0x393:  add    $0x254,%eax
085356dc +0x398:  movl   $0x1,0x8(%esp)
085356e4 +0x3a0:  mov    %edx,0x4(%esp)
085356e8 +0x3a4:  mov    %eax,(%esp)
085356eb +0x3a7:  call   0853466c <_ZN8WongWork17CItemGenRateTable13generateTableEPNS_16stGenItemRange_tEb>  ; WongWork::CItemGenRateTable::generateTable(WongWork::stGenItemRange_t*, bool)
085356f0 +0x3ac:  mov    $0x0,%ebx
085356f5 +0x3b1:  jmp    08535712 <+0x3ce>
085356f7 +0x3b3:  mov    %edx,%ebx
085356f9 +0x3b5:  mov    %eax,%esi
085356fb +0x3b7:  lea    -0x48(%ebp),%eax
085356fe +0x3ba:  mov    %eax,(%esp)
08535701 +0x3bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08535706 +0x3c2:  mov    %esi,%eax
08535708 +0x3c4:  mov    %ebx,%edx
0853570a +0x3c6:  mov    %eax,(%esp)
0853570d +0x3c9:  call   08ae3750 <_Unwind_Resume>
08535712 +0x3ce:  lea    -0x48(%ebp),%eax
08535715 +0x3d1:  mov    %eax,(%esp)
08535718 +0x3d4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0853571d +0x3d9:  mov    %ebx,%eax
0853571f +0x3db:  sub    $0xffffff80,%esp
08535722 +0x3de:  pop    %ebx
08535723 +0x3df:  pop    %esi
08535724 +0x3e0:  pop    %ebp
08535725 +0x3e1:  ret
```

## 反编译 C

```c
// WongWork::CMonsterDrop_Hell::loadScript @ 0x8535344

/* WongWork::CMonsterDrop_Hell::loadScript(char const*) */

undefined4 __thiscall WongWork::CMonsterDrop_Hell::loadScript(CMonsterDrop_Hell *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CMonsterDrop_Hell CVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  bool local_4d;
  string local_4c;
  undefined4 local_48 [7];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_4c);
    local_2c = 0;
    local_4d = false;
    do {
      while( true ) {
        while( true ) {
                    /* try { // try from 08535397 to 085356ef has its CatchHandler @ 085356f7 */
          cVar2 = ScanType((string *)&local_4c,true);
          if (cVar2 != '\x01') {
            CItemGenRateTable::generateTable
                      ((CItemGenRateTable *)(this + 0x254),(stGenItemRange_t *)(this + 0xc0),true);
            uVar7 = 0;
            goto LAB_08535712;
          }
          bVar3 = std::operator==(&local_4c,"[basis of rarity dicision]");
          if (!bVar3) break;
          local_28 = ScanInt(&local_4d);
          if (local_4d != true) {
            uVar7 = 0x311;
            goto LAB_08535712;
          }
          for (local_24 = 1; local_24 < local_28 + 1; local_24 = local_24 + 1) {
            for (local_20 = 0; iVar1 = local_20, iVar6 = local_24, local_20 < 6;
                local_20 = local_20 + 1) {
              uVar7 = ScanInt(&local_4d);
              *(undefined4 *)(this + (iVar6 * 6 + iVar1) * 4 + 0x30) = uVar7;
              if (local_4d != true) {
                uVar7 = 0x319;
                goto LAB_08535712;
              }
            }
          }
        }
        bVar3 = std::operator==(&local_4c,"[drop prob count]");
        if (bVar3) break;
        bVar3 = std::operator==(&local_4c,"[dungeon difficulty drop prob]");
        if (bVar3) {
          local_1c = 0;
          while (uVar5 = std::
                         vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                         ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                                 *)(this + 0x18)), local_1c < uVar5) {
            local_18 = (undefined4 *)
                       std::
                       vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                       ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                                     *)(this + 0x18),local_1c);
            uVar7 = ScanInt(&local_4d);
            *local_18 = uVar7;
            if (local_4d != true) {
              uVar7 = 0x328;
              goto LAB_08535712;
            }
            uVar7 = ScanInt(&local_4d);
            local_18[1] = uVar7;
            if (local_4d != true) {
              uVar7 = 0x32a;
              goto LAB_08535712;
            }
            for (local_14 = 0; iVar6 = local_14, local_14 < 5; local_14 = local_14 + 1) {
              uVar7 = ScanInt(&local_4d);
              local_18[iVar6 + 2] = uVar7;
              if (local_4d != true) {
                uVar7 = 0x332;
                goto LAB_08535712;
              }
            }
            local_1c = local_1c + 1;
          }
        }
        else {
          bVar3 = std::operator==(&local_4c,"[item drop ref table]");
          if (!bVar3) {
            uVar7 = 0x34b;
            goto LAB_08535712;
          }
          this[0xc0] = (CMonsterDrop_Hell)0x0;
          this[0xc1] = (CMonsterDrop_Hell)0x0;
          for (local_10 = 1; local_10 < 0xc9; local_10 = local_10 + 1) {
            iVar6 = ScanInt(&local_4d);
            local_2c = iVar6;
            if (local_4d != true) {
              uVar7 = 0x33f;
              goto LAB_08535712;
            }
            CVar4 = (CMonsterDrop_Hell)ScanInt(&local_4d);
            iVar1 = local_2c;
            this[(iVar6 + 0x60) * 2] = CVar4;
            if (local_4d != true) {
              uVar7 = 0x343;
              goto LAB_08535712;
            }
            CVar4 = (CMonsterDrop_Hell)ScanInt(&local_4d);
            this[(iVar1 + 0x60) * 2 + 1] = CVar4;
            if (local_4d != true) {
              uVar7 = 0x347;
              goto LAB_08535712;
            }
          }
        }
      }
      uVar5 = 0;
      do {
        *(undefined4 *)((int)local_48 + uVar5) = 0;
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x1c);
      uVar7 = ScanInt(&local_4d);
      std::
      vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
      ::resize(this + 0x18,uVar7,local_48[0],local_48[1],local_48[2],local_48[3],local_48[4],
               local_48[5],local_48[6]);
    } while (local_4d == true);
    uVar7 = 800;
LAB_08535712:
    std::string::~string((string *)&local_4c);
  }
  else {
    uVar7 = 0x302;
  }
  return uVar7;
}
```
