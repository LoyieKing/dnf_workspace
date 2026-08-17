# expert_job__CDisjointMachine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CDisjointMachine

```asm
// === 085d1ae8 expert_job::CDisjointMachine::CDisjointMachine  [0x085d1ae8-0x85d1bbf] ===
 85d1ae8:	55                   	push   %ebp
 85d1ae9:	89 e5                	mov    %esp,%ebp
 85d1aeb:	56                   	push   %esi
 85d1aec:	53                   	push   %ebx
 85d1aed:	83 ec 20             	sub    $0x20,%esp
 85d1af0:	8b 45 18             	mov    0x18(%ebp),%eax
 85d1af3:	88 45 f4             	mov    %al,-0xc(%ebp)
 85d1af6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1af9:	89 04 24             	mov    %eax,(%esp)
 85d1afc:	e8 a9 2a cb ff       	call   82845aa <_ZN14village_object7IObjectC1Ev>
 85d1b01:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b04:	c7 00 48 08 cc 08    	movl   $0x8cc0848,(%eax)
 85d1b0a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b0d:	83 c0 04             	add    $0x4,%eax
 85d1b10:	89 04 24             	mov    %eax,(%esp)
 85d1b13:	e8 42 99 ff ff       	call   85cb45a <_ZN19collision_detection9RectangleC1Ev>
 85d1b18:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b1b:	83 c0 18             	add    $0x18,%eax
 85d1b1e:	89 04 24             	mov    %eax,(%esp)
 85d1b21:	e8 aa 4a 13 00       	call   87065d0 <_ZNSsC1Ev>
 85d1b26:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b29:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1b2c:	89 50 14             	mov    %edx,0x14(%eax)
 85d1b2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b32:	8d 50 18             	lea    0x18(%eax),%edx
 85d1b35:	8b 45 10             	mov    0x10(%ebp),%eax
 85d1b38:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1b3c:	89 14 24             	mov    %edx,(%esp)
 85d1b3f:	e8 dc 6b 13 00       	call   8708720 <_ZNSsaSEPKc>
 85d1b44:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b47:	8b 55 14             	mov    0x14(%ebp),%edx
 85d1b4a:	89 50 1c             	mov    %edx,0x1c(%eax)
 85d1b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b50:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 85d1b54:	88 50 20             	mov    %dl,0x20(%eax)
 85d1b57:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b5a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85d1b5d:	89 50 24             	mov    %edx,0x24(%eax)
 85d1b60:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b63:	8b 55 20             	mov    0x20(%ebp),%edx
 85d1b66:	89 50 28             	mov    %edx,0x28(%eax)
 85d1b69:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b6c:	8b 40 24             	mov    0x24(%eax),%eax
 85d1b6f:	8d 50 b0             	lea    -0x50(%eax),%edx
 85d1b72:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b75:	89 50 04             	mov    %edx,0x4(%eax)
 85d1b78:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b7b:	c7 40 0c a0 00 00 00 	movl   $0xa0,0xc(%eax)
 85d1b82:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b85:	8b 40 28             	mov    0x28(%eax),%eax
 85d1b88:	8d 50 ce             	lea    -0x32(%eax),%edx
 85d1b8b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b8e:	89 50 08             	mov    %edx,0x8(%eax)
 85d1b91:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1b94:	c7 40 10 64 00 00 00 	movl   $0x64,0x10(%eax)
 85d1b9b:	83 c4 20             	add    $0x20,%esp
 85d1b9e:	5b                   	pop    %ebx
 85d1b9f:	5e                   	pop    %esi
 85d1ba0:	5d                   	pop    %ebp
 85d1ba1:	c3                   	ret
 85d1ba2:	89 d3                	mov    %edx,%ebx
 85d1ba4:	89 c6                	mov    %eax,%esi
 85d1ba6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1ba9:	83 c0 18             	add    $0x18,%eax
 85d1bac:	89 04 24             	mov    %eax,(%esp)
 85d1baf:	e8 2c 60 13 00       	call   8707be0 <_ZNSsD1Ev>
 85d1bb4:	89 f0                	mov    %esi,%eax
 85d1bb6:	89 da                	mov    %ebx,%edx
 85d1bb8:	89 04 24             	mov    %eax,(%esp)
 85d1bbb:	e8 90 1b 51 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// expert_job::CDisjointMachine::CDisjointMachine @ 0x85d1ae8

/* expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int) */

void __thiscall
expert_job::CDisjointMachine::CDisjointMachine
          (CDisjointMachine *this,CUser *param_1,char *param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  village_object::IObject::IObject((IObject *)this);
  *(undefined ***)this = &PTR_include_08cc0848;
  collision_detection::Rectangle::Rectangle((Rectangle *)(this + 4));
  std::string::string((string *)(this + 0x18));
  *(CUser **)(this + 0x14) = param_1;
                    /* try { // try from 085d1b3f to 085d1b43 has its CatchHandler @ 085d1ba2 */
  std::string::operator=((string *)(this + 0x18),param_2);
  *(int *)(this + 0x1c) = param_3;
  this[0x20] = (CDisjointMachine)param_4;
  *(int *)(this + 0x24) = param_5;
  *(int *)(this + 0x28) = param_6;
  *(int *)(this + 4) = *(int *)(this + 0x24) + -0x50;
  *(undefined4 *)(this + 0xc) = 0xa0;
  *(int *)(this + 8) = *(int *)(this + 0x28) + -0x32;
  *(undefined4 *)(this + 0x10) = 100;
  return;
}

```

