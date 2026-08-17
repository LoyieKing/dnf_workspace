# WongWork__IPG__CIPGHelper

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## Finalize

```asm
// === 08100c92 WongWork::IPG::CIPGHelper::Finalize  [0x08100c92-0x8100cd1] ===
 8100c92:	55                   	push   %ebp
 8100c93:	89 e5                	mov    %esp,%ebp
 8100c95:	53                   	push   %ebx
 8100c96:	83 ec 14             	sub    $0x14,%esp
 8100c99:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c9c:	8b 40 04             	mov    0x4(%eax),%eax
 8100c9f:	89 04 24             	mov    %eax,(%esp)
 8100ca2:	e8 59 39 00 00       	call   8104600 <_ZN8WongWork3IPG7CIPGMgr8FinalizeEv>
 8100ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 8100caa:	8b 58 04             	mov    0x4(%eax),%ebx
 8100cad:	85 db                	test   %ebx,%ebx
 8100caf:	74 10                	je     8100cc1 <_ZN8WongWork3IPG10CIPGHelper8FinalizeEv+0x2f>
 8100cb1:	89 1c 24             	mov    %ebx,(%esp)
 8100cb4:	e8 69 05 00 00       	call   8101222 <_ZN8WongWork3IPG7CIPGMgrD1Ev>
 8100cb9:	89 1c 24             	mov    %ebx,(%esp)
 8100cbc:	e8 2f 38 62 00       	call   87244f0 <_ZdlPv>
 8100cc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8100cc4:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8100ccb:	83 c4 14             	add    $0x14,%esp
 8100cce:	5b                   	pop    %ebx
 8100ccf:	5d                   	pop    %ebp
 8100cd0:	c3                   	ret
 8100cd1:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::Finalize @ 0x8100c92

/* WongWork::IPG::CIPGHelper::Finalize() */

void __thiscall WongWork::IPG::CIPGHelper::Finalize(CIPGHelper *this)

{
  CIPGMgr *this_00;
  
  CIPGMgr::Finalize(*(CIPGMgr **)(this + 4));
  this_00 = *(CIPGMgr **)(this + 4);
  if (this_00 != (CIPGMgr *)0x0) {
    CIPGMgr::~CIPGMgr(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## IPGInput

```asm
// === 080ffb0a WongWork::IPG::CIPGHelper::IPGInput  [0x080ffb0a-0x80ffca3] ===
 80ffb0a:	55                   	push   %ebp
 80ffb0b:	89 e5                	mov    %esp,%ebp
 80ffb0d:	83 ec 28             	sub    $0x28,%esp
 80ffb10:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80ffb17:	00 
 80ffb18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80ffb1f:	00 
 80ffb20:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffb23:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffb27:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffb2a:	89 04 24             	mov    %eax,(%esp)
 80ffb2d:	e8 fc 0e 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 80ffb32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ffb35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffb38:	8d 90 dd 00 00 00    	lea    0xdd(%eax),%edx
 80ffb3e:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 80ffb45:	00 
 80ffb46:	8b 45 10             	mov    0x10(%ebp),%eax
 80ffb49:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffb4d:	89 14 24             	mov    %edx,(%esp)
 80ffb50:	e8 7b dd f7 ff       	call   807d8d0 <strncpy@plt>
 80ffb55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffb58:	8d 90 e8 00 00 00    	lea    0xe8(%eax),%edx
 80ffb5e:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 80ffb65:	00 
 80ffb66:	8b 45 14             	mov    0x14(%ebp),%eax
 80ffb69:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffb6d:	89 14 24             	mov    %edx,(%esp)
 80ffb70:	e8 5b dd f7 ff       	call   807d8d0 <strncpy@plt>
 80ffb75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffb78:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 80ffb7e:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80ffb85:	00 
 80ffb86:	8b 45 18             	mov    0x18(%ebp),%eax
 80ffb89:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffb8d:	89 14 24             	mov    %edx,(%esp)
 80ffb90:	e8 3b dd f7 ff       	call   807d8d0 <strncpy@plt>
 80ffb95:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 80ffb99:	74 20                	je     80ffbbb <_ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserPKcS5_S5_S5_S5_Pv+0xb1>
 80ffb9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffb9e:	8d 90 08 01 00 00    	lea    0x108(%eax),%edx
 80ffba4:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 80ffbab:	00 
 80ffbac:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80ffbaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffbb3:	89 14 24             	mov    %edx,(%esp)
 80ffbb6:	e8 15 dd f7 ff       	call   807d8d0 <strncpy@plt>
 80ffbbb:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 80ffbbf:	74 20                	je     80ffbe1 <_ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserPKcS5_S5_S5_S5_Pv+0xd7>
 80ffbc1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffbc4:	8d 90 6c 01 00 00    	lea    0x16c(%eax),%edx
 80ffbca:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 80ffbd1:	00 
 80ffbd2:	8b 45 20             	mov    0x20(%ebp),%eax
 80ffbd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffbd9:	89 14 24             	mov    %edx,(%esp)
 80ffbdc:	e8 ef dc f7 ff       	call   807d8d0 <strncpy@plt>
 80ffbe1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffbe4:	89 04 24             	mov    %eax,(%esp)
 80ffbe7:	e8 5c 14 00 00       	call   8101048 <_ZN5CUser11GetUserNameEv>
 80ffbec:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffbef:	81 c2 d0 01 00 00    	add    $0x1d0,%edx
 80ffbf5:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 80ffbfc:	00 
 80ffbfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffc01:	89 14 24             	mov    %edx,(%esp)
 80ffc04:	e8 c7 dc f7 ff       	call   807d8d0 <strncpy@plt>
 80ffc09:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffc0c:	89 04 24             	mov    %eax,(%esp)
 80ffc0f:	e8 42 14 00 00       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 80ffc14:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffc17:	81 c2 02 02 00 00    	add    $0x202,%edx
 80ffc1d:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 80ffc24:	00 
 80ffc25:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffc29:	89 14 24             	mov    %edx,(%esp)
 80ffc2c:	e8 9f dc f7 ff       	call   807d8d0 <strncpy@plt>
 80ffc31:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffc34:	89 04 24             	mov    %eax,(%esp)
 80ffc37:	e8 28 14 00 00       	call   8101064 <_ZN5CUser12GetUserEMailEv>
 80ffc3c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffc3f:	81 c2 10 02 00 00    	add    $0x210,%edx
 80ffc45:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 80ffc4c:	00 
 80ffc4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffc51:	89 14 24             	mov    %edx,(%esp)
 80ffc54:	e8 77 dc f7 ff       	call   807d8d0 <strncpy@plt>
 80ffc59:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffc5c:	05 4c 02 00 00       	add    $0x24c,%eax
 80ffc61:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 80ffc68:	00 
 80ffc69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ffc70:	00 
 80ffc71:	89 04 24             	mov    %eax,(%esp)
 80ffc74:	e8 47 e0 f7 ff       	call   807dcc0 <memset@plt>
 80ffc79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffc7c:	8b 55 24             	mov    0x24(%ebp),%edx
 80ffc7f:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 80ffc85:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffc88:	8b 40 04             	mov    0x4(%eax),%eax
 80ffc8b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80ffc92:	00 
 80ffc93:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffc96:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ffc9a:	89 04 24             	mov    %eax,(%esp)
 80ffc9d:	e8 b2 4a 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 80ffca2:	c9                   	leave
 80ffca3:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGInput @ 0x80ffb0a

