# WongWork__IPG__CIPGMgr__CIPGWorker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## ProcIPGSync

```asm
// === 08105258 WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync  [0x08105258-0x8105275] ===
 8105258:	55                   	push   %ebp
 8105259:	89 e5                	mov    %esp,%ebp
 810525b:	81 ec c8 00 00 00    	sub    $0xc8,%esp
 8105261:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105264:	89 44 24 04          	mov    %eax,0x4(%esp)
 8105268:	8b 45 08             	mov    0x8(%ebp),%eax
 810526b:	89 04 24             	mov    %eax,(%esp)
 810526e:	e8 53 f6 ff ff       	call   81048c6 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE>
 8105273:	c9                   	leave
 8105274:	c3                   	ret
 8105275:	90                   	nop

```

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync @ 0x8105258

/* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(WongWork::IPG::SIPGData*) */

void __thiscall WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(CIPGWorker *this,SIPGData *param_1)

{
  ProcIPGSyncForTaiwan(this,param_1);
  return;
}

```

---

## ProcIPGSyncForChina

```asm
// === 081048b4 WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina  [0x081048b4-0x81048c5] ===
 81048b4:	55                   	push   %ebp
 81048b5:	89 e5                	mov    %esp,%ebp
 81048b7:	83 ec 10             	sub    $0x10,%esp
 81048ba:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 81048c1:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81048c4:	c9                   	leave
 81048c5:	c3                   	ret

```

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina @ 0x81048b4

/* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina(WongWork::IPG::SIPGData*) */

undefined4 WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina(SIPGData *param_1)

{
  return 0;
}

```

---

## ProcIPGSyncForTaiwan

