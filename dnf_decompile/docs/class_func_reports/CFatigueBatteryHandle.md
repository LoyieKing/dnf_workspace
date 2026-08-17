# CFatigueBatteryHandle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## ActiveFatigueBattery

```asm
// === 084a83da CFatigueBatteryHandle::ActiveFatigueBattery  [0x084a83da-0x84a8459] ===
 84a83da:	55                   	push   %ebp
 84a83db:	89 e5                	mov    %esp,%ebp
 84a83dd:	53                   	push   %ebx
 84a83de:	83 ec 24             	sub    $0x24,%esp
 84a83e1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84a83e8:	e8 ae 3d c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a83ed:	83 c0 68             	add    $0x68,%eax
 84a83f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a83f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a83f6:	0f b6 80 c9 05 00 00 	movzbl 0x5c9(%eax),%eax
 84a83fd:	0f b6 d8             	movzbl %al,%ebx
 84a8400:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8403:	89 04 24             	mov    %eax,(%esp)
 84a8406:	e8 ad 1e c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a840b:	39 c3                	cmp    %eax,%ebx
 84a840d:	7f 23                	jg     84a8432 <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser+0x58>
 84a840f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8412:	89 04 24             	mov    %eax,(%esp)
 84a8415:	e8 9e 1e c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a841a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84a841d:	0f b6 92 d0 05 00 00 	movzbl 0x5d0(%edx),%edx
 84a8424:	0f b6 d2             	movzbl %dl,%edx
 84a8427:	39 d0                	cmp    %edx,%eax
 84a8429:	7d 07                	jge    84a8432 <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser+0x58>
 84a842b:	b8 01 00 00 00       	mov    $0x1,%eax
 84a8430:	eb 05                	jmp    84a8437 <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser+0x5d>
 84a8432:	b8 00 00 00 00       	mov    $0x0,%eax
 84a8437:	84 c0                	test   %al,%al
 84a8439:	74 16                	je     84a8451 <_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser+0x77>
 84a843b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a843e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8442:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8445:	89 04 24             	mov    %eax,(%esp)
 84a8448:	e8 51 fe ff ff       	call   84a829e <_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser>
 84a844d:	98                   	cwtl
 84a844e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a8451:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a8454:	83 c4 24             	add    $0x24,%esp
 84a8457:	5b                   	pop    %ebx
 84a8458:	5d                   	pop    %ebp
 84a8459:	c3                   	ret

```

```c
// CFatigueBatteryHandle::ActiveFatigueBattery @ 0x84a83da

/* CFatigueBatteryHandle::ActiveFatigueBattery(CUser*) */

int __thiscall
CFatigueBatteryHandle::ActiveFatigueBattery(CFatigueBatteryHandle *this,CUser *param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;
  
  local_14 = 0;
  iVar4 = G_CDataManager();
  bVar1 = *(byte *)(iVar4 + 0x631);
  iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if ((int)(uint)bVar1 <= iVar5) {
    iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar5 < (int)(uint)*(byte *)(iVar4 + 0x638)) {
      bVar2 = true;
      goto LAB_084a8437;
    }
  }
  bVar2 = false;
LAB_084a8437:
  if (bVar2) {
    sVar3 = ActiveFatigueBattery_NotEndLevel(this,param_1);
    local_14 = (int)sVar3;
  }
  return local_14;
}

```

---

## ActiveFatigueBattery_EndLevel

