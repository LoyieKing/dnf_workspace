# Pickup

`_ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii`

`AvatarRouletteServer::Pickup(AvatarRouletteServer::PickedAvatarInfo&, int, int)`

| 类 | 地址 |
|---|---|
| `AvatarRouletteServer` | `0x0817fb28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817fb28  _ZN20AvatarRouletteServer6PickupERNS_16PickedAvatarInfoEii
#           AvatarRouletteServer::Pickup(AvatarRouletteServer::PickedAvatarInfo&, int, int)
# range [0x0817fb28, 0x0817fed3]
0817fb28 +0x000:  push   %ebp
0817fb29 +0x001:  mov    %esp,%ebp
0817fb2b +0x003:  push   %edi
0817fb2c +0x004:  push   %esi
0817fb2d +0x005:  push   %ebx
0817fb2e +0x006:  sub    $0x7c,%esp
0817fb31 +0x009:  mov    0x8(%ebp),%eax
0817fb34 +0x00c:  mov    0x1c(%eax),%eax
0817fb37 +0x00f:  mov    %eax,(%esp)
0817fb3a +0x012:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0817fb3f +0x017:  mov    %eax,-0x30(%ebp)
0817fb42 +0x01a:  movl   $0x0,-0x2c(%ebp)
0817fb49 +0x021:  mov    0x8(%ebp),%eax
0817fb4c +0x024:  mov    0x18(%eax),%eax
0817fb4f +0x027:  mov    0xc(%eax),%eax
0817fb52 +0x02a:  cmp    -0x30(%ebp),%eax
0817fb55 +0x02d:  jle    0817fb74 <+0x4c>
0817fb57 +0x02f:  movl   $0x2,(%esp)
0817fb5e +0x036:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0817fb63 +0x03b:  mov    %eax,%edx
0817fb65 +0x03d:  mov    0xc(%ebp),%eax
0817fb68 +0x040:  mov    %dl,0xb(%eax)
0817fb6b +0x043:  movl   $0x2,-0x2c(%ebp)
0817fb72 +0x04a:  jmp    0817fba2 <+0x7a>
0817fb74 +0x04c:  mov    0x8(%ebp),%eax
0817fb77 +0x04f:  mov    0x18(%eax),%eax
0817fb7a +0x052:  add    $0x14,%eax
0817fb7d +0x055:  mov    %eax,(%esp)
0817fb80 +0x058:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
0817fb85 +0x05d:  sub    $0x2,%eax
0817fb88 +0x060:  mov    %eax,(%esp)
0817fb8b +0x063:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0817fb90 +0x068:  add    $0x2,%eax
0817fb93 +0x06b:  mov    %eax,%edx
0817fb95 +0x06d:  mov    0xc(%ebp),%eax
0817fb98 +0x070:  mov    %dl,0xb(%eax)
0817fb9b +0x073:  movl   $0x1,-0x2c(%ebp)
0817fba2 +0x07a:  mov    0x10(%ebp),%eax
0817fba5 +0x07d:  test   %eax,%eax
0817fba7 +0x07f:  js     0817fbb1 <+0x89>
0817fba9 +0x081:  mov    0x10(%ebp),%eax
0817fbac +0x084:  cmp    $0xa,%eax
0817fbaf +0x087:  jle    0817fbbb <+0x93>
0817fbb1 +0x089:  mov    $0x0,%ebx
0817fbb6 +0x08e:  jmp    0817fec6 <+0x39e>
0817fbbb +0x093:  mov    0x8(%ebp),%eax
0817fbbe +0x096:  mov    0x18(%eax),%ecx
0817fbc1 +0x099:  mov    0x10(%ebp),%edx
0817fbc4 +0x09c:  mov    %edx,%eax
0817fbc6 +0x09e:  add    %eax,%eax
0817fbc8 +0x0a0:  add    %edx,%eax
0817fbca +0x0a2:  shl    $0x2,%eax
0817fbcd +0x0a5:  add    $0x10,%eax
0817fbd0 +0x0a8:  lea    (%ecx,%eax,1),%eax
0817fbd3 +0x0ab:  add    $0x4,%eax
0817fbd6 +0x0ae:  mov    %eax,(%esp)
0817fbd9 +0x0b1:  call   08180760 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x3f7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x3f7
0817fbde +0x0b6:  mov    0xc(%ebp),%edx
0817fbe1 +0x0b9:  movzbl 0xb(%edx),%edx
0817fbe5 +0x0bd:  movsbl %dl,%edx
0817fbe8 +0x0c0:  cmp    %edx,%eax
0817fbea +0x0c2:  setbe  %al
0817fbed +0x0c5:  test   %al,%al
0817fbef +0x0c7:  je     0817fbfb <+0xd3>
0817fbf1 +0x0c9:  mov    $0x0,%ebx
0817fbf6 +0x0ce:  jmp    0817fec6 <+0x39e>
0817fbfb +0x0d3:  mov    0xc(%ebp),%eax
0817fbfe +0x0d6:  movzbl 0xb(%eax),%eax
0817fc02 +0x0da:  movsbl %al,%ecx
0817fc05 +0x0dd:  mov    0x8(%ebp),%eax
0817fc08 +0x0e0:  mov    0x18(%eax),%esi
0817fc0b +0x0e3:  mov    0x10(%ebp),%edx
0817fc0e +0x0e6:  mov    %edx,%eax
0817fc10 +0x0e8:  add    %eax,%eax
0817fc12 +0x0ea:  add    %edx,%eax
0817fc14 +0x0ec:  shl    $0x2,%eax
0817fc17 +0x0ef:  add    $0x10,%eax
0817fc1a +0x0f2:  lea    (%esi,%eax,1),%eax
0817fc1d +0x0f5:  add    $0x4,%eax
0817fc20 +0x0f8:  mov    %ecx,0x4(%esp)
0817fc24 +0x0fc:  mov    %eax,(%esp)
0817fc27 +0x0ff:  call   08180782 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x419>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x419
0817fc2c +0x104:  mov    %eax,(%esp)
0817fc2f +0x107:  call   08180c20 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x8b7>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x8b7
0817fc34 +0x10c:  mov    0x14(%ebp),%edx
0817fc37 +0x10f:  cmp    %edx,%eax
0817fc39 +0x111:  setbe  %al
0817fc3c +0x114:  test   %al,%al
0817fc3e +0x116:  je     0817fc4a <+0x122>
0817fc40 +0x118:  mov    $0x0,%ebx
0817fc45 +0x11d:  jmp    0817fec6 <+0x39e>
0817fc4a +0x122:  mov    0x14(%ebp),%esi
0817fc4d +0x125:  mov    0xc(%ebp),%eax
0817fc50 +0x128:  movzbl 0xb(%eax),%eax
0817fc54 +0x12c:  movsbl %al,%ecx
0817fc57 +0x12f:  mov    0x8(%ebp),%eax
0817fc5a +0x132:  mov    0x18(%eax),%edi
0817fc5d +0x135:  mov    0x10(%ebp),%edx
0817fc60 +0x138:  mov    %edx,%eax
0817fc62 +0x13a:  add    %eax,%eax
0817fc64 +0x13c:  add    %edx,%eax
0817fc66 +0x13e:  shl    $0x2,%eax
0817fc69 +0x141:  add    $0x10,%eax
0817fc6c +0x144:  lea    (%edi,%eax,1),%eax
0817fc6f +0x147:  add    $0x4,%eax
0817fc72 +0x14a:  mov    %ecx,0x4(%esp)
0817fc76 +0x14e:  mov    %eax,(%esp)
0817fc79 +0x151:  call   08180782 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x419>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x419
0817fc7e +0x156:  mov    %esi,0x4(%esp)
0817fc82 +0x15a:  mov    %eax,(%esp)
0817fc85 +0x15d:  call   0818079c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x433>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x433
0817fc8a +0x162:  mov    %eax,-0x28(%ebp)
0817fc8d +0x165:  mov    -0x28(%ebp),%eax
0817fc90 +0x168:  mov    (%eax),%eax
0817fc92 +0x16a:  mov    %eax,%edx
0817fc94 +0x16c:  mov    0xc(%ebp),%eax
0817fc97 +0x16f:  mov    %edx,0x4(%eax)
0817fc9a +0x172:  mov    -0x28(%ebp),%eax
0817fc9d +0x175:  mov    0x4(%eax),%eax
0817fca0 +0x178:  mov    %eax,%edx
0817fca2 +0x17a:  mov    0xc(%ebp),%eax
0817fca5 +0x17d:  mov    %dl,0xa(%eax)
0817fca8 +0x180:  mov    0xc(%ebp),%eax
0817fcab +0x183:  mov    0x4(%eax),%esi
0817fcae +0x186:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0817fcb3 +0x18b:  mov    %esi,0x4(%esp)
0817fcb7 +0x18f:  mov    %eax,(%esp)
0817fcba +0x192:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0817fcbf +0x197:  mov    %eax,-0x24(%ebp)
0817fcc2 +0x19a:  cmpl   $0x0,-0x24(%ebp)
0817fcc6 +0x19e:  jne    0817fcd2 <+0x1aa>
0817fcc8 +0x1a0:  mov    $0x0,%ebx
0817fccd +0x1a5:  jmp    0817fec6 <+0x39e>
0817fcd2 +0x1aa:  mov    -0x24(%ebp),%eax
0817fcd5 +0x1ad:  mov    (%eax),%eax
0817fcd7 +0x1af:  add    $0x10,%eax
0817fcda +0x1b2:  mov    (%eax),%edx
0817fcdc +0x1b4:  mov    -0x24(%ebp),%eax
0817fcdf +0x1b7:  mov    %eax,(%esp)
0817fce2 +0x1ba:  call   *%edx
0817fce4 +0x1bc:  xor    $0x1,%eax
0817fce7 +0x1bf:  test   %al,%al
0817fce9 +0x1c1:  je     0817fcf5 <+0x1cd>
0817fceb +0x1c3:  mov    $0x0,%ebx
0817fcf0 +0x1c8:  jmp    0817fec6 <+0x39e>
0817fcf5 +0x1cd:  mov    -0x24(%ebp),%eax
0817fcf8 +0x1d0:  mov    %eax,-0x20(%ebp)
0817fcfb +0x1d3:  mov    -0x20(%ebp),%eax
0817fcfe +0x1d6:  mov    %eax,(%esp)
0817fd01 +0x1d9:  call   081803bc <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x53>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x53
0817fd06 +0x1de:  mov    %eax,(%esp)
0817fd09 +0x1e1:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0817fd0e +0x1e6:  mov    %eax,-0x1c(%ebp)
0817fd11 +0x1e9:  mov    -0x1c(%ebp),%eax
0817fd14 +0x1ec:  mov    %eax,%edx
0817fd16 +0x1ee:  mov    0xc(%ebp),%eax
0817fd19 +0x1f1:  mov    %dl,0x8(%eax)
0817fd1c +0x1f4:  cmpl   $0x3,0x14(%ebp)
0817fd20 +0x1f8:  jne    0817feba <+0x392>
0817fd26 +0x1fe:  mov    0x10(%ebp),%eax
0817fd29 +0x201:  cmp    $0x9,%eax
0817fd2c +0x204:  je     0817fd39 <+0x211>
0817fd2e +0x206:  mov    0x10(%ebp),%eax
0817fd31 +0x209:  test   %eax,%eax
0817fd33 +0x20b:  jne    0817feba <+0x392>
0817fd39 +0x211:  mov    0x8(%ebp),%edx
0817fd3c +0x214:  lea    -0x48(%ebp),%eax
0817fd3f +0x217:  mov    %edx,0x4(%esp)
0817fd43 +0x21b:  mov    %eax,(%esp)
0817fd46 +0x21e:  call   08180c68 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x8ff>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x8ff
0817fd4b +0x223:  sub    $0x4,%esp
0817fd4e +0x226:  mov    0xc(%ebp),%eax
0817fd51 +0x229:  mov    0x4(%eax),%eax
0817fd54 +0x22c:  mov    %eax,-0x40(%ebp)
0817fd57 +0x22f:  mov    0x8(%ebp),%edx
0817fd5a +0x232:  lea    -0x44(%ebp),%eax
0817fd5d +0x235:  lea    -0x40(%ebp),%ecx
0817fd60 +0x238:  mov    %ecx,0x8(%esp)
0817fd64 +0x23c:  mov    %edx,0x4(%esp)
0817fd68 +0x240:  mov    %eax,(%esp)
0817fd6b +0x243:  call   08180c3c <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x8d3>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x8d3
0817fd70 +0x248:  sub    $0x4,%esp
0817fd73 +0x24b:  lea    -0x48(%ebp),%eax
0817fd76 +0x24e:  mov    %eax,0x4(%esp)
0817fd7a +0x252:  lea    -0x44(%ebp),%eax
0817fd7d +0x255:  mov    %eax,(%esp)
0817fd80 +0x258:  call   08180c8e <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x925>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x925
0817fd85 +0x25d:  test   %al,%al
0817fd87 +0x25f:  je     0817fd93 <+0x26b>
0817fd89 +0x261:  mov    $0x0,%ebx
0817fd8e +0x266:  jmp    0817fec6 <+0x39e>
0817fd93 +0x26b:  mov    0xc(%ebp),%eax
0817fd96 +0x26e:  mov    0x4(%eax),%eax
0817fd99 +0x271:  mov    %eax,-0x3c(%ebp)
0817fd9c +0x274:  mov    0x8(%ebp),%eax
0817fd9f +0x277:  lea    -0x3c(%ebp),%edx
0817fda2 +0x27a:  mov    %edx,0x4(%esp)
0817fda6 +0x27e:  mov    %eax,(%esp)
0817fda9 +0x281:  call   08180ab6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x74d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x74d
0817fdae +0x286:  mov    %eax,0x4(%esp)
0817fdb2 +0x28a:  lea    -0x60(%ebp),%eax
0817fdb5 +0x28d:  mov    %eax,(%esp)
0817fdb8 +0x290:  call   08180ca2 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x939>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x939
0817fdbd +0x295:  lea    -0x38(%ebp),%eax
0817fdc0 +0x298:  lea    -0x60(%ebp),%edx
0817fdc3 +0x29b:  mov    %edx,0x4(%esp)
0817fdc7 +0x29f:  mov    %eax,(%esp)
0817fdca +0x2a2:  call   08180890 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x527>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x527
0817fdcf +0x2a7:  sub    $0x4,%esp
0817fdd2 +0x2aa:  lea    -0x34(%ebp),%eax
0817fdd5 +0x2ad:  lea    0x10(%ebp),%edx
0817fdd8 +0x2b0:  mov    %edx,0x8(%esp)
0817fddc +0x2b4:  lea    -0x60(%ebp),%edx
0817fddf +0x2b7:  mov    %edx,0x4(%esp)
0817fde3 +0x2bb:  mov    %eax,(%esp)
0817fde6 +0x2be:  call   08180864 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x4fb>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x4fb
0817fdeb +0x2c3:  sub    $0x4,%esp
0817fdee +0x2c6:  lea    -0x38(%ebp),%eax
0817fdf1 +0x2c9:  mov    %eax,0x4(%esp)
0817fdf5 +0x2cd:  lea    -0x34(%ebp),%eax
0817fdf8 +0x2d0:  mov    %eax,(%esp)
0817fdfb +0x2d3:  call   081808b6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x54d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x54d
0817fe00 +0x2d8:  test   %al,%al
0817fe02 +0x2da:  je     0817fe13 <+0x2eb>
0817fe04 +0x2dc:  mov    $0x0,%ebx
0817fe09 +0x2e1:  mov    $0x0,%esi
0817fe0e +0x2e6:  jmp    0817feab <+0x383>
0817fe13 +0x2eb:  lea    0x10(%ebp),%eax
0817fe16 +0x2ee:  mov    %eax,0x4(%esp)
0817fe1a +0x2f2:  lea    -0x60(%ebp),%eax
0817fe1d +0x2f5:  mov    %eax,(%esp)
0817fe20 +0x2f8:  call   081808e0 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x577>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x577
0817fe25 +0x2fd:  mov    %eax,0x4(%esp)
0817fe29 +0x301:  lea    -0x6c(%ebp),%eax
0817fe2c +0x304:  mov    %eax,(%esp)
0817fe2f +0x307:  call   08180cbc <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x953>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x953
0817fe34 +0x30c:  lea    -0x6c(%ebp),%eax
0817fe37 +0x30f:  mov    %eax,(%esp)
0817fe3a +0x312:  call   08180d70 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa07>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa07
0817fe3f +0x317:  mov    %eax,(%esp)
0817fe42 +0x31a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0817fe47 +0x31f:  mov    %eax,-0x1c(%ebp)
0817fe4a +0x322:  mov    -0x1c(%ebp),%eax
0817fe4d +0x325:  mov    %eax,0x4(%esp)
0817fe51 +0x329:  lea    -0x6c(%ebp),%eax
0817fe54 +0x32c:  mov    %eax,(%esp)
0817fe57 +0x32f:  call   08180d92 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xa29>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xa29
0817fe5c +0x334:  mov    0x4(%eax),%eax
0817fe5f +0x337:  mov    %eax,%edx
0817fe61 +0x339:  mov    0xc(%ebp),%eax
0817fe64 +0x33c:  mov    %dl,0x8(%eax)
0817fe67 +0x33f:  lea    -0x6c(%ebp),%eax
0817fe6a +0x342:  mov    %eax,(%esp)
0817fe6d +0x345:  call   08180416 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xad>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xad
0817fe72 +0x34a:  jmp    0817fe89 <+0x361>
0817fe74 +0x34c:  mov    %edx,%ebx
0817fe76 +0x34e:  mov    %eax,%esi
0817fe78 +0x350:  lea    -0x6c(%ebp),%eax
0817fe7b +0x353:  mov    %eax,(%esp)
0817fe7e +0x356:  call   08180416 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xad>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xad
0817fe83 +0x35b:  mov    %esi,%eax
0817fe85 +0x35d:  mov    %ebx,%edx
0817fe87 +0x35f:  jmp    0817fe90 <+0x368>
0817fe89 +0x361:  mov    $0x1,%esi
0817fe8e +0x366:  jmp    0817feab <+0x383>
0817fe90 +0x368:  mov    %edx,%ebx
0817fe92 +0x36a:  mov    %eax,%esi
0817fe94 +0x36c:  lea    -0x60(%ebp),%eax
0817fe97 +0x36f:  mov    %eax,(%esp)
0817fe9a +0x372:  call   081803ee <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x85>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x85
0817fe9f +0x377:  mov    %esi,%eax
0817fea1 +0x379:  mov    %ebx,%edx
0817fea3 +0x37b:  mov    %eax,(%esp)
0817fea6 +0x37e:  call   08ae3750 <_Unwind_Resume>
0817feab +0x383:  lea    -0x60(%ebp),%eax
0817feae +0x386:  mov    %eax,(%esp)
0817feb1 +0x389:  call   081803ee <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x85>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x85
0817feb6 +0x38e:  test   %esi,%esi
0817feb8 +0x390:  je     0817fec6 <+0x39e>
0817feba +0x392:  mov    0xc(%ebp),%eax
0817febd +0x395:  movb   $0x0,0x9(%eax)
0817fec1 +0x399:  mov    $0x1,%ebx
0817fec6 +0x39e:  mov    %ebx,%eax
0817fec8 +0x3a0:  lea    -0xc(%ebp),%esp
0817fecb +0x3a3:  add    $0x0,%esp
0817fece +0x3a6:  pop    %ebx
0817fecf +0x3a7:  pop    %esi
0817fed0 +0x3a8:  pop    %edi
0817fed1 +0x3a9:  pop    %ebp
0817fed2 +0x3aa:  ret
0817fed3 +0x3ab:  nop
```

