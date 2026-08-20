# importAvatarColorVariation

`_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE`

`AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*)`

| 类 | 地址 |
|---|---|
| `AvatarVariation` | `0x088d444f` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d444f  _ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE
#           AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*)
# range [0x088d444f, 0x088d46d2]
088d444f +0x000:  push   %ebp
088d4450 +0x001:  mov    %esp,%ebp
088d4452 +0x003:  push   %esi
088d4453 +0x004:  push   %ebx
088d4454 +0x005:  sub    $0x60,%esp
088d4457 +0x008:  movl   $"Etc/AvatarColorVariation.etc",0x4(%esp)
088d445f +0x010:  movl   $"",(%esp)
088d4466 +0x017:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088d446b +0x01c:  xor    $0x1,%eax
088d446e +0x01f:  test   %al,%al
088d4470 +0x021:  je     088d447c <+0x2d>
088d4472 +0x023:  mov    $0x0,%ebx
088d4477 +0x028:  jmp    088d46c7 <+0x278>
088d447c +0x02d:  mov    0x8(%ebp),%eax
088d447f +0x030:  mov    %eax,(%esp)
088d4482 +0x033:  call   088d49b8 <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0x1c>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0x1c
088d4487 +0x038:  lea    -0x40(%ebp),%eax
088d448a +0x03b:  mov    %eax,(%esp)
088d448d +0x03e:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088d4492 +0x043:  movb   $0x0,-0x41(%ebp)
088d4496 +0x047:  movl   $0x0,-0xc(%ebp)
088d449d +0x04e:  jmp    088d44a3 <+0x54>
088d449f +0x050:  nop
088d44a0 +0x051:  jmp    088d44a3 <+0x54>
088d44a2 +0x053:  nop
088d44a3 +0x054:  movl   $0x1,0x4(%esp)
088d44ab +0x05c:  lea    -0x40(%ebp),%eax
088d44ae +0x05f:  mov    %eax,(%esp)
088d44b1 +0x062:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088d44b6 +0x067:  xor    $0x1,%eax
088d44b9 +0x06a:  test   %al,%al
088d44bb +0x06c:  je     088d44d2 <+0x83>
088d44bd +0x06e:  mov    $0x1,%ebx
088d44c2 +0x073:  lea    -0x40(%ebp),%eax
088d44c5 +0x076:  mov    %eax,(%esp)
088d44c8 +0x079:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d44cd +0x07e:  jmp    088d46c7 <+0x278>
088d44d2 +0x083:  movl   $"[avatar color map]",0x4(%esp)
088d44da +0x08b:  lea    -0x40(%ebp),%eax
088d44dd +0x08e:  mov    %eax,(%esp)
088d44e0 +0x091:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d44e5 +0x096:  test   %al,%al
088d44e7 +0x098:  je     088d449f <+0x50>
088d44e9 +0x09a:  lea    -0x44(%ebp),%eax
088d44ec +0x09d:  mov    %eax,(%esp)
088d44ef +0x0a0:  call   088d43f0 <_ZN15AvatarVariation8colorRGBC1Ev>  ; AvatarVariation::colorRGB::colorRGB()
088d44f4 +0x0a5:  lea    -0x41(%ebp),%eax
088d44f7 +0x0a8:  mov    %eax,(%esp)
088d44fa +0x0ab:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d44ff +0x0b0:  mov    %eax,-0x48(%ebp)
088d4502 +0x0b3:  movzbl -0x41(%ebp),%eax
088d4506 +0x0b7:  xor    $0x1,%eax
088d4509 +0x0ba:  test   %al,%al
088d450b +0x0bc:  je     088d4512 <+0xc3>
088d450d +0x0be:  jmp    088d46a7 <+0x258>
088d4512 +0x0c3:  lea    -0x41(%ebp),%eax
088d4515 +0x0c6:  mov    %eax,(%esp)
088d4518 +0x0c9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d451d +0x0ce:  mov    %al,-0x44(%ebp)
088d4520 +0x0d1:  movzbl -0x41(%ebp),%eax
088d4524 +0x0d5:  xor    $0x1,%eax
088d4527 +0x0d8:  test   %al,%al
088d4529 +0x0da:  je     088d4530 <+0xe1>
088d452b +0x0dc:  jmp    088d46a7 <+0x258>
088d4530 +0x0e1:  lea    -0x41(%ebp),%eax
088d4533 +0x0e4:  mov    %eax,(%esp)
088d4536 +0x0e7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d453b +0x0ec:  mov    %al,-0x43(%ebp)
088d453e +0x0ef:  movzbl -0x41(%ebp),%eax
088d4542 +0x0f3:  xor    $0x1,%eax
088d4545 +0x0f6:  test   %al,%al
088d4547 +0x0f8:  je     088d454e <+0xff>
088d4549 +0x0fa:  jmp    088d46a7 <+0x258>
088d454e +0x0ff:  lea    -0x41(%ebp),%eax
088d4551 +0x102:  mov    %eax,(%esp)
088d4554 +0x105:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d4559 +0x10a:  mov    %al,-0x42(%ebp)
088d455c +0x10d:  movzbl -0x41(%ebp),%eax
088d4560 +0x111:  xor    $0x1,%eax
088d4563 +0x114:  test   %al,%al
088d4565 +0x116:  je     088d456c <+0x11d>
088d4567 +0x118:  jmp    088d46a7 <+0x258>
088d456c +0x11d:  lea    -0x4c(%ebp),%eax
088d456f +0x120:  mov    %eax,(%esp)
088d4572 +0x123:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088d4577 +0x128:  lea    -0x4c(%ebp),%eax
088d457a +0x12b:  mov    %eax,(%esp)
088d457d +0x12e:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
088d4582 +0x133:  mov    %al,-0x41(%ebp)
088d4585 +0x136:  movzbl -0x41(%ebp),%eax
088d4589 +0x13a:  xor    $0x1,%eax
088d458c +0x13d:  test   %al,%al
088d458e +0x13f:  je     088d459a <+0x14b>
088d4590 +0x141:  mov    $0x0,%ebx
088d4595 +0x146:  jmp    088d468f <+0x240>
088d459a +0x14b:  lea    -0x2c(%ebp),%eax
088d459d +0x14e:  lea    -0x44(%ebp),%edx
088d45a0 +0x151:  mov    %edx,0x8(%esp)
088d45a4 +0x155:  lea    -0x48(%ebp),%edx
088d45a7 +0x158:  mov    %edx,0x4(%esp)
088d45ab +0x15c:  mov    %eax,(%esp)
088d45ae +0x15f:  call   088d49cb <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0x2f>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0x2f
088d45b3 +0x164:  sub    $0x4,%esp
088d45b6 +0x167:  lea    -0x2c(%ebp),%eax
088d45b9 +0x16a:  mov    %eax,0x4(%esp)
088d45bd +0x16e:  lea    -0x34(%ebp),%eax
088d45c0 +0x171:  mov    %eax,(%esp)
088d45c3 +0x174:  call   088d4a0a <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0x6e>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0x6e
088d45c8 +0x179:  mov    0x8(%ebp),%edx
088d45cb +0x17c:  lea    -0x3c(%ebp),%eax
088d45ce +0x17f:  lea    -0x34(%ebp),%ecx
088d45d1 +0x182:  mov    %ecx,0x8(%esp)
088d45d5 +0x186:  mov    %edx,0x4(%esp)
088d45d9 +0x18a:  mov    %eax,(%esp)
088d45dc +0x18d:  call   088d4a44 <_GLOBAL__I__ZN15AvatarVariation8colorRGBC2Ev+0xa8>  ; global constructors keyed to AvatarVariation::colorRGB::colorRGB()+0xa8
088d45e1 +0x192:  sub    $0x4,%esp
088d45e4 +0x195:  lea    -0x14(%ebp),%eax
088d45e7 +0x198:  lea    -0x4c(%ebp),%edx
088d45ea +0x19b:  mov    %edx,0x8(%esp)
088d45ee +0x19f:  lea    -0x48(%ebp),%edx
088d45f1 +0x1a2:  mov    %edx,0x4(%esp)
088d45f5 +0x1a6:  mov    %eax,(%esp)
088d45f8 +0x1a9:  call   0889598b <_GLOBAL__I__ZN8APSystem24CActionPointEtcParameter9ClearDataEv+0x339>  ; global constructors keyed to APSystem::CActionPointEtcParameter::ClearData()+0x339
088d45fd +0x1ae:  sub    $0x4,%esp
088d4600 +0x1b1:  lea    -0x14(%ebp),%eax
088d4603 +0x1b4:  mov    %eax,0x4(%esp)
088d4607 +0x1b8:  lea    -0x1c(%ebp),%eax
088d460a +0x1bb:  mov    %eax,(%esp)
088d460d +0x1be:  call   080c6db4 <_GLOBAL__I_g_ServerString_+0x31f>  ; global constructors keyed to g_ServerString_+0x31f
088d4612 +0x1c3:  mov    0x8(%ebp),%eax
088d4615 +0x1c6:  lea    0x18(%eax),%ecx
088d4618 +0x1c9:  lea    -0x24(%ebp),%eax
088d461b +0x1cc:  lea    -0x1c(%ebp),%edx
088d461e +0x1cf:  mov    %edx,0x8(%esp)
088d4622 +0x1d3:  mov    %ecx,0x4(%esp)
088d4626 +0x1d7:  mov    %eax,(%esp)
088d4629 +0x1da:  call   080c6dee <_GLOBAL__I_g_ServerString_+0x359>  ; global constructors keyed to g_ServerString_+0x359
088d462e +0x1df:  sub    $0x4,%esp
088d4631 +0x1e2:  lea    -0x1c(%ebp),%eax
088d4634 +0x1e5:  mov    %eax,(%esp)
088d4637 +0x1e8:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
088d463c +0x1ed:  jmp    088d4668 <+0x219>
088d463e +0x1ef:  mov    %edx,%ebx
088d4640 +0x1f1:  mov    %eax,%esi
088d4642 +0x1f3:  lea    -0x1c(%ebp),%eax
088d4645 +0x1f6:  mov    %eax,(%esp)
088d4648 +0x1f9:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
088d464d +0x1fe:  mov    %esi,%eax
088d464f +0x200:  mov    %ebx,%edx
088d4651 +0x202:  jmp    088d4653 <+0x204>
088d4653 +0x204:  mov    %edx,%ebx
088d4655 +0x206:  mov    %eax,%esi
088d4657 +0x208:  lea    -0x14(%ebp),%eax
088d465a +0x20b:  mov    %eax,(%esp)
088d465d +0x20e:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
088d4662 +0x213:  mov    %esi,%eax
088d4664 +0x215:  mov    %ebx,%edx
088d4666 +0x217:  jmp    088d467a <+0x22b>
088d4668 +0x219:  lea    -0x14(%ebp),%eax
088d466b +0x21c:  mov    %eax,(%esp)
088d466e +0x21f:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
088d4673 +0x224:  mov    $0x1,%ebx
088d4678 +0x229:  jmp    088d468f <+0x240>
088d467a +0x22b:  mov    %edx,%ebx
088d467c +0x22d:  mov    %eax,%esi
088d467e +0x22f:  lea    -0x4c(%ebp),%eax
088d4681 +0x232:  mov    %eax,(%esp)
088d4684 +0x235:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d4689 +0x23a:  mov    %esi,%eax
088d468b +0x23c:  mov    %ebx,%edx
088d468d +0x23e:  jmp    088d46ac <+0x25d>
088d468f +0x240:  lea    -0x4c(%ebp),%eax
088d4692 +0x243:  mov    %eax,(%esp)
088d4695 +0x246:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d469a +0x24b:  test   %ebx,%ebx
088d469c +0x24d:  je     088d44a2 <+0x53>
088d46a2 +0x253:  jmp    088d44e9 <+0x9a>
088d46a7 +0x258:  jmp    088d44a3 <+0x54>
088d46ac +0x25d:  mov    %edx,%ebx
088d46ae +0x25f:  mov    %eax,%esi
088d46b0 +0x261:  lea    -0x40(%ebp),%eax
088d46b3 +0x264:  mov    %eax,(%esp)
088d46b6 +0x267:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d46bb +0x26c:  mov    %esi,%eax
088d46bd +0x26e:  mov    %ebx,%edx
088d46bf +0x270:  mov    %eax,(%esp)
088d46c2 +0x273:  call   08ae3750 <_Unwind_Resume>
088d46c7 +0x278:  mov    %ebx,%eax
088d46c9 +0x27a:  lea    -0x8(%ebp),%esp
088d46cc +0x27d:  add    $0x0,%esp
088d46cf +0x280:  pop    %ebx
088d46d0 +0x281:  pop    %esi
088d46d1 +0x282:  pop    %ebp
088d46d2 +0x283:  ret
```

## 反编译 C

```c
// AvatarVariation::importAvatarColorVariation @ 0x88d444f

/* AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*) */

undefined4 AvatarVariation::importAvatarColorVariation(AvatarColorInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  string local_50 [4];
  undefined4 local_4c;
  colorRGB local_48;
  undefined1 local_47;
  undefined1 local_46;
  bool local_45;
  string local_44;
  pair local_40 [8];
  pair<int_const,AvatarVariation::colorRGB> local_38 [8];
  int local_30 [2];
  pair local_28 [8];
  pair<int_const,std::string> local_20 [8];
  pair<int,std::string> local_18 [8];
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("","Etc/AvatarColorVariation.etc");
  if (cVar1 == '\x01') {
    std::
    map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
    ::clear((map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
             *)param_1);
    std::string::string((string *)&local_44);
    local_45 = false;
    local_10 = 0;
LAB_088d44a3:
                    /* try { // try from 088d44b1 to 088d44b5 has its CatchHandler @ 088d46ac */
    cVar1 = ScanType((string *)&local_44,true);
    if (cVar1 == '\x01') {
                    /* try { // try from 088d44e0 to 088d4576 has its CatchHandler @ 088d46ac */
      bVar2 = std::operator==(&local_44,"[avatar color map]");
      if (bVar2) {
        do {
          colorRGB::colorRGB(&local_48);
          local_4c = ScanInt(&local_45);
          if ((((local_45 != true) || (local_48 = (colorRGB)ScanInt(&local_45), local_45 != true))
              || (local_47 = ScanInt(&local_45), local_45 != true)) ||
             (local_46 = ScanInt(&local_45), local_45 != true)) break;
          std::string::string(local_50);
                    /* try { // try from 088d457d to 088d45fc has its CatchHandler @ 088d467a */
          local_45 = (bool)ScanStr(local_50);
          bVar2 = local_45 == true;
          if (bVar2) {
            std::make_pair<int&,AvatarVariation::colorRGB&>(local_30,(colorRGB *)&local_4c);
            std::pair<int_const,AvatarVariation::colorRGB>::pair<int,AvatarVariation::colorRGB>
                      (local_38,(pair *)local_30);
            std::
            map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
            ::insert(local_40);
            std::make_pair<int&,std::string&>((int *)local_18,(string *)&local_4c);
                    /* try { // try from 088d460d to 088d4611 has its CatchHandler @ 088d4653 */
            std::pair<int_const,std::string>::pair<int,std::string>(local_20,local_18);
                    /* try { // try from 088d4629 to 088d462d has its CatchHandler @ 088d463e */
            std::
            map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
            insert(local_28);
                    /* try { // try from 088d4637 to 088d463b has its CatchHandler @ 088d4653 */
            std::pair<int_const,std::string>::~pair(local_20);
                    /* try { // try from 088d466e to 088d4672 has its CatchHandler @ 088d467a */
            std::pair<int,std::string>::~pair(local_18);
          }
                    /* try { // try from 088d4695 to 088d4699 has its CatchHandler @ 088d46ac */
          std::string::~string(local_50);
        } while (bVar2);
      }
      goto LAB_088d44a3;
    }
    uVar3 = 1;
    std::string::~string((string *)&local_44);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
