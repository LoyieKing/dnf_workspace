# import

`_ZN14CNRDScriptData6importEPKc`

`CNRDScriptData::import(char const*)`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807fb2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807fb2c  _ZN14CNRDScriptData6importEPKc
#           CNRDScriptData::import(char const*)
# range [0x0807fb2c, 0x0807fe89]
0807fb2c +0x000:  push   %ebp
0807fb2d +0x001:  mov    %esp,%ebp
0807fb2f +0x003:  push   %esi
0807fb30 +0x004:  push   %ebx
0807fb31 +0x005:  add    $0xffffff80,%esp
0807fb34 +0x008:  mov    0xc(%ebp),%eax
0807fb37 +0x00b:  mov    %eax,0x4(%esp)
0807fb3b +0x00f:  movl   $"Data/",(%esp)
0807fb42 +0x016:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0807fb47 +0x01b:  xor    $0x1,%eax
0807fb4a +0x01e:  test   %al,%al
0807fb4c +0x020:  je     0807fb8b <+0x5f>
0807fb4e +0x022:  mov    0xc(%ebp),%eax
0807fb51 +0x025:  mov    %eax,0x14(%esp)
0807fb55 +0x029:  movl   $"error : %s script Data 파일을 찾을 수 없습니다.",0x10(%esp)
0807fb5d +0x031:  movl   $0x33,0xc(%esp)
0807fb65 +0x039:  movl   $&_ZZN14CNRDScriptData6importEPKcE12__FUNCTION__,0x8(%esp)
0807fb6d +0x041:  movl   $"../../DNFShared/CNRDScriptData.cpp",0x4(%esp)
0807fb75 +0x049:  movl   $0x0,(%esp)
0807fb7c +0x050:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0807fb81 +0x055:  mov    $0x0,%ebx
0807fb86 +0x05a:  jmp    0807fe7e <+0x352>
0807fb8b +0x05f:  mov    0x8(%ebp),%eax
0807fb8e +0x062:  mov    %eax,(%esp)
0807fb91 +0x065:  call   0807fac8 <_ZN14CNRDScriptData5resetEv>  ; CNRDScriptData::reset()
0807fb96 +0x06a:  mov    0x8(%ebp),%eax
0807fb99 +0x06d:  mov    0xc(%ebp),%edx
0807fb9c +0x070:  mov    %edx,0x4(%esp)
0807fba0 +0x074:  mov    %eax,(%esp)
0807fba3 +0x077:  call   08ad70c0 <_ZN10CharStringaSEPKc>  ; CharString::operator=(char const*)
0807fba8 +0x07c:  lea    -0x48(%ebp),%eax
0807fbab +0x07f:  mov    %eax,(%esp)
0807fbae +0x082:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0807fbb3 +0x087:  lea    -0x4c(%ebp),%eax
0807fbb6 +0x08a:  mov    %eax,(%esp)
0807fbb9 +0x08d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0807fbbe +0x092:  lea    -0x50(%ebp),%eax
0807fbc1 +0x095:  mov    %eax,(%esp)
0807fbc4 +0x098:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0807fbc9 +0x09d:  movl   $0x0,-0x54(%ebp)
0807fbd0 +0x0a4:  mov    $0x0,%eax
0807fbd5 +0x0a9:  mov    %eax,-0x58(%ebp)
0807fbd8 +0x0ac:  jmp    0807fbdb <+0xaf>
0807fbda +0x0ae:  nop
0807fbdb +0x0af:  movl   $0x1,0x4(%esp)
0807fbe3 +0x0b7:  lea    -0x48(%ebp),%eax
0807fbe6 +0x0ba:  mov    %eax,(%esp)
0807fbe9 +0x0bd:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0807fbee +0x0c2:  xor    $0x1,%eax
0807fbf1 +0x0c5:  test   %al,%al
0807fbf3 +0x0c7:  jne    0807fe0e <+0x2e2>
0807fbf9 +0x0cd:  movl   $"[int]",0x4(%esp)
0807fc01 +0x0d5:  lea    -0x48(%ebp),%eax
0807fc04 +0x0d8:  mov    %eax,(%esp)
0807fc07 +0x0db:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0807fc0c +0x0e0:  test   %al,%al
0807fc0e +0x0e2:  je     0807fc63 <+0x137>
0807fc10 +0x0e4:  jmp    0807fc4f <+0x123>
0807fc12 +0x0e6:  movl   $0x0,(%esp)
0807fc19 +0x0ed:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0807fc1e +0x0f2:  mov    %eax,-0x54(%ebp)
0807fc21 +0x0f5:  lea    -0x4c(%ebp),%eax
0807fc24 +0x0f8:  mov    %eax,(%esp)
0807fc27 +0x0fb:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0807fc2c +0x100:  mov    0x8(%ebp),%edx
0807fc2f +0x103:  lea    0x4(%edx),%ebx
0807fc32 +0x106:  lea    -0x44(%ebp),%edx
0807fc35 +0x109:  lea    -0x54(%ebp),%ecx
0807fc38 +0x10c:  mov    %ecx,0xc(%esp)
0807fc3c +0x110:  mov    %eax,0x8(%esp)
0807fc40 +0x114:  mov    %ebx,0x4(%esp)
0807fc44 +0x118:  mov    %edx,(%esp)
0807fc47 +0x11b:  call   080809fe <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xa24>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xa24
0807fc4c +0x120:  sub    $0x4,%esp
0807fc4f +0x123:  lea    -0x4c(%ebp),%eax
0807fc52 +0x126:  mov    %eax,(%esp)
0807fc55 +0x129:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0807fc5a +0x12e:  test   %al,%al
0807fc5c +0x130:  jne    0807fc12 <+0xe6>
0807fc5e +0x132:  jmp    0807fbdb <+0xaf>
0807fc63 +0x137:  movl   $"[float]",0x4(%esp)
0807fc6b +0x13f:  lea    -0x48(%ebp),%eax
0807fc6e +0x142:  mov    %eax,(%esp)
0807fc71 +0x145:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0807fc76 +0x14a:  test   %al,%al
0807fc78 +0x14c:  je     0807fccd <+0x1a1>
0807fc7a +0x14e:  jmp    0807fcb9 <+0x18d>
0807fc7c +0x150:  movl   $0x0,(%esp)
0807fc83 +0x157:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
0807fc88 +0x15c:  fstps  -0x58(%ebp)
0807fc8b +0x15f:  lea    -0x4c(%ebp),%eax
0807fc8e +0x162:  mov    %eax,(%esp)
0807fc91 +0x165:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0807fc96 +0x16a:  mov    0x8(%ebp),%edx
0807fc99 +0x16d:  lea    0x24(%edx),%ebx
0807fc9c +0x170:  lea    -0x38(%ebp),%edx
0807fc9f +0x173:  lea    -0x58(%ebp),%ecx
0807fca2 +0x176:  mov    %ecx,0xc(%esp)
0807fca6 +0x17a:  mov    %eax,0x8(%esp)
0807fcaa +0x17e:  mov    %ebx,0x4(%esp)
0807fcae +0x182:  mov    %edx,(%esp)
0807fcb1 +0x185:  call   08080b6c <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xb92>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xb92
0807fcb6 +0x18a:  sub    $0x4,%esp
0807fcb9 +0x18d:  lea    -0x4c(%ebp),%eax
0807fcbc +0x190:  mov    %eax,(%esp)
0807fcbf +0x193:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0807fcc4 +0x198:  test   %al,%al
0807fcc6 +0x19a:  jne    0807fc7c <+0x150>
0807fcc8 +0x19c:  jmp    0807fbdb <+0xaf>
0807fccd +0x1a1:  movl   $"[clong]",0x4(%esp)
0807fcd5 +0x1a9:  lea    -0x48(%ebp),%eax
0807fcd8 +0x1ac:  mov    %eax,(%esp)
0807fcdb +0x1af:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0807fce0 +0x1b4:  test   %al,%al
0807fce2 +0x1b6:  je     0807fd37 <+0x20b>
0807fce4 +0x1b8:  jmp    0807fd23 <+0x1f7>
0807fce6 +0x1ba:  movl   $0x0,(%esp)
0807fced +0x1c1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0807fcf2 +0x1c6:  mov    %eax,-0x5c(%ebp)
0807fcf5 +0x1c9:  lea    -0x4c(%ebp),%eax
0807fcf8 +0x1cc:  mov    %eax,(%esp)
0807fcfb +0x1cf:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0807fd00 +0x1d4:  mov    0x8(%ebp),%edx
0807fd03 +0x1d7:  lea    0x44(%edx),%ebx
0807fd06 +0x1da:  lea    -0x2c(%ebp),%edx
0807fd09 +0x1dd:  lea    -0x5c(%ebp),%ecx
0807fd0c +0x1e0:  mov    %ecx,0xc(%esp)
0807fd10 +0x1e4:  mov    %eax,0x8(%esp)
0807fd14 +0x1e8:  mov    %ebx,0x4(%esp)
0807fd18 +0x1ec:  mov    %edx,(%esp)
0807fd1b +0x1ef:  call   080809fe <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xa24>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xa24
0807fd20 +0x1f4:  sub    $0x4,%esp
0807fd23 +0x1f7:  lea    -0x4c(%ebp),%eax
0807fd26 +0x1fa:  mov    %eax,(%esp)
0807fd29 +0x1fd:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0807fd2e +0x202:  test   %al,%al
0807fd30 +0x204:  jne    0807fce6 <+0x1ba>
0807fd32 +0x206:  jmp    0807fbdb <+0xaf>
0807fd37 +0x20b:  movl   $"[cfloat]",0x4(%esp)
0807fd3f +0x213:  lea    -0x48(%ebp),%eax
0807fd42 +0x216:  mov    %eax,(%esp)
0807fd45 +0x219:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0807fd4a +0x21e:  test   %al,%al
0807fd4c +0x220:  je     0807fda1 <+0x275>
0807fd4e +0x222:  jmp    0807fd8d <+0x261>
0807fd50 +0x224:  movl   $0x0,(%esp)
0807fd57 +0x22b:  call   088bc4e5 <_Z9ScanFloatPb>  ; ScanFloat(bool*)
0807fd5c +0x230:  fstps  -0x60(%ebp)
0807fd5f +0x233:  lea    -0x4c(%ebp),%eax
0807fd62 +0x236:  mov    %eax,(%esp)
0807fd65 +0x239:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0807fd6a +0x23e:  mov    0x8(%ebp),%edx
0807fd6d +0x241:  lea    0x64(%edx),%ebx
0807fd70 +0x244:  lea    -0x20(%ebp),%edx
0807fd73 +0x247:  lea    -0x60(%ebp),%ecx
0807fd76 +0x24a:  mov    %ecx,0xc(%esp)
0807fd7a +0x24e:  mov    %eax,0x8(%esp)
0807fd7e +0x252:  mov    %ebx,0x4(%esp)
0807fd82 +0x256:  mov    %edx,(%esp)
0807fd85 +0x259:  call   08080b6c <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xb92>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xb92
0807fd8a +0x25e:  sub    $0x4,%esp
0807fd8d +0x261:  lea    -0x4c(%ebp),%eax
0807fd90 +0x264:  mov    %eax,(%esp)
0807fd93 +0x267:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0807fd98 +0x26c:  test   %al,%al
0807fd9a +0x26e:  jne    0807fd50 <+0x224>
0807fd9c +0x270:  jmp    0807fbdb <+0xaf>
0807fda1 +0x275:  movl   $"[string]",0x4(%esp)
0807fda9 +0x27d:  lea    -0x48(%ebp),%eax
0807fdac +0x280:  mov    %eax,(%esp)
0807fdaf +0x283:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0807fdb4 +0x288:  test   %al,%al
0807fdb6 +0x28a:  je     0807fbda <+0xae>
0807fdbc +0x290:  jmp    0807fdfa <+0x2ce>
0807fdbe +0x292:  lea    -0x50(%ebp),%eax
0807fdc1 +0x295:  mov    %eax,(%esp)
0807fdc4 +0x298:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0807fdc9 +0x29d:  lea    -0x4c(%ebp),%eax
0807fdcc +0x2a0:  mov    %eax,(%esp)
0807fdcf +0x2a3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0807fdd4 +0x2a8:  mov    0x8(%ebp),%edx
0807fdd7 +0x2ab:  lea    0x84(%edx),%ebx
0807fddd +0x2b1:  lea    -0x14(%ebp),%edx
0807fde0 +0x2b4:  lea    -0x50(%ebp),%ecx
0807fde3 +0x2b7:  mov    %ecx,0xc(%esp)
0807fde7 +0x2bb:  mov    %eax,0x8(%esp)
0807fdeb +0x2bf:  mov    %ebx,0x4(%esp)
0807fdef +0x2c3:  mov    %edx,(%esp)
0807fdf2 +0x2c6:  call   08080d3e <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xd64>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xd64
0807fdf7 +0x2cb:  sub    $0x4,%esp
0807fdfa +0x2ce:  lea    -0x4c(%ebp),%eax
0807fdfd +0x2d1:  mov    %eax,(%esp)
0807fe00 +0x2d4:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0807fe05 +0x2d9:  test   %al,%al
0807fe07 +0x2db:  jne    0807fdbe <+0x292>
0807fe09 +0x2dd:  jmp    0807fbdb <+0xaf>
0807fe0e +0x2e2:  nop
0807fe0f +0x2e3:  mov    $0x1,%ebx
0807fe14 +0x2e8:  lea    -0x50(%ebp),%eax
0807fe17 +0x2eb:  mov    %eax,(%esp)
0807fe1a +0x2ee:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0807fe1f +0x2f3:  jmp    0807fe4b <+0x31f>
0807fe21 +0x2f5:  mov    %edx,%ebx
0807fe23 +0x2f7:  mov    %eax,%esi
0807fe25 +0x2f9:  lea    -0x50(%ebp),%eax
0807fe28 +0x2fc:  mov    %eax,(%esp)
0807fe2b +0x2ff:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0807fe30 +0x304:  mov    %esi,%eax
0807fe32 +0x306:  mov    %ebx,%edx
0807fe34 +0x308:  jmp    0807fe36 <+0x30a>
0807fe36 +0x30a:  mov    %edx,%ebx
0807fe38 +0x30c:  mov    %eax,%esi
0807fe3a +0x30e:  lea    -0x4c(%ebp),%eax
0807fe3d +0x311:  mov    %eax,(%esp)
0807fe40 +0x314:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0807fe45 +0x319:  mov    %esi,%eax
0807fe47 +0x31b:  mov    %ebx,%edx
0807fe49 +0x31d:  jmp    0807fe58 <+0x32c>
0807fe4b +0x31f:  lea    -0x4c(%ebp),%eax
0807fe4e +0x322:  mov    %eax,(%esp)
0807fe51 +0x325:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0807fe56 +0x32a:  jmp    0807fe73 <+0x347>
0807fe58 +0x32c:  mov    %edx,%ebx
0807fe5a +0x32e:  mov    %eax,%esi
0807fe5c +0x330:  lea    -0x48(%ebp),%eax
0807fe5f +0x333:  mov    %eax,(%esp)
0807fe62 +0x336:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0807fe67 +0x33b:  mov    %esi,%eax
0807fe69 +0x33d:  mov    %ebx,%edx
0807fe6b +0x33f:  mov    %eax,(%esp)
0807fe6e +0x342:  call   08ae3750 <_Unwind_Resume>
0807fe73 +0x347:  lea    -0x48(%ebp),%eax
0807fe76 +0x34a:  mov    %eax,(%esp)
0807fe79 +0x34d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0807fe7e +0x352:  mov    %ebx,%eax
0807fe80 +0x354:  lea    -0x8(%ebp),%esp
0807fe83 +0x357:  add    $0x0,%esp
0807fe86 +0x35a:  pop    %ebx
0807fe87 +0x35b:  pop    %esi
0807fe88 +0x35c:  pop    %ebp
0807fe89 +0x35d:  ret
```

## 反编译 C

```c
// CNRDScriptData::import @ 0x807fb2c

