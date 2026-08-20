# importScript

`_ZN20BlueMarbleInfoScript12importScriptEPKcS1_`

`BlueMarbleInfoScript::importScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `BlueMarbleInfoScript` | `0x088d589c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d589c  _ZN20BlueMarbleInfoScript12importScriptEPKcS1_
#           BlueMarbleInfoScript::importScript(char const*, char const*)
# range [0x088d589c, 0x088d5e91]
088d589c +0x000:  push   %ebp
088d589d +0x001:  mov    %esp,%ebp
088d589f +0x003:  push   %esi
088d58a0 +0x004:  push   %ebx
088d58a1 +0x005:  sub    $0x60,%esp
088d58a4 +0x008:  mov    0x10(%ebp),%eax
088d58a7 +0x00b:  mov    %eax,0x4(%esp)
088d58ab +0x00f:  mov    0xc(%ebp),%eax
088d58ae +0x012:  mov    %eax,(%esp)
088d58b1 +0x015:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
088d58b6 +0x01a:  xor    $0x1,%eax
088d58b9 +0x01d:  test   %al,%al
088d58bb +0x01f:  je     088d58c7 <+0x2b>
088d58bd +0x021:  mov    $0x0,%ebx
088d58c2 +0x026:  jmp    088d5e88 <+0x5ec>
088d58c7 +0x02b:  lea    -0x10(%ebp),%eax
088d58ca +0x02e:  mov    %eax,(%esp)
088d58cd +0x031:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
088d58d2 +0x036:  movl   $0x0,-0xc(%ebp)
088d58d9 +0x03d:  jmp    088d58dc <+0x40>
088d58db +0x03f:  nop
088d58dc +0x040:  movl   $0x1,0x4(%esp)
088d58e4 +0x048:  lea    -0x10(%ebp),%eax
088d58e7 +0x04b:  mov    %eax,(%esp)
088d58ea +0x04e:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
088d58ef +0x053:  xor    $0x1,%eax
088d58f2 +0x056:  test   %al,%al
088d58f4 +0x058:  jne    088d5e5a <+0x5be>
088d58fa +0x05e:  movl   $"[dungeon list]",0x4(%esp)
088d5902 +0x066:  lea    -0x10(%ebp),%eax
088d5905 +0x069:  mov    %eax,(%esp)
088d5908 +0x06c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d590d +0x071:  test   %al,%al
088d590f +0x073:  je     088d597d <+0xe1>
088d5911 +0x075:  mov    0x8(%ebp),%eax
088d5914 +0x078:  add    $0x44,%eax
088d5917 +0x07b:  mov    %eax,(%esp)
088d591a +0x07e:  call   088d692e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1b0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1b0
088d591f +0x083:  lea    -0x1c(%ebp),%eax
088d5922 +0x086:  mov    %eax,(%esp)
088d5925 +0x089:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d592a +0x08e:  xor    $0x1,%eax
088d592d +0x091:  test   %al,%al
088d592f +0x093:  je     088d5933 <+0x97>
088d5931 +0x095:  jmp    088d5978 <+0xdc>
088d5933 +0x097:  lea    -0x1c(%ebp),%eax
088d5936 +0x09a:  add    $0x4,%eax
088d5939 +0x09d:  mov    %eax,(%esp)
088d593c +0x0a0:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5941 +0x0a5:  xor    $0x1,%eax
088d5944 +0x0a8:  test   %al,%al
088d5946 +0x0aa:  je     088d594a <+0xae>
088d5948 +0x0ac:  jmp    088d5978 <+0xdc>
088d594a +0x0ae:  lea    -0x1c(%ebp),%eax
088d594d +0x0b1:  add    $0x8,%eax
088d5950 +0x0b4:  mov    %eax,(%esp)
088d5953 +0x0b7:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5958 +0x0bc:  xor    $0x1,%eax
088d595b +0x0bf:  test   %al,%al
088d595d +0x0c1:  je     088d5961 <+0xc5>
088d595f +0x0c3:  jmp    088d5978 <+0xdc>
088d5961 +0x0c5:  mov    0x8(%ebp),%eax
088d5964 +0x0c8:  lea    0x44(%eax),%edx
088d5967 +0x0cb:  lea    -0x1c(%ebp),%eax
088d596a +0x0ce:  mov    %eax,0x4(%esp)
088d596e +0x0d2:  mov    %edx,(%esp)
088d5971 +0x0d5:  call   088d6982 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x204>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x204
088d5976 +0x0da:  jmp    088d591f <+0x83>
088d5978 +0x0dc:  jmp    088d58dc <+0x40>
088d597d +0x0e1:  movl   $"[boss dungeon list]",0x4(%esp)
088d5985 +0x0e9:  lea    -0x10(%ebp),%eax
088d5988 +0x0ec:  mov    %eax,(%esp)
088d598b +0x0ef:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5990 +0x0f4:  test   %al,%al
088d5992 +0x0f6:  je     088d5a00 <+0x164>
088d5994 +0x0f8:  mov    0x8(%ebp),%eax
088d5997 +0x0fb:  add    $0x50,%eax
088d599a +0x0fe:  mov    %eax,(%esp)
088d599d +0x101:  call   088d692e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1b0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1b0
088d59a2 +0x106:  lea    -0x28(%ebp),%eax
088d59a5 +0x109:  mov    %eax,(%esp)
088d59a8 +0x10c:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d59ad +0x111:  xor    $0x1,%eax
088d59b0 +0x114:  test   %al,%al
088d59b2 +0x116:  je     088d59b6 <+0x11a>
088d59b4 +0x118:  jmp    088d59fb <+0x15f>
088d59b6 +0x11a:  lea    -0x28(%ebp),%eax
088d59b9 +0x11d:  add    $0x4,%eax
088d59bc +0x120:  mov    %eax,(%esp)
088d59bf +0x123:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d59c4 +0x128:  xor    $0x1,%eax
088d59c7 +0x12b:  test   %al,%al
088d59c9 +0x12d:  je     088d59cd <+0x131>
088d59cb +0x12f:  jmp    088d59fb <+0x15f>
088d59cd +0x131:  lea    -0x28(%ebp),%eax
088d59d0 +0x134:  add    $0x8,%eax
088d59d3 +0x137:  mov    %eax,(%esp)
088d59d6 +0x13a:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d59db +0x13f:  xor    $0x1,%eax
088d59de +0x142:  test   %al,%al
088d59e0 +0x144:  je     088d59e4 <+0x148>
088d59e2 +0x146:  jmp    088d59fb <+0x15f>
088d59e4 +0x148:  mov    0x8(%ebp),%eax
088d59e7 +0x14b:  lea    0x50(%eax),%edx
088d59ea +0x14e:  lea    -0x28(%ebp),%eax
088d59ed +0x151:  mov    %eax,0x4(%esp)
088d59f1 +0x155:  mov    %edx,(%esp)
088d59f4 +0x158:  call   088d6982 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x204>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x204
088d59f9 +0x15d:  jmp    088d59a2 <+0x106>
088d59fb +0x15f:  jmp    088d58dc <+0x40>
088d5a00 +0x164:  movl   $"[item list]",0x4(%esp)
088d5a08 +0x16c:  lea    -0x10(%ebp),%eax
088d5a0b +0x16f:  mov    %eax,(%esp)
088d5a0e +0x172:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5a13 +0x177:  test   %al,%al
088d5a15 +0x179:  je     088d5a7d <+0x1e1>
088d5a17 +0x17b:  mov    0x8(%ebp),%eax
088d5a1a +0x17e:  add    $0x68,%eax
088d5a1d +0x181:  mov    %eax,(%esp)
088d5a20 +0x184:  call   088d694a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1cc>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1cc
088d5a25 +0x189:  lea    -0x30(%ebp),%eax
088d5a28 +0x18c:  mov    %eax,(%esp)
088d5a2b +0x18f:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5a30 +0x194:  xor    $0x1,%eax
088d5a33 +0x197:  test   %al,%al
088d5a35 +0x199:  je     088d5a39 <+0x19d>
088d5a37 +0x19b:  jmp    088d5a78 <+0x1dc>
088d5a39 +0x19d:  lea    -0x30(%ebp),%eax
088d5a3c +0x1a0:  add    $0x4,%eax
088d5a3f +0x1a3:  mov    %eax,(%esp)
088d5a42 +0x1a6:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5a47 +0x1ab:  xor    $0x1,%eax
088d5a4a +0x1ae:  test   %al,%al
088d5a4c +0x1b0:  je     088d5a50 <+0x1b4>
088d5a4e +0x1b2:  jmp    088d5a78 <+0x1dc>
088d5a50 +0x1b4:  mov    0x8(%ebp),%eax
088d5a53 +0x1b7:  mov    0x1c(%eax),%edx
088d5a56 +0x1ba:  mov    -0x2c(%ebp),%eax
088d5a59 +0x1bd:  add    %eax,%edx
088d5a5b +0x1bf:  mov    0x8(%ebp),%eax
088d5a5e +0x1c2:  mov    %edx,0x1c(%eax)
088d5a61 +0x1c5:  mov    0x8(%ebp),%eax
088d5a64 +0x1c8:  lea    0x68(%eax),%edx
088d5a67 +0x1cb:  lea    -0x30(%ebp),%eax
088d5a6a +0x1ce:  mov    %eax,0x4(%esp)
088d5a6e +0x1d2:  mov    %edx,(%esp)
088d5a71 +0x1d5:  call   088d69f6 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x278>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x278
088d5a76 +0x1da:  jmp    088d5a25 <+0x189>
088d5a78 +0x1dc:  jmp    088d58dc <+0x40>
088d5a7d +0x1e1:  movl   $"[player max]",0x4(%esp)
088d5a85 +0x1e9:  lea    -0x10(%ebp),%eax
088d5a88 +0x1ec:  mov    %eax,(%esp)
088d5a8b +0x1ef:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5a90 +0x1f4:  test   %al,%al
088d5a92 +0x1f6:  je     088d5aa4 <+0x208>
088d5a94 +0x1f8:  mov    0x8(%ebp),%eax
088d5a97 +0x1fb:  mov    %eax,(%esp)
088d5a9a +0x1fe:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5a9f +0x203:  jmp    088d58dc <+0x40>
088d5aa4 +0x208:  movl   $"[enter level]",0x4(%esp)
088d5aac +0x210:  lea    -0x10(%ebp),%eax
088d5aaf +0x213:  mov    %eax,(%esp)
088d5ab2 +0x216:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5ab7 +0x21b:  test   %al,%al
088d5ab9 +0x21d:  je     088d5ace <+0x232>
088d5abb +0x21f:  mov    0x8(%ebp),%eax
088d5abe +0x222:  add    $0x4,%eax
088d5ac1 +0x225:  mov    %eax,(%esp)
088d5ac4 +0x228:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5ac9 +0x22d:  jmp    088d58dc <+0x40>
088d5ace +0x232:  movl   $"[enter max level]",0x4(%esp)
088d5ad6 +0x23a:  lea    -0x10(%ebp),%eax
088d5ad9 +0x23d:  mov    %eax,(%esp)
088d5adc +0x240:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5ae1 +0x245:  test   %al,%al
088d5ae3 +0x247:  je     088d5af8 <+0x25c>
088d5ae5 +0x249:  mov    0x8(%ebp),%eax
088d5ae8 +0x24c:  add    $0x8,%eax
088d5aeb +0x24f:  mov    %eax,(%esp)
088d5aee +0x252:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5af3 +0x257:  jmp    088d58dc <+0x40>
088d5af8 +0x25c:  movl   $"[enter count]",0x4(%esp)
088d5b00 +0x264:  lea    -0x10(%ebp),%eax
088d5b03 +0x267:  mov    %eax,(%esp)
088d5b06 +0x26a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5b0b +0x26f:  test   %al,%al
088d5b0d +0x271:  je     088d5b22 <+0x286>
088d5b0f +0x273:  mov    0x8(%ebp),%eax
088d5b12 +0x276:  add    $0xc,%eax
088d5b15 +0x279:  mov    %eax,(%esp)
088d5b18 +0x27c:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5b1d +0x281:  jmp    088d58dc <+0x40>
088d5b22 +0x286:  movl   $"[die count]",0x4(%esp)
088d5b2a +0x28e:  lea    -0x10(%ebp),%eax
088d5b2d +0x291:  mov    %eax,(%esp)
088d5b30 +0x294:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5b35 +0x299:  test   %al,%al
088d5b37 +0x29b:  je     088d5b4c <+0x2b0>
088d5b39 +0x29d:  mov    0x8(%ebp),%eax
088d5b3c +0x2a0:  add    $0x10,%eax
088d5b3f +0x2a3:  mov    %eax,(%esp)
088d5b42 +0x2a6:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5b47 +0x2ab:  jmp    088d58dc <+0x40>
088d5b4c +0x2b0:  movl   $"[dice value]",0x4(%esp)
088d5b54 +0x2b8:  lea    -0x10(%ebp),%eax
088d5b57 +0x2bb:  mov    %eax,(%esp)
088d5b5a +0x2be:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5b5f +0x2c3:  test   %al,%al
088d5b61 +0x2c5:  je     088d5b84 <+0x2e8>
088d5b63 +0x2c7:  mov    0x8(%ebp),%eax
088d5b66 +0x2ca:  add    $0x14,%eax
088d5b69 +0x2cd:  mov    %eax,(%esp)
088d5b6c +0x2d0:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5b71 +0x2d5:  mov    0x8(%ebp),%eax
088d5b74 +0x2d8:  add    $0x18,%eax
088d5b77 +0x2db:  mov    %eax,(%esp)
088d5b7a +0x2de:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5b7f +0x2e3:  jmp    088d58dc <+0x40>
088d5b84 +0x2e8:  movl   $"[reward item]",0x4(%esp)
088d5b8c +0x2f0:  lea    -0x10(%ebp),%eax
088d5b8f +0x2f3:  mov    %eax,(%esp)
088d5b92 +0x2f6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5b97 +0x2fb:  test   %al,%al
088d5b99 +0x2fd:  je     088d5bf0 <+0x354>
088d5b9b +0x2ff:  mov    0x8(%ebp),%eax
088d5b9e +0x302:  add    $0x74,%eax
088d5ba1 +0x305:  mov    %eax,(%esp)
088d5ba4 +0x308:  call   088d6a6a <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x2ec>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x2ec
088d5ba9 +0x30d:  lea    -0x38(%ebp),%eax
088d5bac +0x310:  mov    %eax,(%esp)
088d5baf +0x313:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5bb4 +0x318:  xor    $0x1,%eax
088d5bb7 +0x31b:  test   %al,%al
088d5bb9 +0x31d:  je     088d5bbd <+0x321>
088d5bbb +0x31f:  jmp    088d5beb <+0x34f>
088d5bbd +0x321:  lea    -0x38(%ebp),%eax
088d5bc0 +0x324:  add    $0x4,%eax
088d5bc3 +0x327:  mov    %eax,(%esp)
088d5bc6 +0x32a:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5bcb +0x32f:  xor    $0x1,%eax
088d5bce +0x332:  test   %al,%al
088d5bd0 +0x334:  je     088d5bd4 <+0x338>
088d5bd2 +0x336:  jmp    088d5beb <+0x34f>
088d5bd4 +0x338:  mov    0x8(%ebp),%eax
088d5bd7 +0x33b:  lea    0x74(%eax),%edx
088d5bda +0x33e:  lea    -0x38(%ebp),%eax
088d5bdd +0x341:  mov    %eax,0x4(%esp)
088d5be1 +0x345:  mov    %edx,(%esp)
088d5be4 +0x348:  call   088d6a86 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x308>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x308
088d5be9 +0x34d:  jmp    088d5ba9 <+0x30d>
088d5beb +0x34f:  jmp    088d58dc <+0x40>
088d5bf0 +0x354:  movl   $"[tile pos]",0x4(%esp)
088d5bf8 +0x35c:  lea    -0x10(%ebp),%eax
088d5bfb +0x35f:  mov    %eax,(%esp)
088d5bfe +0x362:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5c03 +0x367:  test   %al,%al
088d5c05 +0x369:  je     088d5c5f <+0x3c3>
088d5c07 +0x36b:  mov    0x8(%ebp),%eax
088d5c0a +0x36e:  sub    $0xffffff80,%eax
088d5c0d +0x371:  mov    %eax,(%esp)
088d5c10 +0x374:  call   088d6966 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1e8>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1e8
088d5c15 +0x379:  lea    -0x40(%ebp),%eax
088d5c18 +0x37c:  mov    %eax,(%esp)
088d5c1b +0x37f:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5c20 +0x384:  xor    $0x1,%eax
088d5c23 +0x387:  test   %al,%al
088d5c25 +0x389:  je     088d5c29 <+0x38d>
088d5c27 +0x38b:  jmp    088d5c5a <+0x3be>
088d5c29 +0x38d:  lea    -0x40(%ebp),%eax
088d5c2c +0x390:  add    $0x4,%eax
088d5c2f +0x393:  mov    %eax,(%esp)
088d5c32 +0x396:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5c37 +0x39b:  xor    $0x1,%eax
088d5c3a +0x39e:  test   %al,%al
088d5c3c +0x3a0:  je     088d5c40 <+0x3a4>
088d5c3e +0x3a2:  jmp    088d5c5a <+0x3be>
088d5c40 +0x3a4:  mov    0x8(%ebp),%eax
088d5c43 +0x3a7:  lea    0x80(%eax),%edx
088d5c49 +0x3ad:  lea    -0x40(%ebp),%eax
088d5c4c +0x3b0:  mov    %eax,0x4(%esp)
088d5c50 +0x3b4:  mov    %edx,(%esp)
088d5c53 +0x3b7:  call   088d6afa <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x37c>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x37c
088d5c58 +0x3bc:  jmp    088d5c15 <+0x379>
088d5c5a +0x3be:  jmp    088d58dc <+0x40>
088d5c5f +0x3c3:  movl   $"[dungeon difficulty]",0x4(%esp)
088d5c67 +0x3cb:  lea    -0x10(%ebp),%eax
088d5c6a +0x3ce:  mov    %eax,(%esp)
088d5c6d +0x3d1:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5c72 +0x3d6:  test   %al,%al
088d5c74 +0x3d8:  je     088d5c8d <+0x3f1>
088d5c76 +0x3da:  movl   $0x0,(%esp)
088d5c7d +0x3e1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d5c82 +0x3e6:  mov    0x8(%ebp),%edx
088d5c85 +0x3e9:  mov    %eax,0x20(%edx)
088d5c88 +0x3ec:  jmp    088d58dc <+0x40>
088d5c8d +0x3f1:  movl   $"[dungeon difficulty list]",0x4(%esp)
088d5c95 +0x3f9:  lea    -0x10(%ebp),%eax
088d5c98 +0x3fc:  mov    %eax,(%esp)
088d5c9b +0x3ff:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5ca0 +0x404:  test   %al,%al
088d5ca2 +0x406:  je     088d5cf9 <+0x45d>
088d5ca4 +0x408:  mov    0x8(%ebp),%eax
088d5ca7 +0x40b:  add    $0x24,%eax
088d5caa +0x40e:  mov    %eax,(%esp)
088d5cad +0x411:  call   088d6912 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x194>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x194
088d5cb2 +0x416:  lea    -0x48(%ebp),%eax
088d5cb5 +0x419:  mov    %eax,(%esp)
088d5cb8 +0x41c:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5cbd +0x421:  xor    $0x1,%eax
088d5cc0 +0x424:  test   %al,%al
088d5cc2 +0x426:  je     088d5cc6 <+0x42a>
088d5cc4 +0x428:  jmp    088d5cf4 <+0x458>
088d5cc6 +0x42a:  lea    -0x48(%ebp),%eax
088d5cc9 +0x42d:  add    $0x4,%eax
088d5ccc +0x430:  mov    %eax,(%esp)
088d5ccf +0x433:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5cd4 +0x438:  xor    $0x1,%eax
088d5cd7 +0x43b:  test   %al,%al
088d5cd9 +0x43d:  je     088d5cdd <+0x441>
088d5cdb +0x43f:  jmp    088d5cf4 <+0x458>
088d5cdd +0x441:  mov    0x8(%ebp),%eax
088d5ce0 +0x444:  lea    0x24(%eax),%edx
088d5ce3 +0x447:  lea    -0x48(%ebp),%eax
088d5ce6 +0x44a:  mov    %eax,0x4(%esp)
088d5cea +0x44e:  mov    %edx,(%esp)
088d5ced +0x451:  call   088d6b6e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x3f0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x3f0
088d5cf2 +0x456:  jmp    088d5cb2 <+0x416>
088d5cf4 +0x458:  jmp    088d58dc <+0x40>
088d5cf9 +0x45d:  movl   $"[super armor time]",0x4(%esp)
088d5d01 +0x465:  lea    -0x10(%ebp),%eax
088d5d04 +0x468:  mov    %eax,(%esp)
088d5d07 +0x46b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5d0c +0x470:  test   %al,%al
088d5d0e +0x472:  je     088d5d27 <+0x48b>
088d5d10 +0x474:  movl   $0x0,(%esp)
088d5d17 +0x47b:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d5d1c +0x480:  mov    0x8(%ebp),%edx
088d5d1f +0x483:  mov    %eax,0x30(%edx)
088d5d22 +0x486:  jmp    088d58dc <+0x40>
088d5d27 +0x48b:  movl   $"[unique dungeon list]",0x4(%esp)
088d5d2f +0x493:  lea    -0x10(%ebp),%eax
088d5d32 +0x496:  mov    %eax,(%esp)
088d5d35 +0x499:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5d3a +0x49e:  test   %al,%al
088d5d3c +0x4a0:  je     088d5daa <+0x50e>
088d5d3e +0x4a2:  mov    0x8(%ebp),%eax
088d5d41 +0x4a5:  add    $0x5c,%eax
088d5d44 +0x4a8:  mov    %eax,(%esp)
088d5d47 +0x4ab:  call   088d692e <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x1b0>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x1b0
088d5d4c +0x4b0:  lea    -0x54(%ebp),%eax
088d5d4f +0x4b3:  mov    %eax,(%esp)
088d5d52 +0x4b6:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5d57 +0x4bb:  xor    $0x1,%eax
088d5d5a +0x4be:  test   %al,%al
088d5d5c +0x4c0:  je     088d5d60 <+0x4c4>
088d5d5e +0x4c2:  jmp    088d5da5 <+0x509>
088d5d60 +0x4c4:  lea    -0x54(%ebp),%eax
088d5d63 +0x4c7:  add    $0x4,%eax
088d5d66 +0x4ca:  mov    %eax,(%esp)
088d5d69 +0x4cd:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5d6e +0x4d2:  xor    $0x1,%eax
088d5d71 +0x4d5:  test   %al,%al
088d5d73 +0x4d7:  je     088d5d77 <+0x4db>
088d5d75 +0x4d9:  jmp    088d5da5 <+0x509>
088d5d77 +0x4db:  lea    -0x54(%ebp),%eax
088d5d7a +0x4de:  add    $0x8,%eax
088d5d7d +0x4e1:  mov    %eax,(%esp)
088d5d80 +0x4e4:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5d85 +0x4e9:  xor    $0x1,%eax
088d5d88 +0x4ec:  test   %al,%al
088d5d8a +0x4ee:  je     088d5d8e <+0x4f2>
088d5d8c +0x4f0:  jmp    088d5da5 <+0x509>
088d5d8e +0x4f2:  mov    0x8(%ebp),%eax
088d5d91 +0x4f5:  lea    0x5c(%eax),%edx
088d5d94 +0x4f8:  lea    -0x54(%ebp),%eax
088d5d97 +0x4fb:  mov    %eax,0x4(%esp)
088d5d9b +0x4ff:  mov    %edx,(%esp)
088d5d9e +0x502:  call   088d6982 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x204>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x204
088d5da3 +0x507:  jmp    088d5d4c <+0x4b0>
088d5da5 +0x509:  jmp    088d58dc <+0x40>
088d5daa +0x50e:  movl   $"[buff max value]",0x4(%esp)
088d5db2 +0x516:  lea    -0x10(%ebp),%eax
088d5db5 +0x519:  mov    %eax,(%esp)
088d5db8 +0x51c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5dbd +0x521:  test   %al,%al
088d5dbf +0x523:  je     088d5dd4 <+0x538>
088d5dc1 +0x525:  mov    0x8(%ebp),%eax
088d5dc4 +0x528:  add    $0x34,%eax
088d5dc7 +0x52b:  mov    %eax,(%esp)
088d5dca +0x52e:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
088d5dcf +0x533:  jmp    088d58dc <+0x40>
088d5dd4 +0x538:  movl   $"[gold base]",0x4(%esp)
088d5ddc +0x540:  lea    -0x10(%ebp),%eax
088d5ddf +0x543:  mov    %eax,(%esp)
088d5de2 +0x546:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5de7 +0x54b:  test   %al,%al
088d5de9 +0x54d:  je     088d5dfe <+0x562>
088d5deb +0x54f:  mov    0x8(%ebp),%eax
088d5dee +0x552:  add    $0x38,%eax
088d5df1 +0x555:  mov    %eax,(%esp)
088d5df4 +0x558:  call   088bc58e <_Z9ScanFloatPf>  ; ScanFloat(float*)
088d5df9 +0x55d:  jmp    088d58dc <+0x40>
088d5dfe +0x562:  movl   $"[gold multi]",0x4(%esp)
088d5e06 +0x56a:  lea    -0x10(%ebp),%eax
088d5e09 +0x56d:  mov    %eax,(%esp)
088d5e0c +0x570:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5e11 +0x575:  test   %al,%al
088d5e13 +0x577:  je     088d5e28 <+0x58c>
088d5e15 +0x579:  mov    0x8(%ebp),%eax
088d5e18 +0x57c:  add    $0x3c,%eax
088d5e1b +0x57f:  mov    %eax,(%esp)
088d5e1e +0x582:  call   088bc58e <_Z9ScanFloatPf>  ; ScanFloat(float*)
088d5e23 +0x587:  jmp    088d58dc <+0x40>
088d5e28 +0x58c:  movl   $"[equipment upgrade max]",0x4(%esp)
088d5e30 +0x594:  lea    -0x10(%ebp),%eax
088d5e33 +0x597:  mov    %eax,(%esp)
088d5e36 +0x59a:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5e3b +0x59f:  test   %al,%al
088d5e3d +0x5a1:  je     088d58db <+0x3f>
088d5e43 +0x5a7:  movl   $0x0,(%esp)
088d5e4a +0x5ae:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
088d5e4f +0x5b3:  mov    0x8(%ebp),%edx
088d5e52 +0x5b6:  mov    %eax,0x40(%edx)
088d5e55 +0x5b9:  jmp    088d58dc <+0x40>
088d5e5a +0x5be:  nop
088d5e5b +0x5bf:  mov    $0x1,%ebx
088d5e60 +0x5c4:  lea    -0x10(%ebp),%eax
088d5e63 +0x5c7:  mov    %eax,(%esp)
088d5e66 +0x5ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d5e6b +0x5cf:  jmp    088d5e88 <+0x5ec>
088d5e6d +0x5d1:  mov    %edx,%ebx
088d5e6f +0x5d3:  mov    %eax,%esi
088d5e71 +0x5d5:  lea    -0x10(%ebp),%eax
088d5e74 +0x5d8:  mov    %eax,(%esp)
088d5e77 +0x5db:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
088d5e7c +0x5e0:  mov    %esi,%eax
088d5e7e +0x5e2:  mov    %ebx,%edx
088d5e80 +0x5e4:  mov    %eax,(%esp)
088d5e83 +0x5e7:  call   08ae3750 <_Unwind_Resume>
088d5e88 +0x5ec:  mov    %ebx,%eax
088d5e8a +0x5ee:  add    $0x60,%esp
088d5e8d +0x5f1:  pop    %ebx
088d5e8e +0x5f2:  pop    %esi
088d5e8f +0x5f3:  pop    %ebp
088d5e90 +0x5f4:  ret
088d5e91 +0x5f5:  nop
```

## 反编译 C

```c
// BlueMarbleInfoScript::importScript @ 0x88d589c