/* WongWork::IPG::CIPGHelper::IPGInput(CUser*, char const*, char const*, char const*, char const*,
   char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGInput
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  char *pcVar2;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,0,1);
  strncpy((char *)(pSVar1 + 0xdd),param_2,0xb);
  strncpy((char *)(pSVar1 + 0xe8),param_3,0xc);
  strncpy((char *)(pSVar1 + 0xf4),param_4,0x14);
  if (param_5 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x108),param_5,100);
  }
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x16c),param_6,100);
  }
  pcVar2 = (char *)CUser::GetUserName(param_1);
  strncpy((char *)(pSVar1 + 0x1d0),pcVar2,0x32);
  pcVar2 = (char *)CUser::GetSsnString(param_1);
  strncpy((char *)(pSVar1 + 0x202),pcVar2,0xe);
  pcVar2 = (char *)CUser::GetUserEMail(param_1);
  strncpy((char *)(pSVar1 + 0x210),pcVar2,0x3c);
  memset(pSVar1 + 0x24c,0,7);
  *(void **)(pSVar1 + 0x2d8) = param_7;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGInputCancel

```asm
// === 080ffea8 WongWork::IPG::CIPGHelper::IPGInputCancel  [0x080ffea8-0x80fffbf] ===
 80ffea8:	55                   	push   %ebp
 80ffea9:	89 e5                	mov    %esp,%ebp
 80ffeab:	83 ec 28             	sub    $0x28,%esp
 80ffeae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80ffeb5:	00 
 80ffeb6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80ffebd:	00 
 80ffebe:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffec1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffec5:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffec8:	89 04 24             	mov    %eax,(%esp)
 80ffecb:	e8 5e 0b 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 80ffed0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ffed3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffed6:	83 c0 69             	add    $0x69,%eax
 80ffed9:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 80ffee0:	00 
 80ffee1:	8b 55 10             	mov    0x10(%ebp),%edx
 80ffee4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ffee8:	89 04 24             	mov    %eax,(%esp)
 80ffeeb:	e8 e0 d9 f7 ff       	call   807d8d0 <strncpy@plt>
 80ffef0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffef3:	83 c0 7e             	add    $0x7e,%eax
 80ffef6:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 80ffefd:	00 
 80ffefe:	8b 55 14             	mov    0x14(%ebp),%edx
 80fff01:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fff05:	89 04 24             	mov    %eax,(%esp)
 80fff08:	e8 c3 d9 f7 ff       	call   807d8d0 <strncpy@plt>
 80fff0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fff10:	05 89 00 00 00       	add    $0x89,%eax
 80fff15:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 80fff1c:	00 
 80fff1d:	8b 55 18             	mov    0x18(%ebp),%edx
 80fff20:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fff24:	89 04 24             	mov    %eax,(%esp)
 80fff27:	e8 a4 d9 f7 ff       	call   807d8d0 <strncpy@plt>
 80fff2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fff2f:	05 95 00 00 00       	add    $0x95,%eax
 80fff34:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80fff3b:	00 
 80fff3c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80fff3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fff43:	89 04 24             	mov    %eax,(%esp)
 80fff46:	e8 85 d9 f7 ff       	call   807d8d0 <strncpy@plt>
 80fff4b:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 80fff4f:	74 1f                	je     80fff70 <_ZN8WongWork3IPG10CIPGHelper14IPGInputCancelEP5CUserPKcS5_S5_S5_S5_S5_Pv+0xc8>
 80fff51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fff54:	05 a9 00 00 00       	add    $0xa9,%eax
 80fff59:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 80fff60:	00 
 80fff61:	8b 55 20             	mov    0x20(%ebp),%edx
 80fff64:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fff68:	89 04 24             	mov    %eax,(%esp)
 80fff6b:	e8 60 d9 f7 ff       	call   807d8d0 <strncpy@plt>
 80fff70:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 80fff74:	74 1f                	je     80fff95 <_ZN8WongWork3IPG10CIPGHelper14IPGInputCancelEP5CUserPKcS5_S5_S5_S5_S5_Pv+0xed>
 80fff76:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fff79:	05 0d 01 00 00       	add    $0x10d,%eax
 80fff7e:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 80fff85:	00 
 80fff86:	8b 55 24             	mov    0x24(%ebp),%edx
 80fff89:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fff8d:	89 04 24             	mov    %eax,(%esp)
 80fff90:	e8 3b d9 f7 ff       	call   807d8d0 <strncpy@plt>
 80fff95:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fff98:	8b 55 28             	mov    0x28(%ebp),%edx
 80fff9b:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 80fffa1:	8b 45 08             	mov    0x8(%ebp),%eax
 80fffa4:	8b 40 04             	mov    0x4(%eax),%eax
 80fffa7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80fffae:	00 
 80fffaf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80fffb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80fffb6:	89 04 24             	mov    %eax,(%esp)
 80fffb9:	e8 96 47 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 80fffbe:	c9                   	leave
 80fffbf:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGInputCancel @ 0x80ffea8

/* WongWork::IPG::CIPGHelper::IPGInputCancel(CUser*, char const*, char const*, char const*, char
   const*, char const*, char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGInputCancel
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,void *param_8)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,1,0);
  strncpy((char *)(pSVar1 + 0x69),param_2,0x15);
  strncpy((char *)(pSVar1 + 0x7e),param_3,0xb);
  strncpy((char *)(pSVar1 + 0x89),param_4,0xc);
  strncpy((char *)(pSVar1 + 0x95),param_5,0x14);
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xa9),param_6,100);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x10d),param_7,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_8;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGInputPoint

```asm
// === 080fffc0 WongWork::IPG::CIPGHelper::IPGInputPoint  [0x080fffc0-0x81000f5] ===
 80fffc0:	55                   	push   %ebp
 80fffc1:	89 e5                	mov    %esp,%ebp
 80fffc3:	83 ec 38             	sub    $0x38,%esp
 80fffc6:	8b 55 14             	mov    0x14(%ebp),%edx
 80fffc9:	8b 45 18             	mov    0x18(%ebp),%eax
 80fffcc:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 80fffcf:	88 45 e0             	mov    %al,-0x20(%ebp)
 80fffd2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80fffd9:	00 
 80fffda:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 80fffe1:	00 
 80fffe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fffe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fffe9:	8b 45 08             	mov    0x8(%ebp),%eax
 80fffec:	89 04 24             	mov    %eax,(%esp)
 80fffef:	e8 3a 0a 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 80ffff4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ffff7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffffa:	89 04 24             	mov    %eax,(%esp)
 80ffffd:	e8 6c a3 fd ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8100002:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100005:	83 c2 28             	add    $0x28,%edx
 8100008:	89 44 24 08          	mov    %eax,0x8(%esp)
 810000c:	c7 44 24 04 43 14 b4 	movl   $0x8b41443,0x4(%esp)
 8100013:	08 
 8100014:	89 14 24             	mov    %edx,(%esp)
 8100017:	e8 24 e4 f7 ff       	call   807e440 <sprintf@plt>
 810001c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810001f:	89 04 24             	mov    %eax,(%esp)
 8100022:	e8 4b 10 00 00       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8100027:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810002a:	83 c2 3c             	add    $0x3c,%edx
 810002d:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8100034:	00 
 8100035:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100039:	89 14 24             	mov    %edx,(%esp)
 810003c:	e8 8f d8 f7 ff       	call   807d8d0 <strncpy@plt>
 8100041:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100044:	89 04 24             	mov    %eax,(%esp)
 8100047:	e8 dc 0f 00 00       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 810004c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810004f:	83 c2 64             	add    $0x64,%edx
 8100052:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8100059:	00 
 810005a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810005e:	89 14 24             	mov    %edx,(%esp)
 8100061:	e8 6a d8 f7 ff       	call   807d8d0 <strncpy@plt>
 8100066:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100069:	05 8c 00 00 00       	add    $0x8c,%eax
 810006e:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100075:	00 
 8100076:	c7 44 24 04 00 14 b4 	movl   $0x8b41400,0x4(%esp)
 810007d:	08 
 810007e:	89 04 24             	mov    %eax,(%esp)
 8100081:	e8 4a d8 f7 ff       	call   807d8d0 <strncpy@plt>
 8100086:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100089:	05 94 00 00 00       	add    $0x94,%eax
 810008e:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8100095:	00 
 8100096:	c7 44 24 04 00 14 b4 	movl   $0x8b41400,0x4(%esp)
 810009d:	08 
 810009e:	89 04 24             	mov    %eax,(%esp)
 81000a1:	e8 2a d8 f7 ff       	call   807d8d0 <strncpy@plt>
 81000a6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81000a9:	8b 55 10             	mov    0x10(%ebp),%edx
 81000ac:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 81000b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81000b5:	c6 80 b0 00 00 00 41 	movb   $0x41,0xb0(%eax)
 81000bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81000bf:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 81000c3:	88 90 b1 00 00 00    	mov    %dl,0xb1(%eax)
 81000c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81000cc:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 81000d0:	88 90 b2 00 00 00    	mov    %dl,0xb2(%eax)
 81000d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81000d9:	8b 40 04             	mov    0x4(%eax),%eax
 81000dc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81000e3:	00 
 81000e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81000e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81000eb:	89 04 24             	mov    %eax,(%esp)
 81000ee:	e8 61 46 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 81000f3:	c9                   	leave
 81000f4:	c3                   	ret
 81000f5:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGInputPoint @ 0x80fffc0

/* WongWork::IPG::CIPGHelper::IPGInputPoint(CUser*, unsigned int, char, char, void*) */

void WongWork::IPG::CIPGHelper::IPGInputPoint
               (CUser *param_1,uint param_2,char param_3,char param_4,void *param_5)

{
  SIPGData *pSVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined3 in_stack_0000000d;
  
  pSVar1 = (SIPGData *)_SetIPGData((CIPGHelper *)param_1,param_2,6,1);
  uVar2 = CUser::get_acc_id((CUser *)param_2);
  sprintf((char *)(pSVar1 + 0x28),"%d",uVar2);
  pcVar3 = (char *)CUser::get_acc_name((CUser *)param_2);
  strncpy((char *)(pSVar1 + 0x3c),pcVar3,0x28);
  pcVar3 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  strncpy((char *)(pSVar1 + 100),pcVar3,0x28);
  strncpy((char *)(pSVar1 + 0x8c),"",8);
  strncpy((char *)(pSVar1 + 0x94),"",0x15);
  *(undefined4 *)(pSVar1 + 0xac) = _param_3;
  pSVar1[0xb0] = (SIPGData)0x41;
  pSVar1[0xb1] = (SIPGData)param_4;
  pSVar1[0xb2] = SUB41(param_5,0);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(param_1 + 4),pSVar1,true);
  return;
}

```

---

## IPGInput_080ffca4

```asm
// === 080ffca4 WongWork::IPG::CIPGHelper::IPGInput  [0x080ffca4-0x80ffea7] ===
 80ffca4:	55                   	push   %ebp
 80ffca5:	89 e5                	mov    %esp,%ebp
 80ffca7:	83 ec 38             	sub    $0x38,%esp
 80ffcaa:	8b 45 10             	mov    0x10(%ebp),%eax
 80ffcad:	88 45 e4             	mov    %al,-0x1c(%ebp)
 80ffcb0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80ffcb7:	00 
 80ffcb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80ffcbf:	00 
 80ffcc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffcc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffcc7:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffcca:	89 04 24             	mov    %eax,(%esp)
 80ffccd:	e8 5c 0d 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 80ffcd2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ffcd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffcd8:	8d 90 dd 00 00 00    	lea    0xdd(%eax),%edx
 80ffcde:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 80ffce5:	00 
 80ffce6:	8b 45 18             	mov    0x18(%ebp),%eax
 80ffce9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffced:	89 14 24             	mov    %edx,(%esp)
 80ffcf0:	e8 db db f7 ff       	call   807d8d0 <strncpy@plt>
 80ffcf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffcf8:	8d 90 e8 00 00 00    	lea    0xe8(%eax),%edx
 80ffcfe:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 80ffd05:	00 
 80ffd06:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80ffd09:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffd0d:	89 14 24             	mov    %edx,(%esp)
 80ffd10:	e8 bb db f7 ff       	call   807d8d0 <strncpy@plt>
 80ffd15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffd18:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 80ffd1e:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 80ffd25:	00 
 80ffd26:	8b 45 20             	mov    0x20(%ebp),%eax
 80ffd29:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffd2d:	89 14 24             	mov    %edx,(%esp)
 80ffd30:	e8 9b db f7 ff       	call   807d8d0 <strncpy@plt>
 80ffd35:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 80ffd39:	74 20                	je     80ffd5b <_ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserhjPKcS5_S5_S5_S5_Pv+0xb7>
 80ffd3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffd3e:	8d 90 08 01 00 00    	lea    0x108(%eax),%edx
 80ffd44:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 80ffd4b:	00 
 80ffd4c:	8b 45 24             	mov    0x24(%ebp),%eax
 80ffd4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffd53:	89 14 24             	mov    %edx,(%esp)
 80ffd56:	e8 75 db f7 ff       	call   807d8d0 <strncpy@plt>
 80ffd5b:	83 7d 28 00          	cmpl   $0x0,0x28(%ebp)
 80ffd5f:	74 20                	je     80ffd81 <_ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserhjPKcS5_S5_S5_S5_Pv+0xdd>
 80ffd61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffd64:	8d 90 6c 01 00 00    	lea    0x16c(%eax),%edx
 80ffd6a:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 80ffd71:	00 
 80ffd72:	8b 45 28             	mov    0x28(%ebp),%eax
 80ffd75:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffd79:	89 14 24             	mov    %edx,(%esp)
 80ffd7c:	e8 4f db f7 ff       	call   807d8d0 <strncpy@plt>
 80ffd81:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffd84:	89 04 24             	mov    %eax,(%esp)
 80ffd87:	e8 bc 12 00 00       	call   8101048 <_ZN5CUser11GetUserNameEv>
 80ffd8c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffd8f:	81 c2 d0 01 00 00    	add    $0x1d0,%edx
 80ffd95:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 80ffd9c:	00 
 80ffd9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffda1:	89 14 24             	mov    %edx,(%esp)
 80ffda4:	e8 27 db f7 ff       	call   807d8d0 <strncpy@plt>
 80ffda9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffdac:	89 04 24             	mov    %eax,(%esp)
 80ffdaf:	e8 a2 12 00 00       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 80ffdb4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffdb7:	81 c2 02 02 00 00    	add    $0x202,%edx
 80ffdbd:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 80ffdc4:	00 
 80ffdc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffdc9:	89 14 24             	mov    %edx,(%esp)
 80ffdcc:	e8 ff da f7 ff       	call   807d8d0 <strncpy@plt>
 80ffdd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffdd4:	89 04 24             	mov    %eax,(%esp)
 80ffdd7:	e8 88 12 00 00       	call   8101064 <_ZN5CUser12GetUserEMailEv>
 80ffddc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffddf:	81 c2 10 02 00 00    	add    $0x210,%edx
 80ffde5:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 80ffdec:	00 
 80ffded:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffdf1:	89 14 24             	mov    %edx,(%esp)
 80ffdf4:	e8 d7 da f7 ff       	call   807d8d0 <strncpy@plt>
 80ffdf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffdfc:	05 4c 02 00 00       	add    $0x24c,%eax
 80ffe01:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 80ffe08:	00 
 80ffe09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ffe10:	00 
 80ffe11:	89 04 24             	mov    %eax,(%esp)
 80ffe14:	e8 a7 de f7 ff       	call   807dcc0 <memset@plt>
 80ffe19:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffe1c:	89 04 24             	mov    %eax,(%esp)
 80ffe1f:	e8 4e 12 00 00       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 80ffe24:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffe27:	83 c2 28             	add    $0x28,%edx
 80ffe2a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 80ffe31:	00 
 80ffe32:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffe36:	89 14 24             	mov    %edx,(%esp)
 80ffe39:	e8 92 da f7 ff       	call   807d8d0 <strncpy@plt>
 80ffe3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ffe41:	89 04 24             	mov    %eax,(%esp)
 80ffe44:	e8 df 11 00 00       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 80ffe49:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffe4c:	83 c2 50             	add    $0x50,%edx
 80ffe4f:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 80ffe56:	00 
 80ffe57:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ffe5b:	89 14 24             	mov    %edx,(%esp)
 80ffe5e:	e8 6d da f7 ff       	call   807d8d0 <strncpy@plt>
 80ffe63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffe66:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 80ffe6a:	88 90 6d 02 00 00    	mov    %dl,0x26d(%eax)
 80ffe70:	8b 55 14             	mov    0x14(%ebp),%edx
 80ffe73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffe76:	89 90 98 00 00 00    	mov    %edx,0x98(%eax)
 80ffe7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ffe7f:	8b 55 2c             	mov    0x2c(%ebp),%edx
 80ffe82:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 80ffe88:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffe8b:	8b 40 04             	mov    0x4(%eax),%eax
 80ffe8e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80ffe95:	00 
 80ffe96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ffe99:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ffe9d:	89 04 24             	mov    %eax,(%esp)
 80ffea0:	e8 af 48 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 80ffea5:	c9                   	leave
 80ffea6:	c3                   	ret
 80ffea7:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGInput @ 0x80ffca4

