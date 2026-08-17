# CodeHackCheckStorage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CodeHackCheckStorage

```asm
// === 08575c22 CodeHackCheckStorage::CodeHackCheckStorage  [0x08575c22-0x8575c9d] ===
 8575c22:	55                   	push   %ebp
 8575c23:	89 e5                	mov    %esp,%ebp
 8575c25:	56                   	push   %esi
 8575c26:	53                   	push   %ebx
 8575c27:	83 ec 40             	sub    $0x40,%esp
 8575c2a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8575c2d:	89 04 24             	mov    %eax,(%esp)
 8575c30:	e8 11 13 00 00       	call   8576f46 <_ZNSt5dequeI18CodeHackChecksumExSaIS0_EEC1Ev>
 8575c35:	8b 45 08             	mov    0x8(%ebp),%eax
 8575c38:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8575c3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575c3f:	89 04 24             	mov    %eax,(%esp)
 8575c42:	e8 a1 13 00 00       	call   8576fe8 <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEEC1EOS3_>
 8575c47:	eb 1b                	jmp    8575c64 <_ZN20CodeHackCheckStorageC1Ev+0x42>
 8575c49:	89 d3                	mov    %edx,%ebx
 8575c4b:	89 c6                	mov    %eax,%esi
 8575c4d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8575c50:	89 04 24             	mov    %eax,(%esp)
 8575c53:	e8 02 13 00 00       	call   8576f5a <_ZNSt5dequeI18CodeHackChecksumExSaIS0_EED1Ev>
 8575c58:	89 f0                	mov    %esi,%eax
 8575c5a:	89 da                	mov    %ebx,%edx
 8575c5c:	89 04 24             	mov    %eax,(%esp)
 8575c5f:	e8 ec da 56 00       	call   8ae3750 <_Unwind_Resume>
 8575c64:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8575c67:	89 04 24             	mov    %eax,(%esp)
 8575c6a:	e8 eb 12 00 00       	call   8576f5a <_ZNSt5dequeI18CodeHackChecksumExSaIS0_EED1Ev>
 8575c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8575c72:	89 04 24             	mov    %eax,(%esp)
 8575c75:	e8 fa 01 00 00       	call   8575e74 <_ZN20CodeHackCheckStorage5resetEv>
 8575c7a:	eb 1b                	jmp    8575c97 <_ZN20CodeHackCheckStorageC1Ev+0x75>
 8575c7c:	89 d3                	mov    %edx,%ebx
 8575c7e:	89 c6                	mov    %eax,%esi
 8575c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8575c83:	89 04 24             	mov    %eax,(%esp)
 8575c86:	e8 57 02 00 00       	call   8575ee2 <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEED1Ev>
 8575c8b:	89 f0                	mov    %esi,%eax
 8575c8d:	89 da                	mov    %ebx,%edx
 8575c8f:	89 04 24             	mov    %eax,(%esp)
 8575c92:	e8 b9 da 56 00       	call   8ae3750 <_Unwind_Resume>
 8575c97:	83 c4 40             	add    $0x40,%esp
 8575c9a:	5b                   	pop    %ebx
 8575c9b:	5e                   	pop    %esi
 8575c9c:	5d                   	pop    %ebp
 8575c9d:	c3                   	ret

```

```c
// CodeHackCheckStorage::CodeHackCheckStorage @ 0x8575c22

/* CodeHackCheckStorage::CodeHackCheckStorage() */

void __thiscall CodeHackCheckStorage::CodeHackCheckStorage(CodeHackCheckStorage *this)

{
  deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>> local_34 [40];
  
  std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>::deque(local_34);
                    /* try { // try from 08575c42 to 08575c46 has its CatchHandler @ 08575c49 */
  std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>::
  queue((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
         *)this,(deque *)local_34);
  std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>::~deque(local_34);
                    /* try { // try from 08575c75 to 08575c79 has its CatchHandler @ 08575c7c */
  reset(this);
  return;
}

```

---

## IsEmpty

