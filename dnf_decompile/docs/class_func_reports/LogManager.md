# LogManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## getLogWriter

```asm
// === 08ad3f24 LogManager::getLogWriter  [0x08ad3f24-0x8ad3f63] ===
 8ad3f24:	55                   	push   %ebp
 8ad3f25:	89 e5                	mov    %esp,%ebp
 8ad3f27:	56                   	push   %esi
 8ad3f28:	53                   	push   %ebx
 8ad3f29:	83 ec 10             	sub    $0x10,%esp
 8ad3f2c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad3f2f:	e8 6c fc ff ff       	call   8ad3ba0 <_ZL11prepareDatav>
 8ad3f34:	89 de                	mov    %ebx,%esi
 8ad3f36:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad3f39:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3f3e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3f42:	89 04 24             	mov    %eax,(%esp)
 8ad3f45:	e8 14 04 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3f4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3f4e:	89 34 24             	mov    %esi,(%esp)
 8ad3f51:	e8 9a 01 00 00       	call   8ad40f0 <_ZNSt10shared_ptrI9LogWriterEC1ERKS1_>
 8ad3f56:	89 d8                	mov    %ebx,%eax
 8ad3f58:	89 d8                	mov    %ebx,%eax
 8ad3f5a:	83 c4 10             	add    $0x10,%esp
 8ad3f5d:	5b                   	pop    %ebx
 8ad3f5e:	5e                   	pop    %esi
 8ad3f5f:	5d                   	pop    %ebp
 8ad3f60:	c2 04 00             	ret    $0x4
 8ad3f63:	90                   	nop

```

```c
// LogManager::getLogWriter @ 0x8ad3f24

/* LogManager::getLogWriter(int) */

LogManager * __thiscall LogManager::getLogWriter(LogManager *this,int param_1)

{
  shared_ptr *psVar1;
  
  prepareData();
  psVar1 = (shared_ptr *)std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
  std::shared_ptr<LogWriter>::shared_ptr((shared_ptr<LogWriter> *)this,psVar1);
  return this;
}

```

---

## logFormat

