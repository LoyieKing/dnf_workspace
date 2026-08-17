# Taiwan__TaiwanCash

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## TaiwanCash

```asm
// === 08173608 Taiwan::TaiwanCash::TaiwanCash  [0x08173608-0x8173659] ===
 8173608:	55                   	push   %ebp
 8173609:	89 e5                	mov    %esp,%ebp
 817360b:	83 ec 28             	sub    $0x28,%esp
 817360e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8173611:	8b 45 10             	mov    0x10(%ebp),%eax
 8173614:	88 55 f4             	mov    %dl,-0xc(%ebp)
 8173617:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 817361b:	8b 45 08             	mov    0x8(%ebp),%eax
 817361e:	83 c0 08             	add    $0x8,%eax
 8173621:	89 04 24             	mov    %eax,(%esp)
 8173624:	e8 9f 04 28 00       	call   83f3ac8 <_ZN5MySQLC1Ev>
 8173629:	8b 45 08             	mov    0x8(%ebp),%eax
 817362c:	05 94 20 04 00       	add    $0x42094,%eax
 8173631:	89 04 24             	mov    %eax,(%esp)
 8173634:	e8 d9 7d f5 ff       	call   80cb412 <_ZN5MutexC1Ev>
 8173639:	8b 45 08             	mov    0x8(%ebp),%eax
 817363c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8173643:	8b 45 08             	mov    0x8(%ebp),%eax
 8173646:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 817364a:	88 10                	mov    %dl,(%eax)
 817364c:	8b 45 08             	mov    0x8(%ebp),%eax
 817364f:	0f b7 55 f0          	movzwl -0x10(%ebp),%edx
 8173653:	66 89 50 02          	mov    %dx,0x2(%eax)
 8173657:	c9                   	leave
 8173658:	c3                   	ret
 8173659:	90                   	nop

```

```c
// Taiwan::TaiwanCash::TaiwanCash @ 0x8173608

/* Taiwan::TaiwanCash::TaiwanCash(unsigned char, short) */

void __thiscall Taiwan::TaiwanCash::TaiwanCash(TaiwanCash *this,uchar param_1,short param_2)

{
  MySQL::MySQL((MySQL *)(this + 8));
  Mutex::Mutex((Mutex *)(this + 0x42094));
  *(undefined4 *)(this + 4) = 0;
  *this = (TaiwanCash)param_1;
  *(short *)(this + 2) = param_2;
  return;
}

```

---

## cancel

```asm
// === 08173d1c Taiwan::TaiwanCash::cancel  [0x08173d1c-0x8173def] ===
 8173d1c:	55                   	push   %ebp
 8173d1d:	89 e5                	mov    %esp,%ebp
 8173d1f:	53                   	push   %ebx
 8173d20:	83 ec 34             	sub    $0x34,%esp
 8173d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173d26:	8b 50 08             	mov    0x8(%eax),%edx
 8173d29:	8b 40 04             	mov    0x4(%eax),%eax
 8173d2c:	09 d0                	or     %edx,%eax
 8173d2e:	85 c0                	test   %eax,%eax
 8173d30:	75 0a                	jne    8173d3c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE+0x20>
 8173d32:	b8 00 00 00 00       	mov    $0x0,%eax
 8173d37:	e9 ae 00 00 00       	jmp    8173dea <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE+0xce>
 8173d3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173d3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173d43:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8173d46:	89 04 24             	mov    %eax,(%esp)
 8173d49:	e8 94 0f 00 00       	call   8174ce2 <_ZN6Taiwan11CancelQueryC1ERKNS_15BillTransactionE>
 8173d4e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8173d51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173d55:	8b 45 08             	mov    0x8(%ebp),%eax
 8173d58:	89 04 24             	mov    %eax,(%esp)
 8173d5b:	e8 44 1c 00 00       	call   81759a4 <_ZN6Taiwan10TaiwanCash14processBillingINS_11CancelQueryEEEbRT_>
 8173d60:	83 f0 01             	xor    $0x1,%eax
 8173d63:	84 c0                	test   %al,%al
 8173d65:	74 07                	je     8173d6e <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE+0x52>
 8173d67:	b8 04 00 00 00       	mov    $0x4,%eax
 8173d6c:	eb 7c                	jmp    8173dea <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE+0xce>
 8173d6e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173d71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173d75:	8b 45 08             	mov    0x8(%ebp),%eax
 8173d78:	89 04 24             	mov    %eax,(%esp)
 8173d7b:	e8 ee f8 ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173d80:	83 f0 01             	xor    $0x1,%eax
 8173d83:	84 c0                	test   %al,%al
 8173d85:	74 05                	je     8173d8c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE+0x70>
 8173d87:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173d8a:	eb 5e                	jmp    8173dea <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE+0xce>
 8173d8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173d8f:	8b 50 08             	mov    0x8(%eax),%edx
 8173d92:	8b 40 04             	mov    0x4(%eax),%eax
 8173d95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8173d9c:	00 
 8173d9d:	89 04 24             	mov    %eax,(%esp)
 8173da0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8173da4:	e8 ef 52 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8173da9:	89 c3                	mov    %eax,%ebx
 8173dab:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173db2:	00 
 8173db3:	c7 44 24 08 b9 00 00 	movl   $0xb9,0x8(%esp)
 8173dba:	00 
 8173dbb:	c7 44 24 04 b1 52 b8 	movl   $0x8b852b1,0x4(%esp)
 8173dc2:	08 
 8173dc3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173dc6:	89 04 24             	mov    %eax,(%esp)
 8173dc9:	e8 4a b9 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173dce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8173dd2:	c7 44 24 04 48 47 b8 	movl   $0x8b84748,0x4(%esp)
 8173dd9:	08 
 8173dda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173ddd:	89 04 24             	mov    %eax,(%esp)
 8173de0:	e8 a3 b9 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173de5:	b8 00 00 00 00       	mov    $0x0,%eax
 8173dea:	83 c4 34             	add    $0x34,%esp
 8173ded:	5b                   	pop    %ebx
 8173dee:	5d                   	pop    %ebp
 8173def:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::cancel @ 0x8173d1c

/* Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&) */

int __thiscall Taiwan::TaiwanCash::cancel(TaiwanCash *this,BillTransaction *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_2c [4];
  cMyTrace local_1c [20];
  
  if (*(int *)(param_1 + 4) == 0 && *(int *)(param_1 + 8) == 0) {
    local_2c[0] = 0;
  }
  else {
    CancelQuery::CancelQuery((CancelQuery *)local_2c,param_1);
    bVar1 = processBilling<Taiwan::CancelQuery>(this,(CancelQuery *)local_2c);
    if (bVar1) {
      cVar2 = checkResultCode(this,local_2c[0]);
      if (cVar2 == '\x01') {
        uVar3 = NumberToString(*(ulonglong *)(param_1 + 4),0);
        cMyTrace::cMyTrace(local_1c,"cancel",0xb9,0);
        cMyTrace::operator()(local_1c,"[Taiwan, Billing] CancelQuery Transaction:%s",uVar3);
        local_2c[0] = 0;
      }
    }
    else {
      local_2c[0] = 4;
    }
  }
  return local_2c[0];
}

```

