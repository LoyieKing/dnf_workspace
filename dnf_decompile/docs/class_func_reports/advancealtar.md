# advancealtar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## convertStringToZip

```asm
// === 0813dd3e advancealtar::convertStringToZip  [0x0813dd3e-0x813ddb1] ===
 813dd3e:	55                   	push   %ebp
 813dd3f:	89 e5                	mov    %esp,%ebp
 813dd41:	83 ec 18             	sub    $0x18,%esp
 813dd44:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 813dd48:	75 10                	jne    813dd5a <_ZN12advancealtar18convertStringToZipEPcjPKcjRj+0x1c>
 813dd4a:	8b 45 18             	mov    0x18(%ebp),%eax
 813dd4d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 813dd53:	b8 01 00 00 00       	mov    $0x1,%eax
 813dd58:	eb 55                	jmp    813ddaf <_ZN12advancealtar18convertStringToZipEPcjPKcjRj+0x71>
 813dd5a:	8b 45 18             	mov    0x18(%ebp),%eax
 813dd5d:	8b 55 0c             	mov    0xc(%ebp),%edx
 813dd60:	89 10                	mov    %edx,(%eax)
 813dd62:	8b 45 0c             	mov    0xc(%ebp),%eax
 813dd65:	89 44 24 08          	mov    %eax,0x8(%esp)
 813dd69:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813dd70:	00 
 813dd71:	8b 45 08             	mov    0x8(%ebp),%eax
 813dd74:	89 04 24             	mov    %eax,(%esp)
 813dd77:	e8 44 ff f3 ff       	call   807dcc0 <memset@plt>
 813dd7c:	8b 45 14             	mov    0x14(%ebp),%eax
 813dd7f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813dd83:	8b 45 10             	mov    0x10(%ebp),%eax
 813dd86:	89 44 24 08          	mov    %eax,0x8(%esp)
 813dd8a:	8b 45 18             	mov    0x18(%ebp),%eax
 813dd8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 813dd91:	8b 45 08             	mov    0x8(%ebp),%eax
 813dd94:	89 04 24             	mov    %eax,(%esp)
 813dd97:	e8 83 42 57 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 813dd9c:	83 f0 01             	xor    $0x1,%eax
 813dd9f:	84 c0                	test   %al,%al
 813dda1:	74 07                	je     813ddaa <_ZN12advancealtar18convertStringToZipEPcjPKcjRj+0x6c>
 813dda3:	b8 00 00 00 00       	mov    $0x0,%eax
 813dda8:	eb 05                	jmp    813ddaf <_ZN12advancealtar18convertStringToZipEPcjPKcjRj+0x71>
 813ddaa:	b8 01 00 00 00       	mov    $0x1,%eax
 813ddaf:	c9                   	leave
 813ddb0:	c3                   	ret
 813ddb1:	90                   	nop

```

