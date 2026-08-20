# LoadPremiumInfo

`_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc`

`WongWork::CUserPremium::LoadPremiumInfo(char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CUserPremium` | `0x086aeca4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086aeca4  _ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc
#           WongWork::CUserPremium::LoadPremiumInfo(char const*)
# range [0x086aeca4, 0x086af709]
086aeca4 +0x000:  push   %ebp
086aeca5 +0x001:  mov    %esp,%ebp
086aeca7 +0x003:  push   %edi
086aeca8 +0x004:  push   %esi
086aeca9 +0x005:  push   %ebx
086aecaa +0x006:  sub    $0x7e3c,%esp
086aecb0 +0x00c:  lea    -0x7e28(%ebp),%ebx
086aecb6 +0x012:  mov    %ebx,%edi
086aecb8 +0x014:  mov    $0x69,%esi
086aecbd +0x019:  jmp    086aecd0 <+0x2c>
086aecbf +0x01b:  mov    %edi,(%esp)
086aecc2 +0x01e:  call   086b0898 <_GLOBAL__I_g_SPremiumInfo+0x8e>  ; global constructors keyed to g_SPremiumInfo+0x8e
086aecc7 +0x023:  add    $0x130,%edi
086aeccd +0x029:  sub    $0x1,%esi
086aecd0 +0x02c:  cmp    $0xffffffff,%esi
086aecd3 +0x02f:  setne  %al
086aecd6 +0x032:  test   %al,%al
086aecd8 +0x034:  jne    086aecbf <+0x1b>
086aecda +0x036:  jmp    086aed1c <+0x78>
086aecdc +0x038:  mov    %edx,%edi
086aecde +0x03a:  mov    %eax,-0x7e2c(%ebp)
086aece4 +0x040:  test   %ebx,%ebx
086aece6 +0x042:  je     086aed0c <+0x68>
086aece8 +0x044:  mov    $0x69,%eax
086aeced +0x049:  sub    %esi,%eax
086aecef +0x04b:  imul   $0x130,%eax,%eax
086aecf5 +0x051:  lea    (%ebx,%eax,1),%esi
086aecf8 +0x054:  cmp    %ebx,%esi
086aecfa +0x056:  je     086aed0c <+0x68>
086aecfc +0x058:  sub    $0x130,%esi
086aed02 +0x05e:  mov    %esi,(%esp)
086aed05 +0x061:  call   086b0910 <_GLOBAL__I_g_SPremiumInfo+0x106>  ; global constructors keyed to g_SPremiumInfo+0x106
086aed0a +0x066:  jmp    086aecf8 <+0x54>
086aed0c +0x068:  mov    -0x7e2c(%ebp),%eax
086aed12 +0x06e:  mov    %edi,%edx
086aed14 +0x070:  mov    %eax,(%esp)
086aed17 +0x073:  call   08ae3750 <_Unwind_Resume>
086aed1c +0x078:  movl   $&g_vecPremiumReturnItemInfo,0xc(%esp)
086aed24 +0x080:  movl   $&g_vecPremiumOverEquipableInfo,0x8(%esp)
086aed2c +0x088:  lea    -0x7e28(%ebp),%eax
086aed32 +0x08e:  mov    %eax,0x4(%esp)
086aed36 +0x092:  mov    0x8(%ebp),%eax
086aed39 +0x095:  mov    %eax,(%esp)
086aed3c +0x098:  call   08905d95 <_Z17importPremiumListPKcP16stPremiumTable_tRSt6vectorI25SPremiumOverEquipableInfoSaIS4_EERS3_I22SPremiumReturnItemInfoSaIS8_EE>  ; importPremiumList(char const*, stPremiumTable_t*, std::vector<SPremiumOverEquipableInfo, std::allocator<SPremiumOverEquipableInfo> >&, std::vector<SPremiumReturnItemInfo, std::allocator<SPremiumReturnItemInfo> >&)
086aed41 +0x09d:  test   %eax,%eax
086aed43 +0x09f:  setne  %al
086aed46 +0x0a2:  test   %al,%al
086aed48 +0x0a4:  je     086aed54 <+0xb0>
086aed4a +0x0a6:  mov    $0x15c,%ebx
086aed4f +0x0ab:  jmp    086af6d7 <+0xa33>
086aed54 +0x0b0:  movl   $0x0,-0x34(%ebp)
086aed5b +0x0b7:  jmp    086af68b <+0x9e7>
086aed60 +0x0bc:  mov    -0x34(%ebp),%edx
086aed63 +0x0bf:  mov    -0x34(%ebp),%eax
086aed66 +0x0c2:  imul   $0x130,%eax,%eax
086aed6c +0x0c8:  lea    -0x18(%ebp),%ecx
086aed6f +0x0cb:  lea    (%ecx,%eax,1),%eax
086aed72 +0x0ce:  sub    $0x7e10,%eax
086aed77 +0x0d3:  mov    (%eax),%ecx
086aed79 +0x0d5:  mov    %edx,%eax
086aed7b +0x0d7:  shl    $0x3,%eax
086aed7e +0x0da:  add    %edx,%eax
086aed80 +0x0dc:  shl    $0x5,%eax
086aed83 +0x0df:  mov    %ecx,&g_SPremiumInfo(%eax)
086aed89 +0x0e5:  mov    -0x34(%ebp),%edx
086aed8c +0x0e8:  mov    -0x34(%ebp),%eax
086aed8f +0x0eb:  imul   $0x130,%eax,%eax
086aed95 +0x0f1:  lea    -0x18(%ebp),%ecx
086aed98 +0x0f4:  lea    (%ecx,%eax,1),%eax
086aed9b +0x0f7:  sub    $0x7e0c,%eax
086aeda0 +0x0fc:  mov    (%eax),%ecx
086aeda2 +0x0fe:  mov    %edx,%eax
086aeda4 +0x100:  shl    $0x3,%eax
086aeda7 +0x103:  add    %edx,%eax
086aeda9 +0x105:  shl    $0x5,%eax
086aedac +0x108:  mov    %ecx,&g_SPremiumInfo+0x4(%eax)
086aedb2 +0x10e:  mov    -0x34(%ebp),%edx
086aedb5 +0x111:  mov    -0x34(%ebp),%eax
086aedb8 +0x114:  imul   $0x130,%eax,%eax
086aedbe +0x11a:  lea    -0x18(%ebp),%ecx
086aedc1 +0x11d:  lea    (%ecx,%eax,1),%eax
086aedc4 +0x120:  sub    $0x7e08,%eax
086aedc9 +0x125:  mov    (%eax),%ecx
086aedcb +0x127:  mov    %edx,%eax
086aedcd +0x129:  shl    $0x3,%eax
086aedd0 +0x12c:  add    %edx,%eax
086aedd2 +0x12e:  shl    $0x5,%eax
086aedd5 +0x131:  mov    %ecx,&g_SPremiumInfo+0x8(%eax)
086aeddb +0x137:  movl   $0x0,-0x30(%ebp)
086aede2 +0x13e:  jmp    086aee40 <+0x19c>
086aede4 +0x140:  mov    -0x34(%ebp),%edx
086aede7 +0x143:  mov    -0x30(%ebp),%ebx
086aedea +0x146:  mov    -0x34(%ebp),%ecx
086aeded +0x149:  mov    -0x30(%ebp),%eax
086aedf0 +0x14c:  imul   $0x26,%ecx,%ecx
086aedf3 +0x14f:  lea    (%ecx,%eax,1),%eax
086aedf6 +0x152:  mov    -0x7e1c(%ebp,%eax,8),%ecx
086aedfd +0x159:  mov    %edx,%eax
086aedff +0x15b:  shl    $0x3,%eax
086aee02 +0x15e:  add    %edx,%eax
086aee04 +0x160:  shl    $0x2,%eax
086aee07 +0x163:  add    %ebx,%eax
086aee09 +0x165:  mov    %ecx,&g_SPremiumInfo+0xc(,%eax,8)
086aee10 +0x16c:  mov    -0x34(%ebp),%edx
086aee13 +0x16f:  mov    -0x30(%ebp),%ebx
086aee16 +0x172:  mov    -0x34(%ebp),%ecx
086aee19 +0x175:  mov    -0x30(%ebp),%eax
086aee1c +0x178:  imul   $0x26,%ecx,%ecx
086aee1f +0x17b:  lea    (%ecx,%eax,1),%eax
086aee22 +0x17e:  mov    -0x7e18(%ebp,%eax,8),%ecx
086aee29 +0x185:  mov    %edx,%eax
086aee2b +0x187:  shl    $0x3,%eax
086aee2e +0x18a:  add    %edx,%eax
086aee30 +0x18c:  shl    $0x2,%eax
086aee33 +0x18f:  add    %ebx,%eax
086aee35 +0x191:  mov    %ecx,&g_SPremiumInfo+0x10(,%eax,8)
086aee3c +0x198:  addl   $0x1,-0x30(%ebp)
086aee40 +0x19c:  cmpl   $0x4,-0x30(%ebp)
086aee44 +0x1a0:  setle  %al
086aee47 +0x1a3:  test   %al,%al
086aee49 +0x1a5:  jne    086aede4 <+0x140>
086aee4b +0x1a7:  mov    -0x34(%ebp),%edx
086aee4e +0x1aa:  mov    -0x34(%ebp),%eax
086aee51 +0x1ad:  imul   $0x130,%eax,%eax
086aee57 +0x1b3:  lea    -0x18(%ebp),%ecx
086aee5a +0x1b6:  lea    (%ecx,%eax,1),%eax
086aee5d +0x1b9:  sub    $0x7de0,%eax
086aee62 +0x1be:  movzwl 0x4(%eax),%ecx
086aee66 +0x1c2:  mov    %edx,%eax
086aee68 +0x1c4:  shl    $0x3,%eax
086aee6b +0x1c7:  add    %edx,%eax
086aee6d +0x1c9:  shl    $0x5,%eax
086aee70 +0x1cc:  mov    %cx,&g_SPremiumInfo+0x34(%eax)
086aee77 +0x1d3:  mov    -0x34(%ebp),%edx
086aee7a +0x1d6:  mov    -0x34(%ebp),%eax
086aee7d +0x1d9:  imul   $0x130,%eax,%eax
086aee83 +0x1df:  lea    -0x18(%ebp),%ecx
086aee86 +0x1e2:  lea    (%ecx,%eax,1),%eax
086aee89 +0x1e5:  sub    $0x7dd8,%eax
086aee8e +0x1ea:  mov    (%eax),%ecx
086aee90 +0x1ec:  mov    %edx,%eax
086aee92 +0x1ee:  shl    $0x3,%eax
086aee95 +0x1f1:  add    %edx,%eax
086aee97 +0x1f3:  shl    $0x5,%eax
086aee9a +0x1f6:  mov    %ecx,&g_SPremiumInfo+0x38(%eax)
086aeea0 +0x1fc:  mov    -0x34(%ebp),%edx
086aeea3 +0x1ff:  mov    -0x34(%ebp),%eax
086aeea6 +0x202:  imul   $0x130,%eax,%eax
086aeeac +0x208:  lea    -0x18(%ebp),%ecx
086aeeaf +0x20b:  lea    (%ecx,%eax,1),%eax
086aeeb2 +0x20e:  sub    $0x7dd4,%eax
086aeeb7 +0x213:  mov    (%eax),%ecx
086aeeb9 +0x215:  mov    %edx,%eax
086aeebb +0x217:  shl    $0x3,%eax
086aeebe +0x21a:  add    %edx,%eax
086aeec0 +0x21c:  shl    $0x5,%eax
086aeec3 +0x21f:  mov    %ecx,&g_SPremiumInfo+0x3c(%eax)
086aeec9 +0x225:  mov    -0x34(%ebp),%edx
086aeecc +0x228:  mov    -0x34(%ebp),%eax
086aeecf +0x22b:  imul   $0x130,%eax,%eax
086aeed5 +0x231:  lea    -0x18(%ebp),%ecx
086aeed8 +0x234:  lea    (%ecx,%eax,1),%eax
086aeedb +0x237:  sub    $0x7dd0,%eax
086aeee0 +0x23c:  movzwl 0x2(%eax),%ecx
086aeee4 +0x240:  mov    %edx,%eax
086aeee6 +0x242:  shl    $0x3,%eax
086aeee9 +0x245:  add    %edx,%eax
086aeeeb +0x247:  shl    $0x5,%eax
086aeeee +0x24a:  mov    %cx,&g_SPremiumInfo+0x58(%eax)
086aeef5 +0x251:  mov    -0x34(%ebp),%edx
086aeef8 +0x254:  mov    -0x34(%ebp),%eax
086aeefb +0x257:  imul   $0x130,%eax,%eax
086aef01 +0x25d:  lea    -0x18(%ebp),%ecx
086aef04 +0x260:  lea    (%ecx,%eax,1),%eax
086aef07 +0x263:  sub    $0x7dd0,%eax
086aef0c +0x268:  movzwl 0x4(%eax),%ecx
086aef10 +0x26c:  mov    %edx,%eax
086aef12 +0x26e:  shl    $0x3,%eax
086aef15 +0x271:  add    %edx,%eax
086aef17 +0x273:  shl    $0x5,%eax
086aef1a +0x276:  mov    %cx,&g_SPremiumInfo+0x5a(%eax)
086aef21 +0x27d:  mov    -0x34(%ebp),%edx
086aef24 +0x280:  mov    -0x34(%ebp),%eax
086aef27 +0x283:  imul   $0x130,%eax,%eax
086aef2d +0x289:  lea    -0x18(%ebp),%ecx
086aef30 +0x28c:  lea    (%ecx,%eax,1),%eax
086aef33 +0x28f:  sub    $0x7db4,%eax
086aef38 +0x294:  mov    (%eax),%ecx
086aef3a +0x296:  mov    %edx,%eax
086aef3c +0x298:  shl    $0x3,%eax
086aef3f +0x29b:  add    %edx,%eax
086aef41 +0x29d:  shl    $0x5,%eax
086aef44 +0x2a0:  mov    %ecx,&g_SPremiumInfo+0x5c(%eax)
086aef4a +0x2a6:  mov    -0x34(%ebp),%edx
086aef4d +0x2a9:  mov    -0x34(%ebp),%eax
086aef50 +0x2ac:  imul   $0x130,%eax,%eax
086aef56 +0x2b2:  lea    -0x18(%ebp),%ecx
086aef59 +0x2b5:  lea    (%ecx,%eax,1),%eax
086aef5c +0x2b8:  sub    $0x7dd0,%eax
086aef61 +0x2bd:  movzbl (%eax),%ecx
086aef64 +0x2c0:  mov    %edx,%eax
086aef66 +0x2c2:  shl    $0x3,%eax
086aef69 +0x2c5:  add    %edx,%eax
086aef6b +0x2c7:  shl    $0x5,%eax
086aef6e +0x2ca:  mov    %cl,&g_SPremiumInfo+0x40(%eax)
086aef74 +0x2d0:  mov    -0x34(%ebp),%edx
086aef77 +0x2d3:  mov    -0x34(%ebp),%eax
086aef7a +0x2d6:  imul   $0x130,%eax,%eax
086aef80 +0x2dc:  lea    -0x18(%ebp),%ecx
086aef83 +0x2df:  lea    (%ecx,%eax,1),%eax
086aef86 +0x2e2:  sub    $0x7dc8,%eax
086aef8b +0x2e7:  mov    (%eax),%ecx
086aef8d +0x2e9:  mov    %edx,%eax
086aef8f +0x2eb:  shl    $0x3,%eax
086aef92 +0x2ee:  add    %edx,%eax
086aef94 +0x2f0:  shl    $0x5,%eax
086aef97 +0x2f3:  mov    %ecx,&g_SPremiumInfo+0x44(%eax)
086aef9d +0x2f9:  mov    -0x34(%ebp),%edx
086aefa0 +0x2fc:  mov    -0x34(%ebp),%eax
086aefa3 +0x2ff:  imul   $0x130,%eax,%eax
086aefa9 +0x305:  lea    -0x18(%ebp),%ecx
086aefac +0x308:  lea    (%ecx,%eax,1),%eax
086aefaf +0x30b:  sub    $0x7dc4,%eax
086aefb4 +0x310:  mov    (%eax),%ecx
086aefb6 +0x312:  mov    %edx,%eax
086aefb8 +0x314:  shl    $0x3,%eax
086aefbb +0x317:  add    %edx,%eax
086aefbd +0x319:  shl    $0x5,%eax
086aefc0 +0x31c:  mov    %ecx,&g_SPremiumInfo+0x48(%eax)
086aefc6 +0x322:  mov    -0x34(%ebp),%edx
086aefc9 +0x325:  lea    -0x7e28(%ebp),%eax
086aefcf +0x32b:  imul   $0x130,%edx,%edx
086aefd5 +0x331:  add    $0x50,%edx
086aefd8 +0x334:  lea    (%eax,%edx,1),%ecx
086aefdb +0x337:  mov    -0x34(%ebp),%edx
086aefde +0x33a:  mov    %edx,%eax
086aefe0 +0x33c:  shl    $0x3,%eax
086aefe3 +0x33f:  add    %edx,%eax
086aefe5 +0x341:  shl    $0x5,%eax
086aefe8 +0x344:  add    $0x40,%eax
086aefeb +0x347:  add    $&g_SPremiumInfo,%eax
086aeff0 +0x34c:  add    $0xc,%eax
086aeff3 +0x34f:  mov    %ecx,0x4(%esp)
086aeff7 +0x353:  mov    %eax,(%esp)
086aeffa +0x356:  call   085e76b0 <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0xe38>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0xe38
086aefff +0x35b:  mov    -0x34(%ebp),%edx
086af002 +0x35e:  mov    -0x34(%ebp),%eax
086af005 +0x361:  imul   $0x130,%eax,%eax
086af00b +0x367:  lea    -0x18(%ebp),%ecx
086af00e +0x36a:  lea    (%ecx,%eax,1),%eax
086af011 +0x36d:  sub    $0x7db0,%eax
086af016 +0x372:  movzbl (%eax),%ecx
086af019 +0x375:  mov    %edx,%eax
086af01b +0x377:  shl    $0x3,%eax
086af01e +0x37a:  add    %edx,%eax
086af020 +0x37c:  shl    $0x5,%eax
086af023 +0x37f:  mov    %cl,&g_SPremiumInfo+0x60(%eax)
086af029 +0x385:  mov    -0x34(%ebp),%edx
086af02c +0x388:  mov    -0x34(%ebp),%eax
086af02f +0x38b:  imul   $0x130,%eax,%eax
086af035 +0x391:  lea    -0x18(%ebp),%ecx
086af038 +0x394:  lea    (%ecx,%eax,1),%eax
086af03b +0x397:  sub    $0x7dac,%eax
086af040 +0x39c:  mov    (%eax),%ecx
086af042 +0x39e:  mov    %edx,%eax
086af044 +0x3a0:  shl    $0x3,%eax
086af047 +0x3a3:  add    %edx,%eax
086af049 +0x3a5:  shl    $0x5,%eax
086af04c +0x3a8:  mov    %ecx,&g_SPremiumInfo+0x64(%eax)
086af052 +0x3ae:  movl   $0x0,-0x2c(%ebp)
086af059 +0x3b5:  jmp    086af0c3 <+0x41f>
086af05b +0x3b7:  mov    -0x34(%ebp),%edx
086af05e +0x3ba:  mov    -0x2c(%ebp),%ebx
086af061 +0x3bd:  mov    -0x34(%ebp),%ecx
086af064 +0x3c0:  mov    -0x2c(%ebp),%eax
086af067 +0x3c3:  imul   $0x26,%ecx,%ecx
086af06a +0x3c6:  lea    (%ecx,%eax,1),%eax
086af06d +0x3c9:  add    $0xc,%eax
086af070 +0x3cc:  mov    -0x7e20(%ebp,%eax,8),%ecx
086af077 +0x3d3:  mov    %edx,%eax
086af079 +0x3d5:  shl    $0x3,%eax
086af07c +0x3d8:  add    %edx,%eax
086af07e +0x3da:  shl    $0x2,%eax
086af081 +0x3dd:  add    %ebx,%eax
086af083 +0x3df:  add    $0xc,%eax
086af086 +0x3e2:  mov    %ecx,&g_SPremiumInfo+0x8(,%eax,8)
086af08d +0x3e9:  mov    -0x34(%ebp),%edx
086af090 +0x3ec:  mov    -0x2c(%ebp),%ebx
086af093 +0x3ef:  mov    -0x34(%ebp),%ecx
086af096 +0x3f2:  mov    -0x2c(%ebp),%eax
086af099 +0x3f5:  imul   $0x26,%ecx,%ecx
086af09c +0x3f8:  lea    (%ecx,%eax,1),%eax
086af09f +0x3fb:  add    $0xc,%eax
086af0a2 +0x3fe:  mov    -0x7e1c(%ebp,%eax,8),%ecx
086af0a9 +0x405:  mov    %edx,%eax
086af0ab +0x407:  shl    $0x3,%eax
086af0ae +0x40a:  add    %edx,%eax
086af0b0 +0x40c:  shl    $0x2,%eax
086af0b3 +0x40f:  add    %ebx,%eax
086af0b5 +0x411:  add    $0xc,%eax
086af0b8 +0x414:  mov    %ecx,&g_SPremiumInfo+0xc(,%eax,8)
086af0bf +0x41b:  addl   $0x1,-0x2c(%ebp)
086af0c3 +0x41f:  cmpl   $0x4,-0x2c(%ebp)
086af0c7 +0x423:  setle  %al
086af0ca +0x426:  test   %al,%al
086af0cc +0x428:  jne    086af05b <+0x3b7>
086af0ce +0x42a:  mov    -0x34(%ebp),%edx
086af0d1 +0x42d:  mov    -0x34(%ebp),%eax
086af0d4 +0x430:  imul   $0x130,%eax,%eax
086af0da +0x436:  lea    -0x18(%ebp),%ecx
086af0dd +0x439:  lea    (%ecx,%eax,1),%eax
086af0e0 +0x43c:  sub    $0x7d80,%eax
086af0e5 +0x441:  mov    (%eax),%ecx
086af0e7 +0x443:  mov    %edx,%eax
086af0e9 +0x445:  shl    $0x3,%eax
086af0ec +0x448:  add    %edx,%eax
086af0ee +0x44a:  shl    $0x5,%eax
086af0f1 +0x44d:  mov    %ecx,&g_SPremiumInfo+0x90(%eax)
086af0f7 +0x453:  movl   $0x0,-0x28(%ebp)
086af0fe +0x45a:  jmp    086af168 <+0x4c4>
086af100 +0x45c:  mov    -0x34(%ebp),%edx
086af103 +0x45f:  mov    -0x28(%ebp),%ebx
086af106 +0x462:  mov    -0x34(%ebp),%ecx
086af109 +0x465:  mov    -0x28(%ebp),%eax
086af10c +0x468:  imul   $0x26,%ecx,%ecx
086af10f +0x46b:  lea    (%ecx,%eax,1),%eax
086af112 +0x46e:  add    $0x12,%eax
086af115 +0x471:  mov    -0x7e24(%ebp,%eax,8),%ecx
086af11c +0x478:  mov    %edx,%eax
086af11e +0x47a:  shl    $0x3,%eax
086af121 +0x47d:  add    %edx,%eax
086af123 +0x47f:  shl    $0x2,%eax
086af126 +0x482:  add    %ebx,%eax
086af128 +0x484:  add    $0x12,%eax
086af12b +0x487:  mov    %ecx,&g_SPremiumInfo+0x4(,%eax,8)
086af132 +0x48e:  mov    -0x34(%ebp),%edx
086af135 +0x491:  mov    -0x28(%ebp),%ebx
086af138 +0x494:  mov    -0x34(%ebp),%ecx
086af13b +0x497:  mov    -0x28(%ebp),%eax
086af13e +0x49a:  imul   $0x26,%ecx,%ecx
086af141 +0x49d:  lea    (%ecx,%eax,1),%eax
086af144 +0x4a0:  add    $0x12,%eax
086af147 +0x4a3:  mov    -0x7e20(%ebp,%eax,8),%ecx
086af14e +0x4aa:  mov    %edx,%eax
086af150 +0x4ac:  shl    $0x3,%eax
086af153 +0x4af:  add    %edx,%eax
086af155 +0x4b1:  shl    $0x2,%eax
086af158 +0x4b4:  add    %ebx,%eax
086af15a +0x4b6:  add    $0x12,%eax
086af15d +0x4b9:  mov    %ecx,&g_SPremiumInfo+0x8(,%eax,8)
086af164 +0x4c0:  addl   $0x1,-0x28(%ebp)
086af168 +0x4c4:  cmpl   $0x2,-0x28(%ebp)
086af16c +0x4c8:  setle  %al
086af16f +0x4cb:  test   %al,%al
086af171 +0x4cd:  jne    086af100 <+0x45c>
086af173 +0x4cf:  movl   $0x0,-0x24(%ebp)
086af17a +0x4d6:  jmp    086af1b2 <+0x50e>
086af17c +0x4d8:  mov    -0x34(%ebp),%edx
086af17f +0x4db:  mov    -0x24(%ebp),%ebx
086af182 +0x4de:  mov    -0x34(%ebp),%ecx
086af185 +0x4e1:  mov    -0x24(%ebp),%eax
086af188 +0x4e4:  imul   $0x4c,%ecx,%ecx
086af18b +0x4e7:  lea    (%ecx,%eax,1),%eax
086af18e +0x4ea:  add    $0x28,%eax
086af191 +0x4ed:  mov    -0x7e1c(%ebp,%eax,4),%ecx
086af198 +0x4f4:  mov    %edx,%eax
086af19a +0x4f6:  shl    $0x3,%eax
086af19d +0x4f9:  add    %edx,%eax
086af19f +0x4fb:  shl    $0x3,%eax
086af1a2 +0x4fe:  add    %ebx,%eax
086af1a4 +0x500:  add    $0x28,%eax
086af1a7 +0x503:  mov    %ecx,&g_SPremiumInfo+0xc(,%eax,4)
086af1ae +0x50a:  addl   $0x1,-0x24(%ebp)
086af1b2 +0x50e:  cmpl   $0x6,-0x24(%ebp)
086af1b6 +0x512:  setle  %al
086af1b9 +0x515:  test   %al,%al
086af1bb +0x517:  jne    086af17c <+0x4d8>
086af1bd +0x519:  mov    -0x34(%ebp),%edx
086af1c0 +0x51c:  mov    -0x34(%ebp),%eax
086af1c3 +0x51f:  imul   $0x130,%eax,%eax
086af1c9 +0x525:  lea    -0x18(%ebp),%ecx
086af1cc +0x528:  lea    (%ecx,%eax,1),%eax
086af1cf +0x52b:  sub    $0x7d48,%eax
086af1d4 +0x530:  mov    (%eax),%ecx
086af1d6 +0x532:  mov    %edx,%eax
086af1d8 +0x534:  shl    $0x3,%eax
086af1db +0x537:  add    %edx,%eax
086af1dd +0x539:  shl    $0x5,%eax
086af1e0 +0x53c:  mov    %ecx,&g_SPremiumInfo+0xc8(%eax)
086af1e6 +0x542:  mov    -0x34(%ebp),%edx
086af1e9 +0x545:  mov    -0x34(%ebp),%eax
086af1ec +0x548:  imul   $0x130,%eax,%eax
086af1f2 +0x54e:  lea    -0x18(%ebp),%ecx
086af1f5 +0x551:  lea    (%ecx,%eax,1),%eax
086af1f8 +0x554:  sub    $0x7d44,%eax
086af1fd +0x559:  mov    (%eax),%ecx
086af1ff +0x55b:  mov    %edx,%eax
086af201 +0x55d:  shl    $0x3,%eax
086af204 +0x560:  add    %edx,%eax
086af206 +0x562:  shl    $0x5,%eax
086af209 +0x565:  mov    %ecx,&g_SPremiumInfo+0xcc(%eax)
086af20f +0x56b:  mov    -0x34(%ebp),%edx
086af212 +0x56e:  mov    -0x34(%ebp),%eax
086af215 +0x571:  imul   $0x130,%eax,%eax
086af21b +0x577:  lea    -0x18(%ebp),%ecx
086af21e +0x57a:  lea    (%ecx,%eax,1),%eax
086af221 +0x57d:  sub    $0x7d50,%eax
086af226 +0x582:  movzwl 0x10(%eax),%ecx
086af22a +0x586:  mov    %edx,%eax
086af22c +0x588:  shl    $0x3,%eax
086af22f +0x58b:  add    %edx,%eax
086af231 +0x58d:  shl    $0x5,%eax
086af234 +0x590:  mov    %cx,&g_SPremiumInfo+0xd0(%eax)
086af23b +0x597:  mov    -0x34(%ebp),%edx
086af23e +0x59a:  mov    -0x34(%ebp),%eax
086af241 +0x59d:  imul   $0x130,%eax,%eax
086af247 +0x5a3:  lea    -0x18(%ebp),%ecx
086af24a +0x5a6:  lea    (%ecx,%eax,1),%eax
086af24d +0x5a9:  sub    $0x7d50,%eax
086af252 +0x5ae:  movzwl 0x12(%eax),%ecx
086af256 +0x5b2:  mov    %edx,%eax
086af258 +0x5b4:  shl    $0x3,%eax
086af25b +0x5b7:  add    %edx,%eax
086af25d +0x5b9:  shl    $0x5,%eax
086af260 +0x5bc:  mov    %cx,&g_SPremiumInfo+0xd2(%eax)
086af267 +0x5c3:  mov    -0x34(%ebp),%edx
086af26a +0x5c6:  mov    -0x34(%ebp),%eax
086af26d +0x5c9:  imul   $0x130,%eax,%eax
086af273 +0x5cf:  lea    -0x18(%ebp),%ecx
086af276 +0x5d2:  lea    (%ecx,%eax,1),%eax
086af279 +0x5d5:  sub    $0x7d50,%eax
086af27e +0x5da:  movzwl 0x14(%eax),%ecx
086af282 +0x5de:  mov    %edx,%eax
086af284 +0x5e0:  shl    $0x3,%eax
086af287 +0x5e3:  add    %edx,%eax
086af289 +0x5e5:  shl    $0x5,%eax
086af28c +0x5e8:  mov    %cx,&g_SPremiumInfo+0xd4(%eax)
086af293 +0x5ef:  mov    -0x34(%ebp),%edx
086af296 +0x5f2:  mov    -0x34(%ebp),%eax
086af299 +0x5f5:  imul   $0x130,%eax,%eax
086af29f +0x5fb:  lea    -0x18(%ebp),%ecx
086af2a2 +0x5fe:  lea    (%ecx,%eax,1),%eax
086af2a5 +0x601:  sub    $0x7d50,%eax
086af2aa +0x606:  movzwl 0x16(%eax),%ecx
086af2ae +0x60a:  mov    %edx,%eax
086af2b0 +0x60c:  shl    $0x3,%eax
086af2b3 +0x60f:  add    %edx,%eax
086af2b5 +0x611:  shl    $0x5,%eax
086af2b8 +0x614:  mov    %cx,&g_SPremiumInfo+0xd6(%eax)
086af2bf +0x61b:  movl   $0x0,-0x20(%ebp)
086af2c6 +0x622:  jmp    086af303 <+0x65f>
086af2c8 +0x624:  mov    -0x34(%ebp),%edx
086af2cb +0x627:  mov    -0x20(%ebp),%ebx
086af2ce +0x62a:  mov    -0x34(%ebp),%ecx
086af2d1 +0x62d:  mov    -0x20(%ebp),%eax
086af2d4 +0x630:  imul   $0x98,%ecx,%ecx
086af2da +0x636:  lea    (%ecx,%eax,1),%eax
086af2dd +0x639:  add    $0x68,%eax
086af2e0 +0x63c:  movzwl -0x7e20(%ebp,%eax,2),%ecx
086af2e8 +0x644:  mov    %edx,%eax
086af2ea +0x646:  shl    $0x3,%eax
086af2ed +0x649:  add    %edx,%eax
086af2ef +0x64b:  shl    $0x4,%eax
086af2f2 +0x64e:  add    %ebx,%eax
086af2f4 +0x650:  add    $0x68,%eax
086af2f7 +0x653:  mov    %cx,&g_SPremiumInfo+0x8(%eax,%eax,1)
086af2ff +0x65b:  addl   $0x1,-0x20(%ebp)
086af303 +0x65f:  cmpl   $0x3,-0x20(%ebp)
086af307 +0x663:  setle  %al
086af30a +0x666:  test   %al,%al
086af30c +0x668:  jne    086af2c8 <+0x624>
086af30e +0x66a:  movl   $0x0,-0x1c(%ebp)
086af315 +0x671:  jmp    086af352 <+0x6ae>
086af317 +0x673:  mov    -0x34(%ebp),%edx
086af31a +0x676:  mov    -0x1c(%ebp),%ebx
086af31d +0x679:  mov    -0x34(%ebp),%ecx
086af320 +0x67c:  mov    -0x1c(%ebp),%eax
086af323 +0x67f:  imul   $0x98,%ecx,%ecx
086af329 +0x685:  lea    (%ecx,%eax,1),%eax
086af32c +0x688:  add    $0x68,%eax
086af32f +0x68b:  movzwl -0x7e18(%ebp,%eax,2),%ecx
086af337 +0x693:  mov    %edx,%eax
086af339 +0x695:  shl    $0x3,%eax
086af33c +0x698:  add    %edx,%eax
086af33e +0x69a:  shl    $0x4,%eax
086af341 +0x69d:  add    %ebx,%eax
086af343 +0x69f:  add    $0x68,%eax
086af346 +0x6a2:  mov    %cx,&g_SPremiumInfo+0x10(%eax,%eax,1)
086af34e +0x6aa:  addl   $0x1,-0x1c(%ebp)
086af352 +0x6ae:  cmpl   $0x10,-0x1c(%ebp)
086af356 +0x6b2:  setle  %al
086af359 +0x6b5:  test   %al,%al
086af35b +0x6b7:  jne    086af317 <+0x673>
086af35d +0x6b9:  mov    -0x34(%ebp),%edx
086af360 +0x6bc:  mov    -0x34(%ebp),%eax
086af363 +0x6bf:  imul   $0x130,%eax,%eax
086af369 +0x6c5:  lea    -0x18(%ebp),%ecx
086af36c +0x6c8:  lea    (%ecx,%eax,1),%eax
086af36f +0x6cb:  sub    $0x7d0c,%eax
086af374 +0x6d0:  mov    (%eax),%ecx
086af376 +0x6d2:  mov    %edx,%eax
086af378 +0x6d4:  shl    $0x3,%eax
086af37b +0x6d7:  add    %edx,%eax
086af37d +0x6d9:  shl    $0x5,%eax
086af380 +0x6dc:  mov    %ecx,&g_SPremiumInfo+0x102(%eax)
086af386 +0x6e2:  mov    -0x34(%ebp),%edx
086af389 +0x6e5:  mov    -0x34(%ebp),%eax
086af38c +0x6e8:  imul   $0x130,%eax,%eax
086af392 +0x6ee:  lea    -0x18(%ebp),%ecx
086af395 +0x6f1:  lea    (%ecx,%eax,1),%eax
086af398 +0x6f4:  sub    $0x7d10,%eax
086af39d +0x6f9:  movzwl 0x8(%eax),%ecx
086af3a1 +0x6fd:  mov    %edx,%eax
086af3a3 +0x6ff:  shl    $0x3,%eax
086af3a6 +0x702:  add    %edx,%eax
086af3a8 +0x704:  shl    $0x5,%eax
086af3ab +0x707:  mov    %cx,&g_SPremiumInfo+0x106(%eax)
086af3b2 +0x70e:  mov    -0x34(%ebp),%edx
086af3b5 +0x711:  mov    -0x34(%ebp),%eax
086af3b8 +0x714:  imul   $0x130,%eax,%eax
086af3be +0x71a:  lea    -0x18(%ebp),%ecx
086af3c1 +0x71d:  lea    (%ecx,%eax,1),%eax
086af3c4 +0x720:  sub    $0x7d10,%eax
086af3c9 +0x725:  movzwl 0xa(%eax),%ecx
086af3cd +0x729:  mov    %edx,%eax
086af3cf +0x72b:  shl    $0x3,%eax
086af3d2 +0x72e:  add    %edx,%eax
086af3d4 +0x730:  shl    $0x5,%eax
086af3d7 +0x733:  mov    %cx,&g_SPremiumInfo+0x108(%eax)
086af3de +0x73a:  mov    -0x34(%ebp),%edx
086af3e1 +0x73d:  mov    -0x34(%ebp),%eax
086af3e4 +0x740:  imul   $0x130,%eax,%eax
086af3ea +0x746:  lea    -0x18(%ebp),%ecx
086af3ed +0x749:  lea    (%ecx,%eax,1),%eax
086af3f0 +0x74c:  sub    $0x7d10,%eax
086af3f5 +0x751:  movzwl 0xc(%eax),%eax
086af3f9 +0x755:  movzwl %ax,%ecx
086af3fc +0x758:  mov    %edx,%eax
086af3fe +0x75a:  shl    $0x3,%eax
086af401 +0x75d:  add    %edx,%eax
086af403 +0x75f:  shl    $0x5,%eax
086af406 +0x762:  mov    %ecx,&g_SPremiumInfo+0x10a(%eax)
086af40c +0x768:  mov    -0x34(%ebp),%edx
086af40f +0x76b:  mov    -0x34(%ebp),%eax
086af412 +0x76e:  imul   $0x130,%eax,%eax
086af418 +0x774:  lea    -0x18(%ebp),%ecx
086af41b +0x777:  lea    (%ecx,%eax,1),%eax
086af41e +0x77a:  sub    $0x7d10,%eax
086af423 +0x77f:  movzwl 0xe(%eax),%ecx
086af427 +0x783:  mov    %edx,%eax
086af429 +0x785:  shl    $0x3,%eax
086af42c +0x788:  add    %edx,%eax
086af42e +0x78a:  shl    $0x5,%eax
086af431 +0x78d:  mov    %cx,&g_SPremiumInfo+0x10e(%eax)
086af438 +0x794:  mov    -0x34(%ebp),%edx
086af43b +0x797:  mov    -0x34(%ebp),%eax
086af43e +0x79a:  imul   $0x130,%eax,%eax
086af444 +0x7a0:  lea    -0x18(%ebp),%ecx
086af447 +0x7a3:  lea    (%ecx,%eax,1),%eax
086af44a +0x7a6:  sub    $0x7d10,%eax
086af44f +0x7ab:  movzwl 0x10(%eax),%ecx
086af453 +0x7af:  mov    %edx,%eax
086af455 +0x7b1:  shl    $0x3,%eax
086af458 +0x7b4:  add    %edx,%eax
086af45a +0x7b6:  shl    $0x5,%eax
086af45d +0x7b9:  mov    %cx,&g_SPremiumInfo+0x110(%eax)
086af464 +0x7c0:  mov    -0x34(%ebp),%edx
086af467 +0x7c3:  mov    -0x34(%ebp),%eax
086af46a +0x7c6:  imul   $0x130,%eax,%eax
086af470 +0x7cc:  lea    -0x18(%ebp),%ecx
086af473 +0x7cf:  lea    (%ecx,%eax,1),%eax
086af476 +0x7d2:  sub    $0x7d10,%eax
086af47b +0x7d7:  movzwl 0x12(%eax),%ecx
086af47f +0x7db:  mov    %edx,%eax
086af481 +0x7dd:  shl    $0x3,%eax
086af484 +0x7e0:  add    %edx,%eax
086af486 +0x7e2:  shl    $0x5,%eax
086af489 +0x7e5:  mov    %cx,&g_SPremiumInfo+0x112(%eax)
086af490 +0x7ec:  mov    -0x34(%ebp),%edx
086af493 +0x7ef:  mov    -0x34(%ebp),%eax
086af496 +0x7f2:  imul   $0x130,%eax,%eax
086af49c +0x7f8:  lea    -0x18(%ebp),%ecx
086af49f +0x7fb:  lea    (%ecx,%eax,1),%eax
086af4a2 +0x7fe:  sub    $0x7d10,%eax
086af4a7 +0x803:  movzwl 0x14(%eax),%ecx
086af4ab +0x807:  mov    %edx,%eax
086af4ad +0x809:  shl    $0x3,%eax
086af4b0 +0x80c:  add    %edx,%eax
086af4b2 +0x80e:  shl    $0x5,%eax
086af4b5 +0x811:  mov    %cx,&g_SPremiumInfo+0x114(%eax)
086af4bc +0x818:  mov    -0x34(%ebp),%edx
086af4bf +0x81b:  mov    -0x34(%ebp),%eax
086af4c2 +0x81e:  imul   $0x130,%eax,%eax
086af4c8 +0x824:  lea    -0x18(%ebp),%ecx
086af4cb +0x827:  lea    (%ecx,%eax,1),%eax
086af4ce +0x82a:  sub    $0x7cf8,%eax
086af4d3 +0x82f:  mov    (%eax),%ecx
086af4d5 +0x831:  mov    %edx,%eax
086af4d7 +0x833:  shl    $0x3,%eax
086af4da +0x836:  add    %edx,%eax
086af4dc +0x838:  shl    $0x5,%eax
086af4df +0x83b:  mov    %ecx,&g_SPremiumInfo+0x116(%eax)
086af4e5 +0x841:  mov    -0x34(%ebp),%edx
086af4e8 +0x844:  lea    -0x7e28(%ebp),%eax
086af4ee +0x84a:  imul   $0x130,%edx,%edx
086af4f4 +0x850:  add    $0x110,%edx
086af4fa +0x856:  add    %edx,%eax
086af4fc +0x858:  lea    0xc(%eax),%ecx
086af4ff +0x85b:  mov    -0x34(%ebp),%edx
086af502 +0x85e:  mov    %edx,%eax
086af504 +0x860:  shl    $0x3,%eax
086af507 +0x863:  add    %edx,%eax
086af509 +0x865:  shl    $0x5,%eax
086af50c +0x868:  add    $0x110,%eax
086af511 +0x86d:  add    $&g_SPremiumInfo,%eax
086af516 +0x872:  add    $0xc,%eax
086af519 +0x875:  mov    %ecx,0x4(%esp)
086af51d +0x879:  mov    %eax,(%esp)
086af520 +0x87c:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
086af525 +0x881:  lea    -0x40(%ebp),%eax
086af528 +0x884:  mov    %eax,(%esp)
086af52b +0x887:  call   086b0826 <_GLOBAL__I_g_SPremiumInfo+0x1c>  ; global constructors keyed to g_SPremiumInfo+0x1c
086af530 +0x88c:  mov    -0x34(%ebp),%eax
086af533 +0x88f:  mov    %eax,-0x40(%ebp)
086af536 +0x892:  mov    -0x34(%ebp),%eax
086af539 +0x895:  imul   $0x130,%eax,%eax
086af53f +0x89b:  lea    -0x18(%ebp),%edx
086af542 +0x89e:  lea    (%edx,%eax,1),%eax
086af545 +0x8a1:  sub    $0x7cf0,%eax
086af54a +0x8a6:  mov    (%eax),%eax
086af54c +0x8a8:  mov    %eax,-0x38(%ebp)
086af54f +0x8ab:  mov    -0x34(%ebp),%edx
086af552 +0x8ae:  lea    -0x7e28(%ebp),%eax
086af558 +0x8b4:  imul   $0x130,%edx,%edx
086af55e +0x8ba:  add    $0x120,%edx
086af564 +0x8c0:  add    %edx,%eax
086af566 +0x8c2:  add    $0x4,%eax
086af569 +0x8c5:  mov    %eax,(%esp)
086af56c +0x8c8:  call   086b0a60 <_GLOBAL__I_g_SPremiumInfo+0x256>  ; global constructors keyed to g_SPremiumInfo+0x256
086af571 +0x8cd:  test   %eax,%eax
086af573 +0x8cf:  setne  %al
086af576 +0x8d2:  test   %al,%al
086af578 +0x8d4:  je     086af651 <+0x9ad>
086af57e +0x8da:  mov    -0x34(%ebp),%edx
086af581 +0x8dd:  lea    -0x7e28(%ebp),%eax
086af587 +0x8e3:  imul   $0x130,%edx,%edx
086af58d +0x8e9:  add    $0x120,%edx
086af593 +0x8ef:  add    %edx,%eax
086af595 +0x8f1:  lea    0x4(%eax),%edx
086af598 +0x8f4:  lea    -0x44(%ebp),%eax
086af59b +0x8f7:  mov    %edx,0x4(%esp)
086af59f +0x8fb:  mov    %eax,(%esp)
086af5a2 +0x8fe:  call   086b0a7c <_GLOBAL__I_g_SPremiumInfo+0x272>  ; global constructors keyed to g_SPremiumInfo+0x272
086af5a7 +0x903:  sub    $0x4,%esp
086af5aa +0x906:  mov    -0x34(%ebp),%edx
086af5ad +0x909:  lea    -0x7e28(%ebp),%eax
086af5b3 +0x90f:  imul   $0x130,%edx,%edx
086af5b9 +0x915:  add    $0x120,%edx
086af5bf +0x91b:  add    %edx,%eax
086af5c1 +0x91d:  lea    0x4(%eax),%edx
086af5c4 +0x920:  lea    -0x48(%ebp),%eax
086af5c7 +0x923:  mov    %edx,0x4(%esp)
086af5cb +0x927:  mov    %eax,(%esp)
086af5ce +0x92a:  call   086b0aa0 <_GLOBAL__I_g_SPremiumInfo+0x296>  ; global constructors keyed to g_SPremiumInfo+0x296
086af5d3 +0x92f:  sub    $0x4,%esp
086af5d6 +0x932:  jmp    086af639 <+0x995>
086af5d8 +0x934:  lea    -0x44(%ebp),%eax
086af5db +0x937:  mov    %eax,(%esp)
086af5de +0x93a:  call   086b0b08 <_GLOBAL__I_g_SPremiumInfo+0x2fe>  ; global constructors keyed to g_SPremiumInfo+0x2fe
086af5e3 +0x93f:  movzbl (%eax),%eax
086af5e6 +0x942:  mov    %al,-0x3c(%ebp)
086af5e9 +0x945:  lea    -0x44(%ebp),%eax
086af5ec +0x948:  mov    %eax,(%esp)
086af5ef +0x94b:  call   086b0b08 <_GLOBAL__I_g_SPremiumInfo+0x2fe>  ; global constructors keyed to g_SPremiumInfo+0x2fe
086af5f4 +0x950:  movzbl 0x1(%eax),%eax
086af5f8 +0x954:  test   %al,%al
086af5fa +0x956:  setne  %al
086af5fd +0x959:  mov    %al,-0x3b(%ebp)
086af600 +0x95c:  lea    -0x44(%ebp),%eax
086af603 +0x95f:  mov    %eax,(%esp)
086af606 +0x962:  call   086b0b08 <_GLOBAL__I_g_SPremiumInfo+0x2fe>  ; global constructors keyed to g_SPremiumInfo+0x2fe
086af60b +0x967:  mov    0x4(%eax),%eax
086af60e +0x96a:  lea    -0x40(%ebp),%edx
086af611 +0x96d:  mov    %edx,0x4(%esp)
086af615 +0x971:  mov    %eax,(%esp)
086af618 +0x974:  call   086af70a <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData>  ; WongWork::CUserPremium::SetPremiumItemData(unsigned long, STPremiumItemData const&)
086af61d +0x979:  xor    $0x1,%eax
086af620 +0x97c:  test   %al,%al
086af622 +0x97e:  je     086af62e <+0x98a>
086af624 +0x980:  mov    $0x1bc,%ebx
086af629 +0x985:  jmp    086af6d7 <+0xa33>
086af62e +0x98a:  lea    -0x44(%ebp),%eax
086af631 +0x98d:  mov    %eax,(%esp)
086af634 +0x990:  call   086b0af2 <_GLOBAL__I_g_SPremiumInfo+0x2e8>  ; global constructors keyed to g_SPremiumInfo+0x2e8
086af639 +0x995:  lea    -0x48(%ebp),%eax
086af63c +0x998:  mov    %eax,0x4(%esp)
086af640 +0x99c:  lea    -0x44(%ebp),%eax
086af643 +0x99f:  mov    %eax,(%esp)
086af646 +0x9a2:  call   086b0ac6 <_GLOBAL__I_g_SPremiumInfo+0x2bc>  ; global constructors keyed to g_SPremiumInfo+0x2bc
086af64b +0x9a7:  test   %al,%al
086af64d +0x9a9:  jne    086af5d8 <+0x934>
086af64f +0x9ab:  jmp    086af687 <+0x9e3>
086af651 +0x9ad:  mov    -0x34(%ebp),%edx
086af654 +0x9b0:  mov    %edx,%eax
086af656 +0x9b2:  shl    $0x3,%eax
086af659 +0x9b5:  add    %edx,%eax
086af65b +0x9b7:  shl    $0x5,%eax
086af65e +0x9ba:  mov    &g_SPremiumInfo+0x4(%eax),%eax
086af664 +0x9c0:  mov    %al,-0x3c(%ebp)
086af667 +0x9c3:  mov    -0x38(%ebp),%eax
086af66a +0x9c6:  lea    -0x40(%ebp),%edx
086af66d +0x9c9:  mov    %edx,0x4(%esp)
086af671 +0x9cd:  mov    %eax,(%esp)
086af674 +0x9d0:  call   086af70a <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData>  ; WongWork::CUserPremium::SetPremiumItemData(unsigned long, STPremiumItemData const&)
086af679 +0x9d5:  xor    $0x1,%eax
086af67c +0x9d8:  test   %al,%al
086af67e +0x9da:  je     086af687 <+0x9e3>
086af680 +0x9dc:  mov    $0x1c4,%ebx
086af685 +0x9e1:  jmp    086af6d7 <+0xa33>
086af687 +0x9e3:  addl   $0x1,-0x34(%ebp)
086af68b +0x9e7:  cmpl   $0x69,-0x34(%ebp)
086af68f +0x9eb:  setle  %al
086af692 +0x9ee:  test   %al,%al
086af694 +0x9f0:  jne    086aed60 <+0xbc>
086af69a +0x9f6:  mov    $0x0,%ebx
086af69f +0x9fb:  jmp    086af6d7 <+0xa33>
086af6a1 +0x9fd:  mov    %edx,%esi
086af6a3 +0x9ff:  mov    %eax,%edi
086af6a5 +0xa01:  lea    -0x7e28(%ebp),%eax
086af6ab +0xa07:  lea    0x7de0(%eax),%ebx
086af6b1 +0xa0d:  lea    -0x7e28(%ebp),%eax
086af6b7 +0xa13:  cmp    %eax,%ebx
086af6b9 +0xa15:  je     086af6cb <+0xa27>
086af6bb +0xa17:  sub    $0x130,%ebx
086af6c1 +0xa1d:  mov    %ebx,(%esp)
086af6c4 +0xa20:  call   086b0910 <_GLOBAL__I_g_SPremiumInfo+0x106>  ; global constructors keyed to g_SPremiumInfo+0x106
086af6c9 +0xa25:  jmp    086af6b1 <+0xa0d>
086af6cb +0xa27:  mov    %edi,%eax
086af6cd +0xa29:  mov    %esi,%edx
086af6cf +0xa2b:  mov    %eax,(%esp)
086af6d2 +0xa2e:  call   08ae3750 <_Unwind_Resume>
086af6d7 +0xa33:  lea    -0x7e28(%ebp),%eax
086af6dd +0xa39:  lea    0x7de0(%eax),%esi
086af6e3 +0xa3f:  lea    -0x7e28(%ebp),%eax
086af6e9 +0xa45:  cmp    %eax,%esi
086af6eb +0xa47:  je     086af6fd <+0xa59>
086af6ed +0xa49:  sub    $0x130,%esi
086af6f3 +0xa4f:  mov    %esi,(%esp)
086af6f6 +0xa52:  call   086b0910 <_GLOBAL__I_g_SPremiumInfo+0x106>  ; global constructors keyed to g_SPremiumInfo+0x106
086af6fb +0xa57:  jmp    086af6e3 <+0xa3f>
086af6fd +0xa59:  mov    %ebx,%eax
086af6ff +0xa5b:  lea    -0xc(%ebp),%esp
086af702 +0xa5e:  add    $0x0,%esp
086af705 +0xa61:  pop    %ebx
086af706 +0xa62:  pop    %esi
086af707 +0xa63:  pop    %edi
086af708 +0xa64:  pop    %ebp
086af709 +0xa65:  ret
```

