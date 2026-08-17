# Dispatcher_GrowthWeaponEventChangeInfinity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e7f2e Dispatcher_GrowthWeaponEventChangeInfinity::check_error  [0x081e7f2e-0x81e80bd] ===
 81e7f2e:	55                   	push   %ebp
 81e7f2f:	89 e5                	mov    %esp,%ebp
 81e7f31:	53                   	push   %ebx
 81e7f32:	83 ec 24             	sub    $0x24,%esp
 81e7f35:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7f38:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e7f3b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e7f3f:	75 0a                	jne    81e7f4b <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x1d>
 81e7f41:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e7f46:	e9 6d 01 00 00       	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e7f4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7f4e:	89 04 24             	mov    %eax,(%esp)
 81e7f51:	e8 36 24 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e7f56:	83 f8 03             	cmp    $0x3,%eax
 81e7f59:	0f 95 c0             	setne  %al
 81e7f5c:	84 c0                	test   %al,%al
 81e7f5e:	74 0a                	je     81e7f6a <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x3c>
 81e7f60:	b8 13 00 00 00       	mov    $0x13,%eax
 81e7f65:	e9 4e 01 00 00       	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e7f6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7f6d:	8b 58 11             	mov    0x11(%eax),%ebx
 81e7f70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7f73:	8b 40 0d             	mov    0xd(%eax),%eax
 81e7f76:	89 04 24             	mov    %eax,(%esp)
 81e7f79:	e8 c7 f8 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81e7f7e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e7f82:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7f86:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7f89:	89 04 24             	mov    %eax,(%esp)
 81e7f8c:	e8 b1 e9 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81e7f91:	84 c0                	test   %al,%al
 81e7f93:	74 0a                	je     81e7f9f <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x71>
 81e7f95:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81e7f9a:	e9 19 01 00 00       	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e7f9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7fa2:	89 04 24             	mov    %eax,(%esp)
 81e7fa5:	e8 26 9d 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e7faa:	8b 58 04             	mov    0x4(%eax),%ebx
 81e7fad:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e7fb4:	ff 
 81e7fb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7fb8:	89 04 24             	mov    %eax,(%esp)
 81e7fbb:	e8 e0 5f 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e7fc0:	39 c3                	cmp    %eax,%ebx
 81e7fc2:	0f 95 c0             	setne  %al
 81e7fc5:	84 c0                	test   %al,%al
 81e7fc7:	74 0a                	je     81e7fd3 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0xa5>
 81e7fc9:	b8 03 00 00 00       	mov    $0x3,%eax
 81e7fce:	e9 e5 00 00 00       	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e7fd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7fd6:	89 04 24             	mov    %eax,(%esp)
 81e7fd9:	e8 f2 9c 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e7fde:	8b 40 0c             	mov    0xc(%eax),%eax
 81e7fe1:	85 c0                	test   %eax,%eax
 81e7fe3:	0f 95 c0             	setne  %al
 81e7fe6:	84 c0                	test   %al,%al
 81e7fe8:	74 0a                	je     81e7ff4 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0xc6>
 81e7fea:	b8 03 00 00 00       	mov    $0x3,%eax
 81e7fef:	e9 c4 00 00 00       	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e7ff4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e7ffb:	e8 a7 23 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e8000:	89 04 24             	mov    %eax,(%esp)
 81e8003:	e8 16 93 f0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81e8008:	84 c0                	test   %al,%al
 81e800a:	74 10                	je     81e801c <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0xee>
 81e800c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e800f:	89 04 24             	mov    %eax,(%esp)
 81e8012:	e8 79 3c ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e8017:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e801a:	eb 0e                	jmp    81e802a <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0xfc>
 81e801c:	e8 60 41 ee ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81e8021:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81e8027:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e802a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e802d:	89 04 24             	mov    %eax,(%esp)
 81e8030:	e8 9b 9c 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e8035:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81e8039:	0f bf d0             	movswl %ax,%edx
 81e803c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e803f:	39 c2                	cmp    %eax,%edx
 81e8041:	0f 95 c0             	setne  %al
 81e8044:	84 c0                	test   %al,%al
 81e8046:	74 07                	je     81e804f <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x121>
 81e8048:	b8 03 00 00 00       	mov    $0x3,%eax
 81e804d:	eb 69                	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e804f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8052:	89 04 24             	mov    %eax,(%esp)
 81e8055:	e8 76 9c 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e805a:	0f b7 58 10          	movzwl 0x10(%eax),%ebx
 81e805e:	e8 38 41 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e8063:	89 04 24             	mov    %eax,(%esp)
 81e8066:	e8 cd d5 17 00       	call   8365638 <_ZN12CDataManager27get_GrowthWeaponMaterialMaxEv>
 81e806b:	66 39 c3             	cmp    %ax,%bx
 81e806e:	0f 9c c0             	setl   %al
 81e8071:	84 c0                	test   %al,%al
 81e8073:	74 07                	je     81e807c <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x14e>
 81e8075:	b8 11 00 00 00       	mov    $0x11,%eax
 81e807a:	eb 3c                	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e807c:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8081:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 81e8088:	00 
 81e8089:	89 04 24             	mov    %eax,(%esp)
 81e808c:	e8 07 d9 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8091:	8b 10                	mov    (%eax),%edx
 81e8093:	83 c2 34             	add    $0x34,%edx
 81e8096:	8b 12                	mov    (%edx),%edx
 81e8098:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e809f:	00 
 81e80a0:	89 04 24             	mov    %eax,(%esp)
 81e80a3:	ff d2                	call   *%edx
 81e80a5:	83 f0 01             	xor    $0x1,%eax
 81e80a8:	84 c0                	test   %al,%al
 81e80aa:	74 07                	je     81e80b3 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x185>
 81e80ac:	b8 01 00 00 00       	mov    $0x1,%eax
 81e80b1:	eb 05                	jmp    81e80b8 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE+0x18a>
 81e80b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81e80b8:	83 c4 24             	add    $0x24,%esp
 81e80bb:	5b                   	pop    %ebx
 81e80bc:	5d                   	pop    %ebp
 81e80bd:	c3                   	ret

