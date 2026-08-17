# private_store__CErrorHandler

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Do

```asm
// === 085c4c7c private_store::CErrorHandler::Do  [0x085c4c7c-0x85c4d0f] ===
 85c4c7c:	55                   	push   %ebp
 85c4c7d:	89 e5                	mov    %esp,%ebp
 85c4c7f:	56                   	push   %esi
 85c4c80:	53                   	push   %ebx
 85c4c81:	83 ec 20             	sub    $0x20,%esp
 85c4c84:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4c87:	8b 00                	mov    (%eax),%eax
 85c4c89:	85 c0                	test   %eax,%eax
 85c4c8b:	75 07                	jne    85c4c94 <_ZN13private_store13CErrorHandler2DoEi+0x18>
 85c4c8d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c4c92:	eb 72                	jmp    85c4d06 <_ZN13private_store13CErrorHandler2DoEi+0x8a>
 85c4c94:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c4c97:	89 04 24             	mov    %eax,(%esp)
 85c4c9a:	e8 d3 6c 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c4c9f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ca2:	8b 50 08             	mov    0x8(%eax),%edx
 85c4ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ca8:	8b 40 04             	mov    0x4(%eax),%eax
 85c4cab:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85c4cae:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c4cb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c4cb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c4cba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c4cbd:	89 04 24             	mov    %eax,(%esp)
 85c4cc0:	e8 6b 7b 00 00       	call   85cc830 <_ZN13private_store17CPacketBufPrivate21MakeErrorReturnPacketEiii>
 85c4cc5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4cc8:	8b 00                	mov    (%eax),%eax
 85c4cca:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85c4ccd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c4cd1:	89 04 24             	mov    %eax,(%esp)
 85c4cd4:	e8 e1 38 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c4cd9:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c4cde:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c4ce1:	89 04 24             	mov    %eax,(%esp)
 85c4ce4:	e8 c3 7d 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c4ce9:	eb 1b                	jmp    85c4d06 <_ZN13private_store13CErrorHandler2DoEi+0x8a>
 85c4ceb:	89 d3                	mov    %edx,%ebx
 85c4ced:	89 c6                	mov    %eax,%esi
 85c4cef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c4cf2:	89 04 24             	mov    %eax,(%esp)
 85c4cf5:	e8 b2 7d 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c4cfa:	89 f0                	mov    %esi,%eax
 85c4cfc:	89 da                	mov    %ebx,%edx
 85c4cfe:	89 04 24             	mov    %eax,(%esp)
 85c4d01:	e8 4a ea 51 00       	call   8ae3750 <_Unwind_Resume>
 85c4d06:	89 d8                	mov    %ebx,%eax
 85c4d08:	83 c4 20             	add    $0x20,%esp
 85c4d0b:	5b                   	pop    %ebx
 85c4d0c:	5e                   	pop    %esi
 85c4d0d:	5d                   	pop    %ebp
 85c4d0e:	c3                   	ret
 85c4d0f:	90                   	nop

```

```c
// private_store::CErrorHandler::Do @ 0x85c4c7c

/* private_store::CErrorHandler::Do(int) */

bool __thiscall private_store::CErrorHandler::Do(CErrorHandler *this,int param_1)

{
  int iVar1;
  CPacketBufPrivate local_18 [12];
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    CPacketBufPrivate::CPacketBufPrivate(local_18);
                    /* try { // try from 085c4cc0 to 085c4cd8 has its CatchHandler @ 085c4ceb */
    CPacketBufPrivate::MakeErrorReturnPacket(local_18,*(int *)(this + 4),*(int *)(this + 8),param_1)
    ;
    CUser::Send(*(CUser **)this,(PacketGuard *)local_18);
    CPacketBufPrivate::~CPacketBufPrivate(local_18);
  }
  return iVar1 != 0;
}

```