```asm
// === 081048c6 WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan  [0x081048c6-0x8105257] ===
 81048c6:	55                   	push   %ebp
 81048c7:	89 e5                	mov    %esp,%ebp
 81048c9:	57                   	push   %edi
 81048ca:	56                   	push   %esi
 81048cb:	53                   	push   %ebx
 81048cc:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 81048d2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81048d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81048dc:	8b 40 1c             	mov    0x1c(%eax),%eax
 81048df:	83 f8 06             	cmp    $0x6,%eax
 81048e2:	0f 87 29 09 00 00    	ja     8105211 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x94b>
 81048e8:	8b 04 85 90 22 b4 08 	mov    0x8b42290(,%eax,4),%eax
 81048ef:	ff e0                	jmp    *%eax
 81048f1:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 81048f8:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 81048ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104902:	83 c0 3c             	add    $0x3c,%eax
 8104905:	89 c2                	mov    %eax,%edx
 8104907:	8b 45 08             	mov    0x8(%ebp),%eax
 810490a:	8b 40 0c             	mov    0xc(%eax),%eax
 810490d:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8104913:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 8104916:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 810491a:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 810491d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8104921:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104925:	89 04 24             	mov    %eax,(%esp)
 8104928:	e8 ed ee 06 00       	call   817381a <_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_>
 810492d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8104930:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8104934:	74 45                	je     810497b <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0xb5>
 8104936:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104939:	83 c0 28             	add    $0x28,%eax
 810493c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 810493f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8104943:	89 44 24 14          	mov    %eax,0x14(%esp)
 8104947:	c7 44 24 10 92 21 b4 	movl   $0x8b42192,0x10(%esp)
 810494e:	08 
 810494f:	c7 44 24 0c 43 02 00 	movl   $0x243,0xc(%esp)
 8104956:	00 
 8104957:	c7 44 24 08 a0 30 b4 	movl   $0x8b430a0,0x8(%esp)
 810495e:	08 
 810495f:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 8104966:	08 
 8104967:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810496e:	e8 97 f2 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8104973:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104976:	e9 d2 08 00 00       	jmp    810524d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x987>
 810497b:	8b 45 08             	mov    0x8(%ebp),%eax
 810497e:	8b 40 0c             	mov    0xc(%eax),%eax
 8104981:	89 04 24             	mov    %eax,(%esp)
 8104984:	e8 e3 fc ff ff       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 8104989:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 810498c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810498f:	8b 10                	mov    (%eax),%edx
 8104991:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104994:	89 10                	mov    %edx,(%eax)
 8104996:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104999:	8d 50 04             	lea    0x4(%eax),%edx
 810499c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 810499f:	83 c0 04             	add    $0x4,%eax
 81049a2:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81049a9:	00 
 81049aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81049ae:	89 04 24             	mov    %eax,(%esp)
 81049b1:	e8 1a 8f f7 ff       	call   807d8d0 <strncpy@plt>
 81049b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81049b9:	0f b7 50 18          	movzwl 0x18(%eax),%edx
 81049bd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81049c0:	66 89 50 18          	mov    %dx,0x18(%eax)
 81049c4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81049c7:	c7 40 1c 04 00 00 00 	movl   $0x4,0x1c(%eax)
 81049ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81049d1:	0f b6 50 24          	movzbl 0x24(%eax),%edx
 81049d5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81049d8:	88 50 24             	mov    %dl,0x24(%eax)
 81049db:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81049de:	83 c0 28             	add    $0x28,%eax
 81049e1:	c7 44 24 08 99 00 00 	movl   $0x99,0x8(%esp)
 81049e8:	00 
 81049e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81049f0:	00 
 81049f1:	89 04 24             	mov    %eax,(%esp)
 81049f4:	e8 c7 92 f7 ff       	call   807dcc0 <memset@plt>
 81049f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81049fc:	83 c0 28             	add    $0x28,%eax
 81049ff:	89 c2                	mov    %eax,%edx
 8104a01:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104a04:	83 c0 28             	add    $0x28,%eax
 8104a07:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8104a0e:	00 
 8104a0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104a13:	89 04 24             	mov    %eax,(%esp)
 8104a16:	e8 b5 8e f7 ff       	call   807d8d0 <strncpy@plt>
 8104a1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104a1e:	83 c0 3c             	add    $0x3c,%eax
 8104a21:	89 c2                	mov    %eax,%edx
 8104a23:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104a26:	83 c0 3c             	add    $0x3c,%eax
 8104a29:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8104a30:	00 
 8104a31:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104a35:	89 04 24             	mov    %eax,(%esp)
 8104a38:	e8 93 8e f7 ff       	call   807d8d0 <strncpy@plt>
 8104a3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104a40:	83 c0 64             	add    $0x64,%eax
 8104a43:	89 c2                	mov    %eax,%edx
 8104a45:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104a48:	83 c0 64             	add    $0x64,%eax
 8104a4b:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8104a52:	00 
 8104a53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104a57:	89 04 24             	mov    %eax,(%esp)
 8104a5a:	e8 71 8e f7 ff       	call   807d8d0 <strncpy@plt>
 8104a5f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8104a62:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104a65:	83 c0 69             	add    $0x69,%eax
 8104a68:	89 54 24 08          	mov    %edx,0x8(%esp)
 8104a6c:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 8104a73:	08 
 8104a74:	89 04 24             	mov    %eax,(%esp)
 8104a77:	e8 c4 99 f7 ff       	call   807e440 <sprintf@plt>
 8104a7c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8104a7f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104a82:	05 b5 00 00 00       	add    $0xb5,%eax
 8104a87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8104a8b:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 8104a92:	08 
 8104a93:	89 04 24             	mov    %eax,(%esp)
 8104a96:	e8 a5 99 f7 ff       	call   807e440 <sprintf@plt>
 8104a9b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104a9e:	05 b1 00 00 00       	add    $0xb1,%eax
 8104aa3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8104aa6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8104aaa:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 8104ab1:	08 
 8104ab2:	89 04 24             	mov    %eax,(%esp)
 8104ab5:	e8 86 99 f7 ff       	call   807e440 <sprintf@plt>
 8104aba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104abd:	8b 90 d8 02 00 00    	mov    0x2d8(%eax),%edx
 8104ac3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104ac6:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 8104acc:	e9 79 07 00 00       	jmp    810524a <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x984>
 8104ad1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104ad4:	05 e8 01 00 00       	add    $0x1e8,%eax
 8104ad9:	89 c7                	mov    %eax,%edi
 8104adb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104ade:	83 c0 3c             	add    $0x3c,%eax
 8104ae1:	89 c6                	mov    %eax,%esi
 8104ae3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104ae6:	83 c0 71             	add    $0x71,%eax
 8104ae9:	89 04 24             	mov    %eax,(%esp)
 8104aec:	e8 ff 9b f7 ff       	call   807e6f0 <atoi@plt>
 8104af1:	89 c3                	mov    %eax,%ebx
 8104af3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104af6:	83 c0 69             	add    $0x69,%eax
 8104af9:	89 04 24             	mov    %eax,(%esp)
 8104afc:	e8 ef 9b f7 ff       	call   807e6f0 <atoi@plt>
 8104b01:	8b 55 08             	mov    0x8(%ebp),%edx
 8104b04:	8b 52 0c             	mov    0xc(%edx),%edx
 8104b07:	8b 92 ec 00 00 00    	mov    0xec(%edx),%edx
 8104b0d:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 8104b10:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8104b14:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8104b18:	89 74 24 14          	mov    %esi,0x14(%esp)
 8104b1c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8104b20:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8104b24:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8104b2b:	00 
 8104b2c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8104b33:	00 
 8104b34:	89 14 24             	mov    %edx,(%esp)
 8104b37:	e8 aa ed 06 00       	call   81738e6 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE>
 8104b3c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8104b3f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8104b43:	74 53                	je     8104b98 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x2d2>
 8104b45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104b48:	05 e8 01 00 00       	add    $0x1e8,%eax
 8104b4d:	89 c2                	mov    %eax,%edx
 8104b4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104b52:	83 c0 28             	add    $0x28,%eax
 8104b55:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8104b58:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8104b5c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8104b60:	89 44 24 14          	mov    %eax,0x14(%esp)
 8104b64:	c7 44 24 10 b4 21 b4 	movl   $0x8b421b4,0x10(%esp)
 8104b6b:	08 
 8104b6c:	c7 44 24 0c 69 02 00 	movl   $0x269,0xc(%esp)
 8104b73:	00 
 8104b74:	c7 44 24 08 a0 30 b4 	movl   $0x8b430a0,0x8(%esp)
 8104b7b:	08 
 8104b7c:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 8104b83:	08 
 8104b84:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8104b8b:	e8 7a f0 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8104b90:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104b93:	e9 b5 06 00 00       	jmp    810524d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x987>
 8104b98:	8b 45 08             	mov    0x8(%ebp),%eax
 8104b9b:	8b 40 0c             	mov    0xc(%eax),%eax
 8104b9e:	89 04 24             	mov    %eax,(%esp)
 8104ba1:	e8 c6 fa ff ff       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 8104ba6:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8104ba9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104bac:	8b 10                	mov    (%eax),%edx
 8104bae:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104bb1:	89 10                	mov    %edx,(%eax)
 8104bb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104bb6:	8d 50 04             	lea    0x4(%eax),%edx
 8104bb9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104bbc:	83 c0 04             	add    $0x4,%eax
 8104bbf:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8104bc6:	00 
 8104bc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104bcb:	89 04 24             	mov    %eax,(%esp)
 8104bce:	e8 fd 8c f7 ff       	call   807d8d0 <strncpy@plt>
 8104bd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104bd6:	0f b7 50 18          	movzwl 0x18(%eax),%edx
 8104bda:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104bdd:	66 89 50 18          	mov    %dx,0x18(%eax)
 8104be1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104be4:	c7 40 1c 02 00 00 00 	movl   $0x2,0x1c(%eax)
 8104beb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104bee:	0f b6 50 24          	movzbl 0x24(%eax),%edx
 8104bf2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104bf5:	88 50 24             	mov    %dl,0x24(%eax)
 8104bf8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104bfb:	83 c0 28             	add    $0x28,%eax
 8104bfe:	c7 44 24 08 fc 01 00 	movl   $0x1fc,0x8(%esp)
 8104c05:	00 
 8104c06:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8104c0d:	00 
 8104c0e:	89 04 24             	mov    %eax,(%esp)
 8104c11:	e8 aa 90 f7 ff       	call   807dcc0 <memset@plt>
 8104c16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104c19:	83 c0 28             	add    $0x28,%eax
 8104c1c:	89 c2                	mov    %eax,%edx
 8104c1e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104c21:	83 c0 28             	add    $0x28,%eax
 8104c24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104c28:	89 04 24             	mov    %eax,(%esp)
 8104c2b:	e8 c0 92 f7 ff       	call   807def0 <strcpy@plt>
 8104c30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104c33:	83 c0 3c             	add    $0x3c,%eax
 8104c36:	89 c2                	mov    %eax,%edx
 8104c38:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104c3b:	83 c0 3c             	add    $0x3c,%eax
 8104c3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104c42:	89 04 24             	mov    %eax,(%esp)
 8104c45:	e8 a6 92 f7 ff       	call   807def0 <strcpy@plt>
 8104c4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104c4d:	83 c0 64             	add    $0x64,%eax
 8104c50:	89 c2                	mov    %eax,%edx
 8104c52:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104c55:	83 c0 64             	add    $0x64,%eax
 8104c58:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104c5c:	89 04 24             	mov    %eax,(%esp)
 8104c5f:	e8 8c 92 f7 ff       	call   807def0 <strcpy@plt>
 8104c64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104c67:	83 c0 69             	add    $0x69,%eax
 8104c6a:	89 c2                	mov    %eax,%edx
 8104c6c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104c6f:	83 c0 69             	add    $0x69,%eax
 8104c72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104c76:	89 04 24             	mov    %eax,(%esp)
 8104c79:	e8 72 92 f7 ff       	call   807def0 <strcpy@plt>
 8104c7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104c81:	83 c0 71             	add    $0x71,%eax
 8104c84:	89 c2                	mov    %eax,%edx
 8104c86:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104c89:	83 c0 71             	add    $0x71,%eax
 8104c8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104c90:	89 04 24             	mov    %eax,(%esp)
 8104c93:	e8 58 92 f7 ff       	call   807def0 <strcpy@plt>
 8104c98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104c9b:	83 c0 7d             	add    $0x7d,%eax
 8104c9e:	89 c2                	mov    %eax,%edx
 8104ca0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104ca3:	83 c0 7d             	add    $0x7d,%eax
 8104ca6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104caa:	89 04 24             	mov    %eax,(%esp)
 8104cad:	e8 3e 92 f7 ff       	call   807def0 <strcpy@plt>
 8104cb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104cb5:	05 91 00 00 00       	add    $0x91,%eax
 8104cba:	89 c2                	mov    %eax,%edx
 8104cbc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104cbf:	05 91 00 00 00       	add    $0x91,%eax
 8104cc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104cc8:	89 04 24             	mov    %eax,(%esp)
 8104ccb:	e8 20 92 f7 ff       	call   807def0 <strcpy@plt>
 8104cd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104cd3:	05 f5 00 00 00       	add    $0xf5,%eax
 8104cd8:	89 c2                	mov    %eax,%edx
 8104cda:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104cdd:	05 f5 00 00 00       	add    $0xf5,%eax
 8104ce2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104ce6:	89 04 24             	mov    %eax,(%esp)
 8104ce9:	e8 02 92 f7 ff       	call   807def0 <strcpy@plt>
 8104cee:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104cf1:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8104cf4:	89 90 dc 01 00 00    	mov    %edx,0x1dc(%eax)
 8104cfa:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8104cfd:	89 90 e0 01 00 00    	mov    %edx,0x1e0(%eax)
 8104d03:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8104d06:	89 90 e4 01 00 00    	mov    %edx,0x1e4(%eax)
 8104d0c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104d0f:	05 73 01 00 00       	add    $0x173,%eax
 8104d14:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8104d17:	89 54 24 08          	mov    %edx,0x8(%esp)
 8104d1b:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 8104d22:	08 
 8104d23:	89 04 24             	mov    %eax,(%esp)
 8104d26:	e8 15 97 f7 ff       	call   807e440 <sprintf@plt>
 8104d2b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104d2e:	05 77 01 00 00       	add    $0x177,%eax
 8104d33:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8104d3a:	00 
 8104d3b:	c7 44 24 04 df 21 b4 	movl   $0x8b421df,0x4(%esp)
 8104d42:	08 
 8104d43:	89 04 24             	mov    %eax,(%esp)
 8104d46:	e8 55 8b f7 ff       	call   807d8a0 <memcpy@plt>
 8104d4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104d4e:	8b 90 d8 02 00 00    	mov    0x2d8(%eax),%edx
 8104d54:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104d57:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 8104d5d:	e9 e8 04 00 00       	jmp    810524a <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x984>
 8104d62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104d65:	8b 90 f0 01 00 00    	mov    0x1f0(%eax),%edx
 8104d6b:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8104d6e:	8b 90 f4 01 00 00    	mov    0x1f4(%eax),%edx
 8104d74:	89 55 b8             	mov    %edx,-0x48(%ebp)
 8104d77:	8b 80 f8 01 00 00    	mov    0x1f8(%eax),%eax
 8104d7d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8104d80:	8b 45 08             	mov    0x8(%ebp),%eax
 8104d83:	8b 40 0c             	mov    0xc(%eax),%eax
 8104d86:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8104d8c:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8104d8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104d93:	89 04 24             	mov    %eax,(%esp)
 8104d96:	e8 ad ee 06 00       	call   8173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>
 8104d9b:	e9 aa 04 00 00       	jmp    810524a <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x984>
 8104da0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104da3:	8b 90 f0 01 00 00    	mov    0x1f0(%eax),%edx
 8104da9:	89 55 a8             	mov    %edx,-0x58(%ebp)
 8104dac:	8b 90 f4 01 00 00    	mov    0x1f4(%eax),%edx
 8104db2:	89 55 ac             	mov    %edx,-0x54(%ebp)
 8104db5:	8b 80 f8 01 00 00    	mov    0x1f8(%eax),%eax
 8104dbb:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8104dbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8104dc1:	8b 40 0c             	mov    0xc(%eax),%eax
 8104dc4:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8104dca:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8104dcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104dd1:	89 04 24             	mov    %eax,(%esp)
 8104dd4:	e8 43 ef 06 00       	call   8173d1c <_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE>
 8104dd9:	e9 6c 04 00 00       	jmp    810524a <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x984>
 8104dde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104de1:	83 c0 50             	add    $0x50,%eax
 8104de4:	89 c6                	mov    %eax,%esi
 8104de6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104de9:	8b 80 98 00 00 00    	mov    0x98(%eax),%eax
 8104def:	89 c3                	mov    %eax,%ebx
 8104df1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104df4:	0f b6 80 6d 02 00 00 	movzbl 0x26d(%eax),%eax
 8104dfb:	0f b6 c8             	movzbl %al,%ecx
 8104dfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104e01:	83 c0 28             	add    $0x28,%eax
 8104e04:	89 c2                	mov    %eax,%edx
 8104e06:	8b 45 08             	mov    0x8(%ebp),%eax
 8104e09:	8b 40 0c             	mov    0xc(%eax),%eax
 8104e0c:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8104e12:	8d 7d 9c             	lea    -0x64(%ebp),%edi
 8104e15:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 8104e19:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8104e20:	00 
 8104e21:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8104e28:	00 
 8104e29:	89 74 24 20          	mov    %esi,0x20(%esp)
 8104e2d:	c7 44 24 1c df 21 b4 	movl   $0x8b421df,0x1c(%esp)
 8104e34:	08 
 8104e35:	c7 44 24 18 df 21 b4 	movl   $0x8b421df,0x18(%esp)
 8104e3c:	08 
 8104e3d:	c7 44 24 14 df 21 b4 	movl   $0x8b421df,0x14(%esp)
 8104e44:	08 
 8104e45:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8104e49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8104e50:	00 
 8104e51:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8104e55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104e59:	89 04 24             	mov    %eax,(%esp)
 8104e5c:	e8 8f ef 06 00       	call   8173df0 <_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE>
 8104e61:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8104e64:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8104e68:	74 51                	je     8104ebb <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x5f5>
 8104e6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104e6d:	83 c0 50             	add    $0x50,%eax
 8104e70:	89 c2                	mov    %eax,%edx
 8104e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104e75:	83 c0 28             	add    $0x28,%eax
 8104e78:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8104e7b:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8104e7f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8104e83:	89 44 24 14          	mov    %eax,0x14(%esp)
 8104e87:	c7 44 24 10 e0 21 b4 	movl   $0x8b421e0,0x10(%esp)
 8104e8e:	08 
 8104e8f:	c7 44 24 0c a7 02 00 	movl   $0x2a7,0xc(%esp)
 8104e96:	00 
 8104e97:	c7 44 24 08 a0 30 b4 	movl   $0x8b430a0,0x8(%esp)
 8104e9e:	08 
 8104e9f:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 8104ea6:	08 
 8104ea7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8104eae:	e8 57 ed 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8104eb3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104eb6:	e9 92 03 00 00       	jmp    810524d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x987>
 8104ebb:	8b 45 08             	mov    0x8(%ebp),%eax
 8104ebe:	8b 40 0c             	mov    0xc(%eax),%eax
 8104ec1:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8104ec7:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8104eca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104ece:	89 04 24             	mov    %eax,(%esp)
 8104ed1:	e8 72 ed 06 00       	call   8173c48 <_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE>
 8104ed6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8104ed9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8104edd:	0f 84 66 03 00 00    	je     8105249 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x983>
 8104ee3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8104ee6:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8104ee9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8104ef0:	00 
 8104ef1:	89 04 24             	mov    %eax,(%esp)
 8104ef4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104ef8:	e8 9b 41 00 00       	call   8109098 <_Z14NumberToStringyi>
 8104efd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8104f00:	83 c2 50             	add    $0x50,%edx
 8104f03:	89 d1                	mov    %edx,%ecx
 8104f05:	8b 55 0c             	mov    0xc(%ebp),%edx
 8104f08:	83 c2 28             	add    $0x28,%edx
 8104f0b:	89 44 24 20          	mov    %eax,0x20(%esp)
 8104f0f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8104f12:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8104f16:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8104f1a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8104f1e:	c7 44 24 10 14 22 b4 	movl   $0x8b42214,0x10(%esp)
 8104f25:	08 
 8104f26:	c7 44 24 0c af 02 00 	movl   $0x2af,0xc(%esp)
 8104f2d:	00 
 8104f2e:	c7 44 24 08 a0 30 b4 	movl   $0x8b430a0,0x8(%esp)
 8104f35:	08 
 8104f36:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 8104f3d:	08 
 8104f3e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8104f45:	e8 c0 ec 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8104f4a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8104f4d:	e9 fb 02 00 00       	jmp    810524d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x987>
 8104f52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104f55:	8b 80 ac 00 00 00    	mov    0xac(%eax),%eax
 8104f5b:	89 c3                	mov    %eax,%ebx
 8104f5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104f60:	0f b6 80 b2 00 00 00 	movzbl 0xb2(%eax),%eax
 8104f67:	0f be f0             	movsbl %al,%esi
 8104f6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104f6d:	0f b6 80 b1 00 00 00 	movzbl 0xb1(%eax),%eax
 8104f74:	0f be c0             	movsbl %al,%eax
 8104f77:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8104f7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104f7d:	05 94 00 00 00       	add    $0x94,%eax
 8104f82:	89 45 90             	mov    %eax,-0x70(%ebp)
 8104f85:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104f88:	05 8c 00 00 00       	add    $0x8c,%eax
 8104f8d:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8104f90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104f93:	0f b6 80 b0 00 00 00 	movzbl 0xb0(%eax),%eax
 8104f9a:	0f be f8             	movsbl %al,%edi
 8104f9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104fa0:	83 c0 64             	add    $0x64,%eax
 8104fa3:	89 c1                	mov    %eax,%ecx
 8104fa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104fa8:	83 c0 3c             	add    $0x3c,%eax
 8104fab:	89 c2                	mov    %eax,%edx
 8104fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8104fb0:	8b 40 0c             	mov    0xc(%eax),%eax
 8104fb3:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8104fb9:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8104fbd:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8104fc1:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 8104fc4:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8104fc8:	8b 5d 90             	mov    -0x70(%ebp),%ebx
 8104fcb:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8104fcf:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 8104fd2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8104fd6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8104fda:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8104fde:	89 54 24 04          	mov    %edx,0x4(%esp)
 8104fe2:	89 04 24             	mov    %eax,(%esp)
 8104fe5:	e8 22 ef 06 00       	call   8173f0c <_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci>
 8104fea:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8104fed:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8104ff1:	74 64                	je     8105057 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x791>
 8104ff3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8104ff6:	05 b3 00 00 00       	add    $0xb3,%eax
 8104ffb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8104ffe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8105002:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 8105009:	08 
 810500a:	89 04 24             	mov    %eax,(%esp)
 810500d:	e8 2e 94 f7 ff       	call   807e440 <sprintf@plt>
 8105012:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105015:	83 c0 3c             	add    $0x3c,%eax
 8105018:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 810501b:	89 54 24 18          	mov    %edx,0x18(%esp)
 810501f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8105023:	c7 44 24 10 50 22 b4 	movl   $0x8b42250,0x10(%esp)
 810502a:	08 
 810502b:	c7 44 24 0c c4 02 00 	movl   $0x2c4,0xc(%esp)
 8105032:	00 
 8105033:	c7 44 24 08 a0 30 b4 	movl   $0x8b430a0,0x8(%esp)
 810503a:	08 
 810503b:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 8105042:	08 
 8105043:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810504a:	e8 bb eb 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 810504f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105052:	e9 f6 01 00 00       	jmp    810524d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x987>
 8105057:	8b 45 0c             	mov    0xc(%ebp),%eax
 810505a:	0f b6 80 b0 00 00 00 	movzbl 0xb0(%eax),%eax
 8105061:	3c 41                	cmp    $0x41,%al
 8105063:	75 08                	jne    810506d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x7a7>
 8105065:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105068:	e9 e0 01 00 00       	jmp    810524d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x987>
 810506d:	8b 45 08             	mov    0x8(%ebp),%eax
 8105070:	8b 40 0c             	mov    0xc(%eax),%eax
 8105073:	89 04 24             	mov    %eax,(%esp)
 8105076:	e8 f1 f5 ff ff       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 810507b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 810507e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105081:	8b 10                	mov    (%eax),%edx
 8105083:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105086:	89 10                	mov    %edx,(%eax)
 8105088:	8b 45 0c             	mov    0xc(%ebp),%eax
 810508b:	8d 50 04             	lea    0x4(%eax),%edx
 810508e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105091:	83 c0 04             	add    $0x4,%eax
 8105094:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 810509b:	00 
 810509c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81050a0:	89 04 24             	mov    %eax,(%esp)
 81050a3:	e8 28 88 f7 ff       	call   807d8d0 <strncpy@plt>
 81050a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81050ab:	0f b7 50 18          	movzwl 0x18(%eax),%edx
 81050af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81050b2:	66 89 50 18          	mov    %dx,0x18(%eax)
 81050b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81050b9:	c7 40 1c 02 00 00 00 	movl   $0x2,0x1c(%eax)
 81050c0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81050c3:	c7 40 1c 02 00 00 00 	movl   $0x2,0x1c(%eax)
 81050ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81050cd:	0f b6 50 24          	movzbl 0x24(%eax),%edx
 81050d1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81050d4:	88 50 24             	mov    %dl,0x24(%eax)
 81050d7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81050da:	83 c0 28             	add    $0x28,%eax
 81050dd:	c7 44 24 08 fc 01 00 	movl   $0x1fc,0x8(%esp)
 81050e4:	00 
 81050e5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81050ec:	00 
 81050ed:	89 04 24             	mov    %eax,(%esp)
 81050f0:	e8 cb 8b f7 ff       	call   807dcc0 <memset@plt>
 81050f5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81050f8:	83 c0 28             	add    $0x28,%eax
 81050fb:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8105102:	00 
 8105103:	c7 44 24 04 df 21 b4 	movl   $0x8b421df,0x4(%esp)
 810510a:	08 
 810510b:	89 04 24             	mov    %eax,(%esp)
 810510e:	e8 bd 87 f7 ff       	call   807d8d0 <strncpy@plt>
 8105113:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105116:	83 c0 64             	add    $0x64,%eax
 8105119:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8105120:	00 
 8105121:	c7 44 24 04 df 21 b4 	movl   $0x8b421df,0x4(%esp)
 8105128:	08 
 8105129:	89 04 24             	mov    %eax,(%esp)
 810512c:	e8 9f 87 f7 ff       	call   807d8d0 <strncpy@plt>
 8105131:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105134:	05 77 01 00 00       	add    $0x177,%eax
 8105139:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8105140:	00 
 8105141:	c7 44 24 04 73 22 b4 	movl   $0x8b42273,0x4(%esp)
 8105148:	08 
 8105149:	89 04 24             	mov    %eax,(%esp)
 810514c:	e8 7f 87 f7 ff       	call   807d8d0 <strncpy@plt>
 8105151:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105154:	83 c0 3c             	add    $0x3c,%eax
 8105157:	89 c2                	mov    %eax,%edx
 8105159:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 810515c:	83 c0 3c             	add    $0x3c,%eax
 810515f:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8105166:	00 
 8105167:	89 54 24 04          	mov    %edx,0x4(%esp)
 810516b:	89 04 24             	mov    %eax,(%esp)
 810516e:	e8 5d 87 f7 ff       	call   807d8d0 <strncpy@plt>
 8105173:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105176:	05 8c 00 00 00       	add    $0x8c,%eax
 810517b:	89 c2                	mov    %eax,%edx
 810517d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105180:	83 c0 69             	add    $0x69,%eax
 8105183:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 810518a:	00 
 810518b:	89 54 24 04          	mov    %edx,0x4(%esp)
 810518f:	89 04 24             	mov    %eax,(%esp)
 8105192:	e8 39 87 f7 ff       	call   807d8d0 <strncpy@plt>
 8105197:	8b 45 0c             	mov    0xc(%ebp),%eax
 810519a:	05 94 00 00 00       	add    $0x94,%eax
 810519f:	89 c2                	mov    %eax,%edx
 81051a1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81051a4:	83 c0 7d             	add    $0x7d,%eax
 81051a7:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81051ae:	00 
 81051af:	89 54 24 04          	mov    %edx,0x4(%esp)
 81051b3:	89 04 24             	mov    %eax,(%esp)
 81051b6:	e8 15 87 f7 ff       	call   807d8d0 <strncpy@plt>
 81051bb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81051be:	05 73 01 00 00       	add    $0x173,%eax
 81051c3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81051c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81051ca:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 81051d1:	08 
 81051d2:	89 04 24             	mov    %eax,(%esp)
 81051d5:	e8 66 92 f7 ff       	call   807e440 <sprintf@plt>
 81051da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81051dd:	8b 90 ac 00 00 00    	mov    0xac(%eax),%edx
 81051e3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81051e6:	83 c0 71             	add    $0x71,%eax
 81051e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81051ed:	c7 44 24 04 b0 21 b4 	movl   $0x8b421b0,0x4(%esp)
 81051f4:	08 
 81051f5:	89 04 24             	mov    %eax,(%esp)
 81051f8:	e8 43 92 f7 ff       	call   807e440 <sprintf@plt>
 81051fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105200:	8b 90 d8 02 00 00    	mov    0x2d8(%eax),%edx
 8105206:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8105209:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 810520f:	eb 39                	jmp    810524a <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x984>
 8105211:	8b 45 0c             	mov    0xc(%ebp),%eax
 8105214:	8b 40 1c             	mov    0x1c(%eax),%eax
 8105217:	89 44 24 14          	mov    %eax,0x14(%esp)
 810521b:	c7 44 24 10 7e 22 b4 	movl   $0x8b4227e,0x10(%esp)
 8105222:	08 
 8105223:	c7 44 24 0c e9 02 00 	movl   $0x2e9,0xc(%esp)
 810522a:	00 
 810522b:	c7 44 24 08 a0 30 b4 	movl   $0x8b430a0,0x8(%esp)
 8105232:	08 
 8105233:	c7 44 24 04 87 21 b4 	movl   $0x8b42187,0x4(%esp)
 810523a:	08 
 810523b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8105242:	e8 c3 e9 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8105247:	eb 01                	jmp    810524a <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE+0x984>
 8105249:	90                   	nop
 810524a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 810524d:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8105253:	5b                   	pop    %ebx
 8105254:	5e                   	pop    %esi
 8105255:	5f                   	pop    %edi
 8105256:	5d                   	pop    %ebp
 8105257:	c3                   	ret

```

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan @ 0x81048c6

/* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*) */

undefined4 * __thiscall
WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(CIPGWorker *this,SIPGData *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  BillTransaction *pBVar6;
  BillTransaction local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  local_30 = (undefined4 *)0x0;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    pBVar6 = local_68;
    uVar4 = 0;
    uVar5 = 0;
    local_24 = Taiwan::TaiwanCash::charge
                         (*(char **)(*(int *)(this + 0xc) + 0xec),(char)param_1 + '(',
                          (uchar)param_1[0x26d],0,*(char **)(param_1 + 0x98),"","","",
                          ZEXT48(param_1 + 0x50),(BillTransaction *)0x0);
    if (local_24 == 0) {
      local_24 = Taiwan::TaiwanCash::confirm(*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),local_68)
      ;
      if (local_24 != 0) {
        uVar3 = NumberToString(CONCAT44(local_60,local_64),0);
        LogManager::logFormat
                  (1,"IPGMgr.cpp",
                   "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                   ,0x2af,"IPG_INPUT confirm user: %s, charac: %s reason: %d tran :%s",
                   param_1 + 0x28,param_1 + 0x50,local_24,uVar3,uVar4,uVar5,pBVar6);
      }
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x2a7,"IPG_INPUT charge user: %s, charac: %s reason: %d",param_1 + 0x28,
                 param_1 + 0x50,local_24);
    }
    break;
  default:
    LogManager::logFormat
              (1,"IPGMgr.cpp",
               "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
               ,0x2e9,"IPGDataType : %d",*(undefined4 *)(param_1 + 0x1c));
    break;
  case 2:
    pcVar1 = (char *)atoi((char *)(param_1 + 0x71));
    iVar2 = atoi((char *)(param_1 + 0x69));
    local_28 = Taiwan::TaiwanCash::purchase
                         ((ulonglong)*(uint *)(*(int *)(this + 0xc) + 0xec),0,iVar2,pcVar1,
                          (char *)(param_1 + 0x3c),(BillTransaction *)(param_1 + 0x1e8));
    if (local_28 == 0) {
      local_30 = (undefined4 *)AllocIPGData(*(CIPGMgr **)(this + 0xc));
      *local_30 = *(undefined4 *)param_1;
      strncpy((char *)(local_30 + 1),(char *)(param_1 + 4),0x14);
      *(undefined2 *)(local_30 + 6) = *(undefined2 *)(param_1 + 0x18);
      local_30[7] = 2;
      *(SIPGData *)(local_30 + 9) = param_1[0x24];
      memset(local_30 + 10,0,0x1fc);
      strcpy((char *)(local_30 + 10),(char *)(param_1 + 0x28));
      strcpy((char *)(local_30 + 0xf),(char *)(param_1 + 0x3c));
      strcpy((char *)(local_30 + 0x19),(char *)(param_1 + 100));
      strcpy((char *)((int)local_30 + 0x69),(char *)(param_1 + 0x69));
      strcpy((char *)((int)local_30 + 0x71),(char *)(param_1 + 0x71));
      strcpy((char *)((int)local_30 + 0x7d),(char *)(param_1 + 0x7d));
      strcpy((char *)((int)local_30 + 0x91),(char *)(param_1 + 0x91));
      strcpy((char *)((int)local_30 + 0xf5),(char *)(param_1 + 0xf5));
      local_30[0x77] = local_44;
      local_30[0x78] = local_40;
      local_30[0x79] = local_3c;
      sprintf((char *)((int)local_30 + 0x173),"%d",local_28);
      memcpy((void *)((int)local_30 + 0x177),&DAT_08b421df,1);
      local_30[0xb6] = *(undefined4 *)(param_1 + 0x2d8);
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x269,"IPG_OUTPUT user: %s, charac: %s reason: %d",param_1 + 0x28,param_1 + 0x1e8,
                 local_28);
    }
    break;
  case 3:
    local_5c = *(undefined4 *)(param_1 + 0x1f0);
    local_58 = *(undefined4 *)(param_1 + 500);
    local_54 = *(undefined4 *)(param_1 + 0x1f8);
    Taiwan::TaiwanCash::cancel
              (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(BillTransaction *)&local_5c);
    break;
  case 4:
    local_34 = 0;
    local_38 = 0;
    local_2c = Taiwan::TaiwanCash::getBalance
                         (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(char *)(param_1 + 0x3c),
                          &local_34,&local_38);
    if (local_2c == 0) {
      local_30 = (undefined4 *)AllocIPGData(*(CIPGMgr **)(this + 0xc));
      *local_30 = *(undefined4 *)param_1;
      strncpy((char *)(local_30 + 1),(char *)(param_1 + 4),0x14);
      *(undefined2 *)(local_30 + 6) = *(undefined2 *)(param_1 + 0x18);
      local_30[7] = 4;
      *(SIPGData *)(local_30 + 9) = param_1[0x24];
      memset(local_30 + 10,0,0x99);
      strncpy((char *)(local_30 + 10),(char *)(param_1 + 0x28),0x14);
      strncpy((char *)(local_30 + 0xf),(char *)(param_1 + 0x3c),0x28);
      strncpy((char *)(local_30 + 0x19),(char *)(param_1 + 100),5);
      sprintf((char *)((int)local_30 + 0x69),"%d",local_34);
      sprintf((char *)((int)local_30 + 0xb5),"%d",local_38);
      sprintf((char *)((int)local_30 + 0xb1),"%d",local_2c);
      local_30[0xb6] = *(undefined4 *)(param_1 + 0x2d8);
    }
    else {
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x243,"IPG_QUERY user: %s reason: %d",param_1 + 0x28,local_2c);
    }
    break;
  case 5:
    local_50 = *(undefined4 *)(param_1 + 0x1f0);
    local_4c = *(undefined4 *)(param_1 + 500);
    local_48 = *(undefined4 *)(param_1 + 0x1f8);
    Taiwan::TaiwanCash::confirm
              (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(BillTransaction *)&local_50);
    break;
  case 6:
    local_20 = Taiwan::TaiwanCash::ceraPoint
                         (*(TaiwanCash **)(*(int *)(this + 0xc) + 0xec),(char *)(param_1 + 0x3c),
                          (char *)(param_1 + 100),(char)param_1[0xb0],(char *)(param_1 + 0x8c),
                          (char *)(param_1 + 0x94),(char)param_1[0xb1],(char)param_1[0xb2],
                          *(int *)(param_1 + 0xac));
    if (local_20 == 0) {
      if (param_1[0xb0] != (SIPGData)0x41) {
        local_30 = (undefined4 *)AllocIPGData(*(CIPGMgr **)(this + 0xc));
        *local_30 = *(undefined4 *)param_1;
        strncpy((char *)(local_30 + 1),(char *)(param_1 + 4),0x14);
        *(undefined2 *)(local_30 + 6) = *(undefined2 *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        local_30[7] = 2;
        *(SIPGData *)(local_30 + 9) = param_1[0x24];
        memset(local_30 + 10,0,0x1fc);
        strncpy((char *)(local_30 + 10),"",0x14);
        strncpy((char *)(local_30 + 0x19),"",5);
        strncpy((char *)((int)local_30 + 0x177),"cera point",100);
        strncpy((char *)(local_30 + 0xf),(char *)(param_1 + 0x3c),0x28);
        strncpy((char *)((int)local_30 + 0x69),(char *)(param_1 + 0x8c),8);
        strncpy((char *)((int)local_30 + 0x7d),(char *)(param_1 + 0x94),0x14);
        sprintf((char *)((int)local_30 + 0x173),"%d",local_20);
        sprintf((char *)((int)local_30 + 0x71),"%d",*(undefined4 *)(param_1 + 0xac));
        local_30[0xb6] = *(undefined4 *)(param_1 + 0x2d8);
      }
    }
    else {
      sprintf((char *)(param_1 + 0xb3),"%d",local_20);
      LogManager::logFormat
                (1,"IPGMgr.cpp",
                 "WongWork::IPG::SIPGData* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)"
                 ,0x2c4,"IPG_CERA_POINT user: %s reason: %d",param_1 + 0x3c,local_20);
    }
  }
  return local_30;
}

