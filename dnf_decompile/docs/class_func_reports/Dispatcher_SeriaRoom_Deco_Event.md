# Dispatcher_SeriaRoom_Deco_Event

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e5e50 Dispatcher_SeriaRoom_Deco_Event::check_error  [0x081e5e50-0x81e5e85] ===
 81e5e50:	55                   	push   %ebp
 81e5e51:	89 e5                	mov    %esp,%ebp
 81e5e53:	83 ec 18             	sub    $0x18,%esp
 81e5e56:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e5e5a:	75 07                	jne    81e5e63 <_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE+0x13>
 81e5e5c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e5e61:	eb 21                	jmp    81e5e84 <_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE+0x34>
 81e5e63:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5e66:	89 04 24             	mov    %eax,(%esp)
 81e5e69:	e8 1e 45 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e5e6e:	83 f8 03             	cmp    $0x3,%eax
 81e5e71:	0f 95 c0             	setne  %al
 81e5e74:	84 c0                	test   %al,%al
 81e5e76:	74 07                	je     81e5e7f <_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE+0x2f>
 81e5e78:	b8 07 00 00 00       	mov    $0x7,%eax
 81e5e7d:	eb 05                	jmp    81e5e84 <_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE+0x34>
 81e5e7f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5e84:	c9                   	leave
 81e5e85:	c3                   	ret

```

```c
// Dispatcher_SeriaRoom_Deco_Event::check_error @ 0x81e5e50