```asm
// === 084a81f4 CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel  [0x084a81f4-0x84a829d] ===
 84a81f4:	55                   	push   %ebp
 84a81f5:	89 e5                	mov    %esp,%ebp
 84a81f7:	53                   	push   %ebx
 84a81f8:	83 ec 34             	sub    $0x34,%esp
 84a81fb:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84a8202:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8205:	89 04 24             	mov    %eax,(%esp)
 84a8208:	e8 71 03 00 00       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84a820d:	98                   	cwtl
 84a820e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a8211:	e8 85 3f c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a8216:	83 c0 68             	add    $0x68,%eax
 84a8219:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a821c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a821f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a8222:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8225:	89 04 24             	mov    %eax,(%esp)
 84a8228:	e8 51 03 00 00       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84a822d:	98                   	cwtl
 84a822e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 84a8231:	0f 95 c0             	setne  %al
 84a8234:	84 c0                	test   %al,%al
 84a8236:	74 5d                	je     84a8295 <_ZN21CFatigueBatteryHandle29ActiveFatigueBattery_EndLevelEP5CUser+0xa1>
 84a8238:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a823b:	89 04 24             	mov    %eax,(%esp)
 84a823e:	e8 0b 3a c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84a8243:	89 c3                	mov    %eax,%ebx
 84a8245:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a824c:	00 
 84a824d:	c7 44 24 08 77 00 00 	movl   $0x77,0x8(%esp)
 84a8254:	00 
 84a8255:	c7 44 24 04 60 f9 c7 	movl   $0x8c7f960,0x4(%esp)
 84a825c:	08 
 84a825d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a8260:	89 04 24             	mov    %eax,(%esp)
 84a8263:	e8 b0 74 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a8268:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a826b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a826f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a8273:	c7 44 24 04 20 ed c7 	movl   $0x8c7ed20,0x4(%esp)
 84a827a:	08 
 84a827b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84a827e:	89 04 24             	mov    %eax,(%esp)
 84a8281:	e8 02 75 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a8286:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8289:	89 04 24             	mov    %eax,(%esp)
 84a828c:	e8 ed 02 00 00       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84a8291:	98                   	cwtl
 84a8292:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a8295:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a8298:	83 c4 34             	add    $0x34,%esp
 84a829b:	5b                   	pop    %ebx
 84a829c:	5d                   	pop    %ebp
 84a829d:	c3                   	ret

```

```c
// CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel @ 0x84a81f4

/* CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*) */

int __thiscall
CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CFatigueBatteryHandle *this,CUser *param_1)

{
  short sVar1;
  undefined4 uVar2;
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
  local_14 = (int)sVar1;
  local_10 = G_CDataManager();
  local_10 = local_10 + 0x68;
  local_18 = local_14;
  sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
  if (sVar1 != local_18) {
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_28,
                       "short int CFatigueBatteryHandle::ActiveFatigueBattery_EndLevel(CUser*)",0x77
                       ,0);
    cMyTrace::operator()
              (local_28,"FATIGUE BATTERY ACTIVE ERR : char no(%d), usedFatigue(%d)",uVar2,local_18);
    sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
    local_18 = (int)sVar1;
  }
  return local_18;
}

```

---

## ActiveFatigueBattery_NotEndLevel

