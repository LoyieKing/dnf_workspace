# Dispatcher_ChangeEmotion

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081d1cec Dispatcher_ChangeEmotion::check_error  [0x081d1cec-0x81d1d5f] ===
 81d1cec:	55                   	push   %ebp
 81d1ced:	89 e5                	mov    %esp,%ebp
 81d1cef:	83 ec 18             	sub    $0x18,%esp
 81d1cf2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d1cf6:	75 26                	jne    81d1d1e <_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE+0x32>
 81d1cf8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1cff:	00 
 81d1d00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1d07:	00 
 81d1d08:	c7 44 24 04 80 39 bd 	movl   $0x8bd3980,0x4(%esp)
 81d1d0f:	08 
 81d1d10:	c7 04 24 77 2e 00 00 	movl   $0x2e77,(%esp)
 81d1d17:	e8 bb eb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1d1c:	eb 3f                	jmp    81d1d5d <_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE+0x71>
 81d1d1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1d21:	89 04 24             	mov    %eax,(%esp)
 81d1d24:	e8 09 e7 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d1d29:	85 c0                	test   %eax,%eax
 81d1d2b:	0f 94 c0             	sete   %al
 81d1d2e:	84 c0                	test   %al,%al
 81d1d30:	74 26                	je     81d1d58 <_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE+0x6c>
 81d1d32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1d39:	00 
 81d1d3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1d41:	00 
 81d1d42:	c7 44 24 04 80 39 bd 	movl   $0x8bd3980,0x4(%esp)
 81d1d49:	08 
 81d1d4a:	c7 04 24 7a 2e 00 00 	movl   $0x2e7a,(%esp)
 81d1d51:	e8 81 eb 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1d56:	eb 05                	jmp    81d1d5d <_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE+0x71>
 81d1d58:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1d5d:	c9                   	leave
 81d1d5e:	c3                   	ret
 81d1d5f:	90                   	nop

```

```c
// Dispatcher_ChangeEmotion::check_error @ 0x81d1cec

/* Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ChangeEmotion::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x2e77,"int Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar1 = LineFunc(0x2e7a,"int Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)",0,0);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## isVaildEmotionValue

```asm
// === 081d1ebe Dispatcher_ChangeEmotion::isVaildEmotionValue  [0x081d1ebe-0x81d1f73] ===
 81d1ebe:	55                   	push   %ebp
 81d1ebf:	89 e5                	mov    %esp,%ebp
 81d1ec1:	83 ec 38             	sub    $0x38,%esp
 81d1ec4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1ec7:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81d1ecb:	e8 cb a2 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d1ed0:	8d 90 44 4d 00 00    	lea    0x4d44(%eax),%edx
 81d1ed6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81d1ed9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1edd:	89 04 24             	mov    %eax,(%esp)
 81d1ee0:	e8 63 c3 eb ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 81d1ee5:	83 ec 04             	sub    $0x4,%esp
 81d1ee8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81d1eeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1eef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81d1ef2:	89 04 24             	mov    %eax,(%esp)
 81d1ef5:	e8 f2 7a f2 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 81d1efa:	e8 9c a2 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d1eff:	8d 90 44 4d 00 00    	lea    0x4d44(%eax),%edx
 81d1f05:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81d1f08:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1f0c:	89 04 24             	mov    %eax,(%esp)
 81d1f0f:	e8 58 c3 eb ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81d1f14:	83 ec 04             	sub    $0x4,%esp
 81d1f17:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81d1f1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1f1e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1f21:	89 04 24             	mov    %eax,(%esp)
 81d1f24:	e8 c3 7a f2 ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 81d1f29:	eb 2c                	jmp    81d1f57 <_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs+0x99>
 81d1f2b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81d1f2e:	89 04 24             	mov    %eax,(%esp)
 81d1f31:	e8 e6 7a f2 ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 81d1f36:	8b 10                	mov    (%eax),%edx
 81d1f38:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 81d1f3c:	39 c2                	cmp    %eax,%edx
 81d1f3e:	0f 94 c0             	sete   %al
 81d1f41:	84 c0                	test   %al,%al
 81d1f43:	74 07                	je     81d1f4c <_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs+0x8e>
 81d1f45:	b8 01 00 00 00       	mov    $0x1,%eax
 81d1f4a:	eb 26                	jmp    81d1f72 <_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs+0xb4>
 81d1f4c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81d1f4f:	89 04 24             	mov    %eax,(%esp)
 81d1f52:	e8 af 7a f2 ff       	call   80f9a06 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEv>
 81d1f57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1f5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1f5e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81d1f61:	89 04 24             	mov    %eax,(%esp)
 81d1f64:	e8 bd 7a f2 ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 81d1f69:	84 c0                	test   %al,%al
 81d1f6b:	75 be                	jne    81d1f2b <_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs+0x6d>
 81d1f6d:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1f72:	c9                   	leave
 81d1f73:	c3                   	ret

```

```c
// Dispatcher_ChangeEmotion::isVaildEmotionValue @ 0x81d1ebe

/* Dispatcher_ChangeEmotion::isVaildEmotionValue(short) */

