# dispatch

`_ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream`

`DB_UpdateQuestShopBuyingStatusList::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateQuestShopBuyingStatusList` | `0x0840568a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840568a  _ZN34DB_UpdateQuestShopBuyingStatusList8dispatchEiiP6Stream
#           DB_UpdateQuestShopBuyingStatusList::dispatch(int, int, Stream*)
# range [0x0840568a, 0x08405c5f]
0840568a +0x000:  push   %ebp
0840568b +0x001:  mov    %esp,%ebp
0840568d +0x003:  push   %edi
0840568e +0x004:  push   %esi
0840568f +0x005:  push   %ebx
08405690 +0x006:  sub    $0x16c,%esp
08405696 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840569b +0x011:  movl   $0x0,0x8(%esp)
084056a3 +0x019:  movl   $0x2,0x4(%esp)
084056ab +0x021:  mov    %eax,(%esp)
084056ae +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084056b3 +0x029:  mov    %eax,-0x24(%ebp)
084056b6 +0x02c:  mov    0x14(%ebp),%eax
084056b9 +0x02f:  mov    %eax,(%esp)
084056bc +0x032:  call   08450690 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x32a6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x32a6
084056c1 +0x037:  mov    %eax,-0x20(%ebp)
084056c4 +0x03a:  mov    -0x20(%ebp),%eax
084056c7 +0x03d:  mov    %eax,-0x1c(%ebp)
084056ca +0x040:  mov    -0x1c(%ebp),%eax
084056cd +0x043:  mov    (%eax),%eax
084056cf +0x045:  mov    %eax,-0xe8(%ebp)
084056d5 +0x04b:  mov    -0x1c(%ebp),%eax
084056d8 +0x04e:  mov    0xa6(%eax),%eax
084056de +0x054:  mov    %eax,-0xe4(%ebp)
084056e4 +0x05a:  mov    -0x1c(%ebp),%eax
084056e7 +0x05d:  movzwl 0x76(%eax),%eax
084056eb +0x061:  movzwl %ax,%eax
084056ee +0x064:  mov    %eax,-0xe0(%ebp)
084056f4 +0x06a:  mov    -0x1c(%ebp),%eax
084056f7 +0x06d:  movzwl 0x48(%eax),%eax
084056fb +0x071:  movzwl %ax,%eax
084056fe +0x074:  mov    %eax,-0xdc(%ebp)
08405704 +0x07a:  mov    -0x1c(%ebp),%eax
08405707 +0x07d:  movzwl 0x42(%eax),%eax
0840570b +0x081:  movzwl %ax,%eax
0840570e +0x084:  mov    %eax,-0xd8(%ebp)
08405714 +0x08a:  mov    -0x1c(%ebp),%eax
08405717 +0x08d:  movzwl 0x4e(%eax),%eax
0840571b +0x091:  movzwl %ax,%eax
0840571e +0x094:  mov    %eax,-0xd4(%ebp)
08405724 +0x09a:  mov    -0x1c(%ebp),%eax
08405727 +0x09d:  movzwl 0x2c(%eax),%eax
0840572b +0x0a1:  movzwl %ax,%eax
0840572e +0x0a4:  mov    %eax,-0xd0(%ebp)
08405734 +0x0aa:  mov    -0x1c(%ebp),%eax
08405737 +0x0ad:  movzwl 0x2a(%eax),%eax
0840573b +0x0b1:  movzwl %ax,%eax
0840573e +0x0b4:  mov    %eax,-0xcc(%ebp)
08405744 +0x0ba:  mov    -0x1c(%ebp),%eax
08405747 +0x0bd:  movzwl 0x64(%eax),%eax
0840574b +0x0c1:  movzwl %ax,%eax
0840574e +0x0c4:  mov    %eax,-0xc8(%ebp)
08405754 +0x0ca:  mov    -0x1c(%ebp),%eax
08405757 +0x0cd:  movzwl 0x66(%eax),%eax
0840575b +0x0d1:  movzwl %ax,%eax
0840575e +0x0d4:  mov    %eax,-0xc4(%ebp)
08405764 +0x0da:  mov    -0x1c(%ebp),%eax
08405767 +0x0dd:  movzwl 0x62(%eax),%eax
0840576b +0x0e1:  movzwl %ax,%eax
0840576e +0x0e4:  mov    %eax,-0xc0(%ebp)
08405774 +0x0ea:  mov    -0x1c(%ebp),%eax
08405777 +0x0ed:  movzwl 0x60(%eax),%eax
0840577b +0x0f1:  movzwl %ax,%eax
0840577e +0x0f4:  mov    %eax,-0xbc(%ebp)
08405784 +0x0fa:  mov    -0x1c(%ebp),%eax
08405787 +0x0fd:  movzwl 0x68(%eax),%eax
0840578b +0x101:  movzwl %ax,%eax
0840578e +0x104:  mov    %eax,-0xb8(%ebp)
08405794 +0x10a:  mov    -0x1c(%ebp),%eax
08405797 +0x10d:  movzwl 0x38(%eax),%eax
0840579b +0x111:  movzwl %ax,%eax
0840579e +0x114:  mov    %eax,-0xb4(%ebp)
084057a4 +0x11a:  mov    -0x1c(%ebp),%eax
084057a7 +0x11d:  movzwl 0x3a(%eax),%eax
084057ab +0x121:  movzwl %ax,%eax
084057ae +0x124:  mov    %eax,-0xb0(%ebp)
084057b4 +0x12a:  mov    -0x1c(%ebp),%eax
084057b7 +0x12d:  movzwl 0x36(%eax),%eax
084057bb +0x131:  movzwl %ax,%eax
084057be +0x134:  mov    %eax,-0xac(%ebp)
084057c4 +0x13a:  mov    -0x1c(%ebp),%eax
084057c7 +0x13d:  movzwl 0x34(%eax),%eax
084057cb +0x141:  movzwl %ax,%eax
084057ce +0x144:  mov    %eax,-0xa8(%ebp)
084057d4 +0x14a:  mov    -0x1c(%ebp),%eax
084057d7 +0x14d:  movzwl 0x3c(%eax),%eax
084057db +0x151:  movzwl %ax,%eax
084057de +0x154:  mov    %eax,-0xa4(%ebp)
084057e4 +0x15a:  mov    -0x1c(%ebp),%eax
084057e7 +0x15d:  movzwl 0x46(%eax),%eax
084057eb +0x161:  movzwl %ax,%eax
084057ee +0x164:  mov    %eax,-0xa0(%ebp)
084057f4 +0x16a:  mov    -0x1c(%ebp),%eax
084057f7 +0x16d:  movzwl 0x28(%eax),%eax
084057fb +0x171:  movzwl %ax,%eax
084057fe +0x174:  mov    %eax,-0x9c(%ebp)
08405804 +0x17a:  mov    -0x1c(%ebp),%eax
08405807 +0x17d:  movzwl 0x20(%eax),%eax
0840580b +0x181:  movzwl %ax,%eax
0840580e +0x184:  mov    %eax,-0x98(%ebp)
08405814 +0x18a:  mov    -0x1c(%ebp),%eax
08405817 +0x18d:  movzwl 0x22(%eax),%eax
0840581b +0x191:  movzwl %ax,%eax
0840581e +0x194:  mov    %eax,-0x94(%ebp)
08405824 +0x19a:  mov    -0x1c(%ebp),%eax
08405827 +0x19d:  movzwl 0x10(%eax),%eax
0840582b +0x1a1:  movzwl %ax,%eax
0840582e +0x1a4:  mov    %eax,-0x90(%ebp)
08405834 +0x1aa:  mov    -0x1c(%ebp),%eax
08405837 +0x1ad:  movzwl 0xe(%eax),%eax
0840583b +0x1b1:  movzwl %ax,%eax
0840583e +0x1b4:  mov    %eax,-0x8c(%ebp)
08405844 +0x1ba:  mov    -0x1c(%ebp),%eax
08405847 +0x1bd:  movzwl 0x12(%eax),%eax
0840584b +0x1c1:  movzwl %ax,%edi
0840584e +0x1c4:  mov    -0x1c(%ebp),%eax
08405851 +0x1c7:  movzwl 0xc(%eax),%eax
08405855 +0x1cb:  movzwl %ax,%esi
08405858 +0x1ce:  mov    -0x1c(%ebp),%eax
0840585b +0x1d1:  movzwl 0x6c(%eax),%eax
0840585f +0x1d5:  movzwl %ax,%ebx
08405862 +0x1d8:  mov    -0x1c(%ebp),%eax
08405865 +0x1db:  movzwl 0x26(%eax),%eax
08405869 +0x1df:  movzwl %ax,%ecx
0840586c +0x1e2:  mov    -0x1c(%ebp),%eax
0840586f +0x1e5:  mov    0x8(%eax),%edx
08405872 +0x1e8:  mov    -0x1c(%ebp),%eax
08405875 +0x1eb:  mov    0x4(%eax),%eax
08405878 +0x1ee:  mov    %eax,-0xec(%ebp)
0840587e +0x1f4:  mov    -0xe8(%ebp),%eax
08405884 +0x1fa:  mov    %eax,0x7c(%esp)
08405888 +0x1fe:  mov    -0xe4(%ebp),%eax
0840588e +0x204:  mov    %eax,0x78(%esp)
08405892 +0x208:  mov    -0xe0(%ebp),%eax
08405898 +0x20e:  mov    %eax,0x74(%esp)
0840589c +0x212:  mov    -0xdc(%ebp),%eax
084058a2 +0x218:  mov    %eax,0x70(%esp)
084058a6 +0x21c:  mov    -0xd8(%ebp),%eax
084058ac +0x222:  mov    %eax,0x6c(%esp)
084058b0 +0x226:  mov    -0xd4(%ebp),%eax
084058b6 +0x22c:  mov    %eax,0x68(%esp)
084058ba +0x230:  mov    -0xd0(%ebp),%eax
084058c0 +0x236:  mov    %eax,0x64(%esp)
084058c4 +0x23a:  mov    -0xcc(%ebp),%eax
084058ca +0x240:  mov    %eax,0x60(%esp)
084058ce +0x244:  mov    -0xc8(%ebp),%eax
084058d4 +0x24a:  mov    %eax,0x5c(%esp)
084058d8 +0x24e:  mov    -0xc4(%ebp),%eax
084058de +0x254:  mov    %eax,0x58(%esp)
084058e2 +0x258:  mov    -0xc0(%ebp),%eax
084058e8 +0x25e:  mov    %eax,0x54(%esp)
084058ec +0x262:  mov    -0xbc(%ebp),%eax
084058f2 +0x268:  mov    %eax,0x50(%esp)
084058f6 +0x26c:  mov    -0xb8(%ebp),%eax
084058fc +0x272:  mov    %eax,0x4c(%esp)
08405900 +0x276:  mov    -0xb4(%ebp),%eax
08405906 +0x27c:  mov    %eax,0x48(%esp)
0840590a +0x280:  mov    -0xb0(%ebp),%eax
08405910 +0x286:  mov    %eax,0x44(%esp)
08405914 +0x28a:  mov    -0xac(%ebp),%eax
0840591a +0x290:  mov    %eax,0x40(%esp)
0840591e +0x294:  mov    -0xa8(%ebp),%eax
08405924 +0x29a:  mov    %eax,0x3c(%esp)
08405928 +0x29e:  mov    -0xa4(%ebp),%eax
0840592e +0x2a4:  mov    %eax,0x38(%esp)
08405932 +0x2a8:  mov    -0xa0(%ebp),%eax
08405938 +0x2ae:  mov    %eax,0x34(%esp)
0840593c +0x2b2:  mov    -0x9c(%ebp),%eax
08405942 +0x2b8:  mov    %eax,0x30(%esp)
08405946 +0x2bc:  mov    -0x98(%ebp),%eax
0840594c +0x2c2:  mov    %eax,0x2c(%esp)
08405950 +0x2c6:  mov    -0x94(%ebp),%eax
08405956 +0x2cc:  mov    %eax,0x28(%esp)
0840595a +0x2d0:  mov    -0x90(%ebp),%eax
08405960 +0x2d6:  mov    %eax,0x24(%esp)
08405964 +0x2da:  mov    -0x8c(%ebp),%eax
0840596a +0x2e0:  mov    %eax,0x20(%esp)
0840596e +0x2e4:  mov    %edi,0x1c(%esp)
08405972 +0x2e8:  mov    %esi,0x18(%esp)
08405976 +0x2ec:  mov    %ebx,0x14(%esp)
0840597a +0x2f0:  mov    %ecx,0x10(%esp)
0840597e +0x2f4:  mov    %edx,0xc(%esp)
08405982 +0x2f8:  mov    -0xec(%ebp),%eax
08405988 +0x2fe:  mov    %eax,0x8(%esp)
0840598c +0x302:  movl   $"upDate charac_quest_shop set qp=%u, init_count=%u, max_hp=%d, max_mp=%d, psy_attack=%d, psy_defense=%d, mag_attack=%d, mag_defence=%d, move_speed=%d, attack_speed=%d, hp_regen=%d, mp_regen=%d, all_element_resist=%d, fire_element_resist=%d, water_element_resist=%d, light_element_resist=%d, dark_element_resist=%d, all_element_attack=%d,fire_element_attack=%d, water_element_attack=%d, light_element_attack=%d, dark_element_attack=%d, psy_critical=%d, mag_critical=%d, good_hit=%d, evasion=%d, hit_recovery=%d, separate_psy_mag_attack=%d, quest_piece=%d where charac_no=%u",0x4(%esp)
08405994 +0x30a:  mov    -0x24(%ebp),%eax
08405997 +0x30d:  mov    %eax,(%esp)
0840599a +0x310:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840599f +0x315:  movl   $0x1,0x4(%esp)
084059a7 +0x31d:  mov    -0x24(%ebp),%eax
084059aa +0x320:  mov    %eax,(%esp)
084059ad +0x323:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084059b2 +0x328:  xor    $0x1,%eax
084059b5 +0x32b:  test   %al,%al
084059b7 +0x32d:  je     084059c3 <+0x339>
084059b9 +0x32f:  mov    $0x0,%eax
084059be +0x334:  jmp    08405c54 <+0x5ca>
084059c3 +0x339:  mov    -0x24(%ebp),%eax
084059c6 +0x33c:  mov    %eax,(%esp)
084059c9 +0x33f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084059ce +0x344:  or     %edx,%eax
084059d0 +0x346:  test   %eax,%eax
084059d2 +0x348:  sete   %al
084059d5 +0x34b:  test   %al,%al
084059d7 +0x34d:  je     08405c4f <+0x5c5>
084059dd +0x353:  mov    -0x1c(%ebp),%eax
084059e0 +0x356:  mov    0xa6(%eax),%eax
084059e6 +0x35c:  mov    %eax,-0x88(%ebp)
084059ec +0x362:  mov    -0x1c(%ebp),%eax
084059ef +0x365:  movzwl 0x76(%eax),%eax
084059f3 +0x369:  movzwl %ax,%eax
084059f6 +0x36c:  mov    %eax,-0x84(%ebp)
084059fc +0x372:  mov    -0x1c(%ebp),%eax
084059ff +0x375:  movzwl 0x48(%eax),%eax
08405a03 +0x379:  movzwl %ax,%eax
08405a06 +0x37c:  mov    %eax,-0x80(%ebp)
08405a09 +0x37f:  mov    -0x1c(%ebp),%eax
08405a0c +0x382:  movzwl 0x42(%eax),%eax
08405a10 +0x386:  movzwl %ax,%eax
08405a13 +0x389:  mov    %eax,-0x7c(%ebp)
08405a16 +0x38c:  mov    -0x1c(%ebp),%eax
08405a19 +0x38f:  movzwl 0x4e(%eax),%eax
08405a1d +0x393:  movzwl %ax,%eax
08405a20 +0x396:  mov    %eax,-0x78(%ebp)
08405a23 +0x399:  mov    -0x1c(%ebp),%eax
08405a26 +0x39c:  movzwl 0x2c(%eax),%eax
08405a2a +0x3a0:  movzwl %ax,%eax
08405a2d +0x3a3:  mov    %eax,-0x74(%ebp)
08405a30 +0x3a6:  mov    -0x1c(%ebp),%eax
08405a33 +0x3a9:  movzwl 0x2a(%eax),%eax
08405a37 +0x3ad:  movzwl %ax,%eax
08405a3a +0x3b0:  mov    %eax,-0x70(%ebp)
08405a3d +0x3b3:  mov    -0x1c(%ebp),%eax
08405a40 +0x3b6:  movzwl 0x64(%eax),%eax
08405a44 +0x3ba:  movzwl %ax,%eax
08405a47 +0x3bd:  mov    %eax,-0x6c(%ebp)
08405a4a +0x3c0:  mov    -0x1c(%ebp),%eax
08405a4d +0x3c3:  movzwl 0x66(%eax),%eax
08405a51 +0x3c7:  movzwl %ax,%eax
08405a54 +0x3ca:  mov    %eax,-0x68(%ebp)
08405a57 +0x3cd:  mov    -0x1c(%ebp),%eax
08405a5a +0x3d0:  movzwl 0x62(%eax),%eax
08405a5e +0x3d4:  movzwl %ax,%eax
08405a61 +0x3d7:  mov    %eax,-0x64(%ebp)
08405a64 +0x3da:  mov    -0x1c(%ebp),%eax
08405a67 +0x3dd:  movzwl 0x60(%eax),%eax
08405a6b +0x3e1:  movzwl %ax,%eax
08405a6e +0x3e4:  mov    %eax,-0x60(%ebp)
08405a71 +0x3e7:  mov    -0x1c(%ebp),%eax
08405a74 +0x3ea:  movzwl 0x68(%eax),%eax
08405a78 +0x3ee:  movzwl %ax,%eax
08405a7b +0x3f1:  mov    %eax,-0x5c(%ebp)
08405a7e +0x3f4:  mov    -0x1c(%ebp),%eax
08405a81 +0x3f7:  movzwl 0x38(%eax),%eax
08405a85 +0x3fb:  movzwl %ax,%eax
08405a88 +0x3fe:  mov    %eax,-0x58(%ebp)
08405a8b +0x401:  mov    -0x1c(%ebp),%eax
08405a8e +0x404:  movzwl 0x3a(%eax),%eax
08405a92 +0x408:  movzwl %ax,%eax
08405a95 +0x40b:  mov    %eax,-0x54(%ebp)
08405a98 +0x40e:  mov    -0x1c(%ebp),%eax
08405a9b +0x411:  movzwl 0x36(%eax),%eax
08405a9f +0x415:  movzwl %ax,%eax
08405aa2 +0x418:  mov    %eax,-0x50(%ebp)
08405aa5 +0x41b:  mov    -0x1c(%ebp),%eax
08405aa8 +0x41e:  movzwl 0x34(%eax),%eax
08405aac +0x422:  movzwl %ax,%eax
08405aaf +0x425:  mov    %eax,-0x4c(%ebp)
08405ab2 +0x428:  mov    -0x1c(%ebp),%eax
08405ab5 +0x42b:  movzwl 0x3c(%eax),%eax
08405ab9 +0x42f:  movzwl %ax,%eax
08405abc +0x432:  mov    %eax,-0x48(%ebp)
08405abf +0x435:  mov    -0x1c(%ebp),%eax
08405ac2 +0x438:  movzwl 0x46(%eax),%eax
08405ac6 +0x43c:  movzwl %ax,%eax
08405ac9 +0x43f:  mov    %eax,-0x44(%ebp)
08405acc +0x442:  mov    -0x1c(%ebp),%eax
08405acf +0x445:  movzwl 0x28(%eax),%eax
08405ad3 +0x449:  movzwl %ax,%eax
08405ad6 +0x44c:  mov    %eax,-0x40(%ebp)
08405ad9 +0x44f:  mov    -0x1c(%ebp),%eax
08405adc +0x452:  movzwl 0x20(%eax),%eax
08405ae0 +0x456:  movzwl %ax,%eax
08405ae3 +0x459:  mov    %eax,-0x3c(%ebp)
08405ae6 +0x45c:  mov    -0x1c(%ebp),%eax
08405ae9 +0x45f:  movzwl 0x22(%eax),%eax
08405aed +0x463:  movzwl %ax,%eax
08405af0 +0x466:  mov    %eax,-0x38(%ebp)
08405af3 +0x469:  mov    -0x1c(%ebp),%eax
08405af6 +0x46c:  movzwl 0x10(%eax),%eax
08405afa +0x470:  movzwl %ax,%eax
08405afd +0x473:  mov    %eax,-0x34(%ebp)
08405b00 +0x476:  mov    -0x1c(%ebp),%eax
08405b03 +0x479:  movzwl 0xe(%eax),%eax
08405b07 +0x47d:  movzwl %ax,%eax
08405b0a +0x480:  mov    %eax,-0x30(%ebp)
08405b0d +0x483:  mov    -0x1c(%ebp),%eax
08405b10 +0x486:  movzwl 0x12(%eax),%eax
08405b14 +0x48a:  movzwl %ax,%eax
08405b17 +0x48d:  mov    %eax,-0x2c(%ebp)
08405b1a +0x490:  mov    -0x1c(%ebp),%eax
08405b1d +0x493:  movzwl 0xc(%eax),%eax
08405b21 +0x497:  movzwl %ax,%edi
08405b24 +0x49a:  mov    -0x1c(%ebp),%eax
08405b27 +0x49d:  movzwl 0x6c(%eax),%eax
08405b2b +0x4a1:  movzwl %ax,%esi
08405b2e +0x4a4:  mov    -0x1c(%ebp),%eax
08405b31 +0x4a7:  movzwl 0x26(%eax),%eax
08405b35 +0x4ab:  movzwl %ax,%ebx
08405b38 +0x4ae:  mov    -0x1c(%ebp),%eax
08405b3b +0x4b1:  mov    0x8(%eax),%ecx
08405b3e +0x4b4:  mov    -0x1c(%ebp),%eax
08405b41 +0x4b7:  mov    0x4(%eax),%edx
08405b44 +0x4ba:  mov    -0x1c(%ebp),%eax
08405b47 +0x4bd:  mov    (%eax),%eax
08405b49 +0x4bf:  mov    %eax,-0xec(%ebp)
08405b4f +0x4c5:  mov    -0x88(%ebp),%eax
08405b55 +0x4cb:  mov    %eax,0x7c(%esp)
08405b59 +0x4cf:  mov    -0x84(%ebp),%eax
08405b5f +0x4d5:  mov    %eax,0x78(%esp)
08405b63 +0x4d9:  mov    -0x80(%ebp),%eax
08405b66 +0x4dc:  mov    %eax,0x74(%esp)
08405b6a +0x4e0:  mov    -0x7c(%ebp),%eax
08405b6d +0x4e3:  mov    %eax,0x70(%esp)
08405b71 +0x4e7:  mov    -0x78(%ebp),%eax
08405b74 +0x4ea:  mov    %eax,0x6c(%esp)
08405b78 +0x4ee:  mov    -0x74(%ebp),%eax
08405b7b +0x4f1:  mov    %eax,0x68(%esp)
08405b7f +0x4f5:  mov    -0x70(%ebp),%eax
08405b82 +0x4f8:  mov    %eax,0x64(%esp)
08405b86 +0x4fc:  mov    -0x6c(%ebp),%eax
08405b89 +0x4ff:  mov    %eax,0x60(%esp)
08405b8d +0x503:  mov    -0x68(%ebp),%eax
08405b90 +0x506:  mov    %eax,0x5c(%esp)
08405b94 +0x50a:  mov    -0x64(%ebp),%eax
08405b97 +0x50d:  mov    %eax,0x58(%esp)
08405b9b +0x511:  mov    -0x60(%ebp),%eax
08405b9e +0x514:  mov    %eax,0x54(%esp)
08405ba2 +0x518:  mov    -0x5c(%ebp),%eax
08405ba5 +0x51b:  mov    %eax,0x50(%esp)
08405ba9 +0x51f:  mov    -0x58(%ebp),%eax
08405bac +0x522:  mov    %eax,0x4c(%esp)
08405bb0 +0x526:  mov    -0x54(%ebp),%eax
08405bb3 +0x529:  mov    %eax,0x48(%esp)
08405bb7 +0x52d:  mov    -0x50(%ebp),%eax
08405bba +0x530:  mov    %eax,0x44(%esp)
08405bbe +0x534:  mov    -0x4c(%ebp),%eax
08405bc1 +0x537:  mov    %eax,0x40(%esp)
08405bc5 +0x53b:  mov    -0x48(%ebp),%eax
08405bc8 +0x53e:  mov    %eax,0x3c(%esp)
08405bcc +0x542:  mov    -0x44(%ebp),%eax
08405bcf +0x545:  mov    %eax,0x38(%esp)
08405bd3 +0x549:  mov    -0x40(%ebp),%eax
08405bd6 +0x54c:  mov    %eax,0x34(%esp)
08405bda +0x550:  mov    -0x3c(%ebp),%eax
08405bdd +0x553:  mov    %eax,0x30(%esp)
08405be1 +0x557:  mov    -0x38(%ebp),%eax
08405be4 +0x55a:  mov    %eax,0x2c(%esp)
08405be8 +0x55e:  mov    -0x34(%ebp),%eax
08405beb +0x561:  mov    %eax,0x28(%esp)
08405bef +0x565:  mov    -0x30(%ebp),%eax
08405bf2 +0x568:  mov    %eax,0x24(%esp)
08405bf6 +0x56c:  mov    -0x2c(%ebp),%eax
08405bf9 +0x56f:  mov    %eax,0x20(%esp)
08405bfd +0x573:  mov    %edi,0x1c(%esp)
08405c01 +0x577:  mov    %esi,0x18(%esp)
08405c05 +0x57b:  mov    %ebx,0x14(%esp)
08405c09 +0x57f:  mov    %ecx,0x10(%esp)
08405c0d +0x583:  mov    %edx,0xc(%esp)
08405c11 +0x587:  mov    -0xec(%ebp),%eax
08405c17 +0x58d:  mov    %eax,0x8(%esp)
08405c1b +0x591:  movl   $"inSert into charac_quest_shop(charac_no, qp, init_count, max_hp, max_mp, psy_attack, psy_defense, mag_attack, mag_defence, move_speed, attack_speed, hp_regen, mp_regen, all_element_resist, fire_element_resist, water_element_resist, light_element_resist, dark_element_resist, all_element_attack,fire_element_attack, water_element_attack, light_element_attack, dark_element_attack, psy_critical, mag_critical, good_hit , evasion , hit_recovery , separate_psy_mag_attack , quest_piece) values(%u, %u, %u, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",0x4(%esp)
08405c23 +0x599:  mov    -0x24(%ebp),%eax
08405c26 +0x59c:  mov    %eax,(%esp)
08405c29 +0x59f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08405c2e +0x5a4:  movl   $0x1,0x4(%esp)
08405c36 +0x5ac:  mov    -0x24(%ebp),%eax
08405c39 +0x5af:  mov    %eax,(%esp)
08405c3c +0x5b2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08405c41 +0x5b7:  xor    $0x1,%eax
08405c44 +0x5ba:  test   %al,%al
08405c46 +0x5bc:  je     08405c4f <+0x5c5>
08405c48 +0x5be:  mov    $0x0,%eax
08405c4d +0x5c3:  jmp    08405c54 <+0x5ca>
08405c4f +0x5c5:  mov    $0x1,%eax
08405c54 +0x5ca:  add    $0x16c,%esp
08405c5a +0x5d0:  pop    %ebx
08405c5b +0x5d1:  pop    %esi
08405c5c +0x5d2:  pop    %edi
08405c5d +0x5d3:  pop    %ebp
08405c5e +0x5d4:  ret
08405c5f +0x5d5:  nop
```

