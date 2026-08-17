# Dispatcher_SDC_Damage_Check

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081e9e84 Dispatcher_SDC_Damage_Check::dispatch_sig  [0x081e9e84-0x81ea16d] ===
 81e9e84:	55                   	push   %ebp
 81e9e85:	89 e5                	mov    %esp,%ebp
 81e9e87:	57                   	push   %edi
 81e9e88:	53                   	push   %ebx
 81e9e89:	81 ec 40 04 00 00    	sub    $0x440,%esp
 81e9e8f:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81e9e96:	c6 45 d3 00          	movb   $0x0,-0x2d(%ebp)
 81e9e9a:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 81e9e9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9ea1:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9ea4:	89 04 24             	mov    %eax,(%esp)
 81e9ea7:	e8 c4 30 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e9eac:	83 f0 01             	xor    $0x1,%eax
 81e9eaf:	84 c0                	test   %al,%al
 81e9eb1:	74 29                	je     81e9edc <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x58>
 81e9eb3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9eba:	00 
 81e9ebb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9ec2:	00 
 81e9ec3:	c7 44 24 04 00 08 bd 	movl   $0x8bd0800,0x4(%esp)
 81e9eca:	08 
 81e9ecb:	c7 04 24 b5 6a 00 00 	movl   $0x6ab5,(%esp)
 81e9ed2:	e8 00 6a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9ed7:	e9 87 02 00 00       	jmp    81ea163 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 81e9edc:	c7 45 dc f4 01 00 00 	movl   $0x1f4,-0x24(%ebp)
 81e9ee3:	c7 45 e0 f4 01 00 00 	movl   $0x1f4,-0x20(%ebp)
 81e9eea:	c7 45 cc f4 01 00 00 	movl   $0x1f4,-0x34(%ebp)
 81e9ef1:	c7 45 e4 f4 01 00 00 	movl   $0x1f4,-0x1c(%ebp)
 81e9ef8:	8d 9d d4 fd ff ff    	lea    -0x22c(%ebp),%ebx
 81e9efe:	b8 00 00 00 00       	mov    $0x0,%eax
 81e9f03:	ba 7d 00 00 00       	mov    $0x7d,%edx
 81e9f08:	89 df                	mov    %ebx,%edi
 81e9f0a:	89 d1                	mov    %edx,%ecx
 81e9f0c:	f3 ab                	rep stos %eax,%es:(%edi)
 81e9f0e:	8d 9d e0 fb ff ff    	lea    -0x420(%ebp),%ebx
 81e9f14:	b8 00 00 00 00       	mov    $0x0,%eax
 81e9f19:	ba 7d 00 00 00       	mov    $0x7d,%edx
 81e9f1e:	89 df                	mov    %ebx,%edi
 81e9f20:	89 d1                	mov    %edx,%ecx
 81e9f22:	f3 ab                	rep stos %eax,%es:(%edi)
 81e9f24:	8d 85 e0 fb ff ff    	lea    -0x420(%ebp),%eax
 81e9f2a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e9f2d:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 81e9f31:	e9 16 02 00 00       	jmp    81ea14c <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2c8>
 81e9f36:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 81e9f3d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e9f40:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9f44:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9f47:	89 04 24             	mov    %eax,(%esp)
 81e9f4a:	e8 a1 31 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e9f4f:	83 f0 01             	xor    $0x1,%eax
 81e9f52:	84 c0                	test   %al,%al
 81e9f54:	74 29                	je     81e9f7f <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 81e9f56:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9f5d:	00 
 81e9f5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9f65:	00 
 81e9f66:	c7 44 24 04 00 08 bd 	movl   $0x8bd0800,0x4(%esp)
 81e9f6d:	08 
 81e9f6e:	c7 04 24 c9 6a 00 00 	movl   $0x6ac9,(%esp)
 81e9f75:	e8 5d 69 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9f7a:	e9 e4 01 00 00       	jmp    81ea163 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 81e9f7f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81e9f82:	3d f4 01 00 00       	cmp    $0x1f4,%eax
 81e9f87:	7e 29                	jle    81e9fb2 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x12e>
 81e9f89:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9f90:	00 
 81e9f91:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9f98:	00 
 81e9f99:	c7 44 24 04 00 08 bd 	movl   $0x8bd0800,0x4(%esp)
 81e9fa0:	08 
 81e9fa1:	c7 04 24 cb 6a 00 00 	movl   $0x6acb,(%esp)
 81e9fa8:	e8 2a 69 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9fad:	e9 b1 01 00 00       	jmp    81ea163 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 81e9fb2:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81e9fb5:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 81e9fbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e9fbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e9fc3:	8b 45 10             	mov    0x10(%ebp),%eax
 81e9fc6:	89 04 24             	mov    %eax,(%esp)
 81e9fc9:	e8 e4 33 3a 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 81e9fce:	83 f0 01             	xor    $0x1,%eax
 81e9fd1:	84 c0                	test   %al,%al
 81e9fd3:	74 29                	je     81e9ffe <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x17a>
 81e9fd5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e9fdc:	00 
 81e9fdd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e9fe4:	00 
 81e9fe5:	c7 44 24 04 00 08 bd 	movl   $0x8bd0800,0x4(%esp)
 81e9fec:	08 
 81e9fed:	c7 04 24 ce 6a 00 00 	movl   $0x6ace,(%esp)
 81e9ff4:	e8 de 68 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e9ff9:	e9 65 01 00 00       	jmp    81ea163 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 81e9ffe:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81ea001:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ea004:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ea007:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ea00b:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 81ea011:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ea015:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ea018:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea01c:	8d 85 e0 fb ff ff    	lea    -0x420(%ebp),%eax
 81ea022:	89 04 24             	mov    %eax,(%esp)
 81ea025:	e8 b6 bc 58 00       	call   8775ce0 <uncompress>
 81ea02a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ea02d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81ea031:	74 29                	je     81ea05c <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x1d8>
 81ea033:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea03a:	00 
 81ea03b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea042:	00 
 81ea043:	c7 44 24 04 00 08 bd 	movl   $0x8bd0800,0x4(%esp)
 81ea04a:	08 
 81ea04b:	c7 04 24 d8 6a 00 00 	movl   $0x6ad8,(%esp)
 81ea052:	e8 80 68 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea057:	e9 07 01 00 00       	jmp    81ea163 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2df>
 81ea05c:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81ea063:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81ea066:	8b 80 e6 01 00 00    	mov    0x1e6(%eax),%eax
 81ea06c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ea06f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea076:	00 
 81ea077:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ea07e:	00 
 81ea07f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81ea082:	89 04 24             	mov    %eax,(%esp)
 81ea085:	e8 a8 bb ea ff       	call   8095c32 <_Z18computeHpDamageSDCP23STComputeDamageVariablePvS1_>
 81ea08a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ea08d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ea090:	83 e8 01             	sub    $0x1,%eax
 81ea093:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81ea096:	7f 0b                	jg     81ea0a3 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x21f>
 81ea098:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ea09b:	83 c0 01             	add    $0x1,%eax
 81ea09e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81ea0a1:	7d 3a                	jge    81ea0dd <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x259>
 81ea0a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea0a6:	89 04 24             	mov    %eax,(%esp)
 81ea0a9:	e8 ac f8 f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ea0ae:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ea0b5:	00 
 81ea0b6:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ea0bd:	00 
 81ea0be:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ea0c5:	00 
 81ea0c6:	c7 44 24 08 5d 02 00 	movl   $0x25d,0x8(%esp)
 81ea0cd:	00 
 81ea0ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ea0d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ea0d5:	89 04 24             	mov    %eax,(%esp)
 81ea0d8:	e8 a1 eb f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ea0dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea0e0:	89 04 24             	mov    %eax,(%esp)
 81ea0e3:	e8 66 5d 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81ea0e8:	0f bf d8             	movswl %ax,%ebx
 81ea0eb:	e8 9e 20 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81ea0f0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ea0f4:	89 04 24             	mov    %eax,(%esp)
 81ea0f7:	e8 36 ae 0a 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81ea0fc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ea0ff:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ea103:	74 43                	je     81ea148 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0x2c4>
 81ea105:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81ea108:	8b 80 ca 01 00 00    	mov    0x1ca(%eax),%eax
 81ea10e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ea111:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 81ea117:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea11b:	89 14 24             	mov    %edx,(%esp)
 81ea11e:	e8 2b ee 11 00       	call   8308f4e <_ZN13CBattle_Field19SetDamagedPacketCntEi>
 81ea123:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81ea126:	8b 80 ca 01 00 00    	mov    0x1ca(%eax),%eax
 81ea12c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ea12f:	8d 8a 24 0b 00 00    	lea    0xb24(%edx),%ecx
 81ea135:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ea138:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ea13c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea140:	89 0c 24             	mov    %ecx,(%esp)
 81ea143:	e8 b0 ee 11 00       	call   8308ff8 <_ZN13CBattle_Field14SetDamageValueEii>
 81ea148:	80 45 db 01          	addb   $0x1,-0x25(%ebp)
 81ea14c:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 81ea150:	38 45 db             	cmp    %al,-0x25(%ebp)
 81ea153:	0f 92 c0             	setb   %al
 81ea156:	84 c0                	test   %al,%al
 81ea158:	0f 85 d8 fd ff ff    	jne    81e9f36 <_ZN27Dispatcher_SDC_Damage_Check12dispatch_sigEP5CUserR9PacketBuf+0xb2>
 81ea15e:	b8 00 00 00 00       	mov    $0x0,%eax
 81ea163:	81 c4 40 04 00 00    	add    $0x440,%esp
 81ea169:	5b                   	pop    %ebx
 81ea16a:	5f                   	pop    %edi
 81ea16b:	5d                   	pop    %ebp
 81ea16c:	c3                   	ret
 81ea16d:	90                   	nop