---

## put_disjoint_machine_info

```asm
// === 085d1bc0 expert_job::CDisjointMachine::put_disjoint_machine_info  [0x085d1bc0-0x85d1cc1] ===
 85d1bc0:	55                   	push   %ebp
 85d1bc1:	89 e5                	mov    %esp,%ebp
 85d1bc3:	53                   	push   %ebx
 85d1bc4:	83 ec 14             	sub    $0x14,%esp
 85d1bc7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1bca:	8b 40 14             	mov    0x14(%eax),%eax
 85d1bcd:	89 04 24             	mov    %eax,(%esp)
 85d1bd0:	e8 a7 87 b0 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85d1bd5:	0f b7 d0             	movzwl %ax,%edx
 85d1bd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1bdb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1bdf:	89 04 24             	mov    %eax,(%esp)
 85d1be2:	e8 bd 82 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d1be7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1bea:	83 c0 18             	add    $0x18,%eax
 85d1bed:	89 04 24             	mov    %eax,(%esp)
 85d1bf0:	e8 7b 4a 13 00       	call   8706670 <_ZNKSs6lengthEv>
 85d1bf5:	89 c2                	mov    %eax,%edx
 85d1bf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1bfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1bfe:	89 04 24             	mov    %eax,(%esp)
 85d1c01:	e8 36 9d af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d1c06:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1c09:	83 c0 18             	add    $0x18,%eax
 85d1c0c:	89 04 24             	mov    %eax,(%esp)
 85d1c0f:	e8 5c 4a 13 00       	call   8706670 <_ZNKSs6lengthEv>
 85d1c14:	89 c3                	mov    %eax,%ebx
 85d1c16:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1c19:	83 c0 18             	add    $0x18,%eax
 85d1c1c:	89 04 24             	mov    %eax,(%esp)
 85d1c1f:	e8 cc 48 13 00       	call   87064f0 <_ZNKSs5c_strEv>
 85d1c24:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1c27:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85d1c2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1c2f:	89 14 24             	mov    %edx,(%esp)
 85d1c32:	e8 39 9b c5 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 85d1c37:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1c3a:	8b 40 14             	mov    0x14(%eax),%eax
 85d1c3d:	89 04 24             	mov    %eax,(%esp)
 85d1c40:	e8 1f 39 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85d1c45:	0f be d0             	movsbl %al,%edx
 85d1c48:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1c4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1c4f:	89 04 24             	mov    %eax,(%esp)
 85d1c52:	e8 c9 9c af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d1c57:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1c5a:	8b 40 14             	mov    0x14(%eax),%eax
 85d1c5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1c64:	00 
 85d1c65:	89 04 24             	mov    %eax,(%esp)
 85d1c68:	e8 51 f7 0a 00       	call   86813be <_ZN5CUser8get_areaEb>
 85d1c6d:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d1c70:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1c74:	89 14 24             	mov    %edx,(%esp)
 85d1c77:	e8 a4 9c af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d1c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1c7f:	8b 50 24             	mov    0x24(%eax),%edx
 85d1c82:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1c85:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1c89:	89 04 24             	mov    %eax,(%esp)
 85d1c8c:	e8 13 82 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d1c91:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1c94:	8b 50 28             	mov    0x28(%eax),%edx
 85d1c97:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1c9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1c9e:	89 04 24             	mov    %eax,(%esp)
 85d1ca1:	e8 fe 81 b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85d1ca6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1ca9:	8b 50 1c             	mov    0x1c(%eax),%edx
 85d1cac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1caf:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d1cb3:	89 04 24             	mov    %eax,(%esp)
 85d1cb6:	e8 81 9c af ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85d1cbb:	83 c4 14             	add    $0x14,%esp
 85d1cbe:	5b                   	pop    %ebx
 85d1cbf:	5d                   	pop    %ebp
 85d1cc0:	c3                   	ret
 85d1cc1:	90                   	nop

```