```asm
// === 08575c9e CodeHackCheckStorage::IsEmpty  [0x08575c9e-0x8575cb5] ===
 8575c9e:	55                   	push   %ebp
 8575c9f:	89 e5                	mov    %esp,%ebp
 8575ca1:	83 ec 18             	sub    $0x18,%esp
 8575ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 8575ca7:	89 04 24             	mov    %eax,(%esp)
 8575caa:	e8 5b 13 00 00       	call   857700a <_ZNKSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE4sizeEv>
 8575caf:	85 c0                	test   %eax,%eax
 8575cb1:	0f 94 c0             	sete   %al
 8575cb4:	c9                   	leave
 8575cb5:	c3                   	ret

```

```c
// CodeHackCheckStorage::IsEmpty @ 0x8575c9e

/* CodeHackCheckStorage::IsEmpty() */

bool __thiscall CodeHackCheckStorage::IsEmpty(CodeHackCheckStorage *this)

{
  int iVar1;
  
  iVar1 = std::
          queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
          ::size((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
                  *)this);
  return iVar1 == 0;
}

```

---

## IsFull

```asm
// === 08575cb6 CodeHackCheckStorage::IsFull  [0x08575cb6-0x8575ccf] ===
 8575cb6:	55                   	push   %ebp
 8575cb7:	89 e5                	mov    %esp,%ebp
 8575cb9:	83 ec 18             	sub    $0x18,%esp
 8575cbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8575cbf:	89 04 24             	mov    %eax,(%esp)
 8575cc2:	e8 43 13 00 00       	call   857700a <_ZNKSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE4sizeEv>
 8575cc7:	83 f8 30             	cmp    $0x30,%eax
 8575cca:	0f 94 c0             	sete   %al
 8575ccd:	c9                   	leave
 8575cce:	c3                   	ret
 8575ccf:	90                   	nop

```

```c
// CodeHackCheckStorage::IsFull @ 0x8575cb6

/* CodeHackCheckStorage::IsFull() */

bool __thiscall CodeHackCheckStorage::IsFull(CodeHackCheckStorage *this)

{
  int iVar1;
  
  iVar1 = std::
          queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
          ::size((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
                  *)this);
  return iVar1 == 0x30;
}

```

---

## IsRightChecksum

```asm
// === 08575dc4 CodeHackCheckStorage::IsRightChecksum  [0x08575dc4-0x8575dfb] ===
 8575dc4:	55                   	push   %ebp
 8575dc5:	89 e5                	mov    %esp,%ebp
 8575dc7:	83 ec 18             	sub    $0x18,%esp
 8575dca:	8b 45 08             	mov    0x8(%ebp),%eax
 8575dcd:	89 04 24             	mov    %eax,(%esp)
 8575dd0:	e8 c9 fe ff ff       	call   8575c9e <_ZN20CodeHackCheckStorage7IsEmptyEv>
 8575dd5:	84 c0                	test   %al,%al
 8575dd7:	74 07                	je     8575de0 <_ZN20CodeHackCheckStorage15IsRightChecksumEPK16CodeHackChecksum+0x1c>
 8575dd9:	b8 00 00 00 00       	mov    $0x0,%eax
 8575dde:	eb 1a                	jmp    8575dfa <_ZN20CodeHackCheckStorage15IsRightChecksumEPK16CodeHackChecksum+0x36>
 8575de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8575de3:	89 04 24             	mov    %eax,(%esp)
 8575de6:	e8 4d 12 00 00       	call   8577038 <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE5frontEv>
 8575deb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575dee:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575df2:	89 04 24             	mov    %eax,(%esp)
 8575df5:	e8 ce 4a b1 ff       	call   808a8c8 <_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum>
 8575dfa:	c9                   	leave
 8575dfb:	c3                   	ret

```

