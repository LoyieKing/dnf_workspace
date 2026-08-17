# Inter_PvPChannelInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d8096 Inter_PvPChannelInfo::dispatch_sig  [0x084d8096-0x84d8261] ===
 84d8096:	55                   	push   %ebp
 84d8097:	89 e5                	mov    %esp,%ebp
 84d8099:	56                   	push   %esi
 84d809a:	53                   	push   %ebx
 84d809b:	83 ec 30             	sub    $0x30,%esp
 84d809e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d80a2:	75 0a                	jne    84d80ae <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x18>
 84d80a4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d80a9:	e9 ab 01 00 00       	jmp    84d8259 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x1c3>
 84d80ae:	8b 45 10             	mov    0x10(%ebp),%eax
 84d80b1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d80b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d80b7:	89 04 24             	mov    %eax,(%esp)
 84d80ba:	e8 73 83 c4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d80bf:	85 c0                	test   %eax,%eax
 84d80c1:	74 15                	je     84d80d8 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x42>
 84d80c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d80c6:	89 04 24             	mov    %eax,(%esp)
 84d80c9:	e8 80 3b bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d80ce:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d80d1:	8b 52 0a             	mov    0xa(%edx),%edx
 84d80d4:	39 d0                	cmp    %edx,%eax
 84d80d6:	74 07                	je     84d80df <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x49>
 84d80d8:	b8 01 00 00 00       	mov    $0x1,%eax
 84d80dd:	eb 05                	jmp    84d80e4 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x4e>
 84d80df:	b8 00 00 00 00       	mov    $0x0,%eax
 84d80e4:	84 c0                	test   %al,%al
 84d80e6:	74 0a                	je     84d80f2 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x5c>
 84d80e8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d80ed:	e9 67 01 00 00       	jmp    84d8259 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x1c3>
 84d80f2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d80f5:	89 04 24             	mov    %eax,(%esp)
 84d80f8:	e8 4f 5c 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d80fd:	c7 44 24 08 c6 00 00 	movl   $0xc6,0x8(%esp)
 84d8104:	00 
 84d8105:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d810c:	00 
 84d810d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8110:	89 04 24             	mov    %eax,(%esp)
 84d8113:	e8 e4 37 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d8118:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d811f:	00 
 84d8120:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8123:	89 04 24             	mov    %eax,(%esp)
 84d8126:	e8 f5 37 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d812b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d812e:	8b 40 12             	mov    0x12(%eax),%eax
 84d8131:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8135:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8138:	89 04 24             	mov    %eax,(%esp)
 84d813b:	e8 fc 37 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d8140:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8143:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84d8147:	0f b6 c0             	movzbl %al,%eax
 84d814a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d814e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8151:	89 04 24             	mov    %eax,(%esp)
 84d8154:	e8 c7 37 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d8159:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d8160:	e9 8a 00 00 00       	jmp    84d81ef <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x159>
 84d8165:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d8168:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d816b:	83 c2 01             	add    $0x1,%edx
 84d816e:	c1 e2 04             	shl    $0x4,%edx
 84d8171:	8b 44 02 08          	mov    0x8(%edx,%eax,1),%eax
 84d8175:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8179:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d817c:	89 04 24             	mov    %eax,(%esp)
 84d817f:	e8 b8 37 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d8184:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d8187:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d818a:	83 c2 01             	add    $0x1,%edx
 84d818d:	c1 e2 04             	shl    $0x4,%edx
 84d8190:	8b 44 02 0c          	mov    0xc(%edx,%eax,1),%eax
 84d8194:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8198:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d819b:	89 04 24             	mov    %eax,(%esp)
 84d819e:	e8 99 37 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d81a3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d81a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d81a9:	83 c2 01             	add    $0x1,%edx
 84d81ac:	c1 e2 04             	shl    $0x4,%edx
 84d81af:	8b 44 02 14          	mov    0x14(%edx,%eax,1),%eax
 84d81b3:	83 f8 02             	cmp    $0x2,%eax
 84d81b6:	75 14                	jne    84d81cc <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x136>
 84d81b8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d81bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d81be:	83 c2 01             	add    $0x1,%edx
 84d81c1:	c1 e2 04             	shl    $0x4,%edx
 84d81c4:	c7 44 02 10 04 00 00 	movl   $0x4,0x10(%edx,%eax,1)
 84d81cb:	00 
 84d81cc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d81cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d81d2:	83 c2 01             	add    $0x1,%edx
 84d81d5:	c1 e2 04             	shl    $0x4,%edx
 84d81d8:	8b 44 02 10          	mov    0x10(%edx,%eax,1),%eax
 84d81dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d81e0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d81e3:	89 04 24             	mov    %eax,(%esp)
 84d81e6:	e8 51 37 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d81eb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d81ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d81f2:	0f b6 40 17          	movzbl 0x17(%eax),%eax
 84d81f6:	0f b6 c0             	movzbl %al,%eax
 84d81f9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84d81fc:	0f 9f c0             	setg   %al
 84d81ff:	84 c0                	test   %al,%al
 84d8201:	0f 85 5e ff ff ff    	jne    84d8165 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0xcf>
 84d8207:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d820e:	00 
 84d820f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8212:	89 04 24             	mov    %eax,(%esp)
 84d8215:	e8 3e 37 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d821a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d821d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d8221:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d8224:	89 04 24             	mov    %eax,(%esp)
 84d8227:	e8 8e 03 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d822c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d8231:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8234:	89 04 24             	mov    %eax,(%esp)
 84d8237:	e8 44 5c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d823c:	eb 1b                	jmp    84d8259 <_ZN20Inter_PvPChannelInfo12dispatch_sigEP5CUserPci+0x1c3>
 84d823e:	89 d3                	mov    %edx,%ebx
 84d8240:	89 c6                	mov    %eax,%esi
 84d8242:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d8245:	89 04 24             	mov    %eax,(%esp)
 84d8248:	e8 33 5c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d824d:	89 f0                	mov    %esi,%eax
 84d824f:	89 da                	mov    %ebx,%edx
 84d8251:	89 04 24             	mov    %eax,(%esp)
 84d8254:	e8 f7 b4 60 00       	call   8ae3750 <_Unwind_Resume>
 84d8259:	89 d8                	mov    %ebx,%eax
 84d825b:	83 c4 30             	add    $0x30,%esp
 84d825e:	5b                   	pop    %ebx
 84d825f:	5e                   	pop    %esi
 84d8260:	5d                   	pop    %ebp
 84d8261:	c3                   	ret

```

```c
// Inter_PvPChannelInfo::dispatch_sig @ 0x84d8096

/* Inter_PvPChannelInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PvPChannelInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_14 = param_3;
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if ((iVar2 == 0) ||
       (iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
       iVar2 != *(int *)(local_14 + 10))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d8113 to 084d822b has its CatchHandler @ 084d823e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xc6);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x17));
      for (local_10 = 0; local_10 < (int)(uint)*(byte *)(local_14 + 0x17); local_10 = local_10 + 1)
      {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)((local_10 + 1) * 0x10 + 8 + local_14));
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)((local_10 + 1) * 0x10 + 0xc + local_14));
        if (*(int *)((local_10 + 1) * 0x10 + 0x14 + local_14) == 2) {
          *(undefined4 *)((local_10 + 1) * 0x10 + 0x10 + local_14) = 4;
        }
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_20,*(int *)((local_10 + 1) * 0x10 + 0x10 + local_14))
        ;
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

