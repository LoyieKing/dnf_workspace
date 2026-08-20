# save_dnf_pvp_ping_history

`_ZN22DB_GatheringParyStatus25save_dnf_pvp_ping_historyEP16SIG_PARTY_STATUS`

`DB_GatheringParyStatus::save_dnf_pvp_ping_history(SIG_PARTY_STATUS*)`

| 类 | 地址 |
|---|---|
| `DB_GatheringParyStatus` | `0x08421066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08421066  _ZN22DB_GatheringParyStatus25save_dnf_pvp_ping_historyEP16SIG_PARTY_STATUS
#           DB_GatheringParyStatus::save_dnf_pvp_ping_history(SIG_PARTY_STATUS*)
# range [0x08421066, 0x08421569]
08421066 +0x000:  push   %ebp
08421067 +0x001:  mov    %esp,%ebp
08421069 +0x003:  push   %edi
0842106a +0x004:  push   %esi
0842106b +0x005:  push   %ebx
0842106c +0x006:  sub    $0x1cc,%esp
08421072 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08421077 +0x011:  movl   $0x0,0x8(%esp)
0842107f +0x019:  movl   $0x4,0x4(%esp)
08421087 +0x021:  mov    %eax,(%esp)
0842108a +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842108f +0x029:  mov    %eax,-0x24(%ebp)
08421092 +0x02c:  movl   $0x0,-0x1c(%ebp)
08421099 +0x033:  jmp    0842114c <+0xe6>
0842109e +0x038:  mov    -0x1c(%ebp),%edx
084210a1 +0x03b:  mov    0xc(%ebp),%ecx
084210a4 +0x03e:  mov    %edx,%eax
084210a6 +0x040:  add    %eax,%eax
084210a8 +0x042:  add    %edx,%eax
084210aa +0x044:  shl    $0x2,%eax
084210ad +0x047:  add    %edx,%eax
084210af +0x049:  lea    (%ecx,%eax,1),%eax
084210b2 +0x04c:  add    $0x16c,%eax
084210b7 +0x051:  movzbl (%eax),%eax
084210ba +0x054:  movzbl %al,%esi
084210bd +0x057:  mov    -0x1c(%ebp),%edx
084210c0 +0x05a:  mov    0xc(%ebp),%ecx
084210c3 +0x05d:  mov    %edx,%eax
084210c5 +0x05f:  add    %eax,%eax
084210c7 +0x061:  add    %edx,%eax
084210c9 +0x063:  shl    $0x2,%eax
084210cc +0x066:  add    %edx,%eax
084210ce +0x068:  lea    (%ecx,%eax,1),%eax
084210d1 +0x06b:  add    $0x16b,%eax
084210d6 +0x070:  movzbl (%eax),%eax
084210d9 +0x073:  movzbl %al,%ebx
084210dc +0x076:  mov    -0x1c(%ebp),%edx
084210df +0x079:  mov    0xc(%ebp),%ecx
084210e2 +0x07c:  mov    %edx,%eax
084210e4 +0x07e:  add    %eax,%eax
084210e6 +0x080:  add    %edx,%eax
084210e8 +0x082:  shl    $0x2,%eax
084210eb +0x085:  add    %edx,%eax
084210ed +0x087:  lea    (%ecx,%eax,1),%eax
084210f0 +0x08a:  add    $0x16a,%eax
084210f5 +0x08f:  movzbl (%eax),%eax
084210f8 +0x092:  movzbl %al,%ecx
084210fb +0x095:  mov    -0x1c(%ebp),%edx
084210fe +0x098:  mov    0xc(%ebp),%edi
08421101 +0x09b:  mov    %edx,%eax
08421103 +0x09d:  add    %eax,%eax
08421105 +0x09f:  add    %edx,%eax
08421107 +0x0a1:  shl    $0x2,%eax
0842110a +0x0a4:  add    %edx,%eax
0842110c +0x0a6:  lea    (%edi,%eax,1),%eax
0842110f +0x0a9:  add    $0x169,%eax
08421114 +0x0ae:  movzbl (%eax),%eax
08421117 +0x0b1:  movzbl %al,%edx
0842111a +0x0b4:  mov    -0x1c(%ebp),%edi
0842111d +0x0b7:  lea    -0xb4(%ebp),%eax
08421123 +0x0bd:  shl    $0x4,%edi
08421126 +0x0c0:  add    %edi,%eax
08421128 +0x0c2:  mov    %esi,0x14(%esp)
0842112c +0x0c6:  mov    %ebx,0x10(%esp)
08421130 +0x0ca:  mov    %ecx,0xc(%esp)
08421134 +0x0ce:  mov    %edx,0x8(%esp)
08421138 +0x0d2:  movl   $"%d.%d.%d.%d",0x4(%esp)
08421140 +0x0da:  mov    %eax,(%esp)
08421143 +0x0dd:  call   0807e440 <_init+0xd38>
08421148 +0x0e2:  addl   $0x1,-0x1c(%ebp)
0842114c +0x0e6:  cmpl   $0x7,-0x1c(%ebp)
08421150 +0x0ea:  setle  %al
08421153 +0x0ed:  test   %al,%al
08421155 +0x0ef:  jne    0842109e <+0x38>
0842115b +0x0f5:  mov    0xc(%ebp),%eax
0842115e +0x0f8:  movzbl 0x20(%eax),%eax
08421162 +0x0fc:  movzbl %al,%eax
08421165 +0x0ff:  mov    %eax,-0x138(%ebp)
0842116b +0x105:  lea    -0xb4(%ebp),%eax
08421171 +0x10b:  add    $0x70,%eax
08421174 +0x10e:  mov    %eax,-0x134(%ebp)
0842117a +0x114:  lea    -0xb4(%ebp),%eax
08421180 +0x11a:  add    $0x60,%eax
08421183 +0x11d:  mov    %eax,-0x130(%ebp)
08421189 +0x123:  lea    -0xb4(%ebp),%eax
0842118f +0x129:  add    $0x50,%eax
08421192 +0x12c:  mov    %eax,-0x12c(%ebp)
08421198 +0x132:  lea    -0xb4(%ebp),%eax
0842119e +0x138:  add    $0x40,%eax
084211a1 +0x13b:  mov    %eax,-0x128(%ebp)
084211a7 +0x141:  lea    -0xb4(%ebp),%eax
084211ad +0x147:  add    $0x30,%eax
084211b0 +0x14a:  mov    %eax,-0x124(%ebp)
084211b6 +0x150:  lea    -0xb4(%ebp),%eax
084211bc +0x156:  add    $0x20,%eax
084211bf +0x159:  mov    %eax,-0x120(%ebp)
084211c5 +0x15f:  lea    -0xb4(%ebp),%eax
084211cb +0x165:  add    $0x10,%eax
084211ce +0x168:  mov    %eax,-0x11c(%ebp)
084211d4 +0x16e:  lea    -0xb4(%ebp),%eax
084211da +0x174:  mov    %eax,-0x118(%ebp)
084211e0 +0x17a:  mov    0xc(%ebp),%eax
084211e3 +0x17d:  mov    0x1c(%eax),%eax
084211e6 +0x180:  mov    %eax,-0x114(%ebp)
084211ec +0x186:  mov    0xc(%ebp),%eax
084211ef +0x189:  mov    0x18(%eax),%eax
084211f2 +0x18c:  mov    %eax,-0x110(%ebp)
084211f8 +0x192:  mov    0xc(%ebp),%eax
084211fb +0x195:  mov    0x1c0(%eax),%eax
08421201 +0x19b:  mov    %eax,-0x10c(%ebp)
08421207 +0x1a1:  mov    0xc(%ebp),%eax
0842120a +0x1a4:  mov    0x1bc(%eax),%eax
08421210 +0x1aa:  mov    %eax,-0x108(%ebp)
08421216 +0x1b0:  mov    0xc(%ebp),%eax
08421219 +0x1b3:  movzbl 0x1bb(%eax),%eax
08421220 +0x1ba:  movzbl %al,%eax
08421223 +0x1bd:  mov    %eax,-0x104(%ebp)
08421229 +0x1c3:  mov    0xc(%ebp),%eax
0842122c +0x1c6:  mov    0x1b3(%eax),%eax
08421232 +0x1cc:  mov    %eax,-0x100(%ebp)
08421238 +0x1d2:  mov    0xc(%ebp),%eax
0842123b +0x1d5:  mov    0x1af(%eax),%eax
08421241 +0x1db:  mov    %eax,-0xfc(%ebp)
08421247 +0x1e1:  mov    0xc(%ebp),%eax
0842124a +0x1e4:  movzbl 0x1ae(%eax),%eax
08421251 +0x1eb:  movzbl %al,%eax
08421254 +0x1ee:  mov    %eax,-0xf8(%ebp)
0842125a +0x1f4:  mov    0xc(%ebp),%eax
0842125d +0x1f7:  mov    0x1a6(%eax),%eax
08421263 +0x1fd:  mov    %eax,-0xf4(%ebp)
08421269 +0x203:  mov    0xc(%ebp),%eax
0842126c +0x206:  mov    0x1a2(%eax),%eax
08421272 +0x20c:  mov    %eax,-0xf0(%ebp)
08421278 +0x212:  mov    0xc(%ebp),%eax
0842127b +0x215:  movzbl 0x1a1(%eax),%eax
08421282 +0x21c:  movzbl %al,%eax
08421285 +0x21f:  mov    %eax,-0xec(%ebp)
0842128b +0x225:  mov    0xc(%ebp),%eax
0842128e +0x228:  mov    0x199(%eax),%eax
08421294 +0x22e:  mov    %eax,-0xe8(%ebp)
0842129a +0x234:  mov    0xc(%ebp),%eax
0842129d +0x237:  mov    0x195(%eax),%eax
084212a3 +0x23d:  mov    %eax,-0xe4(%ebp)
084212a9 +0x243:  mov    0xc(%ebp),%eax
084212ac +0x246:  movzbl 0x194(%eax),%eax
084212b3 +0x24d:  movzbl %al,%eax
084212b6 +0x250:  mov    %eax,-0xe0(%ebp)
084212bc +0x256:  mov    0xc(%ebp),%eax
084212bf +0x259:  mov    0x18c(%eax),%eax
084212c5 +0x25f:  mov    %eax,-0xdc(%ebp)
084212cb +0x265:  mov    0xc(%ebp),%eax
084212ce +0x268:  mov    0x188(%eax),%eax
084212d4 +0x26e:  mov    %eax,-0xd8(%ebp)
084212da +0x274:  mov    0xc(%ebp),%eax
084212dd +0x277:  movzbl 0x187(%eax),%eax
084212e4 +0x27e:  movzbl %al,%eax
084212e7 +0x281:  mov    %eax,-0xd4(%ebp)
084212ed +0x287:  mov    0xc(%ebp),%eax
084212f0 +0x28a:  mov    0x17f(%eax),%eax
084212f6 +0x290:  mov    %eax,-0xd0(%ebp)
084212fc +0x296:  mov    0xc(%ebp),%eax
084212ff +0x299:  mov    0x17b(%eax),%eax
08421305 +0x29f:  mov    %eax,-0xcc(%ebp)
0842130b +0x2a5:  mov    0xc(%ebp),%eax
0842130e +0x2a8:  movzbl 0x17a(%eax),%eax
08421315 +0x2af:  movzbl %al,%eax
08421318 +0x2b2:  mov    %eax,-0xc8(%ebp)
0842131e +0x2b8:  mov    0xc(%ebp),%eax
08421321 +0x2bb:  mov    0x172(%eax),%eax
08421327 +0x2c1:  mov    %eax,-0xc4(%ebp)
0842132d +0x2c7:  mov    0xc(%ebp),%eax
08421330 +0x2ca:  mov    0x16e(%eax),%eax
08421336 +0x2d0:  mov    %eax,-0xc0(%ebp)
0842133c +0x2d6:  mov    0xc(%ebp),%eax
0842133f +0x2d9:  movzbl 0x16d(%eax),%eax
08421346 +0x2e0:  movzbl %al,%eax
08421349 +0x2e3:  mov    %eax,-0xbc(%ebp)
0842134f +0x2e9:  mov    0xc(%ebp),%eax
08421352 +0x2ec:  mov    0x165(%eax),%edi
08421358 +0x2f2:  mov    0xc(%ebp),%eax
0842135b +0x2f5:  mov    0x161(%eax),%esi
08421361 +0x2fb:  mov    0xc(%ebp),%eax
08421364 +0x2fe:  movzbl 0x160(%eax),%eax
0842136b +0x305:  movzbl %al,%ebx
0842136e +0x308:  mov    0xc(%ebp),%eax
08421371 +0x30b:  mov    0x10(%eax),%eax
08421374 +0x30e:  movl   $0x0,0x4(%esp)
0842137c +0x316:  mov    %eax,(%esp)
0842137f +0x319:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08421384 +0x31e:  mov    0xc(%ebp),%edx
08421387 +0x321:  mov    -0x138(%ebp),%ecx
0842138d +0x327:  mov    %ecx,0x98(%esp)
08421394 +0x32e:  mov    -0x134(%ebp),%ecx
0842139a +0x334:  mov    %ecx,0x94(%esp)
084213a1 +0x33b:  mov    -0x130(%ebp),%ecx
084213a7 +0x341:  mov    %ecx,0x90(%esp)
084213ae +0x348:  mov    -0x12c(%ebp),%ecx
084213b4 +0x34e:  mov    %ecx,0x8c(%esp)
084213bb +0x355:  mov    -0x128(%ebp),%ecx
084213c1 +0x35b:  mov    %ecx,0x88(%esp)
084213c8 +0x362:  mov    -0x124(%ebp),%ecx
084213ce +0x368:  mov    %ecx,0x84(%esp)
084213d5 +0x36f:  mov    -0x120(%ebp),%ecx
084213db +0x375:  mov    %ecx,0x80(%esp)
084213e2 +0x37c:  mov    -0x11c(%ebp),%ecx
084213e8 +0x382:  mov    %ecx,0x7c(%esp)
084213ec +0x386:  mov    -0x118(%ebp),%ecx
084213f2 +0x38c:  mov    %ecx,0x78(%esp)
084213f6 +0x390:  mov    -0x114(%ebp),%ecx
084213fc +0x396:  mov    %ecx,0x74(%esp)
08421400 +0x39a:  mov    -0x110(%ebp),%ecx
08421406 +0x3a0:  mov    %ecx,0x70(%esp)
0842140a +0x3a4:  mov    -0x10c(%ebp),%ecx
08421410 +0x3aa:  mov    %ecx,0x6c(%esp)
08421414 +0x3ae:  mov    -0x108(%ebp),%ecx
0842141a +0x3b4:  mov    %ecx,0x68(%esp)
0842141e +0x3b8:  mov    -0x104(%ebp),%ecx
08421424 +0x3be:  mov    %ecx,0x64(%esp)
08421428 +0x3c2:  mov    -0x100(%ebp),%ecx
0842142e +0x3c8:  mov    %ecx,0x60(%esp)
08421432 +0x3cc:  mov    -0xfc(%ebp),%ecx
08421438 +0x3d2:  mov    %ecx,0x5c(%esp)
0842143c +0x3d6:  mov    -0xf8(%ebp),%ecx
08421442 +0x3dc:  mov    %ecx,0x58(%esp)
08421446 +0x3e0:  mov    -0xf4(%ebp),%ecx
0842144c +0x3e6:  mov    %ecx,0x54(%esp)
08421450 +0x3ea:  mov    -0xf0(%ebp),%ecx
08421456 +0x3f0:  mov    %ecx,0x50(%esp)
0842145a +0x3f4:  mov    -0xec(%ebp),%ecx
08421460 +0x3fa:  mov    %ecx,0x4c(%esp)
08421464 +0x3fe:  mov    -0xe8(%ebp),%ecx
0842146a +0x404:  mov    %ecx,0x48(%esp)
0842146e +0x408:  mov    -0xe4(%ebp),%ecx
08421474 +0x40e:  mov    %ecx,0x44(%esp)
08421478 +0x412:  mov    -0xe0(%ebp),%ecx
0842147e +0x418:  mov    %ecx,0x40(%esp)
08421482 +0x41c:  mov    -0xdc(%ebp),%ecx
08421488 +0x422:  mov    %ecx,0x3c(%esp)
0842148c +0x426:  mov    -0xd8(%ebp),%ecx
08421492 +0x42c:  mov    %ecx,0x38(%esp)
08421496 +0x430:  mov    -0xd4(%ebp),%ecx
0842149c +0x436:  mov    %ecx,0x34(%esp)
084214a0 +0x43a:  mov    -0xd0(%ebp),%ecx
084214a6 +0x440:  mov    %ecx,0x30(%esp)
084214aa +0x444:  mov    -0xcc(%ebp),%ecx
084214b0 +0x44a:  mov    %ecx,0x2c(%esp)
084214b4 +0x44e:  mov    -0xc8(%ebp),%ecx
084214ba +0x454:  mov    %ecx,0x28(%esp)
084214be +0x458:  mov    -0xc4(%ebp),%ecx
084214c4 +0x45e:  mov    %ecx,0x24(%esp)
084214c8 +0x462:  mov    -0xc0(%ebp),%ecx
084214ce +0x468:  mov    %ecx,0x20(%esp)
084214d2 +0x46c:  mov    -0xbc(%ebp),%ecx
084214d8 +0x472:  mov    %ecx,0x1c(%esp)
084214dc +0x476:  mov    %edi,0x18(%esp)
084214e0 +0x47a:  mov    %esi,0x14(%esp)
084214e4 +0x47e:  mov    %ebx,0x10(%esp)
084214e8 +0x482:  mov    %eax,0xc(%esp)
084214ec +0x486:  mov    %edx,0x8(%esp)
084214f0 +0x48a:  movl   $"inSert into dnf_party_ping_history_pvp(str_ip,m_id,nat_type_1,ping1,mtu_1,nat_type_2,ping2,mtu_2,nat_type_3,ping3,mtu_3,nat_type_4,ping4,mtu_4,nat_type_5,ping5,mtu_5,nat_type_6,ping6,mtu_6,nat_type_7,ping7,mtu_7,nat_type_8,ping8,mtu_8,occ_time,map_id,dungeon_id,ip_1,ip_2,ip_3,ip_4,ip_5,ip_6,ip_7,ip_8, end_reason) values('%s',%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,now(),%d,%d,'%s','%s','%s','%s','%s','%s','%s','%s',%d)",0x4(%esp)
084214f8 +0x492:  mov    -0x24(%ebp),%eax
084214fb +0x495:  mov    %eax,(%esp)
084214fe +0x498:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08421503 +0x49d:  movl   $0x1,0x4(%esp)
0842150b +0x4a5:  mov    -0x24(%ebp),%eax
0842150e +0x4a8:  mov    %eax,(%esp)
08421511 +0x4ab:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08421516 +0x4b0:  mov    %al,-0x1d(%ebp)
08421519 +0x4b3:  movzbl -0x1d(%ebp),%eax
0842151d +0x4b7:  xor    $0x1,%eax
08421520 +0x4ba:  test   %al,%al
08421522 +0x4bc:  je     0842155a <+0x4f4>
08421524 +0x4be:  movl   $0x5,0xc(%esp)
0842152c +0x4c6:  movl   $0x58db,0x8(%esp)
08421534 +0x4ce:  movl   $&_ZZN22DB_GatheringParyStatus25save_dnf_pvp_ping_historyEP16SIG_PARTY_STATUSE19__PRETTY_FUNCTION__,0x4(%esp)
0842153c +0x4d6:  lea    -0x34(%ebp),%eax
0842153f +0x4d9:  mov    %eax,(%esp)
08421542 +0x4dc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08421547 +0x4e1:  movl   $"DB_GatheringParyStatus failed",0x4(%esp)
0842154f +0x4e9:  lea    -0x34(%ebp),%eax
08421552 +0x4ec:  mov    %eax,(%esp)
08421555 +0x4ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842155a +0x4f4:  mov    $0x1,%eax
0842155f +0x4f9:  add    $0x1cc,%esp
08421565 +0x4ff:  pop    %ebx
08421566 +0x500:  pop    %esi
08421567 +0x501:  pop    %edi
08421568 +0x502:  pop    %ebp
08421569 +0x503:  ret
```

