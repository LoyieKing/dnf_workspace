# WarRoom

`_GLOBAL__I__ZN7WarRoomC2Ev`

`global constructors keyed to WarRoom::WarRoom()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to WarRoom` | `0x086c0b07` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c0b07  _GLOBAL__I__ZN7WarRoomC2Ev
#           global constructors keyed to WarRoom::WarRoom()
# range [0x086c0b07, 0x086c11bb]
086c0b07 +0x000:  push   %ebp
086c0b08 +0x001:  mov    %esp,%ebp
086c0b0a +0x003:  sub    $0x18,%esp
086c0b0d +0x006:  movl   $0xffff,0x4(%esp)
086c0b15 +0x00e:  movl   $0x1,(%esp)
086c0b1c +0x015:  call   086c0ac7 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086c0b21 +0x01a:  leave
086c0b22 +0x01b:  ret
086c0b23 +0x01c:  nop
086c0b24 +0x01d:  push   %ebp
086c0b25 +0x01e:  mov    %esp,%ebp
086c0b27 +0x020:  push   %ebx
086c0b28 +0x021:  mov    0xc(%ebp),%eax
086c0b2b +0x024:  sub    $0x3f,%eax
086c0b2e +0x027:  mov    0x8(%ebp),%edx
086c0b31 +0x02a:  lea    0x58(%eax),%ecx
086c0b34 +0x02d:  mov    (%edx,%ecx,4),%edx
086c0b37 +0x030:  lea    0x1(%edx),%ebx
086c0b3a +0x033:  mov    0x8(%ebp),%edx
086c0b3d +0x036:  lea    0x58(%eax),%ecx
086c0b40 +0x039:  mov    %ebx,(%edx,%ecx,4)
086c0b43 +0x03c:  mov    0x8(%ebp),%edx
086c0b46 +0x03f:  add    $0x58,%eax
086c0b49 +0x042:  mov    (%edx,%eax,4),%eax
086c0b4c +0x045:  pop    %ebx
086c0b4d +0x046:  pop    %ebp
086c0b4e +0x047:  ret
086c0b4f +0x048:  nop
086c0b50 +0x049:  push   %ebp
086c0b51 +0x04a:  mov    %esp,%ebp
086c0b53 +0x04c:  sub    $0x4,%esp
086c0b56 +0x04f:  mov    0xc(%ebp),%eax
086c0b59 +0x052:  mov    %ax,-0x4(%ebp)
086c0b5d +0x056:  mov    0x8(%ebp),%eax
086c0b60 +0x059:  movzwl -0x4(%ebp),%edx
086c0b64 +0x05d:  mov    %dx,0x8d008(%eax)
086c0b6b +0x064:  leave
086c0b6c +0x065:  ret
086c0b6d +0x066:  nop
086c0b6e +0x067:  push   %ebp
086c0b6f +0x068:  mov    %esp,%ebp
086c0b71 +0x06a:  mov    0x8(%ebp),%eax
086c0b74 +0x06d:  movl   $0x0,0x8eb1c(%eax)
086c0b7e +0x077:  pop    %ebp
086c0b7f +0x078:  ret
086c0b80 +0x079:  push   %ebp
086c0b81 +0x07a:  mov    %esp,%ebp
086c0b83 +0x07c:  mov    0x8(%ebp),%eax
086c0b86 +0x07f:  mov    0x8eb1c(%eax),%eax
086c0b8c +0x085:  pop    %ebp
086c0b8d +0x086:  ret
086c0b8e +0x087:  push   %ebp
086c0b8f +0x088:  mov    %esp,%ebp
086c0b91 +0x08a:  sub    $0x18,%esp
086c0b94 +0x08d:  mov    0x8(%ebp),%eax
086c0b97 +0x090:  add    $0x8,%eax
086c0b9a +0x093:  mov    %eax,(%esp)
086c0b9d +0x096:  call   08151394 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xcc9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xcc9
086c0ba2 +0x09b:  leave
086c0ba3 +0x09c:  ret
086c0ba4 +0x09d:  push   %ebp
086c0ba5 +0x09e:  mov    %esp,%ebp
086c0ba7 +0x0a0:  sub    $0x18,%esp
086c0baa +0x0a3:  mov    0x8(%ebp),%eax
086c0bad +0x0a6:  add    $0x8,%eax
086c0bb0 +0x0a9:  mov    %eax,(%esp)
086c0bb3 +0x0ac:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
086c0bb8 +0x0b1:  leave
086c0bb9 +0x0b2:  ret
086c0bba +0x0b3:  push   %ebp
086c0bbb +0x0b4:  mov    %esp,%ebp
086c0bbd +0x0b6:  mov    0x8(%ebp),%eax
086c0bc0 +0x0b9:  mov    (%eax),%eax
086c0bc2 +0x0bb:  add    $0x10,%eax
086c0bc5 +0x0be:  pop    %ebp
086c0bc6 +0x0bf:  ret
086c0bc7 +0x0c0:  nop
086c0bc8 +0x0c1:  push   %ebp
086c0bc9 +0x0c2:  mov    %esp,%ebp
086c0bcb +0x0c4:  push   %ebx
086c0bcc +0x0c5:  sub    $0x14,%esp
086c0bcf +0x0c8:  mov    0x8(%ebp),%ebx
086c0bd2 +0x0cb:  mov    0xc(%ebp),%eax
086c0bd5 +0x0ce:  movl   $0x4,0x8(%esp)
086c0bdd +0x0d6:  mov    %eax,0x4(%esp)
086c0be1 +0x0da:  mov    %ebx,(%esp)
086c0be4 +0x0dd:  call   0807d880 <_init+0x178>
086c0be9 +0x0e2:  mov    0xc(%ebp),%eax
086c0bec +0x0e5:  mov    (%eax),%eax
086c0bee +0x0e7:  mov    %eax,(%esp)
086c0bf1 +0x0ea:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
086c0bf6 +0x0ef:  mov    0xc(%ebp),%edx
086c0bf9 +0x0f2:  mov    %eax,(%edx)
086c0bfb +0x0f4:  mov    %ebx,%eax
086c0bfd +0x0f6:  add    $0x14,%esp
086c0c00 +0x0f9:  pop    %ebx
086c0c01 +0x0fa:  pop    %ebp
086c0c02 +0x0fb:  ret    $0x4
086c0c05 +0x0fe:  nop
086c0c06 +0x0ff:  push   %ebp
086c0c07 +0x100:  mov    %esp,%ebp
086c0c09 +0x102:  push   %ebx
086c0c0a +0x103:  sub    $0x44,%esp
086c0c0d +0x106:  lea    -0x20(%ebp),%eax
086c0c10 +0x109:  mov    0xc(%ebp),%edx
086c0c13 +0x10c:  mov    %edx,0x8(%esp)
086c0c17 +0x110:  mov    0x8(%ebp),%edx
086c0c1a +0x113:  mov    %edx,0x4(%esp)
086c0c1e +0x117:  mov    %eax,(%esp)
086c0c21 +0x11a:  call   0853afc0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x124c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x124c
086c0c26 +0x11f:  sub    $0x4,%esp
086c0c29 +0x122:  lea    -0x1c(%ebp),%eax
086c0c2c +0x125:  mov    0x8(%ebp),%edx
086c0c2f +0x128:  mov    %edx,0x4(%esp)
086c0c33 +0x12c:  mov    %eax,(%esp)
086c0c36 +0x12f:  call   08450298 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2eae>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2eae
086c0c3b +0x134:  sub    $0x4,%esp
086c0c3e +0x137:  lea    -0x1c(%ebp),%eax
086c0c41 +0x13a:  mov    %eax,0x4(%esp)
086c0c45 +0x13e:  lea    -0x20(%ebp),%eax
086c0c48 +0x141:  mov    %eax,(%esp)
086c0c4b +0x144:  call   082c068c <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12587>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12587
086c0c50 +0x149:  test   %al,%al
086c0c52 +0x14b:  jne    086c0c90 <+0x189>
086c0c54 +0x14d:  lea    -0x20(%ebp),%eax
086c0c57 +0x150:  mov    %eax,(%esp)
086c0c5a +0x153:  call   086c0bba <+0xb3>
086c0c5f +0x158:  mov    %eax,%ebx
086c0c61 +0x15a:  lea    -0x15(%ebp),%eax
086c0c64 +0x15d:  mov    0x8(%ebp),%edx
086c0c67 +0x160:  mov    %edx,0x4(%esp)
086c0c6b +0x164:  mov    %eax,(%esp)
086c0c6e +0x167:  call   086c0cfc <+0x1f5>
086c0c73 +0x16c:  sub    $0x4,%esp
086c0c76 +0x16f:  mov    %ebx,0x8(%esp)
086c0c7a +0x173:  mov    0xc(%ebp),%eax
086c0c7d +0x176:  mov    %eax,0x4(%esp)
086c0c81 +0x17a:  lea    -0x15(%ebp),%eax
086c0c84 +0x17d:  mov    %eax,(%esp)
086c0c87 +0x180:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
086c0c8c +0x185:  test   %al,%al
086c0c8e +0x187:  je     086c0c97 <+0x190>
086c0c90 +0x189:  mov    $0x1,%eax
086c0c95 +0x18e:  jmp    086c0c9c <+0x195>
086c0c97 +0x190:  mov    $0x0,%eax
086c0c9c +0x195:  test   %al,%al
086c0c9e +0x197:  je     086c0ce9 <+0x1e2>
086c0ca0 +0x199:  movl   $0x0,-0xc(%ebp)
086c0ca7 +0x1a0:  lea    -0xc(%ebp),%eax
086c0caa +0x1a3:  mov    %eax,0x8(%esp)
086c0cae +0x1a7:  mov    0xc(%ebp),%eax
086c0cb1 +0x1aa:  mov    %eax,0x4(%esp)
086c0cb5 +0x1ae:  lea    -0x14(%ebp),%eax
086c0cb8 +0x1b1:  mov    %eax,(%esp)
086c0cbb +0x1b4:  call   086c0d22 <+0x21b>
086c0cc0 +0x1b9:  lea    -0x2c(%ebp),%eax
086c0cc3 +0x1bc:  lea    -0x14(%ebp),%edx
086c0cc6 +0x1bf:  mov    %edx,0xc(%esp)
086c0cca +0x1c3:  mov    -0x20(%ebp),%edx
086c0ccd +0x1c6:  mov    %edx,0x8(%esp)
086c0cd1 +0x1ca:  mov    0x8(%ebp),%edx
086c0cd4 +0x1cd:  mov    %edx,0x4(%esp)
086c0cd8 +0x1d1:  mov    %eax,(%esp)
086c0cdb +0x1d4:  call   086c0d50 <+0x249>
086c0ce0 +0x1d9:  sub    $0x4,%esp
086c0ce3 +0x1dc:  mov    -0x2c(%ebp),%eax
086c0ce6 +0x1df:  mov    %eax,-0x20(%ebp)
086c0ce9 +0x1e2:  lea    -0x20(%ebp),%eax
086c0cec +0x1e5:  mov    %eax,(%esp)
086c0cef +0x1e8:  call   086c0bba <+0xb3>
086c0cf4 +0x1ed:  add    $0x4,%eax
086c0cf7 +0x1f0:  mov    -0x4(%ebp),%ebx
086c0cfa +0x1f3:  leave
086c0cfb +0x1f4:  ret
086c0cfc +0x1f5:  push   %ebp
086c0cfd +0x1f6:  mov    %esp,%ebp
086c0cff +0x1f8:  push   %ebx
086c0d00 +0x1f9:  sub    $0x14,%esp
086c0d03 +0x1fc:  mov    0x8(%ebp),%ebx
086c0d06 +0x1ff:  mov    0xc(%ebp),%eax
086c0d09 +0x202:  mov    %eax,0x4(%esp)
086c0d0d +0x206:  mov    %ebx,(%esp)
086c0d10 +0x209:  call   086c0d96 <+0x28f>
086c0d15 +0x20e:  sub    $0x4,%esp
086c0d18 +0x211:  mov    %ebx,%eax
086c0d1a +0x213:  mov    -0x4(%ebp),%ebx
086c0d1d +0x216:  leave
086c0d1e +0x217:  ret    $0x4
086c0d21 +0x21a:  nop
086c0d22 +0x21b:  push   %ebp
086c0d23 +0x21c:  mov    %esp,%ebp
086c0d25 +0x21e:  sub    $0x18,%esp
086c0d28 +0x221:  mov    0xc(%ebp),%eax
086c0d2b +0x224:  mov    %eax,(%esp)
086c0d2e +0x227:  call   080e3796 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x153c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x153c
086c0d33 +0x22c:  mov    (%eax),%edx
086c0d35 +0x22e:  mov    0x8(%ebp),%eax
086c0d38 +0x231:  mov    %edx,(%eax)
086c0d3a +0x233:  mov    0x10(%ebp),%eax
086c0d3d +0x236:  mov    %eax,(%esp)
086c0d40 +0x239:  call   08080ff4 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x101a>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x101a
086c0d45 +0x23e:  mov    (%eax),%edx
086c0d47 +0x240:  mov    0x8(%ebp),%eax
086c0d4a +0x243:  mov    %edx,0x4(%eax)
086c0d4d +0x246:  leave
086c0d4e +0x247:  ret
086c0d4f +0x248:  nop
086c0d50 +0x249:  push   %ebp
086c0d51 +0x24a:  mov    %esp,%ebp
086c0d53 +0x24c:  push   %ebx
086c0d54 +0x24d:  sub    $0x24,%esp
086c0d57 +0x250:  mov    0x8(%ebp),%ebx
086c0d5a +0x253:  lea    0x10(%ebp),%eax
086c0d5d +0x256:  mov    %eax,0x4(%esp)
086c0d61 +0x25a:  lea    -0xc(%ebp),%eax
086c0d64 +0x25d:  mov    %eax,(%esp)
086c0d67 +0x260:  call   086c0da0 <+0x299>
086c0d6c +0x265:  mov    0xc(%ebp),%eax
086c0d6f +0x268:  mov    0x14(%ebp),%edx
086c0d72 +0x26b:  mov    %edx,0xc(%esp)
086c0d76 +0x26f:  mov    -0xc(%ebp),%edx
086c0d79 +0x272:  mov    %edx,0x8(%esp)
086c0d7d +0x276:  mov    %eax,0x4(%esp)
086c0d81 +0x27a:  mov    %ebx,(%esp)
086c0d84 +0x27d:  call   086c0db0 <+0x2a9>
086c0d89 +0x282:  sub    $0x4,%esp
086c0d8c +0x285:  mov    %ebx,%eax
086c0d8e +0x287:  mov    -0x4(%ebp),%ebx
086c0d91 +0x28a:  leave
086c0d92 +0x28b:  ret    $0x4
086c0d95 +0x28e:  nop
086c0d96 +0x28f:  push   %ebp
086c0d97 +0x290:  mov    %esp,%ebp
086c0d99 +0x292:  mov    0x8(%ebp),%eax
086c0d9c +0x295:  pop    %ebp
086c0d9d +0x296:  ret    $0x4
086c0da0 +0x299:  push   %ebp
086c0da1 +0x29a:  mov    %esp,%ebp
086c0da3 +0x29c:  mov    0xc(%ebp),%eax
086c0da6 +0x29f:  mov    (%eax),%edx
086c0da8 +0x2a1:  mov    0x8(%ebp),%eax
086c0dab +0x2a4:  mov    %edx,(%eax)
086c0dad +0x2a6:  pop    %ebp
086c0dae +0x2a7:  ret
086c0daf +0x2a8:  nop
086c0db0 +0x2a9:  push   %ebp
086c0db1 +0x2aa:  mov    %esp,%ebp
086c0db3 +0x2ac:  push   %esi
086c0db4 +0x2ad:  push   %ebx
086c0db5 +0x2ae:  sub    $0x50,%esp
086c0db8 +0x2b1:  mov    0x8(%ebp),%ebx
086c0dbb +0x2b4:  mov    0x10(%ebp),%esi
086c0dbe +0x2b7:  mov    0xc(%ebp),%eax
086c0dc1 +0x2ba:  mov    %eax,(%esp)
086c0dc4 +0x2bd:  call   082c065e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12559>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12559
086c0dc9 +0x2c2:  cmp    %eax,%esi
086c0dcb +0x2c4:  sete   %al
086c0dce +0x2c7:  test   %al,%al
086c0dd0 +0x2c9:  je     086c0e92 <+0x38b>
086c0dd6 +0x2cf:  mov    0xc(%ebp),%eax
086c0dd9 +0x2d2:  mov    %eax,(%esp)
086c0ddc +0x2d5:  call   0853c4a2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x272e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x272e
086c0de1 +0x2da:  test   %eax,%eax
086c0de3 +0x2dc:  je     086c0e2c <+0x325>
086c0de5 +0x2de:  mov    0x14(%ebp),%eax
086c0de8 +0x2e1:  mov    %eax,0x4(%esp)
086c0dec +0x2e5:  lea    -0x29(%ebp),%eax
086c0def +0x2e8:  mov    %eax,(%esp)
086c0df2 +0x2eb:  call   082c06ae <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125a9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125a9
086c0df7 +0x2f0:  mov    %eax,%esi
086c0df9 +0x2f2:  mov    0xc(%ebp),%eax
086c0dfc +0x2f5:  mov    %eax,(%esp)
086c0dff +0x2f8:  call   08570bf2 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa93>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa93
086c0e04 +0x2fd:  mov    (%eax),%eax
086c0e06 +0x2ff:  mov    %eax,(%esp)
086c0e09 +0x302:  call   082c0669 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12564>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12564
086c0e0e +0x307:  mov    0xc(%ebp),%edx
086c0e11 +0x30a:  mov    %esi,0x8(%esp)
086c0e15 +0x30e:  mov    %eax,0x4(%esp)
086c0e19 +0x312:  mov    %edx,(%esp)
086c0e1c +0x315:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
086c0e21 +0x31a:  test   %al,%al
086c0e23 +0x31c:  je     086c0e2c <+0x325>
086c0e25 +0x31e:  mov    $0x1,%eax
086c0e2a +0x323:  jmp    086c0e31 <+0x32a>
086c0e2c +0x325:  mov    $0x0,%eax
086c0e31 +0x32a:  test   %al,%al
086c0e33 +0x32c:  je     086c0e6c <+0x365>
086c0e35 +0x32e:  mov    0xc(%ebp),%eax
086c0e38 +0x331:  mov    %eax,(%esp)
086c0e3b +0x334:  call   08570bf2 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa93>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa93
086c0e40 +0x339:  mov    (%eax),%eax
086c0e42 +0x33b:  mov    0x14(%ebp),%edx
086c0e45 +0x33e:  mov    %edx,0x10(%esp)
086c0e49 +0x342:  mov    %eax,0xc(%esp)
086c0e4d +0x346:  movl   $0x0,0x8(%esp)
086c0e55 +0x34e:  mov    0xc(%ebp),%eax
086c0e58 +0x351:  mov    %eax,0x4(%esp)
086c0e5c +0x355:  mov    %ebx,(%esp)
086c0e5f +0x358:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c0e64 +0x35d:  sub    $0x4,%esp
086c0e67 +0x360:  jmp    086c1167 <+0x660>
086c0e6c +0x365:  lea    -0x28(%ebp),%eax
086c0e6f +0x368:  mov    0x14(%ebp),%edx
086c0e72 +0x36b:  mov    %edx,0x8(%esp)
086c0e76 +0x36f:  mov    0xc(%ebp),%edx
086c0e79 +0x372:  mov    %edx,0x4(%esp)
086c0e7d +0x376:  mov    %eax,(%esp)
086c0e80 +0x379:  call   082b7312 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x920d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x920d
086c0e85 +0x37e:  sub    $0x4,%esp
086c0e88 +0x381:  mov    -0x28(%ebp),%eax
086c0e8b +0x384:  mov    %eax,(%ebx)
086c0e8d +0x386:  jmp    086c1167 <+0x660>
086c0e92 +0x38b:  mov    0x10(%ebp),%eax
086c0e95 +0x38e:  mov    %eax,(%esp)
086c0e98 +0x391:  call   082c0669 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12564>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12564
086c0e9d +0x396:  mov    %eax,%esi
086c0e9f +0x398:  mov    0x14(%ebp),%eax
086c0ea2 +0x39b:  mov    %eax,0x4(%esp)
086c0ea6 +0x39f:  lea    -0x1e(%ebp),%eax
086c0ea9 +0x3a2:  mov    %eax,(%esp)
086c0eac +0x3a5:  call   082c06ae <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125a9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125a9
086c0eb1 +0x3aa:  mov    0xc(%ebp),%edx
086c0eb4 +0x3ad:  mov    %esi,0x8(%esp)
086c0eb8 +0x3b1:  mov    %eax,0x4(%esp)
086c0ebc +0x3b5:  mov    %edx,(%esp)
086c0ebf +0x3b8:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
086c0ec4 +0x3bd:  test   %al,%al
086c0ec6 +0x3bf:  je     086c0ffe <+0x4f7>
086c0ecc +0x3c5:  mov    0x10(%ebp),%eax
086c0ecf +0x3c8:  mov    %eax,-0x30(%ebp)
086c0ed2 +0x3cb:  mov    0x10(%ebp),%esi
086c0ed5 +0x3ce:  mov    0xc(%ebp),%eax
086c0ed8 +0x3d1:  mov    %eax,(%esp)
086c0edb +0x3d4:  call   08570bda <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa7b>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa7b
086c0ee0 +0x3d9:  mov    (%eax),%eax
086c0ee2 +0x3db:  cmp    %eax,%esi
086c0ee4 +0x3dd:  sete   %al
086c0ee7 +0x3e0:  test   %al,%al
086c0ee9 +0x3e2:  je     086c0f2b <+0x424>
086c0eeb +0x3e4:  mov    0xc(%ebp),%eax
086c0eee +0x3e7:  mov    %eax,(%esp)
086c0ef1 +0x3ea:  call   08570bda <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa7b>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa7b
086c0ef6 +0x3ef:  mov    (%eax),%esi
086c0ef8 +0x3f1:  mov    0xc(%ebp),%eax
086c0efb +0x3f4:  mov    %eax,(%esp)
086c0efe +0x3f7:  call   08570bda <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa7b>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa7b
086c0f03 +0x3fc:  mov    (%eax),%eax
086c0f05 +0x3fe:  mov    0x14(%ebp),%edx
086c0f08 +0x401:  mov    %edx,0x10(%esp)
086c0f0c +0x405:  mov    %esi,0xc(%esp)
086c0f10 +0x409:  mov    %eax,0x8(%esp)
086c0f14 +0x40d:  mov    0xc(%ebp),%eax
086c0f17 +0x410:  mov    %eax,0x4(%esp)
086c0f1b +0x414:  mov    %ebx,(%esp)
086c0f1e +0x417:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c0f23 +0x41c:  sub    $0x4,%esp
086c0f26 +0x41f:  jmp    086c1167 <+0x660>
086c0f2b +0x424:  mov    0x14(%ebp),%eax
086c0f2e +0x427:  mov    %eax,0x4(%esp)
086c0f32 +0x42b:  lea    -0x1d(%ebp),%eax
086c0f35 +0x42e:  mov    %eax,(%esp)
086c0f38 +0x431:  call   082c06ae <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125a9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125a9
086c0f3d +0x436:  mov    %eax,%esi
086c0f3f +0x438:  lea    -0x30(%ebp),%eax
086c0f42 +0x43b:  mov    %eax,(%esp)
086c0f45 +0x43e:  call   086c1176 <+0x66f>
086c0f4a +0x443:  mov    (%eax),%eax
086c0f4c +0x445:  mov    %eax,(%esp)
086c0f4f +0x448:  call   082c0669 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12564>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12564
086c0f54 +0x44d:  mov    0xc(%ebp),%edx
086c0f57 +0x450:  mov    %esi,0x8(%esp)
086c0f5b +0x454:  mov    %eax,0x4(%esp)
086c0f5f +0x458:  mov    %edx,(%esp)
086c0f62 +0x45b:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
086c0f67 +0x460:  test   %al,%al
086c0f69 +0x462:  je     086c0fd8 <+0x4d1>
086c0f6b +0x464:  mov    -0x30(%ebp),%eax
086c0f6e +0x467:  mov    %eax,(%esp)
086c0f71 +0x46a:  call   086c1193 <+0x68c>
086c0f76 +0x46f:  test   %eax,%eax
086c0f78 +0x471:  sete   %al
086c0f7b +0x474:  test   %al,%al
086c0f7d +0x476:  je     086c0fac <+0x4a5>
086c0f7f +0x478:  mov    -0x30(%ebp),%eax
086c0f82 +0x47b:  mov    0x14(%ebp),%edx
086c0f85 +0x47e:  mov    %edx,0x10(%esp)
086c0f89 +0x482:  mov    %eax,0xc(%esp)
086c0f8d +0x486:  movl   $0x0,0x8(%esp)
086c0f95 +0x48e:  mov    0xc(%ebp),%eax
086c0f98 +0x491:  mov    %eax,0x4(%esp)
086c0f9c +0x495:  mov    %ebx,(%esp)
086c0f9f +0x498:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c0fa4 +0x49d:  sub    $0x4,%esp
086c0fa7 +0x4a0:  jmp    086c1167 <+0x660>
086c0fac +0x4a5:  mov    0x10(%ebp),%edx
086c0faf +0x4a8:  mov    0x10(%ebp),%eax
086c0fb2 +0x4ab:  mov    0x14(%ebp),%ecx
086c0fb5 +0x4ae:  mov    %ecx,0x10(%esp)
086c0fb9 +0x4b2:  mov    %edx,0xc(%esp)
086c0fbd +0x4b6:  mov    %eax,0x8(%esp)
086c0fc1 +0x4ba:  mov    0xc(%ebp),%eax
086c0fc4 +0x4bd:  mov    %eax,0x4(%esp)
086c0fc8 +0x4c1:  mov    %ebx,(%esp)
086c0fcb +0x4c4:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c0fd0 +0x4c9:  sub    $0x4,%esp
086c0fd3 +0x4cc:  jmp    086c1167 <+0x660>
086c0fd8 +0x4d1:  lea    -0x1c(%ebp),%eax
086c0fdb +0x4d4:  mov    0x14(%ebp),%edx
086c0fde +0x4d7:  mov    %edx,0x8(%esp)
086c0fe2 +0x4db:  mov    0xc(%ebp),%edx
086c0fe5 +0x4de:  mov    %edx,0x4(%esp)
086c0fe9 +0x4e2:  mov    %eax,(%esp)
086c0fec +0x4e5:  call   082b7312 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x920d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x920d
086c0ff1 +0x4ea:  sub    $0x4,%esp
086c0ff4 +0x4ed:  mov    -0x1c(%ebp),%eax
086c0ff7 +0x4f0:  mov    %eax,(%ebx)
086c0ff9 +0x4f2:  jmp    086c1167 <+0x660>
086c0ffe +0x4f7:  mov    0x14(%ebp),%eax
086c1001 +0x4fa:  mov    %eax,0x4(%esp)
086c1005 +0x4fe:  lea    -0x12(%ebp),%eax
086c1008 +0x501:  mov    %eax,(%esp)
086c100b +0x504:  call   082c06ae <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125a9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125a9
086c1010 +0x509:  mov    %eax,%esi
086c1012 +0x50b:  mov    0x10(%ebp),%eax
086c1015 +0x50e:  mov    %eax,(%esp)
086c1018 +0x511:  call   082c0669 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12564>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12564
086c101d +0x516:  mov    0xc(%ebp),%edx
086c1020 +0x519:  mov    %esi,0x8(%esp)
086c1024 +0x51d:  mov    %eax,0x4(%esp)
086c1028 +0x521:  mov    %edx,(%esp)
086c102b +0x524:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
086c1030 +0x529:  test   %al,%al
086c1032 +0x52b:  je     086c1158 <+0x651>
086c1038 +0x531:  mov    0x10(%ebp),%eax
086c103b +0x534:  mov    %eax,-0x34(%ebp)
086c103e +0x537:  mov    0x10(%ebp),%esi
086c1041 +0x53a:  mov    0xc(%ebp),%eax
086c1044 +0x53d:  mov    %eax,(%esp)
086c1047 +0x540:  call   08570bf2 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa93>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa93
086c104c +0x545:  mov    (%eax),%eax
086c104e +0x547:  cmp    %eax,%esi
086c1050 +0x549:  sete   %al
086c1053 +0x54c:  test   %al,%al
086c1055 +0x54e:  je     086c108e <+0x587>
086c1057 +0x550:  mov    0xc(%ebp),%eax
086c105a +0x553:  mov    %eax,(%esp)
086c105d +0x556:  call   08570bf2 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa93>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa93
086c1062 +0x55b:  mov    (%eax),%eax
086c1064 +0x55d:  mov    0x14(%ebp),%edx
086c1067 +0x560:  mov    %edx,0x10(%esp)
086c106b +0x564:  mov    %eax,0xc(%esp)
086c106f +0x568:  movl   $0x0,0x8(%esp)
086c1077 +0x570:  mov    0xc(%ebp),%eax
086c107a +0x573:  mov    %eax,0x4(%esp)
086c107e +0x577:  mov    %ebx,(%esp)
086c1081 +0x57a:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c1086 +0x57f:  sub    $0x4,%esp
086c1089 +0x582:  jmp    086c1167 <+0x660>
086c108e +0x587:  lea    -0x34(%ebp),%eax
086c1091 +0x58a:  mov    %eax,(%esp)
086c1094 +0x58d:  call   086c119e <+0x697>
086c1099 +0x592:  mov    (%eax),%eax
086c109b +0x594:  mov    %eax,(%esp)
086c109e +0x597:  call   082c0669 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x12564>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x12564
086c10a3 +0x59c:  mov    %eax,%esi
086c10a5 +0x59e:  mov    0x14(%ebp),%eax
086c10a8 +0x5a1:  mov    %eax,0x4(%esp)
086c10ac +0x5a5:  lea    -0x11(%ebp),%eax
086c10af +0x5a8:  mov    %eax,(%esp)
086c10b2 +0x5ab:  call   082c06ae <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125a9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125a9
086c10b7 +0x5b0:  mov    0xc(%ebp),%edx
086c10ba +0x5b3:  mov    %esi,0x8(%esp)
086c10be +0x5b7:  mov    %eax,0x4(%esp)
086c10c2 +0x5bb:  mov    %edx,(%esp)
086c10c5 +0x5be:  call   080e36fc <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x14a2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x14a2
086c10ca +0x5c3:  test   %al,%al
086c10cc +0x5c5:  je     086c1135 <+0x62e>
086c10ce +0x5c7:  mov    0x10(%ebp),%eax
086c10d1 +0x5ca:  mov    %eax,(%esp)
086c10d4 +0x5cd:  call   086c1193 <+0x68c>
086c10d9 +0x5d2:  test   %eax,%eax
086c10db +0x5d4:  sete   %al
086c10de +0x5d7:  test   %al,%al
086c10e0 +0x5d9:  je     086c110c <+0x605>
086c10e2 +0x5db:  mov    0x10(%ebp),%eax
086c10e5 +0x5de:  mov    0x14(%ebp),%edx
086c10e8 +0x5e1:  mov    %edx,0x10(%esp)
086c10ec +0x5e5:  mov    %eax,0xc(%esp)
086c10f0 +0x5e9:  movl   $0x0,0x8(%esp)
086c10f8 +0x5f1:  mov    0xc(%ebp),%eax
086c10fb +0x5f4:  mov    %eax,0x4(%esp)
086c10ff +0x5f8:  mov    %ebx,(%esp)
086c1102 +0x5fb:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c1107 +0x600:  sub    $0x4,%esp
086c110a +0x603:  jmp    086c1167 <+0x660>
086c110c +0x605:  mov    -0x34(%ebp),%edx
086c110f +0x608:  mov    -0x34(%ebp),%eax
086c1112 +0x60b:  mov    0x14(%ebp),%ecx
086c1115 +0x60e:  mov    %ecx,0x10(%esp)
086c1119 +0x612:  mov    %edx,0xc(%esp)
086c111d +0x616:  mov    %eax,0x8(%esp)
086c1121 +0x61a:  mov    0xc(%ebp),%eax
086c1124 +0x61d:  mov    %eax,0x4(%esp)
086c1128 +0x621:  mov    %ebx,(%esp)
086c112b +0x624:  call   082c06fe <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x125f9>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x125f9
086c1130 +0x629:  sub    $0x4,%esp
086c1133 +0x62c:  jmp    086c1167 <+0x660>
086c1135 +0x62e:  lea    -0x10(%ebp),%eax
086c1138 +0x631:  mov    0x14(%ebp),%edx
086c113b +0x634:  mov    %edx,0x8(%esp)
086c113f +0x638:  mov    0xc(%ebp),%edx
086c1142 +0x63b:  mov    %edx,0x4(%esp)
086c1146 +0x63f:  mov    %eax,(%esp)
086c1149 +0x642:  call   082b7312 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x920d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x920d
086c114e +0x647:  sub    $0x4,%esp
086c1151 +0x64a:  mov    -0x10(%ebp),%eax
086c1154 +0x64d:  mov    %eax,(%ebx)
086c1156 +0x64f:  jmp    086c1167 <+0x660>
086c1158 +0x651:  mov    0x10(%ebp),%eax
086c115b +0x654:  mov    %eax,0x4(%esp)
086c115f +0x658:  mov    %ebx,(%esp)
086c1162 +0x65b:  call   082c06a0 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x1259b>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x1259b
086c1167 +0x660:  mov    %ebx,%eax
086c1169 +0x662:  lea    -0x8(%ebp),%esp
086c116c +0x665:  add    $0x0,%esp
086c116f +0x668:  pop    %ebx
086c1170 +0x669:  pop    %esi
086c1171 +0x66a:  pop    %ebp
086c1172 +0x66b:  ret    $0x4
086c1175 +0x66e:  nop
086c1176 +0x66f:  push   %ebp
086c1177 +0x670:  mov    %esp,%ebp
086c1179 +0x672:  sub    $0x18,%esp
086c117c +0x675:  mov    0x8(%ebp),%eax
086c117f +0x678:  mov    (%eax),%eax
086c1181 +0x67a:  mov    %eax,(%esp)
086c1184 +0x67d:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
086c1189 +0x682:  mov    0x8(%ebp),%edx
086c118c +0x685:  mov    %eax,(%edx)
086c118e +0x687:  mov    0x8(%ebp),%eax
086c1191 +0x68a:  leave
086c1192 +0x68b:  ret
086c1193 +0x68c:  push   %ebp
086c1194 +0x68d:  mov    %esp,%ebp
086c1196 +0x68f:  mov    0x8(%ebp),%eax
086c1199 +0x692:  mov    0xc(%eax),%eax
086c119c +0x695:  pop    %ebp
086c119d +0x696:  ret
086c119e +0x697:  push   %ebp
086c119f +0x698:  mov    %esp,%ebp
086c11a1 +0x69a:  sub    $0x18,%esp
086c11a4 +0x69d:  mov    0x8(%ebp),%eax
086c11a7 +0x6a0:  mov    (%eax),%eax
086c11a9 +0x6a2:  mov    %eax,(%esp)
086c11ac +0x6a5:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
086c11b1 +0x6aa:  mov    0x8(%ebp),%edx
086c11b4 +0x6ad:  mov    %eax,(%edx)
086c11b6 +0x6af:  mov    0x8(%ebp),%eax
086c11b9 +0x6b2:  leave
086c11ba +0x6b3:  ret
086c11bb +0x6b4:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86c0b07

/* WarRoom::WarRoom() */

void WarRoom::_GLOBAL__I_WarRoom(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