```asm
// === 08ad3c0a LogManager::logFormat  [0x08ad3c0a-0x8ad3da1] ===
 8ad3c0a:	c3                   	ret
 8ad3c0b:	89 e5                	mov    %esp,%ebp
 8ad3c0d:	56                   	push   %esi
 8ad3c0e:	53                   	push   %ebx
 8ad3c0f:	81 ec 30 40 00 00    	sub    $0x4030,%esp
 8ad3c15:	e8 86 ff ff ff       	call   8ad3ba0 <_ZL11prepareDatav>
 8ad3c1a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3c1d:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3c22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3c26:	89 04 24             	mov    %eax,(%esp)
 8ad3c29:	e8 30 07 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3c2e:	89 04 24             	mov    %eax,(%esp)
 8ad3c31:	e8 36 07 00 00       	call   8ad436c <_ZNKSt12__shared_ptrI9LogWriterLN9__gnu_cxx12_Lock_policyE2EEcvMS3_PS0_Ev>
 8ad3c36:	83 f8 ff             	cmp    $0xffffffff,%eax
 8ad3c39:	0f 95 c0             	setne  %al
 8ad3c3c:	84 c0                	test   %al,%al
 8ad3c3e:	0f 84 53 01 00 00    	je     8ad3d97 <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0x18d>
 8ad3c44:	8d 45 1c             	lea    0x1c(%ebp),%eax
 8ad3c47:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad3c4a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad3c4d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad3c51:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad3c54:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad3c58:	c7 44 24 04 00 40 00 	movl   $0x4000,0x4(%esp)
 8ad3c5f:	00 
 8ad3c60:	8d 85 ec bf ff ff    	lea    -0x4014(%ebp),%eax
 8ad3c66:	89 04 24             	mov    %eax,(%esp)
 8ad3c69:	e8 82 a9 5a ff       	call   807e5f0 <vsnprintf@plt>
 8ad3c6e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8ad3c71:	0f 94 c0             	sete   %al
 8ad3c74:	84 c0                	test   %al,%al
 8ad3c76:	74 04                	je     8ad3c7c <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0x72>
 8ad3c78:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8ad3c7c:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3c81:	85 c0                	test   %eax,%eax
 8ad3c83:	0f 8e c7 00 00 00    	jle    8ad3d50 <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0x146>
 8ad3c89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ad3c8c:	89 04 24             	mov    %eax,(%esp)
 8ad3c8f:	e8 3c 29 c3 ff       	call   87065d0 <_ZNSsC1Ev>
 8ad3c94:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ad3c9b:	eb 17                	jmp    8ad3cb4 <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0xaa>
 8ad3c9d:	c7 44 24 04 20 2b e3 	movl   $0x8e32b20,0x4(%esp)
 8ad3ca4:	08 
 8ad3ca5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ad3ca8:	89 04 24             	mov    %eax,(%esp)
 8ad3cab:	e8 80 43 c3 ff       	call   8708030 <_ZNSspLEPKc>
 8ad3cb0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ad3cb4:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3cb9:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 8ad3cbc:	0f 9c c0             	setl   %al
 8ad3cbf:	84 c0                	test   %al,%al
 8ad3cc1:	75 da                	jne    8ad3c9d <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0x93>
 8ad3cc3:	8d 85 ec bf ff ff    	lea    -0x4014(%ebp),%eax
 8ad3cc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3ccd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ad3cd0:	89 04 24             	mov    %eax,(%esp)
 8ad3cd3:	e8 58 43 c3 ff       	call   8708030 <_ZNSspLEPKc>
 8ad3cd8:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3cdb:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3ce0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3ce4:	89 04 24             	mov    %eax,(%esp)
 8ad3ce7:	e8 72 06 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3cec:	89 04 24             	mov    %eax,(%esp)
 8ad3cef:	e8 92 06 00 00       	call   8ad4386 <_ZNKSt12__shared_ptrI9LogWriterLN9__gnu_cxx12_Lock_policyE2EEptEv>
 8ad3cf4:	89 c3                	mov    %eax,%ebx
 8ad3cf6:	8b 03                	mov    (%ebx),%eax
 8ad3cf8:	83 c0 08             	add    $0x8,%eax
 8ad3cfb:	8b 30                	mov    (%eax),%esi
 8ad3cfd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ad3d00:	89 04 24             	mov    %eax,(%esp)
 8ad3d03:	e8 e8 27 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ad3d08:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ad3d0c:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad3d0f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad3d13:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad3d16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad3d1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3d1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3d21:	89 1c 24             	mov    %ebx,(%esp)
 8ad3d24:	ff d6                	call   *%esi
 8ad3d26:	eb 1b                	jmp    8ad3d43 <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0x139>
 8ad3d28:	89 d3                	mov    %edx,%ebx
 8ad3d2a:	89 c6                	mov    %eax,%esi
 8ad3d2c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ad3d2f:	89 04 24             	mov    %eax,(%esp)
 8ad3d32:	e8 a9 3e c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad3d37:	89 f0                	mov    %esi,%eax
 8ad3d39:	89 da                	mov    %ebx,%edx
 8ad3d3b:	89 04 24             	mov    %eax,(%esp)
 8ad3d3e:	e8 0d fa 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad3d43:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ad3d46:	89 04 24             	mov    %eax,(%esp)
 8ad3d49:	e8 92 3e c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad3d4e:	eb 47                	jmp    8ad3d97 <_ZN10LogManager9logFormatEiPKcS1_iS1_z+0x18d>
 8ad3d50:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3d53:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3d58:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3d5c:	89 04 24             	mov    %eax,(%esp)
 8ad3d5f:	e8 fa 05 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3d64:	89 04 24             	mov    %eax,(%esp)
 8ad3d67:	e8 1a 06 00 00       	call   8ad4386 <_ZNKSt12__shared_ptrI9LogWriterLN9__gnu_cxx12_Lock_policyE2EEptEv>
 8ad3d6c:	8b 10                	mov    (%eax),%edx
 8ad3d6e:	83 c2 08             	add    $0x8,%edx
 8ad3d71:	8b 0a                	mov    (%edx),%ecx
 8ad3d73:	8d 95 ec bf ff ff    	lea    -0x4014(%ebp),%edx
 8ad3d79:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad3d7d:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad3d80:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad3d84:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad3d87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad3d8b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad3d8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3d92:	89 04 24             	mov    %eax,(%esp)
 8ad3d95:	ff d1                	call   *%ecx
 8ad3d97:	81 c4 30 40 00 00    	add    $0x4030,%esp
 8ad3d9d:	5b                   	pop    %ebx
 8ad3d9e:	5e                   	pop    %esi
 8ad3d9f:	5d                   	pop    %ebp
 8ad3da0:	c3                   	ret
 8ad3da1:	90                   	nop

```

