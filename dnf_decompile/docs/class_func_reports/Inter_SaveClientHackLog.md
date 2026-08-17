# Inter_SaveClientHackLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d1ab6 Inter_SaveClientHackLog::dispatch_sig  [0x084d1ab6-0x84d1c89] ===
 84d1ab6:	55                   	push   %ebp
 84d1ab7:	89 e5                	mov    %esp,%ebp
 84d1ab9:	53                   	push   %ebx
 84d1aba:	83 ec 44             	sub    $0x44,%esp
 84d1abd:	8b 45 10             	mov    0x10(%ebp),%eax
 84d1ac0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d1ac3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1ac6:	8b 18                	mov    (%eax),%ebx
 84d1ac8:	e8 da 88 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d1acd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1ad1:	89 04 24             	mov    %eax,(%esp)
 84d1ad4:	e8 4b 31 1f 00       	call   86c4c24 <_ZN9GameWorld12find_sessionEj>
 84d1ad9:	89 c3                	mov    %eax,%ebx
 84d1adb:	e8 ae a6 bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d1ae0:	c7 44 24 08 cd 30 00 	movl   $0x30cd,0x8(%esp)
 84d1ae7:	00 
 84d1ae8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d1aec:	89 04 24             	mov    %eax,(%esp)
 84d1aef:	e8 b0 2c dc ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 84d1af4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d1af7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84d1afb:	75 0a                	jne    84d1b07 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x51>
 84d1afd:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1b02:	e9 7d 01 00 00       	jmp    84d1c84 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x1ce>
 84d1b07:	e8 da 0a c9 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 84d1b0c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d1b13:	00 
 84d1b14:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84d1b1b:	00 
 84d1b1c:	89 04 24             	mov    %eax,(%esp)
 84d1b1f:	e8 3a cc c9 ff       	call   816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>
 84d1b24:	83 f0 01             	xor    $0x1,%eax
 84d1b27:	84 c0                	test   %al,%al
 84d1b29:	74 0a                	je     84d1b35 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x7f>
 84d1b2b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1b30:	e9 4f 01 00 00       	jmp    84d1c84 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x1ce>
 84d1b35:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d1b3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1b3f:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84d1b43:	0f b7 c0             	movzwl %ax,%eax
 84d1b46:	3d f7 01 00 00       	cmp    $0x1f7,%eax
 84d1b4b:	74 36                	je     84d1b83 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0xcd>
 84d1b4d:	3d f7 01 00 00       	cmp    $0x1f7,%eax
 84d1b52:	7f 09                	jg     84d1b5d <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0xa7>
 84d1b54:	3d 93 01 00 00       	cmp    $0x193,%eax
 84d1b59:	74 3e                	je     84d1b99 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0xe3>
 84d1b5b:	eb 71                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1b5d:	3d 26 03 00 00       	cmp    $0x326,%eax
 84d1b62:	74 4d                	je     84d1bb1 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0xfb>
 84d1b64:	3d ba 03 00 00       	cmp    $0x3ba,%eax
 84d1b69:	75 63                	jne    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1b6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1b6e:	8b 40 0e             	mov    0xe(%eax),%eax
 84d1b71:	3d b0 04 00 00       	cmp    $0x4b0,%eax
 84d1b76:	7e 4f                	jle    84d1bc7 <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x111>
 84d1b78:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d1b7b:	83 c0 14             	add    $0x14,%eax
 84d1b7e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d1b81:	eb 4b                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1b83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1b86:	8b 40 0e             	mov    0xe(%eax),%eax
 84d1b89:	83 f8 32             	cmp    $0x32,%eax
 84d1b8c:	7e 3c                	jle    84d1bca <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x114>
 84d1b8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d1b91:	83 c0 28             	add    $0x28,%eax
 84d1b94:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d1b97:	eb 35                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1b99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1b9c:	8b 40 0e             	mov    0xe(%eax),%eax
 84d1b9f:	3d fa 00 00 00       	cmp    $0xfa,%eax
 84d1ba4:	7e 27                	jle    84d1bcd <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x117>
 84d1ba6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d1ba9:	83 c0 14             	add    $0x14,%eax
 84d1bac:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d1baf:	eb 1d                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1bb1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1bb4:	8b 40 0e             	mov    0xe(%eax),%eax
 84d1bb7:	83 f8 19             	cmp    $0x19,%eax
 84d1bba:	7e 12                	jle    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1bbc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d1bbf:	83 c0 1e             	add    $0x1e,%eax
 84d1bc2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d1bc5:	eb 07                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1bc7:	90                   	nop
 84d1bc8:	eb 04                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1bca:	90                   	nop
 84d1bcb:	eb 01                	jmp    84d1bce <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x118>
 84d1bcd:	90                   	nop
 84d1bce:	c7 45 e8 64 00 00 00 	movl   $0x64,-0x18(%ebp)
 84d1bd5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1bd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1bdc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d1bdf:	89 04 24             	mov    %eax,(%esp)
 84d1be2:	e8 27 dd c0 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84d1be7:	8b 00                	mov    (%eax),%eax
 84d1be9:	ba 64 00 00 00       	mov    $0x64,%edx
 84d1bee:	89 d1                	mov    %edx,%ecx
 84d1bf0:	29 c1                	sub    %eax,%ecx
 84d1bf2:	89 c8                	mov    %ecx,%eax
 84d1bf4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d1bf7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1bfa:	89 04 24             	mov    %eax,(%esp)
 84d1bfd:	e8 26 af 01 00       	call   84ecb28 <_ZN5CUser14getStdDropRateEv>
 84d1c02:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d1c05:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84d1c08:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1c0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1c0f:	89 04 24             	mov    %eax,(%esp)
 84d1c12:	e8 f7 dc c0 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84d1c17:	8b 00                	mov    (%eax),%eax
 84d1c19:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d1c1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1c1f:	89 04 24             	mov    %eax,(%esp)
 84d1c22:	e8 01 af 01 00       	call   84ecb28 <_ZN5CUser14getStdDropRateEv>
 84d1c27:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d1c2a:	39 d0                	cmp    %edx,%eax
 84d1c2c:	0f 95 c0             	setne  %al
 84d1c2f:	84 c0                	test   %al,%al
 84d1c31:	74 4c                	je     84d1c7f <_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci+0x1c9>
 84d1c33:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84d1c36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1c39:	89 04 24             	mov    %eax,(%esp)
 84d1c3c:	e8 2d 87 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d1c41:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84d1c48:	00 
 84d1c49:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 84d1c50:	00 
 84d1c51:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d1c55:	c7 44 24 08 65 00 00 	movl   $0x65,0x8(%esp)
 84d1c5c:	00 
 84d1c5d:	c7 44 24 04 41 9c 00 	movl   $0x9c41,0x4(%esp)
 84d1c64:	00 
 84d1c65:	89 04 24             	mov    %eax,(%esp)
 84d1c68:	e8 ad 63 f5 ff       	call   842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>
 84d1c6d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d1c70:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1c74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1c77:	89 04 24             	mov    %eax,(%esp)
 84d1c7a:	e8 dd 54 db ff       	call   828715c <_ZN5CUser14setStdDropRateEi>
 84d1c7f:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1c84:	83 c4 44             	add    $0x44,%esp
 84d1c87:	5b                   	pop    %ebx
 84d1c88:	5d                   	pop    %ebp
 84d1c89:	c3                   	ret

