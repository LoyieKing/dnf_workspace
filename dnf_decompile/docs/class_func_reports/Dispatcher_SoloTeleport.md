# Dispatcher_SoloTeleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e1e98 Dispatcher_SoloTeleport::check_error  [0x081e1e98-0x81e1ff5] ===
 81e1e98:	55                   	push   %ebp
 81e1e99:	89 e5                	mov    %esp,%ebp
 81e1e9b:	57                   	push   %edi
 81e1e9c:	56                   	push   %esi
 81e1e9d:	53                   	push   %ebx
 81e1e9e:	83 ec 5c             	sub    $0x5c,%esp
 81e1ea1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e1ea5:	75 0a                	jne    81e1eb1 <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x19>
 81e1ea7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1eac:	e9 3c 01 00 00       	jmp    81e1fed <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x155>
 81e1eb1:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1eb4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e1eb7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1eba:	8b 40 30             	mov    0x30(%eax),%eax
 81e1ebd:	83 f8 ff             	cmp    $0xffffffff,%eax
 81e1ec0:	75 15                	jne    81e1ed7 <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81e1ec2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1ec5:	8b 40 34             	mov    0x34(%eax),%eax
 81e1ec8:	83 f8 ff             	cmp    $0xffffffff,%eax
 81e1ecb:	75 0a                	jne    81e1ed7 <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3f>
 81e1ecd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1ed2:	e9 16 01 00 00       	jmp    81e1fed <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x155>
 81e1ed7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81e1ede:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e1ee1:	89 04 24             	mov    %eax,(%esp)
 81e1ee4:	e8 9f b8 04 00       	call   822d788 <_ZN15STCheckRuleDataC1Ev>
 81e1ee9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1eec:	8b 40 30             	mov    0x30(%eax),%eax
 81e1eef:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e1ef2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1ef5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e1ef8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1efb:	8b 40 44             	mov    0x44(%eax),%eax
 81e1efe:	8b 00                	mov    (%eax),%eax
 81e1f00:	83 c0 08             	add    $0x8,%eax
 81e1f03:	8b 08                	mov    (%eax),%ecx
 81e1f05:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1f08:	8b 40 44             	mov    0x44(%eax),%eax
 81e1f0b:	8d 55 d8             	lea    -0x28(%ebp),%edx
 81e1f0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1f12:	89 04 24             	mov    %eax,(%esp)
 81e1f15:	ff d1                	call   *%ecx
 81e1f17:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e1f1a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81e1f1e:	74 08                	je     81e1f28 <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x90>
 81e1f20:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e1f23:	e9 c5 00 00 00       	jmp    81e1fed <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x155>
 81e1f28:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1f2b:	8b 40 44             	mov    0x44(%eax),%eax
 81e1f2e:	89 04 24             	mov    %eax,(%esp)
 81e1f31:	e8 80 1e 0a 00       	call   8283db6 <_ZN8Teleport18get_party_teleportEv>
 81e1f36:	89 04 24             	mov    %eax,(%esp)
 81e1f39:	e8 1a b8 04 00       	call   822d758 <_ZNK15stPartyTelePort22get_teleport_directionEv>
 81e1f3e:	0f b6 c0             	movzbl %al,%eax
 81e1f41:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81e1f44:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1f47:	8b 40 44             	mov    0x44(%eax),%eax
 81e1f4a:	89 04 24             	mov    %eax,(%esp)
 81e1f4d:	e8 64 1e 0a 00       	call   8283db6 <_ZN8Teleport18get_party_teleportEv>
 81e1f52:	89 04 24             	mov    %eax,(%esp)
 81e1f55:	e8 f2 b7 04 00       	call   822d74c <_ZNK15stPartyTelePort17get_teleport_posyEv>
 81e1f5a:	98                   	cwtl
 81e1f5b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e1f5e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1f61:	8b 40 44             	mov    0x44(%eax),%eax
 81e1f64:	89 04 24             	mov    %eax,(%esp)
 81e1f67:	e8 4a 1e 0a 00       	call   8283db6 <_ZN8Teleport18get_party_teleportEv>
 81e1f6c:	89 04 24             	mov    %eax,(%esp)
 81e1f6f:	e8 cc b7 04 00       	call   822d740 <_ZNK15stPartyTelePort17get_teleport_posxEv>
 81e1f74:	0f bf f8             	movswl %ax,%edi
 81e1f77:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1f7a:	8b 40 44             	mov    0x44(%eax),%eax
 81e1f7d:	89 04 24             	mov    %eax,(%esp)
 81e1f80:	e8 31 1e 0a 00       	call   8283db6 <_ZN8Teleport18get_party_teleportEv>
 81e1f85:	89 04 24             	mov    %eax,(%esp)
 81e1f88:	e8 a7 b7 04 00       	call   822d734 <_ZNK15stPartyTelePort23get_teleport_area_indexEv>
 81e1f8d:	0f b6 f0             	movzbl %al,%esi
 81e1f90:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e1f93:	8b 40 44             	mov    0x44(%eax),%eax
 81e1f96:	89 04 24             	mov    %eax,(%esp)
 81e1f99:	e8 18 1e 0a 00       	call   8283db6 <_ZN8Teleport18get_party_teleportEv>
 81e1f9e:	89 04 24             	mov    %eax,(%esp)
 81e1fa1:	e8 82 b7 04 00       	call   822d728 <_ZNK15stPartyTelePort20get_teleport_villageEv>
 81e1fa6:	0f b6 d8             	movzbl %al,%ebx
 81e1fa9:	e8 f9 83 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e1fae:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 81e1fb5:	00 
 81e1fb6:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 81e1fbd:	00 
 81e1fbe:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81e1fc1:	89 54 24 18          	mov    %edx,0x18(%esp)
 81e1fc5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81e1fc8:	89 54 24 14          	mov    %edx,0x14(%esp)
 81e1fcc:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81e1fd0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e1fd4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e1fd8:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e1fdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1fdf:	89 04 24             	mov    %eax,(%esp)
 81e1fe2:	e8 1b f0 4e 00       	call   86d1002 <_ZN9GameWorld15check_move_areaEP5CUseriiiiibi>
 81e1fe7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e1fea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e1fed:	83 c4 5c             	add    $0x5c,%esp
 81e1ff0:	5b                   	pop    %ebx
 81e1ff1:	5e                   	pop    %esi
 81e1ff2:	5f                   	pop    %edi
 81e1ff3:	5d                   	pop    %ebp
 81e1ff4:	c3                   	ret
 81e1ff5:	90                   	nop