```asm
// === 084a829e CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel  [0x084a829e-0x84a83d9] ===
 84a829e:	55                   	push   %ebp
 84a829f:	89 e5                	mov    %esp,%ebp
 84a82a1:	53                   	push   %ebx
 84a82a2:	83 ec 54             	sub    $0x54,%esp
 84a82a5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84a82ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a82af:	89 04 24             	mov    %eax,(%esp)
 84a82b2:	e8 c7 02 00 00       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84a82b7:	98                   	cwtl
 84a82b8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a82bb:	e8 db 3e c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a82c0:	83 c0 68             	add    $0x68,%eax
 84a82c3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a82c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a82c9:	0f b7 80 68 07 00 00 	movzwl 0x768(%eax),%eax
 84a82d0:	0f b7 c0             	movzwl %ax,%eax
 84a82d3:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 84a82d6:	0f 8f f4 00 00 00    	jg     84a83d0 <_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser+0x132>
 84a82dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a82df:	0f b7 80 64 07 00 00 	movzwl 0x764(%eax),%eax
 84a82e6:	66 85 c0             	test   %ax,%ax
 84a82e9:	75 08                	jne    84a82f3 <_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser+0x55>
 84a82eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a82ee:	e9 e0 00 00 00       	jmp    84a83d3 <_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser+0x135>
 84a82f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a82f6:	0f b7 80 66 07 00 00 	movzwl 0x766(%eax),%eax
 84a82fd:	0f b7 c0             	movzwl %ax,%eax
 84a8300:	0f af 45 e4          	imul   -0x1c(%ebp),%eax
 84a8304:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84a8307:	0f b7 92 64 07 00 00 	movzwl 0x764(%edx),%edx
 84a830e:	0f b7 d2             	movzwl %dx,%edx
 84a8311:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 84a8314:	89 c2                	mov    %eax,%edx
 84a8316:	c1 fa 1f             	sar    $0x1f,%edx
 84a8319:	f7 7d c4             	idivl  -0x3c(%ebp)
 84a831c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a831f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a8322:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a8325:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8328:	89 04 24             	mov    %eax,(%esp)
 84a832b:	e8 fc 01 00 00       	call   84a852c <_ZNK15CUserCharacInfo30getCurCharacFatigueGrownUpBuffEv>
 84a8330:	0f b7 c0             	movzwl %ax,%eax
 84a8333:	03 45 ec             	add    -0x14(%ebp),%eax
 84a8336:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a8339:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a833c:	89 04 24             	mov    %eax,(%esp)
 84a833f:	e8 74 1f c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a8344:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84a8347:	81 c2 c0 05 00 00    	add    $0x5c0,%edx
 84a834d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8351:	89 14 24             	mov    %edx,(%esp)
 84a8354:	e8 5d 01 00 00       	call   84a84b6 <_ZNK31stFatigueBatteryConstantTable_t36getLimitGrownupBuffCntFatigueBatteryEi>
 84a8359:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 84a835d:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 84a8361:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84a8364:	7d 07                	jge    84a836d <_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser+0xcf>
 84a8366:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 84a836a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a836d:	8d 45 cf             	lea    -0x31(%ebp),%eax
 84a8370:	89 04 24             	mov    %eax,(%esp)
 84a8373:	e8 76 01 00 00       	call   84a84ee <_ZN38Packet_Fatigue_Battery_Money_StatisticC1Ev>
 84a8378:	e8 04 3e c2 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84a837d:	89 04 24             	mov    %eax,(%esp)
 84a8380:	e8 5b e9 c5 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 84a8385:	88 45 d9             	mov    %al,-0x27(%ebp)
 84a8388:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a838b:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 84a838f:	8d 5d cf             	lea    -0x31(%ebp),%ebx
 84a8392:	a1 30 be 40 09       	mov    0x940be30,%eax
 84a8397:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a839e:	00 
 84a839f:	89 04 24             	mov    %eax,(%esp)
 84a83a2:	e8 51 99 c6 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84a83a7:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 84a83ae:	00 
 84a83af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a83b3:	89 04 24             	mov    %eax,(%esp)
 84a83b6:	e8 89 9c fc ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 84a83bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a83be:	0f b7 d0             	movzwl %ax,%edx
 84a83c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a83c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a83c8:	89 04 24             	mov    %eax,(%esp)
 84a83cb:	e8 7c 01 00 00       	call   84a854c <_ZN15CUserCharacInfo30setCurCharacFatigueGrownUpBuffEt>
 84a83d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a83d3:	83 c4 54             	add    $0x54,%esp
 84a83d6:	5b                   	pop    %ebx
 84a83d7:	5d                   	pop    %ebp
 84a83d8:	c3                   	ret
 84a83d9:	90                   	nop

```

```c
// CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel @ 0x84a829e

/* CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CUser*) */

int __thiscall
CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CFatigueBatteryHandle *this,CUser *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  CEnvironment *this_00;
  CStatisticServerProxy *this_01;
  Packet_Fatigue_Battery_Money_Statistic local_35 [10];
  undefined1 local_2b;
  undefined2 local_26;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  ushort local_e;
  
  local_24 = 0;
  sVar1 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
  local_20 = (int)sVar1;
  iVar2 = G_CDataManager();
  local_1c = iVar2 + 0x68;
  if (((int)(uint)*(ushort *)(iVar2 + 2000) <= local_20) && (*(short *)(iVar2 + 0x7cc) != 0)) {
    local_18 = (int)((uint)*(ushort *)(iVar2 + 0x7ce) * local_20) /
               (int)(uint)*(ushort *)(iVar2 + 0x7cc);
    local_24 = local_20;
    uVar3 = CUserCharacInfo::getCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1);
    local_14 = (uVar3 & 0xffff) + local_18;
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_e = stFatigueBatteryConstantTable_t::getLimitGrownupBuffCntFatigueBattery
                        ((stFatigueBatteryConstantTable_t *)(local_1c + 0x5c0),iVar2);
    if ((int)(uint)local_e < (int)local_14) {
      local_14 = (uint)local_e;
    }
    Packet_Fatigue_Battery_Money_Statistic::Packet_Fatigue_Battery_Money_Statistic(local_35);
    this_00 = (CEnvironment *)G_CEnvironment();
    local_2b = CEnvironment::get_server_group(this_00);
    local_26 = (undefined2)local_14;
    this_01 = (CStatisticServerProxy *)
              CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                        (GlobalData::s_statistic_proxy_mgr,0);
    CStatisticServerProxy::SendPacket(this_01,(char *)local_35,0x11);
    CUserCharacInfo::setCurCharacFatigueGrownUpBuff((CUserCharacInfo *)param_1,(ushort)local_14);
  }
  return local_24;
}

```