---

## ceraPoint

```asm
// === 08173f0c Taiwan::TaiwanCash::ceraPoint  [0x08173f0c-0x8173ff9] ===
 8173f0c:	55                   	push   %ebp
 8173f0d:	89 e5                	mov    %esp,%ebp
 8173f0f:	53                   	push   %ebx
 8173f10:	83 ec 74             	sub    $0x74,%esp
 8173f13:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8173f16:	8b 55 20             	mov    0x20(%ebp),%edx
 8173f19:	8b 45 24             	mov    0x24(%ebp),%eax
 8173f1c:	88 4d c4             	mov    %cl,-0x3c(%ebp)
 8173f1f:	88 55 c0             	mov    %dl,-0x40(%ebp)
 8173f22:	88 45 bc             	mov    %al,-0x44(%ebp)
 8173f25:	0f be 5d c4          	movsbl -0x3c(%ebp),%ebx
 8173f29:	0f be 4d bc          	movsbl -0x44(%ebp),%ecx
 8173f2d:	0f be 55 c0          	movsbl -0x40(%ebp),%edx
 8173f31:	8b 45 28             	mov    0x28(%ebp),%eax
 8173f34:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8173f38:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8173f3c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8173f40:	89 44 24 14          	mov    %eax,0x14(%esp)
 8173f44:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8173f47:	89 44 24 10          	mov    %eax,0x10(%esp)
 8173f4b:	8b 45 18             	mov    0x18(%ebp),%eax
 8173f4e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8173f52:	8b 45 10             	mov    0x10(%ebp),%eax
 8173f55:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173f59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173f5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173f60:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8173f63:	89 04 24             	mov    %eax,(%esp)
 8173f66:	e8 4b 12 00 00       	call   81751b6 <_ZN6Taiwan14CeraPointQueryC1EPKcS2_PcS3_jccc>
 8173f6b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8173f6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173f72:	8b 45 08             	mov    0x8(%ebp),%eax
 8173f75:	89 04 24             	mov    %eax,(%esp)
 8173f78:	e8 9f 1b 00 00       	call   8175b1c <_ZN6Taiwan10TaiwanCash14processBillingINS_14CeraPointQueryEEEbRT_>
 8173f7d:	83 f0 01             	xor    $0x1,%eax
 8173f80:	84 c0                	test   %al,%al
 8173f82:	74 07                	je     8173f8b <_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci+0x7f>
 8173f84:	b8 04 00 00 00       	mov    $0x4,%eax
 8173f89:	eb 68                	jmp    8173ff3 <_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci+0xe7>
 8173f8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8173f8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173f92:	8b 45 08             	mov    0x8(%ebp),%eax
 8173f95:	89 04 24             	mov    %eax,(%esp)
 8173f98:	e8 d1 f6 ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173f9d:	83 f0 01             	xor    $0x1,%eax
 8173fa0:	84 c0                	test   %al,%al
 8173fa2:	74 05                	je     8173fa9 <_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci+0x9d>
 8173fa4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8173fa7:	eb 4a                	jmp    8173ff3 <_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci+0xe7>
 8173fa9:	0f be 5d c4          	movsbl -0x3c(%ebp),%ebx
 8173fad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173fb4:	00 
 8173fb5:	c7 44 24 08 e0 00 00 	movl   $0xe0,0x8(%esp)
 8173fbc:	00 
 8173fbd:	c7 44 24 04 a0 52 b8 	movl   $0x8b852a0,0x4(%esp)
 8173fc4:	08 
 8173fc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173fc8:	89 04 24             	mov    %eax,(%esp)
 8173fcb:	e8 48 b7 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173fd0:	8b 45 28             	mov    0x28(%ebp),%eax
 8173fd3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8173fd7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8173fdb:	c7 44 24 04 bc 47 b8 	movl   $0x8b847bc,0x4(%esp)
 8173fe2:	08 
 8173fe3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173fe6:	89 04 24             	mov    %eax,(%esp)
 8173fe9:	e8 9a b7 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173fee:	b8 00 00 00 00       	mov    $0x0,%eax
 8173ff3:	83 c4 74             	add    $0x74,%esp
 8173ff6:	5b                   	pop    %ebx
 8173ff7:	5d                   	pop    %ebp
 8173ff8:	c3                   	ret
 8173ff9:	90                   	nop

```

```c
// Taiwan::TaiwanCash::ceraPoint @ 0x8173f0c

/* Taiwan::TaiwanCash::ceraPoint(char*, char*, char, char*, char*, char, char, int) */

int __thiscall
Taiwan::TaiwanCash::ceraPoint
          (TaiwanCash *this,char *param_1,char *param_2,char param_3,char *param_4,char *param_5,
          char param_6,char param_7,int param_8)

{
  bool bVar1;
  char cVar2;
  CeraPointQuery local_38 [24];
  int local_20;
  cMyTrace local_1c [20];
  
  CeraPointQuery::CeraPointQuery
            (local_38,param_1,param_2,param_4,param_5,param_8,param_6,param_7,param_3);
  bVar1 = processBilling<Taiwan::CeraPointQuery>(this,local_38);
  if (bVar1) {
    cVar2 = checkResultCode(this,local_20);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_1c,"ceraPoint",0xe0,0);
      cMyTrace::operator()
                (local_1c,"[Taiwan, Billing] CeraPointQuery Command:%c, Price:%d",(int)param_3,
                 param_8);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}

```

---

## charge

