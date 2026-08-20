# ImportIndependentDrop

`_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc`

`IndependentDropParameterScript::ImportIndependentDrop(char const*)`

| 类 | 地址 |
|---|---|
| `IndependentDropParameterScript` | `0x0897c398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0897c398  _ZN30IndependentDropParameterScript21ImportIndependentDropEPKc
#           IndependentDropParameterScript::ImportIndependentDrop(char const*)
# range [0x0897c398, 0x0897cb27]
0897c398 +0x000:  push   %ebp
0897c399 +0x001:  mov    %esp,%ebp
0897c39b +0x003:  push   %esi
0897c39c +0x004:  push   %ebx
0897c39d +0x005:  sub    $0xc0,%esp
0897c3a3 +0x00b:  mov    0xc(%ebp),%eax
0897c3a6 +0x00e:  mov    %eax,0x4(%esp)
0897c3aa +0x012:  movl   $"",(%esp)
0897c3b1 +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
0897c3b6 +0x01e:  xor    $0x1,%eax
0897c3b9 +0x021:  test   %al,%al
0897c3bb +0x023:  je     0897c3c7 <+0x2f>
0897c3bd +0x025:  mov    $0x66,%esi
0897c3c2 +0x02a:  jmp    0897cb1c <+0x784>
0897c3c7 +0x02f:  lea    -0x3c(%ebp),%eax
0897c3ca +0x032:  mov    %eax,(%esp)
0897c3cd +0x035:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0897c3d2 +0x03a:  movb   $0x0,-0x3d(%ebp)
0897c3d6 +0x03e:  jmp    0897c3dc <+0x44>
0897c3d8 +0x040:  nop
0897c3d9 +0x041:  jmp    0897c3dc <+0x44>
0897c3db +0x043:  nop
0897c3dc +0x044:  movl   $0x1,0x4(%esp)
0897c3e4 +0x04c:  lea    -0x3c(%ebp),%eax
0897c3e7 +0x04f:  mov    %eax,(%esp)
0897c3ea +0x052:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0897c3ef +0x057:  xor    $0x1,%eax
0897c3f2 +0x05a:  test   %al,%al
0897c3f4 +0x05c:  jne    0897caee <+0x756>
0897c3fa +0x062:  movl   $"[independent drop]",0x4(%esp)
0897c402 +0x06a:  lea    -0x3c(%ebp),%eax
0897c405 +0x06d:  mov    %eax,(%esp)
0897c408 +0x070:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0897c40d +0x075:  test   %al,%al
0897c40f +0x077:  je     0897ca0a <+0x672>
0897c415 +0x07d:  movl   $0x0,-0x44(%ebp)
0897c41c +0x084:  lea    -0x9c(%ebp),%eax
0897c422 +0x08a:  mov    %eax,(%esp)
0897c425 +0x08d:  call   0897cbda <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x49>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x49
0897c42a +0x092:  lea    -0x3d(%ebp),%eax
0897c42d +0x095:  mov    %eax,(%esp)
0897c430 +0x098:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c435 +0x09d:  mov    %eax,-0x9c(%ebp)
0897c43b +0x0a3:  movzbl -0x3d(%ebp),%eax
0897c43f +0x0a7:  xor    $0x1,%eax
0897c442 +0x0aa:  test   %al,%al
0897c444 +0x0ac:  je     0897c450 <+0xb8>
0897c446 +0x0ae:  mov    $0x0,%ebx
0897c44b +0x0b3:  jmp    0897c9ea <+0x652>
0897c450 +0x0b8:  lea    -0x3d(%ebp),%eax
0897c453 +0x0bb:  mov    %eax,(%esp)
0897c456 +0x0be:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c45b +0x0c3:  mov    %eax,-0x98(%ebp)
0897c461 +0x0c9:  movzbl -0x3d(%ebp),%eax
0897c465 +0x0cd:  xor    $0x1,%eax
0897c468 +0x0d0:  test   %al,%al
0897c46a +0x0d2:  je     0897c47b <+0xe3>
0897c46c +0x0d4:  mov    $0x7d,%esi
0897c471 +0x0d9:  mov    $0x1,%ebx
0897c476 +0x0de:  jmp    0897c9ea <+0x652>
0897c47b +0x0e3:  lea    -0x3d(%ebp),%eax
0897c47e +0x0e6:  mov    %eax,(%esp)
0897c481 +0x0e9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c486 +0x0ee:  mov    %eax,-0x94(%ebp)
0897c48c +0x0f4:  movzbl -0x3d(%ebp),%eax
0897c490 +0x0f8:  xor    $0x1,%eax
0897c493 +0x0fb:  test   %al,%al
0897c495 +0x0fd:  je     0897c4a6 <+0x10e>
0897c497 +0x0ff:  mov    $0x81,%esi
0897c49c +0x104:  mov    $0x1,%ebx
0897c4a1 +0x109:  jmp    0897c9ea <+0x652>
0897c4a6 +0x10e:  lea    -0x3d(%ebp),%eax
0897c4a9 +0x111:  mov    %eax,(%esp)
0897c4ac +0x114:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c4b1 +0x119:  mov    %eax,-0x90(%ebp)
0897c4b7 +0x11f:  movzbl -0x3d(%ebp),%eax
0897c4bb +0x123:  xor    $0x1,%eax
0897c4be +0x126:  test   %al,%al
0897c4c0 +0x128:  je     0897c4d1 <+0x139>
0897c4c2 +0x12a:  mov    $0x89,%esi
0897c4c7 +0x12f:  mov    $0x1,%ebx
0897c4cc +0x134:  jmp    0897c9ea <+0x652>
0897c4d1 +0x139:  lea    -0x3d(%ebp),%eax
0897c4d4 +0x13c:  mov    %eax,(%esp)
0897c4d7 +0x13f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c4dc +0x144:  mov    %eax,-0x8c(%ebp)
0897c4e2 +0x14a:  movzbl -0x3d(%ebp),%eax
0897c4e6 +0x14e:  xor    $0x1,%eax
0897c4e9 +0x151:  test   %al,%al
0897c4eb +0x153:  je     0897c4fc <+0x164>
0897c4ed +0x155:  mov    $0x91,%esi
0897c4f2 +0x15a:  mov    $0x1,%ebx
0897c4f7 +0x15f:  jmp    0897c9ea <+0x652>
0897c4fc +0x164:  lea    -0x3d(%ebp),%eax
0897c4ff +0x167:  mov    %eax,(%esp)
0897c502 +0x16a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c507 +0x16f:  mov    %eax,-0x88(%ebp)
0897c50d +0x175:  movzbl -0x3d(%ebp),%eax
0897c511 +0x179:  xor    $0x1,%eax
0897c514 +0x17c:  test   %al,%al
0897c516 +0x17e:  je     0897c527 <+0x18f>
0897c518 +0x180:  mov    $0x99,%esi
0897c51d +0x185:  mov    $0x1,%ebx
0897c522 +0x18a:  jmp    0897c9ea <+0x652>
0897c527 +0x18f:  lea    -0x3d(%ebp),%eax
0897c52a +0x192:  mov    %eax,(%esp)
0897c52d +0x195:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c532 +0x19a:  mov    %eax,-0x84(%ebp)
0897c538 +0x1a0:  movzbl -0x3d(%ebp),%eax
0897c53c +0x1a4:  xor    $0x1,%eax
0897c53f +0x1a7:  test   %al,%al
0897c541 +0x1a9:  je     0897c552 <+0x1ba>
0897c543 +0x1ab:  mov    $0xa1,%esi
0897c548 +0x1b0:  mov    $0x1,%ebx
0897c54d +0x1b5:  jmp    0897c9ea <+0x652>
0897c552 +0x1ba:  lea    -0x3d(%ebp),%eax
0897c555 +0x1bd:  mov    %eax,(%esp)
0897c558 +0x1c0:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c55d +0x1c5:  mov    %eax,-0x80(%ebp)
0897c560 +0x1c8:  movzbl -0x3d(%ebp),%eax
0897c564 +0x1cc:  xor    $0x1,%eax
0897c567 +0x1cf:  test   %al,%al
0897c569 +0x1d1:  je     0897c57a <+0x1e2>
0897c56b +0x1d3:  mov    $0xa5,%esi
0897c570 +0x1d8:  mov    $0x1,%ebx
0897c575 +0x1dd:  jmp    0897c9ea <+0x652>
0897c57a +0x1e2:  movl   $0x0,-0x24(%ebp)
0897c581 +0x1e9:  jmp    0897c5b9 <+0x221>
0897c583 +0x1eb:  mov    -0x24(%ebp),%ebx
0897c586 +0x1ee:  lea    -0x3d(%ebp),%eax
0897c589 +0x1f1:  mov    %eax,(%esp)
0897c58c +0x1f4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c591 +0x1f9:  lea    0x4(%ebx),%edx
0897c594 +0x1fc:  mov    %eax,-0x8c(%ebp,%edx,4)
0897c59b +0x203:  movzbl -0x3d(%ebp),%eax
0897c59f +0x207:  xor    $0x1,%eax
0897c5a2 +0x20a:  test   %al,%al
0897c5a4 +0x20c:  je     0897c5b5 <+0x21d>
0897c5a6 +0x20e:  mov    $0xab,%esi
0897c5ab +0x213:  mov    $0x1,%ebx
0897c5b0 +0x218:  jmp    0897c9ea <+0x652>
0897c5b5 +0x21d:  addl   $0x1,-0x24(%ebp)
0897c5b9 +0x221:  cmpl   $0x3,-0x24(%ebp)
0897c5bd +0x225:  setle  %al
0897c5c0 +0x228:  test   %al,%al
0897c5c2 +0x22a:  jne    0897c583 <+0x1eb>
0897c5c4 +0x22c:  lea    -0x3d(%ebp),%eax
0897c5c7 +0x22f:  mov    %eax,(%esp)
0897c5ca +0x232:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c5cf +0x237:  mov    %eax,-0x6c(%ebp)
0897c5d2 +0x23a:  movzbl -0x3d(%ebp),%eax
0897c5d6 +0x23e:  xor    $0x1,%eax
0897c5d9 +0x241:  test   %al,%al
0897c5db +0x243:  je     0897c5ec <+0x254>
0897c5dd +0x245:  mov    $0xb0,%esi
0897c5e2 +0x24a:  mov    $0x1,%ebx
0897c5e7 +0x24f:  jmp    0897c9ea <+0x652>
0897c5ec +0x254:  movl   $0x0,-0x68(%ebp)
0897c5f3 +0x25b:  lea    -0x9c(%ebp),%eax
0897c5f9 +0x261:  add    $0x38,%eax
0897c5fc +0x264:  mov    %eax,(%esp)
0897c5ff +0x267:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0897c604 +0x26c:  lea    -0x3d(%ebp),%eax
0897c607 +0x26f:  mov    %eax,(%esp)
0897c60a +0x272:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c60f +0x277:  mov    %eax,-0x58(%ebp)
0897c612 +0x27a:  movzbl -0x3d(%ebp),%eax
0897c616 +0x27e:  xor    $0x1,%eax
0897c619 +0x281:  test   %al,%al
0897c61b +0x283:  je     0897c62c <+0x294>
0897c61d +0x285:  mov    $0xb7,%esi
0897c622 +0x28a:  mov    $0x1,%ebx
0897c627 +0x28f:  jmp    0897c9ea <+0x652>
0897c62c +0x294:  lea    -0x3d(%ebp),%eax
0897c62f +0x297:  mov    %eax,(%esp)
0897c632 +0x29a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c637 +0x29f:  mov    %eax,-0x54(%ebp)
0897c63a +0x2a2:  movzbl -0x3d(%ebp),%eax
0897c63e +0x2a6:  xor    $0x1,%eax
0897c641 +0x2a9:  test   %al,%al
0897c643 +0x2ab:  je     0897c654 <+0x2bc>
0897c645 +0x2ad:  mov    $0xbb,%esi
0897c64a +0x2b2:  mov    $0x1,%ebx
0897c64f +0x2b7:  jmp    0897c9ea <+0x652>
0897c654 +0x2bc:  mov    -0x58(%ebp),%edx
0897c657 +0x2bf:  mov    -0x54(%ebp),%eax
0897c65a +0x2c2:  cmp    %eax,%edx
0897c65c +0x2c4:  jle    0897c66d <+0x2d5>
0897c65e +0x2c6:  mov    $0xbe,%esi
0897c663 +0x2cb:  mov    $0x1,%ebx
0897c668 +0x2d0:  jmp    0897c9ea <+0x652>
0897c66d +0x2d5:  lea    -0x3d(%ebp),%eax
0897c670 +0x2d8:  mov    %eax,(%esp)
0897c673 +0x2db:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c678 +0x2e0:  mov    %eax,-0x50(%ebp)
0897c67b +0x2e3:  movzbl -0x3d(%ebp),%eax
0897c67f +0x2e7:  xor    $0x1,%eax
0897c682 +0x2ea:  test   %al,%al
0897c684 +0x2ec:  je     0897c695 <+0x2fd>
0897c686 +0x2ee:  mov    $0xc3,%esi
0897c68b +0x2f3:  mov    $0x1,%ebx
0897c690 +0x2f8:  jmp    0897c9ea <+0x652>
0897c695 +0x2fd:  lea    -0x3d(%ebp),%eax
0897c698 +0x300:  mov    %eax,(%esp)
0897c69b +0x303:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c6a0 +0x308:  mov    %eax,-0x28(%ebp)
0897c6a3 +0x30b:  cmpl   $0x0,-0x28(%ebp)
0897c6a7 +0x30f:  je     0897c6f7 <+0x35f>
0897c6a9 +0x311:  cmpl   $0x1,-0x28(%ebp)
0897c6ad +0x315:  je     0897c6f7 <+0x35f>
0897c6af +0x317:  cmpl   $0x2,-0x28(%ebp)
0897c6b3 +0x31b:  je     0897c6f7 <+0x35f>
0897c6b5 +0x31d:  mov    -0x28(%ebp),%eax
0897c6b8 +0x320:  mov    %eax,0x14(%esp)
0897c6bc +0x324:  movl   $"flag wrong number(%d)",0x10(%esp)
0897c6c4 +0x32c:  movl   $0xca,0xc(%esp)
0897c6cc +0x334:  movl   $&_ZZN30IndependentDropParameterScript21ImportIndependentDropEPKcE12__FUNCTION__,0x8(%esp)
0897c6d4 +0x33c:  movl   $"../RDARScriptIndependentDrop.cpp",0x4(%esp)
0897c6dc +0x344:  movl   $0x1,(%esp)
0897c6e3 +0x34b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0897c6e8 +0x350:  mov    $0xcb,%esi
0897c6ed +0x355:  mov    $0x1,%ebx
0897c6f2 +0x35a:  jmp    0897c9ea <+0x652>
0897c6f7 +0x35f:  movzbl -0x3d(%ebp),%eax
0897c6fb +0x363:  xor    $0x1,%eax
0897c6fe +0x366:  test   %al,%al
0897c700 +0x368:  je     0897c711 <+0x379>
0897c702 +0x36a:  mov    $0xcf,%esi
0897c707 +0x36f:  mov    $0x1,%ebx
0897c70c +0x374:  jmp    0897c9ea <+0x652>
0897c711 +0x379:  lea    -0x48(%ebp),%eax
0897c714 +0x37c:  mov    %eax,(%esp)
0897c717 +0x37f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0897c71c +0x384:  cmpl   $0x1,-0x28(%ebp)
0897c720 +0x388:  jne    0897c7e8 <+0x450>
0897c726 +0x38e:  movl   $0x1,0x4(%esp)
0897c72e +0x396:  lea    -0x48(%ebp),%eax
0897c731 +0x399:  mov    %eax,(%esp)
0897c734 +0x39c:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0897c739 +0x3a1:  test   %al,%al
0897c73b +0x3a3:  je     0897c977 <+0x5df>
0897c741 +0x3a9:  movl   $"[list]",0x4(%esp)
0897c749 +0x3b1:  lea    -0x48(%ebp),%eax
0897c74c +0x3b4:  mov    %eax,(%esp)
0897c74f +0x3b7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0897c754 +0x3bc:  test   %al,%al
0897c756 +0x3be:  je     0897c97a <+0x5e2>
0897c75c +0x3c4:  lea    -0x3d(%ebp),%eax
0897c75f +0x3c7:  mov    %eax,(%esp)
0897c762 +0x3ca:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c767 +0x3cf:  mov    %eax,-0x44(%ebp)
0897c76a +0x3d2:  movzbl -0x3d(%ebp),%eax
0897c76e +0x3d6:  xor    $0x1,%eax
0897c771 +0x3d9:  test   %al,%al
0897c773 +0x3db:  je     0897c77b <+0x3e3>
0897c775 +0x3dd:  nop
0897c776 +0x3de:  jmp    0897c97e <+0x5e6>
0897c77b +0x3e3:  lea    -0x3d(%ebp),%eax
0897c77e +0x3e6:  mov    %eax,(%esp)
0897c781 +0x3e9:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c786 +0x3ee:  mov    %eax,-0x20(%ebp)
0897c789 +0x3f1:  movzbl -0x3d(%ebp),%eax
0897c78d +0x3f5:  xor    $0x1,%eax
0897c790 +0x3f8:  test   %al,%al
0897c792 +0x3fa:  je     0897c7a3 <+0x40b>
0897c794 +0x3fc:  mov    $0xe1,%esi
0897c799 +0x401:  mov    $0x0,%ebx
0897c79e +0x406:  jmp    0897c9b2 <+0x61a>
0897c7a3 +0x40b:  mov    -0x68(%ebp),%eax
0897c7a6 +0x40e:  add    -0x20(%ebp),%eax
0897c7a9 +0x411:  mov    %eax,-0x68(%ebp)
0897c7ac +0x414:  lea    -0x9c(%ebp),%eax
0897c7b2 +0x41a:  add    $0x34,%eax
0897c7b5 +0x41d:  mov    %eax,0x8(%esp)
0897c7b9 +0x421:  lea    -0x44(%ebp),%eax
0897c7bc +0x424:  mov    %eax,0x4(%esp)
0897c7c0 +0x428:  lea    -0x38(%ebp),%eax
0897c7c3 +0x42b:  mov    %eax,(%esp)
0897c7c6 +0x42e:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
0897c7cb +0x433:  lea    -0x38(%ebp),%eax
0897c7ce +0x436:  mov    %eax,0x4(%esp)
0897c7d2 +0x43a:  lea    -0x9c(%ebp),%eax
0897c7d8 +0x440:  add    $0x38,%eax
0897c7db +0x443:  mov    %eax,(%esp)
0897c7de +0x446:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0897c7e3 +0x44b:  jmp    0897c75c <+0x3c4>
0897c7e8 +0x450:  cmpl   $0x2,-0x28(%ebp)
0897c7ec +0x454:  jne    0897c97e <+0x5e6>
0897c7f2 +0x45a:  movl   $0x1,0x4(%esp)
0897c7fa +0x462:  lea    -0x48(%ebp),%eax
0897c7fd +0x465:  mov    %eax,(%esp)
0897c800 +0x468:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
0897c805 +0x46d:  test   %al,%al
0897c807 +0x46f:  je     0897c97e <+0x5e6>
0897c80d +0x475:  movl   $"[list]",0x4(%esp)
0897c815 +0x47d:  lea    -0x48(%ebp),%eax
0897c818 +0x480:  mov    %eax,(%esp)
0897c81b +0x483:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0897c820 +0x488:  test   %al,%al
0897c822 +0x48a:  je     0897c97e <+0x5e6>
0897c828 +0x490:  movb   $0x0,-0x19(%ebp)
0897c82c +0x494:  lea    -0x3d(%ebp),%eax
0897c82f +0x497:  mov    %eax,(%esp)
0897c832 +0x49a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897c837 +0x49f:  mov    %eax,-0x18(%ebp)
0897c83a +0x4a2:  movzbl -0x3d(%ebp),%eax
0897c83e +0x4a6:  xor    $0x1,%eax
0897c841 +0x4a9:  test   %al,%al
0897c843 +0x4ab:  jne    0897c97d <+0x5e5>
0897c849 +0x4b1:  movl   $0x0,-0x14(%ebp)
0897c850 +0x4b8:  jmp    0897c959 <+0x5c1>
0897c855 +0x4bd:  mov    -0x14(%ebp),%edx
0897c858 +0x4c0:  mov    0x8(%ebp),%eax
0897c85b +0x4c3:  mov    %edx,0x4(%esp)
0897c85f +0x4c7:  mov    %eax,(%esp)
0897c862 +0x4ca:  call   0897ccf6 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x165>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x165
0897c867 +0x4cf:  mov    (%eax),%eax
0897c869 +0x4d1:  cmp    -0x18(%ebp),%eax
0897c86c +0x4d4:  sete   %al
0897c86f +0x4d7:  test   %al,%al
0897c871 +0x4d9:  je     0897c949 <+0x5b1>
0897c877 +0x4df:  movl   $0x0,-0x10(%ebp)
0897c87e +0x4e6:  jmp    0897c91a <+0x582>
0897c883 +0x4eb:  mov    -0x10(%ebp),%ebx
0897c886 +0x4ee:  mov    -0x14(%ebp),%edx
0897c889 +0x4f1:  mov    0x8(%ebp),%eax
0897c88c +0x4f4:  mov    %edx,0x4(%esp)
0897c890 +0x4f8:  mov    %eax,(%esp)
0897c893 +0x4fb:  call   0897ccf6 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x165>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x165
0897c898 +0x500:  add    $0x4,%eax
0897c89b +0x503:  mov    %ebx,0x4(%esp)
0897c89f +0x507:  mov    %eax,(%esp)
0897c8a2 +0x50a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0897c8a7 +0x50f:  mov    (%eax),%eax
0897c8a9 +0x511:  mov    %eax,-0x44(%ebp)
0897c8ac +0x514:  mov    -0x10(%ebp),%ebx
0897c8af +0x517:  mov    -0x14(%ebp),%edx
0897c8b2 +0x51a:  mov    0x8(%ebp),%eax
0897c8b5 +0x51d:  mov    %edx,0x4(%esp)
0897c8b9 +0x521:  mov    %eax,(%esp)
0897c8bc +0x524:  call   0897ccf6 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x165>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x165
0897c8c1 +0x529:  add    $0x4,%eax
0897c8c4 +0x52c:  mov    %ebx,0x4(%esp)
0897c8c8 +0x530:  mov    %eax,(%esp)
0897c8cb +0x533:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0897c8d0 +0x538:  mov    0x4(%eax),%eax
0897c8d3 +0x53b:  mov    %eax,-0xc(%ebp)
0897c8d6 +0x53e:  mov    -0x68(%ebp),%eax
0897c8d9 +0x541:  add    -0xc(%ebp),%eax
0897c8dc +0x544:  mov    %eax,-0x68(%ebp)
0897c8df +0x547:  lea    -0x9c(%ebp),%eax
0897c8e5 +0x54d:  add    $0x34,%eax
0897c8e8 +0x550:  mov    %eax,0x8(%esp)
0897c8ec +0x554:  lea    -0x44(%ebp),%eax
0897c8ef +0x557:  mov    %eax,0x4(%esp)
0897c8f3 +0x55b:  lea    -0x30(%ebp),%eax
0897c8f6 +0x55e:  mov    %eax,(%esp)
0897c8f9 +0x561:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
0897c8fe +0x566:  lea    -0x30(%ebp),%eax
0897c901 +0x569:  mov    %eax,0x4(%esp)
0897c905 +0x56d:  lea    -0x9c(%ebp),%eax
0897c90b +0x573:  add    $0x38,%eax
0897c90e +0x576:  mov    %eax,(%esp)
0897c911 +0x579:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0897c916 +0x57e:  addl   $0x1,-0x10(%ebp)
0897c91a +0x582:  mov    -0x14(%ebp),%edx
0897c91d +0x585:  mov    0x8(%ebp),%eax
0897c920 +0x588:  mov    %edx,0x4(%esp)
0897c924 +0x58c:  mov    %eax,(%esp)
0897c927 +0x58f:  call   0897ccf6 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x165>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x165
0897c92c +0x594:  add    $0x4,%eax
0897c92f +0x597:  mov    %eax,(%esp)
0897c932 +0x59a:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0897c937 +0x59f:  cmp    -0x10(%ebp),%eax
0897c93a +0x5a2:  setg   %al
0897c93d +0x5a5:  test   %al,%al
0897c93f +0x5a7:  jne    0897c883 <+0x4eb>
0897c945 +0x5ad:  movb   $0x1,-0x19(%ebp)
0897c949 +0x5b1:  cmpb   $0x0,-0x19(%ebp)
0897c94d +0x5b5:  je     0897c955 <+0x5bd>
0897c94f +0x5b7:  nop
0897c950 +0x5b8:  jmp    0897c828 <+0x490>
0897c955 +0x5bd:  addl   $0x1,-0x14(%ebp)
0897c959 +0x5c1:  mov    0x8(%ebp),%eax
0897c95c +0x5c4:  mov    %eax,(%esp)
0897c95f +0x5c7:  call   081b4ae4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x358>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x358
0897c964 +0x5cc:  cmp    -0x14(%ebp),%eax
0897c967 +0x5cf:  setg   %al
0897c96a +0x5d2:  test   %al,%al
0897c96c +0x5d4:  jne    0897c855 <+0x4bd>
0897c972 +0x5da:  jmp    0897c828 <+0x490>
0897c977 +0x5df:  nop
0897c978 +0x5e0:  jmp    0897c97e <+0x5e6>
0897c97a +0x5e2:  nop
0897c97b +0x5e3:  jmp    0897c97e <+0x5e6>
0897c97d +0x5e5:  nop
0897c97e +0x5e6:  mov    0x8(%ebp),%eax
0897c981 +0x5e9:  lea    0xc(%eax),%edx
0897c984 +0x5ec:  lea    -0x9c(%ebp),%eax
0897c98a +0x5f2:  mov    %eax,0x4(%esp)
0897c98e +0x5f6:  mov    %edx,(%esp)
0897c991 +0x5f9:  call   0897cd08 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x177>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x177
0897c996 +0x5fe:  mov    $0x1,%ebx
0897c99b +0x603:  jmp    0897c9b2 <+0x61a>
0897c99d +0x605:  mov    %edx,%ebx
0897c99f +0x607:  mov    %eax,%esi
0897c9a1 +0x609:  lea    -0x48(%ebp),%eax
0897c9a4 +0x60c:  mov    %eax,(%esp)
0897c9a7 +0x60f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0897c9ac +0x614:  mov    %esi,%eax
0897c9ae +0x616:  mov    %ebx,%edx
0897c9b0 +0x618:  jmp    0897c9cf <+0x637>
0897c9b2 +0x61a:  lea    -0x48(%ebp),%eax
0897c9b5 +0x61d:  mov    %eax,(%esp)
0897c9b8 +0x620:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0897c9bd +0x625:  test   %ebx,%ebx
0897c9bf +0x627:  jne    0897c9c8 <+0x630>
0897c9c1 +0x629:  mov    $0x1,%ebx
0897c9c6 +0x62e:  jmp    0897c9ea <+0x652>
0897c9c8 +0x630:  mov    $0x2,%ebx
0897c9cd +0x635:  jmp    0897c9ea <+0x652>
0897c9cf +0x637:  mov    %edx,%ebx
0897c9d1 +0x639:  mov    %eax,%esi
0897c9d3 +0x63b:  lea    -0x9c(%ebp),%eax
0897c9d9 +0x641:  mov    %eax,(%esp)
0897c9dc +0x644:  call   083dd4e4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x774b0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x774b0
0897c9e1 +0x649:  mov    %esi,%eax
0897c9e3 +0x64b:  mov    %ebx,%edx
0897c9e5 +0x64d:  jmp    0897caf6 <+0x75e>
0897c9ea +0x652:  lea    -0x9c(%ebp),%eax
0897c9f0 +0x658:  mov    %eax,(%esp)
0897c9f3 +0x65b:  call   083dd4e4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x774b0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x774b0
0897c9f8 +0x660:  test   %ebx,%ebx
0897c9fa +0x662:  je     0897ca0a <+0x672>
0897c9fc +0x664:  cmp    $0x1,%ebx
0897c9ff +0x667:  je     0897cb11 <+0x779>
0897ca05 +0x66d:  jmp    0897c415 <+0x7d>
0897ca0a +0x672:  movl   $"[dungeon drop rate balance]",0x4(%esp)
0897ca12 +0x67a:  lea    -0x3c(%ebp),%eax
0897ca15 +0x67d:  mov    %eax,(%esp)
0897ca18 +0x680:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0897ca1d +0x685:  test   %al,%al
0897ca1f +0x687:  je     0897c3d8 <+0x40>
0897ca25 +0x68d:  lea    -0x9c(%ebp),%eax
0897ca2b +0x693:  mov    %eax,(%esp)
0897ca2e +0x696:  call   0897cbf0 <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x5f>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x5f
0897ca33 +0x69b:  lea    -0x3d(%ebp),%eax
0897ca36 +0x69e:  mov    %eax,(%esp)
0897ca39 +0x6a1:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897ca3e +0x6a6:  mov    %eax,-0x9c(%ebp)
0897ca44 +0x6ac:  movzbl -0x3d(%ebp),%eax
0897ca48 +0x6b0:  xor    $0x1,%eax
0897ca4b +0x6b3:  test   %al,%al
0897ca4d +0x6b5:  je     0897ca56 <+0x6be>
0897ca4f +0x6b7:  mov    $0x0,%ebx
0897ca54 +0x6bc:  jmp    0897cad3 <+0x73b>
0897ca56 +0x6be:  lea    -0x3d(%ebp),%eax
0897ca59 +0x6c1:  mov    %eax,(%esp)
0897ca5c +0x6c4:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897ca61 +0x6c9:  mov    %eax,-0x98(%ebp)
0897ca67 +0x6cf:  movzbl -0x3d(%ebp),%eax
0897ca6b +0x6d3:  xor    $0x1,%eax
0897ca6e +0x6d6:  test   %al,%al
0897ca70 +0x6d8:  je     0897ca79 <+0x6e1>
0897ca72 +0x6da:  mov    $0x0,%ebx
0897ca77 +0x6df:  jmp    0897cad3 <+0x73b>
0897ca79 +0x6e1:  lea    -0x3d(%ebp),%eax
0897ca7c +0x6e4:  mov    %eax,(%esp)
0897ca7f +0x6e7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0897ca84 +0x6ec:  mov    %eax,-0x94(%ebp)
0897ca8a +0x6f2:  movzbl -0x3d(%ebp),%eax
0897ca8e +0x6f6:  xor    $0x1,%eax
0897ca91 +0x6f9:  test   %al,%al
0897ca93 +0x6fb:  je     0897ca9c <+0x704>
0897ca95 +0x6fd:  mov    $0x0,%ebx
0897ca9a +0x702:  jmp    0897cad3 <+0x73b>
0897ca9c +0x704:  mov    0x8(%ebp),%eax
0897ca9f +0x707:  lea    0x18(%eax),%edx
0897caa2 +0x70a:  lea    -0x9c(%ebp),%eax
0897caa8 +0x710:  mov    %eax,0x4(%esp)
0897caac +0x714:  mov    %edx,(%esp)
0897caaf +0x717:  call   0897cd7c <_GLOBAL__I_g_independentDropScriptBaseDirectory+0x1eb>  ; global constructors keyed to g_independentDropScriptBaseDirectory+0x1eb
0897cab4 +0x71c:  mov    $0x1,%ebx
0897cab9 +0x721:  jmp    0897cad3 <+0x73b>
0897cabb +0x723:  mov    %edx,%ebx
0897cabd +0x725:  mov    %eax,%esi
0897cabf +0x727:  lea    -0x9c(%ebp),%eax
0897cac5 +0x72d:  mov    %eax,(%esp)
0897cac8 +0x730:  call   083dd514 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x774e0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x774e0
0897cacd +0x735:  mov    %esi,%eax
0897cacf +0x737:  mov    %ebx,%edx
0897cad1 +0x739:  jmp    0897caf6 <+0x75e>
0897cad3 +0x73b:  lea    -0x9c(%ebp),%eax
0897cad9 +0x741:  mov    %eax,(%esp)
0897cadc +0x744:  call   083dd514 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x774e0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x774e0
0897cae1 +0x749:  test   %ebx,%ebx
0897cae3 +0x74b:  je     0897c3db <+0x43>
0897cae9 +0x751:  jmp    0897ca25 <+0x68d>
0897caee +0x756:  nop
0897caef +0x757:  mov    $0x0,%esi
0897caf4 +0x75c:  jmp    0897cb11 <+0x779>
0897caf6 +0x75e:  mov    %edx,%ebx
0897caf8 +0x760:  mov    %eax,%esi
0897cafa +0x762:  lea    -0x3c(%ebp),%eax
0897cafd +0x765:  mov    %eax,(%esp)
0897cb00 +0x768:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0897cb05 +0x76d:  mov    %esi,%eax
0897cb07 +0x76f:  mov    %ebx,%edx
0897cb09 +0x771:  mov    %eax,(%esp)
0897cb0c +0x774:  call   08ae3750 <_Unwind_Resume>
0897cb11 +0x779:  lea    -0x3c(%ebp),%eax
0897cb14 +0x77c:  mov    %eax,(%esp)
0897cb17 +0x77f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0897cb1c +0x784:  mov    %esi,%eax
0897cb1e +0x786:  add    $0xc0,%esp
0897cb24 +0x78c:  pop    %ebx
0897cb25 +0x78d:  pop    %esi
0897cb26 +0x78e:  pop    %ebp
0897cb27 +0x78f:  ret
```

