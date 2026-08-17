# TiXmlParsingData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## Stamp

```asm
// === 087e6020 TiXmlParsingData::Stamp  [0x087e6020-0x87e622f] ===
 87e6020:	55                   	push   %ebp
 87e6021:	89 e5                	mov    %esp,%ebp
 87e6023:	57                   	push   %edi
 87e6024:	56                   	push   %esi
 87e6025:	53                   	push   %ebx
 87e6026:	83 ec 3c             	sub    $0x3c,%esp
 87e6029:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e602c:	8b 75 08             	mov    0x8(%ebp),%esi
 87e602f:	85 db                	test   %ebx,%ebx
 87e6031:	0f 84 63 01 00 00    	je     87e619a <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x17a>
 87e6037:	8b 46 0c             	mov    0xc(%esi),%eax
 87e603a:	85 c0                	test   %eax,%eax
 87e603c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e603f:	7e 67                	jle    87e60a8 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x88>
 87e6041:	8b 4e 08             	mov    0x8(%esi),%ecx
 87e6044:	8b 3e                	mov    (%esi),%edi
 87e6046:	8b 56 04             	mov    0x4(%esi),%edx
 87e6049:	85 c9                	test   %ecx,%ecx
 87e604b:	0f 84 25 01 00 00    	je     87e6176 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x156>
 87e6051:	39 cb                	cmp    %ecx,%ebx
 87e6053:	76 2b                	jbe    87e6080 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x60>
 87e6055:	0f b6 01             	movzbl (%ecx),%eax
 87e6058:	3c 0a                	cmp    $0xa,%al
 87e605a:	0f 84 c0 00 00 00    	je     87e6120 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x100>
 87e6060:	77 66                	ja     87e60c8 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0xa8>
 87e6062:	84 c0                	test   %al,%al
 87e6064:	74 42                	je     87e60a8 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x88>
 87e6066:	3c 09                	cmp    $0x9,%al
 87e6068:	74 46                	je     87e60b0 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x90>
 87e606a:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 87e606e:	66 90                	xchg   %ax,%ax
 87e6070:	0f 84 c2 00 00 00    	je     87e6138 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x118>
 87e6076:	83 c1 01             	add    $0x1,%ecx
 87e6079:	83 c2 01             	add    $0x1,%edx
 87e607c:	39 cb                	cmp    %ecx,%ebx
 87e607e:	77 d5                	ja     87e6055 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x35>
 87e6080:	83 ff ff             	cmp    $0xffffffff,%edi
 87e6083:	89 3e                	mov    %edi,(%esi)
 87e6085:	89 56 04             	mov    %edx,0x4(%esi)
 87e6088:	0f 8c 78 01 00 00    	jl     87e6206 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x1e6>
 87e608e:	83 fa ff             	cmp    $0xffffffff,%edx
 87e6091:	0f 8c 4b 01 00 00    	jl     87e61e2 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x1c2>
 87e6097:	85 c9                	test   %ecx,%ecx
 87e6099:	89 4e 08             	mov    %ecx,0x8(%esi)
 87e609c:	0f 84 1c 01 00 00    	je     87e61be <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x19e>
 87e60a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e60a8:	83 c4 3c             	add    $0x3c,%esp
 87e60ab:	5b                   	pop    %ebx
 87e60ac:	5e                   	pop    %esi
 87e60ad:	5f                   	pop    %edi
 87e60ae:	5d                   	pop    %ebp
 87e60af:	c3                   	ret
 87e60b0:	89 d0                	mov    %edx,%eax
 87e60b2:	83 c1 01             	add    $0x1,%ecx
 87e60b5:	c1 fa 1f             	sar    $0x1f,%edx
 87e60b8:	f7 7d e4             	idivl  -0x1c(%ebp)
 87e60bb:	8d 50 01             	lea    0x1(%eax),%edx
 87e60be:	0f af 55 e4          	imul   -0x1c(%ebp),%edx
 87e60c2:	eb 8d                	jmp    87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e60c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e60c8:	3c 0d                	cmp    $0xd,%al
 87e60ca:	74 3c                	je     87e6108 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0xe8>
 87e60cc:	3c ef                	cmp    $0xef,%al
 87e60ce:	75 9a                	jne    87e606a <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x4a>
 87e60d0:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 87e60d4:	75 a0                	jne    87e6076 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x56>
 87e60d6:	80 79 01 00          	cmpb   $0x0,0x1(%ecx)
 87e60da:	0f 84 71 ff ff ff    	je     87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e60e0:	80 79 02 00          	cmpb   $0x0,0x2(%ecx)
 87e60e4:	0f 84 67 ff ff ff    	je     87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e60ea:	0f b6 41 01          	movzbl 0x1(%ecx),%eax
 87e60ee:	3c bb                	cmp    $0xbb,%al
 87e60f0:	74 68                	je     87e615a <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x13a>
 87e60f2:	3c bf                	cmp    $0xbf,%al
 87e60f4:	74 72                	je     87e6168 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x148>
 87e60f6:	83 c1 03             	add    $0x3,%ecx
 87e60f9:	83 c2 01             	add    $0x1,%edx
 87e60fc:	e9 50 ff ff ff       	jmp    87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e6101:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e6108:	83 c1 01             	add    $0x1,%ecx
 87e610b:	83 c7 01             	add    $0x1,%edi
 87e610e:	80 39 0a             	cmpb   $0xa,(%ecx)
 87e6111:	74 18                	je     87e612b <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x10b>
 87e6113:	31 d2                	xor    %edx,%edx
 87e6115:	e9 37 ff ff ff       	jmp    87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e611a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e6120:	83 c1 01             	add    $0x1,%ecx
 87e6123:	83 c7 01             	add    $0x1,%edi
 87e6126:	80 39 0d             	cmpb   $0xd,(%ecx)
 87e6129:	75 e8                	jne    87e6113 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0xf3>
 87e612b:	83 c1 01             	add    $0x1,%ecx
 87e612e:	31 d2                	xor    %edx,%edx
 87e6130:	e9 1c ff ff ff       	jmp    87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e6135:	8d 76 00             	lea    0x0(%esi),%esi
 87e6138:	0f b6 c0             	movzbl %al,%eax
 87e613b:	8b 04 85 40 19 de 08 	mov    0x8de1940(,%eax,4),%eax
 87e6142:	85 c0                	test   %eax,%eax
 87e6144:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e6147:	b8 01 00 00 00       	mov    $0x1,%eax
 87e614c:	0f 45 45 d4          	cmovne -0x2c(%ebp),%eax
 87e6150:	83 c2 01             	add    $0x1,%edx
 87e6153:	01 c1                	add    %eax,%ecx
 87e6155:	e9 f7 fe ff ff       	jmp    87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e615a:	80 79 02 bf          	cmpb   $0xbf,0x2(%ecx)
 87e615e:	75 96                	jne    87e60f6 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0xd6>
 87e6160:	83 c1 03             	add    $0x3,%ecx
 87e6163:	e9 e9 fe ff ff       	jmp    87e6051 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x31>
 87e6168:	0f b6 41 02          	movzbl 0x2(%ecx),%eax
 87e616c:	3c be                	cmp    $0xbe,%al
 87e616e:	74 f0                	je     87e6160 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x140>
 87e6170:	3c bf                	cmp    $0xbf,%al
 87e6172:	75 82                	jne    87e60f6 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0xd6>
 87e6174:	eb ea                	jmp    87e6160 <_ZN16TiXmlParsingData5StampEPKc13TiXmlEncoding+0x140>
 87e6176:	c7 44 24 0c e0 1f de 	movl   $0x8de1fe0,0xc(%esp)
 87e617d:	08 
 87e617e:	c7 44 24 08 d2 00 00 	movl   $0xd2,0x8(%esp)
 87e6185:	00 
 87e6186:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e618d:	08 
 87e618e:	c7 04 24 05 0f de 08 	movl   $0x8de0f05,(%esp)
 87e6195:	e8 b6 7a 89 ff       	call   807dc50 <__assert_fail@plt>
 87e619a:	c7 44 24 0c e0 1f de 	movl   $0x8de1fe0,0xc(%esp)
 87e61a1:	08 
 87e61a2:	c7 44 24 08 c6 00 00 	movl   $0xc6,0x8(%esp)
 87e61a9:	00 
 87e61aa:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e61b1:	08 
 87e61b2:	c7 04 24 21 18 de 08 	movl   $0x8de1821,(%esp)
 87e61b9:	e8 92 7a 89 ff       	call   807dc50 <__assert_fail@plt>
 87e61be:	c7 44 24 0c e0 1f de 	movl   $0x8de1fe0,0xc(%esp)
 87e61c5:	08 
 87e61c6:	c7 44 24 08 36 01 00 	movl   $0x136,0x8(%esp)
 87e61cd:	00 
 87e61ce:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e61d5:	08 
 87e61d6:	c7 04 24 47 18 de 08 	movl   $0x8de1847,(%esp)
 87e61dd:	e8 6e 7a 89 ff       	call   807dc50 <__assert_fail@plt>
 87e61e2:	c7 44 24 0c e0 1f de 	movl   $0x8de1fe0,0xc(%esp)
 87e61e9:	08 
 87e61ea:	c7 44 24 08 34 01 00 	movl   $0x134,0x8(%esp)
 87e61f1:	00 
 87e61f2:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e61f9:	08 
 87e61fa:	c7 04 24 36 18 de 08 	movl   $0x8de1836,(%esp)
 87e6201:	e8 4a 7a 89 ff       	call   807dc50 <__assert_fail@plt>
 87e6206:	c7 44 24 0c e0 1f de 	movl   $0x8de1fe0,0xc(%esp)
 87e620d:	08 
 87e620e:	c7 44 24 08 33 01 00 	movl   $0x133,0x8(%esp)
 87e6215:	00 
 87e6216:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e621d:	08 
 87e621e:	c7 04 24 25 18 de 08 	movl   $0x8de1825,(%esp)
 87e6225:	e8 26 7a 89 ff       	call   807dc50 <__assert_fail@plt>
 87e622a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlParsingData::Stamp @ 0x87e6020

/* TiXmlParsingData::Stamp(char const*, TiXmlEncoding) */

void __thiscall TiXmlParsingData::Stamp(TiXmlParsingData *this,byte *param_1,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("now","tinyxmlparser.cpp",0xc6,
                  "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
  }
  iVar2 = *(int *)(this + 0xc);
  if (0 < iVar2) {
    pbVar4 = *(byte **)(this + 8);
    iVar6 = *(int *)this;
    iVar5 = *(int *)(this + 4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("p","tinyxmlparser.cpp",0xd2,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
LAB_087e6051:
    if (pbVar4 < param_1) {
      while (bVar1 = *pbVar4, bVar1 != 10) {
        if (bVar1 < 0xb) {
          if (bVar1 == 0) {
            return;
          }
          if (bVar1 == 9) {
            pbVar4 = pbVar4 + 1;
            iVar5 = (iVar5 / iVar2 + 1) * iVar2;
            goto LAB_087e6051;
          }
LAB_087e606a:
          if (param_3 == 1) {
            iVar3 = 1;
            if (*(int *)(TiXmlBase::utf8ByteTable + (uint)bVar1 * 4) != 0) {
              iVar3 = *(int *)(TiXmlBase::utf8ByteTable + (uint)bVar1 * 4);
            }
            iVar5 = iVar5 + 1;
            pbVar4 = pbVar4 + iVar3;
            goto LAB_087e6051;
          }
        }
        else {
          if (bVar1 == 0xd) {
            if (pbVar4[1] != 10) goto LAB_087e6113;
            goto LAB_087e612b;
          }
          if (bVar1 != 0xef) goto LAB_087e606a;
          if (param_3 == 1) {
            if ((pbVar4[1] == 0) || (pbVar4[2] == 0)) goto LAB_087e6051;
            if (pbVar4[1] == 0xbb) {
              bVar1 = pbVar4[2];
joined_r0x087e615e:
              if (bVar1 == 0xbf) {
LAB_087e6160:
                pbVar4 = pbVar4 + 3;
                goto LAB_087e6051;
              }
            }
            else if (pbVar4[1] == 0xbf) {
              bVar1 = pbVar4[2];
              if (bVar1 != 0xbe) goto joined_r0x087e615e;
              goto LAB_087e6160;
            }
            pbVar4 = pbVar4 + 3;
            iVar5 = iVar5 + 1;
            goto LAB_087e6051;
          }
        }
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + 1;
        if (param_1 <= pbVar4) goto LAB_087e6080;
      }
      if (pbVar4[1] == 0xd) {
LAB_087e612b:
        iVar6 = iVar6 + 1;
        pbVar4 = pbVar4 + 2;
        iVar5 = 0;
      }
      else {
LAB_087e6113:
        iVar6 = iVar6 + 1;
        pbVar4 = pbVar4 + 1;
        iVar5 = 0;
      }
      goto LAB_087e6051;
    }
LAB_087e6080:
    *(int *)this = iVar6;
    *(int *)(this + 4) = iVar5;
    if (iVar6 < -1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cursor.row >= -1","tinyxmlparser.cpp",0x133,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
    if (iVar5 < -1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("cursor.col >= -1","tinyxmlparser.cpp",0x134,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
    *(byte **)(this + 8) = pbVar4;
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("stamp","tinyxmlparser.cpp",0x136,
                    "void TiXmlParsingData::Stamp(const char*, TiXmlEncoding)");
    }
  }
  return;
}

```