```asm
// === 08173df0 Taiwan::TaiwanCash::charge  [0x08173df0-0x8173f0b] ===
 8173df0:	55                   	push   %ebp
 8173df1:	89 e5                	mov    %esp,%ebp
 8173df3:	53                   	push   %ebx
 8173df4:	83 ec 74             	sub    $0x74,%esp
 8173df7:	8b 55 10             	mov    0x10(%ebp),%edx
 8173dfa:	8b 45 14             	mov    0x14(%ebp),%eax
 8173dfd:	88 55 b4             	mov    %dl,-0x4c(%ebp)
 8173e00:	88 45 b0             	mov    %al,-0x50(%ebp)
 8173e03:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8173e06:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8173e09:	8b 45 30             	mov    0x30(%ebp),%eax
 8173e0c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8173e0f:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 8173e13:	0f be c0             	movsbl %al,%eax
 8173e16:	89 44 24 14          	mov    %eax,0x14(%esp)
 8173e1a:	8b 45 18             	mov    0x18(%ebp),%eax
 8173e1d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8173e21:	c7 44 24 0c 75 47 b8 	movl   $0x8b84775,0xc(%esp)
 8173e28:	08 
 8173e29:	8b 45 28             	mov    0x28(%ebp),%eax
 8173e2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173e30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173e33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173e37:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8173e3a:	89 04 24             	mov    %eax,(%esp)
 8173e3d:	e8 bc 10 00 00       	call   8174efe <_ZN6Taiwan11ChargeQueryC1EPKcS2_S2_jc>
 8173e42:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8173e45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173e49:	8b 45 08             	mov    0x8(%ebp),%eax
 8173e4c:	89 04 24             	mov    %eax,(%esp)
 8173e4f:	e8 0c 1c 00 00       	call   8175a60 <_ZN6Taiwan10TaiwanCash14processBillingINS_11ChargeQueryEEEbRT_>
 8173e54:	83 f0 01             	xor    $0x1,%eax
 8173e57:	84 c0                	test   %al,%al
 8173e59:	74 0a                	je     8173e65 <_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE+0x75>
 8173e5b:	b8 04 00 00 00       	mov    $0x4,%eax
 8173e60:	e9 a1 00 00 00       	jmp    8173f06 <_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE+0x116>
 8173e65:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173e68:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173e6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8173e6f:	89 04 24             	mov    %eax,(%esp)
 8173e72:	e8 f7 f7 ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173e77:	83 f0 01             	xor    $0x1,%eax
 8173e7a:	84 c0                	test   %al,%al
 8173e7c:	74 08                	je     8173e86 <_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE+0x96>
 8173e7e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173e81:	e9 80 00 00 00       	jmp    8173f06 <_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE+0x116>
 8173e86:	8b 45 34             	mov    0x34(%ebp),%eax
 8173e89:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8173e8c:	89 10                	mov    %edx,(%eax)
 8173e8e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8173e91:	89 50 04             	mov    %edx,0x4(%eax)
 8173e94:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8173e97:	89 50 08             	mov    %edx,0x8(%eax)
 8173e9a:	8b 45 34             	mov    0x34(%ebp),%eax
 8173e9d:	8b 50 08             	mov    0x8(%eax),%edx
 8173ea0:	8b 40 04             	mov    0x4(%eax),%eax
 8173ea3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8173eaa:	00 
 8173eab:	89 04 24             	mov    %eax,(%esp)
 8173eae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8173eb2:	e8 e1 51 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8173eb7:	89 c3                	mov    %eax,%ebx
 8173eb9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173ec0:	00 
 8173ec1:	c7 44 24 08 ce 00 00 	movl   $0xce,0x8(%esp)
 8173ec8:	00 
 8173ec9:	c7 44 24 04 aa 52 b8 	movl   $0x8b852aa,0x4(%esp)
 8173ed0:	08 
 8173ed1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173ed4:	89 04 24             	mov    %eax,(%esp)
 8173ed7:	e8 3c b8 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173edc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8173ee0:	8b 45 18             	mov    0x18(%ebp),%eax
 8173ee3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8173ee7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173eea:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173eee:	c7 44 24 04 78 47 b8 	movl   $0x8b84778,0x4(%esp)
 8173ef5:	08 
 8173ef6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173ef9:	89 04 24             	mov    %eax,(%esp)
 8173efc:	e8 87 b8 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173f01:	b8 00 00 00 00       	mov    $0x0,%eax
 8173f06:	83 c4 74             	add    $0x74,%esp
 8173f09:	5b                   	pop    %ebx
 8173f0a:	5d                   	pop    %ebp
 8173f0b:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::charge @ 0x8173df0

/* Taiwan::TaiwanCash::charge(char*, unsigned char, unsigned char, unsigned int, char*, char*,
   char*, char*, unsigned long long, Taiwan::BillTransaction&) */

int Taiwan::TaiwanCash::charge
              (char *param_1,uchar param_2,uchar param_3,uint param_4,char *param_5,char *param_6,
              char *param_7,char *param_8,ulonglong param_9,BillTransaction *param_10)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 in_stack_00000009;
  undefined4 *in_stack_00000030;
  ChargeQuery local_40 [20];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  cMyTrace local_1c [20];
  
  ChargeQuery::ChargeQuery(local_40,_param_2,(char *)param_9,"",(uint)param_5,param_3);
  bVar1 = processBilling<Taiwan::ChargeQuery>((TaiwanCash *)param_1,local_40);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_2c);
    if (cVar2 == '\x01') {
      *in_stack_00000030 = local_28;
      in_stack_00000030[1] = local_24;
      in_stack_00000030[2] = local_20;
      uVar3 = NumberToString(*(ulonglong *)(in_stack_00000030 + 1),0);
      cMyTrace::cMyTrace(local_1c,"charge",0xce,0);
      cMyTrace::operator()
                (local_1c,"[Taiwan, Billing] ChargeQuery Account:%s, Price:%d, Transaction:%s",
                 _param_2,param_5,uVar3);
      local_2c = 0;
    }
  }
  else {
    local_2c = 4;
  }
  return local_2c;
}

```

---

## checkEntrance

```asm
// === 081736ce Taiwan::TaiwanCash::checkEntrance  [0x081736ce-0x8173765] ===
 81736ce:	55                   	push   %ebp
 81736cf:	89 e5                	mov    %esp,%ebp
 81736d1:	53                   	push   %ebx
 81736d2:	83 ec 34             	sub    $0x34,%esp
 81736d5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81736d8:	89 04 24             	mov    %eax,(%esp)
 81736db:	e8 1a 09 00 00       	call   8173ffa <_ZN6Taiwan13EntranceQueryC1Ev>
 81736e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81736e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81736e7:	8b 45 08             	mov    0x8(%ebp),%eax
 81736ea:	89 04 24             	mov    %eax,(%esp)
 81736ed:	e8 6a 1e 00 00       	call   817555c <_ZN6Taiwan10TaiwanCash14processBillingINS_13EntranceQueryEEEbRT_>
 81736f2:	83 f0 01             	xor    $0x1,%eax
 81736f5:	84 c0                	test   %al,%al
 81736f7:	74 07                	je     8173700 <_ZN6Taiwan10TaiwanCash13checkEntranceEPKcRc+0x32>
 81736f9:	b8 04 00 00 00       	mov    $0x4,%eax
 81736fe:	eb 60                	jmp    8173760 <_ZN6Taiwan10TaiwanCash13checkEntranceEPKcRc+0x92>
 8173700:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8173703:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173707:	8b 45 08             	mov    0x8(%ebp),%eax
 817370a:	89 04 24             	mov    %eax,(%esp)
 817370d:	e8 5c ff ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173712:	83 f0 01             	xor    $0x1,%eax
 8173715:	84 c0                	test   %al,%al
 8173717:	74 05                	je     817371e <_ZN6Taiwan10TaiwanCash13checkEntranceEPKcRc+0x50>
 8173719:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817371c:	eb 42                	jmp    8173760 <_ZN6Taiwan10TaiwanCash13checkEntranceEPKcRc+0x92>
 817371e:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8173721:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173728:	00 
 8173729:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 8173730:	00 
 8173731:	c7 44 24 04 ed 52 b8 	movl   $0x8b852ed,0x4(%esp)
 8173738:	08 
 8173739:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817373c:	89 04 24             	mov    %eax,(%esp)
 817373f:	e8 d4 bf 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173744:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8173748:	c7 44 24 04 c0 45 b8 	movl   $0x8b845c0,0x4(%esp)
 817374f:	08 
 8173750:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173753:	89 04 24             	mov    %eax,(%esp)
 8173756:	e8 2d c0 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817375b:	b8 00 00 00 00       	mov    $0x0,%eax
 8173760:	83 c4 34             	add    $0x34,%esp
 8173763:	5b                   	pop    %ebx
 8173764:	5d                   	pop    %ebp
 8173765:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::checkEntrance @ 0x81736ce

/* Taiwan::TaiwanCash::checkEntrance(char const*, char&) */

int Taiwan::TaiwanCash::checkEntrance(char *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  EntranceQuery local_24 [4];
  int local_20;
  cMyTrace local_1c [20];
  
  EntranceQuery::EntranceQuery(local_24);
  bVar1 = processBilling<Taiwan::EntranceQuery>((TaiwanCash *)param_1,local_24);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_20);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_1c,"checkEntrance",0x34,0);
      cMyTrace::operator()(local_1c,"[Taiwan, Billing] EntranceQuery Entrance:%d",local_20);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}

```