```c
// LogManager::logFormat @ 0x8ad3c0a

/* LogManager::logFormat(int, char const*, char const*, int, char const*, ...) */

void LogManager::logFormat(int param_1,char *param_2,char *param_3,int param_4,char *param_5,...)

{
  return;
}

```

---

## logString

```asm
// === 08ad3da2 LogManager::logString  [0x08ad3da2-0x8ad3ef5] ===
 8ad3da2:	55                   	push   %ebp
 8ad3da3:	89 e5                	mov    %esp,%ebp
 8ad3da5:	56                   	push   %esi
 8ad3da6:	53                   	push   %ebx
 8ad3da7:	83 ec 30             	sub    $0x30,%esp
 8ad3daa:	e8 f1 fd ff ff       	call   8ad3ba0 <_ZL11prepareDatav>
 8ad3daf:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3db2:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3db7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3dbb:	89 04 24             	mov    %eax,(%esp)
 8ad3dbe:	e8 9b 05 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3dc3:	89 04 24             	mov    %eax,(%esp)
 8ad3dc6:	e8 a1 05 00 00       	call   8ad436c <_ZNKSt12__shared_ptrI9LogWriterLN9__gnu_cxx12_Lock_policyE2EEcvMS3_PS0_Ev>
 8ad3dcb:	83 f8 ff             	cmp    $0xffffffff,%eax
 8ad3dce:	0f 95 c0             	setne  %al
 8ad3dd1:	84 c0                	test   %al,%al
 8ad3dd3:	0f 84 15 01 00 00    	je     8ad3eee <_ZN10LogManager9logStringEiPKcS1_iS1_+0x14c>
 8ad3dd9:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3dde:	85 c0                	test   %eax,%eax
 8ad3de0:	0f 8e c4 00 00 00    	jle    8ad3eaa <_ZN10LogManager9logStringEiPKcS1_iS1_+0x108>
 8ad3de6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3de9:	89 04 24             	mov    %eax,(%esp)
 8ad3dec:	e8 df 27 c3 ff       	call   87065d0 <_ZNSsC1Ev>
 8ad3df1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ad3df8:	eb 17                	jmp    8ad3e11 <_ZN10LogManager9logStringEiPKcS1_iS1_+0x6f>
 8ad3dfa:	c7 44 24 04 20 2b e3 	movl   $0x8e32b20,0x4(%esp)
 8ad3e01:	08 
 8ad3e02:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3e05:	89 04 24             	mov    %eax,(%esp)
 8ad3e08:	e8 23 42 c3 ff       	call   8708030 <_ZNSspLEPKc>
 8ad3e0d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ad3e11:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3e16:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 8ad3e19:	0f 9c c0             	setl   %al
 8ad3e1c:	84 c0                	test   %al,%al
 8ad3e1e:	75 da                	jne    8ad3dfa <_ZN10LogManager9logStringEiPKcS1_iS1_+0x58>
 8ad3e20:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad3e23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3e27:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3e2a:	89 04 24             	mov    %eax,(%esp)
 8ad3e2d:	e8 fe 41 c3 ff       	call   8708030 <_ZNSspLEPKc>
 8ad3e32:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3e35:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3e3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3e3e:	89 04 24             	mov    %eax,(%esp)
 8ad3e41:	e8 18 05 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3e46:	89 04 24             	mov    %eax,(%esp)
 8ad3e49:	e8 38 05 00 00       	call   8ad4386 <_ZNKSt12__shared_ptrI9LogWriterLN9__gnu_cxx12_Lock_policyE2EEptEv>
 8ad3e4e:	89 c3                	mov    %eax,%ebx
 8ad3e50:	8b 03                	mov    (%ebx),%eax
 8ad3e52:	83 c0 08             	add    $0x8,%eax
 8ad3e55:	8b 30                	mov    (%eax),%esi
 8ad3e57:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3e5a:	89 04 24             	mov    %eax,(%esp)
 8ad3e5d:	e8 8e 26 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ad3e62:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ad3e66:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad3e69:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad3e6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad3e70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad3e74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad3e77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad3e7b:	89 1c 24             	mov    %ebx,(%esp)
 8ad3e7e:	ff d6                	call   *%esi
 8ad3e80:	eb 1b                	jmp    8ad3e9d <_ZN10LogManager9logStringEiPKcS1_iS1_+0xfb>
 8ad3e82:	89 d3                	mov    %edx,%ebx
 8ad3e84:	89 c6                	mov    %eax,%esi
 8ad3e86:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3e89:	89 04 24             	mov    %eax,(%esp)
 8ad3e8c:	e8 4f 3d c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad3e91:	89 f0                	mov    %esi,%eax
 8ad3e93:	89 da                	mov    %ebx,%edx
 8ad3e95:	89 04 24             	mov    %eax,(%esp)
 8ad3e98:	e8 b3 f8 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad3e9d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad3ea0:	89 04 24             	mov    %eax,(%esp)
 8ad3ea3:	e8 38 3d c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad3ea8:	eb 44                	jmp    8ad3eee <_ZN10LogManager9logStringEiPKcS1_iS1_+0x14c>
 8ad3eaa:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3ead:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3eb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3eb6:	89 04 24             	mov    %eax,(%esp)
 8ad3eb9:	e8 a0 04 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3ebe:	89 04 24             	mov    %eax,(%esp)
 8ad3ec1:	e8 c0 04 00 00       	call   8ad4386 <_ZNKSt12__shared_ptrI9LogWriterLN9__gnu_cxx12_Lock_policyE2EEptEv>
 8ad3ec6:	8b 10                	mov    (%eax),%edx
 8ad3ec8:	83 c2 08             	add    $0x8,%edx
 8ad3ecb:	8b 0a                	mov    (%edx),%ecx
 8ad3ecd:	8b 55 18             	mov    0x18(%ebp),%edx
 8ad3ed0:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad3ed4:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad3ed7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad3edb:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad3ede:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad3ee2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad3ee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3ee9:	89 04 24             	mov    %eax,(%esp)
 8ad3eec:	ff d1                	call   *%ecx
 8ad3eee:	83 c4 30             	add    $0x30,%esp
 8ad3ef1:	5b                   	pop    %ebx
 8ad3ef2:	5e                   	pop    %esi
 8ad3ef3:	5d                   	pop    %ebp
 8ad3ef4:	c3                   	ret
 8ad3ef5:	90                   	nop

```

