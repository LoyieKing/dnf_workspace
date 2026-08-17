# Inter_Set_CleanPad_Point

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dd12e Inter_Set_CleanPad_Point::dispatch_sig  [0x084dd12e-0x84dd1ed] ===
 84dd12e:	55                   	push   %ebp
 84dd12f:	89 e5                	mov    %esp,%ebp
 84dd131:	57                   	push   %edi
 84dd132:	56                   	push   %esi
 84dd133:	53                   	push   %ebx
 84dd134:	83 ec 4c             	sub    $0x4c,%esp
 84dd137:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dd13b:	0f 84 a0 00 00 00    	je     84dd1e1 <_ZN24Inter_Set_CleanPad_Point12dispatch_sigEP5CUserPci+0xb3>
 84dd141:	8b 45 10             	mov    0x10(%ebp),%eax
 84dd144:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84dd147:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dd14a:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84dd14e:	0f b7 c0             	movzwl %ax,%eax
 84dd151:	8b 55 0c             	mov    0xc(%ebp),%edx
 84dd154:	81 c2 f0 e3 08 00    	add    $0x8e3f0,%edx
 84dd15a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dd15e:	89 14 24             	mov    %edx,(%esp)
 84dd161:	e8 78 9f da ff       	call   82870de <_ZN8WongWork12CMCAPManager8setPointEt>
 84dd166:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd169:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84dd16e:	89 04 24             	mov    %eax,(%esp)
 84dd171:	e8 2e 1d d5 ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 84dd176:	89 c6                	mov    %eax,%esi
 84dd178:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84dd17b:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84dd17f:	0f b7 f8             	movzwl %ax,%edi
 84dd182:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dd185:	89 04 24             	mov    %eax,(%esp)
 84dd188:	e8 e1 d1 bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84dd18d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dd194:	00 
 84dd195:	89 04 24             	mov    %eax,(%esp)
 84dd198:	e8 ae be c2 ff       	call   810904b <_Z14NumberToStringji>
 84dd19d:	89 c3                	mov    %eax,%ebx
 84dd19f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84dd1a6:	00 
 84dd1a7:	c7 44 24 08 86 48 00 	movl   $0x4886,0x8(%esp)
 84dd1ae:	00 
 84dd1af:	c7 44 24 04 60 bc c8 	movl   $0x8c8bc60,0x4(%esp)
 84dd1b6:	08 
 84dd1b7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dd1ba:	89 04 24             	mov    %eax,(%esp)
 84dd1bd:	e8 56 25 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84dd1c2:	89 74 24 10          	mov    %esi,0x10(%esp)
 84dd1c6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84dd1ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84dd1ce:	c7 44 24 04 44 99 c8 	movl   $0x8c89944,0x4(%esp)
 84dd1d5:	08 
 84dd1d6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dd1d9:	89 04 24             	mov    %eax,(%esp)
 84dd1dc:	e8 a7 25 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84dd1e1:	b8 00 00 00 00       	mov    $0x0,%eax
 84dd1e6:	83 c4 4c             	add    $0x4c,%esp
 84dd1e9:	5b                   	pop    %ebx
 84dd1ea:	5e                   	pop    %esi
 84dd1eb:	5f                   	pop    %edi
 84dd1ec:	5d                   	pop    %ebp
 84dd1ed:	c3                   	ret

```

```c
// Inter_Set_CleanPad_Point::dispatch_sig @ 0x84dd12e

/* Inter_Set_CleanPad_Point::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Set_CleanPad_Point::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  cMyTrace local_30 [16];
  int local_20;
  
  if (param_2 != (char *)0x0) {
    local_20 = param_3;
    WongWork::CMCAPManager::setPoint((CMCAPManager *)(param_2 + 0x8e3f0),*(ushort *)(param_3 + 0xe))
    ;
    uVar2 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    uVar1 = *(ushort *)(local_20 + 0xe);
    uVar3 = CUser::get_acc_id((CUser *)param_2);
    uVar4 = NumberToString(uVar3,0);
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_Set_CleanPad_Point::dispatch_sig(CUser*, char*, int)",
                       0x4886,0);
    cMyTrace::operator()
              (local_30,"CLEANPAD_POINT_CONTROL / m_id : %s , Point : %d (getPorint : %d)",uVar4,
               (uint)uVar1,uVar2);
  }
  return 0;
}

```

