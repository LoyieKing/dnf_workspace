# DisPatcher_MakePVP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ExtractPacket

```asm
// === 081f81ba DisPatcher_MakePVP::ExtractPacket  [0x081f81ba-0x81f837f] ===
 81f81ba:	55                   	push   %ebp
 81f81bb:	89 e5                	mov    %esp,%ebp
 81f81bd:	83 ec 28             	sub    $0x28,%esp
 81f81c0:	8b 45 10             	mov    0x10(%ebp),%eax
 81f81c3:	83 c0 0d             	add    $0xd,%eax
 81f81c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f81ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f81cd:	89 04 24             	mov    %eax,(%esp)
 81f81d0:	e8 4d 4d 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f81d5:	83 f0 01             	xor    $0x1,%eax
 81f81d8:	84 c0                	test   %al,%al
 81f81da:	75 0b                	jne    81f81e7 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x2d>
 81f81dc:	8b 45 10             	mov    0x10(%ebp),%eax
 81f81df:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81f81e3:	84 c0                	test   %al,%al
 81f81e5:	79 07                	jns    81f81ee <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x34>
 81f81e7:	b8 01 00 00 00       	mov    $0x1,%eax
 81f81ec:	eb 05                	jmp    81f81f3 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x39>
 81f81ee:	b8 00 00 00 00       	mov    $0x0,%eax
 81f81f3:	84 c0                	test   %al,%al
 81f81f5:	74 0a                	je     81f8201 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x47>
 81f81f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81f81fc:	e9 7d 01 00 00       	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f8201:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8204:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81f8208:	84 c0                	test   %al,%al
 81f820a:	75 7e                	jne    81f828a <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0xd0>
 81f820c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81f8213:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81f8216:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f821a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f821d:	89 04 24             	mov    %eax,(%esp)
 81f8220:	e8 cb 4e 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f8225:	83 f0 01             	xor    $0x1,%eax
 81f8228:	84 c0                	test   %al,%al
 81f822a:	75 0f                	jne    81f823b <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x81>
 81f822c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f822f:	85 c0                	test   %eax,%eax
 81f8231:	78 08                	js     81f823b <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x81>
 81f8233:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f8236:	83 f8 1d             	cmp    $0x1d,%eax
 81f8239:	7e 07                	jle    81f8242 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x88>
 81f823b:	b8 01 00 00 00       	mov    $0x1,%eax
 81f8240:	eb 05                	jmp    81f8247 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x8d>
 81f8242:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8247:	84 c0                	test   %al,%al
 81f8249:	74 0a                	je     81f8255 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x9b>
 81f824b:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8250:	e9 29 01 00 00       	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f8255:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f8258:	8b 55 10             	mov    0x10(%ebp),%edx
 81f825b:	83 c2 0e             	add    $0xe,%edx
 81f825e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81f8262:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81f8269:	00 
 81f826a:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f826e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8271:	89 04 24             	mov    %eax,(%esp)
 81f8274:	e8 43 50 39 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81f8279:	83 f0 01             	xor    $0x1,%eax
 81f827c:	84 c0                	test   %al,%al
 81f827e:	74 0a                	je     81f828a <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0xd0>
 81f8280:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8285:	e9 f4 00 00 00       	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f828a:	8b 45 10             	mov    0x10(%ebp),%eax
 81f828d:	83 c0 2c             	add    $0x2c,%eax
 81f8290:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8294:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8297:	89 04 24             	mov    %eax,(%esp)
 81f829a:	e8 21 4d 39 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81f829f:	83 f0 01             	xor    $0x1,%eax
 81f82a2:	84 c0                	test   %al,%al
 81f82a4:	74 0a                	je     81f82b0 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0xf6>
 81f82a6:	b8 00 00 00 00       	mov    $0x0,%eax
 81f82ab:	e9 ce 00 00 00       	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f82b0:	8b 45 10             	mov    0x10(%ebp),%eax
 81f82b3:	83 c0 2e             	add    $0x2e,%eax
 81f82b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f82ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f82bd:	89 04 24             	mov    %eax,(%esp)
 81f82c0:	e8 5d 4c 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f82c5:	83 f0 01             	xor    $0x1,%eax
 81f82c8:	84 c0                	test   %al,%al
 81f82ca:	74 0a                	je     81f82d6 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x11c>
 81f82cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81f82d1:	e9 a8 00 00 00       	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f82d6:	8b 45 10             	mov    0x10(%ebp),%eax
 81f82d9:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 81f82dd:	3c 01                	cmp    $0x1,%al
 81f82df:	75 62                	jne    81f8343 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x189>
 81f82e1:	8b 45 10             	mov    0x10(%ebp),%eax
 81f82e4:	83 c0 2f             	add    $0x2f,%eax
 81f82e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f82eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f82ee:	89 04 24             	mov    %eax,(%esp)
 81f82f1:	e8 fa 4d 39 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81f82f6:	83 f0 01             	xor    $0x1,%eax
 81f82f9:	84 c0                	test   %al,%al
 81f82fb:	74 07                	je     81f8304 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x14a>
 81f82fd:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8302:	eb 7a                	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f8304:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8307:	8b 40 2f             	mov    0x2f(%eax),%eax
 81f830a:	83 f8 08             	cmp    $0x8,%eax
 81f830d:	7e 07                	jle    81f8316 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x15c>
 81f830f:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8314:	eb 68                	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f8316:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8319:	8b 40 2f             	mov    0x2f(%eax),%eax
 81f831c:	8b 55 10             	mov    0x10(%ebp),%edx
 81f831f:	83 c2 33             	add    $0x33,%edx
 81f8322:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f8326:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f832a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f832d:	89 04 24             	mov    %eax,(%esp)
 81f8330:	e8 7d 50 39 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81f8335:	83 f0 01             	xor    $0x1,%eax
 81f8338:	84 c0                	test   %al,%al
 81f833a:	74 07                	je     81f8343 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x189>
 81f833c:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8341:	eb 3b                	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f8343:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81f8346:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f834a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f834d:	89 04 24             	mov    %eax,(%esp)
 81f8350:	e8 cd 4b 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f8355:	83 f0 01             	xor    $0x1,%eax
 81f8358:	84 c0                	test   %al,%al
 81f835a:	74 07                	je     81f8363 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1a9>
 81f835c:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8361:	eb 1b                	jmp    81f837e <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1c4>
 81f8363:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8366:	c6 40 3c 00          	movb   $0x0,0x3c(%eax)
 81f836a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81f836e:	3c 01                	cmp    $0x1,%al
 81f8370:	75 07                	jne    81f8379 <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM+0x1bf>
 81f8372:	8b 45 10             	mov    0x10(%ebp),%eax
 81f8375:	c6 40 3c 01          	movb   $0x1,0x3c(%eax)
 81f8379:	b8 01 00 00 00       	mov    $0x1,%eax
 81f837e:	c9                   	leave
 81f837f:	c3                   	ret

```

