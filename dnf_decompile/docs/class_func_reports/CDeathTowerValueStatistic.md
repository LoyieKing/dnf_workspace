# CDeathTowerValueStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SendDeathTowerValueStatistic

```asm
// === 0860f342 CDeathTowerValueStatistic::SendDeathTowerValueStatistic  [0x0860f342-0x860f450] ===
 860f342:	55                   	push   %ebp
 860f343:	89 e5                	mov    %esp,%ebp
 860f345:	53                   	push   %ebx
 860f346:	83 ec 54             	sub    $0x54,%esp
 860f349:	8b 55 10             	mov    0x10(%ebp),%edx
 860f34c:	8b 45 14             	mov    0x14(%ebp),%eax
 860f34f:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 860f352:	88 45 d0             	mov    %al,-0x30(%ebp)
 860f355:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 860f358:	89 04 24             	mov    %eax,(%esp)
 860f35b:	e8 62 0c 00 00       	call   860ffc2 <_ZN33Packet_DeathTower_Statistic_ValueC1Ev>
 860f360:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 860f364:	88 45 ed             	mov    %al,-0x13(%ebp)
 860f367:	66 0f be 45 d0       	movsbw -0x30(%ebp),%ax
 860f36c:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 860f370:	83 7d 0c 0a          	cmpl   $0xa,0xc(%ebp)
 860f374:	0f 85 94 00 00 00    	jne    860f40e <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0xcc>
 860f37a:	8b 45 18             	mov    0x18(%ebp),%eax
 860f37d:	83 f8 01             	cmp    $0x1,%eax
 860f380:	74 21                	je     860f3a3 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0x61>
 860f382:	83 f8 01             	cmp    $0x1,%eax
 860f385:	72 0c                	jb     860f393 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0x51>
 860f387:	83 f8 02             	cmp    $0x2,%eax
 860f38a:	74 27                	je     860f3b3 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0x71>
 860f38c:	83 f8 03             	cmp    $0x3,%eax
 860f38f:	74 32                	je     860f3c3 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0x81>
 860f391:	eb 41                	jmp    860f3d4 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0x92>
 860f393:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
 860f39a:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
 860f3a1:	eb 71                	jmp    860f414 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0xd2>
 860f3a3:	c7 45 f0 04 00 00 00 	movl   $0x4,-0x10(%ebp)
 860f3aa:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
 860f3b1:	eb 61                	jmp    860f414 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0xd2>
 860f3b3:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%ebp)
 860f3ba:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
 860f3c1:	eb 51                	jmp    860f414 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0xd2>
 860f3c3:	c7 45 f0 06 00 00 00 	movl   $0x6,-0x10(%ebp)
 860f3ca:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
 860f3d1:	90                   	nop
 860f3d2:	eb 40                	jmp    860f414 <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0xd2>
 860f3d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 860f3d7:	89 44 24 14          	mov    %eax,0x14(%esp)
 860f3db:	c7 44 24 10 90 03 ce 	movl   $0x8ce0390,0x10(%esp)
 860f3e2:	08 
 860f3e3:	c7 44 24 0c d5 05 00 	movl   $0x5d5,0xc(%esp)
 860f3ea:	00 
 860f3eb:	c7 44 24 08 e0 10 ce 	movl   $0x8ce10e0,0x8(%esp)
 860f3f2:	08 
 860f3f3:	c7 44 24 04 63 02 ce 	movl   $0x8ce0263,0x4(%esp)
 860f3fa:	08 
 860f3fb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 860f402:	e8 03 48 4c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 860f407:	b8 00 00 00 00       	mov    $0x0,%eax
 860f40c:	eb 3d                	jmp    860f44b <_ZN25CDeathTowerValueStatistic28SendDeathTowerValueStatisticE32DEATHTOWER_VALUE_STATISTIC_FIELDccj+0x109>
 860f40e:	8b 45 0c             	mov    0xc(%ebp),%eax
 860f411:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860f414:	8b 45 18             	mov    0x18(%ebp),%eax
 860f417:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860f41a:	8d 5d e3             	lea    -0x1d(%ebp),%ebx
 860f41d:	a1 30 be 40 09       	mov    0x940be30,%eax
 860f422:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860f429:	00 
 860f42a:	89 04 24             	mov    %eax,(%esp)
 860f42d:	e8 c6 28 b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860f432:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 860f439:	00 
 860f43a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860f43e:	89 04 24             	mov    %eax,(%esp)
 860f441:	e8 fe 2b e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860f446:	b8 01 00 00 00       	mov    $0x1,%eax
 860f44b:	83 c4 54             	add    $0x54,%esp
 860f44e:	5b                   	pop    %ebx
 860f44f:	5d                   	pop    %ebp
 860f450:	c3                   	ret

```

```c
// CDeathTowerValueStatistic::SendDeathTowerValueStatistic @ 0x860f342

/* CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char,
   char, unsigned int) */

undefined4 __thiscall
CDeathTowerValueStatistic::SendDeathTowerValueStatistic
          (undefined4 this,int param_2,undefined1 param_3,char param_4,int param_5)

{
  CStatisticServerProxy *this_00;
  Packet_DeathTower_Statistic_Value local_21 [10];
  undefined1 local_17;
  short local_16;
  int local_14;
  int local_10;
  
  Packet_DeathTower_Statistic_Value::Packet_DeathTower_Statistic_Value(local_21);
  local_16 = (short)param_4;
  local_17 = param_3;
  if (param_2 == 10) {
    if (param_5 == 1) {
      local_14 = 4;
      param_5 = 1;
    }
    else if (param_5 == 0) {
      local_14 = 3;
      param_5 = 1;
    }
    else if (param_5 == 2) {
      local_14 = 5;
      param_5 = 1;
    }
    else {
      if (param_5 != 3) {
        LogManager::logFormat
                  (1,"Statistics.cpp",
                   "bool CDeathTowerValueStatistic::SendDeathTowerValueStatistic(DEATHTOWER_VALUE_STATISTIC_FIELD, char, char, unsigned int)"
                   ,0x5d5,&DAT_08ce0390,10);
        return 0;
      }
      local_14 = 6;
      param_5 = 1;
    }
  }
  else {
    local_14 = param_2;
  }
  local_10 = param_5;
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_21,0x15);
  return 1;
}

```

