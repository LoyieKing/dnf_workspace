# CDeathTowerPlayDataStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SendDeathTowerPlayInfo

```asm
// === 0860f45c CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo  [0x0860f45c-0x860f5a3] ===
 860f45c:	55                   	push   %ebp
 860f45d:	89 e5                	mov    %esp,%ebp
 860f45f:	56                   	push   %esi
 860f460:	53                   	push   %ebx
 860f461:	83 ec 70             	sub    $0x70,%esp
 860f464:	8b 45 10             	mov    0x10(%ebp),%eax
 860f467:	88 45 c4             	mov    %al,-0x3c(%ebp)
 860f46a:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 860f46d:	89 04 24             	mov    %eax,(%esp)
 860f470:	e8 71 0b 00 00       	call   860ffe6 <_ZN40Packet_DeathTower_Statistic_Playdata_JobC1Ev>
 860f475:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 860f479:	88 45 ec             	mov    %al,-0x14(%ebp)
 860f47c:	8b 45 0c             	mov    0xc(%ebp),%eax
 860f47f:	6b c0 17             	imul   $0x17,%eax,%eax
 860f482:	03 45 14             	add    0x14(%ebp),%eax
 860f485:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 860f489:	0f b6 c0             	movzbl %al,%eax
 860f48c:	66 89 45 ed          	mov    %ax,-0x13(%ebp)
 860f490:	8b 45 0c             	mov    0xc(%ebp),%eax
 860f493:	6b c0 17             	imul   $0x17,%eax,%eax
 860f496:	03 45 14             	add    0x14(%ebp),%eax
 860f499:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 860f49d:	0f b6 c0             	movzbl %al,%eax
 860f4a0:	89 45 ef             	mov    %eax,-0x11(%ebp)
 860f4a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 860f4a6:	6b c0 17             	imul   $0x17,%eax,%eax
 860f4a9:	03 45 14             	add    0x14(%ebp),%eax
 860f4ac:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 860f4b0:	88 45 f3             	mov    %al,-0xd(%ebp)
 860f4b3:	8b 45 18             	mov    0x18(%ebp),%eax
 860f4b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860f4b9:	0f b7 45 ed          	movzwl -0x13(%ebp),%eax
 860f4bd:	66 85 c0             	test   %ax,%ax
 860f4c0:	75 5f                	jne    860f521 <_ZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjj+0xc5>
 860f4c2:	8b 75 f4             	mov    -0xc(%ebp),%esi
 860f4c5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 860f4c9:	0f be d8             	movsbl %al,%ebx
 860f4cc:	8b 45 ef             	mov    -0x11(%ebp),%eax
 860f4cf:	89 c1                	mov    %eax,%ecx
 860f4d1:	0f b7 45 ed          	movzwl -0x13(%ebp),%eax
 860f4d5:	0f bf d0             	movswl %ax,%edx
 860f4d8:	0f b6 45 ec          	movzbl -0x14(%ebp),%eax
 860f4dc:	0f be c0             	movsbl %al,%eax
 860f4df:	89 74 24 24          	mov    %esi,0x24(%esp)
 860f4e3:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 860f4e7:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 860f4eb:	89 54 24 18          	mov    %edx,0x18(%esp)
 860f4ef:	89 44 24 14          	mov    %eax,0x14(%esp)
 860f4f3:	c7 44 24 10 b4 03 ce 	movl   $0x8ce03b4,0x10(%esp)
 860f4fa:	08 
 860f4fb:	c7 44 24 0c fe 05 00 	movl   $0x5fe,0xc(%esp)
 860f502:	00 
 860f503:	c7 44 24 08 40 10 ce 	movl   $0x8ce1040,0x8(%esp)
 860f50a:	08 
 860f50b:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860f512:	08 
 860f513:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 860f51a:	e8 eb 46 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 860f51f:	eb 2c                	jmp    860f54d <_ZN28CDeathTowerPlayDataStatistic22SendDeathTowerPlayInfoEicPK30stDeathTowerRecordMemberInfo_tjj+0xf1>
 860f521:	8d 5d e2             	lea    -0x1e(%ebp),%ebx
 860f524:	a1 30 be 40 09       	mov    0x940be30,%eax
 860f529:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860f530:	00 
 860f531:	89 04 24             	mov    %eax,(%esp)
 860f534:	e8 bf 27 b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860f539:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 860f540:	00 
 860f541:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f545:	89 04 24             	mov    %eax,(%esp)
 860f548:	e8 f7 2a e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860f54d:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 860f550:	89 04 24             	mov    %eax,(%esp)
 860f553:	e8 b2 0a 00 00       	call   861000a <_ZN42Packet_DeathTower_Statistic_Playdata_PartyC1Ev>
 860f558:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 860f55c:	88 45 dc             	mov    %al,-0x24(%ebp)
 860f55f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860f562:	88 45 dd             	mov    %al,-0x23(%ebp)
 860f565:	8b 45 18             	mov    0x18(%ebp),%eax
 860f568:	89 45 de             	mov    %eax,-0x22(%ebp)
 860f56b:	8d 5d d2             	lea    -0x2e(%ebp),%ebx
 860f56e:	a1 30 be 40 09       	mov    0x940be30,%eax
 860f573:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860f57a:	00 
 860f57b:	89 04 24             	mov    %eax,(%esp)
 860f57e:	e8 75 27 b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860f583:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 860f58a:	00 
 860f58b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f58f:	89 04 24             	mov    %eax,(%esp)
 860f592:	e8 ad 2a e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860f597:	b8 01 00 00 00       	mov    $0x1,%eax
 860f59c:	83 c4 70             	add    $0x70,%esp
 860f59f:	5b                   	pop    %ebx
 860f5a0:	5e                   	pop    %esi
 860f5a1:	5d                   	pop    %ebp
 860f5a2:	c3                   	ret
 860f5a3:	90                   	nop

```

