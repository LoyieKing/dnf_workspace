# WongWork__CSimpleSSO

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## _checkValiedPassword

```asm
// === 08602bd0 WongWork::CSimpleSSO::_checkValiedPassword  [0x08602bd0-0x8602da5] ===
 8602bd0:	55                   	push   %ebp
 8602bd1:	89 e5                	mov    %esp,%ebp
 8602bd3:	56                   	push   %esi
 8602bd4:	53                   	push   %ebx
 8602bd5:	81 ec 40 01 00 00    	sub    $0x140,%esp
 8602bdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8602bde:	89 04 24             	mov    %eax,(%esp)
 8602be1:	e8 ca b7 a7 ff       	call   807e3b0 <strlen@plt>
 8602be6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8602be9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8602bf0:	8b 45 14             	mov    0x14(%ebp),%eax
 8602bf3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602bfa:	00 
 8602bfb:	89 04 24             	mov    %eax,(%esp)
 8602bfe:	e8 13 18 ab ff       	call   80b4416 <_ZN7IMethod12GetBlockSizeEPj>
 8602c03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8602c06:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8602c0a:	78 30                	js     8602c3c <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x6c>
 8602c0c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8602c0f:	89 c2                	mov    %eax,%edx
 8602c11:	c1 fa 1f             	sar    $0x1f,%edx
 8602c14:	f7 7d f4             	idivl  -0xc(%ebp)
 8602c17:	89 d0                	mov    %edx,%eax
 8602c19:	85 c0                	test   %eax,%eax
 8602c1b:	74 17                	je     8602c34 <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x64>
 8602c1d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8602c20:	89 c2                	mov    %eax,%edx
 8602c22:	c1 fa 1f             	sar    $0x1f,%edx
 8602c25:	f7 7d f4             	idivl  -0xc(%ebp)
 8602c28:	83 c0 01             	add    $0x1,%eax
 8602c2b:	0f af 45 f4          	imul   -0xc(%ebp),%eax
 8602c2f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8602c32:	eb 0e                	jmp    8602c42 <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x72>
 8602c34:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8602c37:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8602c3a:	eb 06                	jmp    8602c42 <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x72>
 8602c3c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8602c3f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8602c42:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8602c46:	78 21                	js     8602c69 <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x99>
 8602c48:	8b 45 14             	mov    0x14(%ebp),%eax
 8602c4b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8602c52:	00 
 8602c53:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8602c56:	89 54 24 08          	mov    %edx,0x8(%esp)
 8602c5a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8602c5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602c61:	89 04 24             	mov    %eax,(%esp)
 8602c64:	e8 3d 18 ab ff       	call   80b44a6 <_ZN7IMethod3PadEPciPj>
 8602c69:	8b 45 14             	mov    0x14(%ebp),%eax
 8602c6c:	8b 00                	mov    (%eax),%eax
 8602c6e:	83 c0 0c             	add    $0xc,%eax
 8602c71:	8b 10                	mov    (%eax),%edx
 8602c73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8602c76:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8602c7a:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 8602c80:	89 44 24 08          	mov    %eax,0x8(%esp)
 8602c84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8602c87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8602c8b:	8b 45 14             	mov    0x14(%ebp),%eax
 8602c8e:	89 04 24             	mov    %eax,(%esp)
 8602c91:	ff d2                	call   *%edx
 8602c93:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8602c96:	01 c0                	add    %eax,%eax
 8602c98:	83 c0 01             	add    $0x1,%eax
 8602c9b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8602c9e:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 8602ca4:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 8602caa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8602cae:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8602cb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602cb5:	89 04 24             	mov    %eax,(%esp)
 8602cb8:	e8 b6 5b b0 ff       	call   8108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>
 8602cbd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8602cc0:	c6 84 05 68 ff ff ff 	movb   $0x0,-0x98(%ebp,%eax,1)
 8602cc7:	00 
 8602cc8:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 8602ccf:	00 
 8602cd0:	8b 45 10             	mov    0x10(%ebp),%eax
 8602cd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8602cd7:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8602cdd:	89 04 24             	mov    %eax,(%esp)
 8602ce0:	e8 db bb a7 ff       	call   807e8c0 <strncmp@plt>
 8602ce5:	85 c0                	test   %eax,%eax
 8602ce7:	74 68                	je     8602d51 <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x181>
 8602ce9:	eb 6d                	jmp    8602d58 <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x188>
 8602ceb:	89 04 24             	mov    %eax,(%esp)
 8602cee:	e8 ed 2f 12 00       	call   8725ce0 <__cxa_begin_catch>
 8602cf3:	8b 45 10             	mov    0x10(%ebp),%eax
 8602cf6:	89 44 24 18          	mov    %eax,0x18(%esp)
 8602cfa:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8602d00:	89 44 24 14          	mov    %eax,0x14(%esp)
 8602d04:	c7 44 24 10 84 c3 cd 	movl   $0x8cdc384,0x10(%esp)
 8602d0b:	08 
 8602d0c:	c7 44 24 0c e7 00 00 	movl   $0xe7,0xc(%esp)
 8602d13:	00 
 8602d14:	c7 44 24 08 80 d1 cd 	movl   $0x8cdd180,0x8(%esp)
 8602d1b:	08 
 8602d1c:	c7 44 24 04 bc c3 cd 	movl   $0x8cdc3bc,0x4(%esp)
 8602d23:	08 
 8602d24:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8602d2b:	e8 da 0e 4d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8602d30:	bb 00 00 00 00       	mov    $0x0,%ebx
 8602d35:	e8 f6 2e 12 00       	call   8725c30 <__cxa_end_catch>
 8602d3a:	eb 5e                	jmp    8602d9a <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x1ca>
 8602d3c:	89 d3                	mov    %edx,%ebx
 8602d3e:	89 c6                	mov    %eax,%esi
 8602d40:	e8 eb 2e 12 00       	call   8725c30 <__cxa_end_catch>
 8602d45:	89 f0                	mov    %esi,%eax
 8602d47:	89 da                	mov    %ebx,%edx
 8602d49:	89 04 24             	mov    %eax,(%esp)
 8602d4c:	e8 ff 09 4e 00       	call   8ae3750 <_Unwind_Resume>
 8602d51:	bb 01 00 00 00       	mov    $0x1,%ebx
 8602d56:	eb 42                	jmp    8602d9a <_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael+0x1ca>
 8602d58:	8b 45 10             	mov    0x10(%ebp),%eax
 8602d5b:	89 44 24 18          	mov    %eax,0x18(%esp)
 8602d5f:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8602d65:	89 44 24 14          	mov    %eax,0x14(%esp)
 8602d69:	c7 44 24 10 cc c3 cd 	movl   $0x8cdc3cc,0x10(%esp)
 8602d70:	08 
 8602d71:	c7 44 24 0c ee 00 00 	movl   $0xee,0xc(%esp)
 8602d78:	00 
 8602d79:	c7 44 24 08 80 d1 cd 	movl   $0x8cdd180,0x8(%esp)
 8602d80:	08 
 8602d81:	c7 44 24 04 bc c3 cd 	movl   $0x8cdc3bc,0x4(%esp)
 8602d88:	08 
 8602d89:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8602d90:	e8 75 0e 4d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8602d95:	bb 00 00 00 00       	mov    $0x0,%ebx
 8602d9a:	89 d8                	mov    %ebx,%eax
 8602d9c:	81 c4 40 01 00 00    	add    $0x140,%esp
 8602da2:	5b                   	pop    %ebx
 8602da3:	5e                   	pop    %esi
 8602da4:	5d                   	pop    %ebp
 8602da5:	c3                   	ret

```