```c
// CodeHackCheckStorage::IsRightChecksum @ 0x8575dc4

/* CodeHackCheckStorage::IsRightChecksum(CodeHackChecksum const*) */

undefined4 __thiscall
CodeHackCheckStorage::IsRightChecksum(CodeHackCheckStorage *this,CodeHackChecksum *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CodeHackChecksumEx *this_00;
  
  cVar1 = IsEmpty(this);
  if (cVar1 == '\0') {
    this_00 = (CodeHackChecksumEx *)
              std::
              queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
              ::front();
    uVar2 = CodeHackChecksumEx::IsRightChecksum(this_00,param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## PopData

```asm
// === 08575d06 CodeHackCheckStorage::PopData  [0x08575d06-0x8575dab] ===
 8575d06:	55                   	push   %ebp
 8575d07:	89 e5                	mov    %esp,%ebp
 8575d09:	56                   	push   %esi
 8575d0a:	53                   	push   %ebx
 8575d0b:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8575d11:	8b 45 08             	mov    0x8(%ebp),%eax
 8575d14:	89 04 24             	mov    %eax,(%esp)
 8575d17:	e8 82 ff ff ff       	call   8575c9e <_ZN20CodeHackCheckStorage7IsEmptyEv>
 8575d1c:	84 c0                	test   %al,%al
 8575d1e:	74 07                	je     8575d27 <_ZN20CodeHackCheckStorage7PopDataEPc+0x21>
 8575d20:	bb 00 00 00 00       	mov    $0x0,%ebx
 8575d25:	eb 78                	jmp    8575d9f <_ZN20CodeHackCheckStorage7PopDataEPc+0x99>
 8575d27:	8b 45 08             	mov    0x8(%ebp),%eax
 8575d2a:	89 04 24             	mov    %eax,(%esp)
 8575d2d:	e8 06 13 00 00       	call   8577038 <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE5frontEv>
 8575d32:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575d36:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8575d3c:	89 04 24             	mov    %eax,(%esp)
 8575d3f:	e8 cc 01 00 00       	call   8575f10 <_ZN18CodeHackChecksumExC1ERKS_>
 8575d44:	8b 45 08             	mov    0x8(%ebp),%eax
 8575d47:	89 04 24             	mov    %eax,(%esp)
 8575d4a:	e8 2f 02 00 00       	call   8575f7e <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE3popEv>
 8575d4f:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8575d55:	89 04 24             	mov    %eax,(%esp)
 8575d58:	e8 6f 4a b1 ff       	call   808a7cc <_ZN18CodeHackChecksumEx11GetFileNameEv>
 8575d5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575d61:	8b 45 0c             	mov    0xc(%ebp),%eax
 8575d64:	89 04 24             	mov    %eax,(%esp)
 8575d67:	e8 84 81 b0 ff       	call   807def0 <strcpy@plt>
 8575d6c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8575d71:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8575d77:	89 04 24             	mov    %eax,(%esp)
 8575d7a:	e8 ed 49 b1 ff       	call   808a76c <_ZN18CodeHackChecksumExD1Ev>
 8575d7f:	eb 1e                	jmp    8575d9f <_ZN20CodeHackCheckStorage7PopDataEPc+0x99>
 8575d81:	89 d3                	mov    %edx,%ebx
 8575d83:	89 c6                	mov    %eax,%esi
 8575d85:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8575d8b:	89 04 24             	mov    %eax,(%esp)
 8575d8e:	e8 d9 49 b1 ff       	call   808a76c <_ZN18CodeHackChecksumExD1Ev>
 8575d93:	89 f0                	mov    %esi,%eax
 8575d95:	89 da                	mov    %ebx,%edx
 8575d97:	89 04 24             	mov    %eax,(%esp)
 8575d9a:	e8 b1 d9 56 00       	call   8ae3750 <_Unwind_Resume>
 8575d9f:	89 d8                	mov    %ebx,%eax
 8575da1:	81 c4 30 01 00 00    	add    $0x130,%esp
 8575da7:	5b                   	pop    %ebx
 8575da8:	5e                   	pop    %esi
 8575da9:	5d                   	pop    %ebp
 8575daa:	c3                   	ret
 8575dab:	90                   	nop

```

```c
// CodeHackCheckStorage::PopData @ 0x8575d06

/* CodeHackCheckStorage::PopData(char*) */

