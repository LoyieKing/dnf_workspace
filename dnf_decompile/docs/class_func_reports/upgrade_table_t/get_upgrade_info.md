# get_upgrade_info

`_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE`

`upgrade_table_t::get_upgrade_info(upgrade_info_t*, unsigned char, unsigned char, unsigned char, ENUM_EQUIPMENTTYPE) const`

| 类 | 地址 |
|---|---|
| `upgrade_table_t` | `0x08900436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08900436  _ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE
#           upgrade_table_t::get_upgrade_info(upgrade_info_t*, unsigned char, unsigned char, unsigned char, ENUM_EQUIPMENTTYPE) const
# range [0x08900436, 0x089008b7]
08900436 +0x000:  push   %ebp
08900437 +0x001:  mov    %esp,%ebp
08900439 +0x003:  push   %edi
0890043a +0x004:  push   %esi
0890043b +0x005:  push   %ebx
0890043c +0x006:  sub    $0x6c,%esp
0890043f +0x009:  mov    0x10(%ebp),%ecx
08900442 +0x00c:  mov    0x14(%ebp),%edx
08900445 +0x00f:  mov    0x18(%ebp),%eax
08900448 +0x012:  mov    %cl,-0x3c(%ebp)
0890044b +0x015:  mov    %dl,-0x40(%ebp)
0890044e +0x018:  mov    %al,-0x44(%ebp)
08900451 +0x01b:  movzbl -0x44(%ebp),%ebx
08900455 +0x01f:  mov    0x8(%ebp),%eax
08900458 +0x022:  mov    %eax,(%esp)
0890045b +0x025:  call   0854b602 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x48a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x48a
08900460 +0x02a:  cmp    %eax,%ebx
08900462 +0x02c:  setae  %al
08900465 +0x02f:  test   %al,%al
08900467 +0x031:  je     08900473 <+0x3d>
08900469 +0x033:  mov    $0x0,%eax
0890046e +0x038:  jmp    089008ad <+0x477>
08900473 +0x03d:  cmpb   $0x5,-0x3c(%ebp)
08900477 +0x041:  jbe    08900483 <+0x4d>
08900479 +0x043:  mov    $0x0,%eax
0890047e +0x048:  jmp    089008ad <+0x477>
08900483 +0x04d:  mov    0x1c(%ebp),%eax
08900486 +0x050:  cmp    $0x15,%eax
08900489 +0x053:  jle    08900495 <+0x5f>
0890048b +0x055:  mov    $0x0,%eax
08900490 +0x05a:  jmp    089008ad <+0x477>
08900495 +0x05f:  mov    0x1c(%ebp),%eax
08900498 +0x062:  cmp    $0x9,%eax
0890049b +0x065:  jg     089004a7 <+0x71>
0890049d +0x067:  mov    $0x0,%eax
089004a2 +0x06c:  jmp    089008ad <+0x477>
089004a7 +0x071:  cmpb   $0x63,-0x40(%ebp)
089004ab +0x075:  jbe    089004b7 <+0x81>
089004ad +0x077:  mov    $0x0,%eax
089004b2 +0x07c:  jmp    089008ad <+0x477>
089004b7 +0x081:  flds   &_ZZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPEE9pointFive
089004bd +0x087:  flds   &_ZZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPEE3two
089004c3 +0x08d:  fmulp  %st,%st(1)
089004c5 +0x08f:  fstps  -0x20(%ebp)
089004c8 +0x092:  movzbl -0x44(%ebp),%edx
089004cc +0x096:  mov    0x8(%ebp),%eax
089004cf +0x099:  mov    %edx,0x4(%esp)
089004d3 +0x09d:  mov    %eax,(%esp)
089004d6 +0x0a0:  call   0891df5e <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4c3d>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4c3d
089004db +0x0a5:  mov    0xc(%ebp),%edx
089004de +0x0a8:  mov    %eax,%ebx
089004e0 +0x0aa:  mov    $0x1b,%eax
089004e5 +0x0af:  mov    %edx,%edi
089004e7 +0x0b1:  mov    %ebx,%esi
089004e9 +0x0b3:  mov    %eax,%ecx
089004eb +0x0b5:  rep movsl %ds:(%esi),%es:(%edi)
089004ed +0x0b7:  movzbl -0x40(%ebp),%eax
089004f1 +0x0bb:  mov    %eax,-0x48(%ebp)
089004f4 +0x0be:  fildl  -0x48(%ebp)
089004f7 +0x0c1:  mov    0x8(%ebp),%eax
089004fa +0x0c4:  flds   0xc(%eax)
089004fd +0x0c7:  fdivrp %st,%st(1)
089004ff +0x0c9:  fadds  -0x20(%ebp)
08900502 +0x0cc:  mov    0xc(%ebp),%eax
08900505 +0x0cf:  flds   (%eax)
08900507 +0x0d1:  fmulp  %st,%st(1)
08900509 +0x0d3:  movzbl -0x3c(%ebp),%edx
0890050d +0x0d7:  mov    0x8(%ebp),%eax
08900510 +0x0da:  add    $0x20,%edx
08900513 +0x0dd:  flds   0xc(%eax,%edx,4)
08900517 +0x0e1:  fmulp  %st,%st(1)
08900519 +0x0e3:  mov    0xc(%ebp),%eax
0890051c +0x0e6:  fstps  (%eax)
0890051e +0x0e8:  movzbl -0x40(%ebp),%eax
08900522 +0x0ec:  mov    %eax,-0x48(%ebp)
08900525 +0x0ef:  fildl  -0x48(%ebp)
08900528 +0x0f2:  mov    0x8(%ebp),%eax
0890052b +0x0f5:  flds   0x10(%eax)
0890052e +0x0f8:  fdivrp %st,%st(1)
08900530 +0x0fa:  fadds  -0x20(%ebp)
08900533 +0x0fd:  mov    0xc(%ebp),%eax
08900536 +0x100:  flds   0x4(%eax)
08900539 +0x103:  fmulp  %st,%st(1)
0890053b +0x105:  movzbl -0x3c(%ebp),%edx
0890053f +0x109:  mov    0x8(%ebp),%eax
08900542 +0x10c:  add    $0x20,%edx
08900545 +0x10f:  flds   0xc(%eax,%edx,4)
08900549 +0x113:  fmulp  %st,%st(1)
0890054b +0x115:  mov    0xc(%ebp),%eax
0890054e +0x118:  fstps  0x4(%eax)
08900551 +0x11b:  movzbl -0x40(%ebp),%eax
08900555 +0x11f:  mov    %eax,-0x48(%ebp)
08900558 +0x122:  fildl  -0x48(%ebp)
0890055b +0x125:  mov    0x8(%ebp),%eax
0890055e +0x128:  flds   0x14(%eax)
08900561 +0x12b:  fdivrp %st,%st(1)
08900563 +0x12d:  fadds  -0x20(%ebp)
08900566 +0x130:  mov    0xc(%ebp),%eax
08900569 +0x133:  flds   0x8(%eax)
0890056c +0x136:  fmulp  %st,%st(1)
0890056e +0x138:  movzbl -0x3c(%ebp),%edx
08900572 +0x13c:  mov    0x8(%ebp),%eax
08900575 +0x13f:  add    $0x20,%edx
08900578 +0x142:  flds   0xc(%eax,%edx,4)
0890057c +0x146:  fmulp  %st,%st(1)
0890057e +0x148:  mov    0xc(%ebp),%eax
08900581 +0x14b:  fstps  0x8(%eax)
08900584 +0x14e:  movzbl -0x40(%ebp),%eax
08900588 +0x152:  mov    %eax,-0x48(%ebp)
0890058b +0x155:  fildl  -0x48(%ebp)
0890058e +0x158:  mov    0x8(%ebp),%eax
08900591 +0x15b:  flds   0x18(%eax)
08900594 +0x15e:  fdivrp %st,%st(1)
08900596 +0x160:  fadds  -0x20(%ebp)
08900599 +0x163:  mov    0xc(%ebp),%eax
0890059c +0x166:  flds   0xc(%eax)
0890059f +0x169:  fmulp  %st,%st(1)
089005a1 +0x16b:  movzbl -0x3c(%ebp),%edx
089005a5 +0x16f:  mov    0x8(%ebp),%eax
089005a8 +0x172:  add    $0x20,%edx
089005ab +0x175:  flds   0xc(%eax,%edx,4)
089005af +0x179:  fmulp  %st,%st(1)
089005b1 +0x17b:  mov    0xc(%ebp),%eax
089005b4 +0x17e:  fstps  0xc(%eax)
089005b7 +0x181:  mov    0xc(%ebp),%eax
089005ba +0x184:  flds   0x10(%eax)
089005bd +0x187:  movzbl -0x3c(%ebp),%edx
089005c1 +0x18b:  mov    0x8(%ebp),%eax
089005c4 +0x18e:  add    $0x20,%edx
089005c7 +0x191:  flds   0xc(%eax,%edx,4)
089005cb +0x195:  fmulp  %st,%st(1)
089005cd +0x197:  mov    0xc(%ebp),%eax
089005d0 +0x19a:  fstps  0x10(%eax)
089005d3 +0x19d:  mov    0xc(%ebp),%eax
089005d6 +0x1a0:  flds   0x14(%eax)
089005d9 +0x1a3:  movzbl -0x3c(%ebp),%edx
089005dd +0x1a7:  mov    0x8(%ebp),%eax
089005e0 +0x1aa:  add    $0x20,%edx
089005e3 +0x1ad:  flds   0xc(%eax,%edx,4)
089005e7 +0x1b1:  fmulp  %st,%st(1)
089005e9 +0x1b3:  mov    0xc(%ebp),%eax
089005ec +0x1b6:  fstps  0x14(%eax)
089005ef +0x1b9:  mov    0xc(%ebp),%eax
089005f2 +0x1bc:  flds   0x18(%eax)
089005f5 +0x1bf:  movzbl -0x3c(%ebp),%edx
089005f9 +0x1c3:  mov    0x8(%ebp),%eax
089005fc +0x1c6:  add    $0x20,%edx
089005ff +0x1c9:  flds   0xc(%eax,%edx,4)
08900603 +0x1cd:  fmulp  %st,%st(1)
08900605 +0x1cf:  mov    0xc(%ebp),%eax
08900608 +0x1d2:  fstps  0x18(%eax)
0890060b +0x1d5:  mov    0xc(%ebp),%eax
0890060e +0x1d8:  flds   0x1c(%eax)
08900611 +0x1db:  movzbl -0x3c(%ebp),%edx
08900615 +0x1df:  mov    0x8(%ebp),%eax
08900618 +0x1e2:  add    $0x20,%edx
0890061b +0x1e5:  flds   0xc(%eax,%edx,4)
0890061f +0x1e9:  fmulp  %st,%st(1)
08900621 +0x1eb:  mov    0xc(%ebp),%eax
08900624 +0x1ee:  fstps  0x1c(%eax)
08900627 +0x1f1:  movzbl -0x40(%ebp),%eax
0890062b +0x1f5:  mov    %eax,-0x48(%ebp)
0890062e +0x1f8:  fildl  -0x48(%ebp)
08900631 +0x1fb:  mov    0x8(%ebp),%eax
08900634 +0x1fe:  flds   0xc(%eax)
08900637 +0x201:  fdivrp %st,%st(1)
08900639 +0x203:  fadds  -0x20(%ebp)
0890063c +0x206:  mov    0xc(%ebp),%eax
0890063f +0x209:  flds   0x4c(%eax)
08900642 +0x20c:  fmulp  %st,%st(1)
08900644 +0x20e:  movzbl -0x3c(%ebp),%edx
08900648 +0x212:  mov    0x8(%ebp),%eax
0890064b +0x215:  add    $0x20,%edx
0890064e +0x218:  flds   0xc(%eax,%edx,4)
08900652 +0x21c:  fmulp  %st,%st(1)
08900654 +0x21e:  mov    0xc(%ebp),%eax
08900657 +0x221:  fstps  0x4c(%eax)
0890065a +0x224:  movzbl -0x40(%ebp),%eax
0890065e +0x228:  mov    %eax,-0x48(%ebp)
08900661 +0x22b:  fildl  -0x48(%ebp)
08900664 +0x22e:  mov    0x8(%ebp),%eax
08900667 +0x231:  flds   0x10(%eax)
0890066a +0x234:  fdivrp %st,%st(1)
0890066c +0x236:  fadds  -0x20(%ebp)
0890066f +0x239:  mov    0xc(%ebp),%eax
08900672 +0x23c:  flds   0x50(%eax)
08900675 +0x23f:  fmulp  %st,%st(1)
08900677 +0x241:  movzbl -0x3c(%ebp),%edx
0890067b +0x245:  mov    0x8(%ebp),%eax
0890067e +0x248:  add    $0x20,%edx
08900681 +0x24b:  flds   0xc(%eax,%edx,4)
08900685 +0x24f:  fmulp  %st,%st(1)
08900687 +0x251:  mov    0xc(%ebp),%eax
0890068a +0x254:  fstps  0x50(%eax)
0890068d +0x257:  movzbl -0x40(%ebp),%eax
08900691 +0x25b:  mov    %eax,-0x48(%ebp)
08900694 +0x25e:  fildl  -0x48(%ebp)
08900697 +0x261:  mov    0x8(%ebp),%eax
0890069a +0x264:  flds   0x14(%eax)
0890069d +0x267:  fdivrp %st,%st(1)
0890069f +0x269:  fadds  -0x20(%ebp)
089006a2 +0x26c:  mov    0xc(%ebp),%eax
089006a5 +0x26f:  flds   0x54(%eax)
089006a8 +0x272:  fmulp  %st,%st(1)
089006aa +0x274:  movzbl -0x3c(%ebp),%edx
089006ae +0x278:  mov    0x8(%ebp),%eax
089006b1 +0x27b:  add    $0x20,%edx
089006b4 +0x27e:  flds   0xc(%eax,%edx,4)
089006b8 +0x282:  fmulp  %st,%st(1)
089006ba +0x284:  mov    0xc(%ebp),%eax
089006bd +0x287:  fstps  0x54(%eax)
089006c0 +0x28a:  movzbl -0x40(%ebp),%eax
089006c4 +0x28e:  mov    %eax,-0x48(%ebp)
089006c7 +0x291:  fildl  -0x48(%ebp)
089006ca +0x294:  mov    0x8(%ebp),%eax
089006cd +0x297:  flds   0x18(%eax)
089006d0 +0x29a:  fdivrp %st,%st(1)
089006d2 +0x29c:  fadds  -0x20(%ebp)
089006d5 +0x29f:  mov    0xc(%ebp),%eax
089006d8 +0x2a2:  flds   0x58(%eax)
089006db +0x2a5:  fmulp  %st,%st(1)
089006dd +0x2a7:  movzbl -0x3c(%ebp),%edx
089006e1 +0x2ab:  mov    0x8(%ebp),%eax
089006e4 +0x2ae:  add    $0x20,%edx
089006e7 +0x2b1:  flds   0xc(%eax,%edx,4)
089006eb +0x2b5:  fmulp  %st,%st(1)
089006ed +0x2b7:  mov    0xc(%ebp),%eax
089006f0 +0x2ba:  fstps  0x58(%eax)
089006f3 +0x2bd:  mov    0xc(%ebp),%eax
089006f6 +0x2c0:  flds   0x5c(%eax)
089006f9 +0x2c3:  movzbl -0x3c(%ebp),%edx
089006fd +0x2c7:  mov    0x8(%ebp),%eax
08900700 +0x2ca:  add    $0x20,%edx
08900703 +0x2cd:  flds   0xc(%eax,%edx,4)
08900707 +0x2d1:  fmulp  %st,%st(1)
08900709 +0x2d3:  mov    0xc(%ebp),%eax
0890070c +0x2d6:  fstps  0x5c(%eax)
0890070f +0x2d9:  mov    0xc(%ebp),%eax
08900712 +0x2dc:  flds   0x60(%eax)
08900715 +0x2df:  movzbl -0x3c(%ebp),%edx
08900719 +0x2e3:  mov    0x8(%ebp),%eax
0890071c +0x2e6:  add    $0x20,%edx
0890071f +0x2e9:  flds   0xc(%eax,%edx,4)
08900723 +0x2ed:  fmulp  %st,%st(1)
08900725 +0x2ef:  mov    0xc(%ebp),%eax
08900728 +0x2f2:  fstps  0x60(%eax)
0890072b +0x2f5:  mov    0xc(%ebp),%eax
0890072e +0x2f8:  flds   0x64(%eax)
08900731 +0x2fb:  movzbl -0x3c(%ebp),%edx
08900735 +0x2ff:  mov    0x8(%ebp),%eax
08900738 +0x302:  add    $0x20,%edx
0890073b +0x305:  flds   0xc(%eax,%edx,4)
0890073f +0x309:  fmulp  %st,%st(1)
08900741 +0x30b:  mov    0xc(%ebp),%eax
08900744 +0x30e:  fstps  0x64(%eax)
08900747 +0x311:  mov    0xc(%ebp),%eax
0890074a +0x314:  flds   0x68(%eax)
0890074d +0x317:  movzbl -0x3c(%ebp),%edx
08900751 +0x31b:  mov    0x8(%ebp),%eax
08900754 +0x31e:  add    $0x20,%edx
08900757 +0x321:  flds   0xc(%eax,%edx,4)
0890075b +0x325:  fmulp  %st,%st(1)
0890075d +0x327:  mov    0xc(%ebp),%eax
08900760 +0x32a:  fstps  0x68(%eax)
08900763 +0x32d:  movzbl -0x40(%ebp),%edx
08900767 +0x331:  mov    0x8(%ebp),%eax
0890076a +0x334:  add    $0x28,%edx
0890076d +0x337:  mov    0x4(%eax,%edx,4),%edx
08900771 +0x33b:  mov    0xc(%ebp),%eax
08900774 +0x33e:  mov    %edx,0x34(%eax)
08900777 +0x341:  mov    0xc(%ebp),%eax
0890077a +0x344:  mov    0x34(%eax),%eax
0890077d +0x347:  mov    %eax,-0x48(%ebp)
08900780 +0x34a:  fildl  -0x48(%ebp)
08900783 +0x34d:  mov    0x1c(%ebp),%edx
08900786 +0x350:  mov    0x8(%ebp),%eax
08900789 +0x353:  add    $0x4,%edx
0890078c +0x356:  flds   0xc(%eax,%edx,4)
08900790 +0x35a:  fmulp  %st,%st(1)
08900792 +0x35c:  flds   &data#1c22afcb(.rodata)
08900798 +0x362:  faddp  %st,%st(1)
0890079a +0x364:  fnstcw -0x4a(%ebp)
0890079d +0x367:  movzwl -0x4a(%ebp),%eax
089007a1 +0x36b:  mov    $0xc,%ah
089007a3 +0x36d:  mov    %ax,-0x4c(%ebp)
089007a7 +0x371:  fldcw  -0x4c(%ebp)
089007aa +0x374:  fistpll -0x58(%ebp)
089007ad +0x377:  fldcw  -0x4a(%ebp)
089007b0 +0x37a:  mov    -0x58(%ebp),%eax
089007b3 +0x37d:  mov    -0x54(%ebp),%edx
089007b6 +0x380:  mov    %eax,%edx
089007b8 +0x382:  mov    0xc(%ebp),%eax
089007bb +0x385:  mov    %edx,0x34(%eax)
089007be +0x388:  mov    0xc(%ebp),%eax
089007c1 +0x38b:  mov    0x34(%eax),%eax
089007c4 +0x38e:  mov    %eax,-0x48(%ebp)
089007c7 +0x391:  fildl  -0x48(%ebp)
089007ca +0x394:  movzbl -0x3c(%ebp),%edx
089007ce +0x398:  mov    0x8(%ebp),%eax
089007d1 +0x39b:  add    $0x1c,%edx
089007d4 +0x39e:  flds   0x4(%eax,%edx,4)
089007d8 +0x3a2:  fmulp  %st,%st(1)
089007da +0x3a4:  flds   &data#1c22afcb(.rodata)
089007e0 +0x3aa:  faddp  %st,%st(1)
089007e2 +0x3ac:  fldcw  -0x4c(%ebp)
089007e5 +0x3af:  fistpll -0x58(%ebp)
089007e8 +0x3b2:  fldcw  -0x4a(%ebp)
089007eb +0x3b5:  mov    -0x58(%ebp),%eax
089007ee +0x3b8:  mov    -0x54(%ebp),%edx
089007f1 +0x3bb:  mov    %eax,%edx
089007f3 +0x3bd:  mov    0xc(%ebp),%eax
089007f6 +0x3c0:  mov    %edx,0x34(%eax)
089007f9 +0x3c3:  movl   $0x12,-0x1c(%ebp)
08900800 +0x3ca:  cmpb   $0x12,-0x44(%ebp)
08900804 +0x3ce:  jbe    0890080a <+0x3d4>
08900806 +0x3d0:  movb   $0x12,-0x44(%ebp)
0890080a +0x3d4:  movzbl -0x44(%ebp),%eax
0890080e +0x3d8:  mov    %eax,-0x28(%ebp)
08900811 +0x3db:  mov    0x8(%ebp),%eax
08900814 +0x3de:  lea    0x49c(%eax),%ecx
0890081a +0x3e4:  lea    -0x2c(%ebp),%eax
0890081d +0x3e7:  lea    -0x28(%ebp),%edx
08900820 +0x3ea:  mov    %edx,0x8(%esp)
08900824 +0x3ee:  mov    %ecx,0x4(%esp)
08900828 +0x3f2:  mov    %eax,(%esp)
0890082b +0x3f5:  call   0891df8a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4c69>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4c69
08900830 +0x3fa:  sub    $0x4,%esp
08900833 +0x3fd:  mov    0x8(%ebp),%eax
08900836 +0x400:  lea    0x49c(%eax),%edx
0890083c +0x406:  lea    -0x24(%ebp),%eax
0890083f +0x409:  mov    %edx,0x4(%esp)
08900843 +0x40d:  mov    %eax,(%esp)
08900846 +0x410:  call   0891dfb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4c95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4c95
0890084b +0x415:  sub    $0x4,%esp
0890084e +0x418:  lea    -0x24(%ebp),%eax
08900851 +0x41b:  mov    %eax,0x4(%esp)
08900855 +0x41f:  lea    -0x2c(%ebp),%eax
08900858 +0x422:  mov    %eax,(%esp)
0890085b +0x425:  call   0891dfdc <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4cbb>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4cbb
08900860 +0x42a:  test   %al,%al
08900862 +0x42c:  je     089008a8 <+0x472>
08900864 +0x42e:  mov    0xc(%ebp),%eax
08900867 +0x431:  mov    0x34(%eax),%eax
0890086a +0x434:  mov    %eax,-0x48(%ebp)
0890086d +0x437:  fildl  -0x48(%ebp)
08900870 +0x43a:  fstps  -0x5c(%ebp)
08900873 +0x43d:  lea    -0x2c(%ebp),%eax
08900876 +0x440:  mov    %eax,(%esp)
08900879 +0x443:  call   0891dff0 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4ccf>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4ccf
0890087e +0x448:  flds   0x4(%eax)
08900881 +0x44b:  fmuls  -0x5c(%ebp)
08900884 +0x44e:  fnstcw -0x4a(%ebp)
08900887 +0x451:  movzwl -0x4a(%ebp),%eax
0890088b +0x455:  mov    $0xc,%ah
0890088d +0x457:  mov    %ax,-0x4c(%ebp)
08900891 +0x45b:  fldcw  -0x4c(%ebp)
08900894 +0x45e:  fistpll -0x58(%ebp)
08900897 +0x461:  fldcw  -0x4a(%ebp)
0890089a +0x464:  mov    -0x58(%ebp),%eax
0890089d +0x467:  mov    -0x54(%ebp),%edx
089008a0 +0x46a:  mov    %eax,%edx
089008a2 +0x46c:  mov    0xc(%ebp),%eax
089008a5 +0x46f:  mov    %edx,0x34(%eax)
089008a8 +0x472:  mov    $0x1,%eax
089008ad +0x477:  lea    -0xc(%ebp),%esp
089008b0 +0x47a:  add    $0x0,%esp
089008b3 +0x47d:  pop    %ebx
089008b4 +0x47e:  pop    %esi
089008b5 +0x47f:  pop    %edi
089008b6 +0x480:  pop    %ebp
089008b7 +0x481:  ret
```