## 反编译 C

```c
// DB_UpdateQuestShopBuyingStatusList::dispatch @ 0x840568a

/* DB_UpdateQuestShopBuyingStatusList::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQuestShopBuyingStatusList::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_QUEST_SHOP_DATA *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_QUEST_SHOP_DATA>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate charac_quest_shop set qp=%u, init_count=%u, max_hp=%d, max_mp=%d, psy_attack=%d, psy_defense=%d, mag_attack=%d, mag_defence=%d, move_speed=%d, attack_speed=%d, hp_regen=%d, mp_regen=%d, all_element_resist=%d, fire_element_resist=%d, water_element_resist=%d, light_element_resist=%d, dark_element_resist=%d, all_element_attack=%d,fire_element_attack=%d, water_element_attack=%d, light_element_attack=%d, dark_element_attack=%d, psy_critical=%d, mag_critical=%d, good_hit=%d, evasion=%d, hit_recovery=%d, separate_psy_mag_attack=%d, quest_piece=%d where charac_no=%u"
                   ,*(undefined4 *)(pSVar2 + 4),*(undefined4 *)(pSVar2 + 8),
                   (uint)*(ushort *)(pSVar2 + 0x26),(uint)*(ushort *)(pSVar2 + 0x6c),
                   (uint)*(ushort *)(pSVar2 + 0xc),(uint)*(ushort *)(pSVar2 + 0x12),
                   (uint)*(ushort *)(pSVar2 + 0xe),(uint)*(ushort *)(pSVar2 + 0x10),
                   (uint)*(ushort *)(pSVar2 + 0x22),(uint)*(ushort *)(pSVar2 + 0x20),
                   (uint)*(ushort *)(pSVar2 + 0x28),(uint)*(ushort *)(pSVar2 + 0x46),
                   (uint)*(ushort *)(pSVar2 + 0x3c),(uint)*(ushort *)(pSVar2 + 0x34),
                   (uint)*(ushort *)(pSVar2 + 0x36),(uint)*(ushort *)(pSVar2 + 0x3a),
                   (uint)*(ushort *)(pSVar2 + 0x38),(uint)*(ushort *)(pSVar2 + 0x68),
                   (uint)*(ushort *)(pSVar2 + 0x60),(uint)*(ushort *)(pSVar2 + 0x62),
                   (uint)*(ushort *)(pSVar2 + 0x66),(uint)*(ushort *)(pSVar2 + 100),
                   (uint)*(ushort *)(pSVar2 + 0x2a),(uint)*(ushort *)(pSVar2 + 0x2c),
                   (uint)*(ushort *)(pSVar2 + 0x4e),(uint)*(ushort *)(pSVar2 + 0x42),
                   (uint)*(ushort *)(pSVar2 + 0x48),(uint)*(ushort *)(pSVar2 + 0x76),
                   *(undefined4 *)(pSVar2 + 0xa6),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into charac_quest_shop(charac_no, qp, init_count, max_hp, max_mp, psy_attack, psy_defense, mag_attack, mag_defence, move_speed, attack_speed, hp_regen, mp_regen, all_element_resist, fire_element_resist, water_element_resist, light_element_resist, dark_element_resist, all_element_attack,fire_element_attack, water_element_attack, light_element_attack, dark_element_attack, psy_critical, mag_critical, good_hit , evasion , hit_recovery , separate_psy_mag_attack , quest_piece) values(%u, %u, %u, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)"
                       ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),(uint)*(ushort *)(pSVar2 + 0x26),
                       (uint)*(ushort *)(pSVar2 + 0x6c),(uint)*(ushort *)(pSVar2 + 0xc),
                       (uint)*(ushort *)(pSVar2 + 0x12),(uint)*(ushort *)(pSVar2 + 0xe),
                       (uint)*(ushort *)(pSVar2 + 0x10),(uint)*(ushort *)(pSVar2 + 0x22),
                       (uint)*(ushort *)(pSVar2 + 0x20),(uint)*(ushort *)(pSVar2 + 0x28),
                       (uint)*(ushort *)(pSVar2 + 0x46),(uint)*(ushort *)(pSVar2 + 0x3c),
                       (uint)*(ushort *)(pSVar2 + 0x34),(uint)*(ushort *)(pSVar2 + 0x36),
                       (uint)*(ushort *)(pSVar2 + 0x3a),(uint)*(ushort *)(pSVar2 + 0x38),
                       (uint)*(ushort *)(pSVar2 + 0x68),(uint)*(ushort *)(pSVar2 + 0x60),
                       (uint)*(ushort *)(pSVar2 + 0x62),(uint)*(ushort *)(pSVar2 + 0x66),
                       (uint)*(ushort *)(pSVar2 + 100),(uint)*(ushort *)(pSVar2 + 0x2a),
                       (uint)*(ushort *)(pSVar2 + 0x2c),(uint)*(ushort *)(pSVar2 + 0x4e),
                       (uint)*(ushort *)(pSVar2 + 0x42),(uint)*(ushort *)(pSVar2 + 0x48),
                       (uint)*(ushort *)(pSVar2 + 0x76),*(undefined4 *)(pSVar2 + 0xa6));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