```c
// WongWork::CSimpleSSO::_checkValiedPassword @ 0x8602bd0

/* WongWork::CSimpleSSO::_checkValiedPassword(char*, char const*, CRijndael&) */

bool __thiscall
WongWork::CSimpleSSO::_checkValiedPassword
          (CSimpleSSO *this,char *param_1,char *param_2,CRijndael *param_3)

{
  int iVar1;
  uchar local_120 [132];
  char local_9c [132];
  size_t local_18;
  size_t local_14;
  int local_10;
  
  local_18 = strlen(param_1);
  local_14 = 0;
                    /* try { // try from 08602bfe to 08602cbc has its CatchHandler @ 08602ceb */
  local_10 = IMethod::GetBlockSize((IMethod *)param_3,(uint *)0x0);
  if (local_10 < 0) {
    local_14 = local_18;
  }
  else if ((int)local_18 % local_10 == 0) {
    local_14 = local_18;
  }
  else {
    local_14 = ((int)local_18 / local_10 + 1) * local_10;
  }
  if (-1 < local_10) {
    IMethod::Pad((IMethod *)param_3,param_1,local_18,(uint *)0x0);
  }
  (**(code **)(*(int *)param_3 + 0xc))(param_3,param_1,local_120,local_14);
  local_18 = local_14 * 2 + 1;
  DNFFLib::Binary2Hex(local_120,local_14,local_9c);
  local_9c[local_18] = '\0';
  iVar1 = strncmp(local_9c,param_2,0x84);
  if (iVar1 != 0) {
    LogManager::logFormat
              (1,"SimpleSSO.cpp",
               "bool WongWork::CSimpleSSO::_checkValiedPassword(char*, const char*, CRijndael&)",
               0xee,"_checkValiedPassword() diff password server(%s), client(%s)",local_9c,param_2);
  }
  return iVar1 == 0;
}

```

---

## _getGameStartTime