```c
// expert_job::CDisjointMachine::put_disjoint_machine_info @ 0x85d1bc0

/* expert_job::CDisjointMachine::put_disjoint_machine_info(PacketGuard&) */

void __thiscall
expert_job::CDisjointMachine::put_disjoint_machine_info(CDisjointMachine *this,PacketGuard *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = CUser::get_unique_id(*(CUser **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
  iVar3 = std::string::length((string *)(this + 0x18));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar3);
  iVar3 = std::string::length((string *)(this + 0x18));
  pcVar4 = (char *)std::string::c_str((string *)(this + 0x18));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,pcVar4,iVar3);
  cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)cVar1);
  iVar3 = CUser::get_area(*(CUser **)(this + 0x14),false);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x24));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x1c));
  return;
}

```

---

## put_object_info

```asm
// === 085d1cc2 expert_job::CDisjointMachine::put_object_info  [0x085d1cc2-0x85d1d3b] ===
 85d1cc2:	55                   	push   %ebp
 85d1cc3:	89 e5                	mov    %esp,%ebp
 85d1cc5:	83 ec 28             	sub    $0x28,%esp
 85d1cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1ccb:	8b 40 14             	mov    0x14(%eax),%eax
 85d1cce:	85 c0                	test   %eax,%eax
 85d1cd0:	75 3d                	jne    85d1d0f <_ZN10expert_job16CDisjointMachine15put_object_infoER11PacketGuard+0x4d>
 85d1cd2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85d1cd9:	00 
 85d1cda:	c7 44 24 08 33 00 00 	movl   $0x33,0x8(%esp)
 85d1ce1:	00 
 85d1ce2:	c7 44 24 04 c0 07 cc 	movl   $0x8cc07c0,0x4(%esp)
 85d1ce9:	08 
 85d1cea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d1ced:	89 04 24             	mov    %eax,(%esp)
 85d1cf0:	e8 23 da f7 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85d1cf5:	c7 44 24 04 a0 fa cb 	movl   $0x8cbfaa0,0x4(%esp)
 85d1cfc:	08 
 85d1cfd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85d1d00:	89 04 24             	mov    %eax,(%esp)
 85d1d03:	e8 80 da f7 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85d1d08:	b8 00 00 00 00       	mov    $0x0,%eax
 85d1d0d:	eb 2a                	jmp    85d1d39 <_ZN10expert_job16CDisjointMachine15put_object_infoER11PacketGuard+0x77>
 85d1d0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1d12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85d1d19:	00 
 85d1d1a:	89 04 24             	mov    %eax,(%esp)
 85d1d1d:	e8 fe 9b af ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85d1d22:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d1d25:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d1d29:	8b 45 08             	mov    0x8(%ebp),%eax
 85d1d2c:	89 04 24             	mov    %eax,(%esp)
 85d1d2f:	e8 8c fe ff ff       	call   85d1bc0 <_ZN10expert_job16CDisjointMachine25put_disjoint_machine_infoER11PacketGuard>
 85d1d34:	b8 01 00 00 00       	mov    $0x1,%eax
 85d1d39:	c9                   	leave
 85d1d3a:	c3                   	ret
 85d1d3b:	90                   	nop

```

```c
// expert_job::CDisjointMachine::put_object_info @ 0x85d1cc2

/* expert_job::CDisjointMachine::put_object_info(PacketGuard&) */

bool __thiscall
expert_job::CDisjointMachine::put_object_info(CDisjointMachine *this,PacketGuard *param_1)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    put_disjoint_machine_info(this,param_1);
  }
  else {
    cMyTrace::cMyTrace(local_1c,
                       "virtual bool expert_job::CDisjointMachine::put_object_info(PacketGuard&)",
                       0x33,0);
    cMyTrace::operator()(local_1c,"NOTEXIST_ERROR : disjoint_machine_user(null)");
  }
  return iVar1 != 0;
}

```