---

## checkResultCode

```asm
// === 0817366e Taiwan::TaiwanCash::checkResultCode  [0x0817366e-0x8173685] ===
 817366e:	55                   	push   %ebp
 817366f:	89 e5                	mov    %esp,%ebp
 8173671:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8173675:	74 07                	je     817367e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi+0x10>
 8173677:	b8 00 00 00 00       	mov    $0x0,%eax
 817367c:	eb 05                	jmp    8173683 <_ZN6Taiwan10TaiwanCash15checkResultCodeEi+0x15>
 817367e:	b8 01 00 00 00       	mov    $0x1,%eax
 8173683:	5d                   	pop    %ebp
 8173684:	c3                   	ret
 8173685:	90                   	nop

```

```c
// Taiwan::TaiwanCash::checkResultCode @ 0x817366e

/* Taiwan::TaiwanCash::checkResultCode(int) */

bool __thiscall Taiwan::TaiwanCash::checkResultCode(TaiwanCash *this,int param_1)

{
  return param_1 == 0;
}

```

---

## confirm

```asm
// === 08173c48 Taiwan::TaiwanCash::confirm  [0x08173c48-0x8173d1b] ===
 8173c48:	55                   	push   %ebp
 8173c49:	89 e5                	mov    %esp,%ebp
 8173c4b:	53                   	push   %ebx
 8173c4c:	83 ec 34             	sub    $0x34,%esp
 8173c4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173c52:	8b 50 08             	mov    0x8(%eax),%edx
 8173c55:	8b 40 04             	mov    0x4(%eax),%eax
 8173c58:	09 d0                	or     %edx,%eax
 8173c5a:	85 c0                	test   %eax,%eax
 8173c5c:	75 0a                	jne    8173c68 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE+0x20>
 8173c5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8173c63:	e9 ae 00 00 00       	jmp    8173d16 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE+0xce>
 8173c68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173c6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173c6f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8173c72:	89 04 24             	mov    %eax,(%esp)
 8173c75:	e8 4c 0e 00 00       	call   8174ac6 <_ZN6Taiwan12ConfirmQueryC1ERKNS_15BillTransactionE>
 8173c7a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8173c7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173c81:	8b 45 08             	mov    0x8(%ebp),%eax
 8173c84:	89 04 24             	mov    %eax,(%esp)
 8173c87:	e8 5c 1c 00 00       	call   81758e8 <_ZN6Taiwan10TaiwanCash14processBillingINS_12ConfirmQueryEEEbRT_>
 8173c8c:	83 f0 01             	xor    $0x1,%eax
 8173c8f:	84 c0                	test   %al,%al
 8173c91:	74 07                	je     8173c9a <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE+0x52>
 8173c93:	b8 04 00 00 00       	mov    $0x4,%eax
 8173c98:	eb 7c                	jmp    8173d16 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE+0xce>
 8173c9a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173c9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173ca1:	8b 45 08             	mov    0x8(%ebp),%eax
 8173ca4:	89 04 24             	mov    %eax,(%esp)
 8173ca7:	e8 c2 f9 ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173cac:	83 f0 01             	xor    $0x1,%eax
 8173caf:	84 c0                	test   %al,%al
 8173cb1:	74 05                	je     8173cb8 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE+0x70>
 8173cb3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173cb6:	eb 5e                	jmp    8173d16 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE+0xce>
 8173cb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173cbb:	8b 50 08             	mov    0x8(%eax),%edx
 8173cbe:	8b 40 04             	mov    0x4(%eax),%eax
 8173cc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8173cc8:	00 
 8173cc9:	89 04 24             	mov    %eax,(%esp)
 8173ccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8173cd0:	e8 c3 53 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8173cd5:	89 c3                	mov    %eax,%ebx
 8173cd7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173cde:	00 
 8173cdf:	c7 44 24 08 a7 00 00 	movl   $0xa7,0x8(%esp)
 8173ce6:	00 
 8173ce7:	c7 44 24 04 b8 52 b8 	movl   $0x8b852b8,0x4(%esp)
 8173cee:	08 
 8173cef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173cf2:	89 04 24             	mov    %eax,(%esp)
 8173cf5:	e8 1e ba 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173cfa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8173cfe:	c7 44 24 04 18 47 b8 	movl   $0x8b84718,0x4(%esp)
 8173d05:	08 
 8173d06:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173d09:	89 04 24             	mov    %eax,(%esp)
 8173d0c:	e8 77 ba 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173d11:	b8 00 00 00 00       	mov    $0x0,%eax
 8173d16:	83 c4 34             	add    $0x34,%esp
 8173d19:	5b                   	pop    %ebx
 8173d1a:	5d                   	pop    %ebp
 8173d1b:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::confirm @ 0x8173c48

/* Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&) */

int __thiscall Taiwan::TaiwanCash::confirm(TaiwanCash *this,BillTransaction *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_2c [4];
  cMyTrace local_1c [20];
  
  if (*(int *)(param_1 + 4) == 0 && *(int *)(param_1 + 8) == 0) {
    local_2c[0] = 0;
  }
  else {
    ConfirmQuery::ConfirmQuery((ConfirmQuery *)local_2c,param_1);
    bVar1 = processBilling<Taiwan::ConfirmQuery>(this,(ConfirmQuery *)local_2c);
    if (bVar1) {
      cVar2 = checkResultCode(this,local_2c[0]);
      if (cVar2 == '\x01') {
        uVar3 = NumberToString(*(ulonglong *)(param_1 + 4),0);
        cMyTrace::cMyTrace(local_1c,"confirm",0xa7,0);
        cMyTrace::operator()(local_1c,"[Taiwan, Billing] ConfirmQuery Transaction:%s",uVar3);
        local_2c[0] = 0;
      }
    }
    else {
      local_2c[0] = 4;
    }
  }
  return local_2c[0];
}

```

---

## getBalance