undefined4 __thiscall
Dispatcher_ChangeEmotion::isVaildEmotionValue(Dispatcher_ChangeEmotion *this,short param_1)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  G_CDataManager();
  std::vector<int,std::allocator<int>>::begin();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_18,local_14);
  G_CDataManager();
  std::vector<int,std::allocator<int>>::end();
  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
  __normal_iterator<int*>(local_1c,local_10);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                    operator*(local_18);
    if (*piVar2 == (int)param_1) break;
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_18);
  }
  return 1;
}

```

---

## process

```asm
// === 081d1b5e Dispatcher_ChangeEmotion::process  [0x081d1b5e-0x81d1ceb] ===
 81d1b5e:	55                   	push   %ebp
 81d1b5f:	89 e5                	mov    %esp,%ebp
 81d1b61:	56                   	push   %esi
 81d1b62:	53                   	push   %ebx
 81d1b63:	83 ec 20             	sub    $0x20,%esp
 81d1b66:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1b69:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1b6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1b70:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1b74:	8b 45 08             	mov    0x8(%ebp),%eax
 81d1b77:	89 04 24             	mov    %eax,(%esp)
 81d1b7a:	e8 6d 01 00 00       	call   81d1cec <_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE>
 81d1b7f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d1b82:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d1b86:	7e 08                	jle    81d1b90 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d1b88:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 81d1b8b:	e9 52 01 00 00       	jmp    81d1ce2 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x184>
 81d1b90:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d1b94:	79 0a                	jns    81d1ba0 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x42>
 81d1b96:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81d1b9b:	e9 42 01 00 00       	jmp    81d1ce2 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x184>
 81d1ba0:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1ba3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d1ba6:	8b 45 14             	mov    0x14(%ebp),%eax
 81d1ba9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d1bac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d1baf:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 81d1bb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1bb6:	66 89 50 04          	mov    %dx,0x4(%eax)
 81d1bba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1bbd:	89 04 24             	mov    %eax,(%esp)
 81d1bc0:	e8 c7 87 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d1bc5:	83 f8 02             	cmp    $0x2,%eax
 81d1bc8:	0f 9e c0             	setle  %al
 81d1bcb:	84 c0                	test   %al,%al
 81d1bcd:	74 2c                	je     81d1bfb <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81d1bcf:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81d1bd6:	e8 25 3c 55 00       	call   8725800 <__cxa_allocate_exception>
 81d1bdb:	89 c2                	mov    %eax,%edx
 81d1bdd:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 81d1be3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1bea:	00 
 81d1beb:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81d1bf2:	08 
 81d1bf3:	89 04 24             	mov    %eax,(%esp)
 81d1bf6:	e8 55 30 55 00       	call   8724c50 <__cxa_throw>
 81d1bfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1bfe:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81d1c02:	98                   	cwtl
 81d1c03:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1c07:	8b 45 08             	mov    0x8(%ebp),%eax
 81d1c0a:	89 04 24             	mov    %eax,(%esp)
 81d1c0d:	e8 ac 02 00 00       	call   81d1ebe <_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs>
 81d1c12:	83 f0 01             	xor    $0x1,%eax
 81d1c15:	84 c0                	test   %al,%al
 81d1c17:	0f 84 84 00 00 00    	je     81d1ca1 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x143>
 81d1c1d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81d1c24:	e8 d7 3b 55 00       	call   8725800 <__cxa_allocate_exception>
 81d1c29:	89 c2                	mov    %eax,%edx
 81d1c2b:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 81d1c31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1c38:	00 
 81d1c39:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 81d1c40:	08 
 81d1c41:	89 04 24             	mov    %eax,(%esp)
 81d1c44:	e8 07 30 55 00       	call   8724c50 <__cxa_throw>
 81d1c49:	83 fa 01             	cmp    $0x1,%edx
 81d1c4c:	74 08                	je     81d1c56 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0xf8>
 81d1c4e:	89 04 24             	mov    %eax,(%esp)
 81d1c51:	e8 fa 1a 91 00       	call   8ae3750 <_Unwind_Resume>
 81d1c56:	89 04 24             	mov    %eax,(%esp)
 81d1c59:	e8 82 40 55 00       	call   8725ce0 <__cxa_begin_catch>
 81d1c5e:	8b 00                	mov    (%eax),%eax
 81d1c60:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1c63:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1c66:	0f b6 c0             	movzbl %al,%eax
 81d1c69:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d1c6d:	c7 44 24 04 02 01 00 	movl   $0x102,0x4(%esp)
 81d1c74:	00 
 81d1c75:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1c78:	89 04 24             	mov    %eax,(%esp)
 81d1c7b:	e8 c2 a2 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d1c80:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81d1c85:	e8 a6 3f 55 00       	call   8725c30 <__cxa_end_catch>
 81d1c8a:	eb 56                	jmp    81d1ce2 <_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase+0x184>
 81d1c8c:	89 d3                	mov    %edx,%ebx
 81d1c8e:	89 c6                	mov    %eax,%esi
 81d1c90:	e8 9b 3f 55 00       	call   8725c30 <__cxa_end_catch>
 81d1c95:	89 f0                	mov    %esi,%eax
 81d1c97:	89 da                	mov    %ebx,%edx
 81d1c99:	89 04 24             	mov    %eax,(%esp)
 81d1c9c:	e8 af 1a 91 00       	call   8ae3750 <_Unwind_Resume>
 81d1ca1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d1ca4:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81d1ca8:	0f bf d0             	movswl %ax,%edx
 81d1cab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1cae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1cb2:	89 04 24             	mov    %eax,(%esp)
 81d1cb5:	e8 7c da 05 00       	call   822f736 <_ZN15CUserCharacInfo19SetCurCharacEmotionEs>
 81d1cba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1cc1:	00 
 81d1cc2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1cc9:	00 
 81d1cca:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81d1cd1:	00 
 81d1cd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1cd5:	89 04 24             	mov    %eax,(%esp)
 81d1cd8:	e8 b3 06 f5 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 81d1cdd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d1ce2:	89 d8                	mov    %ebx,%eax
 81d1ce4:	83 c4 20             	add    $0x20,%esp
 81d1ce7:	5b                   	pop    %ebx
 81d1ce8:	5e                   	pop    %esi
 81d1ce9:	5d                   	pop    %ebp
 81d1cea:	c3                   	ret
 81d1ceb:	90                   	nop