/* WongWork::IPG::CIPGHelper::IPGInput(CUser*, unsigned char, unsigned int, char const*, char
   const*, char const*, char const*, char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGInput
          (CIPGHelper *this,CUser *param_1,uchar param_2,uint param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,void *param_9)

{
  SIPGData *pSVar1;
  char *pcVar2;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,0,1);
  strncpy((char *)(pSVar1 + 0xdd),param_4,0xb);
  strncpy((char *)(pSVar1 + 0xe8),param_5,0xc);
  strncpy((char *)(pSVar1 + 0xf4),param_6,0x14);
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x108),param_7,100);
  }
  if (param_8 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x16c),param_8,100);
  }
  pcVar2 = (char *)CUser::GetUserName(param_1);
  strncpy((char *)(pSVar1 + 0x1d0),pcVar2,0x32);
  pcVar2 = (char *)CUser::GetSsnString(param_1);
  strncpy((char *)(pSVar1 + 0x202),pcVar2,0xe);
  pcVar2 = (char *)CUser::GetUserEMail(param_1);
  strncpy((char *)(pSVar1 + 0x210),pcVar2,0x3c);
  memset(pSVar1 + 0x24c,0,7);
  pcVar2 = (char *)CUser::get_acc_name(param_1);
  strncpy((char *)(pSVar1 + 0x28),pcVar2,0x20);
  pcVar2 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(pSVar1 + 0x50),pcVar2,0x1e);
  pSVar1[0x26d] = (SIPGData)param_2;
  *(uint *)(pSVar1 + 0x98) = param_3;
  *(void **)(pSVar1 + 0x2d8) = param_9;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutput

```asm
// === 0810022e WongWork::IPG::CIPGHelper::IPGOutput  [0x0810022e-0x810034d] ===
 810022e:	55                   	push   %ebp
 810022f:	89 e5                	mov    %esp,%ebp
 8100231:	83 ec 28             	sub    $0x28,%esp
 8100234:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810023b:	00 
 810023c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8100243:	00 
 8100244:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100247:	89 44 24 04          	mov    %eax,0x4(%esp)
 810024b:	8b 45 08             	mov    0x8(%ebp),%eax
 810024e:	89 04 24             	mov    %eax,(%esp)
 8100251:	e8 d8 07 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 8100256:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100259:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810025c:	83 c0 69             	add    $0x69,%eax
 810025f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100266:	00 
 8100267:	8b 55 10             	mov    0x10(%ebp),%edx
 810026a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810026e:	89 04 24             	mov    %eax,(%esp)
 8100271:	e8 5a d6 f7 ff       	call   807d8d0 <strncpy@plt>
 8100276:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100279:	83 c0 71             	add    $0x71,%eax
 810027c:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8100283:	00 
 8100284:	8b 55 14             	mov    0x14(%ebp),%edx
 8100287:	89 54 24 04          	mov    %edx,0x4(%esp)
 810028b:	89 04 24             	mov    %eax,(%esp)
 810028e:	e8 3d d6 f7 ff       	call   807d8d0 <strncpy@plt>
 8100293:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100296:	83 c0 7d             	add    $0x7d,%eax
 8100299:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81002a0:	00 
 81002a1:	8b 55 18             	mov    0x18(%ebp),%edx
 81002a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81002a8:	89 04 24             	mov    %eax,(%esp)
 81002ab:	e8 20 d6 f7 ff       	call   807d8d0 <strncpy@plt>
 81002b0:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 81002b4:	74 1f                	je     81002d5 <_ZN8WongWork3IPG10CIPGHelper9IPGOutputEP5CUserPKcS5_S5_S5_S5_Pv+0xa7>
 81002b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81002b9:	05 91 00 00 00       	add    $0x91,%eax
 81002be:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 81002c5:	00 
 81002c6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 81002c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81002cd:	89 04 24             	mov    %eax,(%esp)
 81002d0:	e8 fb d5 f7 ff       	call   807d8d0 <strncpy@plt>
 81002d5:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 81002d9:	74 1f                	je     81002fa <_ZN8WongWork3IPG10CIPGHelper9IPGOutputEP5CUserPKcS5_S5_S5_S5_Pv+0xcc>
 81002db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81002de:	05 f5 00 00 00       	add    $0xf5,%eax
 81002e3:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 81002ea:	00 
 81002eb:	8b 55 20             	mov    0x20(%ebp),%edx
 81002ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 81002f2:	89 04 24             	mov    %eax,(%esp)
 81002f5:	e8 d6 d5 f7 ff       	call   807d8d0 <strncpy@plt>
 81002fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81002fd:	89 04 24             	mov    %eax,(%esp)
 8100300:	e8 23 0d 00 00       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8100305:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100308:	81 c2 e8 01 00 00    	add    $0x1e8,%edx
 810030e:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 8100315:	00 
 8100316:	89 44 24 04          	mov    %eax,0x4(%esp)
 810031a:	89 14 24             	mov    %edx,(%esp)
 810031d:	e8 ae d5 f7 ff       	call   807d8d0 <strncpy@plt>
 8100322:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100325:	8b 55 24             	mov    0x24(%ebp),%edx
 8100328:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 810032e:	8b 45 08             	mov    0x8(%ebp),%eax
 8100331:	8b 40 04             	mov    0x4(%eax),%eax
 8100334:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810033b:	00 
 810033c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810033f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100343:	89 04 24             	mov    %eax,(%esp)
 8100346:	e8 09 44 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 810034b:	c9                   	leave
 810034c:	c3                   	ret
 810034d:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGOutput @ 0x810022e

/* WongWork::IPG::CIPGHelper::IPGOutput(CUser*, char const*, char const*, char const*, char const*,
   char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutput
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  char *__src;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,2,1);
  strncpy((char *)(pSVar1 + 0x69),param_2,8);
  strncpy((char *)(pSVar1 + 0x71),param_3,0xc);
  strncpy((char *)(pSVar1 + 0x7d),param_4,0x14);
  if (param_5 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x91),param_5,100);
  }
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xf5),param_6,100);
  }
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(pSVar1 + 0x1e8),__src,0x3a);
  *(void **)(pSVar1 + 0x2d8) = param_7;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutputCancel

```asm
// === 081004de WongWork::IPG::CIPGHelper::IPGOutputCancel  [0x081004de-0x8100615] ===
 81004de:	55                   	push   %ebp
 81004df:	89 e5                	mov    %esp,%ebp
 81004e1:	83 ec 28             	sub    $0x28,%esp
 81004e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81004eb:	00 
 81004ec:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81004f3:	00 
 81004f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81004f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81004fb:	8b 45 08             	mov    0x8(%ebp),%eax
 81004fe:	89 04 24             	mov    %eax,(%esp)
 8100501:	e8 28 05 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 8100506:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100509:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810050c:	83 c0 69             	add    $0x69,%eax
 810050f:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8100516:	00 
 8100517:	8b 55 10             	mov    0x10(%ebp),%edx
 810051a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810051e:	89 04 24             	mov    %eax,(%esp)
 8100521:	e8 aa d3 f7 ff       	call   807d8d0 <strncpy@plt>
 8100526:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100529:	83 c0 7e             	add    $0x7e,%eax
 810052c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100533:	00 
 8100534:	8b 55 14             	mov    0x14(%ebp),%edx
 8100537:	89 54 24 04          	mov    %edx,0x4(%esp)
 810053b:	89 04 24             	mov    %eax,(%esp)
 810053e:	e8 8d d3 f7 ff       	call   807d8d0 <strncpy@plt>
 8100543:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100546:	05 86 00 00 00       	add    $0x86,%eax
 810054b:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8100552:	00 
 8100553:	8b 55 18             	mov    0x18(%ebp),%edx
 8100556:	89 54 24 04          	mov    %edx,0x4(%esp)
 810055a:	89 04 24             	mov    %eax,(%esp)
 810055d:	e8 6e d3 f7 ff       	call   807d8d0 <strncpy@plt>
 8100562:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100565:	05 92 00 00 00       	add    $0x92,%eax
 810056a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8100571:	00 
 8100572:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8100575:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100579:	89 04 24             	mov    %eax,(%esp)
 810057c:	e8 4f d3 f7 ff       	call   807d8d0 <strncpy@plt>
 8100581:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8100585:	74 1f                	je     81005a6 <_ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE+0xc8>
 8100587:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810058a:	05 a6 00 00 00       	add    $0xa6,%eax
 810058f:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100596:	00 
 8100597:	8b 55 20             	mov    0x20(%ebp),%edx
 810059a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810059e:	89 04 24             	mov    %eax,(%esp)
 81005a1:	e8 2a d3 f7 ff       	call   807d8d0 <strncpy@plt>
 81005a6:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 81005aa:	74 1f                	je     81005cb <_ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE+0xed>
 81005ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81005af:	05 0a 01 00 00       	add    $0x10a,%eax
 81005b4:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 81005bb:	00 
 81005bc:	8b 55 24             	mov    0x24(%ebp),%edx
 81005bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81005c3:	89 04 24             	mov    %eax,(%esp)
 81005c6:	e8 05 d3 f7 ff       	call   807d8d0 <strncpy@plt>
 81005cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81005ce:	8b 55 28             	mov    0x28(%ebp),%edx
 81005d1:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 81005d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81005da:	8b 55 2c             	mov    0x2c(%ebp),%edx
 81005dd:	8b 0a                	mov    (%edx),%ecx
 81005df:	89 88 f0 01 00 00    	mov    %ecx,0x1f0(%eax)
 81005e5:	8b 4a 04             	mov    0x4(%edx),%ecx
 81005e8:	89 88 f4 01 00 00    	mov    %ecx,0x1f4(%eax)
 81005ee:	8b 52 08             	mov    0x8(%edx),%edx
 81005f1:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 81005f7:	8b 45 08             	mov    0x8(%ebp),%eax
 81005fa:	8b 40 04             	mov    0x4(%eax),%eax
 81005fd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8100604:	00 
 8100605:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100608:	89 54 24 04          	mov    %edx,0x4(%esp)
 810060c:	89 04 24             	mov    %eax,(%esp)
 810060f:	e8 40 41 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 8100614:	c9                   	leave
 8100615:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGOutputCancel @ 0x81004de

/* WongWork::IPG::CIPGHelper::IPGOutputCancel(CUser*, char const*, char const*, char const*, char
   const*, char const*, char const*, void*, Taiwan::BillTransaction*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputCancel
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,void *param_8,BillTransaction *param_9)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,3,0);
  strncpy((char *)(pSVar1 + 0x69),param_2,0x15);
  strncpy((char *)(pSVar1 + 0x7e),param_3,8);
  strncpy((char *)(pSVar1 + 0x86),param_4,0xc);
  strncpy((char *)(pSVar1 + 0x92),param_5,0x14);
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xa6),param_6,100);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x10a),param_7,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_8;
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)param_9;
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_9 + 4);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_9 + 8);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutputCancel_08100616

```asm
// === 08100616 WongWork::IPG::CIPGHelper::IPGOutputCancel  [0x08100616-0x810078f] ===
 8100616:	55                   	push   %ebp
 8100617:	89 e5                	mov    %esp,%ebp
 8100619:	83 ec 28             	sub    $0x28,%esp
 810061c:	8b 45 08             	mov    0x8(%ebp),%eax
 810061f:	8b 40 04             	mov    0x4(%eax),%eax
 8100622:	89 04 24             	mov    %eax,(%esp)
 8100625:	e8 42 40 00 00       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 810062a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810062d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100630:	8d 50 28             	lea    0x28(%eax),%edx
 8100633:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100636:	83 c0 28             	add    $0x28,%eax
 8100639:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 8100640:	00 
 8100641:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100645:	89 04 24             	mov    %eax,(%esp)
 8100648:	e8 53 d2 f7 ff       	call   807d8a0 <memcpy@plt>
 810064d:	8b 45 10             	mov    0x10(%ebp),%eax
 8100650:	05 6e 01 00 00       	add    $0x16e,%eax
 8100655:	89 c2                	mov    %eax,%edx
 8100657:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810065a:	83 c0 69             	add    $0x69,%eax
 810065d:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8100664:	00 
 8100665:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100669:	89 04 24             	mov    %eax,(%esp)
 810066c:	e8 5f d2 f7 ff       	call   807d8d0 <strncpy@plt>
 8100671:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100674:	83 c0 69             	add    $0x69,%eax
 8100677:	89 c2                	mov    %eax,%edx
 8100679:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810067c:	83 c0 7e             	add    $0x7e,%eax
 810067f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100686:	00 
 8100687:	89 54 24 04          	mov    %edx,0x4(%esp)
 810068b:	89 04 24             	mov    %eax,(%esp)
 810068e:	e8 3d d2 f7 ff       	call   807d8d0 <strncpy@plt>
 8100693:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100696:	83 c0 7d             	add    $0x7d,%eax
 8100699:	89 c2                	mov    %eax,%edx
 810069b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810069e:	05 92 00 00 00       	add    $0x92,%eax
 81006a3:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81006aa:	00 
 81006ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 81006af:	89 04 24             	mov    %eax,(%esp)
 81006b2:	e8 19 d2 f7 ff       	call   807d8d0 <strncpy@plt>
 81006b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81006ba:	83 c0 71             	add    $0x71,%eax
 81006bd:	89 c2                	mov    %eax,%edx
 81006bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81006c2:	05 86 00 00 00       	add    $0x86,%eax
 81006c7:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81006ce:	00 
 81006cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81006d3:	89 04 24             	mov    %eax,(%esp)
 81006d6:	e8 f5 d1 f7 ff       	call   807d8d0 <strncpy@plt>
 81006db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81006de:	05 91 00 00 00       	add    $0x91,%eax
 81006e3:	85 c0                	test   %eax,%eax
 81006e5:	74 26                	je     810070d <_ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEPNS0_8SIPGDataES3_+0xf7>
 81006e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81006ea:	05 91 00 00 00       	add    $0x91,%eax
 81006ef:	89 c2                	mov    %eax,%edx
 81006f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81006f4:	05 a6 00 00 00       	add    $0xa6,%eax
 81006f9:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100700:	00 
 8100701:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100705:	89 04 24             	mov    %eax,(%esp)
 8100708:	e8 c3 d1 f7 ff       	call   807d8d0 <strncpy@plt>
 810070d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100710:	05 f5 00 00 00       	add    $0xf5,%eax
 8100715:	85 c0                	test   %eax,%eax
 8100717:	74 26                	je     810073f <_ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEPNS0_8SIPGDataES3_+0x129>
 8100719:	8b 45 0c             	mov    0xc(%ebp),%eax
 810071c:	05 f5 00 00 00       	add    $0xf5,%eax
 8100721:	89 c2                	mov    %eax,%edx
 8100723:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100726:	05 0a 01 00 00       	add    $0x10a,%eax
 810072b:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100732:	00 
 8100733:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100737:	89 04 24             	mov    %eax,(%esp)
 810073a:	e8 91 d1 f7 ff       	call   807d8d0 <strncpy@plt>
 810073f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100742:	8b 55 10             	mov    0x10(%ebp),%edx
 8100745:	8b 8a dc 01 00 00    	mov    0x1dc(%edx),%ecx
 810074b:	89 88 f0 01 00 00    	mov    %ecx,0x1f0(%eax)
 8100751:	8b 8a e0 01 00 00    	mov    0x1e0(%edx),%ecx
 8100757:	89 88 f4 01 00 00    	mov    %ecx,0x1f4(%eax)
 810075d:	8b 92 e4 01 00 00    	mov    0x1e4(%edx),%edx
 8100763:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 8100769:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810076c:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8100770:	8b 45 08             	mov    0x8(%ebp),%eax
 8100773:	8b 40 04             	mov    0x4(%eax),%eax
 8100776:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810077d:	00 
 810077e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100781:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100785:	89 04 24             	mov    %eax,(%esp)
 8100788:	e8 c7 3f 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 810078d:	c9                   	leave
 810078e:	c3                   	ret
 810078f:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGOutputCancel @ 0x8100616

/* WongWork::IPG::CIPGHelper::IPGOutputCancel(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputCancel(CIPGHelper *this,SIPGData *param_1,SIPGData *param_2)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  memcpy(pSVar1 + 0x28,param_1 + 0x28,0x41);
  strncpy((char *)(pSVar1 + 0x69),(char *)(param_2 + 0x16e),0x15);
  strncpy((char *)(pSVar1 + 0x7e),(char *)(param_1 + 0x69),8);
  strncpy((char *)(pSVar1 + 0x92),(char *)(param_1 + 0x7d),0x14);
  strncpy((char *)(pSVar1 + 0x86),(char *)(param_1 + 0x71),0xc);
  if (param_1 != (SIPGData *)0xffffff6f) {
    strncpy((char *)(pSVar1 + 0xa6),(char *)(param_1 + 0x91),100);
  }
  if (param_1 != (SIPGData *)0xffffff0b) {
    strncpy((char *)(pSVar1 + 0x10a),(char *)(param_1 + 0xf5),100);
  }
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1e4);
  pSVar1[0x24] = (SIPGData)0x0;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutputConfirm

```asm
// === 08100cd2 WongWork::IPG::CIPGHelper::IPGOutputConfirm  [0x08100cd2-0x8100e09] ===
 8100cd2:	55                   	push   %ebp
 8100cd3:	89 e5                	mov    %esp,%ebp
 8100cd5:	83 ec 28             	sub    $0x28,%esp
 8100cd8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8100cdf:	00 
 8100ce0:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8100ce7:	00 
 8100ce8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100ceb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100cef:	8b 45 08             	mov    0x8(%ebp),%eax
 8100cf2:	89 04 24             	mov    %eax,(%esp)
 8100cf5:	e8 34 fd ff ff       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 8100cfa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100cfd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100d00:	83 c0 69             	add    $0x69,%eax
 8100d03:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8100d0a:	00 
 8100d0b:	8b 55 10             	mov    0x10(%ebp),%edx
 8100d0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100d12:	89 04 24             	mov    %eax,(%esp)
 8100d15:	e8 b6 cb f7 ff       	call   807d8d0 <strncpy@plt>
 8100d1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100d1d:	83 c0 7e             	add    $0x7e,%eax
 8100d20:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100d27:	00 
 8100d28:	8b 55 14             	mov    0x14(%ebp),%edx
 8100d2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100d2f:	89 04 24             	mov    %eax,(%esp)
 8100d32:	e8 99 cb f7 ff       	call   807d8d0 <strncpy@plt>
 8100d37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100d3a:	05 86 00 00 00       	add    $0x86,%eax
 8100d3f:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8100d46:	00 
 8100d47:	8b 55 18             	mov    0x18(%ebp),%edx
 8100d4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100d4e:	89 04 24             	mov    %eax,(%esp)
 8100d51:	e8 7a cb f7 ff       	call   807d8d0 <strncpy@plt>
 8100d56:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100d59:	05 92 00 00 00       	add    $0x92,%eax
 8100d5e:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8100d65:	00 
 8100d66:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8100d69:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100d6d:	89 04 24             	mov    %eax,(%esp)
 8100d70:	e8 5b cb f7 ff       	call   807d8d0 <strncpy@plt>
 8100d75:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8100d79:	74 1f                	je     8100d9a <_ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE+0xc8>
 8100d7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100d7e:	05 a6 00 00 00       	add    $0xa6,%eax
 8100d83:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100d8a:	00 
 8100d8b:	8b 55 20             	mov    0x20(%ebp),%edx
 8100d8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100d92:	89 04 24             	mov    %eax,(%esp)
 8100d95:	e8 36 cb f7 ff       	call   807d8d0 <strncpy@plt>
 8100d9a:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 8100d9e:	74 1f                	je     8100dbf <_ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE+0xed>
 8100da0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100da3:	05 0a 01 00 00       	add    $0x10a,%eax
 8100da8:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100daf:	00 
 8100db0:	8b 55 24             	mov    0x24(%ebp),%edx
 8100db3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100db7:	89 04 24             	mov    %eax,(%esp)
 8100dba:	e8 11 cb f7 ff       	call   807d8d0 <strncpy@plt>
 8100dbf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100dc2:	8b 55 28             	mov    0x28(%ebp),%edx
 8100dc5:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 8100dcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100dce:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8100dd1:	8b 0a                	mov    (%edx),%ecx
 8100dd3:	89 88 f0 01 00 00    	mov    %ecx,0x1f0(%eax)
 8100dd9:	8b 4a 04             	mov    0x4(%edx),%ecx
 8100ddc:	89 88 f4 01 00 00    	mov    %ecx,0x1f4(%eax)
 8100de2:	8b 52 08             	mov    0x8(%edx),%edx
 8100de5:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 8100deb:	8b 45 08             	mov    0x8(%ebp),%eax
 8100dee:	8b 40 04             	mov    0x4(%eax),%eax
 8100df1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8100df8:	00 
 8100df9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100dfc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100e00:	89 04 24             	mov    %eax,(%esp)
 8100e03:	e8 4c 39 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 8100e08:	c9                   	leave
 8100e09:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGOutputConfirm @ 0x8100cd2

/* WongWork::IPG::CIPGHelper::IPGOutputConfirm(CUser*, char const*, char const*, char const*, char
   const*, char const*, char const*, void*, Taiwan::BillTransaction*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputConfirm
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,void *param_8,BillTransaction *param_9)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,5,0);
  strncpy((char *)(pSVar1 + 0x69),param_2,0x15);
  strncpy((char *)(pSVar1 + 0x7e),param_3,8);
  strncpy((char *)(pSVar1 + 0x86),param_4,0xc);
  strncpy((char *)(pSVar1 + 0x92),param_5,0x14);
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xa6),param_6,100);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x10a),param_7,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_8;
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)param_9;
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_9 + 4);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_9 + 8);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutputConfirm_08100e0a

```asm
// === 08100e0a WongWork::IPG::CIPGHelper::IPGOutputConfirm  [0x08100e0a-0x8100f9d] ===
 8100e0a:	55                   	push   %ebp
 8100e0b:	89 e5                	mov    %esp,%ebp
 8100e0d:	83 ec 28             	sub    $0x28,%esp
 8100e10:	8b 45 08             	mov    0x8(%ebp),%eax
 8100e13:	8b 40 04             	mov    0x4(%eax),%eax
 8100e16:	89 04 24             	mov    %eax,(%esp)
 8100e19:	e8 4e 38 00 00       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 8100e1e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100e21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100e24:	c7 40 20 ff ff ff ff 	movl   $0xffffffff,0x20(%eax)
 8100e2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100e2e:	c7 40 1c 05 00 00 00 	movl   $0x5,0x1c(%eax)
 8100e35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100e38:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8100e3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100e3f:	8d 50 28             	lea    0x28(%eax),%edx
 8100e42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100e45:	83 c0 28             	add    $0x28,%eax
 8100e48:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 8100e4f:	00 
 8100e50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100e54:	89 04 24             	mov    %eax,(%esp)
 8100e57:	e8 44 ca f7 ff       	call   807d8a0 <memcpy@plt>
 8100e5c:	8b 45 10             	mov    0x10(%ebp),%eax
 8100e5f:	05 6e 01 00 00       	add    $0x16e,%eax
 8100e64:	89 c2                	mov    %eax,%edx
 8100e66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100e69:	83 c0 69             	add    $0x69,%eax
 8100e6c:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8100e73:	00 
 8100e74:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100e78:	89 04 24             	mov    %eax,(%esp)
 8100e7b:	e8 50 ca f7 ff       	call   807d8d0 <strncpy@plt>
 8100e80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100e83:	83 c0 69             	add    $0x69,%eax
 8100e86:	89 c2                	mov    %eax,%edx
 8100e88:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100e8b:	83 c0 7e             	add    $0x7e,%eax
 8100e8e:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100e95:	00 
 8100e96:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100e9a:	89 04 24             	mov    %eax,(%esp)
 8100e9d:	e8 2e ca f7 ff       	call   807d8d0 <strncpy@plt>
 8100ea2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100ea5:	83 c0 7d             	add    $0x7d,%eax
 8100ea8:	89 c2                	mov    %eax,%edx
 8100eaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100ead:	05 92 00 00 00       	add    $0x92,%eax
 8100eb2:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8100eb9:	00 
 8100eba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100ebe:	89 04 24             	mov    %eax,(%esp)
 8100ec1:	e8 0a ca f7 ff       	call   807d8d0 <strncpy@plt>
 8100ec6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100ec9:	83 c0 71             	add    $0x71,%eax
 8100ecc:	89 c2                	mov    %eax,%edx
 8100ece:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100ed1:	05 86 00 00 00       	add    $0x86,%eax
 8100ed6:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8100edd:	00 
 8100ede:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100ee2:	89 04 24             	mov    %eax,(%esp)
 8100ee5:	e8 e6 c9 f7 ff       	call   807d8d0 <strncpy@plt>
 8100eea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100eed:	05 91 00 00 00       	add    $0x91,%eax
 8100ef2:	85 c0                	test   %eax,%eax
 8100ef4:	74 26                	je     8100f1c <_ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEPNS0_8SIPGDataES3_+0x112>
 8100ef6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100ef9:	05 91 00 00 00       	add    $0x91,%eax
 8100efe:	89 c2                	mov    %eax,%edx
 8100f00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100f03:	05 a6 00 00 00       	add    $0xa6,%eax
 8100f08:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100f0f:	00 
 8100f10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100f14:	89 04 24             	mov    %eax,(%esp)
 8100f17:	e8 b4 c9 f7 ff       	call   807d8d0 <strncpy@plt>
 8100f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100f1f:	05 f5 00 00 00       	add    $0xf5,%eax
 8100f24:	85 c0                	test   %eax,%eax
 8100f26:	74 26                	je     8100f4e <_ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEPNS0_8SIPGDataES3_+0x144>
 8100f28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100f2b:	05 f5 00 00 00       	add    $0xf5,%eax
 8100f30:	89 c2                	mov    %eax,%edx
 8100f32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100f35:	05 0a 01 00 00       	add    $0x10a,%eax
 8100f3a:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 8100f41:	00 
 8100f42:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100f46:	89 04 24             	mov    %eax,(%esp)
 8100f49:	e8 82 c9 f7 ff       	call   807d8d0 <strncpy@plt>
 8100f4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100f51:	8b 55 10             	mov    0x10(%ebp),%edx
 8100f54:	8b 8a dc 01 00 00    	mov    0x1dc(%edx),%ecx
 8100f5a:	89 88 f0 01 00 00    	mov    %ecx,0x1f0(%eax)
 8100f60:	8b 8a e0 01 00 00    	mov    0x1e0(%edx),%ecx
 8100f66:	89 88 f4 01 00 00    	mov    %ecx,0x1f4(%eax)
 8100f6c:	8b 92 e4 01 00 00    	mov    0x1e4(%edx),%edx
 8100f72:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 8100f78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100f7b:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8100f7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8100f82:	8b 40 04             	mov    0x4(%eax),%eax
 8100f85:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8100f8c:	00 
 8100f8d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100f90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100f94:	89 04 24             	mov    %eax,(%esp)
 8100f97:	e8 b8 37 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 8100f9c:	c9                   	leave
 8100f9d:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGOutputConfirm @ 0x8100e0a

/* WongWork::IPG::CIPGHelper::IPGOutputConfirm(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)
    */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputConfirm(CIPGHelper *this,SIPGData *param_1,SIPGData *param_2)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  *(undefined4 *)(pSVar1 + 0x20) = 0xffffffff;
  *(undefined4 *)(pSVar1 + 0x1c) = 5;
  pSVar1[0x24] = (SIPGData)0x0;
  memcpy(pSVar1 + 0x28,param_1 + 0x28,0x41);
  strncpy((char *)(pSVar1 + 0x69),(char *)(param_2 + 0x16e),0x15);
  strncpy((char *)(pSVar1 + 0x7e),(char *)(param_1 + 0x69),8);
  strncpy((char *)(pSVar1 + 0x92),(char *)(param_1 + 0x7d),0x14);
  strncpy((char *)(pSVar1 + 0x86),(char *)(param_1 + 0x71),0xc);
  if (param_1 != (SIPGData *)0xffffff6f) {
    strncpy((char *)(pSVar1 + 0xa6),(char *)(param_1 + 0x91),100);
  }
  if (param_1 != (SIPGData *)0xffffff0b) {
    strncpy((char *)(pSVar1 + 0x10a),(char *)(param_1 + 0xf5),100);
  }
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1e4);
  pSVar1[0x24] = (SIPGData)0x0;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutputPoint

```asm
// === 081000f6 WongWork::IPG::CIPGHelper::IPGOutputPoint  [0x081000f6-0x810022d] ===
 81000f6:	55                   	push   %ebp
 81000f7:	89 e5                	mov    %esp,%ebp
 81000f9:	83 ec 28             	sub    $0x28,%esp
 81000fc:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8100103:	00 
 8100104:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 810010b:	00 
 810010c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810010f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100113:	8b 45 08             	mov    0x8(%ebp),%eax
 8100116:	89 04 24             	mov    %eax,(%esp)
 8100119:	e8 10 09 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 810011e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100121:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100124:	89 04 24             	mov    %eax,(%esp)
 8100127:	e8 42 a2 fd ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810012c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810012f:	83 c2 28             	add    $0x28,%edx
 8100132:	89 44 24 08          	mov    %eax,0x8(%esp)
 8100136:	c7 44 24 04 43 14 b4 	movl   $0x8b41443,0x4(%esp)
 810013d:	08 
 810013e:	89 14 24             	mov    %edx,(%esp)
 8100141:	e8 fa e2 f7 ff       	call   807e440 <sprintf@plt>
 8100146:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100149:	89 04 24             	mov    %eax,(%esp)
 810014c:	e8 21 0f 00 00       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8100151:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100154:	83 c2 3c             	add    $0x3c,%edx
 8100157:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 810015e:	00 
 810015f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100163:	89 14 24             	mov    %edx,(%esp)
 8100166:	e8 65 d7 f7 ff       	call   807d8d0 <strncpy@plt>
 810016b:	8b 45 0c             	mov    0xc(%ebp),%eax
 810016e:	89 04 24             	mov    %eax,(%esp)
 8100171:	e8 b2 0e 00 00       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8100176:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100179:	83 c2 64             	add    $0x64,%edx
 810017c:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8100183:	00 
 8100184:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100188:	89 14 24             	mov    %edx,(%esp)
 810018b:	e8 40 d7 f7 ff       	call   807d8d0 <strncpy@plt>
 8100190:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100193:	05 8c 00 00 00       	add    $0x8c,%eax
 8100198:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 810019f:	00 
 81001a0:	8b 55 10             	mov    0x10(%ebp),%edx
 81001a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81001a7:	89 04 24             	mov    %eax,(%esp)
 81001aa:	e8 21 d7 f7 ff       	call   807d8d0 <strncpy@plt>
 81001af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81001b2:	05 94 00 00 00       	add    $0x94,%eax
 81001b7:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 81001be:	00 
 81001bf:	8b 55 18             	mov    0x18(%ebp),%edx
 81001c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81001c6:	89 04 24             	mov    %eax,(%esp)
 81001c9:	e8 02 d7 f7 ff       	call   807d8d0 <strncpy@plt>
 81001ce:	8b 45 14             	mov    0x14(%ebp),%eax
 81001d1:	89 04 24             	mov    %eax,(%esp)
 81001d4:	e8 17 e5 f7 ff       	call   807e6f0 <atoi@plt>
 81001d9:	89 c2                	mov    %eax,%edx
 81001db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81001de:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 81001e4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81001e7:	c6 80 b0 00 00 00 55 	movb   $0x55,0xb0(%eax)
 81001ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81001f1:	c6 80 b1 00 00 00 00 	movb   $0x0,0xb1(%eax)
 81001f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81001fb:	c6 80 b2 00 00 00 00 	movb   $0x0,0xb2(%eax)
 8100202:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100205:	8b 55 24             	mov    0x24(%ebp),%edx
 8100208:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 810020e:	8b 45 08             	mov    0x8(%ebp),%eax
 8100211:	8b 40 04             	mov    0x4(%eax),%eax
 8100214:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810021b:	00 
 810021c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810021f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100223:	89 04 24             	mov    %eax,(%esp)
 8100226:	e8 29 45 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 810022b:	c9                   	leave
 810022c:	c3                   	ret
 810022d:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGOutputPoint @ 0x81000f6

/* WongWork::IPG::CIPGHelper::IPGOutputPoint(CUser*, char const*, char const*, char const*, char
   const*, char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputPoint
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,6,1);
  uVar2 = CUser::get_acc_id(param_1);
  sprintf((char *)(pSVar1 + 0x28),"%d",uVar2);
  pcVar3 = (char *)CUser::get_acc_name(param_1);
  strncpy((char *)(pSVar1 + 0x3c),pcVar3,0x28);
  pcVar3 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(pSVar1 + 100),pcVar3,0x28);
  strncpy((char *)(pSVar1 + 0x8c),param_2,8);
  strncpy((char *)(pSVar1 + 0x94),param_4,0x15);
  iVar4 = atoi(param_3);
  *(int *)(pSVar1 + 0xac) = iVar4;
  pSVar1[0xb0] = (SIPGData)0x55;
  pSVar1[0xb1] = (SIPGData)0x0;
  pSVar1[0xb2] = (SIPGData)0x0;
  *(void **)(pSVar1 + 0x2d8) = param_7;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGOutputSimulation

```asm
// === 0810034e WongWork::IPG::CIPGHelper::IPGOutputSimulation  [0x0810034e-0x81004dd] ===
 810034e:	55                   	push   %ebp
 810034f:	89 e5                	mov    %esp,%ebp
 8100351:	83 ec 28             	sub    $0x28,%esp
 8100354:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810035b:	00 
 810035c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8100363:	00 
 8100364:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100367:	89 44 24 04          	mov    %eax,0x4(%esp)
 810036b:	8b 45 08             	mov    0x8(%ebp),%eax
 810036e:	89 04 24             	mov    %eax,(%esp)
 8100371:	e8 b8 06 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 8100376:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8100379:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810037c:	83 c0 69             	add    $0x69,%eax
 810037f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8100386:	00 
 8100387:	8b 55 10             	mov    0x10(%ebp),%edx
 810038a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810038e:	89 04 24             	mov    %eax,(%esp)
 8100391:	e8 3a d5 f7 ff       	call   807d8d0 <strncpy@plt>
 8100396:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8100399:	83 c0 71             	add    $0x71,%eax
 810039c:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81003a3:	00 
 81003a4:	8b 55 14             	mov    0x14(%ebp),%edx
 81003a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81003ab:	89 04 24             	mov    %eax,(%esp)
 81003ae:	e8 1d d5 f7 ff       	call   807d8d0 <strncpy@plt>
 81003b3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81003b6:	83 c0 7d             	add    $0x7d,%eax
 81003b9:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81003c0:	00 
 81003c1:	8b 55 18             	mov    0x18(%ebp),%edx
 81003c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81003c8:	89 04 24             	mov    %eax,(%esp)
 81003cb:	e8 00 d5 f7 ff       	call   807d8d0 <strncpy@plt>
 81003d0:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 81003d4:	74 1f                	je     81003f5 <_ZN8WongWork3IPG10CIPGHelper19IPGOutputSimulationEP5CUserPKcS5_S5_S5_S5_Pv+0xa7>
 81003d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81003d9:	05 91 00 00 00       	add    $0x91,%eax
 81003de:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 81003e5:	00 
 81003e6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 81003e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81003ed:	89 04 24             	mov    %eax,(%esp)
 81003f0:	e8 db d4 f7 ff       	call   807d8d0 <strncpy@plt>
 81003f5:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 81003f9:	74 1f                	je     810041a <_ZN8WongWork3IPG10CIPGHelper19IPGOutputSimulationEP5CUserPKcS5_S5_S5_S5_Pv+0xcc>
 81003fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81003fe:	05 f5 00 00 00       	add    $0xf5,%eax
 8100403:	c7 44 24 08 64 00 00 	movl   $0x64,0x8(%esp)
 810040a:	00 
 810040b:	8b 55 20             	mov    0x20(%ebp),%edx
 810040e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100412:	89 04 24             	mov    %eax,(%esp)
 8100415:	e8 b6 d4 f7 ff       	call   807d8d0 <strncpy@plt>
 810041a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810041d:	8b 55 24             	mov    0x24(%ebp),%edx
 8100420:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 8100426:	8b 45 08             	mov    0x8(%ebp),%eax
 8100429:	8b 40 04             	mov    0x4(%eax),%eax
 810042c:	89 04 24             	mov    %eax,(%esp)
 810042f:	e8 38 42 00 00       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 8100434:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100437:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810043a:	8b 00                	mov    (%eax),%eax
 810043c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 810043f:	8d 4a 28             	lea    0x28(%edx),%ecx
 8100442:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100445:	83 c2 28             	add    $0x28,%edx
 8100448:	89 44 24 08          	mov    %eax,0x8(%esp)
 810044c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8100450:	89 14 24             	mov    %edx,(%esp)
 8100453:	e8 48 d4 f7 ff       	call   807d8a0 <memcpy@plt>
 8100458:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810045b:	05 73 01 00 00       	add    $0x173,%eax
 8100460:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8100467:	00 
 8100468:	c7 44 24 04 46 14 b4 	movl   $0x8b41446,0x4(%esp)
 810046f:	08 
 8100470:	89 04 24             	mov    %eax,(%esp)
 8100473:	e8 28 d4 f7 ff       	call   807d8a0 <memcpy@plt>
 8100478:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810047b:	8b 10                	mov    (%eax),%edx
 810047d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100480:	89 10                	mov    %edx,(%eax)
 8100482:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8100485:	8b 50 1c             	mov    0x1c(%eax),%edx
 8100488:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810048b:	89 50 1c             	mov    %edx,0x1c(%eax)
 810048e:	8b 45 08             	mov    0x8(%ebp),%eax
 8100491:	8b 00                	mov    (%eax),%eax
 8100493:	83 c0 34             	add    $0x34,%eax
 8100496:	8b 10                	mov    (%eax),%edx
 8100498:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810049b:	89 44 24 08          	mov    %eax,0x8(%esp)
 810049f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81004a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81004a6:	8b 45 08             	mov    0x8(%ebp),%eax
 81004a9:	89 04 24             	mov    %eax,(%esp)
 81004ac:	ff d2                	call   *%edx
 81004ae:	8b 45 08             	mov    0x8(%ebp),%eax
 81004b1:	8b 40 04             	mov    0x4(%eax),%eax
 81004b4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81004b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81004bb:	89 04 24             	mov    %eax,(%esp)
 81004be:	e8 2d 42 00 00       	call   81046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>
 81004c3:	8b 45 08             	mov    0x8(%ebp),%eax
 81004c6:	8b 40 04             	mov    0x4(%eax),%eax
 81004c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81004cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81004d0:	89 04 24             	mov    %eax,(%esp)
 81004d3:	e8 18 42 00 00       	call   81046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>
 81004d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81004db:	c9                   	leave
 81004dc:	c3                   	ret
 81004dd:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGOutputSimulation @ 0x810034e