## 反编译 C

```c
// AvatarRouletteServer::Pickup @ 0x817fb28

/* AvatarRouletteServer::Pickup(AvatarRouletteServer::PickedAvatarInfo&, int, int) */

undefined4 __thiscall
AvatarRouletteServer::Pickup
          (AvatarRouletteServer *this,PickedAvatarInfo *param_1,int param_2,int param_3)

{
  PickedAvatarInfo PVar1;
  char cVar2;
  uint uVar3;
  vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *pvVar4;
  CDataManager *this_00;
  int iVar5;
  map *pmVar6;
  vector *pvVar7;
  undefined4 unaff_EBX;
  undefined4 uVar8;
  vector<LevelUpSkill,std::allocator<LevelUpSkill>> local_70 [12];
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_64 [24];
  map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
  local_4c [4];
  _Rb_tree_iterator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>
  local_48 [4];
  undefined4 local_44;
  ulong local_40;
  map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
  local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  CEquipItem *local_28;
  CEquipItem *local_24;
  uint local_20;
  
  local_34 = get_rand_int(*(int *)(this + 0x1c));
  local_30 = 0;
  if (local_34 < *(int *)(*(int *)(this + 0x18) + 0xc)) {
    PVar1 = (PickedAvatarInfo)get_rand_int(2);
    param_1[0xb] = PVar1;
    local_30 = 2;
  }
  else {
    iVar5 = std::
            vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            ::size((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    *)(*(int *)(this + 0x18) + 0x14));
    cVar2 = get_rand_int(iVar5 + -2);
    param_1[0xb] = (PickedAvatarInfo)(cVar2 + '\x02');
    local_30 = 1;
  }
  if ((param_2 < 0) || (10 < param_2)) {
    uVar8 = 0;
  }
  else {
    uVar3 = std::
            vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
            ::size((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    *)(*(int *)(this + 0x18) + param_2 * 0xc + 0x14));
    if ((uint)(int)(char)param_1[0xb] < uVar3) {
      pvVar4 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>> *)
               std::
               vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
               ::operator[]((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                             *)(*(int *)(this + 0x18) + param_2 * 0xc + 0x14),
                            (int)(char)param_1[0xb]);
      uVar3 = std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
              ::size(pvVar4);
      iVar5 = param_3;
      if ((uint)param_3 < uVar3) {
        pvVar4 = (vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                  *)std::
                    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                    ::operator[]((vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
                                  *)(*(int *)(this + 0x18) + param_2 * 0xc + 0x14),
                                 (int)(char)param_1[0xb]);
        local_2c = (undefined4 *)
                   std::
                   vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>
                   ::operator[](pvVar4,iVar5);
        *(undefined4 *)(param_1 + 4) = *local_2c;
        param_1[10] = SUB41(local_2c[1],0);
        iVar5 = *(int *)(param_1 + 4);
        this_00 = (CDataManager *)G_CDataManager();
        local_28 = (CEquipItem *)CDataManager::find_item(this_00,iVar5);
        if (local_28 == (CEquipItem *)0x0) {
          uVar8 = 0;
        }
        else {
          cVar2 = (**(code **)(*(int *)local_28 + 0x10))(local_28);
          if (cVar2 == '\x01') {
            local_24 = local_28;
            iVar5 = CEquipItem::getAvatarOptionSize(local_28);
            local_20 = get_rand_int(iVar5);
            param_1[8] = SUB41(local_20,0);
            if ((param_3 == 3) && ((param_2 == 9 || (param_2 == 0)))) {
              std::
              map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
              ::end(local_4c);
              local_44 = *(undefined4 *)(param_1 + 4);
              std::
              map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
              ::find((ulong *)local_48);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>
                      ::operator==(local_48,(_Rb_tree_iterator *)local_4c);
              if (cVar2 != '\0') {
                return 0;
              }
              local_40 = *(ulong *)(param_1 + 4);
              pmVar6 = (map *)std::
                              map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                              ::operator[]((map<unsigned_long,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,std::map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>>>>
                                            *)this,&local_40);
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::map(local_64,pmVar6);
                    /* try { // try from 0817fdca to 0817fe33 has its CatchHandler @ 0817fe90 */
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::end(local_3c);
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::find((int *)local_38);
              cVar2 = std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>
                      ::operator==(local_38,(_Rb_tree_iterator *)local_3c);
              if (cVar2 == '\0') {
                pvVar7 = (vector *)
                         std::
                         map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
                         ::operator[](local_64,&param_2);
                std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::vector(local_70,pvVar7);
                iVar5 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::size(local_70);
                    /* try { // try from 0817fe42 to 0817fe46 has its CatchHandler @ 0817fe74 */
                local_20 = get_rand_int(iVar5);
                iVar5 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::operator[]
                                  (local_70,local_20);
                param_1[8] = SUB41(*(undefined4 *)(iVar5 + 4),0);
                    /* try { // try from 0817fe6d to 0817fe71 has its CatchHandler @ 0817fe90 */
                std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::~vector(local_70);
              }
              else {
                unaff_EBX = 0;
              }
              std::
              map<int,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>>>
              ::~map(local_64);
              if (cVar2 != '\0') {
                return unaff_EBX;
              }
            }
            param_1[9] = (PickedAvatarInfo)0x0;
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
          }
        }
      }
      else {
        uVar8 = 0;
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8;
}
```