```

```c
// Dispatcher_SoloTeleport::check_error @ 0x81e1e98

/* Dispatcher_SoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_SoloTeleport::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  stPartyTelePort *psVar4;
  uint uVar5;
  uint uVar6;
  CUser *pCVar7;
  undefined4 local_2c;
  MSG_BASE *local_28;
  ParamBase *local_24;
  int local_20;
  
  if (param_2 == (MSG_BASE *)0x0) {
    local_20 = -1;
  }
  else {
    local_24 = param_3;
    if ((*(int *)(param_3 + 0x30) == -1) && (*(int *)(param_3 + 0x34) == -1)) {
      local_20 = -1;
    }
    else {
      local_20 = 0;
      STCheckRuleData::STCheckRuleData((STCheckRuleData *)&local_2c);
      local_2c = *(undefined4 *)(local_24 + 0x30);
      local_28 = param_2;
      local_20 = (**(code **)(**(int **)(local_24 + 0x44) + 8))
                           (*(undefined4 *)(local_24 + 0x44),&local_2c);
      if (local_20 == 0) {
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        bVar1 = (bool)stPartyTelePort::get_teleport_direction(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        sVar2 = stPartyTelePort::get_teleport_posy(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        sVar3 = stPartyTelePort::get_teleport_posx(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        uVar5 = stPartyTelePort::get_teleport_area_index(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        uVar6 = stPartyTelePort::get_teleport_village(psVar4);
        pCVar7 = (CUser *)G_GameWorld();
        local_20 = GameWorld::check_move_area
                             (pCVar7,(int)param_2,uVar6 & 0xff,uVar5 & 0xff,(int)sVar3,(int)sVar2,
                              bVar1,1);
      }
    }
  }
  return local_20;
}

```

---

## process

```asm
// === 081e1d9c Dispatcher_SoloTeleport::process  [0x081e1d9c-0x81e1e97] ===
 81e1d9c:	55                   	push   %ebp
 81e1d9d:	89 e5                	mov    %esp,%ebp
 81e1d9f:	83 ec 38             	sub    $0x38,%esp
 81e1da2:	8b 45 14             	mov    0x14(%ebp),%eax
 81e1da5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e1da8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1dab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e1dae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1db1:	8b 40 34             	mov    0x34(%eax),%eax
 81e1db4:	83 f8 ff             	cmp    $0xffffffff,%eax
 81e1db7:	74 0e                	je     81e1dc7 <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x2b>
 81e1db9:	8b 15 18 f8 41 09    	mov    0x941f818,%edx
 81e1dbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1dc2:	89 50 44             	mov    %edx,0x44(%eax)
 81e1dc5:	eb 0c                	jmp    81e1dd3 <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x37>
 81e1dc7:	8b 15 1c f8 41 09    	mov    0x941f81c,%edx
 81e1dcd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1dd0:	89 50 44             	mov    %edx,0x44(%eax)
 81e1dd3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e1dd6:	89 04 24             	mov    %eax,(%esp)
 81e1dd9:	e8 b0 b9 04 00       	call   822d78e <_ZN14STTeleportDataC1Ev>
 81e1dde:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1de1:	8b 40 30             	mov    0x30(%eax),%eax
 81e1de4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e1de7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1dea:	8b 50 38             	mov    0x38(%eax),%edx
 81e1ded:	89 55 e0             	mov    %edx,-0x20(%ebp)
 81e1df0:	8b 50 3c             	mov    0x3c(%eax),%edx
 81e1df3:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 81e1df6:	0f b7 40 40          	movzwl 0x40(%eax),%eax
 81e1dfa:	66 89 45 e8          	mov    %ax,-0x18(%ebp)
 81e1dfe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1e01:	8b 40 44             	mov    0x44(%eax),%eax
 81e1e04:	8b 00                	mov    (%eax),%eax
 81e1e06:	83 c0 0c             	add    $0xc,%eax
 81e1e09:	8b 08                	mov    (%eax),%ecx
 81e1e0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1e0e:	8b 40 44             	mov    0x44(%eax),%eax
 81e1e11:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81e1e14:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1e18:	89 04 24             	mov    %eax,(%esp)
 81e1e1b:	ff d1                	call   *%ecx
 81e1e1d:	8b 45 14             	mov    0x14(%ebp),%eax
 81e1e20:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e1e24:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1e27:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e1e2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1e2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1e32:	8b 45 08             	mov    0x8(%ebp),%eax
 81e1e35:	89 04 24             	mov    %eax,(%esp)
 81e1e38:	e8 5b 00 00 00       	call   81e1e98 <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81e1e3d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1e40:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e1e44:	7e 0b                	jle    81e1e51 <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xb5>
 81e1e46:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1e49:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e1e4c:	89 50 04             	mov    %edx,0x4(%eax)
 81e1e4f:	eb 0d                	jmp    81e1e5e <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81e1e51:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e1e55:	79 07                	jns    81e1e5e <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xc2>
 81e1e57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e1e5c:	eb 38                	jmp    81e1e96 <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xfa>
 81e1e5e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e1e62:	75 21                	jne    81e1e85 <_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xe9>
 81e1e64:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1e67:	8b 40 44             	mov    0x44(%eax),%eax
 81e1e6a:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e1e6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e1e71:	89 04 24             	mov    %eax,(%esp)
 81e1e74:	e8 49 1f 0a 00       	call   8283dc2 <_ZN8Teleport17set_end_cool_timeEP5CUser>
 81e1e79:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1e7c:	8b 50 30             	mov    0x30(%eax),%edx
 81e1e7f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1e82:	89 50 08             	mov    %edx,0x8(%eax)
 81e1e85:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e1e88:	8b 50 44             	mov    0x44(%eax),%edx
 81e1e8b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e1e8e:	89 50 0c             	mov    %edx,0xc(%eax)
 81e1e91:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1e96:	c9                   	leave
 81e1e97:	c3                   	ret

```

```c
// Dispatcher_SoloTeleport::process @ 0x81e1d9c

/* Dispatcher_SoloTeleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SoloTeleport::process
          (Dispatcher_SoloTeleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_18 = param_3;
  local_14 = param_2;
  if (*(int *)(param_2 + 0x34) == -1) {
    *(undefined4 *)(param_2 + 0x44) = DAT_0941f81c;
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = GlobalData::g_pTeleport;
  }
  STTeleportData::STTeleportData((STTeleportData *)&local_28);
  local_28 = *(undefined4 *)(local_14 + 0x30);
  local_24 = *(undefined4 *)(local_14 + 0x38);
  local_20 = *(undefined4 *)(local_14 + 0x3c);
  local_1c = *(undefined2 *)(local_14 + 0x40);
  (**(code **)(**(int **)(local_14 + 0x44) + 0xc))(*(undefined4 *)(local_14 + 0x44),&local_28);
  local_10 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_10 < 1) {
    if (local_10 < 0) {
      return 0xffffffff;
    }
  }
  else {
    *(int *)(local_18 + 4) = local_10;
  }
  if (local_10 == 0) {
    Teleport::set_end_cool_time(*(Teleport **)(local_14 + 0x44),param_1);
    *(undefined4 *)(local_18 + 8) = *(undefined4 *)(local_14 + 0x30);
  }
  *(undefined4 *)(local_18 + 0xc) = *(undefined4 *)(local_14 + 0x44);
  return 0;
}

```

---

## read

```asm
// === 081e1b9c Dispatcher_SoloTeleport::read  [0x081e1b9c-0x81e1d9b] ===
 81e1b9c:	55                   	push   %ebp
 81e1b9d:	89 e5                	mov    %esp,%ebp
 81e1b9f:	83 ec 28             	sub    $0x28,%esp
 81e1ba2:	8b 45 10             	mov    0x10(%ebp),%eax
 81e1ba5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e1ba8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1bab:	83 c0 30             	add    $0x30,%eax
 81e1bae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1bb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1bb5:	89 04 24             	mov    %eax,(%esp)
 81e1bb8:	e8 83 b6 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81e1bbd:	83 f0 01             	xor    $0x1,%eax
 81e1bc0:	84 c0                	test   %al,%al
 81e1bc2:	74 29                	je     81e1bed <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x51>
 81e1bc4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1bcb:	00 
 81e1bcc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1bd3:	00 
 81e1bd4:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1bdb:	08 
 81e1bdc:	c7 04 24 78 57 00 00 	movl   $0x5778,(%esp)
 81e1be3:	e8 ef ec 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1be8:	e9 ac 01 00 00       	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1bed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1bf0:	83 c0 34             	add    $0x34,%eax
 81e1bf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1bfa:	89 04 24             	mov    %eax,(%esp)
 81e1bfd:	e8 ee b4 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e1c02:	83 f0 01             	xor    $0x1,%eax
 81e1c05:	84 c0                	test   %al,%al
 81e1c07:	74 29                	je     81e1c32 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x96>
 81e1c09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1c10:	00 
 81e1c11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1c18:	00 
 81e1c19:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1c20:	08 
 81e1c21:	c7 04 24 7b 57 00 00 	movl   $0x577b,(%esp)
 81e1c28:	e8 aa ec 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1c2d:	e9 67 01 00 00       	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1c32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1c35:	8b 40 34             	mov    0x34(%eax),%eax
 81e1c38:	83 f8 ff             	cmp    $0xffffffff,%eax
 81e1c3b:	0f 84 53 01 00 00    	je     81e1d94 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1f8>
 81e1c41:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1c44:	83 c0 39             	add    $0x39,%eax
 81e1c47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1c4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1c4e:	89 04 24             	mov    %eax,(%esp)
 81e1c51:	e8 1a b3 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e1c56:	83 f0 01             	xor    $0x1,%eax
 81e1c59:	84 c0                	test   %al,%al
 81e1c5b:	74 29                	je     81e1c86 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0xea>
 81e1c5d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1c64:	00 
 81e1c65:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1c6c:	00 
 81e1c6d:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1c74:	08 
 81e1c75:	c7 04 24 7f 57 00 00 	movl   $0x577f,(%esp)
 81e1c7c:	e8 56 ec 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1c81:	e9 13 01 00 00       	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1c86:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1c89:	83 c0 3a             	add    $0x3a,%eax
 81e1c8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1c90:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1c93:	89 04 24             	mov    %eax,(%esp)
 81e1c96:	e8 d5 b2 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e1c9b:	83 f0 01             	xor    $0x1,%eax
 81e1c9e:	84 c0                	test   %al,%al
 81e1ca0:	74 29                	je     81e1ccb <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x12f>
 81e1ca2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1ca9:	00 
 81e1caa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1cb1:	00 
 81e1cb2:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1cb9:	08 
 81e1cba:	c7 04 24 80 57 00 00 	movl   $0x5780,(%esp)
 81e1cc1:	e8 11 ec 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1cc6:	e9 ce 00 00 00       	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1ccb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1cce:	83 c0 3c             	add    $0x3c,%eax
 81e1cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1cd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1cd8:	89 04 24             	mov    %eax,(%esp)
 81e1cdb:	e8 e0 b2 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e1ce0:	83 f0 01             	xor    $0x1,%eax
 81e1ce3:	84 c0                	test   %al,%al
 81e1ce5:	74 29                	je     81e1d10 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x174>
 81e1ce7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1cee:	00 
 81e1cef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1cf6:	00 
 81e1cf7:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1cfe:	08 
 81e1cff:	c7 04 24 81 57 00 00 	movl   $0x5781,(%esp)
 81e1d06:	e8 cc eb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1d0b:	e9 89 00 00 00       	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1d10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1d13:	83 c0 3e             	add    $0x3e,%eax
 81e1d16:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1d1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1d1d:	89 04 24             	mov    %eax,(%esp)
 81e1d20:	e8 9b b2 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e1d25:	83 f0 01             	xor    $0x1,%eax
 81e1d28:	84 c0                	test   %al,%al
 81e1d2a:	74 26                	je     81e1d52 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1b6>
 81e1d2c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1d33:	00 
 81e1d34:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1d3b:	00 
 81e1d3c:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1d43:	08 
 81e1d44:	c7 04 24 82 57 00 00 	movl   $0x5782,(%esp)
 81e1d4b:	e8 87 eb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1d50:	eb 47                	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1d52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e1d55:	83 c0 40             	add    $0x40,%eax
 81e1d58:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e1d5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e1d5f:	89 04 24             	mov    %eax,(%esp)
 81e1d62:	e8 09 b2 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e1d67:	83 f0 01             	xor    $0x1,%eax
 81e1d6a:	84 c0                	test   %al,%al
 81e1d6c:	74 26                	je     81e1d94 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1f8>
 81e1d6e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e1d75:	00 
 81e1d76:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e1d7d:	00 
 81e1d7e:	c7 44 24 04 80 17 bd 	movl   $0x8bd1780,0x4(%esp)
 81e1d85:	08 
 81e1d86:	c7 04 24 83 57 00 00 	movl   $0x5783,(%esp)
 81e1d8d:	e8 45 eb 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e1d92:	eb 05                	jmp    81e1d99 <_ZN23Dispatcher_SoloTeleport4readER9PacketBufR8MSG_BASE+0x1fd>
 81e1d94:	b8 00 00 00 00       	mov    $0x0,%eax
 81e1d99:	c9                   	leave
 81e1d9a:	c3                   	ret
 81e1d9b:	90                   	nop

```

```c
// Dispatcher_SoloTeleport::read @ 0x81e1b9c

/* Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SoloTeleport::read(Dispatcher_SoloTeleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x30));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x34));
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x34) != -1) {
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x39));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x577f,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x3a));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5780,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x3c));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5781,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x3e));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5782,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x40));
        if (cVar1 != '\x01') {
          uVar2 = LineFunc(0x5783,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
          return uVar2;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x577b,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x5778,"virtual int Dispatcher_SoloTeleport::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e1ff6 Dispatcher_SoloTeleport::send  [0x081e1ff6-0x81e21cb] ===
 81e1ff6:	55                   	push   %ebp
 81e1ff7:	89 e5                	mov    %esp,%ebp
 81e1ff9:	56                   	push   %esi
 81e1ffa:	53                   	push   %ebx
 81e1ffb:	83 ec 40             	sub    $0x40,%esp
 81e1ffe:	8b 45 10             	mov    0x10(%ebp),%eax
 81e2001:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e2004:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e2007:	89 04 24             	mov    %eax,(%esp)
 81e200a:	e8 3d bd 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e200f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e2012:	89 04 24             	mov    %eax,(%esp)
 81e2015:	e8 cc 98 ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81e201a:	c7 44 24 08 d7 01 00 	movl   $0x1d7,0x8(%esp)
 81e2021:	00 
 81e2022:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e2029:	00 
 81e202a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e202d:	89 04 24             	mov    %eax,(%esp)
 81e2030:	e8 c7 98 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e2035:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2038:	8b 40 04             	mov    0x4(%eax),%eax
 81e203b:	85 c0                	test   %eax,%eax
 81e203d:	0f 85 ec 00 00 00    	jne    81e212f <_ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase+0x139>
 81e2043:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e204a:	00 
 81e204b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e204e:	89 04 24             	mov    %eax,(%esp)
 81e2051:	e8 ca 98 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e2056:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e205d:	00 
 81e205e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e2061:	89 04 24             	mov    %eax,(%esp)
 81e2064:	e8 ef 98 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e2069:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e206c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2070:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2073:	89 04 24             	mov    %eax,(%esp)
 81e2076:	e8 3f 65 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e207b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e207e:	8b 40 0c             	mov    0xc(%eax),%eax
 81e2081:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e2084:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e2088:	89 04 24             	mov    %eax,(%esp)
 81e208b:	e8 28 1f 0a 00       	call   8283fb8 <_ZN8Teleport9move_areaEP5CUser>
 81e2090:	83 f0 01             	xor    $0x1,%eax
 81e2093:	84 c0                	test   %al,%al
 81e2095:	74 4c                	je     81e20e3 <_ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase+0xed>
 81e2097:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e209a:	89 04 24             	mov    %eax,(%esp)
 81e209d:	e8 ac 9b ee ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81e20a2:	89 c3                	mov    %eax,%ebx
 81e20a4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81e20ab:	00 
 81e20ac:	c7 44 24 08 d9 57 00 	movl   $0x57d9,0x8(%esp)
 81e20b3:	00 
 81e20b4:	c7 44 24 04 40 17 bd 	movl   $0x8bd1740,0x4(%esp)
 81e20bb:	08 
 81e20bc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e20bf:	89 04 24             	mov    %eax,(%esp)
 81e20c2:	e8 51 d6 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e20c7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e20cb:	c7 44 24 04 bc 1a bc 	movl   $0x8bc1abc,0x4(%esp)
 81e20d2:	08 
 81e20d3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e20d6:	89 04 24             	mov    %eax,(%esp)
 81e20d9:	e8 aa d6 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e20de:	e9 d6 00 00 00       	jmp    81e21b9 <_ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase+0x1c3>
 81e20e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e20e6:	89 04 24             	mov    %eax,(%esp)
 81e20e9:	e8 60 9b ee ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81e20ee:	89 c3                	mov    %eax,%ebx
 81e20f0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e20f7:	00 
 81e20f8:	c7 44 24 08 dd 57 00 	movl   $0x57dd,0x8(%esp)
 81e20ff:	00 
 81e2100:	c7 44 24 04 40 17 bd 	movl   $0x8bd1740,0x4(%esp)
 81e2107:	08 
 81e2108:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e210b:	89 04 24             	mov    %eax,(%esp)
 81e210e:	e8 05 d6 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e2113:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e2117:	c7 44 24 04 e8 1a bc 	movl   $0x8bc1ae8,0x4(%esp)
 81e211e:	08 
 81e211f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81e2122:	89 04 24             	mov    %eax,(%esp)
 81e2125:	e8 5e d6 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e212a:	e9 8a 00 00 00       	jmp    81e21b9 <_ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase+0x1c3>
 81e212f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e2136:	00 
 81e2137:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e213a:	89 04 24             	mov    %eax,(%esp)
 81e213d:	e8 de 97 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e2142:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2145:	8b 40 04             	mov    0x4(%eax),%eax
 81e2148:	0f be c0             	movsbl %al,%eax
 81e214b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e214f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e2152:	89 04 24             	mov    %eax,(%esp)
 81e2155:	e8 c6 97 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e215a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e215d:	8b 40 0c             	mov    0xc(%eax),%eax
 81e2160:	89 04 24             	mov    %eax,(%esp)
 81e2163:	e8 bc 1c 0a 00       	call   8283e24 <_ZN8Teleport17get_end_cool_timeEv>
 81e2168:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e216c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e216f:	89 04 24             	mov    %eax,(%esp)
 81e2172:	e8 c5 97 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e2177:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e217e:	00 
 81e217f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e2182:	89 04 24             	mov    %eax,(%esp)
 81e2185:	e8 ce 97 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e218a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e218d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2191:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2194:	89 04 24             	mov    %eax,(%esp)
 81e2197:	e8 1e 64 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e219c:	eb 1b                	jmp    81e21b9 <_ZN23Dispatcher_SoloTeleport4sendEP5CUserR9ParamBase+0x1c3>
 81e219e:	89 d3                	mov    %edx,%ebx
 81e21a0:	89 c6                	mov    %eax,%esi
 81e21a2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e21a5:	89 04 24             	mov    %eax,(%esp)
 81e21a8:	e8 d3 bc 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e21ad:	89 f0                	mov    %esi,%eax
 81e21af:	89 da                	mov    %ebx,%edx
 81e21b1:	89 04 24             	mov    %eax,(%esp)
 81e21b4:	e8 97 15 90 00       	call   8ae3750 <_Unwind_Resume>
 81e21b9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e21bc:	89 04 24             	mov    %eax,(%esp)
 81e21bf:	e8 bc bc 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e21c4:	83 c4 40             	add    $0x40,%esp
 81e21c7:	5b                   	pop    %ebx
 81e21c8:	5e                   	pop    %esi
 81e21c9:	5d                   	pop    %ebp
 81e21ca:	c3                   	ret
 81e21cb:	90                   	nop

```

```c
// Dispatcher_SoloTeleport::send @ 0x81e1ff6

/* Dispatcher_SoloTeleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SoloTeleport::send(Dispatcher_SoloTeleport *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  PacketGuard local_3c [12];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 081e2015 to 081e219b has its CatchHandler @ 081e219e */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,0x1d7);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
    cVar1 = Teleport::move_area(*(Teleport **)(local_10 + 0xc),param_1);
    if (cVar1 == '\x01') {
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_20,"virtual void Dispatcher_SoloTeleport::send(CUser*, ParamBase&)",
                         0x57dd,0);
      cMyTrace::operator()(local_20,"SOLO_TELEPORT : teleport_success:(char_no:%d)",uVar2);
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_30,"virtual void Dispatcher_SoloTeleport::send(CUser*, ParamBase&)",
                         0x57d9,5);
      cMyTrace::operator()(local_30,"SOLO_TELEPORT : teleport_error:(char_no:%d)",uVar2);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_3c,(int)(char)*(undefined4 *)(local_10 + 4));
    iVar3 = Teleport::get_end_cool_time(*(Teleport **)(local_10 + 0xc));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_3c,iVar3);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send(param_1,local_3c);
  }
  PacketGuard::~PacketGuard(local_3c);
  return;
}

```