/* WongWork::IPG::CIPGHelper::IPGOutputSimulation(CUser*, char const*, char const*, char const*,
   char const*, char const*, void*) */

SIPGData * __thiscall
WongWork::IPG::CIPGHelper::IPGOutputSimulation
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  SIPGData *pSVar2;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,2,1);
  strncpy((char *)(pSVar1 + 0x69),param_2,8);
  strncpy((char *)(pSVar1 + 0x71),param_3,0xc);
  strncpy((char *)(pSVar1 + 0x7d),param_4,0x14);
  if (param_5 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x91),param_5,100);
  }
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xf5),param_6,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_7;
  pSVar2 = (SIPGData *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  memcpy(pSVar2 + 0x28,pSVar1 + 0x28,*(size_t *)pSVar1);
  memcpy(pSVar2 + 0x173,&DAT_08b41446,2);
  *(undefined4 *)pSVar2 = *(undefined4 *)pSVar1;
  *(undefined4 *)(pSVar2 + 0x1c) = *(undefined4 *)(pSVar1 + 0x1c);
  (**(code **)(*(int *)this + 0x34))(this,pSVar1,pSVar2);
  CIPGMgr::FreeIPGData(*(CIPGMgr **)(this + 4),pSVar1);
  CIPGMgr::FreeIPGData(*(CIPGMgr **)(this + 4),pSVar2);
  return pSVar1;
}