/* BlueMarbleInfoScript::importScript(char const*, char const*) */

undefined4 __thiscall
BlueMarbleInfoScript::importScript(BlueMarbleInfoScript *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  BlueMarbleRandomDungeonInfo local_58 [4];
  int iStack_54;
  int iStack_50;
  BlueMarbleDungeonDifficulty local_4c [4];
  int iStack_48;
  BlueMarbleTilePos local_44 [4];
  int iStack_40;
  BlueMarbleRewardInfo local_3c [4];
  int iStack_38;
  BlueMarbleRandomItemInfo local_34 [4];
  int local_30;
  BlueMarbleRandomDungeonInfo local_2c [4];
  int iStack_28;
  int iStack_24;
  BlueMarbleRandomDungeonInfo local_20 [4];
  int iStack_1c;
  int iStack_18;
  string local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile(param_1,param_2);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_10 = 0;
                    /* try { // try from 088d58ea to 088d5e4e has its CatchHandler @ 088d5e6d */
    while (cVar1 = ScanType((string *)&local_14,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[dungeon list]");
      if (bVar2) {
        std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::clear
                  ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                    *)(this + 0x44));
        while (((cVar1 = ScanInt((int *)local_20), cVar1 == '\x01' &&
                (cVar1 = ScanInt(&iStack_1c), cVar1 == '\x01')) &&
               (cVar1 = ScanInt(&iStack_18), cVar1 == '\x01'))) {
          std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
          push_back((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                     *)(this + 0x44),local_20);
        }
      }
      else {
        bVar2 = std::operator==(&local_14,"[boss dungeon list]");
        if (bVar2) {
          std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
          clear((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
                (this + 0x50));
          while (((cVar1 = ScanInt((int *)local_2c), cVar1 == '\x01' &&
                  (cVar1 = ScanInt(&iStack_28), cVar1 == '\x01')) &&
                 (cVar1 = ScanInt(&iStack_24), cVar1 == '\x01'))) {
            std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::
            push_back((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                       *)(this + 0x50),local_2c);
          }
        }
        else {
          bVar2 = std::operator==(&local_14,"[item list]");
          if (bVar2) {
            std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::clear
                      ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
                       (this + 0x68));
            while ((cVar1 = ScanInt((int *)local_34), cVar1 == '\x01' &&
                   (cVar1 = ScanInt(&local_30), cVar1 == '\x01'))) {
              *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + local_30;
              std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::
              push_back((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *
                        )(this + 0x68),local_34);
            }
          }
          else {
            bVar2 = std::operator==(&local_14,"[player max]");
            if (bVar2) {
              ScanInt((int *)this);
            }
            else {
              bVar2 = std::operator==(&local_14,"[enter level]");
              if (bVar2) {
                ScanInt((int *)(this + 4));
              }
              else {
                bVar2 = std::operator==(&local_14,"[enter max level]");
                if (bVar2) {
                  ScanInt((int *)(this + 8));
                }
                else {
                  bVar2 = std::operator==(&local_14,"[enter count]");
                  if (bVar2) {
                    ScanInt((int *)(this + 0xc));
                  }
                  else {
                    bVar2 = std::operator==(&local_14,"[die count]");
                    if (bVar2) {
                      ScanInt((int *)(this + 0x10));
                    }
                    else {
                      bVar2 = std::operator==(&local_14,"[dice value]");
                      if (bVar2) {
                        ScanInt((int *)(this + 0x14));
                        ScanInt((int *)(this + 0x18));
                      }
                      else {
                        bVar2 = std::operator==(&local_14,"[reward item]");
                        if (bVar2) {
                          std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::
                          clear((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *
                                )(this + 0x74));
                          while ((cVar1 = ScanInt((int *)local_3c), cVar1 == '\x01' &&
                                 (cVar1 = ScanInt(&iStack_38), cVar1 == '\x01'))) {
                            std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::
                            push_back((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>
                                       *)(this + 0x74),local_3c);
                          }
                        }
                        else {
                          bVar2 = std::operator==(&local_14,"[tile pos]");
                          if (bVar2) {
                            std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::clear
                                      ((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>
                                        *)(this + 0x80));
                            while ((cVar1 = ScanInt((int *)local_44), cVar1 == '\x01' &&
                                   (cVar1 = ScanInt(&iStack_40), cVar1 == '\x01'))) {
                              std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::
                              push_back((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>
                                         *)(this + 0x80),local_44);
                            }
                          }
                          else {
                            bVar2 = std::operator==(&local_14,"[dungeon difficulty]");
                            if (bVar2) {
                              uVar3 = ScanInt((bool *)0x0);
                              *(undefined4 *)(this + 0x20) = uVar3;
                            }
                            else {
                              bVar2 = std::operator==(&local_14,"[dungeon difficulty list]");
                              if (bVar2) {
                                std::
                                vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                ::clear((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                         *)(this + 0x24));
                                while ((cVar1 = ScanInt((int *)local_4c), cVar1 == '\x01' &&
                                       (cVar1 = ScanInt(&iStack_48), cVar1 == '\x01'))) {
                                  std::
                                  vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                  ::push_back((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>
                                               *)(this + 0x24),local_4c);
                                }
                              }
                              else {
                                bVar2 = std::operator==(&local_14,"[super armor time]");
                                if (bVar2) {
                                  uVar3 = ScanInt((bool *)0x0);
                                  *(undefined4 *)(this + 0x30) = uVar3;
                                }
                                else {
                                  bVar2 = std::operator==(&local_14,"[unique dungeon list]");
                                  if (bVar2) {
                                    std::
                                    vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                    ::clear((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                             *)(this + 0x5c));
                                    while (((cVar1 = ScanInt((int *)local_58), cVar1 == '\x01' &&
                                            (cVar1 = ScanInt(&iStack_54), cVar1 == '\x01')) &&
                                           (cVar1 = ScanInt(&iStack_50), cVar1 == '\x01'))) {
                                      std::
                                      vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                      ::push_back((
                                                  vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>
                                                  *)(this + 0x5c),local_58);
                                    }
                                  }
                                  else {
                                    bVar2 = std::operator==(&local_14,"[buff max value]");
                                    if (bVar2) {
                                      ScanInt((int *)(this + 0x34));
                                    }
                                    else {
                                      bVar2 = std::operator==(&local_14,"[gold base]");
                                      if (bVar2) {
                                        ScanFloat((float *)(this + 0x38));
                                      }
                                      else {
                                        bVar2 = std::operator==(&local_14,"[gold multi]");
                                        if (bVar2) {
                                          ScanFloat((float *)(this + 0x3c));
                                        }
                                        else {
                                          bVar2 = std::operator==(&local_14,
                                                                  "[equipment upgrade max]");
                                          if (bVar2) {
                                            uVar3 = ScanInt((bool *)0x0);
                                            *(undefined4 *)(this + 0x40) = uVar3;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 1;
    std::string::~string((string *)&local_14);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
