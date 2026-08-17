# ARAD__ARAD_CRYPT

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## encryptAES

```asm
// === 08184abc ARAD::ARAD_CRYPT::encryptAES  [0x08184abc-0x8184c08] ===
 8184abc:	55                   	push   %ebp
 8184abd:	89 e5                	mov    %esp,%ebp
 8184abf:	81 ec c8 00 00 00    	sub    $0xc8,%esp
 8184ac5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8184ac8:	89 04 24             	mov    %eax,(%esp)
 8184acb:	e8 e0 98 ef ff       	call   807e3b0 <strlen@plt>
 8184ad0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8184ad3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8184ada:	8b 45 08             	mov    0x8(%ebp),%eax
 8184add:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8184ae4:	00 
 8184ae5:	89 04 24             	mov    %eax,(%esp)
 8184ae8:	e8 29 f9 f2 ff       	call   80b4416 <_ZN7IMethod12GetBlockSizeEPj>
 8184aed:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8184af0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8184af4:	78 30                	js     8184b26 <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x6a>
 8184af6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8184af9:	89 c2                	mov    %eax,%edx
 8184afb:	c1 fa 1f             	sar    $0x1f,%edx
 8184afe:	f7 7d f0             	idivl  -0x10(%ebp)
 8184b01:	89 d0                	mov    %edx,%eax
 8184b03:	85 c0                	test   %eax,%eax
 8184b05:	74 17                	je     8184b1e <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x62>
 8184b07:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8184b0a:	89 c2                	mov    %eax,%edx
 8184b0c:	c1 fa 1f             	sar    $0x1f,%edx
 8184b0f:	f7 7d f0             	idivl  -0x10(%ebp)
 8184b12:	83 c0 01             	add    $0x1,%eax
 8184b15:	0f af 45 f0          	imul   -0x10(%ebp),%eax
 8184b19:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8184b1c:	eb 0e                	jmp    8184b2c <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x70>
 8184b1e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8184b21:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8184b24:	eb 06                	jmp    8184b2c <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x70>
 8184b26:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8184b29:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8184b2c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8184b30:	78 21                	js     8184b53 <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x97>
 8184b32:	8b 45 08             	mov    0x8(%ebp),%eax
 8184b35:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8184b3c:	00 
 8184b3d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8184b40:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184b44:	8b 55 0c             	mov    0xc(%ebp),%edx
 8184b47:	89 54 24 04          	mov    %edx,0x4(%esp)
 8184b4b:	89 04 24             	mov    %eax,(%esp)
 8184b4e:	e8 53 f9 f2 ff       	call   80b44a6 <_ZN7IMethod3PadEPciPj>
 8184b53:	8b 45 08             	mov    0x8(%ebp),%eax
 8184b56:	8b 00                	mov    (%eax),%eax
 8184b58:	83 c0 0c             	add    $0xc,%eax
 8184b5b:	8b 10                	mov    (%eax),%edx
 8184b5d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8184b60:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8184b64:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8184b6a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8184b6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8184b71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184b75:	8b 45 08             	mov    0x8(%ebp),%eax
 8184b78:	89 04 24             	mov    %eax,(%esp)
 8184b7b:	ff d2                	call   *%edx
 8184b7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184b80:	81 7d f4 ff ff ff 6f 	cmpl   $0x6fffffff,-0xc(%ebp)
 8184b87:	74 4b                	je     8184bd4 <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x118>
 8184b89:	c7 44 24 1c 20 f2 b8 	movl   $0x8b8f220,0x1c(%esp)
 8184b90:	08 
 8184b91:	c7 44 24 18 1f 00 00 	movl   $0x1f,0x18(%esp)
 8184b98:	00 
 8184b99:	c7 44 24 14 90 f7 b8 	movl   $0x8b8f790,0x14(%esp)
 8184ba0:	08 
 8184ba1:	c7 44 24 10 2e f2 b8 	movl   $0x8b8f22e,0x10(%esp)
 8184ba8:	08 
 8184ba9:	c7 44 24 0c 1f 00 00 	movl   $0x1f,0xc(%esp)
 8184bb0:	00 
 8184bb1:	c7 44 24 08 90 f7 b8 	movl   $0x8b8f790,0x8(%esp)
 8184bb8:	08 
 8184bb9:	c7 44 24 04 3b f2 b8 	movl   $0x8b8f23b,0x4(%esp)
 8184bc0:	08 
 8184bc1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8184bc8:	e8 3d f0 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8184bcd:	b8 00 00 00 00       	mov    $0x0,%eax
 8184bd2:	eb 33                	jmp    8184c07 <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_+0x14b>
 8184bd4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8184bd7:	01 c0                	add    %eax,%eax
 8184bd9:	83 c0 01             	add    $0x1,%eax
 8184bdc:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8184bdf:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8184be5:	8b 55 10             	mov    0x10(%ebp),%edx
 8184be8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184bec:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8184bef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8184bf3:	89 04 24             	mov    %eax,(%esp)
 8184bf6:	e8 78 3c f8 ff       	call   8108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>
 8184bfb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8184bfe:	03 45 10             	add    0x10(%ebp),%eax
 8184c01:	c6 00 00             	movb   $0x0,(%eax)
 8184c04:	8b 45 10             	mov    0x10(%ebp),%eax
 8184c07:	c9                   	leave
 8184c08:	c3                   	ret

```

```c
// ARAD::ARAD_CRYPT::encryptAES @ 0x8184abc

/* ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*) */

char * ARAD::ARAD_CRYPT::encryptAES(CRijndael *param_1,char *param_2,char *param_3)

{
  uchar local_a0 [132];
  size_t local_1c;
  size_t local_18;
  int local_14;
  int local_10;
  
  local_1c = strlen(param_2);
  local_18 = 0;
  local_14 = IMethod::GetBlockSize((IMethod *)param_1,(uint *)0x0);
  if (local_14 < 0) {
    local_18 = local_1c;
  }
  else if ((int)local_1c % local_14 == 0) {
    local_18 = local_1c;
  }
  else {
    local_18 = ((int)local_1c / local_14 + 1) * local_14;
  }
  if (-1 < local_14) {
    IMethod::Pad((IMethod *)param_1,param_2,local_1c,(uint *)0x0);
  }
  local_10 = (**(code **)(*(int *)param_1 + 0xc))(param_1,param_2,local_a0,local_18);
  if (local_10 == 0x6fffffff) {
    local_1c = local_18 * 2 + 1;
    DNFFLib::Binary2Hex(local_a0,local_18,param_3);
    param_3[local_1c] = '\0';
  }
  else {
    LogManager::logFormat
              (1,"localjapan/Arad_Crypt.cpp","encryptAES",0x1f,"[%s][%d][%s]","encryptAES",0x1f,
               "Encrypt Error");
    param_3 = (char *)0x0;
  }
  return param_3;
}

```