```

```c
// Dispatcher_SDC_Damage_Check::dispatch_sig @ 0x81e9e84

/* WARNING: Type propagation algorithm not settling */
/* Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SDC_Damage_Check::dispatch_sig
          (Dispatcher_SDC_Damage_Check *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  int iVar4;
  char *pcVar5;
  STComputeDamageVariable *pSVar6;
  byte bVar7;
  STComputeDamageVariable local_424 [500];
  char local_230 [500];
  int local_3c [2];
  byte local_31;
  STComputeDamageVariable *local_30;
  byte local_29;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar7 = 0;
  local_30 = (STComputeDamageVariable *)0x0;
  local_31 = 0;
  cVar1 = PacketBuf::get_byte(param_2,&local_31);
  if (cVar1 == '\x01') {
    local_28 = 500;
    local_24 = 500;
    local_3c[1] = 500;
    local_20 = 500;
    pcVar5 = local_230;
    for (iVar4 = 0x7d; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
    }
    pSVar6 = local_424;
    for (iVar4 = 0x7d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar6 = 0;
      pSVar6 = pSVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    local_30 = local_424;
    for (local_29 = 0; local_29 < local_31; local_29 = local_29 + 1) {
      local_3c[0] = 0;
      cVar1 = PacketBuf::get_int(param_2,local_3c);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x6ac9,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      if (500 < local_3c[0]) {
        uVar2 = LineFunc(0x6acb,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      cVar1 = PacketBuf::get_binary(param_2,local_230,local_3c[0]);
      if (cVar1 != '\x01') {
        uVar2 = LineFunc(0x6ace,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_20 = local_3c[0];
      local_1c = uncompress(local_424,local_3c + 1,local_230,local_3c[0]);
      if (local_1c != 0) {
        uVar2 = LineFunc(0x6ad8,
                         "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar2;
      }
      local_18 = 0;
      local_14 = *(int *)(local_30 + 0x1e6);
      local_18 = computeHpDamageSDC(local_30,(void *)0x0,(void *)0x0);
      if ((local_14 < local_18 + -1) || (local_18 + 1 < local_14)) {
        pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_1,0x25d,1,0,0);
      }
      CUser::GetPartyIndex(param_1);
      iVar4 = G_CGameManager();
      local_10 = CGameManager::GetParty(iVar4);
      if (local_10 != 0) {
        CBattle_Field::SetDamagedPacketCnt(local_10 + 0xb24);
        CBattle_Field::SetDamageValue
                  ((CBattle_Field *)(local_10 + 0xb24),*(int *)(local_30 + 0x1ca),local_14);
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x6ab5,
                     "virtual int Dispatcher_SDC_Damage_Check::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  return uVar2;
}

```