```c
// advancealtar::convertStringToZip @ 0x813dd3e

/* advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
    */

undefined4
advancealtar::convertStringToZip
          (char *param_1,uint param_2,char *param_3,uint param_4,uint *param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    *param_5 = 0;
    uVar2 = 1;
  }
  else {
    *param_5 = param_2;
    memset(param_1,0,param_2);
    cVar1 = compress_zip(param_1,param_5,param_3,param_4);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## convertZipToString

```asm
// === 0813dc48 advancealtar::convertZipToString  [0x0813dc48-0x813dd3d] ===
 813dc48:	55                   	push   %ebp
 813dc49:	89 e5                	mov    %esp,%ebp
 813dc4b:	83 ec 28             	sub    $0x28,%esp
 813dc4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 813dc51:	89 44 24 04          	mov    %eax,0x4(%esp)
 813dc55:	8b 45 08             	mov    0x8(%ebp),%eax
 813dc58:	89 04 24             	mov    %eax,(%esp)
 813dc5b:	e8 7e 77 fe ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 813dc60:	89 45 f0             	mov    %eax,-0x10(%ebp)
 813dc63:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 813dc67:	75 0a                	jne    813dc73 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x2b>
 813dc69:	b8 01 00 00 00       	mov    $0x1,%eax
 813dc6e:	e9 c9 00 00 00       	jmp    813dd3c <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xf4>
 813dc73:	8b 45 14             	mov    0x14(%ebp),%eax
 813dc76:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 813dc79:	77 0a                	ja     813dc85 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x3d>
 813dc7b:	b8 00 00 00 00       	mov    $0x0,%eax
 813dc80:	e9 b7 00 00 00       	jmp    813dd3c <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xf4>
 813dc85:	8b 45 14             	mov    0x14(%ebp),%eax
 813dc88:	89 44 24 08          	mov    %eax,0x8(%esp)
 813dc8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813dc93:	00 
 813dc94:	8b 45 10             	mov    0x10(%ebp),%eax
 813dc97:	89 04 24             	mov    %eax,(%esp)
 813dc9a:	e8 21 00 f4 ff       	call   807dcc0 <memset@plt>
 813dc9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813dca2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813dca6:	8b 45 10             	mov    0x10(%ebp),%eax
 813dca9:	89 44 24 08          	mov    %eax,0x8(%esp)
 813dcad:	8b 45 0c             	mov    0xc(%ebp),%eax
 813dcb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 813dcb4:	8b 45 08             	mov    0x8(%ebp),%eax
 813dcb7:	89 04 24             	mov    %eax,(%esp)
 813dcba:	e8 5b 76 fe ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 813dcbf:	83 f0 01             	xor    $0x1,%eax
 813dcc2:	84 c0                	test   %al,%al
 813dcc4:	74 07                	je     813dccd <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x85>
 813dcc6:	b8 00 00 00 00       	mov    $0x0,%eax
 813dccb:	eb 6f                	jmp    813dd3c <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xf4>
 813dccd:	8b 45 10             	mov    0x10(%ebp),%eax
 813dcd0:	8b 00                	mov    (%eax),%eax
 813dcd2:	25 ff ff ff 3f       	and    $0x3fffffff,%eax
 813dcd7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813dcda:	8b 45 1c             	mov    0x1c(%ebp),%eax
 813dcdd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 813dce0:	77 07                	ja     813dce9 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xa1>
 813dce2:	b8 00 00 00 00       	mov    $0x0,%eax
 813dce7:	eb 53                	jmp    813dd3c <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xf4>
 813dce9:	8b 45 1c             	mov    0x1c(%ebp),%eax
 813dcec:	89 44 24 08          	mov    %eax,0x8(%esp)
 813dcf0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813dcf7:	00 
 813dcf8:	8b 45 18             	mov    0x18(%ebp),%eax
 813dcfb:	89 04 24             	mov    %eax,(%esp)
 813dcfe:	e8 bd ff f3 ff       	call   807dcc0 <memset@plt>
 813dd03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813dd06:	89 45 ec             	mov    %eax,-0x14(%ebp)
 813dd09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 813dd0c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813dd10:	8b 45 10             	mov    0x10(%ebp),%eax
 813dd13:	89 44 24 08          	mov    %eax,0x8(%esp)
 813dd17:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813dd1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813dd1e:	8b 45 18             	mov    0x18(%ebp),%eax
 813dd21:	89 04 24             	mov    %eax,(%esp)
 813dd24:	e8 d9 43 57 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 813dd29:	83 f0 01             	xor    $0x1,%eax
 813dd2c:	84 c0                	test   %al,%al
 813dd2e:	74 07                	je     813dd37 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xef>
 813dd30:	b8 00 00 00 00       	mov    $0x0,%eax
 813dd35:	eb 05                	jmp    813dd3c <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xf4>
 813dd37:	b8 01 00 00 00       	mov    $0x1,%eax
 813dd3c:	c9                   	leave
 813dd3d:	c3                   	ret

```

```c
// advancealtar::convertZipToString @ 0x813dc48

/* advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int) */