```c
// DisPatcher_MakePVP::ExtractPacket @ 0x81f81ba

/* DisPatcher_MakePVP::ExtractPacket(PacketBuf&, MSG_MAKE_PVP_ROOM&) */

undefined4 __thiscall
DisPatcher_MakePVP::ExtractPacket
          (DisPatcher_MakePVP *this,PacketBuf *param_1,MSG_MAKE_PVP_ROOM *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  char local_d [9];
  
  cVar2 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if ((cVar2 == '\x01') && (-1 < (char)param_2[0xd])) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  if (param_2[0xd] == (MSG_MAKE_PVP_ROOM)0x0) {
    local_14 = 0;
    cVar2 = PacketBuf::get_int(param_1,&local_14);
    if (((cVar2 == '\x01') && (-1 < local_14)) && (local_14 < 0x1e)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0;
    }
    cVar2 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xe),0x1e,local_14);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  cVar2 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x2c));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x2e));
    if (cVar2 == '\x01') {
      if (param_2[0x2e] == (MSG_MAKE_PVP_ROOM)0x1) {
        cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x2f));
        if (cVar2 != '\x01') {
          return 0;
        }
        if (8 < *(int *)(param_2 + 0x2f)) {
          return 0;
        }
        cVar2 = PacketBuf::get_binary(param_1,(char *)(param_2 + 0x33),*(int *)(param_2 + 0x2f));
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      cVar2 = PacketBuf::get_byte(param_1,local_d);
      if (cVar2 == '\x01') {
        param_2[0x3c] = (MSG_MAKE_PVP_ROOM)0x0;
        if (local_d[0] == '\x01') {
          param_2[0x3c] = (MSG_MAKE_PVP_ROOM)0x1;
        }
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## dispatch_sig

```asm
// === 081f803e DisPatcher_MakePVP::dispatch_sig  [0x081f803e-0x81f81b9] ===
 81f803e:	55                   	push   %ebp
 81f803f:	89 e5                	mov    %esp,%ebp
 81f8041:	56                   	push   %esi
 81f8042:	53                   	push   %ebx
 81f8043:	83 ec 60             	sub    $0x60,%esp
 81f8046:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 81f804d:	00 
 81f804e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f8055:	00 
 81f8056:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 81f8059:	89 04 24             	mov    %eax,(%esp)
 81f805c:	e8 5f 5c e8 ff       	call   807dcc0 <memset@plt>
 81f8061:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 81f8064:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f8068:	8b 45 10             	mov    0x10(%ebp),%eax
 81f806b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f806f:	8b 45 08             	mov    0x8(%ebp),%eax
 81f8072:	89 04 24             	mov    %eax,(%esp)
 81f8075:	e8 40 01 00 00       	call   81f81ba <_ZN18DisPatcher_MakePVP13ExtractPacketER9PacketBufR17MSG_MAKE_PVP_ROOM>
 81f807a:	83 f0 01             	xor    $0x1,%eax
 81f807d:	84 c0                	test   %al,%al
 81f807f:	74 2b                	je     81f80ac <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0x6e>
 81f8081:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f8088:	00 
 81f8089:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f8090:	00 
 81f8091:	c7 44 24 04 c0 fe bc 	movl   $0x8bcfec0,0x4(%esp)
 81f8098:	08 
 81f8099:	c7 04 24 b6 85 00 00 	movl   $0x85b6,(%esp)
 81f80a0:	e8 32 88 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f80a5:	89 c3                	mov    %eax,%ebx
 81f80a7:	e9 04 01 00 00       	jmp    81f81b0 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0x172>
 81f80ac:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81f80af:	89 04 24             	mov    %eax,(%esp)
 81f80b2:	e8 19 80 4e 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81f80b7:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81f80ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f80be:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 81f80c1:	83 c0 0e             	add    $0xe,%eax
 81f80c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f80c8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81f80cb:	89 04 24             	mov    %eax,(%esp)
 81f80ce:	e8 5d f5 50 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81f80d3:	eb 1b                	jmp    81f80f0 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 81f80d5:	89 d3                	mov    %edx,%ebx
 81f80d7:	89 c6                	mov    %eax,%esi
 81f80d9:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81f80dc:	89 04 24             	mov    %eax,(%esp)
 81f80df:	e8 0c 80 4e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81f80e4:	89 f0                	mov    %esi,%eax
 81f80e6:	89 da                	mov    %ebx,%edx
 81f80e8:	89 04 24             	mov    %eax,(%esp)
 81f80eb:	e8 60 b6 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f80f0:	8d 45 f7             	lea    -0x9(%ebp),%eax
 81f80f3:	89 04 24             	mov    %eax,(%esp)
 81f80f6:	e8 f5 7f 4e 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81f80fb:	e8 01 cf 03 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81f8100:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81f8103:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f8107:	89 04 24             	mov    %eax,(%esp)
 81f810a:	e8 13 65 43 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 81f810f:	84 c0                	test   %al,%al
 81f8111:	74 22                	je     81f8135 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0xf7>
 81f8113:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 81f811a:	00 
 81f811b:	c7 44 24 04 35 00 00 	movl   $0x35,0x4(%esp)
 81f8122:	00 
 81f8123:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8126:	89 04 24             	mov    %eax,(%esp)
 81f8129:	e8 14 3e 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f812e:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8133:	eb 70                	jmp    81f81a5 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0x167>
 81f8135:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 81f8139:	84 c0                	test   %al,%al
 81f813b:	74 24                	je     81f8161 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0x123>
 81f813d:	c7 44 24 0c 06 00 00 	movl   $0x6,0xc(%esp)
 81f8144:	00 
 81f8145:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 81f814c:	00 
 81f814d:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 81f8150:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8154:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8157:	89 04 24             	mov    %eax,(%esp)
 81f815a:	e8 dd f7 ff ff       	call   81f793c <_Z11MakePVPRoomP5CUserR17MSG_MAKE_PVP_ROOM14ENUM_CMDPACKET15PVP_BATTLE_MODE>
 81f815f:	eb 22                	jmp    81f8183 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0x145>
 81f8161:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 81f8168:	00 
 81f8169:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 81f8170:	00 
 81f8171:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 81f8174:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8178:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f817b:	89 04 24             	mov    %eax,(%esp)
 81f817e:	e8 b9 f7 ff ff       	call   81f793c <_Z11MakePVPRoomP5CUserR17MSG_MAKE_PVP_ROOM14ENUM_CMDPACKET15PVP_BATTLE_MODE>
 81f8183:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f8188:	eb 1b                	jmp    81f81a5 <_ZN18DisPatcher_MakePVP12dispatch_sigEP5CUserR9PacketBuf+0x167>
 81f818a:	89 d3                	mov    %edx,%ebx
 81f818c:	89 c6                	mov    %eax,%esi
 81f818e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81f8191:	89 04 24             	mov    %eax,(%esp)
 81f8194:	e8 47 fa 50 00       	call   8707be0 <_ZNSsD1Ev>
 81f8199:	89 f0                	mov    %esi,%eax
 81f819b:	89 da                	mov    %ebx,%edx
 81f819d:	89 04 24             	mov    %eax,(%esp)
 81f81a0:	e8 ab b5 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f81a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81f81a8:	89 04 24             	mov    %eax,(%esp)
 81f81ab:	e8 30 fa 50 00       	call   8707be0 <_ZNSsD1Ev>
 81f81b0:	89 d8                	mov    %ebx,%eax
 81f81b2:	83 c4 60             	add    $0x60,%esp
 81f81b5:	5b                   	pop    %ebx
 81f81b6:	5e                   	pop    %esi
 81f81b7:	5d                   	pop    %ebp
 81f81b8:	c3                   	ret
 81f81b9:	90                   	nop