---

## CFatigueBatteryHandle

```asm
// === 084a7ff8 CFatigueBatteryHandle::CFatigueBatteryHandle  [0x084a7ff8-0x84a7ffd] ===
 84a7ff8:	55                   	push   %ebp
 84a7ff9:	89 e5                	mov    %esp,%ebp
 84a7ffb:	5d                   	pop    %ebp
 84a7ffc:	c3                   	ret
 84a7ffd:	90                   	nop

```

```c
// CFatigueBatteryHandle::CFatigueBatteryHandle @ 0x84a7ff8

/* CFatigueBatteryHandle::CFatigueBatteryHandle() */

void __thiscall CFatigueBatteryHandle::CFatigueBatteryHandle(CFatigueBatteryHandle *this)

{
  return;
}

```

---

## ChargingFatigueBattery

```asm
// === 084a8094 CFatigueBatteryHandle::ChargingFatigueBattery  [0x084a8094-0x84a81f3] ===
 84a8094:	55                   	push   %ebp
 84a8095:	89 e5                	mov    %esp,%ebp
 84a8097:	57                   	push   %edi
 84a8098:	56                   	push   %esi
 84a8099:	53                   	push   %ebx
 84a809a:	83 ec 4c             	sub    $0x4c,%esp
 84a809d:	e8 f9 40 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a80a2:	83 c0 68             	add    $0x68,%eax
 84a80a5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84a80a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a80ab:	89 04 24             	mov    %eax,(%esp)
 84a80ae:	e8 05 22 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a80b3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84a80b6:	0f b6 92 c9 05 00 00 	movzbl 0x5c9(%edx),%edx
 84a80bd:	0f b6 d2             	movzbl %dl,%edx
 84a80c0:	39 d0                	cmp    %edx,%eax
 84a80c2:	7c 1c                	jl     84a80e0 <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri+0x4c>
 84a80c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a80c7:	89 04 24             	mov    %eax,(%esp)
 84a80ca:	e8 e9 21 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a80cf:	8b 55 d8             	mov    -0x28(%ebp),%edx
 84a80d2:	0f b6 92 d0 05 00 00 	movzbl 0x5d0(%edx),%edx
 84a80d9:	0f b6 d2             	movzbl %dl,%edx
 84a80dc:	39 d0                	cmp    %edx,%eax
 84a80de:	75 07                	jne    84a80e7 <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri+0x53>
 84a80e0:	b8 01 00 00 00       	mov    $0x1,%eax
 84a80e5:	eb 05                	jmp    84a80ec <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri+0x58>
 84a80e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84a80ec:	84 c0                	test   %al,%al
 84a80ee:	74 0a                	je     84a80fa <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri+0x66>
 84a80f0:	b8 00 00 00 00       	mov    $0x0,%eax
 84a80f5:	e9 f2 00 00 00       	jmp    84a81ec <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri+0x158>
 84a80fa:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 84a8101:	00 
 84a8102:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8105:	89 04 24             	mov    %eax,(%esp)
 84a8108:	e8 29 e5 1a 00       	call   8656636 <_ZN5CUser24GetSpecialLevelCharacCntEi>
 84a810d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a8110:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8113:	89 04 24             	mov    %eax,(%esp)
 84a8116:	e8 9f 8b c6 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 84a811b:	0f b7 c0             	movzwl %ax,%eax
 84a811e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a8121:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 84a8126:	2b 45 e0             	sub    -0x20(%ebp),%eax
 84a8129:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a812c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a8130:	79 07                	jns    84a8139 <_ZN21CFatigueBatteryHandle22ChargingFatigueBatteryEP5CUseri+0xa5>
 84a8132:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84a8139:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 84a813e:	0f af 45 10          	imul   0x10(%ebp),%eax
 84a8142:	01 45 e4             	add    %eax,-0x1c(%ebp)
 84a8145:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8148:	89 04 24             	mov    %eax,(%esp)
 84a814b:	e8 68 21 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a8150:	89 c6                	mov    %eax,%esi
 84a8152:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8155:	89 04 24             	mov    %eax,(%esp)
 84a8158:	e8 21 04 00 00       	call   84a857e <_ZN15CUserCharacInfo25GetFatigueBatteryChargingEv>
 84a815d:	0f bf f8             	movswl %ax,%edi
 84a8160:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8163:	89 04 24             	mov    %eax,(%esp)
 84a8166:	e8 e3 3a c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84a816b:	89 c3                	mov    %eax,%ebx
 84a816d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a8174:	00 
 84a8175:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 84a817c:	00 
 84a817d:	c7 44 24 04 c0 f9 c7 	movl   $0x8c7f9c0,0x4(%esp)
 84a8184:	08 
 84a8185:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84a8188:	89 04 24             	mov    %eax,(%esp)
 84a818b:	e8 88 75 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a8190:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a8193:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84a8197:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a819a:	89 44 24 18          	mov    %eax,0x18(%esp)
 84a819e:	89 74 24 14          	mov    %esi,0x14(%esp)
 84a81a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a81a5:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a81a9:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84a81ad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a81b1:	c7 44 24 04 a4 ec c7 	movl   $0x8c7eca4,0x4(%esp)
 84a81b8:	08 
 84a81b9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84a81bc:	89 04 24             	mov    %eax,(%esp)
 84a81bf:	e8 c4 75 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a81c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a81c7:	89 04 24             	mov    %eax,(%esp)
 84a81ca:	e8 e9 20 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 84a81cf:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84a81d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a81d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a81da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a81dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a81e1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a81e4:	89 04 24             	mov    %eax,(%esp)
 84a81e7:	e8 18 fe ff ff       	call   84a8004 <_ZN21CFatigueBatteryHandle29ComputeFatigueBatteryChargingEiii>
 84a81ec:	83 c4 4c             	add    $0x4c,%esp
 84a81ef:	5b                   	pop    %ebx
 84a81f0:	5e                   	pop    %esi
 84a81f1:	5f                   	pop    %edi
 84a81f2:	5d                   	pop    %ebp
 84a81f3:	c3                   	ret

```