```asm
// === 08173766 Taiwan::TaiwanCash::getBalance  [0x08173766-0x8173819] ===
 8173766:	55                   	push   %ebp
 8173767:	89 e5                	mov    %esp,%ebp
 8173769:	56                   	push   %esi
 817376a:	53                   	push   %ebx
 817376b:	83 ec 30             	sub    $0x30,%esp
 817376e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173771:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173775:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8173778:	89 04 24             	mov    %eax,(%esp)
 817377b:	e8 b0 08 00 00       	call   8174030 <_ZN6Taiwan12BalanceQueryC1EPKc>
 8173780:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8173783:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173787:	8b 45 08             	mov    0x8(%ebp),%eax
 817378a:	89 04 24             	mov    %eax,(%esp)
 817378d:	e8 66 1e 00 00       	call   81755f8 <_ZN6Taiwan10TaiwanCash14processBillingINS_12BalanceQueryEEEbRT_>
 8173792:	83 f0 01             	xor    $0x1,%eax
 8173795:	84 c0                	test   %al,%al
 8173797:	74 07                	je     81737a0 <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRi+0x3a>
 8173799:	b8 04 00 00 00       	mov    $0x4,%eax
 817379e:	eb 73                	jmp    8173813 <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRi+0xad>
 81737a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81737a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81737a7:	8b 45 08             	mov    0x8(%ebp),%eax
 81737aa:	89 04 24             	mov    %eax,(%esp)
 81737ad:	e8 bc fe ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 81737b2:	83 f0 01             	xor    $0x1,%eax
 81737b5:	84 c0                	test   %al,%al
 81737b7:	74 05                	je     81737be <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRi+0x58>
 81737b9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81737bc:	eb 55                	jmp    8173813 <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRi+0xad>
 81737be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81737c1:	89 c2                	mov    %eax,%edx
 81737c3:	8b 45 10             	mov    0x10(%ebp),%eax
 81737c6:	89 10                	mov    %edx,(%eax)
 81737c8:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 81737cb:	8b 45 10             	mov    0x10(%ebp),%eax
 81737ce:	8b 18                	mov    (%eax),%ebx
 81737d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81737d7:	00 
 81737d8:	c7 44 24 08 46 00 00 	movl   $0x46,0x8(%esp)
 81737df:	00 
 81737e0:	c7 44 24 04 e2 52 b8 	movl   $0x8b852e2,0x4(%esp)
 81737e7:	08 
 81737e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81737eb:	89 04 24             	mov    %eax,(%esp)
 81737ee:	e8 25 bf 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81737f3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81737f7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81737fb:	c7 44 24 04 ec 45 b8 	movl   $0x8b845ec,0x4(%esp)
 8173802:	08 
 8173803:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173806:	89 04 24             	mov    %eax,(%esp)
 8173809:	e8 7a bf 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817380e:	b8 00 00 00 00       	mov    $0x0,%eax
 8173813:	83 c4 30             	add    $0x30,%esp
 8173816:	5b                   	pop    %ebx
 8173817:	5e                   	pop    %esi
 8173818:	5d                   	pop    %ebp
 8173819:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::getBalance @ 0x8173766

/* Taiwan::TaiwanCash::getBalance(char const*, int&) */

int __thiscall Taiwan::TaiwanCash::getBalance(TaiwanCash *this,char *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  BalanceQuery local_28 [4];
  int local_24;
  int local_20;
  cMyTrace local_1c [16];
  
  BalanceQuery::BalanceQuery(local_28,param_1);
  bVar2 = processBilling<Taiwan::BalanceQuery>(this,local_28);
  if (bVar2) {
    cVar3 = checkResultCode(this,local_20);
    if (cVar3 == '\x01') {
      *param_2 = local_24;
      iVar1 = *param_2;
      cMyTrace::cMyTrace(local_1c,"getBalance",0x46,0);
      cMyTrace::operator()
                (local_1c,"[Taiwan, Billing] BalanceQuery Balance:%d, Result:%d",iVar1,local_20);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}

```

---

## getBalance_0817381a

```asm
// === 0817381a Taiwan::TaiwanCash::getBalance  [0x0817381a-0x81738e5] ===
 817381a:	55                   	push   %ebp
 817381b:	89 e5                	mov    %esp,%ebp
 817381d:	57                   	push   %edi
 817381e:	56                   	push   %esi
 817381f:	53                   	push   %ebx
 8173820:	83 ec 4c             	sub    $0x4c,%esp
 8173823:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173826:	89 44 24 04          	mov    %eax,0x4(%esp)
 817382a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 817382d:	89 04 24             	mov    %eax,(%esp)
 8173830:	e8 5b 0a 00 00       	call   8174290 <_ZN6Taiwan17BalancePointQueryC1EPKc>
 8173835:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8173838:	89 44 24 04          	mov    %eax,0x4(%esp)
 817383c:	8b 45 08             	mov    0x8(%ebp),%eax
 817383f:	89 04 24             	mov    %eax,(%esp)
 8173842:	e8 6d 1e 00 00       	call   81756b4 <_ZN6Taiwan10TaiwanCash14processBillingINS_17BalancePointQueryEEEbRT_>
 8173847:	83 f0 01             	xor    $0x1,%eax
 817384a:	84 c0                	test   %al,%al
 817384c:	74 0a                	je     8173858 <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_+0x3e>
 817384e:	b8 04 00 00 00       	mov    $0x4,%eax
 8173853:	e9 86 00 00 00       	jmp    81738de <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_+0xc4>
 8173858:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817385b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817385f:	8b 45 08             	mov    0x8(%ebp),%eax
 8173862:	89 04 24             	mov    %eax,(%esp)
 8173865:	e8 04 fe ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 817386a:	83 f0 01             	xor    $0x1,%eax
 817386d:	84 c0                	test   %al,%al
 817386f:	74 05                	je     8173876 <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_+0x5c>
 8173871:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8173874:	eb 68                	jmp    81738de <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_+0xc4>
 8173876:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8173879:	89 c2                	mov    %eax,%edx
 817387b:	8b 45 10             	mov    0x10(%ebp),%eax
 817387e:	89 10                	mov    %edx,(%eax)
 8173880:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8173883:	89 c2                	mov    %eax,%edx
 8173885:	8b 45 14             	mov    0x14(%ebp),%eax
 8173888:	89 10                	mov    %edx,(%eax)
 817388a:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 817388d:	8b 45 14             	mov    0x14(%ebp),%eax
 8173890:	8b 30                	mov    (%eax),%esi
 8173892:	8b 45 10             	mov    0x10(%ebp),%eax
 8173895:	8b 18                	mov    (%eax),%ebx
 8173897:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 817389e:	00 
 817389f:	c7 44 24 08 5a 00 00 	movl   $0x5a,0x8(%esp)
 81738a6:	00 
 81738a7:	c7 44 24 04 d7 52 b8 	movl   $0x8b852d7,0x4(%esp)
 81738ae:	08 
 81738af:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81738b2:	89 04 24             	mov    %eax,(%esp)
 81738b5:	e8 5e be 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81738ba:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81738be:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81738c2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81738c6:	c7 44 24 04 24 46 b8 	movl   $0x8b84624,0x4(%esp)
 81738cd:	08 
 81738ce:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81738d1:	89 04 24             	mov    %eax,(%esp)
 81738d4:	e8 af be 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81738d9:	b8 00 00 00 00       	mov    $0x0,%eax
 81738de:	83 c4 4c             	add    $0x4c,%esp
 81738e1:	5b                   	pop    %ebx
 81738e2:	5e                   	pop    %esi
 81738e3:	5f                   	pop    %edi
 81738e4:	5d                   	pop    %ebp
 81738e5:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::getBalance @ 0x817381a

/* Taiwan::TaiwanCash::getBalance(char const*, int&, int&) */

int __thiscall
Taiwan::TaiwanCash::getBalance(TaiwanCash *this,char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  BalancePointQuery local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  cMyTrace local_2c [28];
  
  BalancePointQuery::BalancePointQuery(local_3c,param_1);
  bVar3 = processBilling<Taiwan::BalancePointQuery>(this,local_3c);
  if (bVar3) {
    cVar4 = checkResultCode(this,local_30);
    if (cVar4 == '\x01') {
      *param_2 = local_38;
      *param_3 = local_34;
      iVar1 = *param_3;
      iVar2 = *param_2;
      cMyTrace::cMyTrace(local_2c,"getBalance",0x5a,0);
      cMyTrace::operator()
                (local_2c,"[Taiwan, Billing] BalancePointQuery Balance:%d, Point:%d, Result:%d",
                 iVar2,iVar1,local_30);
      local_30 = 0;
    }
  }
  else {
    local_30 = 4;
  }
  return local_30;
}

```