```

---

## dispatch

```asm
// === 08105276 WongWork::IPG::CIPGMgr::CIPGWorker::dispatch  [0x08105276-0x8105340] ===
 8105276:	55                   	push   %ebp
 8105277:	89 e5                	mov    %esp,%ebp
 8105279:	83 ec 28             	sub    $0x28,%esp
 810527c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8105283:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810528a:	e9 9e 00 00 00       	jmp    810532d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv+0xb7>
 810528f:	8b 45 08             	mov    0x8(%ebp),%eax
 8105292:	8b 40 0c             	mov    0xc(%eax),%eax
 8105295:	89 04 24             	mov    %eax,(%esp)
 8105298:	e8 4d f5 ff ff       	call   81047ea <_ZN8WongWork3IPG7CIPGMgr14_GetIPGRequestEv>
 810529d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81052a0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81052a4:	0f 94 c0             	sete   %al
 81052a7:	84 c0                	test   %al,%al
 81052a9:	74 0e                	je     81052b9 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv+0x43>
 81052ab:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 81052b2:	e8 29 72 48 00       	call   858c4e0 <_ZN6OS_API5SleepEi>
 81052b7:	eb 74                	jmp    810532d <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv+0xb7>
 81052b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81052bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81052c0:	8b 45 08             	mov    0x8(%ebp),%eax
 81052c3:	89 04 24             	mov    %eax,(%esp)
 81052c6:	e8 8d ff ff ff       	call   8105258 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11ProcIPGSyncEPNS0_8SIPGDataE>
 81052cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81052ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81052d1:	8b 40 0c             	mov    0xc(%eax),%eax
 81052d4:	89 04 24             	mov    %eax,(%esp)
 81052d7:	e8 ea 00 00 00       	call   81053c6 <_ZN8WongWork3IPG7CIPGMgr12GetIPGHelperEv>
 81052dc:	8b 10                	mov    (%eax),%edx
 81052de:	83 c2 34             	add    $0x34,%edx
 81052e1:	8b 0a                	mov    (%edx),%ecx
 81052e3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81052e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81052ea:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81052ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 81052f1:	89 04 24             	mov    %eax,(%esp)
 81052f4:	ff d1                	call   *%ecx
 81052f6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81052fa:	74 1c                	je     8105318 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv+0xa2>
 81052fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81052ff:	8b 40 0c             	mov    0xc(%eax),%eax
 8105302:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8105305:	89 54 24 04          	mov    %edx,0x4(%esp)
 8105309:	89 04 24             	mov    %eax,(%esp)
 810530c:	e8 df f3 ff ff       	call   81046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>
 8105311:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8105318:	8b 45 08             	mov    0x8(%ebp),%eax
 810531b:	8b 40 0c             	mov    0xc(%eax),%eax
 810531e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8105321:	89 54 24 04          	mov    %edx,0x4(%esp)
 8105325:	89 04 24             	mov    %eax,(%esp)
 8105328:	e8 c3 f3 ff ff       	call   81046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>
 810532d:	0f b6 05 64 bd 40 09 	movzbl 0x940bd64,%eax
 8105334:	83 f0 01             	xor    $0x1,%eax
 8105337:	84 c0                	test   %al,%al
 8105339:	0f 85 50 ff ff ff    	jne    810528f <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker8dispatchEPv+0x19>
 810533f:	c9                   	leave
 8105340:	c3                   	ret

```

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::dispatch @ 0x8105276

/* WongWork::IPG::CIPGMgr::CIPGWorker::dispatch(void*) */

void WongWork::IPG::CIPGMgr::CIPGWorker::dispatch(void *param_1)

{
  SIPGData *pSVar1;
  SIPGData *pSVar2;
  int *piVar3;
  
  while (GlobalData::s_server_stop != '\x01') {
    pSVar1 = (SIPGData *)_GetIPGRequest(*(CIPGMgr **)((int)param_1 + 0xc));
    if (pSVar1 == (SIPGData *)0x0) {
      OS_API::Sleep(10);
    }
    else {
      pSVar2 = (SIPGData *)ProcIPGSync(param_1,pSVar1);
      piVar3 = (int *)GetIPGHelper(*(CIPGMgr **)((int)param_1 + 0xc));
      (**(code **)(*piVar3 + 0x34))(piVar3,pSVar1,pSVar2);
      if (pSVar2 != (SIPGData *)0x0) {
        FreeIPGData(*(CIPGMgr **)((int)param_1 + 0xc),pSVar2);
      }
      FreeIPGData(*(CIPGMgr **)((int)param_1 + 0xc),pSVar1);
    }
  }
  return;
}

```