```asm
// === 08602da6 WongWork::CSimpleSSO::_getGameStartTime  [0x08602da6-0x86031f5] ===
 8602da6:	55                   	push   %ebp
 8602da7:	89 e5                	mov    %esp,%ebp
 8602da9:	83 ec 38             	sub    $0x38,%esp
 8602dac:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8602db3:	00 
 8602db4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602dbb:	00 
 8602dbc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8602dbf:	89 04 24             	mov    %eax,(%esp)
 8602dc2:	e8 f9 ae a7 ff       	call   807dcc0 <memset@plt>
 8602dc7:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8602dce:	00 
 8602dcf:	c7 44 24 04 64 c2 cd 	movl   $0x8cdc264,0x4(%esp)
 8602dd6:	08 
 8602dd7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8602dda:	89 04 24             	mov    %eax,(%esp)
 8602ddd:	e8 be aa a7 ff       	call   807d8a0 <memcpy@plt>
 8602de2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602de9:	00 
 8602dea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8602ded:	89 04 24             	mov    %eax,(%esp)
 8602df0:	e8 56 62 b0 ff       	call   810904b <_Z14NumberToStringji>
 8602df5:	8b 55 08             	mov    0x8(%ebp),%edx
 8602df8:	8b 92 60 08 0d 00    	mov    0xd0860(%edx),%edx
 8602dfe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8602e02:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8602e05:	89 44 24 08          	mov    %eax,0x8(%esp)
 8602e09:	c7 44 24 04 08 c4 cd 	movl   $0x8cdc408,0x4(%esp)
 8602e10:	08 
 8602e11:	89 14 24             	mov    %edx,(%esp)
 8602e14:	e8 a7 13 df ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8602e19:	8b 45 08             	mov    0x8(%ebp),%eax
 8602e1c:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602e22:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8602e29:	00 
 8602e2a:	89 04 24             	mov    %eax,(%esp)
 8602e2d:	e8 f4 14 df ff       	call   83f4326 <_ZN5MySQL4execEb>
 8602e32:	83 f0 01             	xor    $0x1,%eax
 8602e35:	84 c0                	test   %al,%al
 8602e37:	75 18                	jne    8602e51 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0xab>
 8602e39:	8b 45 08             	mov    0x8(%ebp),%eax
 8602e3c:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602e42:	89 04 24             	mov    %eax,(%esp)
 8602e45:	e8 72 16 df ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8602e4a:	83 f0 01             	xor    $0x1,%eax
 8602e4d:	84 c0                	test   %al,%al
 8602e4f:	74 07                	je     8602e58 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0xb2>
 8602e51:	b8 01 00 00 00       	mov    $0x1,%eax
 8602e56:	eb 05                	jmp    8602e5d <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0xb7>
 8602e58:	b8 00 00 00 00       	mov    $0x0,%eax
 8602e5d:	84 c0                	test   %al,%al
 8602e5f:	74 0a                	je     8602e6b <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0xc5>
 8602e61:	b8 00 00 00 00       	mov    $0x0,%eax
 8602e66:	e9 88 03 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8602e6e:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602e74:	89 04 24             	mov    %eax,(%esp)
 8602e77:	e8 f0 f4 ad ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8602e7c:	85 c0                	test   %eax,%eax
 8602e7e:	0f 94 c0             	sete   %al
 8602e81:	84 c0                	test   %al,%al
 8602e83:	74 0a                	je     8602e8f <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0xe9>
 8602e85:	b8 00 00 00 00       	mov    $0x0,%eax
 8602e8a:	e9 64 03 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602e8f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8602e96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602e99:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602e9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8602ea0:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602ea6:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 8602ea9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602ead:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602eb1:	89 04 24             	mov    %eax,(%esp)
 8602eb4:	e8 39 f4 ad ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8602eb9:	83 f0 01             	xor    $0x1,%eax
 8602ebc:	84 c0                	test   %al,%al
 8602ebe:	74 0a                	je     8602eca <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x124>
 8602ec0:	b8 00 00 00 00       	mov    $0x0,%eax
 8602ec5:	e9 29 03 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602eca:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602ecd:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602ed1:	8b 45 08             	mov    0x8(%ebp),%eax
 8602ed4:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602eda:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 8602edd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602ee1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602ee5:	89 04 24             	mov    %eax,(%esp)
 8602ee8:	e8 05 f4 ad ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8602eed:	83 f0 01             	xor    $0x1,%eax
 8602ef0:	84 c0                	test   %al,%al
 8602ef2:	74 0a                	je     8602efe <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x158>
 8602ef4:	b8 00 00 00 00       	mov    $0x0,%eax
 8602ef9:	e9 f5 02 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602efe:	8b 45 18             	mov    0x18(%ebp),%eax
 8602f01:	8d 48 0c             	lea    0xc(%eax),%ecx
 8602f04:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602f07:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602f0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8602f0e:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602f14:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602f18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602f1c:	89 04 24             	mov    %eax,(%esp)
 8602f1f:	e8 08 3a b1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8602f24:	83 f0 01             	xor    $0x1,%eax
 8602f27:	84 c0                	test   %al,%al
 8602f29:	74 0a                	je     8602f35 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x18f>
 8602f2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8602f30:	e9 be 02 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602f35:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8602f38:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602f3b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602f3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8602f42:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602f48:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602f4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602f50:	89 04 24             	mov    %eax,(%esp)
 8602f53:	e8 d4 39 b1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8602f58:	83 f0 01             	xor    $0x1,%eax
 8602f5b:	84 c0                	test   %al,%al
 8602f5d:	74 0a                	je     8602f69 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x1c3>
 8602f5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8602f64:	e9 8a 02 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602f69:	8b 45 18             	mov    0x18(%ebp),%eax
 8602f6c:	8d 48 04             	lea    0x4(%eax),%ecx
 8602f6f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602f72:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602f76:	8b 45 08             	mov    0x8(%ebp),%eax
 8602f79:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602f7f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602f83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602f87:	89 04 24             	mov    %eax,(%esp)
 8602f8a:	e8 9d 39 b1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8602f8f:	83 f0 01             	xor    $0x1,%eax
 8602f92:	84 c0                	test   %al,%al
 8602f94:	74 0a                	je     8602fa0 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x1fa>
 8602f96:	b8 00 00 00 00       	mov    $0x0,%eax
 8602f9b:	e9 53 02 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602fa0:	8b 45 18             	mov    0x18(%ebp),%eax
 8602fa3:	8d 48 08             	lea    0x8(%eax),%ecx
 8602fa6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602fa9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8602fb0:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602fb6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602fba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602fbe:	89 04 24             	mov    %eax,(%esp)
 8602fc1:	e8 66 39 b1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8602fc6:	83 f0 01             	xor    $0x1,%eax
 8602fc9:	84 c0                	test   %al,%al
 8602fcb:	74 0a                	je     8602fd7 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x231>
 8602fcd:	b8 00 00 00 00       	mov    $0x0,%eax
 8602fd2:	e9 1c 02 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8602fd7:	8b 45 18             	mov    0x18(%ebp),%eax
 8602fda:	8d 48 10             	lea    0x10(%eax),%ecx
 8602fdd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8602fe0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602fe4:	8b 45 08             	mov    0x8(%ebp),%eax
 8602fe7:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602fed:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8602ff1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602ff5:	89 04 24             	mov    %eax,(%esp)
 8602ff8:	e8 57 ae af ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 8602ffd:	83 f0 01             	xor    $0x1,%eax
 8603000:	84 c0                	test   %al,%al
 8603002:	74 0a                	je     860300e <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x268>
 8603004:	b8 00 00 00 00       	mov    $0x0,%eax
 8603009:	e9 e5 01 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 860300e:	8b 45 18             	mov    0x18(%ebp),%eax
 8603011:	8d 48 14             	lea    0x14(%eax),%ecx
 8603014:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8603017:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860301b:	8b 45 08             	mov    0x8(%ebp),%eax
 860301e:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8603024:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8603028:	89 54 24 04          	mov    %edx,0x4(%esp)
 860302c:	89 04 24             	mov    %eax,(%esp)
 860302f:	e8 be f2 ad ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8603034:	83 f0 01             	xor    $0x1,%eax
 8603037:	84 c0                	test   %al,%al
 8603039:	74 0a                	je     8603045 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x29f>
 860303b:	b8 00 00 00 00       	mov    $0x0,%eax
 8603040:	e9 ae 01 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8603045:	8b 45 18             	mov    0x18(%ebp),%eax
 8603048:	8d 48 18             	lea    0x18(%eax),%ecx
 860304b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860304e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8603052:	8b 45 08             	mov    0x8(%ebp),%eax
 8603055:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 860305b:	c7 44 24 0c 14 00 00 	movl   $0x14,0xc(%esp)
 8603062:	00 
 8603063:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8603067:	89 54 24 04          	mov    %edx,0x4(%esp)
 860306b:	89 04 24             	mov    %eax,(%esp)
 860306e:	e8 77 9d ae ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8603073:	83 f0 01             	xor    $0x1,%eax
 8603076:	84 c0                	test   %al,%al
 8603078:	74 0a                	je     8603084 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x2de>
 860307a:	b8 00 00 00 00       	mov    $0x0,%eax
 860307f:	e9 6f 01 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8603084:	8b 45 18             	mov    0x18(%ebp),%eax
 8603087:	8d 48 2c             	lea    0x2c(%eax),%ecx
 860308a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860308d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8603091:	8b 45 08             	mov    0x8(%ebp),%eax
 8603094:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 860309a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860309e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86030a2:	89 04 24             	mov    %eax,(%esp)
 86030a5:	e8 aa ad af ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 86030aa:	83 f0 01             	xor    $0x1,%eax
 86030ad:	84 c0                	test   %al,%al
 86030af:	74 0a                	je     86030bb <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x315>
 86030b1:	b8 00 00 00 00       	mov    $0x0,%eax
 86030b6:	e9 38 01 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 86030bb:	8b 45 18             	mov    0x18(%ebp),%eax
 86030be:	8d 48 30             	lea    0x30(%eax),%ecx
 86030c1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86030c4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86030c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86030cb:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 86030d1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86030d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86030d9:	89 04 24             	mov    %eax,(%esp)
 86030dc:	e8 11 f2 ad ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 86030e1:	83 f0 01             	xor    $0x1,%eax
 86030e4:	84 c0                	test   %al,%al
 86030e6:	74 0a                	je     86030f2 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x34c>
 86030e8:	b8 00 00 00 00       	mov    $0x0,%eax
 86030ed:	e9 01 01 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 86030f2:	8b 45 18             	mov    0x18(%ebp),%eax
 86030f5:	8d 48 34             	lea    0x34(%eax),%ecx
 86030f8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86030fb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86030ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8603102:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8603108:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860310c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603110:	89 04 24             	mov    %eax,(%esp)
 8603113:	e8 14 38 b1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8603118:	83 f0 01             	xor    $0x1,%eax
 860311b:	84 c0                	test   %al,%al
 860311d:	74 0a                	je     8603129 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x383>
 860311f:	b8 00 00 00 00       	mov    $0x0,%eax
 8603124:	e9 ca 00 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8603129:	8b 45 18             	mov    0x18(%ebp),%eax
 860312c:	8d 48 38             	lea    0x38(%eax),%ecx
 860312f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8603132:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8603136:	8b 45 08             	mov    0x8(%ebp),%eax
 8603139:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 860313f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8603143:	89 54 24 04          	mov    %edx,0x4(%esp)
 8603147:	89 04 24             	mov    %eax,(%esp)
 860314a:	e8 81 a5 e4 ff       	call   844d6d0 <_ZN5MySQL9get_floatEiRf>
 860314f:	83 f0 01             	xor    $0x1,%eax
 8603152:	84 c0                	test   %al,%al
 8603154:	74 0a                	je     8603160 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x3ba>
 8603156:	b8 00 00 00 00       	mov    $0x0,%eax
 860315b:	e9 93 00 00 00       	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8603160:	8b 45 18             	mov    0x18(%ebp),%eax
 8603163:	8d 48 3c             	lea    0x3c(%eax),%ecx
 8603166:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8603169:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860316d:	8b 45 08             	mov    0x8(%ebp),%eax
 8603170:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8603176:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860317a:	89 54 24 04          	mov    %edx,0x4(%esp)
 860317e:	89 04 24             	mov    %eax,(%esp)
 8603181:	e8 34 ad af ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 8603186:	83 f0 01             	xor    $0x1,%eax
 8603189:	84 c0                	test   %al,%al
 860318b:	74 07                	je     8603194 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x3ee>
 860318d:	b8 00 00 00 00       	mov    $0x0,%eax
 8603192:	eb 5f                	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 8603194:	8b 45 18             	mov    0x18(%ebp),%eax
 8603197:	8d 48 3d             	lea    0x3d(%eax),%ecx
 860319a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 860319d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86031a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86031a4:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 86031aa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86031ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86031b2:	89 04 24             	mov    %eax,(%esp)
 86031b5:	e8 00 ad af ff       	call   80fdeba <_ZN5MySQL9get_ubyteEiRh>
 86031ba:	83 f0 01             	xor    $0x1,%eax
 86031bd:	84 c0                	test   %al,%al
 86031bf:	74 07                	je     86031c8 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x422>
 86031c1:	b8 00 00 00 00       	mov    $0x0,%eax
 86031c6:	eb 2b                	jmp    86031f3 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE+0x44d>
 86031c8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86031cb:	89 c2                	mov    %eax,%edx
 86031cd:	8b 45 10             	mov    0x10(%ebp),%eax
 86031d0:	89 10                	mov    %edx,(%eax)
 86031d2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86031d5:	89 c2                	mov    %eax,%edx
 86031d7:	8b 45 14             	mov    0x14(%ebp),%eax
 86031da:	89 10                	mov    %edx,(%eax)
 86031dc:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86031df:	8b 45 18             	mov    0x18(%ebp),%eax
 86031e2:	89 50 40             	mov    %edx,0x40(%eax)
 86031e5:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86031e8:	8b 45 18             	mov    0x18(%ebp),%eax
 86031eb:	89 50 44             	mov    %edx,0x44(%eax)
 86031ee:	b8 01 00 00 00       	mov    $0x1,%eax
 86031f3:	c9                   	leave
 86031f4:	c3                   	ret
 86031f5:	90                   	nop

```