## 反编译 C

```c
// DB_GatheringParyStatus::save_dnf_pvp_ping_history @ 0x8421066

/* DB_GatheringParyStatus::save_dnf_pvp_ping_history(SIG_PARTY_STATUS*) */

undefined4 __thiscall
DB_GatheringParyStatus::save_dnf_pvp_ping_history
          (DB_GatheringParyStatus *this,SIG_PARTY_STATUS *param_1)

{
  SIG_PARTY_STATUS SVar1;
  SIG_PARTY_STATUS SVar2;
  SIG_PARTY_STATUS SVar3;
  SIG_PARTY_STATUS SVar4;
  SIG_PARTY_STATUS SVar5;
  SIG_PARTY_STATUS SVar6;
  SIG_PARTY_STATUS SVar7;
  SIG_PARTY_STATUS SVar8;
  SIG_PARTY_STATUS SVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  char local_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  cMyTrace local_38 [16];
  MySQL *local_28;
  char local_21;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    sprintf(local_b8 + local_20 * 0x10,"%d.%d.%d.%d",(uint)(byte)param_1[local_20 * 0xd + 0x169],
            (uint)(byte)param_1[local_20 * 0xd + 0x16a],(uint)(byte)param_1[local_20 * 0xd + 0x16b],
            (uint)(byte)param_1[local_20 * 0xd + 0x16c]);
  }
  SVar1 = param_1[0x20];
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar12 = *(undefined4 *)(param_1 + 0x1c0);
  uVar13 = *(undefined4 *)(param_1 + 0x1bc);
  SVar2 = param_1[0x1bb];
  uVar14 = *(undefined4 *)(param_1 + 0x1b3);
  uVar15 = *(undefined4 *)(param_1 + 0x1af);
  SVar3 = param_1[0x1ae];
  uVar16 = *(undefined4 *)(param_1 + 0x1a6);
  uVar17 = *(undefined4 *)(param_1 + 0x1a2);
  SVar4 = param_1[0x1a1];
  uVar18 = *(undefined4 *)(param_1 + 0x199);
  uVar19 = *(undefined4 *)(param_1 + 0x195);
  SVar5 = param_1[0x194];
  uVar20 = *(undefined4 *)(param_1 + 0x18c);
  uVar21 = *(undefined4 *)(param_1 + 0x188);
  SVar6 = param_1[0x187];
  uVar22 = *(undefined4 *)(param_1 + 0x17f);
  uVar23 = *(undefined4 *)(param_1 + 0x17b);
  SVar7 = param_1[0x17a];
  uVar24 = *(undefined4 *)(param_1 + 0x172);
  uVar25 = *(undefined4 *)(param_1 + 0x16e);
  SVar8 = param_1[0x16d];
  uVar26 = *(undefined4 *)(param_1 + 0x165);
  uVar27 = *(undefined4 *)(param_1 + 0x161);
  SVar9 = param_1[0x160];
  uVar28 = NumberToString(*(uint *)(param_1 + 0x10),0);
  MySQL::set_query(local_28,
                   "inSert into dnf_party_ping_history_pvp(str_ip,m_id,nat_type_1,ping1,mtu_1,nat_type_2,ping2,mtu_2,nat_type_3,ping3,mtu_3,nat_type_4,ping4,mtu_4,nat_type_5,ping5,mtu_5,nat_type_6,ping6,mtu_6,nat_type_7,ping7,mtu_7,nat_type_8,ping8,mtu_8,occ_time,map_id,dungeon_id,ip_1,ip_2,ip_3,ip_4,ip_5,ip_6,ip_7,ip_8, end_reason) values(\'%s\',%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,now(),%d,%d,\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',\'%s\',%d)"
                   ,param_1,uVar28,(uint)(byte)SVar9,uVar27,uVar26,(uint)(byte)SVar8,uVar25,uVar24,
                   (uint)(byte)SVar7,uVar23,uVar22,(uint)(byte)SVar6,uVar21,uVar20,(uint)(byte)SVar5
                   ,uVar19,uVar18,(uint)(byte)SVar4,uVar17,uVar16,(uint)(byte)SVar3,uVar15,uVar14,
                   (uint)(byte)SVar2,uVar13,uVar12,uVar11,uVar10,local_b8,auStack_a8,auStack_98,
                   auStack_88,auStack_78,auStack_68,auStack_58,auStack_48,(uint)(byte)SVar1);
  local_21 = MySQL::exec(local_28,true);
  if (local_21 != '\x01') {
    cMyTrace::cMyTrace(local_38,
                       "bool DB_GatheringParyStatus::save_dnf_pvp_ping_history(SIG_PARTY_STATUS*)",
                       0x58db,5);
    cMyTrace::operator()(local_38,"DB_GatheringParyStatus failed");
  }
  return 1;
}
```