```c
// CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo @ 0x860f45c

/* CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, stDeathTowerRecordMemberInfo_t
   const*, unsigned int, unsigned int) */

undefined4 __thiscall
CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo
          (CDeathTowerPlayDataStatistic *this,int param_1,char param_2,
          stDeathTowerRecordMemberInfo_t *param_3,uint param_4,uint param_5)

{
  CStatisticServerProxy *pCVar1;
  Packet_DeathTower_Statistic_Playdata_Party local_32 [10];
  char local_28;
  undefined1 local_27;
  uint local_26;
  Packet_DeathTower_Statistic_Playdata_Job local_22 [10];
  char local_18;
  ushort local_17;
  uint local_15;
  stDeathTowerRecordMemberInfo_t local_11;
  uint local_10;
  
  Packet_DeathTower_Statistic_Playdata_Job::Packet_DeathTower_Statistic_Playdata_Job(local_22);
  local_17 = (ushort)(byte)param_3[param_1 * 0x17 + 0x14];
  local_15 = (uint)(byte)param_3[param_1 * 0x17 + 0x15];
  local_11 = param_3[param_1 * 0x17 + 0x16];
  local_10 = param_4;
  local_18 = param_2;
  if (local_17 == 0) {
    LogManager::logFormat
              (1,"Statistics.cpp",
               "bool CDeathTowerPlayDataStatistic::SendDeathTowerPlayInfo(int, char, const stDeathTowerRecordMemberInfo_t*, unsigned int, unsigned int)"
               ,0x5fe,
               "CDeathTowerPlayDataStatistic ERROR!! deathTower_type (%d) level (%d) job_ (%d) grow_type_ (%d) clearStage (%d)"
               ,(int)param_2,0,local_15,(int)(char)local_11,param_4);
  }
  else {
    pCVar1 = (CStatisticServerProxy *)
             CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                       (GlobalData::s_statistic_proxy_mgr,0);
    CStatisticServerProxy::SendPacket(pCVar1,(char *)local_22,0x16);
  }
  Packet_DeathTower_Statistic_Playdata_Party::Packet_DeathTower_Statistic_Playdata_Party(local_32);
  local_27 = (undefined1)param_5;
  local_26 = param_4;
  local_28 = param_2;
  pCVar1 = (CStatisticServerProxy *)
           CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                     (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(pCVar1,(char *)local_32,0x10);
  return 1;
}

```