```c
// LogManager::logString @ 0x8ad3da2

/* LogManager::logString(int, char const*, char const*, int, char const*) */

void LogManager::logString(int param_1,char *param_2,char *param_3,int param_4,char *param_5)

{
  code *pcVar1;
  __shared_ptr *this;
  LogWriter_ *pLVar2;
  __shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2> *p_Var3;
  int *piVar4;
  undefined4 uVar5;
  string local_14 [4];
  int local_10;
  
  prepareData();
  this = (__shared_ptr *)std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
  pLVar2 = std::__shared_ptr::operator_cast_to__(this);
  if (pLVar2 != (LogWriter_ *)0xffffffff) {
    if (s_indent < 1) {
      p_Var3 = (__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2> *)
               std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
      piVar4 = (int *)std::__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2>::operator->(p_Var3);
      (**(code **)(*piVar4 + 8))(piVar4,param_2,param_3,param_4,param_5);
    }
    else {
      std::string::string(local_14);
      for (local_10 = 0; local_10 < s_indent; local_10 = local_10 + 1) {
                    /* try { // try from 08ad3e08 to 08ad3e7f has its CatchHandler @ 08ad3e82 */
        std::string::operator+=(local_14,"\t");
      }
      std::string::operator+=(local_14,param_5);
      p_Var3 = (__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2> *)
               std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
      piVar4 = (int *)std::__shared_ptr<LogWriter,(__gnu_cxx::_Lock_policy)2>::operator->(p_Var3);
      pcVar1 = *(code **)(*piVar4 + 8);
      uVar5 = std::string::c_str(local_14);
      (*pcVar1)(piVar4,param_2,param_3,param_4,uVar5);
      std::string::~string(local_14);
    }
  }
  return;
}

```