/* CNRDScriptData::import(char const*) */

undefined4 __thiscall CNRDScriptData::import(CNRDScriptData *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  string local_54 [4];
  string local_50 [4];
  string local_4c;
  char local_48 [12];
  char local_3c [12];
  char local_30 [12];
  char local_24 [12];
  char local_18 [12];
  
  cVar1 = loadRDARScriptFile("Data/",param_1);
  if (cVar1 == '\x01') {
    reset(this);
    CharString::operator=((CharString *)this,param_1);
    std::string::string((string *)&local_4c);
                    /* try { // try from 0807fbb9 to 0807fbbd has its CatchHandler @ 0807fe58 */
    std::string::string(local_50);
                    /* try { // try from 0807fbc4 to 0807fbc8 has its CatchHandler @ 0807fe36 */
    std::string::string(local_54);
                    /* try { // try from 0807fbe9 to 0807fe04 has its CatchHandler @ 0807fe21 */
    while (cVar1 = ScanType((string *)&local_4c,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_4c,"[int]");
      if (bVar2) {
        while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
          ScanInt((bool *)0x0);
          std::string::c_str(local_50);
          StringUnorderedMap<CharStringHashTrait,int>::insert(local_48,(int *)(this + 4));
        }
      }
      else {
        bVar2 = std::operator==(&local_4c,"[float]");
        if (bVar2) {
          while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
            ScanFloat((bool *)0x0);
            std::string::c_str(local_50);
            StringUnorderedMap<CharStringHashTrait,float>::insert(local_3c,(float *)(this + 0x24));
          }
        }
        else {
          bVar2 = std::operator==(&local_4c,"[clong]");
          if (bVar2) {
            while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
              ScanInt((bool *)0x0);
              std::string::c_str(local_50);
              StringUnorderedMap<CharStringHashTrait,int>::insert(local_30,(int *)(this + 0x44));
            }
          }
          else {
            bVar2 = std::operator==(&local_4c,"[cfloat]");
            if (bVar2) {
              while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
                ScanFloat((bool *)0x0);
                std::string::c_str(local_50);
                StringUnorderedMap<CharStringHashTrait,float>::insert
                          (local_24,(float *)(this + 100));
              }
            }
            else {
              bVar2 = std::operator==(&local_4c,"[string]");
              if (bVar2) {
                while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
                  ScanStr(local_54);
                  std::string::c_str(local_50);
                  StringUnorderedMap<CharStringHashTrait,std::string>::insert
                            (local_18,(string *)(this + 0x84));
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 1;
                    /* try { // try from 0807fe1a to 0807fe1e has its CatchHandler @ 0807fe36 */
    std::string::~string(local_54);
                    /* try { // try from 0807fe51 to 0807fe55 has its CatchHandler @ 0807fe58 */
    std::string::~string(local_50);
    std::string::~string((string *)&local_4c);
  }
  else {
    LogManager::logFormat
              (0,"../../DNFShared/CNRDScriptData.cpp","import",0x33,&DAT_08ae5e08,param_1);
    uVar3 = 0;
  }
  return uVar3;
}
```