## 反编译 C

```c
// WongWork::CUserPremium::LoadPremiumInfo @ 0x86aeca4

/* WongWork::CUserPremium::LoadPremiumInfo(char const*) */

undefined4 WongWork::CUserPremium::LoadPremiumInfo(char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  stPremiumTable_t *psVar6;
  stPremiumTable_t local_7e2c [4];
  undefined4 uStack_7e28;
  undefined4 auStack_7e24 [2];
  undefined4 auStack_7e1c [9];
  undefined2 auStack_7df8 [2];
  undefined4 auStack_7df4 [2];
  undefined1 auStack_7dec [2];
  undefined2 auStack_7dea [3];
  undefined4 auStack_7de4 [2];
  vector avStack_7ddc [12];
  undefined4 uStack_7dd0;
  undefined1 auStack_7dcc [4];
  undefined4 auStack_7dc8 [11];
  undefined4 auStack_7d9c [14];
  undefined4 auStack_7d64 [2];
  undefined2 auStack_7d5c [26];
  undefined4 uStack_7d28;
  ushort auStack_7d24 [8];
  undefined4 uStack_7d14;
  string asStack_7d10 [4];
  ulong uStack_7d0c;
  vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
  avStack_7d08 [31932];
  stPremiumTable_t local_4c [4];
  __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
  local_48 [4];
  int local_44;
  undefined1 local_40;
  undefined1 local_3f;
  ulong local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  psVar6 = local_7e2c;
  for (iVar5 = 0x69; iVar5 != -1; iVar5 = iVar5 + -1) {
                    /* try { // try from 086aecc2 to 086aecc6 has its CatchHandler @ 086aecdc */
    stPremiumTable_t::stPremiumTable_t(psVar6);
    psVar6 = psVar6 + 0x130;
  }
                    /* try { // try from 086aed3c to 086af678 has its CatchHandler @ 086af6a1 */
  iVar5 = importPremiumList(param_1,local_7e2c,(vector *)g_vecPremiumOverEquipableInfo,
                            (vector *)g_vecPremiumReturnItemInfo);
  if (iVar5 == 0) {
    for (local_38 = 0; local_38 < 0x6a; local_38 = local_38 + 1) {
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120) =
           *(undefined4 *)(local_7e2c + local_38 * 0x130);
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 4) = (&uStack_7e28)[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 8) = auStack_7e24[local_38 * 0x4c];
      for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_34) * 8 + 0xc) =
             auStack_7e24[(local_38 * 0x26 + local_34) * 2 + 1];
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_34) * 8 + 0x10) =
             auStack_7e1c[(local_38 * 0x26 + local_34) * 2];
      }
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0x34) = auStack_7df8[local_38 * 0x98];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x38) = auStack_7df4[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x3c) = auStack_7df4[local_38 * 0x4c + 1];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0x58) =
           *(undefined2 *)(auStack_7dec + local_38 * 0x130 + 2);
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0x5a) =
           *(undefined2 *)(auStack_7dec + local_38 * 0x130 + 4);
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x5c) = (&uStack_7dd0)[local_38 * 0x4c];
      g_SPremiumInfo[local_38 * 0x120 + 0x40] = auStack_7dec[local_38 * 0x130];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x44) = auStack_7de4[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x48) = auStack_7de4[local_38 * 0x4c + 1];
      std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                 (g_SPremiumInfo + local_38 * 0x120 + 0x4c),avStack_7ddc + local_38 * 0x130);
      g_SPremiumInfo[local_38 * 0x120 + 0x60] = auStack_7dcc[local_38 * 0x130];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 100) = auStack_7dc8[local_38 * 0x4c];
      for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_30 + 0xc) * 8 + 8) =
             auStack_7e24[(local_38 * 0x26 + local_30 + 0xc) * 2];
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_30 + 0xc) * 8 + 0xc) =
             auStack_7e24[(local_38 * 0x26 + local_30 + 0xc) * 2 + 1];
      }
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x90) = auStack_7d9c[local_38 * 0x4c];
      for (local_2c = 0; local_2c < 3; local_2c = local_2c + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_2c + 0x12) * 8 + 4) =
             (&uStack_7e28)[(local_38 * 0x26 + local_2c + 0x12) * 2];
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_2c + 0x12) * 8 + 8) =
             auStack_7e24[(local_38 * 0x26 + local_2c + 0x12) * 2];
      }
      for (local_28 = 0; local_28 < 7; local_28 = local_28 + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x48 + local_28 + 0x28) * 4 + 0xc) =
             auStack_7e24[local_38 * 0x4c + local_28 + 0x29];
      }
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 200) = auStack_7d64[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0xcc) = auStack_7d64[local_38 * 0x4c + 1];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd0) = auStack_7d5c[local_38 * 0x98];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd2) = auStack_7d5c[local_38 * 0x98 + 1];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd4) = auStack_7d5c[local_38 * 0x98 + 2];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd6) = auStack_7d5c[local_38 * 0x98 + 3];
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        *(undefined2 *)(g_SPremiumInfo + (local_38 * 0x90 + local_24) * 2 + 0xd8) =
             *(undefined2 *)((int)auStack_7e24 + (local_38 * 0x98 + local_24 + 0x68) * 2);
      }
      for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
        *(undefined2 *)(g_SPremiumInfo + (local_38 * 0x90 + local_20) * 2 + 0xe0) =
             *(undefined2 *)((int)auStack_7e1c + (local_38 * 0x98 + local_20 + 0x68) * 2);
      }
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x102) = (&uStack_7d28)[local_38 * 0x4c];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x106) = auStack_7d24[local_38 * 0x98];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x108) = auStack_7d24[local_38 * 0x98 + 1];
      *(uint *)(g_SPremiumInfo + local_38 * 0x120 + 0x10a) = (uint)auStack_7d24[local_38 * 0x98 + 2]
      ;
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x10e) = auStack_7d24[local_38 * 0x98 + 3];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x110) = auStack_7d24[local_38 * 0x98 + 4];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x112) = auStack_7d24[local_38 * 0x98 + 5];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x114) = auStack_7d24[local_38 * 0x98 + 6];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x116) = (&uStack_7d14)[local_38 * 0x4c];
      std::string::operator=
                ((string *)(g_SPremiumInfo + local_38 * 0x120 + 0x11c),
                 asStack_7d10 + local_38 * 0x130);
      STPremiumItemData::STPremiumItemData((STPremiumItemData *)&local_44);
      local_44 = local_38;
      local_3c = (&uStack_7d0c)[local_38 * 0x4c];
      iVar5 = std::
              vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
              ::size(avStack_7d08 + local_38 * 0x130);
      if (iVar5 == 0) {
        local_40 = (undefined1)*(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 4);
        cVar1 = SetPremiumItemData(local_3c,(STPremiumItemData *)&local_44);
        if (cVar1 != '\x01') {
          uVar4 = 0x1c4;
          goto LAB_086af6d7;
        }
      }
      else {
        std::
        vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
        ::begin();
        std::
        vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
        ::end();
        while (bVar2 = __gnu_cxx::operator!=(local_48,local_4c), bVar2) {
          puVar3 = (undefined1 *)
                   __gnu_cxx::
                   __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
                   ::operator->(local_48);
          local_40 = *puVar3;
          iVar5 = __gnu_cxx::
                  __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
                  ::operator->(local_48);
          local_3f = *(char *)(iVar5 + 1) != '\0';
          iVar5 = __gnu_cxx::
                  __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
                  ::operator->(local_48);
          cVar1 = SetPremiumItemData(*(ulong *)(iVar5 + 4),(STPremiumItemData *)&local_44);
          if (cVar1 != '\x01') {
            uVar4 = 0x1bc;
            goto LAB_086af6d7;
          }
          __gnu_cxx::
          __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
          ::operator++(local_48);
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0x15c;
  }
LAB_086af6d7:
  psVar6 = local_4c;
  while (psVar6 != local_7e2c) {
    psVar6 = psVar6 + -0x130;
    stPremiumTable_t::~stPremiumTable_t(psVar6);
  }
  return uVar4;
}
```