```c
// WongWork::CSimpleSSO::_getGameStartTime @ 0x8602da6

/* WongWork::CSimpleSSO::_getGameStartTime(unsigned int, long&, long&,
   WongWork::CSimpleSSO::stOutputData_t&) */

undefined4 __thiscall
WongWork::CSimpleSSO::_getGameStartTime
          (CSimpleSSO *this,uint param_1,long *param_2,long *param_3,stOutputData_t *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [20];
  int local_10;
  
  memset(local_24,0,0x14);
  memcpy(local_24,"member_login",0xd);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "seLect login_time,expire_time,report_cnt,last_play_time,account_fail,total_account_fail,reliable_flag,trade_gold_daily,login_ip,security_flag,dungeon_gain_gold,school_id,rating,tutorial_skipable,event_charac_flag from %s where m_id=%s"
                   ,local_24,uVar3);
  cVar2 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::fetch(*(MySQL **)(this + 0xd0860));
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_08602e5d;
    }
  }
  bVar1 = true;
LAB_08602e5d:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    iVar4 = MySQL::get_n_rows(*(MySQL **)(this + 0xd0860));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      local_10 = 1;
      cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),0,&local_28);
      iVar4 = local_10;
      if (cVar2 == '\x01') {
        local_10 = local_10 + 1;
        cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),iVar4,&local_2c);
        iVar4 = local_10;
        if (cVar2 == '\x01') {
          local_10 = local_10 + 1;
          cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)(param_4 + 0xc));
          iVar4 = local_10;
          if (cVar2 == '\x01') {
            local_10 = local_10 + 1;
            cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)param_4);
            iVar4 = local_10;
            if (cVar2 == '\x01') {
              local_10 = local_10 + 1;
              cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)(param_4 + 4));
              iVar4 = local_10;
              if (cVar2 == '\x01') {
                local_10 = local_10 + 1;
                cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,(int *)(param_4 + 8));
                iVar4 = local_10;
                if (cVar2 == '\x01') {
                  local_10 = local_10 + 1;
                  cVar2 = MySQL::get_byte(*(MySQL **)(this + 0xd0860),iVar4,(char *)(param_4 + 0x10)
                                         );
                  iVar4 = local_10;
                  if (cVar2 == '\x01') {
                    local_10 = local_10 + 1;
                    cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),iVar4,
                                            (uint *)(param_4 + 0x14));
                    iVar4 = local_10;
                    if (cVar2 == '\x01') {
                      local_10 = local_10 + 1;
                      cVar2 = MySQL::get_str(*(MySQL **)(this + 0xd0860),iVar4,
                                             (char *)(param_4 + 0x18),0x14);
                      iVar4 = local_10;
                      if (cVar2 == '\x01') {
                        local_10 = local_10 + 1;
                        cVar2 = MySQL::get_byte(*(MySQL **)(this + 0xd0860),iVar4,
                                                (char *)(param_4 + 0x2c));
                        iVar4 = local_10;
                        if (cVar2 == '\x01') {
                          local_10 = local_10 + 1;
                          cVar2 = MySQL::get_uint(*(MySQL **)(this + 0xd0860),iVar4,
                                                  (uint *)(param_4 + 0x30));
                          iVar4 = local_10;
                          if (cVar2 == '\x01') {
                            local_10 = local_10 + 1;
                            cVar2 = MySQL::get_int(*(MySQL **)(this + 0xd0860),iVar4,
                                                   (int *)(param_4 + 0x34));
                            iVar4 = local_10;
                            if (cVar2 == '\x01') {
                              local_10 = local_10 + 1;
                              cVar2 = MySQL::get_float(*(MySQL **)(this + 0xd0860),iVar4,
                                                       (float *)(param_4 + 0x38));
                              iVar4 = local_10;
                              if (cVar2 == '\x01') {
                                local_10 = local_10 + 1;
                                cVar2 = MySQL::get_ubyte(*(MySQL **)(this + 0xd0860),iVar4,
                                                         (uchar *)(param_4 + 0x3c));
                                iVar4 = local_10;
                                if (cVar2 == '\x01') {
                                  local_10 = local_10 + 1;
                                  cVar2 = MySQL::get_ubyte(*(MySQL **)(this + 0xd0860),iVar4,
                                                           (uchar *)(param_4 + 0x3d));
                                  if (cVar2 == '\x01') {
                                    *param_2 = local_28;
                                    *param_3 = local_2c;
                                    *(uint *)(param_4 + 0x40) = local_28;
                                    *(uint *)(param_4 + 0x44) = local_2c;
                                    uVar3 = 1;
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

---

## checkValidPassword

```asm
// === 086028c6 WongWork::CSimpleSSO::checkValidPassword  [0x086028c6-0x8602905] ===
 86028c6:	55                   	push   %ebp
 86028c7:	89 e5                	mov    %esp,%ebp
 86028c9:	81 ec f8 00 00 00    	sub    $0xf8,%esp
 86028cf:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86028d6:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86028dd:	8b 45 18             	mov    0x18(%ebp),%eax
 86028e0:	89 44 24 10          	mov    %eax,0x10(%esp)
 86028e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86028e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86028eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86028ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 86028f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86028f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86028f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86028fc:	89 04 24             	mov    %eax,(%esp)
 86028ff:	e8 a2 04 00 00       	call   8602da6 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>
 8602904:	c9                   	leave
 8602905:	c3                   	ret