```c
// CFatigueBatteryHandle::ChargingFatigueBattery @ 0x84a8094

/* CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int) */

undefined4 __thiscall
CFatigueBatteryHandle::ChargingFatigueBattery
          (CFatigueBatteryHandle *this,CUser *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  local_2c = G_CDataManager();
  local_2c = local_2c + 0x68;
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if ((int)(uint)*(byte *)(local_2c + 0x5c9) <= iVar3) {
    uVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (uVar4 != *(byte *)(local_2c + 0x5d0)) {
      bVar1 = false;
      goto LAB_084a80ec;
    }
  }
  bVar1 = true;
LAB_084a80ec:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    local_28 = CUser::GetSpecialLevelCharacCnt(param_1,0x46);
    local_24 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
    local_24 = local_24 & 0xffff;
    local_20 = DEFAULT_MAX_FATIGUE - local_24;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_20 = local_20 + DEFAULT_MAX_FATIGUE * param_2;
    uVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    sVar2 = CUserCharacInfo::GetFatigueBatteryCharging((CUserCharacInfo *)param_1);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_3c,
                       "short int CFatigueBatteryHandle::ChargingFatigueBattery(CUser*, int)",0x32,0
                      );
    cMyTrace::operator()
              (local_3c,
               "FATIGUE BATTERY : char no(%d), alreadyFatigue(%d), remainFatigue(%d), level(%d), endLevelCnt(%d), thatDayUsedFatigue(%d)"
               ,uVar6,(int)sVar2,local_20,uVar5,local_28,local_24);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    uVar5 = ComputeFatigueBatteryCharging(this,local_20,iVar3,local_28);
  }
  return uVar5;
}

```

---

## ComputeFatigueBatteryCharging

