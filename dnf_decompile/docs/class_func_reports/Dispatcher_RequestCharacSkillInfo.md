# Dispatcher_RequestCharacSkillInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e3c08 Dispatcher_RequestCharacSkillInfo::check_error  [0x081e3c08-0x81e3cf9] ===
 81e3c08:	55                   	push   %ebp
 81e3c09:	89 e5                	mov    %esp,%ebp
 81e3c0b:	53                   	push   %ebx
 81e3c0c:	83 ec 24             	sub    $0x24,%esp
 81e3c0f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e3c13:	75 0a                	jne    81e3c1f <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0x17>
 81e3c15:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e3c1a:	e9 d4 00 00 00       	jmp    81e3cf3 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xeb>
 81e3c1f:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3c22:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e3c25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3c28:	89 04 24             	mov    %eax,(%esp)
 81e3c2b:	e8 5c 67 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e3c30:	83 f8 02             	cmp    $0x2,%eax
 81e3c33:	0f 9e c0             	setle  %al
 81e3c36:	84 c0                	test   %al,%al
 81e3c38:	74 0a                	je     81e3c44 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0x3c>
 81e3c3a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e3c3f:	e9 af 00 00 00       	jmp    81e3cf3 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xeb>
 81e3c44:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3c47:	05 e8 96 07 00       	add    $0x796e8,%eax
 81e3c4c:	89 04 24             	mov    %eax,(%esp)
 81e3c4f:	e8 46 cf fb ff       	call   81a0b9a <_ZNKSt6vectorI12_Charac_infoSaIS0_EE4sizeEv>
 81e3c54:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3c57:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3c5a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3c5e:	0f be c0             	movsbl %al,%eax
 81e3c61:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81e3c64:	7d 0f                	jge    81e3c75 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0x6d>
 81e3c66:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3c69:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3c6d:	0f be c0             	movsbl %al,%eax
 81e3c70:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81e3c73:	7c 07                	jl     81e3c7c <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0x74>
 81e3c75:	b8 39 00 00 00       	mov    $0x39,%eax
 81e3c7a:	eb 77                	jmp    81e3cf3 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xeb>
 81e3c7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3c7f:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3c83:	0f be c0             	movsbl %al,%eax
 81e3c86:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3c89:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3c8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3c93:	89 14 24             	mov    %edx,(%esp)
 81e3c96:	e8 1d cf fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3c9b:	8b 00                	mov    (%eax),%eax
 81e3c9d:	85 c0                	test   %eax,%eax
 81e3c9f:	0f 94 c0             	sete   %al
 81e3ca2:	84 c0                	test   %al,%al
 81e3ca4:	74 07                	je     81e3cad <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xa5>
 81e3ca6:	b8 15 00 00 00       	mov    $0x15,%eax
 81e3cab:	eb 46                	jmp    81e3cf3 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xeb>
 81e3cad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3cb0:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3cb4:	0f be c0             	movsbl %al,%eax
 81e3cb7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3cba:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3cc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3cc4:	89 14 24             	mov    %edx,(%esp)
 81e3cc7:	e8 ec ce fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3ccc:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 81e3cd0:	0f bf d8             	movswl %ax,%ebx
 81e3cd3:	e8 c3 84 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e3cd8:	8b 80 9c 62 00 00    	mov    0x629c(%eax),%eax
 81e3cde:	39 c3                	cmp    %eax,%ebx
 81e3ce0:	0f 9c c0             	setl   %al
 81e3ce3:	84 c0                	test   %al,%al
 81e3ce5:	74 07                	je     81e3cee <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xe6>
 81e3ce7:	b8 0e 00 00 00       	mov    $0xe,%eax
 81e3cec:	eb 05                	jmp    81e3cf3 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE+0xeb>
 81e3cee:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3cf3:	83 c4 24             	add    $0x24,%esp
 81e3cf6:	5b                   	pop    %ebx
 81e3cf7:	5d                   	pop    %ebp
 81e3cf8:	c3                   	ret
 81e3cf9:	90                   	nop