```

```c
// WongWork::CSimpleSSO::checkValidPassword @ 0x86028c6

/* WongWork::CSimpleSSO::checkValidPassword(unsigned int, char const*, char const*,
   WongWork::CSimpleSSO::stOutputData_t&) */

void __thiscall
WongWork::CSimpleSSO::checkValidPassword
          (CSimpleSSO *this,uint param_1,char *param_2,char *param_3,stOutputData_t *param_4)

{
  long local_1c [6];
  
  local_1c[1] = 0;
  local_1c[0] = 0;
  _getGameStartTime(this,param_1,local_1c + 1,local_1c,param_4);
  return;
}

```

---

## checkValidPassword_Jpn

```asm
// === 081b25ec WongWork::CSimpleSSO::checkValidPassword_Jpn  [0x081b25ec-0x81b26a7] ===
 81b25ec:	55                   	push   %ebp
 81b25ed:	89 e5                	mov    %esp,%ebp
 81b25ef:	83 ec 48             	sub    $0x48,%esp
 81b25f2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81b25f9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81b2600:	8b 45 18             	mov    0x18(%ebp),%eax
 81b2603:	89 44 24 10          	mov    %eax,0x10(%esp)
 81b2607:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81b260a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81b260e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81b2611:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b2615:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2618:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b261c:	8b 45 08             	mov    0x8(%ebp),%eax
 81b261f:	89 04 24             	mov    %eax,(%esp)
 81b2622:	e8 cf 0b 45 00       	call   86031f6 <_ZN8WongWork10CSimpleSSO16getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>
 81b2627:	a1 5c f7 41 09       	mov    0x941f75c,%eax
 81b262c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81b262f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81b2633:	89 04 24             	mov    %eax,(%esp)
 81b2636:	e8 51 6e 0e 00       	call   829948c <_ZN11CGM_Manager4IsGmEj>
 81b263b:	84 c0                	test   %al,%al
 81b263d:	74 62                	je     81b26a1 <_ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE+0xb5>
 81b263f:	c7 44 24 08 84 00 00 	movl   $0x84,0x8(%esp)
 81b2646:	00 
 81b2647:	8b 45 14             	mov    0x14(%ebp),%eax
 81b264a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81b264e:	8b 45 10             	mov    0x10(%ebp),%eax
 81b2651:	89 04 24             	mov    %eax,(%esp)
 81b2654:	e8 67 c2 ec ff       	call   807e8c0 <strncmp@plt>
 81b2659:	85 c0                	test   %eax,%eax
 81b265b:	75 44                	jne    81b26a1 <_ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE+0xb5>
 81b265d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b2664:	00 
 81b2665:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 81b266c:	00 
 81b266d:	c7 44 24 04 80 67 bb 	movl   $0x8bb6780,0x4(%esp)
 81b2674:	08 
 81b2675:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2678:	89 04 24             	mov    %eax,(%esp)
 81b267b:	e8 98 d0 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b2680:	8b 45 0c             	mov    0xc(%ebp),%eax
 81b2683:	89 44 24 08          	mov    %eax,0x8(%esp)
 81b2687:	c7 44 24 04 40 5b bb 	movl   $0x8bb5b40,0x4(%esp)
 81b268e:	08 
 81b268f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2692:	89 04 24             	mov    %eax,(%esp)
 81b2695:	e8 ee d0 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b269a:	b8 01 00 00 00       	mov    $0x1,%eax
 81b269f:	eb 05                	jmp    81b26a6 <_ZN8WongWork10CSimpleSSO22checkValidPassword_JpnEjPKcS2_RNS0_14stOutputData_tE+0xba>
 81b26a1:	b8 01 00 00 00       	mov    $0x1,%eax
 81b26a6:	c9                   	leave
 81b26a7:	c3                   	ret

```

```c
// WongWork::CSimpleSSO::checkValidPassword_Jpn @ 0x81b25ec

/* WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, char const*, char const*,
   WongWork::CSimpleSSO::stOutputData_t&) */

undefined4 __thiscall
WongWork::CSimpleSSO::checkValidPassword_Jpn
          (CSimpleSSO *this,uint param_1,char *param_2,char *param_3,stOutputData_t *param_4)

{
  char cVar1;
  int iVar2;
  long local_24 [2];
  cMyTrace local_1c [24];
  
  local_24[1] = 0;
  local_24[0] = 0;
  getGameStartTime(this,param_1,local_24 + 1,local_24,param_4);
  cVar1 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
  if ((cVar1 != '\0') && (iVar2 = strncmp(param_2,param_3,0x84), iVar2 == 0)) {
    cMyTrace::cMyTrace(local_1c,
                       "bool WongWork::CSimpleSSO::checkValidPassword_Jpn(unsigned int, const char*, const char*, WongWork::CSimpleSSO::stOutputData_t&)"
                       ,0x2e,0);
    cMyTrace::operator()(local_1c,"[!]GM User Check Password Sucess=> m_id(%d)",param_1);
  }
  return 1;
}

```

---

## expireLoginTime

```asm
// === 08602b24 WongWork::CSimpleSSO::expireLoginTime  [0x08602b24-0x8602bcf] ===
 8602b24:	55                   	push   %ebp
 8602b25:	89 e5                	mov    %esp,%ebp
 8602b27:	53                   	push   %ebx
 8602b28:	83 ec 44             	sub    $0x44,%esp
 8602b2b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8602b32:	00 
 8602b33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602b3a:	00 
 8602b3b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8602b3e:	89 04 24             	mov    %eax,(%esp)
 8602b41:	e8 7a b1 a7 ff       	call   807dcc0 <memset@plt>
 8602b46:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8602b4d:	00 
 8602b4e:	c7 44 24 04 64 c2 cd 	movl   $0x8cdc264,0x4(%esp)
 8602b55:	08 
 8602b56:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8602b59:	89 04 24             	mov    %eax,(%esp)
 8602b5c:	e8 3f ad a7 ff       	call   807d8a0 <memcpy@plt>
 8602b61:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8602b65:	74 62                	je     8602bc9 <_ZN8WongWork10CSimpleSSO15expireLoginTimeEj+0xa5>
 8602b67:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602b6e:	00 
 8602b6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8602b72:	89 04 24             	mov    %eax,(%esp)
 8602b75:	e8 d1 64 b0 ff       	call   810904b <_Z14NumberToStringji>
 8602b7a:	89 c3                	mov    %eax,%ebx
 8602b7c:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8602b83:	e8 16 91 ac ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8602b88:	8b 55 08             	mov    0x8(%ebp),%edx
 8602b8b:	8b 92 60 08 0d 00    	mov    0xd0860(%edx),%edx
 8602b91:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8602b95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8602b99:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8602b9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8602ba0:	c7 44 24 04 58 c3 cd 	movl   $0x8cdc358,0x4(%esp)
 8602ba7:	08 
 8602ba8:	89 14 24             	mov    %edx,(%esp)
 8602bab:	e8 10 16 df ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8602bb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8602bb3:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602bb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8602bc0:	00 
 8602bc1:	89 04 24             	mov    %eax,(%esp)
 8602bc4:	e8 5d 17 df ff       	call   83f4326 <_ZN5MySQL4execEb>
 8602bc9:	83 c4 44             	add    $0x44,%esp
 8602bcc:	5b                   	pop    %ebx
 8602bcd:	5d                   	pop    %ebp
 8602bce:	c3                   	ret
 8602bcf:	90                   	nop