```

---

## IPGQuery

```asm
// === 08100790 WongWork::IPG::CIPGHelper::IPGQuery  [0x08100790-0x81007e7] ===
 8100790:	55                   	push   %ebp
 8100791:	89 e5                	mov    %esp,%ebp
 8100793:	83 ec 28             	sub    $0x28,%esp
 8100796:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810079d:	00 
 810079e:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81007a5:	00 
 81007a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81007a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81007ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81007b0:	89 04 24             	mov    %eax,(%esp)
 81007b3:	e8 76 02 00 00       	call   8100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>
 81007b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81007bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81007be:	c7 80 d8 02 00 00 00 	movl   $0x0,0x2d8(%eax)
 81007c5:	00 00 00 
 81007c8:	8b 45 08             	mov    0x8(%ebp),%eax
 81007cb:	8b 40 04             	mov    0x4(%eax),%eax
 81007ce:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81007d5:	00 
 81007d6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81007d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81007dd:	89 04 24             	mov    %eax,(%esp)
 81007e0:	e8 6f 3f 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 81007e5:	c9                   	leave
 81007e6:	c3                   	ret
 81007e7:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::IPGQuery @ 0x8100790

/* WongWork::IPG::CIPGHelper::IPGQuery(CUser*) */

void __thiscall WongWork::IPG::CIPGHelper::IPGQuery(CIPGHelper *this,CUser *param_1)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,4,1);
  *(undefined4 *)(pSVar1 + 0x2d8) = 0;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}

```

---

## IPGRequest

```asm
// === 081007e8 WongWork::IPG::CIPGHelper::IPGRequest  [0x081007e8-0x810085d] ===
 81007e8:	55                   	push   %ebp
 81007e9:	89 e5                	mov    %esp,%ebp
 81007eb:	83 ec 18             	sub    $0x18,%esp
 81007ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81007f1:	8b 40 1c             	mov    0x1c(%eax),%eax
 81007f4:	89 c2                	mov    %eax,%edx
 81007f6:	8b 45 08             	mov    0x8(%ebp),%eax
 81007f9:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 81007fd:	89 c2                	mov    %eax,%edx
 81007ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100802:	89 10                	mov    %edx,(%eax)
 8100804:	8b 45 08             	mov    0x8(%ebp),%eax
 8100807:	8d 50 24             	lea    0x24(%eax),%edx
 810080a:	8b 45 0c             	mov    0xc(%ebp),%eax
 810080d:	83 c0 04             	add    $0x4,%eax
 8100810:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8100817:	00 
 8100818:	89 54 24 04          	mov    %edx,0x4(%esp)
 810081c:	89 04 24             	mov    %eax,(%esp)
 810081f:	e8 ac d0 f7 ff       	call   807d8d0 <strncpy@plt>
 8100824:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100827:	8b 40 1c             	mov    0x1c(%eax),%eax
 810082a:	89 c2                	mov    %eax,%edx
 810082c:	8b 45 08             	mov    0x8(%ebp),%eax
 810082f:	83 c2 0c             	add    $0xc,%edx
 8100832:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8100836:	89 c2                	mov    %eax,%edx
 8100838:	8b 45 0c             	mov    0xc(%ebp),%eax
 810083b:	66 89 50 18          	mov    %dx,0x18(%eax)
 810083f:	8b 45 08             	mov    0x8(%ebp),%eax
 8100842:	8b 40 04             	mov    0x4(%eax),%eax
 8100845:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810084c:	00 
 810084d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8100850:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100854:	89 04 24             	mov    %eax,(%esp)
 8100857:	e8 f8 3e 00 00       	call   8104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>
 810085c:	c9                   	leave
 810085d:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGRequest @ 0x81007e8