```asm
// === 084a8004 CFatigueBatteryHandle::ComputeFatigueBatteryCharging  [0x084a8004-0x84a8093] ===
 84a8004:	55                   	push   %ebp
 84a8005:	89 e5                	mov    %esp,%ebp
 84a8007:	83 ec 38             	sub    $0x38,%esp
 84a800a:	e8 8c 41 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a800f:	83 c0 68             	add    $0x68,%eax
 84a8012:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a8015:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8018:	0f af 45 10          	imul   0x10(%ebp),%eax
 84a801c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84a801f:	0f b6 92 c8 05 00 00 	movzbl 0x5c8(%edx),%edx
 84a8026:	0f b6 d2             	movzbl %dl,%edx
 84a8029:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 84a802c:	89 c2                	mov    %eax,%edx
 84a802e:	c1 fa 1f             	sar    $0x1f,%edx
 84a8031:	f7 7d d4             	idivl  -0x2c(%ebp)
 84a8034:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a8037:	db 45 e4             	fildl  -0x1c(%ebp)
 84a803a:	db 45 14             	fildl  0x14(%ebp)
 84a803d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a8040:	d9 80 c4 05 00 00    	flds   0x5c4(%eax)
 84a8046:	de c9                	fmulp  %st,%st(1)
 84a8048:	d9 e8                	fld1
 84a804a:	de c1                	faddp  %st,%st(1)
 84a804c:	de c9                	fmulp  %st,%st(1)
 84a804e:	d9 7d e2             	fnstcw -0x1e(%ebp)
 84a8051:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 84a8055:	b4 0c                	mov    $0xc,%ah
 84a8057:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 84a805b:	d9 6d e0             	fldcw  -0x20(%ebp)
 84a805e:	df 7d d8             	fistpll -0x28(%ebp)
 84a8061:	d9 6d e2             	fldcw  -0x1e(%ebp)
 84a8064:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84a8067:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84a806a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a806d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a8070:	0f b7 80 c0 05 00 00 	movzwl 0x5c0(%eax),%eax
 84a8077:	0f b7 c0             	movzwl %ax,%eax
 84a807a:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84a807d:	73 10                	jae    84a808f <_ZN21CFatigueBatteryHandle29ComputeFatigueBatteryChargingEiii+0x8b>
 84a807f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a8082:	0f b7 80 c0 05 00 00 	movzwl 0x5c0(%eax),%eax
 84a8089:	0f b7 c0             	movzwl %ax,%eax
 84a808c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a808f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8092:	c9                   	leave
 84a8093:	c3                   	ret

```

```c
// CFatigueBatteryHandle::ComputeFatigueBatteryCharging @ 0x84a8004

/* CFatigueBatteryHandle::ComputeFatigueBatteryCharging(int, int, int) */

undefined8 __thiscall
CFatigueBatteryHandle::ComputeFatigueBatteryCharging
          (CFatigueBatteryHandle *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_10;
  
  iVar2 = G_CDataManager();
  lVar1 = (longlong)
          ROUND((*(float *)(iVar2 + 0x62c) * (float)param_3 + 1.0) *
                (float)((param_1 * param_2) / (int)(uint)*(byte *)(iVar2 + 0x630)));
  local_2c = (uint)lVar1;
  uStack_28 = (undefined4)((ulonglong)lVar1 >> 0x20);
  local_10 = local_2c;
  if (*(ushort *)(iVar2 + 0x628) < local_2c) {
    local_10 = (uint)*(ushort *)(iVar2 + 0x628);
  }
  return CONCAT44(uStack_28,local_10);
}

```

---

## ~CFatigueBatteryHandle

```asm
// === 084a7ffe CFatigueBatteryHandle::~CFatigueBatteryHandle  [0x084a7ffe-0x84a8003] ===
 84a7ffe:	55                   	push   %ebp
 84a7fff:	89 e5                	mov    %esp,%ebp
 84a8001:	5d                   	pop    %ebp
 84a8002:	c3                   	ret
 84a8003:	90                   	nop

```

```c
// CFatigueBatteryHandle::~CFatigueBatteryHandle @ 0x84a7ffe

/* CFatigueBatteryHandle::~CFatigueBatteryHandle() */

void __thiscall CFatigueBatteryHandle::~CFatigueBatteryHandle(CFatigueBatteryHandle *this)

{
  return;
}

```