/* Dispatcher_SeriaRoom_Deco_Event::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_SeriaRoom_Deco_Event::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 7;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e5cde Dispatcher_SeriaRoom_Deco_Event::process  [0x081e5cde-0x81e5e4f] ===
 81e5cde:	55                   	push   %ebp
 81e5cdf:	89 e5                	mov    %esp,%ebp
 81e5ce1:	53                   	push   %ebx
 81e5ce2:	83 ec 74             	sub    $0x74,%esp
 81e5ce5:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5ce8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e5ceb:	8b 45 14             	mov    0x14(%ebp),%eax
 81e5cee:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e5cf1:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5cf4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e5cf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5cfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5cff:	8b 45 08             	mov    0x8(%ebp),%eax
 81e5d02:	89 04 24             	mov    %eax,(%esp)
 81e5d05:	e8 46 01 00 00       	call   81e5e50 <_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE>
 81e5d0a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e5d0d:	89 42 04             	mov    %eax,0x4(%edx)
 81e5d10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e5d13:	8b 40 04             	mov    0x4(%eax),%eax
 81e5d16:	85 c0                	test   %eax,%eax
 81e5d18:	7e 0a                	jle    81e5d24 <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x46>
 81e5d1a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5d1f:	e9 27 01 00 00       	jmp    81e5e4b <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x16d>
 81e5d24:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e5d27:	8b 40 04             	mov    0x4(%eax),%eax
 81e5d2a:	85 c0                	test   %eax,%eax
 81e5d2c:	79 2b                	jns    81e5d59 <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x7b>
 81e5d2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e5d31:	8b 40 04             	mov    0x4(%eax),%eax
 81e5d34:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e5d3b:	00 
 81e5d3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e5d40:	c7 44 24 04 80 0e bd 	movl   $0x8bd0e80,0x4(%esp)
 81e5d47:	08 
 81e5d48:	c7 04 24 10 60 00 00 	movl   $0x6010,(%esp)
 81e5d4f:	e8 83 ab 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e5d54:	e9 f2 00 00 00       	jmp    81e5e4b <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x16d>
 81e5d59:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e5d5c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e5d60:	0f b7 d8             	movzwl %ax,%ebx
 81e5d63:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5d66:	89 04 24             	mov    %eax,(%esp)
 81e5d69:	e8 10 45 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e5d6e:	8d 55 ab             	lea    -0x55(%ebp),%edx
 81e5d71:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e5d75:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e5d7c:	00 
 81e5d7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5d81:	89 14 24             	mov    %edx,(%esp)
 81e5d84:	e8 8f 5b 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e5d89:	83 ec 04             	sub    $0x4,%esp
 81e5d8c:	8b 45 ad             	mov    -0x53(%ebp),%eax
 81e5d8f:	89 c3                	mov    %eax,%ebx
 81e5d91:	e8 05 64 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e5d96:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e5d9a:	89 04 24             	mov    %eax,(%esp)
 81e5d9d:	e8 90 9c 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e5da2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e5da5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81e5da9:	75 14                	jne    81e5dbf <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0xe1>
 81e5dab:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e5dae:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81e5db5:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5dba:	e9 8c 00 00 00       	jmp    81e5e4b <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x16d>
 81e5dbf:	8b 45 ad             	mov    -0x53(%ebp),%eax
 81e5dc2:	89 c3                	mov    %eax,%ebx
 81e5dc4:	e8 d2 63 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e5dc9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e5dcd:	89 04 24             	mov    %eax,(%esp)
 81e5dd0:	e8 e5 f6 17 00       	call   83654ba <_ZN12CDataManager17getVaildEventItemEi>
 81e5dd5:	83 f0 01             	xor    $0x1,%eax
 81e5dd8:	84 c0                	test   %al,%al
 81e5dda:	74 11                	je     81e5ded <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x10f>
 81e5ddc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e5ddf:	c7 40 04 17 00 00 00 	movl   $0x17,0x4(%eax)
 81e5de6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5deb:	eb 5e                	jmp    81e5e4b <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x16d>
 81e5ded:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e5df0:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81e5df4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e5df7:	66 89 50 08          	mov    %dx,0x8(%eax)
 81e5dfb:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 81e5dff:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 81e5e03:	74 41                	je     81e5e46 <_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase+0x168>
 81e5e05:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e5e08:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e5e0c:	0f b7 d8             	movzwl %ax,%ebx
 81e5e0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5e12:	89 04 24             	mov    %eax,(%esp)
 81e5e15:	e8 74 44 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e5e1a:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e5e21:	00 
 81e5e22:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e5e29:	00 
 81e5e2a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e5e31:	00 
 81e5e32:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e5e36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5e3d:	00 
 81e5e3e:	89 04 24             	mov    %eax,(%esp)
 81e5e41:	e8 c6 e1 31 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e5e46:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5e4b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81e5e4e:	c9                   	leave
 81e5e4f:	c3                   	ret

```

```c
// Dispatcher_SeriaRoom_Deco_Event::process @ 0x81e5cde

/* WARNING: Removing unreachable block (ram,0x081e5e05) */
/* Dispatcher_SeriaRoom_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Deco_Event::process
          (Dispatcher_SeriaRoom_Deco_Event *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this_00;
  undefined1 local_59 [2];
  int local_57;
  MSG_BASE *local_1c;
  ParamBase *local_18;
  int local_14;
  
  local_1c = param_2;
  local_18 = param_3;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_18 + 4) = uVar2;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      uVar2 = LineFunc(0x6010,
                       "virtual int Dispatcher_SeriaRoom_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_18 + 4),0);
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_59,iVar3);
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = CDataManager::find_item(this_00,local_57);
      if (local_14 == 0) {
        *(undefined4 *)(local_18 + 4) = 0x11;
        uVar2 = 0;
      }
      else {
        iVar3 = G_CDataManager();
        cVar1 = CDataManager::getVaildEventItem(iVar3);
        if (cVar1 == '\x01') {
          *(undefined2 *)(local_18 + 8) = *(undefined2 *)(local_1c + 0xe);
          uVar2 = 0;
        }
        else {
          *(undefined4 *)(local_18 + 4) = 0x17;
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081e5c88 Dispatcher_SeriaRoom_Deco_Event::read  [0x081e5c88-0x81e5cdd] ===
 81e5c88:	55                   	push   %ebp
 81e5c89:	89 e5                	mov    %esp,%ebp
 81e5c8b:	83 ec 28             	sub    $0x28,%esp
 81e5c8e:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5c91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5c94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5c97:	83 c0 0e             	add    $0xe,%eax
 81e5c9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5c9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5ca1:	89 04 24             	mov    %eax,(%esp)
 81e5ca4:	e8 07 74 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e5ca9:	83 f0 01             	xor    $0x1,%eax
 81e5cac:	84 c0                	test   %al,%al
 81e5cae:	74 26                	je     81e5cd6 <_ZN31Dispatcher_SeriaRoom_Deco_Event4readER9PacketBufR8MSG_BASE+0x4e>
 81e5cb0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e5cb7:	00 
 81e5cb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e5cbf:	00 
 81e5cc0:	c7 44 24 04 e0 0e bd 	movl   $0x8bd0ee0,0x4(%esp)
 81e5cc7:	08 
 81e5cc8:	c7 04 24 ff 5f 00 00 	movl   $0x5fff,(%esp)
 81e5ccf:	e8 03 ac 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e5cd4:	eb 05                	jmp    81e5cdb <_ZN31Dispatcher_SeriaRoom_Deco_Event4readER9PacketBufR8MSG_BASE+0x53>
 81e5cd6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5cdb:	c9                   	leave
 81e5cdc:	c3                   	ret
 81e5cdd:	90                   	nop

```

```c
// Dispatcher_SeriaRoom_Deco_Event::read @ 0x81e5c88

/* Dispatcher_SeriaRoom_Deco_Event::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Deco_Event::read
          (Dispatcher_SeriaRoom_Deco_Event *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x5fff,
                     "virtual int Dispatcher_SeriaRoom_Deco_Event::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e5e86 Dispatcher_SeriaRoom_Deco_Event::send  [0x081e5e86-0x81e5f85] ===
 81e5e86:	55                   	push   %ebp
 81e5e87:	89 e5                	mov    %esp,%ebp
 81e5e89:	56                   	push   %esi
 81e5e8a:	53                   	push   %ebx
 81e5e8b:	83 ec 20             	sub    $0x20,%esp
 81e5e8e:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5e91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5e94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5e97:	89 04 24             	mov    %eax,(%esp)
 81e5e9a:	e8 ad 7e 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e5e9f:	c7 44 24 08 ef 01 00 	movl   $0x1ef,0x8(%esp)
 81e5ea6:	00 
 81e5ea7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5eae:	00 
 81e5eaf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5eb2:	89 04 24             	mov    %eax,(%esp)
 81e5eb5:	e8 42 5a ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e5eba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5ebd:	8b 40 04             	mov    0x4(%eax),%eax
 81e5ec0:	85 c0                	test   %eax,%eax
 81e5ec2:	75 45                	jne    81e5f09 <_ZN31Dispatcher_SeriaRoom_Deco_Event4sendEP5CUserR9ParamBase+0x83>
 81e5ec4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5ecb:	00 
 81e5ecc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5ecf:	89 04 24             	mov    %eax,(%esp)
 81e5ed2:	e8 49 5a ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5ed7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5eda:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81e5ede:	0f b7 c0             	movzwl %ax,%eax
 81e5ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5ee5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5ee8:	89 04 24             	mov    %eax,(%esp)
 81e5eeb:	e8 b4 3f ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e5ef0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5ef3:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81e5ef7:	98                   	cwtl
 81e5ef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5efc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5eff:	89 04 24             	mov    %eax,(%esp)
 81e5f02:	e8 9d 3f ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e5f07:	eb 28                	jmp    81e5f31 <_ZN31Dispatcher_SeriaRoom_Deco_Event4sendEP5CUserR9ParamBase+0xab>
 81e5f09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e5f10:	00 
 81e5f11:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5f14:	89 04 24             	mov    %eax,(%esp)
 81e5f17:	e8 04 5a ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5f1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5f1f:	8b 40 04             	mov    0x4(%eax),%eax
 81e5f22:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5f26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5f29:	89 04 24             	mov    %eax,(%esp)
 81e5f2c:	e8 ef 59 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5f31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5f38:	00 
 81e5f39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5f3c:	89 04 24             	mov    %eax,(%esp)
 81e5f3f:	e8 14 5a ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e5f44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5f47:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5f4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5f4e:	89 04 24             	mov    %eax,(%esp)
 81e5f51:	e8 64 26 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e5f56:	eb 1b                	jmp    81e5f73 <_ZN31Dispatcher_SeriaRoom_Deco_Event4sendEP5CUserR9ParamBase+0xed>
 81e5f58:	89 d3                	mov    %edx,%ebx
 81e5f5a:	89 c6                	mov    %eax,%esi
 81e5f5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5f5f:	89 04 24             	mov    %eax,(%esp)
 81e5f62:	e8 19 7f 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5f67:	89 f0                	mov    %esi,%eax
 81e5f69:	89 da                	mov    %ebx,%edx
 81e5f6b:	89 04 24             	mov    %eax,(%esp)
 81e5f6e:	e8 dd d7 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e5f73:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5f76:	89 04 24             	mov    %eax,(%esp)
 81e5f79:	e8 02 7f 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5f7e:	83 c4 20             	add    $0x20,%esp
 81e5f81:	5b                   	pop    %ebx
 81e5f82:	5e                   	pop    %esi
 81e5f83:	5d                   	pop    %ebp
 81e5f84:	c3                   	ret
 81e5f85:	90                   	nop

```

```c
// Dispatcher_SeriaRoom_Deco_Event::send @ 0x81e5e86

/* Dispatcher_SeriaRoom_Deco_Event::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SeriaRoom_Deco_Event::send
          (Dispatcher_SeriaRoom_Deco_Event *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e5eb5 to 081e5f55 has its CatchHandler @ 081e5f58 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ef);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 8));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 10));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