bool __thiscall CodeHackCheckStorage::PopData(CodeHackCheckStorage *this,char *param_1)

{
  char cVar1;
  CodeHackChecksumEx *pCVar2;
  char *__src;
  CodeHackChecksumEx local_124 [280];
  
  cVar1 = IsEmpty(this);
  if (cVar1 == '\0') {
    pCVar2 = (CodeHackChecksumEx *)
             std::
             queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
             ::front();
    CodeHackChecksumEx::CodeHackChecksumEx(local_124,pCVar2);
                    /* try { // try from 08575d4a to 08575d5c has its CatchHandler @ 08575d81 */
    std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
    ::pop((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
           *)this);
    __src = (char *)CodeHackChecksumEx::GetFileName(local_124);
    strcpy(param_1,__src);
    CodeHackChecksumEx::~CodeHackChecksumEx(local_124);
  }
  return cVar1 == '\0';
}

```

---

## PopData_08575dac

```asm
// === 08575dac CodeHackCheckStorage::PopData  [0x08575dac-0x8575dc3] ===
 8575dac:	55                   	push   %ebp
 8575dad:	89 e5                	mov    %esp,%ebp
 8575daf:	83 ec 18             	sub    $0x18,%esp
 8575db2:	8b 45 08             	mov    0x8(%ebp),%eax
 8575db5:	89 04 24             	mov    %eax,(%esp)
 8575db8:	e8 c1 01 00 00       	call   8575f7e <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE3popEv>
 8575dbd:	b8 01 00 00 00       	mov    $0x1,%eax
 8575dc2:	c9                   	leave
 8575dc3:	c3                   	ret

```

```c
// CodeHackCheckStorage::PopData @ 0x8575dac

/* CodeHackCheckStorage::PopData() */

undefined4 __thiscall CodeHackCheckStorage::PopData(CodeHackCheckStorage *this)

{
  std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>::
  pop((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>> *
      )this);
  return 1;
}

```

---

## PushData

```asm
// === 08575cd0 CodeHackCheckStorage::PushData  [0x08575cd0-0x8575d05] ===
 8575cd0:	55                   	push   %ebp
 8575cd1:	89 e5                	mov    %esp,%ebp
 8575cd3:	83 ec 18             	sub    $0x18,%esp
 8575cd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8575cd9:	89 04 24             	mov    %eax,(%esp)
 8575cdc:	e8 d5 ff ff ff       	call   8575cb6 <_ZN20CodeHackCheckStorage6IsFullEv>
 8575ce1:	84 c0                	test   %al,%al
 8575ce3:	74 07                	je     8575cec <_ZN20CodeHackCheckStorage8PushDataEPK18CodeHackChecksumEx+0x1c>
 8575ce5:	b8 00 00 00 00       	mov    $0x0,%eax
 8575cea:	eb 17                	jmp    8575d03 <_ZN20CodeHackCheckStorage8PushDataEPK18CodeHackChecksumEx+0x33>
 8575cec:	8b 45 08             	mov    0x8(%ebp),%eax
 8575cef:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575cf2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575cf6:	89 04 24             	mov    %eax,(%esp)
 8575cf9:	e8 20 13 00 00       	call   857701e <_ZNSt5queueI18CodeHackChecksumExSt5dequeIS0_SaIS0_EEE4pushERKS0_>
 8575cfe:	b8 01 00 00 00       	mov    $0x1,%eax
 8575d03:	c9                   	leave
 8575d04:	c3                   	ret
 8575d05:	90                   	nop

```

```c
// CodeHackCheckStorage::PushData @ 0x8575cd0

/* CodeHackCheckStorage::PushData(CodeHackChecksumEx const*) */

bool __thiscall
CodeHackCheckStorage::PushData(CodeHackCheckStorage *this,CodeHackChecksumEx *param_1)

{
  char cVar1;
  
  cVar1 = IsFull(this);
  if (cVar1 == '\0') {
    std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
    ::push((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
            *)this,param_1);
  }
  return cVar1 == '\0';
}

```