```

```c
// Dispatcher_RequestCharacSkillInfo::check_error @ 0x81e3c08

/* Dispatcher_RequestCharacSkillInfo::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestCharacSkillInfo::check_error
          (Dispatcher_RequestCharacSkillInfo *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8));
      if (((char)param_2[0xd] < iVar3) && ((char)param_2[0xd] < iVar3)) {
        piVar4 = (int *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                                  ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                   (param_1 + 0x796e8),(int)(char)param_2[0xd]);
        if (*piVar4 == 0) {
          uVar2 = 0x15;
        }
        else {
          iVar3 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_1 + 0x796e8),(int)(char)param_2[0xd]);
          sVar1 = *(short *)(iVar3 + 0x27);
          iVar3 = G_CDataManager();
          if ((int)sVar1 < *(int *)(iVar3 + 0x629c)) {
            uVar2 = 0xe;
          }
          else {
            uVar2 = 0;
          }
        }
      }
      else {
        uVar2 = 0x39;
      }
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081e39e0 Dispatcher_RequestCharacSkillInfo::process  [0x081e39e0-0x81e3c07] ===
 81e39e0:	55                   	push   %ebp
 81e39e1:	89 e5                	mov    %esp,%ebp
 81e39e3:	56                   	push   %esi
 81e39e4:	53                   	push   %ebx
 81e39e5:	83 ec 30             	sub    $0x30,%esp
 81e39e8:	8b 45 14             	mov    0x14(%ebp),%eax
 81e39eb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e39ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81e39f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e39f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e39f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e39fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81e39ff:	89 04 24             	mov    %eax,(%esp)
 81e3a02:	e8 01 02 00 00       	call   81e3c08 <_ZN33Dispatcher_RequestCharacSkillInfo11check_errorEP5CUserR8MSG_BASE>
 81e3a07:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81e3a0a:	89 42 04             	mov    %eax,0x4(%edx)
 81e3a0d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e3a10:	8b 40 04             	mov    0x4(%eax),%eax
 81e3a13:	85 c0                	test   %eax,%eax
 81e3a15:	7e 0a                	jle    81e3a21 <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81e3a17:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e3a1c:	e9 dd 01 00 00       	jmp    81e3bfe <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x21e>
 81e3a21:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e3a24:	8b 40 04             	mov    0x4(%eax),%eax
 81e3a27:	85 c0                	test   %eax,%eax
 81e3a29:	79 2d                	jns    81e3a58 <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x78>
 81e3a2b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e3a2e:	8b 40 04             	mov    0x4(%eax),%eax
 81e3a31:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3a38:	00 
 81e3a39:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3a3d:	c7 44 24 04 80 12 bd 	movl   $0x8bd1280,0x4(%esp)
 81e3a44:	08 
 81e3a45:	c7 04 24 32 5b 00 00 	movl   $0x5b32,(%esp)
 81e3a4c:	e8 86 ce 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3a51:	89 c3                	mov    %eax,%ebx
 81e3a53:	e9 a6 01 00 00       	jmp    81e3bfe <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x21e>
 81e3a58:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3a5b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e3a5e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3a61:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3a65:	0f be c0             	movsbl %al,%eax
 81e3a68:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3a6b:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3a71:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3a75:	89 14 24             	mov    %edx,(%esp)
 81e3a78:	e8 3b d1 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3a7d:	05 92 08 00 00       	add    $0x892,%eax
 81e3a82:	89 04 24             	mov    %eax,(%esp)
 81e3a85:	e8 20 4c 42 00       	call   86086aa <_ZN9SkillSlot18IsLoadStrikerSkillEv>
 81e3a8a:	84 c0                	test   %al,%al
 81e3a8c:	74 78                	je     81e3b06 <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x126>
 81e3a8e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3a91:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3a95:	0f be c0             	movsbl %al,%eax
 81e3a98:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3a9b:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3aa5:	89 14 24             	mov    %edx,(%esp)
 81e3aa8:	e8 0b d1 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3aad:	0f b6 80 39 12 00 00 	movzbl 0x1239(%eax),%eax
 81e3ab4:	0f be c0             	movsbl %al,%eax
 81e3ab7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3aba:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3abd:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3ac1:	0f be d8             	movsbl %al,%ebx
 81e3ac4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3ac7:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3acb:	0f be c0             	movsbl %al,%eax
 81e3ace:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3ad1:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3ad7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3adb:	89 14 24             	mov    %edx,(%esp)
 81e3ade:	e8 d5 d0 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3ae3:	8d 90 92 08 00 00    	lea    0x892(%eax),%edx
 81e3ae9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3aec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3af0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e3af4:	89 14 24             	mov    %edx,(%esp)
 81e3af7:	e8 d2 4b 42 00       	call   86086ce <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND>
 81e3afc:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e3b01:	e9 f8 00 00 00       	jmp    81e3bfe <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x21e>
 81e3b06:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81e3b0b:	c7 44 24 08 40 5b 00 	movl   $0x5b40,0x8(%esp)
 81e3b12:	00 
 81e3b13:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81e3b1a:	08 
 81e3b1b:	89 04 24             	mov    %eax,(%esp)
 81e3b1e:	e8 63 bf 0a 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81e3b23:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e3b2a:	00 
 81e3b2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3b2f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e3b32:	89 04 24             	mov    %eax,(%esp)
 81e3b35:	e8 ec 50 ee ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81e3b3a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e3b3d:	89 04 24             	mov    %eax,(%esp)
 81e3b40:	e8 01 51 ee ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81e3b45:	c7 44 24 04 fd 02 00 	movl   $0x2fd,0x4(%esp)
 81e3b4c:	00 
 81e3b4d:	89 04 24             	mov    %eax,(%esp)
 81e3b50:	e8 01 51 ee ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81e3b55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3b58:	89 04 24             	mov    %eax,(%esp)
 81e3b5b:	e8 36 51 ee ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81e3b60:	89 c3                	mov    %eax,%ebx
 81e3b62:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e3b65:	89 04 24             	mov    %eax,(%esp)
 81e3b68:	e8 d9 50 ee ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81e3b6d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e3b71:	89 04 24             	mov    %eax,(%esp)
 81e3b74:	e8 dd 50 ee ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81e3b79:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e3b7c:	89 04 24             	mov    %eax,(%esp)
 81e3b7f:	e8 ca 50 ee ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81e3b84:	89 04 24             	mov    %eax,(%esp)
 81e3b87:	e8 ac 38 05 00       	call   8237438 <_ZN12CStreamGuard11GetInBufferI29SIG_REQUEST_CHARAC_SKILL_INFOEEPT_v>
 81e3b8c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e3b8f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e3b92:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3b96:	0f be c0             	movsbl %al,%eax
 81e3b99:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e3b9c:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 81e3ba2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3ba6:	89 14 24             	mov    %edx,(%esp)
 81e3ba9:	e8 0a d0 fb ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 81e3bae:	8b 10                	mov    (%eax),%edx
 81e3bb0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3bb3:	89 10                	mov    %edx,(%eax)
 81e3bb5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81e3bba:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81e3bbd:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e3bc1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e3bc8:	00 
 81e3bc9:	89 04 24             	mov    %eax,(%esp)
 81e3bcc:	e8 0d d4 38 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81e3bd1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e3bd6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e3bd9:	89 04 24             	mov    %eax,(%esp)
 81e3bdc:	e8 f1 8c 43 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81e3be1:	eb 1b                	jmp    81e3bfe <_ZN33Dispatcher_RequestCharacSkillInfo7processEP5CUserR8MSG_BASER9ParamBase+0x21e>
 81e3be3:	89 d3                	mov    %edx,%ebx
 81e3be5:	89 c6                	mov    %eax,%esi
 81e3be7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81e3bea:	89 04 24             	mov    %eax,(%esp)
 81e3bed:	e8 e0 8c 43 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81e3bf2:	89 f0                	mov    %esi,%eax
 81e3bf4:	89 da                	mov    %ebx,%edx
 81e3bf6:	89 04 24             	mov    %eax,(%esp)
 81e3bf9:	e8 52 fb 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e3bfe:	89 d8                	mov    %ebx,%eax
 81e3c00:	83 c4 30             	add    $0x30,%esp
 81e3c03:	5b                   	pop    %ebx
 81e3c04:	5e                   	pop    %esi
 81e3c05:	5d                   	pop    %ebp
 81e3c06:	c3                   	ret
 81e3c07:	90                   	nop

```

```c
// Dispatcher_RequestCharacSkillInfo::process @ 0x81e39e0

/* Dispatcher_RequestCharacSkillInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestCharacSkillInfo::process
          (Dispatcher_RequestCharacSkillInfo *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  undefined4 *puVar7;
  CStreamGuard local_24 [8];
  ParamBase *local_1c;
  MSG_BASE *local_18;
  SIG_REQUEST_CHARAC_SKILL_INFO *local_14;
  int local_10;
  
  local_1c = param_3;
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_1c + 4) = uVar3;
  if (*(int *)(local_1c + 4) < 1) {
    if (*(int *)(local_1c + 4) < 0) {
      uVar3 = LineFunc(0x5b32,
                       "virtual int Dispatcher_RequestCharacSkillInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_1c + 4),0);
    }
    else {
      local_18 = param_2;
      iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                         (int)(char)param_2[0xd]);
      cVar2 = SkillSlot::IsLoadStrikerSkill((SkillSlot *)(iVar4 + 0x892));
      if (cVar2 == '\0') {
        pSVar5 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x5b40)
        ;
        CStreamGuard::CStreamGuard(local_24,pSVar5,true);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
                    /* try { // try from 081e3b50 to 081e3bd0 has its CatchHandler @ 081e3be3 */
        CStreamGuard::operator<<(pCVar6,0x2fd);
        iVar4 = CUser::GetUID(param_1);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_24);
        CStreamGuard::operator<<(pCVar6,iVar4);
        pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_24);
        local_14 = CStreamGuard::GetInBuffer<SIG_REQUEST_CHARAC_SKILL_INFO>(pCVar6);
        puVar7 = (undefined4 *)
                 std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                            ,(int)(char)local_18[0xd]);
        *(undefined4 *)local_14 = *puVar7;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_24);
        uVar3 = 0;
        CStreamGuard::~CStreamGuard(local_24);
      }
      else {
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)local_18[0xd]);
        local_10 = (int)*(char *)(iVar4 + 0x1239);
        MVar1 = local_18[0xd];
        iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)local_18[0xd]);
        SkillSlot::SendSkillInfo((SkillSlot *)(iVar4 + 0x892),(int)(char)MVar1,local_10);
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
// === 081e3914 Dispatcher_RequestCharacSkillInfo::read  [0x081e3914-0x81e39df] ===
 81e3914:	55                   	push   %ebp
 81e3915:	89 e5                	mov    %esp,%ebp
 81e3917:	83 ec 38             	sub    $0x38,%esp
 81e391a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e391d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3920:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3923:	83 c0 0d             	add    $0xd,%eax
 81e3926:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e392a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e392d:	89 04 24             	mov    %eax,(%esp)
 81e3930:	e8 ed 95 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e3935:	83 f0 01             	xor    $0x1,%eax
 81e3938:	84 c0                	test   %al,%al
 81e393a:	74 26                	je     81e3962 <_ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE+0x4e>
 81e393c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3943:	00 
 81e3944:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e394b:	00 
 81e394c:	c7 44 24 04 e0 12 bd 	movl   $0x8bd12e0,0x4(%esp)
 81e3953:	08 
 81e3954:	c7 04 24 1b 5b 00 00 	movl   $0x5b1b,(%esp)
 81e395b:	e8 77 cf 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3960:	eb 7b                	jmp    81e39dd <_ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE+0xc9>
 81e3962:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3965:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3969:	84 c0                	test   %al,%al
 81e396b:	78 0b                	js     81e3978 <_ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE+0x64>
 81e396d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3970:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e3974:	3c 23                	cmp    $0x23,%al
 81e3976:	7e 60                	jle    81e39d8 <_ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE+0xc4>
 81e3978:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e397b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e397f:	0f be c0             	movsbl %al,%eax
 81e3982:	89 44 24 14          	mov    %eax,0x14(%esp)
 81e3986:	c7 44 24 10 80 1b bc 	movl   $0x8bc1b80,0x10(%esp)
 81e398d:	08 
 81e398e:	c7 44 24 0c 20 5b 00 	movl   $0x5b20,0xc(%esp)
 81e3995:	00 
 81e3996:	c7 44 24 08 e0 12 bd 	movl   $0x8bd12e0,0x8(%esp)
 81e399d:	08 
 81e399e:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81e39a5:	08 
 81e39a6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81e39ad:	e8 58 02 8f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81e39b2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e39b9:	00 
 81e39ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e39c1:	00 
 81e39c2:	c7 44 24 04 e0 12 bd 	movl   $0x8bd12e0,0x4(%esp)
 81e39c9:	08 
 81e39ca:	c7 04 24 22 5b 00 00 	movl   $0x5b22,(%esp)
 81e39d1:	e8 01 cf 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e39d6:	eb 05                	jmp    81e39dd <_ZN33Dispatcher_RequestCharacSkillInfo4readER9PacketBufR8MSG_BASE+0xc9>
 81e39d8:	b8 00 00 00 00       	mov    $0x0,%eax
 81e39dd:	c9                   	leave
 81e39de:	c3                   	ret
 81e39df:	90                   	nop