```

```c
// DisPatcher_MakePVP::dispatch_sig @ 0x81f803e

/* DisPatcher_MakePVP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_MakePVP::dispatch_sig(DisPatcher_MakePVP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CSyncSlangFilter *this_00;
  MSG_MAKE_PVP_ROOM local_51 [14];
  char acStack_43 [46];
  char local_15;
  string local_14;
  allocator<char> local_d;
  
  memset(local_51,0,0x3d);
  cVar1 = ExtractPacket(this,param_2,local_51);
  if (cVar1 == '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 081f80ce to 081f80d2 has its CatchHandler @ 081f80d5 */
    std::string::string((string *)&local_14,acStack_43,(allocator *)&local_d);
    std::allocator<char>::~allocator(&local_d);
                    /* try { // try from 081f80fb to 081f8182 has its CatchHandler @ 081f818a */
    this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar1 = CSyncSlangFilter::HasSlang(this_00,&local_14);
    if (cVar1 == '\0') {
      if (local_15 == '\0') {
        MakePVPRoom(param_1,local_51,0x35,2);
      }
      else {
        MakePVPRoom(param_1,local_51,0x35,6);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x35,0x9f);
    }
    uVar2 = 0;
    std::string::~string((string *)&local_14);
  }
  else {
    uVar2 = LineFunc(0x85b6,"virtual int DisPatcher_MakePVP::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar2;
}

```