---

## gift

```asm
// === 08173b20 Taiwan::TaiwanCash::gift  [0x08173b20-0x8173c47] ===
 8173b20:	55                   	push   %ebp
 8173b21:	89 e5                	mov    %esp,%ebp
 8173b23:	53                   	push   %ebx
 8173b24:	83 ec 74             	sub    $0x74,%esp
 8173b27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8173b2a:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8173b2d:	8b 45 10             	mov    0x10(%ebp),%eax
 8173b30:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8173b33:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8173b36:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8173b39:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8173b3c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8173b3f:	89 44 24 18          	mov    %eax,0x18(%esp)
 8173b43:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8173b47:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8173b4b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8173b4f:	8b 45 24             	mov    0x24(%ebp),%eax
 8173b52:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8173b56:	8b 45 20             	mov    0x20(%ebp),%eax
 8173b59:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173b5d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8173b60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173b64:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8173b67:	89 04 24             	mov    %eax,(%esp)
 8173b6a:	e8 8f 0c 00 00       	call   81747fe <_ZN6Taiwan9GiftQueryC1EPKcS2_S2_jjx>
 8173b6f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8173b72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173b76:	8b 45 08             	mov    0x8(%ebp),%eax
 8173b79:	89 04 24             	mov    %eax,(%esp)
 8173b7c:	e8 ab 1c 00 00       	call   817582c <_ZN6Taiwan10TaiwanCash14processBillingINS_9GiftQueryEEEbRT_>
 8173b81:	83 f0 01             	xor    $0x1,%eax
 8173b84:	84 c0                	test   %al,%al
 8173b86:	74 0a                	je     8173b92 <_ZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionE+0x72>
 8173b88:	b8 04 00 00 00       	mov    $0x4,%eax
 8173b8d:	e9 af 00 00 00       	jmp    8173c41 <_ZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionE+0x121>
 8173b92:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173b95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173b99:	8b 45 08             	mov    0x8(%ebp),%eax
 8173b9c:	89 04 24             	mov    %eax,(%esp)
 8173b9f:	e8 ca fa ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173ba4:	83 f0 01             	xor    $0x1,%eax
 8173ba7:	84 c0                	test   %al,%al
 8173ba9:	74 08                	je     8173bb3 <_ZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionE+0x93>
 8173bab:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8173bae:	e9 8e 00 00 00       	jmp    8173c41 <_ZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionE+0x121>
 8173bb3:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8173bb6:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8173bb9:	89 10                	mov    %edx,(%eax)
 8173bbb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8173bbe:	89 50 04             	mov    %edx,0x4(%eax)
 8173bc1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8173bc4:	89 50 08             	mov    %edx,0x8(%eax)
 8173bc7:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8173bca:	8b 50 08             	mov    0x8(%eax),%edx
 8173bcd:	8b 40 04             	mov    0x4(%eax),%eax
 8173bd0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8173bd7:	00 
 8173bd8:	89 04 24             	mov    %eax,(%esp)
 8173bdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8173bdf:	e8 b4 54 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8173be4:	89 c3                	mov    %eax,%ebx
 8173be6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173bed:	00 
 8173bee:	c7 44 24 08 95 00 00 	movl   $0x95,0x8(%esp)
 8173bf5:	00 
 8173bf6:	c7 44 24 04 c0 52 b8 	movl   $0x8b852c0,0x4(%esp)
 8173bfd:	08 
 8173bfe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173c01:	89 04 24             	mov    %eax,(%esp)
 8173c04:	e8 0f bb 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173c09:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8173c0d:	8b 45 18             	mov    0x18(%ebp),%eax
 8173c10:	89 44 24 14          	mov    %eax,0x14(%esp)
 8173c14:	8b 45 24             	mov    0x24(%ebp),%eax
 8173c17:	89 44 24 10          	mov    %eax,0x10(%esp)
 8173c1b:	8b 45 20             	mov    0x20(%ebp),%eax
 8173c1e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8173c22:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8173c25:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173c29:	c7 44 24 04 b8 46 b8 	movl   $0x8b846b8,0x4(%esp)
 8173c30:	08 
 8173c31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173c34:	89 04 24             	mov    %eax,(%esp)
 8173c37:	e8 4c bb 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173c3c:	b8 00 00 00 00       	mov    $0x0,%eax
 8173c41:	83 c4 74             	add    $0x74,%esp
 8173c44:	5b                   	pop    %ebx
 8173c45:	5d                   	pop    %ebp
 8173c46:	c3                   	ret
 8173c47:	90                   	nop

```

```c
// Taiwan::TaiwanCash::gift @ 0x8173b20

/* Taiwan::TaiwanCash::gift(unsigned long long, int, int, char const*, char const*, char const*,
   char const*, Taiwan::BillTransaction&) */

int Taiwan::TaiwanCash::gift
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,char *param_6,
              char *param_7,BillTransaction *param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000028;
  GiftQuery local_48 [28];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  cMyTrace local_1c [20];
  
  GiftQuery::GiftQuery
            (local_48,param_5,param_6,param_7,param_3,(uint)param_4,CONCAT44(param_2,param_1._4_4_))
  ;
  bVar1 = processBilling<Taiwan::GiftQuery>((TaiwanCash *)param_1,local_48);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_2c);
    if (cVar2 == '\x01') {
      *in_stack_00000028 = local_28;
      in_stack_00000028[1] = local_24;
      in_stack_00000028[2] = local_20;
      uVar3 = NumberToString(*(ulonglong *)(in_stack_00000028 + 1),0);
      cMyTrace::cMyTrace(local_1c,"gift",0x95,0);
      cMyTrace::operator()
                (local_1c,
                 "[Taiwan, Billing] GiftQuery Account:%s, SendCharac:%s, RecvCharac:%s, Price:%d, Transaction:%s"
                 ,param_5,param_6,param_7,param_4,uVar3);
      local_2c = 0;
    }
  }
  else {
    local_2c = 4;
  }
  return local_2c;
}

```