```

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::check_error @ 0x81e7f2e

/* Dispatcher_GrowthWeaponEventChangeInfinity::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::check_error
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  GameWorld *this_00;
  CDataManager *this_01;
  int *piVar7;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      iVar5 = *(int *)(param_2 + 0x11);
      iVar6 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xd));
      cVar2 = CUser::CheckItemLock(param_1,iVar6,iVar5);
      if (cVar2 == '\0') {
        iVar5 = CUser::getGrowthWeaponEventdata(param_1);
        iVar5 = *(int *)(iVar5 + 4);
        iVar6 = CUser::get_charac_no(param_1,-1);
        if (iVar5 == iVar6) {
          iVar5 = CUser::getGrowthWeaponEventdata(param_1);
          if (*(int *)(iVar5 + 0xc) == 0) {
            this_00 = (GameWorld *)G_GameWorld();
            cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
            if (cVar2 == '\0') {
              iVar5 = G_CEnvironment();
              local_10 = *(int *)(iVar5 + 0x378);
            }
            else {
              local_10 = CUser::GetServerGroup(param_1);
            }
            iVar5 = CUser::getGrowthWeaponEventdata(param_1);
            if (*(short *)(iVar5 + 0x12) == local_10) {
              iVar5 = CUser::getGrowthWeaponEventdata(param_1);
              sVar1 = *(short *)(iVar5 + 0x10);
              this_01 = (CDataManager *)G_CDataManager();
              sVar3 = CDataManager::get_GrowthWeaponMaterialMax(this_01);
              if (sVar1 < sVar3) {
                uVar4 = 0x11;
              }
              else {
                piVar7 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
                cVar2 = (**(code **)(*piVar7 + 0x34))(piVar7,0);
                if (cVar2 == '\x01') {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                }
              }
            }
            else {
              uVar4 = 3;
            }
          }
          else {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 0xd5;
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 081e7db4 Dispatcher_GrowthWeaponEventChangeInfinity::process  [0x081e7db4-0x81e7f2d] ===
 81e7db4:	55                   	push   %ebp
 81e7db5:	89 e5                	mov    %esp,%ebp
 81e7db7:	56                   	push   %esi
 81e7db8:	53                   	push   %ebx
 81e7db9:	83 ec 30             	sub    $0x30,%esp
 81e7dbc:	8b 45 14             	mov    0x14(%ebp),%eax
 81e7dbf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e7dc2:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7dc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7dc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7dcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7dd0:	8b 45 08             	mov    0x8(%ebp),%eax
 81e7dd3:	89 04 24             	mov    %eax,(%esp)
 81e7dd6:	e8 53 01 00 00       	call   81e7f2e <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity11check_errorEP5CUserR8MSG_BASE>
 81e7ddb:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81e7dde:	89 42 04             	mov    %eax,0x4(%edx)
 81e7de1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7de4:	8b 40 04             	mov    0x4(%eax),%eax
 81e7de7:	85 c0                	test   %eax,%eax
 81e7de9:	7e 0a                	jle    81e7df5 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81e7deb:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7df0:	e9 31 01 00 00       	jmp    81e7f26 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x172>
 81e7df5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7df8:	8b 40 04             	mov    0x4(%eax),%eax
 81e7dfb:	85 c0                	test   %eax,%eax
 81e7dfd:	79 2b                	jns    81e7e2a <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x76>
 81e7dff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7e02:	8b 40 04             	mov    0x4(%eax),%eax
 81e7e05:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e7e0c:	00 
 81e7e0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7e11:	c7 44 24 04 a0 0a bd 	movl   $0x8bd0aa0,0x4(%esp)
 81e7e18:	08 
 81e7e19:	c7 04 24 0f 64 00 00 	movl   $0x640f,(%esp)
 81e7e20:	e8 b2 8a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7e25:	e9 fc 00 00 00       	jmp    81e7f26 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x172>
 81e7e2a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7e2d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e7e30:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e7e33:	8b 70 11             	mov    0x11(%eax),%esi
 81e7e36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e7e39:	8b 40 0d             	mov    0xd(%eax),%eax
 81e7e3c:	89 04 24             	mov    %eax,(%esp)
 81e7e3f:	e8 01 fa f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81e7e44:	89 c3                	mov    %eax,%ebx
 81e7e46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7e49:	89 04 24             	mov    %eax,(%esp)
 81e7e4c:	e8 2d 24 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e7e51:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e7e55:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e7e59:	89 04 24             	mov    %eax,(%esp)
 81e7e5c:	e8 7d 43 31 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81e7e61:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e7e64:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e7e68:	75 14                	jne    81e7e7e <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0xca>
 81e7e6a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7e6d:	c7 40 04 15 00 00 00 	movl   $0x15,0x4(%eax)
 81e7e74:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7e79:	e9 a8 00 00 00       	jmp    81e7f26 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x172>
 81e7e7e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7e81:	8b 40 02             	mov    0x2(%eax),%eax
 81e7e84:	85 c0                	test   %eax,%eax
 81e7e86:	75 14                	jne    81e7e9c <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0xe8>
 81e7e88:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7e8b:	c7 40 04 15 00 00 00 	movl   $0x15,0x4(%eax)
 81e7e92:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7e97:	e9 8a 00 00 00       	jmp    81e7f26 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x172>
 81e7e9c:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e7ea1:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 81e7ea8:	00 
 81e7ea9:	89 04 24             	mov    %eax,(%esp)
 81e7eac:	e8 e7 da f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e7eb1:	8b 10                	mov    (%eax),%edx
 81e7eb3:	83 c2 34             	add    $0x34,%edx
 81e7eb6:	8b 12                	mov    (%edx),%edx
 81e7eb8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e7ebf:	00 
 81e7ec0:	89 04 24             	mov    %eax,(%esp)
 81e7ec3:	ff d2                	call   *%edx
 81e7ec5:	84 c0                	test   %al,%al
 81e7ec7:	74 58                	je     81e7f21 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x16d>
 81e7ec9:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e7ece:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 81e7ed5:	00 
 81e7ed6:	89 04 24             	mov    %eax,(%esp)
 81e7ed9:	e8 ba da f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e7ede:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e7ee1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e7ee5:	74 3a                	je     81e7f21 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x16d>
 81e7ee7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e7eea:	8b 50 11             	mov    0x11(%eax),%edx
 81e7eed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e7ef0:	8b 40 0d             	mov    0xd(%eax),%eax
 81e7ef3:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e7ef7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e7efb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7efe:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7f02:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7f05:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7f09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e7f0c:	89 04 24             	mov    %eax,(%esp)
 81e7f0f:	e8 9e f5 f0 ff       	call   80f74b2 <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii>
 81e7f14:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81e7f17:	89 42 04             	mov    %eax,0x4(%edx)
 81e7f1a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7f1f:	eb 05                	jmp    81e7f26 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity7processEP5CUserR8MSG_BASER9ParamBase+0x172>
 81e7f21:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7f26:	83 c4 30             	add    $0x30,%esp
 81e7f29:	5b                   	pop    %ebx
 81e7f2a:	5e                   	pop    %esi
 81e7f2b:	5d                   	pop    %ebp
 81e7f2c:	c3                   	ret
 81e7f2d:	90                   	nop

```

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::process @ 0x81e7db4