```

```c
// WongWork::CSimpleSSO::expireLoginTime @ 0x8602b24

/* WongWork::CSimpleSSO::expireLoginTime(unsigned int) */

void __thiscall WongWork::CSimpleSSO::expireLoginTime(CSimpleSSO *this,uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_20 [24];
  
  memset(local_20,0,0x14);
  memcpy(local_20,"member_login",0xd);
  if (param_1 != 0) {
    uVar1 = NumberToString(param_1,0);
    uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    MySQL::set_query(*(MySQL **)(this + 0xd0860),"upDate %s set expire_time=%d where m_id=%s",
                     local_20,uVar2,uVar1);
    MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  }
  return;
}

```

---

## getGameStartTime

```asm
// === 086031f6 WongWork::CSimpleSSO::getGameStartTime  [0x086031f6-0x8603225] ===
 86031f6:	55                   	push   %ebp
 86031f7:	89 e5                	mov    %esp,%ebp
 86031f9:	83 ec 28             	sub    $0x28,%esp
 86031fc:	8b 45 18             	mov    0x18(%ebp),%eax
 86031ff:	89 44 24 10          	mov    %eax,0x10(%esp)
 8603203:	8b 45 14             	mov    0x14(%ebp),%eax
 8603206:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860320a:	8b 45 10             	mov    0x10(%ebp),%eax
 860320d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8603211:	8b 45 0c             	mov    0xc(%ebp),%eax
 8603214:	89 44 24 04          	mov    %eax,0x4(%esp)
 8603218:	8b 45 08             	mov    0x8(%ebp),%eax
 860321b:	89 04 24             	mov    %eax,(%esp)
 860321e:	e8 83 fb ff ff       	call   8602da6 <_ZN8WongWork10CSimpleSSO17_getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>
 8603223:	c9                   	leave
 8603224:	c3                   	ret
 8603225:	90                   	nop

```

```c
// WongWork::CSimpleSSO::getGameStartTime @ 0x86031f6

/* WongWork::CSimpleSSO::getGameStartTime(unsigned int, long&, long&,
   WongWork::CSimpleSSO::stOutputData_t&) */

void __thiscall
WongWork::CSimpleSSO::getGameStartTime
          (CSimpleSSO *this,uint param_1,long *param_2,long *param_3,stOutputData_t *param_4)

{
  _getGameStartTime(this,param_1,param_2,param_3,param_4);
  return;
}

```

---

## init

```asm
// === 086027fc WongWork::CSimpleSSO::init  [0x086027fc-0x86028b3] ===
 86027fc:	55                   	push   %ebp
 86027fd:	89 e5                	mov    %esp,%ebp
 86027ff:	83 ec 38             	sub    $0x38,%esp
 8602802:	8b 45 08             	mov    0x8(%ebp),%eax
 8602805:	8b 55 0c             	mov    0xc(%ebp),%edx
 8602808:	89 90 60 08 0d 00    	mov    %edx,0xd0860(%eax)
 860280e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8602815:	e9 88 00 00 00       	jmp    86028a2 <_ZN8WongWork10CSimpleSSO4initEP5MySQL+0xa6>
 860281a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8602821:	eb 70                	jmp    8602893 <_ZN8WongWork10CSimpleSSO4initEP5MySQL+0x97>
 8602823:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8602826:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8602829:	89 d0                	mov    %edx,%eax
 860282b:	01 c0                	add    %eax,%eax
 860282d:	01 d0                	add    %edx,%eax
 860282f:	c1 e0 03             	shl    $0x3,%eax
 8602832:	01 c8                	add    %ecx,%eax
 8602834:	8b 14 85 20 c2 3a 09 	mov    0x93ac220(,%eax,4),%edx
 860283b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 860283e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8602841:	69 c9 7c 04 00 00    	imul   $0x47c,%ecx,%ecx
 8602847:	69 c0 a0 6b 00 00    	imul   $0x6ba0,%eax,%eax
 860284d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8602850:	03 45 08             	add    0x8(%ebp),%eax
 8602853:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 860285a:	00 
 860285b:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8602862:	00 
 8602863:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 860286a:	00 
 860286b:	c7 44 24 10 10 00 00 	movl   $0x10,0x10(%esp)
 8602872:	00 
 8602873:	c7 44 24 0c 20 2f b2 	movl   $0x8b22f20,0xc(%esp)
 860287a:	08 
 860287b:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 8602882:	00 
 8602883:	89 54 24 04          	mov    %edx,0x4(%esp)
 8602887:	89 04 24             	mov    %eax,(%esp)
 860288a:	e8 91 39 ab ff       	call   80b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>
 860288f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8602893:	83 7d f4 17          	cmpl   $0x17,-0xc(%ebp)
 8602897:	0f 9e c0             	setle  %al
 860289a:	84 c0                	test   %al,%al
 860289c:	75 85                	jne    8602823 <_ZN8WongWork10CSimpleSSO4initEP5MySQL+0x27>
 860289e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86028a2:	83 7d f0 1e          	cmpl   $0x1e,-0x10(%ebp)
 86028a6:	0f 9e c0             	setle  %al
 86028a9:	84 c0                	test   %al,%al
 86028ab:	0f 85 69 ff ff ff    	jne    860281a <_ZN8WongWork10CSimpleSSO4initEP5MySQL+0x1e>
 86028b1:	c9                   	leave
 86028b2:	c3                   	ret
 86028b3:	90                   	nop

```

```c
// WongWork::CSimpleSSO::init @ 0x86027fc

/* WongWork::CSimpleSSO::init(MySQL*) */

void __thiscall WongWork::CSimpleSSO::init(CSimpleSSO *this,MySQL *param_1)

{
  int local_14;
  int local_10;
  
  *(MySQL **)(this + 0xd0860) = param_1;
  for (local_14 = 0; local_14 < 0x1f; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 0x18; local_10 = local_10 + 1) {
      CRijndael::Initialize
                ((CRijndael *)(this + local_10 * 0x47c + local_14 * 0x6ba0),
                 *(char **)(strKeyTable_ + (local_14 * 0x18 + local_10) * 4),0x20,
                 CRijndael::sm_chain0,0x10,0x10,0,0);
    }
  }
  return;
}

```

---

## reset

```asm
// === 086028b4 WongWork::CSimpleSSO::reset  [0x086028b4-0x86028c5] ===
 86028b4:	55                   	push   %ebp
 86028b5:	89 e5                	mov    %esp,%ebp
 86028b7:	8b 45 08             	mov    0x8(%ebp),%eax
 86028ba:	c7 80 60 08 0d 00 00 	movl   $0x0,0xd0860(%eax)
 86028c1:	00 00 00 
 86028c4:	5d                   	pop    %ebp
 86028c5:	c3                   	ret

```

```c
// WongWork::CSimpleSSO::reset @ 0x86028b4

/* WongWork::CSimpleSSO::reset() */

void __thiscall WongWork::CSimpleSSO::reset(CSimpleSSO *this)

{
  *(undefined4 *)(this + 0xd0860) = 0;
  return;
}