/* WongWork::IPG::CIPGHelper::IPGRequest(WongWork::IPG::SIPGData*) */

void __thiscall WongWork::IPG::CIPGHelper::IPGRequest(CIPGHelper *this,SIPGData *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + *(int *)(param_1 + 0x1c) * 4 + 8);
  strncpy((char *)(param_1 + 4),(char *)(this + 0x24),0x14);
  *(short *)(param_1 + 0x18) =
       (short)*(undefined4 *)(this + (*(int *)(param_1 + 0x1c) + 0xc) * 4 + 8);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),param_1,true);
  return;
}

```

---

## IPGResult

```asm
// === 0810085e WongWork::IPG::CIPGHelper::IPGResult  [0x0810085e-0x8100a2d] ===
 810085e:	55                   	push   %ebp
 810085f:	89 e5                	mov    %esp,%ebp
 8100861:	56                   	push   %esi
 8100862:	53                   	push   %ebx
 8100863:	83 ec 20             	sub    $0x20,%esp
 8100866:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 810086b:	c7 44 24 08 96 01 00 	movl   $0x196,0x8(%esp)
 8100872:	00 
 8100873:	c7 44 24 04 48 14 b4 	movl   $0x8b41448,0x4(%esp)
 810087a:	08 
 810087b:	89 04 24             	mov    %eax,(%esp)
 810087e:	e8 03 f2 18 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8100883:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810088a:	00 
 810088b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810088f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100892:	89 04 24             	mov    %eax,(%esp)
 8100895:	e8 8c 83 fc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 810089a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810089d:	89 04 24             	mov    %eax,(%esp)
 81008a0:	e8 a1 83 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81008a5:	c7 44 24 04 48 00 00 	movl   $0x48,0x4(%esp)
 81008ac:	00 
 81008ad:	89 04 24             	mov    %eax,(%esp)
 81008b0:	e8 a1 83 fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81008b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81008b8:	89 04 24             	mov    %eax,(%esp)
 81008bb:	e8 86 83 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81008c0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81008c7:	ff 
 81008c8:	89 04 24             	mov    %eax,(%esp)
 81008cb:	e8 86 83 fc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81008d0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81008d4:	0f 84 ab 00 00 00    	je     8100985 <_ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_+0x127>
 81008da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81008dd:	8d 50 28             	lea    0x28(%eax),%edx
 81008e0:	8b 45 10             	mov    0x10(%ebp),%eax
 81008e3:	83 c0 28             	add    $0x28,%eax
 81008e6:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 81008ed:	00 
 81008ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 81008f2:	89 04 24             	mov    %eax,(%esp)
 81008f5:	e8 a6 cf f7 ff       	call   807d8a0 <memcpy@plt>
 81008fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81008fd:	8b 50 20             	mov    0x20(%eax),%edx
 8100900:	8b 45 10             	mov    0x10(%ebp),%eax
 8100903:	89 50 20             	mov    %edx,0x20(%eax)
 8100906:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100909:	8b 90 d8 02 00 00    	mov    0x2d8(%eax),%edx
 810090f:	8b 45 10             	mov    0x10(%ebp),%eax
 8100912:	89 90 d8 02 00 00    	mov    %edx,0x2d8(%eax)
 8100918:	8b 45 0c             	mov    0xc(%ebp),%eax
 810091b:	8b 50 1c             	mov    0x1c(%eax),%edx
 810091e:	8b 45 10             	mov    0x10(%ebp),%eax
 8100921:	89 50 1c             	mov    %edx,0x1c(%eax)
 8100924:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100927:	89 04 24             	mov    %eax,(%esp)
 810092a:	e8 17 83 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 810092f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8100936:	00 
 8100937:	89 04 24             	mov    %eax,(%esp)
 810093a:	e8 c5 06 00 00       	call   8101004 <_ZN12CStreamGuardlsEc>
 810093f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100942:	89 04 24             	mov    %eax,(%esp)
 8100945:	e8 04 83 fc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 810094a:	c7 44 24 08 dc 02 00 	movl   $0x2dc,0x8(%esp)
 8100951:	00 
 8100952:	8b 55 10             	mov    0x10(%ebp),%edx
 8100955:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100959:	89 04 24             	mov    %eax,(%esp)
 810095c:	e8 f1 dc fd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8100961:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100964:	89 04 24             	mov    %eax,(%esp)
 8100967:	e8 e2 82 fc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 810096c:	c7 44 24 08 dc 02 00 	movl   $0x2dc,0x8(%esp)
 8100973:	00 
 8100974:	8b 55 0c             	mov    0xc(%ebp),%edx
 8100977:	89 54 24 04          	mov    %edx,0x4(%esp)
 810097b:	89 04 24             	mov    %eax,(%esp)
 810097e:	e8 cf dc fd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8100983:	eb 3d                	jmp    81009c2 <_ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_+0x164>
 8100985:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100988:	89 04 24             	mov    %eax,(%esp)
 810098b:	e8 b6 82 fc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8100990:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8100997:	00 
 8100998:	89 04 24             	mov    %eax,(%esp)
 810099b:	e8 64 06 00 00       	call   8101004 <_ZN12CStreamGuardlsEc>
 81009a0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81009a3:	89 04 24             	mov    %eax,(%esp)
 81009a6:	e8 a3 82 fc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81009ab:	c7 44 24 08 dc 02 00 	movl   $0x2dc,0x8(%esp)
 81009b2:	00 
 81009b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81009b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81009ba:	89 04 24             	mov    %eax,(%esp)
 81009bd:	e8 90 dc fd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 81009c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81009c5:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 81009c9:	84 c0                	test   %al,%al
 81009cb:	74 1e                	je     81009eb <_ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_+0x18d>
 81009cd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81009d2:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81009d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81009d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81009e0:	00 
 81009e1:	89 04 24             	mov    %eax,(%esp)
 81009e4:	e8 f5 05 47 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81009e9:	eb 31                	jmp    8100a1c <_ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_+0x1be>
 81009eb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81009f0:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81009f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81009f7:	89 04 24             	mov    %eax,(%esp)
 81009fa:	e8 81 06 00 00       	call   8101080 <_ZN10StreamPool4FreeER12CStreamGuard>
 81009ff:	eb 1b                	jmp    8100a1c <_ZN8WongWork3IPG10CIPGHelper9IPGResultEPNS0_8SIPGDataES3_+0x1be>
 8100a01:	89 d3                	mov    %edx,%ebx
 8100a03:	89 c6                	mov    %eax,%esi
 8100a05:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100a08:	89 04 24             	mov    %eax,(%esp)
 8100a0b:	e8 c2 be 51 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8100a10:	89 f0                	mov    %esi,%eax
 8100a12:	89 da                	mov    %ebx,%edx
 8100a14:	89 04 24             	mov    %eax,(%esp)
 8100a17:	e8 34 2d 9e 00       	call   8ae3750 <_Unwind_Resume>
 8100a1c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8100a1f:	89 04 24             	mov    %eax,(%esp)
 8100a22:	e8 ab be 51 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8100a27:	83 c4 20             	add    $0x20,%esp
 8100a2a:	5b                   	pop    %ebx
 8100a2b:	5e                   	pop    %esi
 8100a2c:	5d                   	pop    %ebp
 8100a2d:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::IPGResult @ 0x810085e

/* WongWork::IPG::CIPGHelper::IPGResult(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGResult(CIPGHelper *this,SIPGData *param_1,SIPGData *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"IPGHelper.cpp",0x196);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 081008b0 to 081009fe has its CatchHandler @ 08100a01 */
  CStreamGuard::operator<<(pCVar2,0x48);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  if (param_2 == (SIPGData *)0x0) {
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,'\0');
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_1,0x2dc);
  }
  else {
    memcpy(param_2 + 0x28,param_1 + 0x28,0x41);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x2d8) = *(undefined4 *)(param_1 + 0x2d8);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar2,'\x01');
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_2,0x2dc);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
    CStreamGuard::put_binary(pCVar2,param_1,0x2dc);
  }
  if (param_1[0x24] == (SIPGData)0x0) {
    StreamPool::Free(GlobalData::s_stream_pool,local_14);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  }
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## Initialize

