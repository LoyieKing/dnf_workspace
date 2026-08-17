# Inter_DB_RequestBlackCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d1218 Inter_DB_RequestBlackCount::dispatch_sig  [0x084d1218-0x84d1343] ===
 84d1218:	55                   	push   %ebp
 84d1219:	89 e5                	mov    %esp,%ebp
 84d121b:	56                   	push   %esi
 84d121c:	53                   	push   %ebx
 84d121d:	83 ec 20             	sub    $0x20,%esp
 84d1220:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1223:	89 04 24             	mov    %eax,(%esp)
 84d1226:	e8 61 91 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d122b:	85 c0                	test   %eax,%eax
 84d122d:	0f 94 c0             	sete   %al
 84d1230:	84 c0                	test   %al,%al
 84d1232:	74 0a                	je     84d123e <_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci+0x26>
 84d1234:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1239:	e9 ff 00 00 00       	jmp    84d133d <_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci+0x125>
 84d123e:	8b 45 10             	mov    0x10(%ebp),%eax
 84d1241:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d1244:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1247:	8b 40 04             	mov    0x4(%eax),%eax
 84d124a:	85 c0                	test   %eax,%eax
 84d124c:	75 19                	jne    84d1267 <_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci+0x4f>
 84d124e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1251:	8b 40 08             	mov    0x8(%eax),%eax
 84d1254:	89 c2                	mov    %eax,%edx
 84d1256:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1259:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d125d:	89 04 24             	mov    %eax,(%esp)
 84d1260:	e8 4f e4 d5 ff       	call   822f6b4 <_ZN15CUserCharacInfo23setCurrCharacBlackCountEj>
 84d1265:	eb 13                	jmp    84d127a <_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci+0x62>
 84d1267:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d126a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d1271:	00 
 84d1272:	89 04 24             	mov    %eax,(%esp)
 84d1275:	e8 3a e4 d5 ff       	call   822f6b4 <_ZN15CUserCharacInfo23setCurrCharacBlackCountEj>
 84d127a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 84d1281:	00 
 84d1282:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1285:	89 04 24             	mov    %eax,(%esp)
 84d1288:	e8 67 41 c5 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84d128d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1290:	8b 40 0c             	mov    0xc(%eax),%eax
 84d1293:	85 c0                	test   %eax,%eax
 84d1295:	0f 84 9d 00 00 00    	je     84d1338 <_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci+0x120>
 84d129b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d129e:	89 04 24             	mov    %eax,(%esp)
 84d12a1:	e8 a6 ca 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d12a6:	c7 44 24 08 ec 00 00 	movl   $0xec,0x8(%esp)
 84d12ad:	00 
 84d12ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d12b5:	00 
 84d12b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d12b9:	89 04 24             	mov    %eax,(%esp)
 84d12bc:	e8 3b a6 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d12c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d12c4:	8b 40 0c             	mov    0xc(%eax),%eax
 84d12c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d12cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d12ce:	89 04 24             	mov    %eax,(%esp)
 84d12d1:	e8 66 a6 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d12d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d12d9:	8b 40 08             	mov    0x8(%eax),%eax
 84d12dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d12e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d12e3:	89 04 24             	mov    %eax,(%esp)
 84d12e6:	e8 51 a6 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d12eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d12f2:	00 
 84d12f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d12f6:	89 04 24             	mov    %eax,(%esp)
 84d12f9:	e8 5a a6 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d12fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1301:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1305:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1308:	89 04 24             	mov    %eax,(%esp)
 84d130b:	e8 aa 72 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d1310:	eb 1b                	jmp    84d132d <_ZN26Inter_DB_RequestBlackCount12dispatch_sigEP5CUserPci+0x115>
 84d1312:	89 d3                	mov    %edx,%ebx
 84d1314:	89 c6                	mov    %eax,%esi
 84d1316:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1319:	89 04 24             	mov    %eax,(%esp)
 84d131c:	e8 5f cb 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1321:	89 f0                	mov    %esi,%eax
 84d1323:	89 da                	mov    %ebx,%edx
 84d1325:	89 04 24             	mov    %eax,(%esp)
 84d1328:	e8 23 24 61 00       	call   8ae3750 <_Unwind_Resume>
 84d132d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1330:	89 04 24             	mov    %eax,(%esp)
 84d1333:	e8 48 cb 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1338:	b8 00 00 00 00       	mov    $0x0,%eax
 84d133d:	83 c4 20             	add    $0x20,%esp
 84d1340:	5b                   	pop    %ebx
 84d1341:	5e                   	pop    %esi
 84d1342:	5d                   	pop    %ebp
 84d1343:	c3                   	ret

```

```c
// Inter_DB_RequestBlackCount::dispatch_sig @ 0x84d1218

/* Inter_DB_RequestBlackCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DB_RequestBlackCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_10 = param_3;
    if (*(int *)(param_3 + 4) == 0) {
      CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_2,*(uint *)(param_3 + 8));
    }
    else {
      CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_2,0);
    }
    CUser::EnableCharacInfo((CUser *)param_2,7);
    if (*(int *)(local_10 + 0xc) != 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d12bc to 084d130f has its CatchHandler @ 084d1312 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xec);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