```

---

## updateHumanCertify

```asm
// === 08603226 WongWork::CSimpleSSO::updateHumanCertify  [0x08603226-0x8603304] ===
 8603226:	55                   	push   %ebp
 8603227:	89 e5                	mov    %esp,%ebp
 8603229:	83 ec 48             	sub    $0x48,%esp
 860322c:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8603233:	00 
 8603234:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860323b:	00 
 860323c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860323f:	89 04 24             	mov    %eax,(%esp)
 8603242:	e8 79 aa a7 ff       	call   807dcc0 <memset@plt>
 8603247:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 860324e:	00 
 860324f:	c7 44 24 04 64 c2 cd 	movl   $0x8cdc264,0x4(%esp)
 8603256:	08 
 8603257:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860325a:	89 04 24             	mov    %eax,(%esp)
 860325d:	e8 3e a6 a7 ff       	call   807d8a0 <memcpy@plt>
 8603262:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8603266:	0f 95 c0             	setne  %al
 8603269:	0f b6 c0             	movzbl %al,%eax
 860326c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 860326f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8603276:	00 
 8603277:	8b 45 0c             	mov    0xc(%ebp),%eax
 860327a:	89 04 24             	mov    %eax,(%esp)
 860327d:	e8 c9 5d b0 ff       	call   810904b <_Z14NumberToStringji>
 8603282:	8b 55 08             	mov    0x8(%ebp),%edx
 8603285:	8b 92 60 08 0d 00    	mov    0xd0860(%edx),%edx
 860328b:	89 44 24 14          	mov    %eax,0x14(%esp)
 860328f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8603292:	89 44 24 10          	mov    %eax,0x10(%esp)
 8603296:	8b 45 10             	mov    0x10(%ebp),%eax
 8603299:	89 44 24 0c          	mov    %eax,0xc(%esp)
 860329d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86032a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 86032a4:	c7 44 24 04 f4 c4 cd 	movl   $0x8cdc4f4,0x4(%esp)
 86032ab:	08 
 86032ac:	89 14 24             	mov    %edx,(%esp)
 86032af:	e8 0c 0f df ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86032b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86032b7:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 86032bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86032c4:	00 
 86032c5:	89 04 24             	mov    %eax,(%esp)
 86032c8:	e8 59 10 df ff       	call   83f4326 <_ZN5MySQL4execEb>
 86032cd:	83 f0 01             	xor    $0x1,%eax
 86032d0:	84 c0                	test   %al,%al
 86032d2:	74 07                	je     86032db <_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji+0xb5>
 86032d4:	b8 00 00 00 00       	mov    $0x0,%eax
 86032d9:	eb 28                	jmp    8603303 <_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji+0xdd>
 86032db:	8b 45 08             	mov    0x8(%ebp),%eax
 86032de:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 86032e4:	89 04 24             	mov    %eax,(%esp)
 86032e7:	e8 24 10 df ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 86032ec:	09 d0                	or     %edx,%eax
 86032ee:	85 c0                	test   %eax,%eax
 86032f0:	0f 94 c0             	sete   %al
 86032f3:	84 c0                	test   %al,%al
 86032f5:	74 07                	je     86032fe <_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji+0xd8>
 86032f7:	b8 00 00 00 00       	mov    $0x0,%eax
 86032fc:	eb 05                	jmp    8603303 <_ZN8WongWork10CSimpleSSO18updateHumanCertifyEji+0xdd>
 86032fe:	b8 01 00 00 00       	mov    $0x1,%eax
 8603303:	c9                   	leave
 8603304:	c3                   	ret

```

```c
// WongWork::CSimpleSSO::updateHumanCertify @ 0x8603226

/* WongWork::CSimpleSSO::updateHumanCertify(unsigned int, int) */

