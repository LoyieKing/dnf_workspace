# CHellPartyItemStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## SendHellPartyItemStatistic

```asm
// === 0860fcc0 CHellPartyItemStatistic::SendHellPartyItemStatistic  [0x0860fcc0-0x860fd6e] ===
 860fcc0:	55                   	push   %ebp
 860fcc1:	89 e5                	mov    %esp,%ebp
 860fcc3:	53                   	push   %ebx
 860fcc4:	83 ec 54             	sub    $0x54,%esp
 860fcc7:	8b 55 0c             	mov    0xc(%ebp),%edx
 860fcca:	8b 45 1c             	mov    0x1c(%ebp),%eax
 860fccd:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 860fcd0:	88 45 c0             	mov    %al,-0x40(%ebp)
 860fcd3:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
 860fcd7:	7e 0a                	jle    860fce3 <_ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi+0x23>
 860fcd9:	b8 00 00 00 00       	mov    $0x0,%eax
 860fcde:	e9 86 00 00 00       	jmp    860fd69 <_ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi+0xa9>
 860fce3:	80 7d c0 00          	cmpb   $0x0,-0x40(%ebp)
 860fce7:	75 07                	jne    860fcf0 <_ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi+0x30>
 860fce9:	b8 00 00 00 00       	mov    $0x0,%eax
 860fcee:	eb 79                	jmp    860fd69 <_ZN23CHellPartyItemStatistic26SendHellPartyItemStatisticEbiiicPi+0xa9>
 860fcf0:	8d 45 ce             	lea    -0x32(%ebp),%eax
 860fcf3:	89 04 24             	mov    %eax,(%esp)
 860fcf6:	e8 a3 02 00 00       	call   860ff9e <_ZN31Packet_HellParty_Statistic_ItemC1Ev>
 860fcfb:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 860fcff:	88 45 d8             	mov    %al,-0x28(%ebp)
 860fd02:	8b 45 10             	mov    0x10(%ebp),%eax
 860fd05:	89 45 d9             	mov    %eax,-0x27(%ebp)
 860fd08:	8b 45 14             	mov    0x14(%ebp),%eax
 860fd0b:	88 45 dd             	mov    %al,-0x23(%ebp)
 860fd0e:	8b 45 18             	mov    0x18(%ebp),%eax
 860fd11:	88 45 de             	mov    %al,-0x22(%ebp)
 860fd14:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 860fd18:	88 45 df             	mov    %al,-0x21(%ebp)
 860fd1b:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 860fd22:	00 
 860fd23:	8b 45 20             	mov    0x20(%ebp),%eax
 860fd26:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fd2a:	8d 45 ce             	lea    -0x32(%ebp),%eax
 860fd2d:	83 c0 12             	add    $0x12,%eax
 860fd30:	89 04 24             	mov    %eax,(%esp)
 860fd33:	e8 68 db a6 ff       	call   807d8a0 <memcpy@plt>
 860fd38:	8d 5d ce             	lea    -0x32(%ebp),%ebx
 860fd3b:	a1 30 be 40 09       	mov    0x940be30,%eax
 860fd40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860fd47:	00 
 860fd48:	89 04 24             	mov    %eax,(%esp)
 860fd4b:	e8 a8 1f b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860fd50:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 860fd57:	00 
 860fd58:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860fd5c:	89 04 24             	mov    %eax,(%esp)
 860fd5f:	e8 e0 22 e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860fd64:	b8 01 00 00 00       	mov    $0x1,%eax
 860fd69:	83 c4 54             	add    $0x54,%esp
 860fd6c:	5b                   	pop    %ebx
 860fd6d:	5d                   	pop    %ebp
 860fd6e:	c3                   	ret

```

```c
// CHellPartyItemStatistic::SendHellPartyItemStatistic @ 0x860fcc0

/* CHellPartyItemStatistic::SendHellPartyItemStatistic(bool, int, int, int, char, int*) */

undefined4 __thiscall
CHellPartyItemStatistic::SendHellPartyItemStatistic
          (CHellPartyItemStatistic *this,bool param_1,int param_2,int param_3,int param_4,
          char param_5,int *param_6)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_HellParty_Statistic_Item local_36 [10];
  undefined1 local_2c;
  int local_2b;
  undefined1 local_27;
  undefined1 local_26;
  char local_25;
  undefined1 auStack_24 [28];
  
  if (param_3 < 5) {
    if (param_5 == '\0') {
      uVar1 = 0;
    }
    else {
      Packet_HellParty_Statistic_Item::Packet_HellParty_Statistic_Item(local_36);
      local_2b = param_2;
      local_27 = (undefined1)param_3;
      local_26 = (undefined1)param_4;
      local_2c = param_1;
      local_25 = param_5;
      memcpy(auStack_24,param_6,0x18);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_36,0x2a);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

