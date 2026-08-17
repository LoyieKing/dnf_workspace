# DisPatcher_DropItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c2d9a DisPatcher_DropItem::check_error  [0x081c2d9a-0x81c2f93] ===
 81c2d9a:	55                   	push   %ebp
 81c2d9b:	89 e5                	mov    %esp,%ebp
 81c2d9d:	53                   	push   %ebx
 81c2d9e:	83 ec 34             	sub    $0x34,%esp
 81c2da1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2da4:	89 04 24             	mov    %eax,(%esp)
 81c2da7:	e8 86 d6 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81c2dac:	85 c0                	test   %eax,%eax
 81c2dae:	0f 94 c0             	sete   %al
 81c2db1:	84 c0                	test   %al,%al
 81c2db3:	74 0a                	je     81c2dbf <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81c2db5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c2dba:	e9 ce 01 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2dbf:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2dc2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c2dc5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2dc8:	8b 40 14             	mov    0x14(%eax),%eax
 81c2dcb:	85 c0                	test   %eax,%eax
 81c2dcd:	7f 0a                	jg     81c2dd9 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81c2dcf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c2dd4:	e9 b4 01 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2dd9:	8b 45 14             	mov    0x14(%ebp),%eax
 81c2ddc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c2ddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2de2:	89 04 24             	mov    %eax,(%esp)
 81c2de5:	e8 a2 75 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c2dea:	83 f8 0a             	cmp    $0xa,%eax
 81c2ded:	0f 94 c0             	sete   %al
 81c2df0:	84 c0                	test   %al,%al
 81c2df2:	74 0a                	je     81c2dfe <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x64>
 81c2df4:	b8 13 00 00 00       	mov    $0x13,%eax
 81c2df9:	e9 8f 01 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2dfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2e01:	89 04 24             	mov    %eax,(%esp)
 81c2e04:	e8 43 23 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c2e09:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81c2e0c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81c2e10:	74 2a                	je     81c2e3c <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81c2e12:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81c2e15:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 81c2e1b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c2e1e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c2e22:	74 18                	je     81c2e3c <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81c2e24:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c2e27:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 81c2e2e:	84 c0                	test   %al,%al
 81c2e30:	74 0a                	je     81c2e3c <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81c2e32:	b8 13 00 00 00       	mov    $0x13,%eax
 81c2e37:	e9 51 01 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2e3c:	e8 66 75 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c2e41:	89 04 24             	mov    %eax,(%esp)
 81c2e44:	e8 d5 e4 f2 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81c2e49:	84 c0                	test   %al,%al
 81c2e4b:	74 0a                	je     81c2e57 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xbd>
 81c2e4d:	b8 13 00 00 00       	mov    $0x13,%eax
 81c2e52:	e9 36 01 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2e57:	e8 8a f7 f9 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81c2e5c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81c2e63:	00 
 81c2e64:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c2e6b:	00 
 81c2e6c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c2e6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c2e73:	89 04 24             	mov    %eax,(%esp)
 81c2e76:	e8 3d b8 fa ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81c2e7b:	84 c0                	test   %al,%al
 81c2e7d:	74 14                	je     81c2e93 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xf9>
 81c2e7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c2e82:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 81c2e89:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81c2e8e:	e9 fa 00 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2e93:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2e96:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81c2e9a:	3c 01                	cmp    $0x1,%al
 81c2e9c:	74 37                	je     81c2ed5 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x13b>
 81c2e9e:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81c2ea3:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 81c2eaa:	00 
 81c2eab:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c2eae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c2eb2:	89 04 24             	mov    %eax,(%esp)
 81c2eb5:	e8 48 5b 0c 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81c2eba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c2ebd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c2ec1:	74 12                	je     81c2ed5 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x13b>
 81c2ec3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c2ec6:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 81c2ecd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2ed0:	e9 b8 00 00 00       	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2ed5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2ed8:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c2edc:	0f bf d8             	movswl %ax,%ebx
 81c2edf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2ee2:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c2ee6:	0f be c0             	movsbl %al,%eax
 81c2ee9:	89 04 24             	mov    %eax,(%esp)
 81c2eec:	e8 54 49 f3 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81c2ef1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c2ef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2ef9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2efc:	89 04 24             	mov    %eax,(%esp)
 81c2eff:	e8 3e 3a 48 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81c2f04:	84 c0                	test   %al,%al
 81c2f06:	74 07                	je     81c2f0f <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x175>
 81c2f08:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81c2f0d:	eb 7e                	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2f0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2f12:	89 04 24             	mov    %eax,(%esp)
 81c2f15:	e8 22 ce 06 00       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 81c2f1a:	84 c0                	test   %al,%al
 81c2f1c:	74 07                	je     81c2f25 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x18b>
 81c2f1e:	b8 13 00 00 00       	mov    $0x13,%eax
 81c2f23:	eb 68                	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2f25:	c7 45 ec 06 00 00 00 	movl   $0x6,-0x14(%ebp)
 81c2f2c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2f2f:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c2f33:	0f be c0             	movsbl %al,%eax
 81c2f36:	83 f8 01             	cmp    $0x1,%eax
 81c2f39:	74 07                	je     81c2f42 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1a8>
 81c2f3b:	83 f8 03             	cmp    $0x3,%eax
 81c2f3e:	74 09                	je     81c2f49 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1af>
 81c2f40:	eb 1b                	jmp    81c2f5d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1c3>
 81c2f42:	b8 17 00 00 00       	mov    $0x17,%eax
 81c2f47:	eb 44                	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2f49:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2f4c:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c2f50:	66 83 f8 09          	cmp    $0x9,%ax
 81c2f54:	7f 07                	jg     81c2f5d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1c3>
 81c2f56:	b8 17 00 00 00       	mov    $0x17,%eax
 81c2f5b:	eb 30                	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2f5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2f60:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c2f64:	84 c0                	test   %al,%al
 81c2f66:	75 20                	jne    81c2f88 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81c2f68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2f6b:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c2f6f:	66 85 c0             	test   %ax,%ax
 81c2f72:	75 14                	jne    81c2f88 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81c2f74:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c2f77:	8b 40 14             	mov    0x14(%eax),%eax
 81c2f7a:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 81c2f7f:	76 07                	jbe    81c2f88 <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1ee>
 81c2f81:	b8 46 00 00 00       	mov    $0x46,%eax
 81c2f86:	eb 05                	jmp    81c2f8d <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1f3>
 81c2f88:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2f8d:	83 c4 34             	add    $0x34,%esp
 81c2f90:	5b                   	pop    %ebx
 81c2f91:	5d                   	pop    %ebp
 81c2f92:	c3                   	ret
 81c2f93:	90                   	nop