```

```c
// Inter_SaveClientHackLog::dispatch_sig @ 0x84d1ab6

/* Inter_SaveClientHackLog::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SaveClientHackLog::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ServiceRestrictManager *pSVar6;
  int *piVar7;
  int local_20 [3];
  int local_14;
  CUser *local_10;
  
  local_14 = param_3;
  uVar3 = G_GameWorld();
  iVar4 = GameWorld::find_session(uVar3);
  iVar5 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar5,iVar4);
  if (local_10 != (CUser *)0x0) {
    pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar6,3,1);
    if (cVar2 == '\x01') {
      local_20[0] = 0;
      uVar1 = *(ushort *)(local_14 + 8);
      if (uVar1 == 0x1f7) {
        if (0x32 < *(int *)(local_14 + 0xe)) {
          local_20[0] = 0x28;
        }
      }
      else if (uVar1 < 0x1f8) {
        if ((uVar1 == 0x193) && (0xfa < *(int *)(local_14 + 0xe))) {
          local_20[0] = 0x14;
        }
      }
      else if (uVar1 == 0x326) {
        if (0x19 < *(int *)(local_14 + 0xe)) {
          local_20[0] = 0x1e;
        }
      }
      else if ((uVar1 == 0x3ba) && (0x4b0 < *(int *)(local_14 + 0xe))) {
        local_20[0] = 0x14;
      }
      local_20[1] = 100;
      piVar7 = std::min<int>(local_20 + 1,local_20);
      local_20[0] = 100 - *piVar7;
      local_20[2] = CUser::getStdDropRate(local_10);
      piVar7 = std::min<int>(local_20,local_20 + 2);
      local_20[0] = *piVar7;
      iVar5 = CUser::getStdDropRate(local_10);
      iVar4 = local_20[0];
      if (iVar5 != local_20[0]) {
        uVar3 = CUser::get_acc_id(local_10);
        DB_SaveUserHandicap::makeRequest(uVar3,0x9c41,0x65,iVar4,3,0);
        CUser::setStdDropRate(local_10,local_20[0]);
      }
    }
  }
  return 0;
}

```

