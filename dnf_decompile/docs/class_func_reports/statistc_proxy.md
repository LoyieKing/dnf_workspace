# statistc_proxy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## add

```asm
// === 0860fdd2 statistc_proxy::add  [0x0860fdd2-0x860ff41] ===
 860fdd2:	55                   	push   %ebp
 860fdd3:	89 e5                	mov    %esp,%ebp
 860fdd5:	57                   	push   %edi
 860fdd6:	53                   	push   %ebx
 860fdd7:	81 ec a0 04 00 00    	sub    $0x4a0,%esp
 860fddd:	8d 95 6b fb ff ff    	lea    -0x495(%ebp),%edx
 860fde3:	bb 00 04 00 00       	mov    $0x400,%ebx
 860fde8:	b8 00 00 00 00       	mov    $0x0,%eax
 860fded:	89 d1                	mov    %edx,%ecx
 860fdef:	83 e1 01             	and    $0x1,%ecx
 860fdf2:	85 c9                	test   %ecx,%ecx
 860fdf4:	74 08                	je     860fdfe <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x2c>
 860fdf6:	88 02                	mov    %al,(%edx)
 860fdf8:	83 c2 01             	add    $0x1,%edx
 860fdfb:	83 eb 01             	sub    $0x1,%ebx
 860fdfe:	89 d1                	mov    %edx,%ecx
 860fe00:	83 e1 02             	and    $0x2,%ecx
 860fe03:	85 c9                	test   %ecx,%ecx
 860fe05:	74 09                	je     860fe10 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x3e>
 860fe07:	66 89 02             	mov    %ax,(%edx)
 860fe0a:	83 c2 02             	add    $0x2,%edx
 860fe0d:	83 eb 02             	sub    $0x2,%ebx
 860fe10:	89 d9                	mov    %ebx,%ecx
 860fe12:	c1 e9 02             	shr    $0x2,%ecx
 860fe15:	89 d7                	mov    %edx,%edi
 860fe17:	f3 ab                	rep stos %eax,%es:(%edi)
 860fe19:	89 fa                	mov    %edi,%edx
 860fe1b:	89 d9                	mov    %ebx,%ecx
 860fe1d:	83 e1 02             	and    $0x2,%ecx
 860fe20:	85 c9                	test   %ecx,%ecx
 860fe22:	74 06                	je     860fe2a <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x58>
 860fe24:	66 89 02             	mov    %ax,(%edx)
 860fe27:	83 c2 02             	add    $0x2,%edx
 860fe2a:	89 d9                	mov    %ebx,%ecx
 860fe2c:	83 e1 01             	and    $0x1,%ecx
 860fe2f:	85 c9                	test   %ecx,%ecx
 860fe31:	74 05                	je     860fe38 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x66>
 860fe33:	88 02                	mov    %al,(%edx)
 860fe35:	83 c2 01             	add    $0x1,%edx
 860fe38:	8d 45 1c             	lea    0x1c(%ebp),%eax
 860fe3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860fe3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860fe41:	89 44 24 08          	mov    %eax,0x8(%esp)
 860fe45:	8b 45 18             	mov    0x18(%ebp),%eax
 860fe48:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fe4c:	8d 85 6b fb ff ff    	lea    -0x495(%ebp),%eax
 860fe52:	89 04 24             	mov    %eax,(%esp)
 860fe55:	e8 76 d9 a6 ff       	call   807d7d0 <vsprintf@plt>
 860fe5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860fe5d:	89 04 24             	mov    %eax,(%esp)
 860fe60:	e8 4b e5 a6 ff       	call   807e3b0 <strlen@plt>
 860fe65:	83 f8 20             	cmp    $0x20,%eax
 860fe68:	0f 87 c3 00 00 00    	ja     860ff31 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x15f>
 860fe6e:	8b 45 10             	mov    0x10(%ebp),%eax
 860fe71:	89 04 24             	mov    %eax,(%esp)
 860fe74:	e8 37 e5 a6 ff       	call   807e3b0 <strlen@plt>
 860fe79:	83 f8 20             	cmp    $0x20,%eax
 860fe7c:	0f 87 b2 00 00 00    	ja     860ff34 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x162>
 860fe82:	8d 85 6b fb ff ff    	lea    -0x495(%ebp),%eax
 860fe88:	89 04 24             	mov    %eax,(%esp)
 860fe8b:	e8 20 e5 a6 ff       	call   807e3b0 <strlen@plt>
 860fe90:	83 f8 38             	cmp    $0x38,%eax
 860fe93:	0f 87 9e 00 00 00    	ja     860ff37 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x165>
 860fe99:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 860fe9f:	89 04 24             	mov    %eax,(%esp)
 860fea2:	e8 8b 02 00 00       	call   8610132 <_ZN16StatisticsPacketC1Ev>
 860fea7:	8b 45 0c             	mov    0xc(%ebp),%eax
 860feaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 860feae:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 860feb4:	83 c0 0a             	add    $0xa,%eax
 860feb7:	89 04 24             	mov    %eax,(%esp)
 860feba:	e8 31 e0 a6 ff       	call   807def0 <strcpy@plt>
 860febf:	8b 45 10             	mov    0x10(%ebp),%eax
 860fec2:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fec6:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 860fecc:	83 c0 2b             	add    $0x2b,%eax
 860fecf:	89 04 24             	mov    %eax,(%esp)
 860fed2:	e8 19 e0 a6 ff       	call   807def0 <strcpy@plt>
 860fed7:	8d 85 6b fb ff ff    	lea    -0x495(%ebp),%eax
 860fedd:	89 44 24 04          	mov    %eax,0x4(%esp)
 860fee1:	8d 85 6b ff ff ff    	lea    -0x95(%ebp),%eax
 860fee7:	83 c0 4c             	add    $0x4c,%eax
 860feea:	89 04 24             	mov    %eax,(%esp)
 860feed:	e8 fe df a6 ff       	call   807def0 <strcpy@plt>
 860fef2:	8b 45 14             	mov    0x14(%ebp),%eax
 860fef5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 860fef8:	8d 9d 6b ff ff ff    	lea    -0x95(%ebp),%ebx
 860fefe:	8b 45 08             	mov    0x8(%ebp),%eax
 860ff01:	89 04 24             	mov    %eax,(%esp)
 860ff04:	e8 87 bd ab ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 860ff09:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 860ff0f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ff13:	89 14 24             	mov    %edx,(%esp)
 860ff16:	e8 dd 1d b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860ff1b:	c7 44 24 08 89 00 00 	movl   $0x89,0x8(%esp)
 860ff22:	00 
 860ff23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860ff27:	89 04 24             	mov    %eax,(%esp)
 860ff2a:	e8 15 21 e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860ff2f:	eb 07                	jmp    860ff38 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x166>
 860ff31:	90                   	nop
 860ff32:	eb 04                	jmp    860ff38 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x166>
 860ff34:	90                   	nop
 860ff35:	eb 01                	jmp    860ff38 <_ZN14statistc_proxy3addEP5CUserPKcS3_jS3_z+0x166>
 860ff37:	90                   	nop
 860ff38:	81 c4 a0 04 00 00    	add    $0x4a0,%esp
 860ff3e:	5b                   	pop    %ebx
 860ff3f:	5f                   	pop    %edi
 860ff40:	5d                   	pop    %ebp
 860ff41:	c3                   	ret

```