undefined4
advancealtar::convertZipToString
          (MySQL *param_1,int param_2,char *param_3,uint param_4,char *param_5,uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint local_18;
  uint local_14;
  uint local_10;
  
  local_14 = MySQL::get_binary_length(param_1,param_2);
  if (local_14 == 0) {
    uVar2 = 1;
  }
  else if (local_14 < param_4) {
    memset(param_3,0,param_4);
    cVar1 = MySQL::get_binary(param_1,param_2,param_3,local_14);
    if (cVar1 == '\x01') {
      local_10 = *(uint *)param_3 & 0x3fffffff;
      if (local_10 < param_6) {
        memset(param_5,0,param_6);
        local_18 = local_10;
        cVar1 = uncompress_zip(param_5,&local_18,param_3,local_14);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getMemberNames

```asm
// === 0812cf54 advancealtar::getMemberNames  [0x0812cf54-0x812cfa5] ===
 812cf54:	55                   	push   %ebp
 812cf55:	89 e5                	mov    %esp,%ebp
 812cf57:	53                   	push   %ebx
 812cf58:	83 ec 14             	sub    $0x14,%esp
 812cf5b:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 812cf5f:	74 3b                	je     812cf9c <_ZN12advancealtar14getMemberNamesEP5CUserPc+0x48>
 812cf61:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 812cf65:	74 38                	je     812cf9f <_ZN12advancealtar14getMemberNamesEP5CUserPc+0x4b>
 812cf67:	8b 45 08             	mov    0x8(%ebp),%eax
 812cf6a:	89 04 24             	mov    %eax,(%esp)
 812cf6d:	e8 b6 40 fd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 812cf72:	89 c3                	mov    %eax,%ebx
 812cf74:	8b 45 08             	mov    0x8(%ebp),%eax
 812cf77:	89 04 24             	mov    %eax,(%esp)
 812cf7a:	e8 a9 40 fd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 812cf7f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 812cf83:	89 44 24 08          	mov    %eax,0x8(%esp)
 812cf87:	c7 44 24 04 fc c5 b6 	movl   $0x8b6c5fc,0x4(%esp)
 812cf8e:	08 
 812cf8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 812cf92:	89 04 24             	mov    %eax,(%esp)
 812cf95:	e8 a6 14 f5 ff       	call   807e440 <sprintf@plt>
 812cf9a:	eb 04                	jmp    812cfa0 <_ZN12advancealtar14getMemberNamesEP5CUserPc+0x4c>
 812cf9c:	90                   	nop
 812cf9d:	eb 01                	jmp    812cfa0 <_ZN12advancealtar14getMemberNamesEP5CUserPc+0x4c>
 812cf9f:	90                   	nop
 812cfa0:	83 c4 14             	add    $0x14,%esp
 812cfa3:	5b                   	pop    %ebx
 812cfa4:	5d                   	pop    %ebp
 812cfa5:	c3                   	ret

```

```c
// advancealtar::getMemberNames @ 0x812cf54

/* advancealtar::getMemberNames(CUser*, char*) */

void advancealtar::getMemberNames(CUser *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (char *)0x0)) {
    uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    sprintf(param_2,"\"%s\",\"%s\",\"N/A\",\"N/A\",\"N/A\"",uVar2,uVar1);
  }
  return;
}

```

---

## isOnEvent

```asm
// === 0812cfa6 advancealtar::isOnEvent  [0x0812cfa6-0x812cfe9] ===
 812cfa6:	55                   	push   %ebp
 812cfa7:	89 e5                	mov    %esp,%ebp
 812cfa9:	83 ec 18             	sub    $0x18,%esp
 812cfac:	a1 30 f7 41 09       	mov    0x941f730,%eax
 812cfb1:	c7 44 24 04 77 00 00 	movl   $0x77,0x4(%esp)
 812cfb8:	00 
 812cfb9:	89 04 24             	mov    %eax,(%esp)
 812cfbc:	e8 d7 89 fe ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 812cfc1:	8b 10                	mov    (%eax),%edx
 812cfc3:	83 c2 34             	add    $0x34,%edx
 812cfc6:	8b 12                	mov    (%edx),%edx
 812cfc8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 812cfcf:	00 
 812cfd0:	89 04 24             	mov    %eax,(%esp)
 812cfd3:	ff d2                	call   *%edx
 812cfd5:	83 f0 01             	xor    $0x1,%eax
 812cfd8:	84 c0                	test   %al,%al
 812cfda:	74 07                	je     812cfe3 <_ZN12advancealtar9isOnEventEv+0x3d>
 812cfdc:	b8 00 00 00 00       	mov    $0x0,%eax
 812cfe1:	eb 05                	jmp    812cfe8 <_ZN12advancealtar9isOnEventEv+0x42>
 812cfe3:	b8 01 00 00 00       	mov    $0x1,%eax
 812cfe8:	c9                   	leave
 812cfe9:	c3                   	ret

```

```c
// advancealtar::isOnEvent @ 0x812cfa6

/* advancealtar::isOnEvent() */

bool advancealtar::isOnEvent(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x77);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  return cVar1 == '\x01';
}

```

---

## isOpenAdvanceAltar

```asm
// === 0812cfea advancealtar::isOpenAdvanceAltar  [0x0812cfea-0x812d023] ===
 812cfea:	55                   	push   %ebp
 812cfeb:	89 e5                	mov    %esp,%ebp
 812cfed:	83 ec 28             	sub    $0x28,%esp
 812cff0:	a1 84 f7 41 09       	mov    0x941f784,%eax
 812cff5:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 812cffc:	00 
 812cffd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 812d004:	00 
 812d005:	89 04 24             	mov    %eax,(%esp)
 812d008:	e8 d5 96 ff ff       	call   81266e2 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej>
 812d00d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812d010:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 812d014:	75 07                	jne    812d01d <_ZN12advancealtar18isOpenAdvanceAltarEv+0x33>
 812d016:	b8 01 00 00 00       	mov    $0x1,%eax
 812d01b:	eb 05                	jmp    812d022 <_ZN12advancealtar18isOpenAdvanceAltarEv+0x38>
 812d01d:	b8 00 00 00 00       	mov    $0x0,%eax
 812d022:	c9                   	leave
 812d023:	c3                   	ret

```

```c
// advancealtar::isOpenAdvanceAltar @ 0x812cfea

/* advancealtar::isOpenAdvanceAltar() */

bool advancealtar::isOpenAdvanceAltar(void)

{
  int iVar1;
  
  iVar1 = CDailyScheduleManager::GetScheduleState(GlobalData::s_DailyScheduleManager,4,10);
  return iVar1 == 1;
}

```

---

## isValidRidableId

```asm
// === 08898ff0 advancealtar::isValidRidableId  [0x08898ff0-0x8899009] ===
 8898ff0:	55                   	push   %ebp
 8898ff1:	89 e5                	mov    %esp,%ebp
 8898ff3:	8b 45 08             	mov    0x8(%ebp),%eax
 8898ff6:	83 f8 01             	cmp    $0x1,%eax
 8898ff9:	75 07                	jne    8899002 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x12>
 8898ffb:	b8 01 00 00 00       	mov    $0x1,%eax
 8899000:	eb 05                	jmp    8899007 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0x17>
 8899002:	b8 00 00 00 00       	mov    $0x0,%eax
 8899007:	5d                   	pop    %ebp
 8899008:	c3                   	ret
 8899009:	90                   	nop

```

```c
// advancealtar::isValidRidableId @ 0x8898ff0

/* advancealtar::isValidRidableId(advancealtar::RidableId::T) */

bool advancealtar::isValidRidableId(int param_1)

{
  return param_1 == 1;
}

```

---

## putRidableInfoToPacket

```asm
// === 08141781 advancealtar::putRidableInfoToPacket  [0x08141781-0x8141c6b] ===
 8141781:	55                   	push   %ebp
 8141782:	89 e5                	mov    %esp,%ebp
 8141784:	83 ec 78             	sub    $0x78,%esp
 8141787:	8b 45 0c             	mov    0xc(%ebp),%eax
 814178a:	89 c2                	mov    %eax,%edx
 814178c:	8b 45 08             	mov    0x8(%ebp),%eax
 814178f:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 8141796:	00 
 8141797:	89 54 24 04          	mov    %edx,0x4(%esp)
 814179b:	89 04 24             	mov    %eax,(%esp)
 814179e:	e8 65 c7 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81417a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81417a6:	83 c0 24             	add    $0x24,%eax
 81417a9:	89 04 24             	mov    %eax,(%esp)
 81417ac:	e8 d7 10 00 00       	call   8142888 <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 81417b1:	89 c2                	mov    %eax,%edx
 81417b3:	8b 45 08             	mov    0x8(%ebp),%eax
 81417b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81417ba:	89 04 24             	mov    %eax,(%esp)
 81417bd:	e8 7a a1 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81417c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81417c5:	8d 50 24             	lea    0x24(%eax),%edx
 81417c8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81417cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81417cf:	89 04 24             	mov    %eax,(%esp)
 81417d2:	e8 01 47 ff ff       	call   8135ed8 <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 81417d7:	83 ec 04             	sub    $0x4,%esp
 81417da:	eb 44                	jmp    8141820 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x9f>
 81417dc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81417df:	89 04 24             	mov    %eax,(%esp)
 81417e2:	e8 8f 47 ff ff       	call   8135f76 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEptEv>
 81417e7:	83 c0 04             	add    $0x4,%eax
 81417ea:	89 c2                	mov    %eax,%edx
 81417ec:	8b 45 08             	mov    0x8(%ebp),%eax
 81417ef:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81417f6:	00 
 81417f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81417fb:	89 04 24             	mov    %eax,(%esp)
 81417fe:	e8 05 c7 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141803:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8141806:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814180d:	00 
 814180e:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8141811:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141815:	89 04 24             	mov    %eax,(%esp)
 8141818:	e8 1b 47 ff ff       	call   8135f38 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEppEi>
 814181d:	83 ec 04             	sub    $0x4,%esp
 8141820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141823:	8d 50 24             	lea    0x24(%eax),%edx
 8141826:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8141829:	89 54 24 04          	mov    %edx,0x4(%esp)
 814182d:	89 04 24             	mov    %eax,(%esp)
 8141830:	e8 c9 46 ff ff       	call   8135efe <_ZNKSt3mapIiN12advancealtar6_StageESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8141835:	83 ec 04             	sub    $0x4,%esp
 8141838:	8d 45 b8             	lea    -0x48(%ebp),%eax
 814183b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814183f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8141842:	89 04 24             	mov    %eax,(%esp)
 8141845:	e8 da 46 ff ff       	call   8135f24 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar6_StageEEEneERKS5_>
 814184a:	84 c0                	test   %al,%al
 814184c:	75 8e                	jne    81417dc <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x5b>
 814184e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8141855:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141858:	83 c0 3c             	add    $0x3c,%eax
 814185b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 814185e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8141861:	89 04 24             	mov    %eax,(%esp)
 8141864:	e8 39 46 ff ff       	call   8135ea2 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 8141869:	89 c2                	mov    %eax,%edx
 814186b:	8b 45 08             	mov    0x8(%ebp),%eax
 814186e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141872:	89 04 24             	mov    %eax,(%esp)
 8141875:	e8 c2 a0 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 814187a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 814187d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8141880:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141884:	89 04 24             	mov    %eax,(%esp)
 8141887:	e8 10 10 00 00       	call   814289c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 814188c:	83 ec 04             	sub    $0x4,%esp
 814188f:	eb 44                	jmp    81418d5 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x154>
 8141891:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8141894:	89 04 24             	mov    %eax,(%esp)
 8141897:	e8 1a 4b ff ff       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 814189c:	83 c0 04             	add    $0x4,%eax
 814189f:	89 c2                	mov    %eax,%edx
 81418a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81418a4:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 81418ab:	00 
 81418ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 81418b0:	89 04 24             	mov    %eax,(%esp)
 81418b3:	e8 50 c6 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81418b8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81418bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81418c2:	00 
 81418c3:	8d 55 b0             	lea    -0x50(%ebp),%edx
 81418c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81418ca:	89 04 24             	mov    %eax,(%esp)
 81418cd:	e8 f0 0f 00 00       	call   81428c2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEppEi>
 81418d2:	83 ec 04             	sub    $0x4,%esp
 81418d5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81418d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81418db:	89 54 24 04          	mov    %edx,0x4(%esp)
 81418df:	89 04 24             	mov    %eax,(%esp)
 81418e2:	e8 a1 48 ff ff       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81418e7:	83 ec 04             	sub    $0x4,%esp
 81418ea:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81418ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 81418f1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81418f4:	89 04 24             	mov    %eax,(%esp)
 81418f7:	e8 a6 4a ff ff       	call   81363a2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEneERKS5_>
 81418fc:	84 c0                	test   %al,%al
 81418fe:	75 91                	jne    8141891 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x110>
 8141900:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141903:	83 c0 54             	add    $0x54,%eax
 8141906:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8141909:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814190c:	89 04 24             	mov    %eax,(%esp)
 814190f:	e8 8e 45 ff ff       	call   8135ea2 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 8141914:	89 c2                	mov    %eax,%edx
 8141916:	8b 45 08             	mov    0x8(%ebp),%eax
 8141919:	89 54 24 04          	mov    %edx,0x4(%esp)
 814191d:	89 04 24             	mov    %eax,(%esp)
 8141920:	e8 17 a0 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8141925:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8141928:	8b 55 f0             	mov    -0x10(%ebp),%edx
 814192b:	89 54 24 04          	mov    %edx,0x4(%esp)
 814192f:	89 04 24             	mov    %eax,(%esp)
 8141932:	e8 65 0f 00 00       	call   814289c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8141937:	83 ec 04             	sub    $0x4,%esp
 814193a:	eb 44                	jmp    8141980 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x1ff>
 814193c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 814193f:	89 04 24             	mov    %eax,(%esp)
 8141942:	e8 6f 4a ff ff       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 8141947:	83 c0 04             	add    $0x4,%eax
 814194a:	89 c2                	mov    %eax,%edx
 814194c:	8b 45 08             	mov    0x8(%ebp),%eax
 814194f:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8141956:	00 
 8141957:	89 54 24 04          	mov    %edx,0x4(%esp)
 814195b:	89 04 24             	mov    %eax,(%esp)
 814195e:	e8 a5 c5 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141963:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8141966:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 814196d:	00 
 814196e:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8141971:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141975:	89 04 24             	mov    %eax,(%esp)
 8141978:	e8 45 0f 00 00       	call   81428c2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEppEi>
 814197d:	83 ec 04             	sub    $0x4,%esp
 8141980:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8141983:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8141986:	89 54 24 04          	mov    %edx,0x4(%esp)
 814198a:	89 04 24             	mov    %eax,(%esp)
 814198d:	e8 f6 47 ff ff       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8141992:	83 ec 04             	sub    $0x4,%esp
 8141995:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8141998:	89 44 24 04          	mov    %eax,0x4(%esp)
 814199c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 814199f:	89 04 24             	mov    %eax,(%esp)
 81419a2:	e8 fb 49 ff ff       	call   81363a2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEneERKS5_>
 81419a7:	84 c0                	test   %al,%al
 81419a9:	75 91                	jne    814193c <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x1bb>
 81419ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81419ae:	83 c0 6c             	add    $0x6c,%eax
 81419b1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81419b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81419b7:	89 04 24             	mov    %eax,(%esp)
 81419ba:	e8 e3 44 ff ff       	call   8135ea2 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 81419bf:	89 c2                	mov    %eax,%edx
 81419c1:	8b 45 08             	mov    0x8(%ebp),%eax
 81419c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 81419c8:	89 04 24             	mov    %eax,(%esp)
 81419cb:	e8 6c 9f f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81419d0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81419d3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81419d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81419da:	89 04 24             	mov    %eax,(%esp)
 81419dd:	e8 ba 0e 00 00       	call   814289c <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 81419e2:	83 ec 04             	sub    $0x4,%esp
 81419e5:	eb 44                	jmp    8141a2b <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x2aa>
 81419e7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81419ea:	89 04 24             	mov    %eax,(%esp)
 81419ed:	e8 c4 49 ff ff       	call   81363b6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEptEv>
 81419f2:	83 c0 04             	add    $0x4,%eax
 81419f5:	89 c2                	mov    %eax,%edx
 81419f7:	8b 45 08             	mov    0x8(%ebp),%eax
 81419fa:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8141a01:	00 
 8141a02:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141a06:	89 04 24             	mov    %eax,(%esp)
 8141a09:	e8 fa c4 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141a0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8141a11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8141a18:	00 
 8141a19:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8141a1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141a20:	89 04 24             	mov    %eax,(%esp)
 8141a23:	e8 9a 0e 00 00       	call   81428c2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEppEi>
 8141a28:	83 ec 04             	sub    $0x4,%esp
 8141a2b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8141a2e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8141a31:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141a35:	89 04 24             	mov    %eax,(%esp)
 8141a38:	e8 4b 47 ff ff       	call   8136188 <_ZNKSt3mapIiN12advancealtar8_BuyItemESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8141a3d:	83 ec 04             	sub    $0x4,%esp
 8141a40:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8141a43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141a47:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8141a4a:	89 04 24             	mov    %eax,(%esp)
 8141a4d:	e8 50 49 ff ff       	call   81363a2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar8_BuyItemEEEneERKS5_>
 8141a52:	84 c0                	test   %al,%al
 8141a54:	75 91                	jne    81419e7 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x266>
 8141a56:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8141a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141a60:	05 84 00 00 00       	add    $0x84,%eax
 8141a65:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8141a68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8141a6b:	89 04 24             	mov    %eax,(%esp)
 8141a6e:	e8 8d 0e 00 00       	call   8142900 <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE4sizeEv>
 8141a73:	89 c2                	mov    %eax,%edx
 8141a75:	8b 45 08             	mov    0x8(%ebp),%eax
 8141a78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141a7c:	89 04 24             	mov    %eax,(%esp)
 8141a7f:	e8 b8 9e f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8141a84:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8141a87:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8141a8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141a8e:	89 04 24             	mov    %eax,(%esp)
 8141a91:	e8 60 48 ff ff       	call   81362f6 <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8141a96:	83 ec 04             	sub    $0x4,%esp
 8141a99:	eb 44                	jmp    8141adf <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x35e>
 8141a9b:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8141a9e:	89 04 24             	mov    %eax,(%esp)
 8141aa1:	e8 ee 48 ff ff       	call   8136394 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8141aa6:	83 c0 01             	add    $0x1,%eax
 8141aa9:	89 c2                	mov    %eax,%edx
 8141aab:	8b 45 08             	mov    0x8(%ebp),%eax
 8141aae:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8141ab5:	00 
 8141ab6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141aba:	89 04 24             	mov    %eax,(%esp)
 8141abd:	e8 46 c4 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141ac2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8141ac5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8141acc:	00 
 8141acd:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8141ad0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141ad4:	89 04 24             	mov    %eax,(%esp)
 8141ad7:	e8 7a 48 ff ff       	call   8136356 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8141adc:	83 ec 04             	sub    $0x4,%esp
 8141adf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8141ae2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8141ae5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141ae9:	89 04 24             	mov    %eax,(%esp)
 8141aec:	e8 2b 48 ff ff       	call   813631c <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8141af1:	83 ec 04             	sub    $0x4,%esp
 8141af4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8141af7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141afb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8141afe:	89 04 24             	mov    %eax,(%esp)
 8141b01:	e8 3c 48 ff ff       	call   8136342 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 8141b06:	84 c0                	test   %al,%al
 8141b08:	75 91                	jne    8141a9b <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x31a>
 8141b0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141b0d:	05 9c 00 00 00       	add    $0x9c,%eax
 8141b12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8141b15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8141b18:	89 04 24             	mov    %eax,(%esp)
 8141b1b:	e8 e0 0d 00 00       	call   8142900 <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE4sizeEv>
 8141b20:	89 c2                	mov    %eax,%edx
 8141b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8141b25:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141b29:	89 04 24             	mov    %eax,(%esp)
 8141b2c:	e8 0b 9e f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8141b31:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8141b34:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8141b37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141b3b:	89 04 24             	mov    %eax,(%esp)
 8141b3e:	e8 b3 47 ff ff       	call   81362f6 <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 8141b43:	83 ec 04             	sub    $0x4,%esp
 8141b46:	eb 44                	jmp    8141b8c <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x40b>
 8141b48:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8141b4b:	89 04 24             	mov    %eax,(%esp)
 8141b4e:	e8 41 48 ff ff       	call   8136394 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEptEv>
 8141b53:	83 c0 01             	add    $0x1,%eax
 8141b56:	89 c2                	mov    %eax,%edx
 8141b58:	8b 45 08             	mov    0x8(%ebp),%eax
 8141b5b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8141b62:	00 
 8141b63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141b67:	89 04 24             	mov    %eax,(%esp)
 8141b6a:	e8 99 c3 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141b6f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8141b72:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8141b79:	00 
 8141b7a:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8141b7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141b81:	89 04 24             	mov    %eax,(%esp)
 8141b84:	e8 cd 47 ff ff       	call   8136356 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEppEi>
 8141b89:	83 ec 04             	sub    $0x4,%esp
 8141b8c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8141b8f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8141b92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141b96:	89 04 24             	mov    %eax,(%esp)
 8141b99:	e8 7e 47 ff ff       	call   813631c <_ZNKSt3mapIhN12advancealtar5_SlotESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 8141b9e:	83 ec 04             	sub    $0x4,%esp
 8141ba1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8141ba4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141ba8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8141bab:	89 04 24             	mov    %eax,(%esp)
 8141bae:	e8 8f 47 ff ff       	call   8136342 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar5_SlotEEEneERKS5_>
 8141bb3:	84 c0                	test   %al,%al
 8141bb5:	75 91                	jne    8141b48 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x3c7>
 8141bb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141bba:	05 b4 00 00 00       	add    $0xb4,%eax
 8141bbf:	89 04 24             	mov    %eax,(%esp)
 8141bc2:	e8 33 3d ff ff       	call   81358fa <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE4sizeEv>
 8141bc7:	89 c2                	mov    %eax,%edx
 8141bc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8141bcc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141bd0:	89 04 24             	mov    %eax,(%esp)
 8141bd3:	e8 64 9d f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8141bd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141bdb:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 8141be1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8141be4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141be8:	89 04 24             	mov    %eax,(%esp)
 8141beb:	e8 1e 3d ff ff       	call   813590e <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 8141bf0:	83 ec 04             	sub    $0x4,%esp
 8141bf3:	eb 44                	jmp    8141c39 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x4b8>
 8141bf5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8141bf8:	89 04 24             	mov    %eax,(%esp)
 8141bfb:	e8 ac 3d ff ff       	call   81359ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEptEv>
 8141c00:	83 c0 04             	add    $0x4,%eax
 8141c03:	89 c2                	mov    %eax,%edx
 8141c05:	8b 45 08             	mov    0x8(%ebp),%eax
 8141c08:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8141c0f:	00 
 8141c10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141c14:	89 04 24             	mov    %eax,(%esp)
 8141c17:	e8 ec c2 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 8141c1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8141c1f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8141c26:	00 
 8141c27:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8141c2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141c2e:	89 04 24             	mov    %eax,(%esp)
 8141c31:	e8 38 3d ff ff       	call   813596e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEppEi>
 8141c36:	83 ec 04             	sub    $0x4,%esp
 8141c39:	8b 45 0c             	mov    0xc(%ebp),%eax
 8141c3c:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 8141c42:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8141c45:	89 54 24 04          	mov    %edx,0x4(%esp)
 8141c49:	89 04 24             	mov    %eax,(%esp)
 8141c4c:	e8 e3 3c ff ff       	call   8135934 <_ZNKSt3mapIiN12advancealtar7_RewardESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8141c51:	83 ec 04             	sub    $0x4,%esp
 8141c54:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8141c57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8141c5b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8141c5e:	89 04 24             	mov    %eax,(%esp)
 8141c61:	e8 f4 3c ff ff       	call   813595a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN12advancealtar7_RewardEEEneERKS5_>
 8141c66:	84 c0                	test   %al,%al
 8141c68:	75 8b                	jne    8141bf5 <_ZN12advancealtar22putRidableInfoToPacketER11PacketGuardRKNS_16AdvanceAltarDataE+0x474>
 8141c6a:	c9                   	leave
 8141c6b:	c3                   	ret

```

```c
// advancealtar::putRidableInfoToPacket @ 0x8141781

/* advancealtar::putRidableInfoToPacket(PacketGuard&, advancealtar::AdvanceAltarData const&) */

void advancealtar::putRidableInfoToPacket(PacketGuard *param_1,AdvanceAltarData *param_2)

{
  char cVar1;
  int iVar2;
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_68 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_64 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_60 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_5c [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_58 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_54 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_50 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_4c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_48 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_44 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_40 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_3c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_38 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_34 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_30 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_2c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_28 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_20 [4];
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> local_18 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  *local_14;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  *local_10;
  
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)param_2,0x21);
  iVar2 = std::
          map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
          ::size((map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
                  *)(param_2 + 0x24));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  ::begin(local_50);
  while( true ) {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::end(local_4c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_50,(_Rb_tree_const_iterator *)local_4c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                       local_50);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),8);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
              (local_48,(int)local_50);
  }
  local_14 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              *)(param_2 + 0x3c);
  iVar2 = std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::size(local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_54);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_44);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_54,(_Rb_tree_const_iterator *)local_44);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_54);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),0xc);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
              (local_40,(int)local_54);
  }
  local_14 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              *)(param_2 + 0x54);
  iVar2 = std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::size(local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_58);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_3c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_58,(_Rb_tree_const_iterator *)local_3c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_58);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),0xc);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
              (local_38,(int)local_58);
  }
  local_14 = (map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
              *)(param_2 + 0x6c);
  iVar2 = std::
          map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
          ::size(local_14);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_5c);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_34);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_5c,(_Rb_tree_const_iterator *)local_34);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_5c);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),0xc);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
              (local_30,(int)local_5c);
  }
  local_10 = (map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              *)(param_2 + 0x84);
  iVar2 = std::
          map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
          ::size(local_10);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_60);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_60,(_Rb_tree_const_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_60);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 1),10);
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_28,(int)local_60);
  }
  local_10 = (map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
              *)(param_2 + 0x9c);
  iVar2 = std::
          map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
          ::size(local_10);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_64);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_24);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_64,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_64);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 1),10);
    std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
              (local_20,(int)local_64);
  }
  iVar2 = std::
          map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
          ::size((map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
                  *)(param_2 + 0xb4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
  std::
  map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
  ::begin(local_68);
  while( true ) {
    std::
    map<int,advancealtar::_Reward,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Reward>>>
    ::end(local_1c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_68,(_Rb_tree_const_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>> *)
                       local_68);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)(iVar2 + 4),5);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Reward>>::operator++
              (local_18,(int)local_68);
  }
  return;
}

```