```

```c
// DisPatcher_DropItem::check_error @ 0x81c2d9a

/* DisPatcher_DropItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_DropItem::check_error
          (DisPatcher_DropItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  GameWorld *this_00;
  ServiceRestrictManager *pSVar4;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else if (*(int *)(param_2 + 0x14) < 1) {
    iVar3 = -1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 10) {
      iVar3 = 0x13;
    }
    else {
      iVar3 = CUser::GetParty(param_1);
      if (((iVar3 == 0) || (*(int *)(iVar3 + 0xcac) == 0)) ||
         (*(char *)(*(int *)(iVar3 + 0xcac) + 0x89f) == '\0')) {
        this_00 = (GameWorld *)G_GameWorld();
        cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
        if (cVar2 == '\0') {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar2 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,1);
          if (cVar2 == '\0') {
            if ((param_2[0x18] == (MSG_BASE)0x1) ||
               (iVar3 = CSecu_ProtectionField::Check
                                  (GlobalData::s_pSecuProtectionField,param_1,0x1e), iVar3 == 0)) {
              sVar1 = *(short *)(param_2 + 0x12);
              iVar3 = GetInvenTypeFromItemSpace((int)(char)param_2[0x11]);
              cVar2 = CUser::CheckItemLock(param_1,iVar3,(int)sVar1);
              if (cVar2 == '\0') {
                cVar2 = CUser::isHackUser(param_1);
                if (cVar2 == '\0') {
                  if (param_2[0x11] == (MSG_BASE)0x1) {
                    iVar3 = 0x17;
                  }
                  else if ((param_2[0x11] == (MSG_BASE)0x3) && (*(short *)(param_2 + 0x12) < 10)) {
                    iVar3 = 0x17;
                  }
                  else if (((param_2[0x11] == (MSG_BASE)0x0) && (*(short *)(param_2 + 0x12) == 0))
                          && (1000 < *(uint *)(param_2 + 0x14))) {
                    iVar3 = 0x46;
                  }
                  else {
                    iVar3 = 0;
                  }
                }
                else {
                  iVar3 = 0x13;
                }
              }
              else {
                iVar3 = 0xd5;
              }
            }
            else {
              *(undefined4 *)(param_3 + 0xc) = 1;
            }
          }
          else {
            *(undefined4 *)(param_3 + 0xc) = 1;
            iVar3 = 0xd1;
          }
        }
        else {
          iVar3 = 0x13;
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
  }
  return iVar3;
}

```

---

## process

```asm
// === 081c2f94 DisPatcher_DropItem::process  [0x081c2f94-0x81c3253] ===
 81c2f94:	55                   	push   %ebp
 81c2f95:	89 e5                	mov    %esp,%ebp
 81c2f97:	57                   	push   %edi
 81c2f98:	56                   	push   %esi
 81c2f99:	53                   	push   %ebx
 81c2f9a:	83 ec 4c             	sub    $0x4c,%esp
 81c2f9d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2fa0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81c2fa3:	8b 45 14             	mov    0x14(%ebp),%eax
 81c2fa6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c2fa9:	8b 45 14             	mov    0x14(%ebp),%eax
 81c2fac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c2fb0:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2fb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c2fb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2fbe:	8b 45 08             	mov    0x8(%ebp),%eax
 81c2fc1:	89 04 24             	mov    %eax,(%esp)
 81c2fc4:	e8 d1 fd ff ff       	call   81c2d9a <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81c2fc9:	89 c2                	mov    %eax,%edx
 81c2fcb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c2fce:	89 50 04             	mov    %edx,0x4(%eax)
 81c2fd1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c2fd4:	8b 40 04             	mov    0x4(%eax),%eax
 81c2fd7:	85 c0                	test   %eax,%eax
 81c2fd9:	7e 17                	jle    81c2ff2 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x5e>
 81c2fdb:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c2fde:	0f b6 50 11          	movzbl 0x11(%eax),%edx
 81c2fe2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c2fe5:	88 50 08             	mov    %dl,0x8(%eax)
 81c2fe8:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2fed:	e9 5a 02 00 00       	jmp    81c324c <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b8>
 81c2ff2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c2ff5:	8b 40 04             	mov    0x4(%eax),%eax
 81c2ff8:	85 c0                	test   %eax,%eax
 81c2ffa:	79 32                	jns    81c302e <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x9a>
 81c2ffc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2fff:	89 04 24             	mov    %eax,(%esp)
 81c3002:	e8 67 73 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c3007:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81c300a:	8b 52 04             	mov    0x4(%edx),%edx
 81c300d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c3011:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c3015:	c7 44 24 04 60 5d bd 	movl   $0x8bd5d60,0x4(%esp)
 81c301c:	08 
 81c301d:	c7 04 24 cc 0d 00 00 	movl   $0xdcc,(%esp)
 81c3024:	e8 ae d8 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c3029:	e9 1e 02 00 00       	jmp    81c324c <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b8>
 81c302e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3031:	89 04 24             	mov    %eax,(%esp)
 81c3034:	e8 53 73 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3039:	83 f8 05             	cmp    $0x5,%eax
 81c303c:	0f 94 c0             	sete   %al
 81c303f:	84 c0                	test   %al,%al
 81c3041:	0f 84 a6 00 00 00    	je     81c30ed <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x159>
 81c3047:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c304a:	89 04 24             	mov    %eax,(%esp)
 81c304d:	e8 fc cd 06 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81c3052:	0f bf d8             	movswl %ax,%ebx
 81c3055:	e8 34 91 f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c305a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c305e:	89 04 24             	mov    %eax,(%esp)
 81c3061:	e8 cc 1e 0d 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81c3066:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c3069:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 81c306d:	0f 84 d4 01 00 00    	je     81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c3073:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3076:	8b 70 14             	mov    0x14(%eax),%esi
 81c3079:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c307c:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c3080:	0f bf d8             	movswl %ax,%ebx
 81c3083:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3086:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c308a:	0f be c8             	movsbl %al,%ecx
 81c308d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3090:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81c3094:	0f bf d0             	movswl %ax,%edx
 81c3097:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c309a:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c309e:	98                   	cwtl
 81c309f:	89 74 24 18          	mov    %esi,0x18(%esp)
 81c30a3:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81c30a7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81c30ab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c30af:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c30b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c30b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c30ba:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81c30bd:	89 04 24             	mov    %eax,(%esp)
 81c30c0:	e8 2f 33 3e 00       	call   85a63f4 <_ZN6CParty9drop_itemEP5CUseriicii>
 81c30c5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81c30c8:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81c30cc:	0f 8e 75 01 00 00    	jle    81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c30d2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c30d5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c30d8:	89 50 04             	mov    %edx,0x4(%eax)
 81c30db:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c30de:	0f b6 50 11          	movzbl 0x11(%eax),%edx
 81c30e2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c30e5:	88 50 08             	mov    %dl,0x8(%eax)
 81c30e8:	e9 5a 01 00 00       	jmp    81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c30ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c30f0:	89 04 24             	mov    %eax,(%esp)
 81c30f3:	e8 94 72 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c30f8:	83 f8 0c             	cmp    $0xc,%eax
 81c30fb:	0f 94 c0             	sete   %al
 81c30fe:	84 c0                	test   %al,%al
 81c3100:	74 76                	je     81c3178 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x1e4>
 81c3102:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3105:	89 04 24             	mov    %eax,(%esp)
 81c3108:	e8 13 21 49 00       	call   8655220 <_ZN5CUser12getBossTowerEv>
 81c310d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c3110:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81c3114:	0f 84 2d 01 00 00    	je     81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c311a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c311d:	8b 00                	mov    (%eax),%eax
 81c311f:	83 c0 20             	add    $0x20,%eax
 81c3122:	8b 38                	mov    (%eax),%edi
 81c3124:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3127:	8b 70 14             	mov    0x14(%eax),%esi
 81c312a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c312d:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c3131:	0f bf d8             	movswl %ax,%ebx
 81c3134:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3137:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c313b:	0f be c8             	movsbl %al,%ecx
 81c313e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3141:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81c3145:	0f bf d0             	movswl %ax,%edx
 81c3148:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c314b:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c314f:	98                   	cwtl
 81c3150:	89 74 24 18          	mov    %esi,0x18(%esp)
 81c3154:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81c3158:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81c315c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c3160:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3164:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3167:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c316b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c316e:	89 04 24             	mov    %eax,(%esp)
 81c3171:	ff d7                	call   *%edi
 81c3173:	e9 cf 00 00 00       	jmp    81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c3178:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c317b:	89 04 24             	mov    %eax,(%esp)
 81c317e:	e8 09 72 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c3183:	83 f8 08             	cmp    $0x8,%eax
 81c3186:	0f 94 c0             	sete   %al
 81c3189:	84 c0                	test   %al,%al
 81c318b:	0f 84 9f 00 00 00    	je     81c3230 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x29c>
 81c3191:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3194:	89 04 24             	mov    %eax,(%esp)
 81c3197:	e8 e8 cc 06 00       	call   822fe84 <_ZN5CUser15GetWarRoomIndexEv>
 81c319c:	0f bf d8             	movswl %ax,%ebx
 81c319f:	e8 ea 8f f0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 81c31a4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81c31a8:	89 04 24             	mov    %eax,(%esp)
 81c31ab:	e8 20 f4 0d 00       	call   82a25d0 <_ZN12CGameManager10GetWarRoomEi>
 81c31b0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c31b3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81c31b7:	0f 84 8a 00 00 00    	je     81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c31bd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c31c0:	8b 70 14             	mov    0x14(%eax),%esi
 81c31c3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c31c6:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c31ca:	0f bf d8             	movswl %ax,%ebx
 81c31cd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c31d0:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c31d4:	0f be c8             	movsbl %al,%ecx
 81c31d7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c31da:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81c31de:	0f bf d0             	movswl %ax,%edx
 81c31e1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c31e4:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c31e8:	98                   	cwtl
 81c31e9:	89 74 24 18          	mov    %esi,0x18(%esp)
 81c31ed:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81c31f1:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81c31f5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c31f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c31fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3200:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3204:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c3207:	89 04 24             	mov    %eax,(%esp)
 81c320a:	e8 ed c3 4f 00       	call   86bf5fc <_ZN7WarRoom14HandleItemDropEP5CUseriicii>
 81c320f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c3212:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81c3216:	7e 2f                	jle    81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c3218:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c321b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c321e:	89 50 04             	mov    %edx,0x4(%eax)
 81c3221:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c3224:	0f b6 50 11          	movzbl 0x11(%eax),%edx
 81c3228:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c322b:	88 50 08             	mov    %dl,0x8(%eax)
 81c322e:	eb 17                	jmp    81c3247 <_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase+0x2b3>
 81c3230:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c3233:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81c323a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c323d:	0f b6 50 11          	movzbl 0x11(%eax),%edx
 81c3241:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c3244:	88 50 08             	mov    %dl,0x8(%eax)
 81c3247:	b8 00 00 00 00       	mov    $0x0,%eax
 81c324c:	83 c4 4c             	add    $0x4c,%esp
 81c324f:	5b                   	pop    %ebx
 81c3250:	5e                   	pop    %esi
 81c3251:	5f                   	pop    %edi
 81c3252:	5d                   	pop    %ebp
 81c3253:	c3                   	ret

```

```c
// DisPatcher_DropItem::process @ 0x81c2f94

/* DisPatcher_DropItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DropItem::process
          (DisPatcher_DropItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  CParty *this_00;
  int *piVar4;
  WarRoom *this_01;
  
  uVar1 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0xdcc,
                       "virtual int DisPatcher_DropItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar2);
    }
    else {
      iVar3 = CUser::get_state(param_1);
      if (iVar3 == 5) {
        CUser::GetPartyIndex(param_1);
        iVar3 = G_CGameManager();
        this_00 = (CParty *)CGameManager::GetParty(iVar3);
        if (this_00 != (CParty *)0x0) {
          iVar3 = CParty::drop_item(this_00,param_1,(int)*(short *)(param_2 + 0xd),
                                    (int)*(short *)(param_2 + 0xf),(char)param_2[0x11],
                                    (int)*(short *)(param_2 + 0x12),*(int *)(param_2 + 0x14));
          if (0 < iVar3) {
            *(int *)(param_3 + 4) = iVar3;
            *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
          }
        }
      }
      else {
        iVar3 = CUser::get_state(param_1);
        if (iVar3 == 0xc) {
          piVar4 = (int *)CUser::getBossTower(param_1);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x20))
                      (piVar4,param_1,(int)*(short *)(param_2 + 0xd),(int)*(short *)(param_2 + 0xf),
                       (int)(char)param_2[0x11],(int)*(short *)(param_2 + 0x12),
                       *(undefined4 *)(param_2 + 0x14));
          }
        }
        else {
          iVar3 = CUser::get_state(param_1);
          if (iVar3 == 8) {
            CUser::GetWarRoomIndex(param_1);
            iVar3 = G_CGameManager();
            this_01 = (WarRoom *)CGameManager::GetWarRoom(iVar3);
            if (this_01 != (WarRoom *)0x0) {
              iVar3 = WarRoom::HandleItemDrop
                                (this_01,param_1,(int)*(short *)(param_2 + 0xd),
                                 (int)*(short *)(param_2 + 0xf),(char)param_2[0x11],
                                 (int)*(short *)(param_2 + 0x12),*(int *)(param_2 + 0x14));
              if (0 < iVar3) {
                *(int *)(param_3 + 4) = iVar3;
                *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
              }
            }
          }
          else {
            *(undefined4 *)(param_3 + 4) = 0x13;
            *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
          }
        }
      }
      uVar1 = 0;
    }
  }
  else {
    *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081c2bee DisPatcher_DropItem::read  [0x081c2bee-0x81c2d99] ===
 81c2bee:	55                   	push   %ebp
 81c2bef:	89 e5                	mov    %esp,%ebp
 81c2bf1:	83 ec 28             	sub    $0x28,%esp
 81c2bf4:	8b 45 10             	mov    0x10(%ebp),%eax
 81c2bf7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c2bfa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2bfd:	83 c0 0d             	add    $0xd,%eax
 81c2c00:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2c04:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2c07:	89 04 24             	mov    %eax,(%esp)
 81c2c0a:	e8 b1 a3 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c2c0f:	83 f0 01             	xor    $0x1,%eax
 81c2c12:	84 c0                	test   %al,%al
 81c2c14:	74 29                	je     81c2c3f <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x51>
 81c2c16:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2c1d:	00 
 81c2c1e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2c25:	00 
 81c2c26:	c7 44 24 04 c0 5d bd 	movl   $0x8bd5dc0,0x4(%esp)
 81c2c2d:	08 
 81c2c2e:	c7 04 24 0c 0d 00 00 	movl   $0xd0c,(%esp)
 81c2c35:	e8 9d dc 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2c3a:	e9 58 01 00 00       	jmp    81c2d97 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a9>
 81c2c3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2c42:	83 c0 0f             	add    $0xf,%eax
 81c2c45:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2c49:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2c4c:	89 04 24             	mov    %eax,(%esp)
 81c2c4f:	e8 6c a3 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c2c54:	83 f0 01             	xor    $0x1,%eax
 81c2c57:	84 c0                	test   %al,%al
 81c2c59:	74 29                	je     81c2c84 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x96>
 81c2c5b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2c62:	00 
 81c2c63:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2c6a:	00 
 81c2c6b:	c7 44 24 04 c0 5d bd 	movl   $0x8bd5dc0,0x4(%esp)
 81c2c72:	08 
 81c2c73:	c7 04 24 0d 0d 00 00 	movl   $0xd0d,(%esp)
 81c2c7a:	e8 58 dc 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2c7f:	e9 13 01 00 00       	jmp    81c2d97 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a9>
 81c2c84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2c87:	83 c0 11             	add    $0x11,%eax
 81c2c8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2c8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2c91:	89 04 24             	mov    %eax,(%esp)
 81c2c94:	e8 89 a2 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c2c99:	83 f0 01             	xor    $0x1,%eax
 81c2c9c:	84 c0                	test   %al,%al
 81c2c9e:	74 29                	je     81c2cc9 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0xdb>
 81c2ca0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2ca7:	00 
 81c2ca8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2caf:	00 
 81c2cb0:	c7 44 24 04 c0 5d bd 	movl   $0x8bd5dc0,0x4(%esp)
 81c2cb7:	08 
 81c2cb8:	c7 04 24 0e 0d 00 00 	movl   $0xd0e,(%esp)
 81c2cbf:	e8 13 dc 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2cc4:	e9 ce 00 00 00       	jmp    81c2d97 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a9>
 81c2cc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2ccc:	83 c0 12             	add    $0x12,%eax
 81c2ccf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2cd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2cd6:	89 04 24             	mov    %eax,(%esp)
 81c2cd9:	e8 e2 a2 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c2cde:	83 f0 01             	xor    $0x1,%eax
 81c2ce1:	84 c0                	test   %al,%al
 81c2ce3:	74 29                	je     81c2d0e <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x120>
 81c2ce5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2cec:	00 
 81c2ced:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2cf4:	00 
 81c2cf5:	c7 44 24 04 c0 5d bd 	movl   $0x8bd5dc0,0x4(%esp)
 81c2cfc:	08 
 81c2cfd:	c7 04 24 0f 0d 00 00 	movl   $0xd0f,(%esp)
 81c2d04:	e8 ce db 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2d09:	e9 89 00 00 00       	jmp    81c2d97 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a9>
 81c2d0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2d11:	83 c0 14             	add    $0x14,%eax
 81c2d14:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2d18:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2d1b:	89 04 24             	mov    %eax,(%esp)
 81c2d1e:	e8 cd a3 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c2d23:	83 f0 01             	xor    $0x1,%eax
 81c2d26:	84 c0                	test   %al,%al
 81c2d28:	74 26                	je     81c2d50 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x162>
 81c2d2a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2d31:	00 
 81c2d32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2d39:	00 
 81c2d3a:	c7 44 24 04 c0 5d bd 	movl   $0x8bd5dc0,0x4(%esp)
 81c2d41:	08 
 81c2d42:	c7 04 24 10 0d 00 00 	movl   $0xd10,(%esp)
 81c2d49:	e8 89 db 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2d4e:	eb 47                	jmp    81c2d97 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a9>
 81c2d50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c2d53:	83 c0 18             	add    $0x18,%eax
 81c2d56:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c2d5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c2d5d:	89 04 24             	mov    %eax,(%esp)
 81c2d60:	e8 bd a1 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c2d65:	83 f0 01             	xor    $0x1,%eax
 81c2d68:	84 c0                	test   %al,%al
 81c2d6a:	74 26                	je     81c2d92 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a4>
 81c2d6c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c2d73:	00 
 81c2d74:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c2d7b:	00 
 81c2d7c:	c7 44 24 04 c0 5d bd 	movl   $0x8bd5dc0,0x4(%esp)
 81c2d83:	08 
 81c2d84:	c7 04 24 12 0d 00 00 	movl   $0xd12,(%esp)
 81c2d8b:	e8 47 db 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c2d90:	eb 05                	jmp    81c2d97 <_ZN19DisPatcher_DropItem4readER9PacketBufR8MSG_BASE+0x1a9>
 81c2d92:	b8 00 00 00 00       	mov    $0x0,%eax
 81c2d97:	c9                   	leave
 81c2d98:	c3                   	ret
 81c2d99:	90                   	nop

```

```c
// DisPatcher_DropItem::read @ 0x81c2bee

/* DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DropItem::read(DisPatcher_DropItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x18));
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = LineFunc(0xd12,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar2 = LineFunc(0xd10,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar2 = LineFunc(0xd0f,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0xd0e,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0xd0d,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xd0c,"virtual int DisPatcher_DropItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c3254 DisPatcher_DropItem::send  [0x081c3254-0x81c335b] ===
 81c3254:	55                   	push   %ebp
 81c3255:	89 e5                	mov    %esp,%ebp
 81c3257:	56                   	push   %esi
 81c3258:	53                   	push   %ebx
 81c3259:	83 ec 20             	sub    $0x20,%esp
 81c325c:	8b 45 10             	mov    0x10(%ebp),%eax
 81c325f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c3262:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3265:	8b 40 04             	mov    0x4(%eax),%eax
 81c3268:	85 c0                	test   %eax,%eax
 81c326a:	0f 84 e4 00 00 00    	je     81c3354 <_ZN19DisPatcher_DropItem4sendEP5CUserR9ParamBase+0x100>
 81c3270:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c3273:	8b 40 0c             	mov    0xc(%eax),%eax
 81c3276:	83 f8 01             	cmp    $0x1,%eax
 81c3279:	75 25                	jne    81c32a0 <_ZN19DisPatcher_DropItem4sendEP5CUserR9ParamBase+0x4c>
 81c327b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c327e:	8b 40 04             	mov    0x4(%eax),%eax
 81c3281:	0f b6 c0             	movzbl %al,%eax
 81c3284:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c3288:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 81c328f:	00 
 81c3290:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3293:	89 04 24             	mov    %eax,(%esp)
 81c3296:	e8 a7 8c 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81c329b:	e9 b4 00 00 00       	jmp    81c3354 <_ZN19DisPatcher_DropItem4sendEP5CUserR9ParamBase+0x100>
 81c32a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c32a3:	89 04 24             	mov    %eax,(%esp)
 81c32a6:	e8 a1 aa 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c32ab:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 81c32b2:	00 
 81c32b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c32ba:	00 
 81c32bb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c32be:	89 04 24             	mov    %eax,(%esp)
 81c32c1:	e8 36 86 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c32c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c32cd:	00 
 81c32ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c32d1:	89 04 24             	mov    %eax,(%esp)
 81c32d4:	e8 47 86 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c32d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c32dc:	8b 40 04             	mov    0x4(%eax),%eax
 81c32df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c32e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c32e6:	89 04 24             	mov    %eax,(%esp)
 81c32e9:	e8 32 86 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c32ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c32f1:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c32f5:	0f be c0             	movsbl %al,%eax
 81c32f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c32fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c32ff:	89 04 24             	mov    %eax,(%esp)
 81c3302:	e8 19 86 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c3307:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c330e:	00 
 81c330f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c3312:	89 04 24             	mov    %eax,(%esp)
 81c3315:	e8 3e 86 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c331a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c331d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c3321:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c3324:	89 04 24             	mov    %eax,(%esp)
 81c3327:	e8 8e 52 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c332c:	eb 1b                	jmp    81c3349 <_ZN19DisPatcher_DropItem4sendEP5CUserR9ParamBase+0xf5>
 81c332e:	89 d3                	mov    %edx,%ebx
 81c3330:	89 c6                	mov    %eax,%esi
 81c3332:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c3335:	89 04 24             	mov    %eax,(%esp)
 81c3338:	e8 43 ab 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c333d:	89 f0                	mov    %esi,%eax
 81c333f:	89 da                	mov    %ebx,%edx
 81c3341:	89 04 24             	mov    %eax,(%esp)
 81c3344:	e8 07 04 92 00       	call   8ae3750 <_Unwind_Resume>
 81c3349:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81c334c:	89 04 24             	mov    %eax,(%esp)
 81c334f:	e8 2c ab 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c3354:	83 c4 20             	add    $0x20,%esp
 81c3357:	5b                   	pop    %ebx
 81c3358:	5e                   	pop    %esi
 81c3359:	5d                   	pop    %ebp
 81c335a:	c3                   	ret
 81c335b:	90                   	nop

```

```c
// DisPatcher_DropItem::send @ 0x81c3254

/* DisPatcher_DropItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_DropItem::send(DisPatcher_DropItem *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0) {
    if (*(int *)(param_2 + 0xc) == 1) {
      CUser::SendCmdErrorPacket(param_1,0x32,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c32c1 to 081c332b has its CatchHandler @ 081c332e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x32);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}

```