---

## popIndent

```asm
// === 08ad3f08 LogManager::popIndent  [0x08ad3f08-0x8ad3f23] ===
 8ad3f08:	55                   	push   %ebp
 8ad3f09:	89 e5                	mov    %esp,%ebp
 8ad3f0b:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3f10:	85 c0                	test   %eax,%eax
 8ad3f12:	7e 0d                	jle    8ad3f21 <_ZN10LogManager9popIndentEv+0x19>
 8ad3f14:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3f19:	83 e8 01             	sub    $0x1,%eax
 8ad3f1c:	a3 64 1e 50 09       	mov    %eax,0x9501e64
 8ad3f21:	5d                   	pop    %ebp
 8ad3f22:	c3                   	ret
 8ad3f23:	90                   	nop

```

```c
// LogManager::popIndent @ 0x8ad3f08

/* LogManager::popIndent() */

void LogManager::popIndent(void)

{
  if (0 < s_indent) {
    s_indent = s_indent + -1;
  }
  return;
}

```

---

## pushIndent

```asm
// === 08ad3ef6 LogManager::pushIndent  [0x08ad3ef6-0x8ad3f07] ===
 8ad3ef6:	55                   	push   %ebp
 8ad3ef7:	89 e5                	mov    %esp,%ebp
 8ad3ef9:	a1 64 1e 50 09       	mov    0x9501e64,%eax
 8ad3efe:	83 c0 01             	add    $0x1,%eax
 8ad3f01:	a3 64 1e 50 09       	mov    %eax,0x9501e64
 8ad3f06:	5d                   	pop    %ebp
 8ad3f07:	c3                   	ret

```

```c
// LogManager::pushIndent @ 0x8ad3ef6

/* LogManager::pushIndent() */

void LogManager::pushIndent(void)

{
  s_indent = s_indent + 1;
  return;
}

```

---

## setLogWriter

```asm
// === 08ad3f64 LogManager::setLogWriter  [0x08ad3f64-0x8ad3f93] ===
 8ad3f64:	55                   	push   %ebp
 8ad3f65:	89 e5                	mov    %esp,%ebp
 8ad3f67:	83 ec 18             	sub    $0x18,%esp
 8ad3f6a:	e8 31 fc ff ff       	call   8ad3ba0 <_ZL11prepareDatav>
 8ad3f6f:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad3f72:	a1 60 1e 50 09       	mov    0x9501e60,%eax
 8ad3f77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3f7b:	89 04 24             	mov    %eax,(%esp)
 8ad3f7e:	e8 db 03 00 00       	call   8ad435e <_ZNSt5arrayISt10shared_ptrI9LogWriterELj64EEixEj>
 8ad3f83:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad3f86:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad3f8a:	89 04 24             	mov    %eax,(%esp)
 8ad3f8d:	e8 a6 01 00 00       	call   8ad4138 <_ZNSt10shared_ptrI9LogWriterEaSERKS1_>
 8ad3f92:	c9                   	leave
 8ad3f93:	c3                   	ret

```

```c
// LogManager::setLogWriter @ 0x8ad3f64

/* LogManager::setLogWriter(int, std::shared_ptr<LogWriter>) */

void LogManager::setLogWriter(uint param_1,shared_ptr *param_2)

{
  shared_ptr<LogWriter> *this;
  
  prepareData();
  this = (shared_ptr<LogWriter> *)
         std::array<std::shared_ptr<LogWriter>,64u>::operator[](s_data,param_1);
  std::shared_ptr<LogWriter>::operator=(this,param_2);
  return;
}

```