```c
// statistc_proxy::add @ 0x860fdd2

/* statistc_proxy::add(CUser*, char const*, char const*, unsigned int, char const*, ...) */

void statistc_proxy::add(CUser *param_1,char *param_2,char *param_3,uint param_4,char *param_5,...)

{
  size_t sVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  char local_499;
  char local_498 [1023];
  StatisticsPacket local_99 [10];
  char acStack_8f [33];
  char acStack_6e [33];
  char acStack_4d [57];
  uint local_14;
  undefined1 *local_10;
  
  pcVar4 = &local_499;
  uVar5 = 0x400;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_499 = '\0';
    pcVar4 = local_498;
    uVar5 = 0x3ff;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (bVar6) {
    *pcVar4 = '\0';
  }
  local_10 = &stack0x00000018;
  vsprintf(&local_499,param_5,local_10);
  sVar1 = strlen(param_2);
  if (((sVar1 < 0x21) && (sVar1 = strlen(param_3), sVar1 < 0x21)) &&
     (sVar1 = strlen(&local_499), sVar1 < 0x39)) {
    StatisticsPacket::StatisticsPacket(local_99);
    strcpy(acStack_8f,param_2);
    strcpy(acStack_6e,param_3);
    strcpy(acStack_4d,&local_499);
    local_14 = param_4;
    uVar2 = CUser::GetServerGroup(param_1);
    this = (CStatisticServerProxy *)
           CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                     (GlobalData::s_statistic_proxy_mgr,uVar2);
    CStatisticServerProxy::SendPacket(this,(char *)local_99,0x89);
  }
  return;
}

```