/* Dispatcher_GrowthWeaponEventChangeInfinity::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::process
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CInventory *this_00;
  Inven_Item *pIVar5;
  int *piVar6;
  GrowthEquipEvent *this_01;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = LineFunc(0x640f,
                       "virtual int Dispatcher_GrowthWeaponEventChangeInfinity::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x11);
      iVar4 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xd));
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      pIVar5 = (Inven_Item *)CInventory::GetInvenRef(this_00,iVar4,iVar1);
      if (pIVar5 == (Inven_Item *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x15;
        uVar3 = 0;
      }
      else if (*(int *)(pIVar5 + 2) == 0) {
        *(undefined4 *)(param_3 + 4) = 0x15;
        uVar3 = 0;
      }
      else {
        piVar6 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
        cVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,0);
        if ((cVar2 != '\0') &&
           (this_01 = (GrowthEquipEvent *)
                      CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100),
           this_01 != (GrowthEquipEvent *)0x0)) {
          uVar3 = GrowthEquipEvent::SendInfinityGrowthWeapon
                            (this_01,param_1,pIVar5,*(int *)(param_2 + 0xd),*(int *)(param_2 + 0x11)
                            );
          *(undefined4 *)(param_3 + 4) = uVar3;
          return 0;
        }
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081e7d1c Dispatcher_GrowthWeaponEventChangeInfinity::read  [0x081e7d1c-0x81e7db3] ===
 81e7d1c:	55                   	push   %ebp
 81e7d1d:	89 e5                	mov    %esp,%ebp
 81e7d1f:	83 ec 28             	sub    $0x28,%esp
 81e7d22:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7d25:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e7d28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e7d2b:	83 c0 0d             	add    $0xd,%eax
 81e7d2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7d32:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7d35:	89 04 24             	mov    %eax,(%esp)
 81e7d38:	e8 b3 53 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e7d3d:	83 f0 01             	xor    $0x1,%eax
 81e7d40:	84 c0                	test   %al,%al
 81e7d42:	74 26                	je     81e7d6a <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASE+0x4e>
 81e7d44:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e7d4b:	00 
 81e7d4c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e7d53:	00 
 81e7d54:	c7 44 24 04 00 0b bd 	movl   $0x8bd0b00,0x4(%esp)
 81e7d5b:	08 
 81e7d5c:	c7 04 24 fc 63 00 00 	movl   $0x63fc,(%esp)
 81e7d63:	e8 6f 8b 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7d68:	eb 47                	jmp    81e7db1 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASE+0x95>
 81e7d6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e7d6d:	83 c0 11             	add    $0x11,%eax
 81e7d70:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7d74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7d77:	89 04 24             	mov    %eax,(%esp)
 81e7d7a:	e8 71 53 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e7d7f:	83 f0 01             	xor    $0x1,%eax
 81e7d82:	84 c0                	test   %al,%al
 81e7d84:	74 26                	je     81e7dac <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASE+0x90>
 81e7d86:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e7d8d:	00 
 81e7d8e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e7d95:	00 
 81e7d96:	c7 44 24 04 00 0b bd 	movl   $0x8bd0b00,0x4(%esp)
 81e7d9d:	08 
 81e7d9e:	c7 04 24 ff 63 00 00 	movl   $0x63ff,(%esp)
 81e7da5:	e8 2d 8b 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7daa:	eb 05                	jmp    81e7db1 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4readER9PacketBufR8MSG_BASE+0x95>
 81e7dac:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7db1:	c9                   	leave
 81e7db2:	c3                   	ret
 81e7db3:	90                   	nop

```

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::read @ 0x81e7d1c

/* Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::read
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x63ff,
                       "virtual int Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x63fc,
                     "virtual int Dispatcher_GrowthWeaponEventChangeInfinity::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e80be Dispatcher_GrowthWeaponEventChangeInfinity::send  [0x081e80be-0x81e810b] ===
 81e80be:	55                   	push   %ebp
 81e80bf:	89 e5                	mov    %esp,%ebp
 81e80c1:	83 ec 28             	sub    $0x28,%esp
 81e80c4:	8b 45 10             	mov    0x10(%ebp),%eax
 81e80c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e80ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e80cd:	8b 40 04             	mov    0x4(%eax),%eax
 81e80d0:	85 c0                	test   %eax,%eax
 81e80d2:	75 15                	jne    81e80e9 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4sendEP5CUserR9ParamBase+0x2b>
 81e80d4:	c7 44 24 04 f9 01 00 	movl   $0x1f9,0x4(%esp)
 81e80db:	00 
 81e80dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e80df:	89 04 24             	mov    %eax,(%esp)
 81e80e2:	e8 b9 3d 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e80e7:	eb 20                	jmp    81e8109 <_ZN42Dispatcher_GrowthWeaponEventChangeInfinity4sendEP5CUserR9ParamBase+0x4b>
 81e80e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e80ec:	8b 40 04             	mov    0x4(%eax),%eax
 81e80ef:	0f b6 c0             	movzbl %al,%eax
 81e80f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e80f6:	c7 44 24 04 f9 01 00 	movl   $0x1f9,0x4(%esp)
 81e80fd:	00 
 81e80fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8101:	89 04 24             	mov    %eax,(%esp)
 81e8104:	e8 39 3e 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e8109:	c9                   	leave
 81e810a:	c3                   	ret
 81e810b:	90                   	nop

```

```c
// Dispatcher_GrowthWeaponEventChangeInfinity::send @ 0x81e80be

/* Dispatcher_GrowthWeaponEventChangeInfinity::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GrowthWeaponEventChangeInfinity::send
          (Dispatcher_GrowthWeaponEventChangeInfinity *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1f9);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f9,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