undefined4 __thiscall
WongWork::CSimpleSSO::updateHumanCertify(CSimpleSSO *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 local_24 [20];
  uint local_10;
  
  memset(local_24,0,0x14);
  memcpy(local_24,"member_login",0xd);
  local_10 = (uint)(param_2 != 0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "upDate %s set last_play_time=unix_timestamp(now()),account_fail=%d,total_account_fail=total_account_fail+%d where m_id=%s"
                   ,local_24,param_2,local_10,uVar2);
  cVar1 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(*(MySQL **)(this + 0xd0860));
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## updateSSOExpireTime

```asm
// === 08602906 WongWork::CSimpleSSO::updateSSOExpireTime  [0x08602906-0x8602a49] ===
 8602906:	55                   	push   %ebp
 8602907:	89 e5                	mov    %esp,%ebp
 8602909:	57                   	push   %edi
 860290a:	56                   	push   %esi
 860290b:	53                   	push   %ebx
 860290c:	83 ec 7c             	sub    $0x7c,%esp
 860290f:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8602916:	00 
 8602917:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860291e:	00 
 860291f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8602922:	89 04 24             	mov    %eax,(%esp)
 8602925:	e8 96 b3 a7 ff       	call   807dcc0 <memset@plt>
 860292a:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8602931:	00 
 8602932:	c7 44 24 04 64 c2 cd 	movl   $0x8cdc264,0x4(%esp)
 8602939:	08 
 860293a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 860293d:	89 04 24             	mov    %eax,(%esp)
 8602940:	e8 5b af a7 ff       	call   807d8a0 <memcpy@plt>
 8602945:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860294c:	00 
 860294d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8602950:	89 04 24             	mov    %eax,(%esp)
 8602953:	e8 f3 66 b0 ff       	call   810904b <_Z14NumberToStringji>
 8602958:	89 c3                	mov    %eax,%ebx
 860295a:	8b 45 10             	mov    0x10(%ebp),%eax
 860295d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8602961:	0f b6 c0             	movzbl %al,%eax
 8602964:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8602967:	8b 45 10             	mov    0x10(%ebp),%eax
 860296a:	d9 40 0c             	flds   0xc(%eax)
 860296d:	dd 5d b8             	fstpl  -0x48(%ebp)
 8602970:	8b 45 10             	mov    0x10(%ebp),%eax
 8602973:	8b 40 08             	mov    0x8(%eax),%eax
 8602976:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8602979:	8b 45 10             	mov    0x10(%ebp),%eax
 860297c:	8b 40 04             	mov    0x4(%eax),%eax
 860297f:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8602982:	8b 45 10             	mov    0x10(%ebp),%eax
 8602985:	8b 38                	mov    (%eax),%edi
 8602987:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 860298e:	e8 0b 93 ac ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8602993:	89 c6                	mov    %eax,%esi
 8602995:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 860299c:	e8 fd 92 ac ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86029a1:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 86029a7:	8b 45 08             	mov    0x8(%ebp),%eax
 86029aa:	8b 90 60 08 0d 00    	mov    0xd0860(%eax),%edx
 86029b0:	89 5c 24 2c          	mov    %ebx,0x2c(%esp)
 86029b4:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86029b7:	89 44 24 28          	mov    %eax,0x28(%esp)
 86029bb:	dd 45 b8             	fldl   -0x48(%ebp)
 86029be:	dd 5c 24 20          	fstpl  0x20(%esp)
 86029c2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86029c5:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 86029c9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86029cc:	89 44 24 18          	mov    %eax,0x18(%esp)
 86029d0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 86029d4:	89 74 24 10          	mov    %esi,0x10(%esp)
 86029d8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86029dc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86029df:	89 44 24 08          	mov    %eax,0x8(%esp)
 86029e3:	c7 44 24 04 74 c2 cd 	movl   $0x8cdc274,0x4(%esp)
 86029ea:	08 
 86029eb:	89 14 24             	mov    %edx,(%esp)
 86029ee:	e8 cd 17 df ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86029f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86029f6:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 86029fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8602a03:	00 
 8602a04:	89 04 24             	mov    %eax,(%esp)
 8602a07:	e8 1a 19 df ff       	call   83f4326 <_ZN5MySQL4execEb>
 8602a0c:	83 f0 01             	xor    $0x1,%eax
 8602a0f:	84 c0                	test   %al,%al
 8602a11:	74 07                	je     8602a1a <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE+0x114>
 8602a13:	b8 00 00 00 00       	mov    $0x0,%eax
 8602a18:	eb 28                	jmp    8602a42 <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE+0x13c>
 8602a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8602a1d:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602a23:	89 04 24             	mov    %eax,(%esp)
 8602a26:	e8 e5 18 df ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8602a2b:	09 d0                	or     %edx,%eax
 8602a2d:	85 c0                	test   %eax,%eax
 8602a2f:	0f 94 c0             	sete   %al
 8602a32:	84 c0                	test   %al,%al
 8602a34:	74 07                	je     8602a3d <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE+0x137>
 8602a36:	b8 00 00 00 00       	mov    $0x0,%eax
 8602a3b:	eb 05                	jmp    8602a42 <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjRKNS0_23stUpdateSSOExpireTime_tE+0x13c>
 8602a3d:	b8 01 00 00 00       	mov    $0x1,%eax
 8602a42:	83 c4 7c             	add    $0x7c,%esp
 8602a45:	5b                   	pop    %ebx
 8602a46:	5e                   	pop    %esi
 8602a47:	5f                   	pop    %edi
 8602a48:	5d                   	pop    %ebp
 8602a49:	c3                   	ret

```

```c
// WongWork::CSimpleSSO::updateSSOExpireTime @ 0x8602906

/* WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int,
   WongWork::CSimpleSSO::stUpdateSSOExpireTime_t const&) */

undefined4 __thiscall
WongWork::CSimpleSSO::updateSSOExpireTime
          (CSimpleSSO *this,uint param_1,stUpdateSSOExpireTime_t *param_2)

{
  float fVar1;
  stUpdateSSOExpireTime_t sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 local_30 [32];
  
  memset(local_30,0,0x14);
  memcpy(local_30,"member_login",0xd);
  uVar6 = NumberToString(param_1,0);
  sVar2 = param_2[0x10];
  fVar1 = *(float *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)param_2;
  uVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "upDate %s set expire_time=%d,last_play_time=%d,report_cnt=%d,trade_gold_daily=%d,dungeon_gain_gold=%d,rating=%f,tutorial_skipable=%d where m_id=%s"
                   ,local_30,iVar8 + 0xb4,uVar7,uVar4,uVar3,uVar9,(double)fVar1,(uint)(byte)sVar2,
                   uVar6);
  cVar5 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  if (cVar5 == '\x01') {
    lVar10 = MySQL::getAffectedRowCount(*(MySQL **)(this + 0xd0860));
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

```

---

## updateSSOExpireTime_08602a4a

```asm
// === 08602a4a WongWork::CSimpleSSO::updateSSOExpireTime  [0x08602a4a-0x8602b23] ===
 8602a4a:	55                   	push   %ebp
 8602a4b:	89 e5                	mov    %esp,%ebp
 8602a4d:	56                   	push   %esi
 8602a4e:	53                   	push   %ebx
 8602a4f:	83 ec 40             	sub    $0x40,%esp
 8602a52:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8602a59:	00 
 8602a5a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602a61:	00 
 8602a62:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8602a65:	89 04 24             	mov    %eax,(%esp)
 8602a68:	e8 53 b2 a7 ff       	call   807dcc0 <memset@plt>
 8602a6d:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8602a74:	00 
 8602a75:	c7 44 24 04 64 c2 cd 	movl   $0x8cdc264,0x4(%esp)
 8602a7c:	08 
 8602a7d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8602a80:	89 04 24             	mov    %eax,(%esp)
 8602a83:	e8 18 ae a7 ff       	call   807d8a0 <memcpy@plt>
 8602a88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8602a8f:	00 
 8602a90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8602a93:	89 04 24             	mov    %eax,(%esp)
 8602a96:	e8 b0 65 b0 ff       	call   810904b <_Z14NumberToStringji>
 8602a9b:	89 c6                	mov    %eax,%esi
 8602a9d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8602aa4:	e8 f5 91 ac ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8602aa9:	89 c3                	mov    %eax,%ebx
 8602aab:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8602ab2:	e8 e7 91 ac ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8602ab7:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 8602abd:	8b 45 08             	mov    0x8(%ebp),%eax
 8602ac0:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602ac6:	89 74 24 18          	mov    %esi,0x18(%esp)
 8602aca:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8602ace:	89 54 24 10          	mov    %edx,0x10(%esp)
 8602ad2:	8b 55 10             	mov    0x10(%ebp),%edx
 8602ad5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8602ad9:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8602adc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8602ae0:	c7 44 24 04 08 c3 cd 	movl   $0x8cdc308,0x4(%esp)
 8602ae7:	08 
 8602ae8:	89 04 24             	mov    %eax,(%esp)
 8602aeb:	e8 d0 16 df ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8602af0:	8b 45 08             	mov    0x8(%ebp),%eax
 8602af3:	8b 80 60 08 0d 00    	mov    0xd0860(%eax),%eax
 8602af9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8602b00:	00 
 8602b01:	89 04 24             	mov    %eax,(%esp)
 8602b04:	e8 1d 18 df ff       	call   83f4326 <_ZN5MySQL4execEb>
 8602b09:	83 f0 01             	xor    $0x1,%eax
 8602b0c:	84 c0                	test   %al,%al
 8602b0e:	74 07                	je     8602b17 <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjj+0xcd>
 8602b10:	b8 00 00 00 00       	mov    $0x0,%eax
 8602b15:	eb 05                	jmp    8602b1c <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjj+0xd2>
 8602b17:	b8 01 00 00 00       	mov    $0x1,%eax
 8602b1c:	83 c4 40             	add    $0x40,%esp
 8602b1f:	5b                   	pop    %ebx
 8602b20:	5e                   	pop    %esi
 8602b21:	5d                   	pop    %ebp
 8602b22:	c3                   	ret
 8602b23:	90                   	nop

```

```c
// WongWork::CSimpleSSO::updateSSOExpireTime @ 0x8602a4a

/* WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, unsigned int) */

bool __thiscall
WongWork::CSimpleSSO::updateSSOExpireTime(CSimpleSSO *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_20 [20];
  
  memset(local_20,0,0x14);
  memcpy(local_20,"member_login",0xd);
  uVar2 = NumberToString(param_1,0);
  uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  MySQL::set_query(*(MySQL **)(this + 0xd0860),
                   "upDate %s set login_time=%d, expire_time=%d, last_play_time=%d where m_id=%s",
                   local_20,param_2,iVar4 + 0xb4,uVar3,uVar2);
  cVar1 = MySQL::exec(*(MySQL **)(this + 0xd0860),true);
  return cVar1 == '\x01';
}

```