```asm
// === 08100b3e WongWork::IPG::CIPGHelper::Initialize  [0x08100b3e-0x8100c91] ===
 8100b3e:	55                   	push   %ebp
 8100b3f:	89 e5                	mov    %esp,%ebp
 8100b41:	57                   	push   %edi
 8100b42:	56                   	push   %esi
 8100b43:	53                   	push   %ebx
 8100b44:	83 ec 1c             	sub    $0x1c,%esp
 8100b47:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b4a:	8b 40 04             	mov    0x4(%eax),%eax
 8100b4d:	85 c0                	test   %eax,%eax
 8100b4f:	74 0b                	je     8100b5c <_ZN8WongWork3IPG10CIPGHelper10InitializeEjj+0x1e>
 8100b51:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b54:	89 04 24             	mov    %eax,(%esp)
 8100b57:	e8 36 01 00 00       	call   8100c92 <_ZN8WongWork3IPG10CIPGHelper8FinalizeEv>
 8100b5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b5f:	c7 40 08 b0 02 00 00 	movl   $0x2b0,0x8(%eax)
 8100b66:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b69:	c7 40 0c cb 01 00 00 	movl   $0x1cb,0xc(%eax)
 8100b70:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b73:	c7 40 10 fc 01 00 00 	movl   $0x1fc,0x10(%eax)
 8100b7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b7d:	c7 40 14 d4 01 00 00 	movl   $0x1d4,0x14(%eax)
 8100b84:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b87:	c7 40 18 99 00 00 00 	movl   $0x99,0x18(%eax)
 8100b8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b91:	c7 40 1c d4 01 00 00 	movl   $0x1d4,0x1c(%eax)
 8100b98:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b9b:	c7 40 20 90 00 00 00 	movl   $0x90,0x20(%eax)
 8100ba2:	e8 da b5 fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8100ba7:	05 b8 02 00 00       	add    $0x2b8,%eax
 8100bac:	0f b6 00             	movzbl (%eax),%eax
 8100baf:	84 c0                	test   %al,%al
 8100bb1:	0f 94 c0             	sete   %al
 8100bb4:	84 c0                	test   %al,%al
 8100bb6:	74 0a                	je     8100bc2 <_ZN8WongWork3IPG10CIPGHelper10InitializeEjj+0x84>
 8100bb8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8100bbd:	e9 c7 00 00 00       	jmp    8100c89 <_ZN8WongWork3IPG10CIPGHelper10InitializeEjj+0x14b>
 8100bc2:	e8 ba b5 fc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8100bc7:	05 b8 02 00 00       	add    $0x2b8,%eax
 8100bcc:	8b 55 08             	mov    0x8(%ebp),%edx
 8100bcf:	83 c2 24             	add    $0x24,%edx
 8100bd2:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8100bd9:	00 
 8100bda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100bde:	89 14 24             	mov    %edx,(%esp)
 8100be1:	e8 ea cc f7 ff       	call   807d8d0 <strncpy@plt>
 8100be6:	8b 45 08             	mov    0x8(%ebp),%eax
 8100be9:	c7 40 38 3c 5a 00 00 	movl   $0x5a3c,0x38(%eax)
 8100bf0:	8b 45 08             	mov    0x8(%ebp),%eax
 8100bf3:	c7 40 3c a0 5a 00 00 	movl   $0x5aa0,0x3c(%eax)
 8100bfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8100bfd:	c7 40 40 04 5b 00 00 	movl   $0x5b04,0x40(%eax)
 8100c04:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c07:	c7 40 44 68 5b 00 00 	movl   $0x5b68,0x44(%eax)
 8100c0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c11:	c7 40 48 cc 5b 00 00 	movl   $0x5bcc,0x48(%eax)
 8100c18:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c1b:	c7 40 4c 2e 23 00 00 	movl   $0x232e,0x4c(%eax)
 8100c22:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c25:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 8100c2c:	c7 04 24 f0 00 00 00 	movl   $0xf0,(%esp)
 8100c33:	e8 18 38 62 00       	call   8724450 <_Znwj>
 8100c38:	89 c3                	mov    %eax,%ebx
 8100c3a:	8b 55 08             	mov    0x8(%ebp),%edx
 8100c3d:	89 d8                	mov    %ebx,%eax
 8100c3f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100c43:	89 04 24             	mov    %eax,(%esp)
 8100c46:	e8 bd 04 00 00       	call   8101108 <_ZN8WongWork3IPG7CIPGMgrC1EPNS0_19IIPGHelperInterfaceE>
 8100c4b:	eb 18                	jmp    8100c65 <_ZN8WongWork3IPG10CIPGHelper10InitializeEjj+0x127>
 8100c4d:	89 d6                	mov    %edx,%esi
 8100c4f:	89 c7                	mov    %eax,%edi
 8100c51:	89 1c 24             	mov    %ebx,(%esp)
 8100c54:	e8 97 38 62 00       	call   87244f0 <_ZdlPv>
 8100c59:	89 f8                	mov    %edi,%eax
 8100c5b:	89 f2                	mov    %esi,%edx
 8100c5d:	89 04 24             	mov    %eax,(%esp)
 8100c60:	e8 eb 2a 9e 00       	call   8ae3750 <_Unwind_Resume>
 8100c65:	89 da                	mov    %ebx,%edx
 8100c67:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c6a:	89 50 04             	mov    %edx,0x4(%eax)
 8100c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8100c70:	8b 40 04             	mov    0x4(%eax),%eax
 8100c73:	8b 55 10             	mov    0x10(%ebp),%edx
 8100c76:	89 54 24 08          	mov    %edx,0x8(%esp)
 8100c7a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8100c7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100c81:	89 04 24             	mov    %eax,(%esp)
 8100c84:	e8 0b 38 00 00       	call   8104494 <_ZN8WongWork3IPG7CIPGMgr10InitializeEjj>
 8100c89:	83 c4 1c             	add    $0x1c,%esp
 8100c8c:	5b                   	pop    %ebx
 8100c8d:	5e                   	pop    %esi
 8100c8e:	5f                   	pop    %edi
 8100c8f:	5d                   	pop    %ebp
 8100c90:	c3                   	ret
 8100c91:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::Initialize @ 0x8100b3e

/* WongWork::IPG::CIPGHelper::Initialize(unsigned int, unsigned int) */

undefined4 __thiscall
WongWork::IPG::CIPGHelper::Initialize(CIPGHelper *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  CIPGMgr *this_00;
  
  if (*(int *)(this + 4) != 0) {
    Finalize(this);
  }
  *(undefined4 *)(this + 8) = 0x2b0;
  *(undefined4 *)(this + 0xc) = 0x1cb;
  *(undefined4 *)(this + 0x10) = 0x1fc;
  *(undefined4 *)(this + 0x14) = 0x1d4;
  *(undefined4 *)(this + 0x18) = 0x99;
  *(undefined4 *)(this + 0x1c) = 0x1d4;
  *(undefined4 *)(this + 0x20) = 0x90;
  iVar1 = G_CEnvironment();
  if (*(char *)(iVar1 + 0x2b8) == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = G_CEnvironment();
    strncpy((char *)(this + 0x24),(char *)(iVar1 + 0x2b8),0x14);
    *(undefined4 *)(this + 0x38) = 0x5a3c;
    *(undefined4 *)(this + 0x3c) = 0x5aa0;
    *(undefined4 *)(this + 0x40) = 0x5b04;
    *(undefined4 *)(this + 0x44) = 0x5b68;
    *(undefined4 *)(this + 0x48) = 0x5bcc;
    *(undefined4 *)(this + 0x4c) = 0x232e;
    *(undefined4 *)(this + 0x50) = 0;
    this_00 = operator_new(0xf0);
                    /* try { // try from 08100c46 to 08100c4a has its CatchHandler @ 08100c4d */
    CIPGMgr::CIPGMgr(this_00,(IIPGHelperInterface *)this);
    *(CIPGMgr **)(this + 4) = this_00;
    uVar2 = CIPGMgr::Initialize(*(CIPGMgr **)(this + 4),param_1,param_2);
  }
  return uVar2;
}

```

---

## _SetIPGData

```asm
// === 08100a2e WongWork::IPG::CIPGHelper::_SetIPGData  [0x08100a2e-0x8100b3d] ===
 8100a2e:	55                   	push   %ebp
 8100a2f:	89 e5                	mov    %esp,%ebp
 8100a31:	83 ec 38             	sub    $0x38,%esp
 8100a34:	8b 45 14             	mov    0x14(%ebp),%eax
 8100a37:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8100a3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8100a3d:	8b 40 04             	mov    0x4(%eax),%eax
 8100a40:	89 04 24             	mov    %eax,(%esp)
 8100a43:	e8 24 3c 00 00       	call   810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>
 8100a48:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8100a4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100a4e:	89 04 24             	mov    %eax,(%esp)
 8100a51:	e8 18 99 fd ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8100a56:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8100a5d:	00 
 8100a5e:	89 04 24             	mov    %eax,(%esp)
 8100a61:	e8 e5 85 00 00       	call   810904b <_Z14NumberToStringji>
 8100a66:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100a69:	83 c2 28             	add    $0x28,%edx
 8100a6c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8100a70:	c7 44 24 08 56 14 b4 	movl   $0x8b41456,0x8(%esp)
 8100a77:	08 
 8100a78:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8100a7f:	00 
 8100a80:	89 14 24             	mov    %edx,(%esp)
 8100a83:	e8 94 bd 48 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8100a88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100a8b:	89 04 24             	mov    %eax,(%esp)
 8100a8e:	e8 df 05 00 00       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8100a93:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8100a96:	83 c2 3c             	add    $0x3c,%edx
 8100a99:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8100aa0:	00 
 8100aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8100aa5:	89 14 24             	mov    %edx,(%esp)
 8100aa8:	e8 23 ce f7 ff       	call   807d8d0 <strncpy@plt>
 8100aad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100ab0:	83 c0 64             	add    $0x64,%eax
 8100ab3:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8100aba:	00 
 8100abb:	c7 44 24 04 59 14 b4 	movl   $0x8b41459,0x4(%esp)
 8100ac2:	08 
 8100ac3:	89 04 24             	mov    %eax,(%esp)
 8100ac6:	e8 d5 cd f7 ff       	call   807d8a0 <memcpy@plt>
 8100acb:	8b 55 10             	mov    0x10(%ebp),%edx
 8100ace:	8b 45 08             	mov    0x8(%ebp),%eax
 8100ad1:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8100ad5:	89 c2                	mov    %eax,%edx
 8100ad7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100ada:	89 10                	mov    %edx,(%eax)
 8100adc:	8b 45 08             	mov    0x8(%ebp),%eax
 8100adf:	8d 50 24             	lea    0x24(%eax),%edx
 8100ae2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100ae5:	83 c0 04             	add    $0x4,%eax
 8100ae8:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8100aef:	00 
 8100af0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8100af4:	89 04 24             	mov    %eax,(%esp)
 8100af7:	e8 d4 cd f7 ff       	call   807d8d0 <strncpy@plt>
 8100afc:	8b 55 10             	mov    0x10(%ebp),%edx
 8100aff:	8b 45 08             	mov    0x8(%ebp),%eax
 8100b02:	83 c2 0c             	add    $0xc,%edx
 8100b05:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8100b09:	89 c2                	mov    %eax,%edx
 8100b0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100b0e:	66 89 50 18          	mov    %dx,0x18(%eax)
 8100b12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8100b15:	89 04 24             	mov    %eax,(%esp)
 8100b18:	e8 79 81 fc ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8100b1d:	89 c2                	mov    %eax,%edx
 8100b1f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100b22:	89 50 20             	mov    %edx,0x20(%eax)
 8100b25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100b28:	8b 55 10             	mov    0x10(%ebp),%edx
 8100b2b:	89 50 1c             	mov    %edx,0x1c(%eax)
 8100b2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100b31:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8100b35:	88 50 24             	mov    %dl,0x24(%eax)
 8100b38:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8100b3b:	c9                   	leave
 8100b3c:	c3                   	ret
 8100b3d:	90                   	nop

```

```c
// WongWork::IPG::CIPGHelper::_SetIPGData @ 0x8100a2e

/* WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool) */

undefined4 * __thiscall
WongWork::IPG::CIPGHelper::_SetIPGData
          (CIPGHelper *this,CUser *param_1,int param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char *__src;
  
  puVar1 = (undefined4 *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  uVar2 = CUser::get_acc_id(param_1);
  uVar3 = NumberToString(uVar2,0);
  OS_API::snprintf((char *)(puVar1 + 10),0x14,"%s",uVar3);
  __src = (char *)CUser::get_acc_name(param_1);
  strncpy((char *)(puVar1 + 0xf),__src,0x28);
  memcpy(puVar1 + 0x19,&DAT_08b41459,5);
  *puVar1 = *(undefined4 *)(this + param_3 * 4 + 8);
  strncpy((char *)(puVar1 + 1),(char *)(this + 0x24),0x14);
  *(short *)(puVar1 + 6) = (short)*(undefined4 *)(this + (param_3 + 0xc) * 4 + 8);
  uVar3 = CUser::GetUID(param_1);
  puVar1[8] = uVar3;
  puVar1[7] = param_3;
  *(undefined1 *)(puVar1 + 9) = param_4;
  return puVar1;
}

```

---

## getIPGStatus

```asm
// === 080ffae0 WongWork::IPG::CIPGHelper::getIPGStatus  [0x080ffae0-0x80ffb09] ===
 80ffae0:	55                   	push   %ebp
 80ffae1:	89 e5                	mov    %esp,%ebp
 80ffae3:	83 ec 18             	sub    $0x18,%esp
 80ffae6:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffae9:	8b 40 04             	mov    0x4(%eax),%eax
 80ffaec:	85 c0                	test   %eax,%eax
 80ffaee:	74 17                	je     80ffb07 <_ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x27>
 80ffaf0:	8b 45 08             	mov    0x8(%ebp),%eax
 80ffaf3:	8b 40 04             	mov    0x4(%eax),%eax
 80ffaf6:	8b 55 0c             	mov    0xc(%ebp),%edx
 80ffaf9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ffafd:	89 04 24             	mov    %eax,(%esp)
 80ffb00:	e8 a9 15 00 00       	call   81010ae <_ZN8WongWork3IPG7CIPGMgr12getIPGStatusERNS0_13stIPGStatus_tE>
 80ffb05:	eb 01                	jmp    80ffb08 <_ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x28>
 80ffb07:	90                   	nop
 80ffb08:	c9                   	leave
 80ffb09:	c3                   	ret

```

```c
// WongWork::IPG::CIPGHelper::getIPGStatus @ 0x80ffae0

/* WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&) */

void __thiscall WongWork::IPG::CIPGHelper::getIPGStatus(CIPGHelper *this,stIPGStatus_t *param_1)

{
  if (*(int *)(this + 4) != 0) {
    CIPGMgr::getIPGStatus(*(CIPGMgr **)(this + 4),param_1);
  }
  return;
}

```