```

```c
// Dispatcher_ChangeEmotion::process @ 0x81d1b5e

/* Dispatcher_ChangeEmotion::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_ChangeEmotion::process
          (Dispatcher_ChangeEmotion *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  CUser *pCVar4;
  MSG_BASE *pMVar5;
  
  pCVar4 = param_1;
  pMVar5 = param_2;
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 0xd);
      iVar2 = CUser::get_state(param_1);
      if (iVar2 < 3) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4,pCVar4,pMVar5);
        *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 081d1bf6 to 081d1c48 has its CatchHandler @ 081d1c49 */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      iVar2 = (int)*(short *)(param_3 + 4);
      cVar1 = isVaildEmotionValue(this,*(short *)(param_3 + 4));
      if (cVar1 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4,iVar2,pMVar5);
        *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      CUserCharacInfo::SetCurCharacEmotion((CUserCharacInfo *)param_1,*(short *)(param_3 + 4));
      APSystem::CUserProc::ClearActionAndSendtoUser(param_1,3,0,0);
      iVar2 = 0;
    }
  }
  return iVar2;
}

```

---

## read

```asm
// === 081d1b08 Dispatcher_ChangeEmotion::read  [0x081d1b08-0x81d1b5d] ===
 81d1b08:	55                   	push   %ebp
 81d1b09:	89 e5                	mov    %esp,%ebp
 81d1b0b:	83 ec 28             	sub    $0x28,%esp
 81d1b0e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1b11:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1b14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1b17:	83 c0 0d             	add    $0xd,%eax
 81d1b1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1b21:	89 04 24             	mov    %eax,(%esp)
 81d1b24:	e8 97 b4 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d1b29:	83 f0 01             	xor    $0x1,%eax
 81d1b2c:	84 c0                	test   %al,%al
 81d1b2e:	74 26                	je     81d1b56 <_ZN24Dispatcher_ChangeEmotion4readER9PacketBufR8MSG_BASE+0x4e>
 81d1b30:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d1b37:	00 
 81d1b38:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1b3f:	00 
 81d1b40:	c7 44 24 04 c0 39 bd 	movl   $0x8bd39c0,0x4(%esp)
 81d1b47:	08 
 81d1b48:	c7 04 24 3d 2e 00 00 	movl   $0x2e3d,(%esp)
 81d1b4f:	e8 83 ed 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d1b54:	eb 05                	jmp    81d1b5b <_ZN24Dispatcher_ChangeEmotion4readER9PacketBufR8MSG_BASE+0x53>
 81d1b56:	b8 00 00 00 00       	mov    $0x0,%eax
 81d1b5b:	c9                   	leave
 81d1b5c:	c3                   	ret
 81d1b5d:	90                   	nop