```

```c
// Dispatcher_RequestCharacSkillInfo::read @ 0x81e3914

/* Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestCharacSkillInfo::read
          (Dispatcher_RequestCharacSkillInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if (((char)param_2[0xd] < '\0') || ('#' < (char)param_2[0xd])) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "virtual int Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)",0x5b20
                 ,"RequestCharacSkillInfo ReadPacket ERROR! : characIdx(%d)",(int)(char)param_2[0xd]
                );
      uVar2 = LineFunc(0x5b22,
                       "virtual int Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = LineFunc(0x5b1b,
                     "virtual int Dispatcher_RequestCharacSkillInfo::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e3cfa Dispatcher_RequestCharacSkillInfo::send  [0x081e3cfa-0x81e3d31] ===
 81e3cfa:	55                   	push   %ebp
 81e3cfb:	89 e5                	mov    %esp,%ebp
 81e3cfd:	83 ec 28             	sub    $0x28,%esp
 81e3d00:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3d03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3d06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3d09:	8b 40 04             	mov    0x4(%eax),%eax
 81e3d0c:	85 c0                	test   %eax,%eax
 81e3d0e:	74 20                	je     81e3d30 <_ZN33Dispatcher_RequestCharacSkillInfo4sendEP5CUserR9ParamBase+0x36>
 81e3d10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3d13:	8b 40 04             	mov    0x4(%eax),%eax
 81e3d16:	0f b6 c0             	movzbl %al,%eax
 81e3d19:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3d1d:	c7 44 24 04 e5 01 00 	movl   $0x1e5,0x4(%esp)
 81e3d24:	00 
 81e3d25:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3d28:	89 04 24             	mov    %eax,(%esp)
 81e3d2b:	e8 12 82 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e3d30:	c9                   	leave
 81e3d31:	c3                   	ret

```

```c
// Dispatcher_RequestCharacSkillInfo::send @ 0x81e3cfa

/* Dispatcher_RequestCharacSkillInfo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestCharacSkillInfo::send
          (Dispatcher_RequestCharacSkillInfo *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x1e5,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