---

## increaseRequest

```asm
// === 0817365a Taiwan::TaiwanCash::increaseRequest  [0x0817365a-0x817366d] ===
 817365a:	55                   	push   %ebp
 817365b:	89 e5                	mov    %esp,%ebp
 817365d:	8b 45 08             	mov    0x8(%ebp),%eax
 8173660:	8b 40 04             	mov    0x4(%eax),%eax
 8173663:	8d 50 01             	lea    0x1(%eax),%edx
 8173666:	8b 45 08             	mov    0x8(%ebp),%eax
 8173669:	89 50 04             	mov    %edx,0x4(%eax)
 817366c:	5d                   	pop    %ebp
 817366d:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::increaseRequest @ 0x817365a

/* Taiwan::TaiwanCash::increaseRequest() */

void __thiscall Taiwan::TaiwanCash::increaseRequest(TaiwanCash *this)

{
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

```

---

## init

```asm
// === 08173686 Taiwan::TaiwanCash::init  [0x08173686-0x81736cd] ===
 8173686:	55                   	push   %ebp
 8173687:	89 e5                	mov    %esp,%ebp
 8173689:	83 ec 28             	sub    $0x28,%esp
 817368c:	8b 45 08             	mov    0x8(%ebp),%eax
 817368f:	83 c0 08             	add    $0x8,%eax
 8173692:	89 04 24             	mov    %eax,(%esp)
 8173695:	e8 4a 06 28 00       	call   83f3ce4 <_ZN5MySQL4initEv>
 817369a:	8b 45 08             	mov    0x8(%ebp),%eax
 817369d:	8d 50 08             	lea    0x8(%eax),%edx
 81736a0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81736a3:	89 44 24 14          	mov    %eax,0x14(%esp)
 81736a7:	8b 45 18             	mov    0x18(%ebp),%eax
 81736aa:	89 44 24 10          	mov    %eax,0x10(%esp)
 81736ae:	8b 45 14             	mov    0x14(%ebp),%eax
 81736b1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81736b5:	8b 45 10             	mov    0x10(%ebp),%eax
 81736b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81736bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81736bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81736c3:	89 14 24             	mov    %edx,(%esp)
 81736c6:	e8 59 09 28 00       	call   83f4024 <_ZN5MySQL4openEPcjS0_S0_S0_>
 81736cb:	c9                   	leave
 81736cc:	c3                   	ret
 81736cd:	90                   	nop

```

```c
// Taiwan::TaiwanCash::init @ 0x8173686

/* Taiwan::TaiwanCash::init(char*, unsigned int, char*, char*, char*) */

void __thiscall
Taiwan::TaiwanCash::init
          (TaiwanCash *this,char *param_1,uint param_2,char *param_3,char *param_4,char *param_5)

{
  MySQL::init((MySQL *)(this + 8));
  MySQL::open((MySQL *)(this + 8),param_1,param_2,param_3,param_4,param_5);
  return;
}

```

---

## purchase

```asm
// === 081738e6 Taiwan::TaiwanCash::purchase  [0x081738e6-0x81739ff] ===
 81738e6:	55                   	push   %ebp
 81738e7:	89 e5                	mov    %esp,%ebp
 81738e9:	53                   	push   %ebx
 81738ea:	83 ec 74             	sub    $0x74,%esp
 81738ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81738f0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81738f3:	8b 45 10             	mov    0x10(%ebp),%eax
 81738f6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81738f9:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81738fc:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 81738ff:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8173902:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8173905:	89 44 24 14          	mov    %eax,0x14(%esp)
 8173909:	89 54 24 18          	mov    %edx,0x18(%esp)
 817390d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8173911:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8173915:	8b 45 20             	mov    0x20(%ebp),%eax
 8173918:	89 44 24 08          	mov    %eax,0x8(%esp)
 817391c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 817391f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173923:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8173926:	89 04 24             	mov    %eax,(%esp)
 8173929:	e8 1e 0c 00 00       	call   817454c <_ZN6Taiwan13PurchaseQueryC1EPKcS2_jjx>
 817392e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8173931:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173935:	8b 45 08             	mov    0x8(%ebp),%eax
 8173938:	89 04 24             	mov    %eax,(%esp)
 817393b:	e8 30 1e 00 00       	call   8175770 <_ZN6Taiwan10TaiwanCash14processBillingINS_13PurchaseQueryEEEbRT_>
 8173940:	83 f0 01             	xor    $0x1,%eax
 8173943:	84 c0                	test   %al,%al
 8173945:	74 0a                	je     8173951 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE+0x6b>
 8173947:	b8 04 00 00 00       	mov    $0x4,%eax
 817394c:	e9 a8 00 00 00       	jmp    81739f9 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE+0x113>
 8173951:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8173954:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173958:	8b 45 08             	mov    0x8(%ebp),%eax
 817395b:	89 04 24             	mov    %eax,(%esp)
 817395e:	e8 0b fd ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173963:	83 f0 01             	xor    $0x1,%eax
 8173966:	84 c0                	test   %al,%al
 8173968:	74 08                	je     8173972 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE+0x8c>
 817396a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817396d:	e9 87 00 00 00       	jmp    81739f9 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE+0x113>
 8173972:	8b 45 24             	mov    0x24(%ebp),%eax
 8173975:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8173978:	89 10                	mov    %edx,(%eax)
 817397a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 817397d:	89 50 04             	mov    %edx,0x4(%eax)
 8173980:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8173983:	89 50 08             	mov    %edx,0x8(%eax)
 8173986:	8b 45 24             	mov    0x24(%ebp),%eax
 8173989:	8b 50 08             	mov    0x8(%eax),%edx
 817398c:	8b 40 04             	mov    0x4(%eax),%eax
 817398f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8173996:	00 
 8173997:	89 04 24             	mov    %eax,(%esp)
 817399a:	89 54 24 04          	mov    %edx,0x4(%esp)
 817399e:	e8 f5 56 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 81739a3:	89 c3                	mov    %eax,%ebx
 81739a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81739ac:	00 
 81739ad:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 81739b4:	00 
 81739b5:	c7 44 24 04 ce 52 b8 	movl   $0x8b852ce,0x4(%esp)
 81739bc:	08 
 81739bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81739c0:	89 04 24             	mov    %eax,(%esp)
 81739c3:	e8 50 bd 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81739c8:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81739cc:	8b 45 18             	mov    0x18(%ebp),%eax
 81739cf:	89 44 24 10          	mov    %eax,0x10(%esp)
 81739d3:	8b 45 20             	mov    0x20(%ebp),%eax
 81739d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81739da:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81739dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81739e1:	c7 44 24 04 68 46 b8 	movl   $0x8b84668,0x4(%esp)
 81739e8:	08 
 81739e9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81739ec:	89 04 24             	mov    %eax,(%esp)
 81739ef:	e8 94 bd 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81739f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81739f9:	83 c4 74             	add    $0x74,%esp
 81739fc:	5b                   	pop    %ebx
 81739fd:	5d                   	pop    %ebp
 81739fe:	c3                   	ret
 81739ff:	90                   	nop

```