```

```c
// Dispatcher_ChangeEmotion::read @ 0x81d1b08

/* Dispatcher_ChangeEmotion::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeEmotion::read(Dispatcher_ChangeEmotion *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2e3d,"virtual int Dispatcher_ChangeEmotion::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d1d60 Dispatcher_ChangeEmotion::send  [0x081d1d60-0x81d1ebd] ===
 81d1d60:	55                   	push   %ebp
 81d1d61:	89 e5                	mov    %esp,%ebp
 81d1d63:	56                   	push   %esi
 81d1d64:	53                   	push   %ebx
 81d1d65:	83 ec 20             	sub    $0x20,%esp
 81d1d68:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81d1d6c:	0f 84 44 01 00 00    	je     81d1eb6 <_ZN24Dispatcher_ChangeEmotion4sendEP5CUserR9ParamBase+0x156>
 81d1d72:	8b 45 10             	mov    0x10(%ebp),%eax
 81d1d75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d1d78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1d7b:	89 04 24             	mov    %eax,(%esp)
 81d1d7e:	e8 c9 bf 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d1d83:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1d86:	89 04 24             	mov    %eax,(%esp)
 81d1d89:	e8 58 9b ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81d1d8e:	c7 44 24 08 02 01 00 	movl   $0x102,0x8(%esp)
 81d1d95:	00 
 81d1d96:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d1d9d:	00 
 81d1d9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1da1:	89 04 24             	mov    %eax,(%esp)
 81d1da4:	e8 53 9b ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d1da9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d1db0:	00 
 81d1db1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1db4:	89 04 24             	mov    %eax,(%esp)
 81d1db7:	e8 64 9b ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d1dbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d1dbf:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81d1dc3:	98                   	cwtl
 81d1dc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1dc8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1dcb:	89 04 24             	mov    %eax,(%esp)
 81d1dce:	e8 d1 80 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d1dd3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d1dda:	00 
 81d1ddb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1dde:	89 04 24             	mov    %eax,(%esp)
 81d1de1:	e8 72 9b ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d1de6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1de9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1ded:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1df0:	89 04 24             	mov    %eax,(%esp)
 81d1df3:	e8 c2 67 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d1df8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1dfb:	89 04 24             	mov    %eax,(%esp)
 81d1dfe:	e8 e3 9a ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81d1e03:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81d1e0a:	00 
 81d1e0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d1e12:	00 
 81d1e13:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1e16:	89 04 24             	mov    %eax,(%esp)
 81d1e19:	e8 de 9a ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d1e1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d1e25:	00 
 81d1e26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1e29:	89 04 24             	mov    %eax,(%esp)
 81d1e2c:	e8 ef 9a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d1e31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d1e38:	00 
 81d1e39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1e3c:	89 04 24             	mov    %eax,(%esp)
 81d1e3f:	e8 60 80 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d1e44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1e47:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d1e4e:	00 
 81d1e4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d1e53:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d1e56:	89 04 24             	mov    %eax,(%esp)
 81d1e59:	e8 f0 85 48 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 81d1e5e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d1e65:	00 
 81d1e66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1e69:	89 04 24             	mov    %eax,(%esp)
 81d1e6c:	e8 e7 9a ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d1e71:	e8 31 85 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d1e76:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d1e79:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d1e7d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81d1e80:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d1e84:	89 04 24             	mov    %eax,(%esp)
 81d1e87:	e8 d0 2a f6 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 81d1e8c:	eb 1b                	jmp    81d1ea9 <_ZN24Dispatcher_ChangeEmotion4sendEP5CUserR9ParamBase+0x149>
 81d1e8e:	89 d3                	mov    %edx,%ebx
 81d1e90:	89 c6                	mov    %eax,%esi
 81d1e92:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1e95:	89 04 24             	mov    %eax,(%esp)
 81d1e98:	e8 e3 bf 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d1e9d:	89 f0                	mov    %esi,%eax
 81d1e9f:	89 da                	mov    %ebx,%edx
 81d1ea1:	89 04 24             	mov    %eax,(%esp)
 81d1ea4:	e8 a7 18 91 00       	call   8ae3750 <_Unwind_Resume>
 81d1ea9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d1eac:	89 04 24             	mov    %eax,(%esp)
 81d1eaf:	e8 cc bf 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d1eb4:	eb 01                	jmp    81d1eb7 <_ZN24Dispatcher_ChangeEmotion4sendEP5CUserR9ParamBase+0x157>
 81d1eb6:	90                   	nop
 81d1eb7:	83 c4 20             	add    $0x20,%esp
 81d1eba:	5b                   	pop    %ebx
 81d1ebb:	5e                   	pop    %esi
 81d1ebc:	5d                   	pop    %ebp
 81d1ebd:	c3                   	ret

```

```c
// Dispatcher_ChangeEmotion::send @ 0x81d1d60

/* Dispatcher_ChangeEmotion::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ChangeEmotion::send(Dispatcher_ChangeEmotion *this,CUser *param_1,ParamBase *param_2)

{
  GameWorld *this_00;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_10 = param_2;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d1d89 to 081d1e8b has its CatchHandler @ 081d1e8e */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x102);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    CUser::make_basic_info(param_1,(char *)local_1c,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_1c,param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