## 反编译 C

```c
// upgrade_table_t::get_upgrade_info @ 0x8900436

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* upgrade_table_t::get_upgrade_info(upgrade_info_t*, unsigned char, unsigned char, unsigned char,
   ENUM_EQUIPMENTTYPE) const */

undefined4 __thiscall
upgrade_table_t::get_upgrade_info
          (upgrade_table_t *this,float *param_1,byte param_2,byte param_3,byte param_4,int param_6)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  float local_5c;
  byte local_48;
  _Rb_tree_const_iterator<std::pair<int_const,float>> local_30 [4];
  uint local_2c;
  map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>> local_28 [4];
  float local_24;
  undefined4 local_20;
  
  bVar8 = 0;
  local_48 = param_4;
  uVar3 = std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::size
                    ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)this);
  if (param_4 < uVar3) {
    if (param_2 < 6) {
      if (param_6 < 0x16) {
        if (param_6 < 10) {
          uVar4 = 0;
        }
        else if (param_3 < 100) {
          local_24 = get_upgrade_info(upgrade_info_t*,unsigned_char,unsigned_char,unsigned_char,ENUM_EQUIPMENTTYPE)
                     ::two * get_upgrade_info(upgrade_info_t*,unsigned_char,unsigned_char,unsigned_char,ENUM_EQUIPMENTTYPE)
                             ::pointFive;
          pfVar5 = (float *)std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::at
                                      ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)this
                                       ,(uint)param_4);
          pfVar7 = param_1;
          for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar7 = *pfVar5;
            pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
            pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
          }
          *param_1 = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                     *param_1 * ((float)param_3 / *(float *)(this + 0xc) + local_24);
          param_1[1] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                       param_1[1] * ((float)param_3 / *(float *)(this + 0x10) + local_24);
          param_1[2] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                       param_1[2] * ((float)param_3 / *(float *)(this + 0x14) + local_24);
          param_1[3] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
                       param_1[3] * ((float)param_3 / *(float *)(this + 0x18) + local_24);
          param_1[4] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[4];
          param_1[5] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[5];
          param_1[6] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[6];
          param_1[7] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[7];
          param_1[0x13] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x13] * ((float)param_3 / *(float *)(this + 0xc) + local_24);
          param_1[0x14] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x14] * ((float)param_3 / *(float *)(this + 0x10) + local_24);
          param_1[0x15] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x15] * ((float)param_3 / *(float *)(this + 0x14) + local_24);
          param_1[0x16] =
               *(float *)(this + (param_2 + 0x20) * 4 + 0xc) *
               param_1[0x16] * ((float)param_3 / *(float *)(this + 0x18) + local_24);
          param_1[0x17] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x17];
          param_1[0x18] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x18];
          param_1[0x19] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x19];
          param_1[0x1a] = *(float *)(this + (param_2 + 0x20) * 4 + 0xc) * param_1[0x1a];
          param_1[0xd] = *(float *)(this + (param_3 + 0x28) * 4 + 4);
          local_5c = (float)(longlong)
                            ROUND(_DAT_08e122e8 +
                                  *(float *)(this + (param_6 + 4) * 4 + 0xc) *
                                  (float)(int)param_1[0xd]);
          param_1[0xd] = local_5c;
          local_5c = (float)(longlong)
                            ROUND(_DAT_08e122e8 +
                                  *(float *)(this + (param_2 + 0x1c) * 4 + 4) *
                                  (float)(int)param_1[0xd]);
          param_1[0xd] = local_5c;
          local_20 = 0x12;
          if (0x12 < param_4) {
            local_48 = 0x12;
          }
          local_2c = (uint)local_48;
          std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::find
                    ((int *)local_30);
          std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::end
                    (local_28);
          cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,float>>::operator!=
                            (local_30,(_Rb_tree_const_iterator *)local_28);
          if (cVar2 != '\0') {
            fVar1 = param_1[0xd];
            iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,float>>::operator->(local_30);
            local_5c = (float)(longlong)ROUND(*(float *)(iVar6 + 4) * (float)(int)fVar1);
            param_1[0xd] = local_5c;
          }
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