```c
// Taiwan::TaiwanCash::purchase @ 0x81738e6

/* Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*,
   Taiwan::BillTransaction&) */

int Taiwan::TaiwanCash::purchase
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
              BillTransaction *param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000020;
  PurchaseQuery local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  cMyTrace local_1c [20];
  
  PurchaseQuery::PurchaseQuery
            (local_44,param_5,(char *)param_6,param_3,(uint)param_4,CONCAT44(param_2,param_1._4_4_))
  ;
  bVar1 = processBilling<Taiwan::PurchaseQuery>((TaiwanCash *)param_1,local_44);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_20);
    if (cVar2 == '\x01') {
      *in_stack_00000020 = local_2c;
      in_stack_00000020[1] = local_28;
      in_stack_00000020[2] = local_24;
      uVar3 = NumberToString(*(ulonglong *)(in_stack_00000020 + 1),0);
      cMyTrace::cMyTrace(local_1c,"purchase",0x6e,0);
      cMyTrace::operator()
                (local_1c,
                 "[Taiwan, Billing] PurchaseQuery Account:%s, Charac:%s, Price:%d, Transaction:%s",
                 param_5,param_6,param_4,uVar3);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}

```

---

## purchase_08173a00

```asm
// === 08173a00 Taiwan::TaiwanCash::purchase  [0x08173a00-0x8173b1f] ===
 8173a00:	55                   	push   %ebp
 8173a01:	89 e5                	mov    %esp,%ebp
 8173a03:	53                   	push   %ebx
 8173a04:	83 ec 74             	sub    $0x74,%esp
 8173a07:	8b 45 28             	mov    0x28(%ebp),%eax
 8173a0a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8173a0d:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8173a10:	8b 55 10             	mov    0x10(%ebp),%edx
 8173a13:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8173a16:	66 89 45 ac          	mov    %ax,-0x54(%ebp)
 8173a1a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8173a1d:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8173a20:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8173a23:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8173a26:	89 44 24 14          	mov    %eax,0x14(%esp)
 8173a2a:	89 54 24 18          	mov    %edx,0x18(%esp)
 8173a2e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8173a32:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8173a36:	8b 45 20             	mov    0x20(%ebp),%eax
 8173a39:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173a3d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8173a40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173a44:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8173a47:	89 04 24             	mov    %eax,(%esp)
 8173a4a:	e8 fd 0a 00 00       	call   817454c <_ZN6Taiwan13PurchaseQueryC1EPKcS2_jjx>
 8173a4f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8173a52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173a56:	8b 45 08             	mov    0x8(%ebp),%eax
 8173a59:	89 04 24             	mov    %eax,(%esp)
 8173a5c:	e8 0f 1d 00 00       	call   8175770 <_ZN6Taiwan10TaiwanCash14processBillingINS_13PurchaseQueryEEEbRT_>
 8173a61:	83 f0 01             	xor    $0x1,%eax
 8173a64:	84 c0                	test   %al,%al
 8173a66:	74 0a                	je     8173a72 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs+0x72>
 8173a68:	b8 04 00 00 00       	mov    $0x4,%eax
 8173a6d:	e9 a8 00 00 00       	jmp    8173b1a <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs+0x11a>
 8173a72:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8173a75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8173a79:	8b 45 08             	mov    0x8(%ebp),%eax
 8173a7c:	89 04 24             	mov    %eax,(%esp)
 8173a7f:	e8 ea fb ff ff       	call   817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>
 8173a84:	83 f0 01             	xor    $0x1,%eax
 8173a87:	84 c0                	test   %al,%al
 8173a89:	74 08                	je     8173a93 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs+0x93>
 8173a8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8173a8e:	e9 87 00 00 00       	jmp    8173b1a <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs+0x11a>
 8173a93:	8b 45 24             	mov    0x24(%ebp),%eax
 8173a96:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8173a99:	89 10                	mov    %edx,(%eax)
 8173a9b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8173a9e:	89 50 04             	mov    %edx,0x4(%eax)
 8173aa1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8173aa4:	89 50 08             	mov    %edx,0x8(%eax)
 8173aa7:	8b 45 24             	mov    0x24(%ebp),%eax
 8173aaa:	8b 50 08             	mov    0x8(%eax),%edx
 8173aad:	8b 40 04             	mov    0x4(%eax),%eax
 8173ab0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8173ab7:	00 
 8173ab8:	89 04 24             	mov    %eax,(%esp)
 8173abb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8173abf:	e8 d4 55 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8173ac4:	89 c3                	mov    %eax,%ebx
 8173ac6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8173acd:	00 
 8173ace:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 8173ad5:	00 
 8173ad6:	c7 44 24 04 c5 52 b8 	movl   $0x8b852c5,0x4(%esp)
 8173add:	08 
 8173ade:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173ae1:	89 04 24             	mov    %eax,(%esp)
 8173ae4:	e8 2f bc 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8173ae9:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8173aed:	8b 45 18             	mov    0x18(%ebp),%eax
 8173af0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8173af4:	8b 45 20             	mov    0x20(%ebp),%eax
 8173af7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8173afb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8173afe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8173b02:	c7 44 24 04 68 46 b8 	movl   $0x8b84668,0x4(%esp)
 8173b09:	08 
 8173b0a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8173b0d:	89 04 24             	mov    %eax,(%esp)
 8173b10:	e8 73 bc 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8173b15:	b8 00 00 00 00       	mov    $0x0,%eax
 8173b1a:	83 c4 74             	add    $0x74,%esp
 8173b1d:	5b                   	pop    %ebx
 8173b1e:	5d                   	pop    %ebp
 8173b1f:	c3                   	ret

```

```c
// Taiwan::TaiwanCash::purchase @ 0x8173a00

/* Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*,
   Taiwan::BillTransaction&, short) */

int __thiscall
Taiwan::TaiwanCash::purchase
          (TaiwanCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          BillTransaction *param_6,short param_7)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  PurchaseQuery local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  cMyTrace local_1c [20];
  
  PurchaseQuery::PurchaseQuery(local_44,param_4,param_5,param_2,param_3,param_1);
  bVar1 = processBilling<Taiwan::PurchaseQuery>(this,local_44);
  if (bVar1) {
    cVar2 = checkResultCode(this,local_20);
    if (cVar2 == '\x01') {
      *(undefined4 *)param_6 = local_2c;
      *(undefined4 *)(param_6 + 4) = local_28;
      *(undefined4 *)(param_6 + 8) = local_24;
      uVar3 = NumberToString(*(ulonglong *)(param_6 + 4),0);
      cMyTrace::cMyTrace(local_1c,"purchase",0x81,0);
      cMyTrace::operator()
                (local_1c,
                 "[Taiwan, Billing] PurchaseQuery Account:%s, Charac:%s, Price:%d, Transaction:%s",
                 param_4,param_5,param_3,uVar3);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}

```