## 反编译 C

```c
// IndependentDropParameterScript::ImportIndependentDrop @ 0x897c398

/* IndependentDropParameterScript::ImportIndependentDrop(char const*) */

undefined4 __thiscall
IndependentDropParameterScript::ImportIndependentDrop
          (IndependentDropParameterScript *this,char *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90 [8];
  undefined4 local_70;
  int local_6c;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_68 [12];
  int local_5c;
  int local_58;
  undefined4 local_54;
  string local_4c;
  int local_48;
  bool local_41;
  string local_40;
  pair<int,int> local_3c [8];
  pair<int,int> local_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_40);
    local_41 = false;
                    /* try { // try from 0897c3ea to 0897c429 has its CatchHandler @ 0897caf6 */
    while (cVar2 = ScanType((string *)&local_40,true), cVar2 == '\x01') {
      bVar3 = std::operator==(&local_40,"[independent drop]");
      if (bVar3) {
        do {
          local_48 = 0;
          stIndependentDropInfo::stIndependentDropInfo((stIndependentDropInfo *)&local_a0);
                    /* try { // try from 0897c430 to 0897c71b has its CatchHandler @ 0897c9cf */
          local_a0 = ScanInt(&local_41);
          if (local_41 == true) {
            local_9c = ScanInt(&local_41);
            if (local_41 == true) {
              local_98 = ScanInt(&local_41);
              if (local_41 == true) {
                local_94 = ScanInt(&local_41);
                if (local_41 == true) {
                  local_90[0] = ScanInt(&local_41);
                  if (local_41 == true) {
                    local_90[1] = ScanInt(&local_41);
                    if (local_41 == true) {
                      local_90[2] = ScanInt(&local_41);
                      if (local_41 == true) {
                        local_90[3] = ScanInt(&local_41);
                        if (local_41 == true) {
                          for (local_28 = 0; iVar6 = local_28, local_28 < 4; local_28 = local_28 + 1
                              ) {
                            uVar4 = ScanInt(&local_41);
                            local_90[iVar6 + 4] = uVar4;
                            if (local_41 != true) {
                              unaff_ESI = 0xab;
                              iVar6 = 1;
                              goto LAB_0897c9ea;
                            }
                          }
                          local_70 = ScanInt(&local_41);
                          if (local_41 == true) {
                            local_6c = 0;
                            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                            clear(avStack_68);
                            local_5c = ScanInt(&local_41);
                            if (local_41 == true) {
                              local_58 = ScanInt(&local_41);
                              if (local_41 == true) {
                                if (local_58 < local_5c) {
                                  unaff_ESI = 0xbe;
                                  iVar6 = 1;
                                }
                                else {
                                  local_54 = ScanInt(&local_41);
                                  if (local_41 == true) {
                                    local_2c = ScanInt(&local_41);
                                    if (((local_2c == 0) || (local_2c == 1)) || (local_2c == 2)) {
                                      if (local_41 == true) {
                                        std::string::string((string *)&local_4c);
                                        if (local_2c == 1) {
                    /* try { // try from 0897c734 to 0897c995 has its CatchHandler @ 0897c99d */
                                          cVar2 = ScanType((string *)&local_4c,true);
                                          if ((cVar2 != '\0') &&
                                             (bVar3 = std::operator==(&local_4c,"[list]"), bVar3)) {
                                            while (local_48 = ScanInt(&local_41), local_41 == true)
                                            {
                                              local_24 = ScanInt(&local_41);
                                              if (local_41 != true) {
                                                unaff_ESI = 0xe1;
                                                bVar3 = false;
                                                goto LAB_0897c9b2;
                                              }
                                              local_6c = local_6c + local_24;
                                              std::pair<int,int>::pair<int&,int&>
                                                        (local_3c,&local_48,&local_6c);
                                              std::
                                              vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                              ::push_back(avStack_68,local_3c);
                                            }
                                          }
                                        }
                                        else if (((local_2c == 2) &&
                                                 (cVar2 = ScanType((string *)&local_4c,true),
                                                 cVar2 != '\0')) &&
                                                (bVar3 = std::operator==(&local_4c,"[list]"), bVar3)
                                                ) {
LAB_0897c828:
                                          local_1d = '\0';
                                          local_1c = ScanInt(&local_41);
                                          if (local_41 == true) {
                                            local_18 = 0;
                                            while (iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::size((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this), (int)local_18 < iVar6) {
                                              piVar5 = (int *)std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                              if (*piVar5 == local_1c) {
                                                local_14 = 0;
                                                while( true ) {
                                                  iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                                  iVar6 = std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::size((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)(iVar6 + 4));
                                                  uVar1 = local_14;
                                                  if (iVar6 <= (int)local_14) break;
                                                  iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                                  piVar5 = (int *)std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::operator[]((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)(iVar6 + 4),uVar1);
                                                  uVar1 = local_14;
                                                  local_48 = *piVar5;
                                                  iVar6 = std::
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  ::operator[]((
                                                  vector<IndependentDropListInfo,std::allocator<IndependentDropListInfo>>
                                                  *)this,local_18);
                                                  iVar6 = std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::operator[]((
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  *)(iVar6 + 4),uVar1);
                                                  local_10 = *(int *)(iVar6 + 4);
                                                  local_6c = local_6c + local_10;
                                                  std::pair<int,int>::pair<int&,int&>
                                                            (local_34,&local_48,&local_6c);
                                                  std::
                                                  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                  ::push_back(avStack_68,local_34);
                                                  local_14 = local_14 + 1;
                                                }
                                                local_1d = '\x01';
                                              }
                                              if (local_1d != '\0') break;
                                              local_18 = local_18 + 1;
                                            }
                                            goto LAB_0897c828;
                                          }
                                        }
                                        std::
                                        vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>
                                        ::push_back((
                                                  vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>
                                                  *)(this + 0xc),(stIndependentDropInfo *)&local_a0)
                                        ;
                                        bVar3 = true;
LAB_0897c9b2:
                    /* try { // try from 0897c9b8 to 0897c9bc has its CatchHandler @ 0897c9cf */
                                        std::string::~string((string *)&local_4c);
                                        if (bVar3) {
                                          iVar6 = 2;
                                        }
                                        else {
                                          iVar6 = 1;
                                        }
                                      }
                                      else {
                                        unaff_ESI = 0xcf;
                                        iVar6 = 1;
                                      }
                                    }
                                    else {
                                      LogManager::logFormat
                                                (1,"../RDARScriptIndependentDrop.cpp",
                                                 "ImportIndependentDrop",0xca,
                                                 "flag wrong number(%d)",local_2c);
                                      unaff_ESI = 0xcb;
                                      iVar6 = 1;
                                    }
                                  }
                                  else {
                                    unaff_ESI = 0xc3;
                                    iVar6 = 1;
                                  }
                                }
                              }
                              else {
                                unaff_ESI = 0xbb;
                                iVar6 = 1;
                              }
                            }
                            else {
                              unaff_ESI = 0xb7;
                              iVar6 = 1;
                            }
                          }
                          else {
                            unaff_ESI = 0xb0;
                            iVar6 = 1;
                          }
                        }
                        else {
                          unaff_ESI = 0xa5;
                          iVar6 = 1;
                        }
                      }
                      else {
                        unaff_ESI = 0xa1;
                        iVar6 = 1;
                      }
                    }
                    else {
                      unaff_ESI = 0x99;
                      iVar6 = 1;
                    }
                  }
                  else {
                    unaff_ESI = 0x91;
                    iVar6 = 1;
                  }
                }
                else {
                  unaff_ESI = 0x89;
                  iVar6 = 1;
                }
              }
              else {
                unaff_ESI = 0x81;
                iVar6 = 1;
              }
            }
            else {
              unaff_ESI = 0x7d;
              iVar6 = 1;
            }
          }
          else {
            iVar6 = 0;
          }
LAB_0897c9ea:
                    /* try { // try from 0897c9f3 to 0897ca32 has its CatchHandler @ 0897caf6 */
          stIndependentDropInfo::~stIndependentDropInfo((stIndependentDropInfo *)&local_a0);
          if (iVar6 == 0) break;
          if (iVar6 == 1) goto LAB_0897cb11;
        } while( true );
      }
      bVar3 = std::operator==(&local_40,"[dungeon drop rate balance]");
      if (bVar3) {
        do {
          stIndependentDropRateControl::stIndependentDropRateControl
                    ((stIndependentDropRateControl *)&local_a0);
                    /* try { // try from 0897ca39 to 0897cab3 has its CatchHandler @ 0897cabb */
          local_a0 = ScanInt(&local_41);
          if (local_41 == true) {
            local_9c = ScanInt(&local_41);
            if (local_41 == true) {
              local_98 = ScanInt(&local_41);
              if (local_41 == true) {
                std::
                vector<stIndependentDropRateControl,std::allocator<stIndependentDropRateControl>>::
                push_back((vector<stIndependentDropRateControl,std::allocator<stIndependentDropRateControl>>
                           *)(this + 0x18),(stIndependentDropRateControl *)&local_a0);
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
            }
            else {
              bVar3 = false;
            }
          }
          else {
            bVar3 = false;
          }
                    /* try { // try from 0897cadc to 0897cae0 has its CatchHandler @ 0897caf6 */
          stIndependentDropRateControl::~stIndependentDropRateControl
                    ((stIndependentDropRateControl *)&local_a0);
        } while (bVar3);
      }
    }
    unaff_ESI = 0;
LAB_0897cb11:
    std::string::~string((string *)&local_40);
  }
  else {
    unaff_ESI = 0x66;
  }
  return unaff_ESI;
}
```
