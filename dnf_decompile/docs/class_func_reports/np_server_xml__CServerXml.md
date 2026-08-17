# np_server_xml__CServerXml

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CServerXml

```asm
// === 080c5a14 np_server_xml::CServerXml::CServerXml  [0x080c5a14-0x80c5b25] ===
 80c5a14:	55                   	push   %ebp
 80c5a15:	89 e5                	mov    %esp,%ebp
 80c5a17:	56                   	push   %esi
 80c5a18:	53                   	push   %ebx
 80c5a19:	83 ec 10             	sub    $0x10,%esp
 80c5a1c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a1f:	83 c0 08             	add    $0x8,%eax
 80c5a22:	89 04 24             	mov    %eax,(%esp)
 80c5a25:	e8 c6 d3 71 00       	call   87e2df0 <_ZN13TiXmlDocumentC1Ev>
 80c5a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a2d:	83 c0 54             	add    $0x54,%eax
 80c5a30:	89 04 24             	mov    %eax,(%esp)
 80c5a33:	e8 98 0b 64 00       	call   87065d0 <_ZNSsC1Ev>
 80c5a38:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a3b:	83 c0 58             	add    $0x58,%eax
 80c5a3e:	89 04 24             	mov    %eax,(%esp)
 80c5a41:	e8 a4 11 00 00       	call   80c6bea <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 80c5a46:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a49:	83 c0 70             	add    $0x70,%eax
 80c5a4c:	89 04 24             	mov    %eax,(%esp)
 80c5a4f:	e8 96 11 00 00       	call   80c6bea <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 80c5a54:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a57:	05 88 00 00 00       	add    $0x88,%eax
 80c5a5c:	89 04 24             	mov    %eax,(%esp)
 80c5a5f:	e8 86 11 00 00       	call   80c6bea <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEEC1Ev>
 80c5a64:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a67:	05 a0 00 00 00       	add    $0xa0,%eax
 80c5a6c:	89 04 24             	mov    %eax,(%esp)
 80c5a6f:	e8 f0 11 00 00       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 80c5a74:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a77:	89 04 24             	mov    %eax,(%esp)
 80c5a7a:	e8 bf 01 00 00       	call   80c5c3e <_ZN13np_server_xml10CServerXml10InitStringEv>
 80c5a7f:	e9 9a 00 00 00       	jmp    80c5b1e <_ZN13np_server_xml10CServerXmlC1Ev+0x10a>
 80c5a84:	89 d3                	mov    %edx,%ebx
 80c5a86:	89 c6                	mov    %eax,%esi
 80c5a88:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5a8b:	05 a0 00 00 00       	add    $0xa0,%eax
 80c5a90:	89 04 24             	mov    %eax,(%esp)
 80c5a93:	e8 2e 10 00 00       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 80c5a98:	89 f0                	mov    %esi,%eax
 80c5a9a:	89 da                	mov    %ebx,%edx
 80c5a9c:	eb 00                	jmp    80c5a9e <_ZN13np_server_xml10CServerXmlC1Ev+0x8a>
 80c5a9e:	89 d3                	mov    %edx,%ebx
 80c5aa0:	89 c6                	mov    %eax,%esi
 80c5aa2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5aa5:	05 88 00 00 00       	add    $0x88,%eax
 80c5aaa:	89 04 24             	mov    %eax,(%esp)
 80c5aad:	e8 00 10 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5ab2:	89 f0                	mov    %esi,%eax
 80c5ab4:	89 da                	mov    %ebx,%edx
 80c5ab6:	eb 00                	jmp    80c5ab8 <_ZN13np_server_xml10CServerXmlC1Ev+0xa4>
 80c5ab8:	89 d3                	mov    %edx,%ebx
 80c5aba:	89 c6                	mov    %eax,%esi
 80c5abc:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5abf:	83 c0 70             	add    $0x70,%eax
 80c5ac2:	89 04 24             	mov    %eax,(%esp)
 80c5ac5:	e8 e8 0f 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5aca:	89 f0                	mov    %esi,%eax
 80c5acc:	89 da                	mov    %ebx,%edx
 80c5ace:	eb 00                	jmp    80c5ad0 <_ZN13np_server_xml10CServerXmlC1Ev+0xbc>
 80c5ad0:	89 d3                	mov    %edx,%ebx
 80c5ad2:	89 c6                	mov    %eax,%esi
 80c5ad4:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5ad7:	83 c0 58             	add    $0x58,%eax
 80c5ada:	89 04 24             	mov    %eax,(%esp)
 80c5add:	e8 d0 0f 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5ae2:	89 f0                	mov    %esi,%eax
 80c5ae4:	89 da                	mov    %ebx,%edx
 80c5ae6:	eb 00                	jmp    80c5ae8 <_ZN13np_server_xml10CServerXmlC1Ev+0xd4>
 80c5ae8:	89 d3                	mov    %edx,%ebx
 80c5aea:	89 c6                	mov    %eax,%esi
 80c5aec:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5aef:	83 c0 54             	add    $0x54,%eax
 80c5af2:	89 04 24             	mov    %eax,(%esp)
 80c5af5:	e8 e6 20 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c5afa:	89 f0                	mov    %esi,%eax
 80c5afc:	89 da                	mov    %ebx,%edx
 80c5afe:	eb 00                	jmp    80c5b00 <_ZN13np_server_xml10CServerXmlC1Ev+0xec>
 80c5b00:	89 d3                	mov    %edx,%ebx
 80c5b02:	89 c6                	mov    %eax,%esi
 80c5b04:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b07:	83 c0 08             	add    $0x8,%eax
 80c5b0a:	89 04 24             	mov    %eax,(%esp)
 80c5b0d:	e8 ee 0f 00 00       	call   80c6b00 <_ZN13TiXmlDocumentD1Ev>
 80c5b12:	89 f0                	mov    %esi,%eax
 80c5b14:	89 da                	mov    %ebx,%edx
 80c5b16:	89 04 24             	mov    %eax,(%esp)
 80c5b19:	e8 32 dc a1 00       	call   8ae3750 <_Unwind_Resume>
 80c5b1e:	83 c4 10             	add    $0x10,%esp
 80c5b21:	5b                   	pop    %ebx
 80c5b22:	5e                   	pop    %esi
 80c5b23:	5d                   	pop    %ebp
 80c5b24:	c3                   	ret
 80c5b25:	90                   	nop

```

```c
// np_server_xml::CServerXml::CServerXml @ 0x80c5a14

/* np_server_xml::CServerXml::CServerXml() */

void __thiscall np_server_xml::CServerXml::CServerXml(CServerXml *this)

{
  TiXmlDocument::TiXmlDocument((TiXmlDocument *)(this + 8));
                    /* try { // try from 080c5a33 to 080c5a37 has its CatchHandler @ 080c5b00 */
  std::string::string((string *)(this + 0x54));
                    /* try { // try from 080c5a41 to 080c5a45 has its CatchHandler @ 080c5ae8 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
                    /* try { // try from 080c5a4f to 080c5a53 has its CatchHandler @ 080c5ad0 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
                    /* try { // try from 080c5a5f to 080c5a63 has its CatchHandler @ 080c5ab8 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
                    /* try { // try from 080c5a6f to 080c5a73 has its CatchHandler @ 080c5a9e */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
                    /* try { // try from 080c5a7a to 080c5a7e has its CatchHandler @ 080c5a84 */
  InitString(this);
  return;
}

```

---

## CharsetInit

```asm
// === 080c5e0e np_server_xml::CServerXml::CharsetInit  [0x080c5e0e-0x80c5fad] ===
 80c5e0e:	55                   	push   %ebp
 80c5e0f:	89 e5                	mov    %esp,%ebp
 80c5e11:	83 ec 28             	sub    $0x28,%esp
 80c5e14:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80c5e1b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80c5e22:	c7 44 24 04 63 46 b2 	movl   $0x8b24663,0x4(%esp)
 80c5e29:	08 
 80c5e2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c5e2d:	89 04 24             	mov    %eax,(%esp)
 80c5e30:	e8 a5 0c 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c5e35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c5e38:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c5e3c:	75 18                	jne    80c5e56 <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x48>
 80c5e3e:	c7 04 24 6c 46 b2 08 	movl   $0x8b2466c,(%esp)
 80c5e45:	e8 26 87 fb ff       	call   807e570 <puts@plt>
 80c5e4a:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c5e51:	e8 6a 83 fb ff       	call   807e1c0 <exit@plt>
 80c5e56:	c7 44 24 04 8c 46 b2 	movl   $0x8b2468c,0x4(%esp)
 80c5e5d:	08 
 80c5e5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c5e61:	89 04 24             	mov    %eax,(%esp)
 80c5e64:	e8 71 0c 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c5e69:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c5e6c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c5e70:	75 18                	jne    80c5e8a <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x7c>
 80c5e72:	c7 04 24 94 46 b2 08 	movl   $0x8b24694,(%esp)
 80c5e79:	e8 f2 86 fb ff       	call   807e570 <puts@plt>
 80c5e7e:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c5e85:	e8 36 83 fb ff       	call   807e1c0 <exit@plt>
 80c5e8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c5e8d:	8b 00                	mov    (%eax),%eax
 80c5e8f:	83 c0 2c             	add    $0x2c,%eax
 80c5e92:	8b 10                	mov    (%eax),%edx
 80c5e94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c5e97:	89 04 24             	mov    %eax,(%esp)
 80c5e9a:	ff d2                	call   *%edx
 80c5e9c:	c7 44 24 04 b5 46 b2 	movl   $0x8b246b5,0x4(%esp)
 80c5ea3:	08 
 80c5ea4:	89 04 24             	mov    %eax,(%esp)
 80c5ea7:	e8 34 b3 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c5eac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c5eaf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80c5eb3:	75 18                	jne    80c5ecd <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0xbf>
 80c5eb5:	c7 04 24 ba 46 b2 08 	movl   $0x8b246ba,(%esp)
 80c5ebc:	e8 af 86 fb ff       	call   807e570 <puts@plt>
 80c5ec1:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c5ec8:	e8 f3 82 fb ff       	call   807e1c0 <exit@plt>
 80c5ecd:	c7 44 24 04 d8 46 b2 	movl   $0x8b246d8,0x4(%esp)
 80c5ed4:	08 
 80c5ed5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c5ed8:	89 04 24             	mov    %eax,(%esp)
 80c5edb:	e8 00 86 fb ff       	call   807e4e0 <strcmp@plt>
 80c5ee0:	85 c0                	test   %eax,%eax
 80c5ee2:	75 0f                	jne    80c5ef3 <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0xe5>
 80c5ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5ee7:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 80c5eee:	e9 a7 00 00 00       	jmp    80c5f9a <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x18c>
 80c5ef3:	c7 44 24 04 dc 46 b2 	movl   $0x8b246dc,0x4(%esp)
 80c5efa:	08 
 80c5efb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c5efe:	89 04 24             	mov    %eax,(%esp)
 80c5f01:	e8 da 85 fb ff       	call   807e4e0 <strcmp@plt>
 80c5f06:	85 c0                	test   %eax,%eax
 80c5f08:	75 0f                	jne    80c5f19 <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x10b>
 80c5f0a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5f0d:	c7 40 50 01 00 00 00 	movl   $0x1,0x50(%eax)
 80c5f14:	e9 81 00 00 00       	jmp    80c5f9a <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x18c>
 80c5f19:	c7 44 24 04 e0 46 b2 	movl   $0x8b246e0,0x4(%esp)
 80c5f20:	08 
 80c5f21:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c5f24:	89 04 24             	mov    %eax,(%esp)
 80c5f27:	e8 b4 85 fb ff       	call   807e4e0 <strcmp@plt>
 80c5f2c:	85 c0                	test   %eax,%eax
 80c5f2e:	75 0c                	jne    80c5f3c <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x12e>
 80c5f30:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5f33:	c7 40 50 02 00 00 00 	movl   $0x2,0x50(%eax)
 80c5f3a:	eb 5e                	jmp    80c5f9a <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x18c>
 80c5f3c:	c7 44 24 04 e4 46 b2 	movl   $0x8b246e4,0x4(%esp)
 80c5f43:	08 
 80c5f44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c5f47:	89 04 24             	mov    %eax,(%esp)
 80c5f4a:	e8 91 85 fb ff       	call   807e4e0 <strcmp@plt>
 80c5f4f:	85 c0                	test   %eax,%eax
 80c5f51:	75 0c                	jne    80c5f5f <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x151>
 80c5f53:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5f56:	c7 40 50 03 00 00 00 	movl   $0x3,0x50(%eax)
 80c5f5d:	eb 3b                	jmp    80c5f9a <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x18c>
 80c5f5f:	c7 44 24 04 e8 46 b2 	movl   $0x8b246e8,0x4(%esp)
 80c5f66:	08 
 80c5f67:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c5f6a:	89 04 24             	mov    %eax,(%esp)
 80c5f6d:	e8 6e 85 fb ff       	call   807e4e0 <strcmp@plt>
 80c5f72:	85 c0                	test   %eax,%eax
 80c5f74:	75 0c                	jne    80c5f82 <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x174>
 80c5f76:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5f79:	c7 40 50 04 00 00 00 	movl   $0x4,0x50(%eax)
 80c5f80:	eb 18                	jmp    80c5f9a <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode+0x18c>
 80c5f82:	c7 04 24 ba 46 b2 08 	movl   $0x8b246ba,(%esp)
 80c5f89:	e8 e2 85 fb ff       	call   807e570 <puts@plt>
 80c5f8e:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c5f95:	e8 26 82 fb ff       	call   807e1c0 <exit@plt>
 80c5f9a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5f9d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c5fa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c5fa4:	89 04 24             	mov    %eax,(%esp)
 80c5fa7:	e8 44 7f fb ff       	call   807def0 <strcpy@plt>
 80c5fac:	c9                   	leave
 80c5fad:	c3                   	ret

```

```c
// np_server_xml::CServerXml::CharsetInit @ 0x80c5e0e

/* np_server_xml::CServerXml::CharsetInit(TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::CharsetInit(CServerXml *this,TiXmlNode *param_1)

{
  TiXmlNode *this_00;
  int *piVar1;
  TiXmlElement *this_01;
  char *__s1;
  int iVar2;
  
  this_00 = (TiXmlNode *)TiXmlNode::FirstChild(param_1,"option");
  if (this_00 == (TiXmlNode *)0x0) {
    puts("[CServerXml] <option> Tag Error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  piVar1 = (int *)TiXmlNode::FirstChild(this_00,"charset");
  if (piVar1 == (int *)0x0) {
    puts("[CServerXml] <charset> Tag Error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  this_01 = (TiXmlElement *)(**(code **)(*piVar1 + 0x2c))(piVar1);
  __s1 = (char *)TiXmlElement::Attribute(this_01,"type");
  if (__s1 == (char *)0x0) {
    puts("[CServerXml] <type> Tag Error");
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  iVar2 = strcmp(__s1,"kor");
  if (iVar2 == 0) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  else {
    iVar2 = strcmp(__s1,"chn");
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x50) = 1;
    }
    else {
      iVar2 = strcmp(__s1,"jpn");
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x50) = 2;
      }
      else {
        iVar2 = strcmp(__s1,"usa");
        if (iVar2 == 0) {
          *(undefined4 *)(this + 0x50) = 3;
        }
        else {
          iVar2 = strcmp(__s1,"twn");
          if (iVar2 != 0) {
            puts("[CServerXml] <type> Tag Error");
                    /* WARNING: Subroutine does not return */
            exit(-1);
          }
          *(undefined4 *)(this + 0x50) = 4;
        }
      }
    }
  }
  strcpy((char *)this,__s1);
  return;
}

```

---

## EventLoad

```asm
// === 080c5fae np_server_xml::CServerXml::EventLoad  [0x080c5fae-0x80c6163] ===
 80c5fae:	55                   	push   %ebp
 80c5faf:	89 e5                	mov    %esp,%ebp
 80c5fb1:	83 ec 38             	sub    $0x38,%esp
 80c5fb4:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80c5fbb:	c7 44 24 04 ec 46 b2 	movl   $0x8b246ec,0x4(%esp)
 80c5fc2:	08 
 80c5fc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c5fc6:	89 04 24             	mov    %eax,(%esp)
 80c5fc9:	e8 0c 0b 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c5fce:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c5fd1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80c5fd5:	75 11                	jne    80c5fe8 <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode+0x3a>
 80c5fd7:	c7 04 24 f8 46 b2 08 	movl   $0x8b246f8,(%esp)
 80c5fde:	e8 8d 85 fb ff       	call   807e570 <puts@plt>
 80c5fe3:	e9 79 01 00 00       	jmp    80c6161 <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode+0x1b3>
 80c5fe8:	c7 44 24 04 1c 47 b2 	movl   $0x8b2471c,0x4(%esp)
 80c5fef:	08 
 80c5ff0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c5ff3:	89 04 24             	mov    %eax,(%esp)
 80c5ff6:	e8 df 0a 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c5ffb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c5ffe:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80c6002:	0f 85 4a 01 00 00    	jne    80c6152 <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode+0x1a4>
 80c6008:	c7 04 24 24 47 b2 08 	movl   $0x8b24724,(%esp)
 80c600f:	e8 5c 85 fb ff       	call   807e570 <puts@plt>
 80c6014:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c601b:	e8 a0 81 fb ff       	call   807e1c0 <exit@plt>
 80c6020:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80c6027:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c602e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80c6035:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80c603c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c603f:	8b 00                	mov    (%eax),%eax
 80c6041:	83 c0 2c             	add    $0x2c,%eax
 80c6044:	8b 10                	mov    (%eax),%edx
 80c6046:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c6049:	89 04 24             	mov    %eax,(%esp)
 80c604c:	ff d2                	call   *%edx
 80c604e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80c6051:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c6055:	c7 44 24 04 43 47 b2 	movl   $0x8b24743,0x4(%esp)
 80c605c:	08 
 80c605d:	89 04 24             	mov    %eax,(%esp)
 80c6060:	e8 6b b3 71 00       	call   87e13d0 <_ZNK12TiXmlElement9AttributeEPKcPi>
 80c6065:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c6068:	8b 55 e8             	mov    -0x18(%ebp),%edx
 80c606b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c606f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6073:	8b 45 08             	mov    0x8(%ebp),%eax
 80c6076:	89 04 24             	mov    %eax,(%esp)
 80c6079:	e8 e6 00 00 00       	call   80c6164 <_ZN13np_server_xml10CServerXml8RGBALoadEiP9TiXmlNode>
 80c607e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c6081:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6085:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c6088:	89 04 24             	mov    %eax,(%esp)
 80c608b:	e8 4a 0a 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c6090:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c6093:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c6097:	75 1f                	jne    80c60b8 <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode+0x10a>
 80c6099:	8b 45 08             	mov    0x8(%ebp),%eax
 80c609c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c60a0:	c7 04 24 46 47 b2 08 	movl   $0x8b24746,(%esp)
 80c60a7:	e8 b4 7a fb ff       	call   807db60 <printf@plt>
 80c60ac:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c60b3:	e8 08 81 fb ff       	call   807e1c0 <exit@plt>
 80c60b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c60bb:	8b 00                	mov    (%eax),%eax
 80c60bd:	83 c0 2c             	add    $0x2c,%eax
 80c60c0:	8b 10                	mov    (%eax),%edx
 80c60c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c60c5:	89 04 24             	mov    %eax,(%esp)
 80c60c8:	ff d2                	call   *%edx
 80c60ca:	c7 44 24 04 54 47 b2 	movl   $0x8b24754,0x4(%esp)
 80c60d1:	08 
 80c60d2:	89 04 24             	mov    %eax,(%esp)
 80c60d5:	e8 06 b1 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c60da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c60dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c60e0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80c60e7:	00 
 80c60e8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c60eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c60ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c60f3:	8b 45 08             	mov    0x8(%ebp),%eax
 80c60f6:	89 04 24             	mov    %eax,(%esp)
 80c60f9:	e8 04 03 00 00       	call   80c6402 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE>
 80c60fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c6101:	8b 00                	mov    (%eax),%eax
 80c6103:	83 c0 2c             	add    $0x2c,%eax
 80c6106:	8b 10                	mov    (%eax),%edx
 80c6108:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c610b:	89 04 24             	mov    %eax,(%esp)
 80c610e:	ff d2                	call   *%edx
 80c6110:	c7 44 24 04 5e 47 b2 	movl   $0x8b2475e,0x4(%esp)
 80c6117:	08 
 80c6118:	89 04 24             	mov    %eax,(%esp)
 80c611b:	e8 c0 b0 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c6120:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c6123:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c6126:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 80c612d:	00 
 80c612e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c6131:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c6135:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6139:	8b 45 08             	mov    0x8(%ebp),%eax
 80c613c:	89 04 24             	mov    %eax,(%esp)
 80c613f:	e8 be 02 00 00       	call   80c6402 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE>
 80c6144:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c6147:	89 04 24             	mov    %eax,(%esp)
 80c614a:	e8 a5 09 00 00       	call   80c6af4 <_ZN9TiXmlNode11NextSiblingEv>
 80c614f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c6152:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80c6156:	0f 95 c0             	setne  %al
 80c6159:	84 c0                	test   %al,%al
 80c615b:	0f 85 bf fe ff ff    	jne    80c6020 <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode+0x72>
 80c6161:	c9                   	leave
 80c6162:	c3                   	ret
 80c6163:	90                   	nop

```

```c
// np_server_xml::CServerXml::EventLoad @ 0x80c5fae

/* np_server_xml::CServerXml::EventLoad(TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::EventLoad(CServerXml *this,TiXmlNode *param_1)

{
  TiXmlElement *pTVar1;
  int local_20;
  TiXmlNode *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  
  local_1c = (TiXmlNode *)0x0;
  local_1c = (TiXmlNode *)TiXmlNode::FirstChild(param_1,"event_str");
  if (local_1c == (TiXmlNode *)0x0) {
    puts("[CServerXml] <event_str> Tag Skip!!");
  }
  else {
    local_1c = (TiXmlNode *)TiXmlNode::FirstChild(local_1c,"event");
    if (local_1c == (TiXmlNode *)0x0) {
      puts("[CServerXml] <event> Tag Error");
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (; local_1c != (TiXmlNode *)0x0; local_1c = (TiXmlNode *)TiXmlNode::NextSibling(local_1c)) {
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = (int *)0x0;
      pTVar1 = (TiXmlElement *)(**(code **)(*(int *)local_1c + 0x2c))(local_1c);
      TiXmlElement::Attribute(pTVar1,"id",&local_20);
      RGBALoad(this,local_20,local_1c);
      local_10 = (int *)TiXmlNode::FirstChild(local_1c,(char *)this);
      if (local_10 == (int *)0x0) {
        printf("%s Tag Error\n",this);
                    /* WARNING: Subroutine does not return */
        exit(-1);
      }
      pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
      local_14 = TiXmlElement::Attribute(pTVar1,"start_msg");
      StrPunish(this,local_20,local_14,1);
      pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
      local_14 = TiXmlElement::Attribute(pTVar1,"end_msg");
      StrPunish(this,local_20,local_14,2);
    }
  }
  return;
}

```

---

## GetEventRGBA

```asm
// === 080c67a0 np_server_xml::CServerXml::GetEventRGBA  [0x080c67a0-0x80c6821] ===
 80c67a0:	55                   	push   %ebp
 80c67a1:	89 e5                	mov    %esp,%ebp
 80c67a3:	83 ec 38             	sub    $0x38,%esp
 80c67a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c67a9:	89 04 24             	mov    %eax,(%esp)
 80c67ac:	e8 eb 06 00 00       	call   80c6e9c <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEC1Ev>
 80c67b1:	8b 45 08             	mov    0x8(%ebp),%eax
 80c67b4:	8d 88 a0 00 00 00    	lea    0xa0(%eax),%ecx
 80c67ba:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c67bd:	8d 55 0c             	lea    0xc(%ebp),%edx
 80c67c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c67c4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c67c8:	89 04 24             	mov    %eax,(%esp)
 80c67cb:	e8 da 06 00 00       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 80c67d0:	83 ec 04             	sub    $0x4,%esp
 80c67d3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c67d6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c67d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c67dc:	8d 90 a0 00 00 00    	lea    0xa0(%eax),%edx
 80c67e2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c67e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c67e9:	89 04 24             	mov    %eax,(%esp)
 80c67ec:	e8 e5 06 00 00       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 80c67f1:	83 ec 04             	sub    $0x4,%esp
 80c67f4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c67f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c67fb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c67fe:	89 04 24             	mov    %eax,(%esp)
 80c6801:	e8 f6 06 00 00       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 80c6806:	84 c0                	test   %al,%al
 80c6808:	74 10                	je     80c681a <_ZNK13np_server_xml10CServerXml12GetEventRGBAEi+0x7a>
 80c680a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c680d:	89 04 24             	mov    %eax,(%esp)
 80c6810:	e8 fb 06 00 00       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 80c6815:	8b 40 04             	mov    0x4(%eax),%eax
 80c6818:	eb 05                	jmp    80c681f <_ZNK13np_server_xml10CServerXml12GetEventRGBAEi+0x7f>
 80c681a:	b8 00 00 00 00       	mov    $0x0,%eax
 80c681f:	c9                   	leave
 80c6820:	c3                   	ret
 80c6821:	90                   	nop

```

```c
// np_server_xml::CServerXml::GetEventRGBA @ 0x80c67a0

/* np_server_xml::CServerXml::GetEventRGBA(int) const */

undefined4 np_server_xml::CServerXml::GetEventRGBA(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::_Rb_tree_const_iterator<std::pair<int_const,int>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(local_20);
  local_14 = local_20[0];
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GetEventString

```asm
// === 080c6822 np_server_xml::CServerXml::GetEventString  [0x080c6822-0x80c6a2b] ===
 80c6822:	55                   	push   %ebp
 80c6823:	89 e5                	mov    %esp,%ebp
 80c6825:	56                   	push   %esi
 80c6826:	53                   	push   %ebx
 80c6827:	83 ec 40             	sub    $0x40,%esp
 80c682a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 80c682d:	8d 45 ef             	lea    -0x11(%ebp),%eax
 80c6830:	89 04 24             	mov    %eax,(%esp)
 80c6833:	e8 98 98 61 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 80c6838:	8d 45 ef             	lea    -0x11(%ebp),%eax
 80c683b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c683f:	c7 44 24 04 d1 47 b2 	movl   $0x8b247d1,0x4(%esp)
 80c6846:	08 
 80c6847:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c684a:	89 04 24             	mov    %eax,(%esp)
 80c684d:	e8 de 0d 64 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 80c6852:	eb 1b                	jmp    80c686f <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x4d>
 80c6854:	89 d3                	mov    %edx,%ebx
 80c6856:	89 c6                	mov    %eax,%esi
 80c6858:	8d 45 ef             	lea    -0x11(%ebp),%eax
 80c685b:	89 04 24             	mov    %eax,(%esp)
 80c685e:	e8 8d 98 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c6863:	89 f0                	mov    %esi,%eax
 80c6865:	89 da                	mov    %ebx,%edx
 80c6867:	89 04 24             	mov    %eax,(%esp)
 80c686a:	e8 e1 ce a1 00       	call   8ae3750 <_Unwind_Resume>
 80c686f:	8d 45 ef             	lea    -0x11(%ebp),%eax
 80c6872:	89 04 24             	mov    %eax,(%esp)
 80c6875:	e8 76 98 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c687a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c687d:	89 04 24             	mov    %eax,(%esp)
 80c6880:	e8 95 05 00 00       	call   80c6e1a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1Ev>
 80c6885:	8b 45 14             	mov    0x14(%ebp),%eax
 80c6888:	83 f8 01             	cmp    $0x1,%eax
 80c688b:	74 0e                	je     80c689b <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x79>
 80c688d:	83 f8 02             	cmp    $0x2,%eax
 80c6890:	0f 84 a9 00 00 00    	je     80c693f <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x11d>
 80c6896:	e9 48 01 00 00       	jmp    80c69e3 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1c1>
 80c689b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c689e:	8d 48 70             	lea    0x70(%eax),%ecx
 80c68a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80c68a4:	8d 55 10             	lea    0x10(%ebp),%edx
 80c68a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c68ab:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c68af:	89 04 24             	mov    %eax,(%esp)
 80c68b2:	e8 71 05 00 00       	call   80c6e28 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 80c68b7:	83 ec 04             	sub    $0x4,%esp
 80c68ba:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80c68bd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c68c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c68c3:	8d 50 70             	lea    0x70(%eax),%edx
 80c68c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c68c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c68cd:	89 04 24             	mov    %eax,(%esp)
 80c68d0:	e8 7f 05 00 00       	call   80c6e54 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 80c68d5:	83 ec 04             	sub    $0x4,%esp
 80c68d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c68db:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c68df:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c68e2:	89 04 24             	mov    %eax,(%esp)
 80c68e5:	e8 90 05 00 00       	call   80c6e7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 80c68ea:	84 c0                	test   %al,%al
 80c68ec:	74 0e                	je     80c68fc <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xda>
 80c68ee:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80c68f2:	74 2a                	je     80c691e <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xfc>
 80c68f4:	8b 45 18             	mov    0x18(%ebp),%eax
 80c68f7:	c6 00 01             	movb   $0x1,(%eax)
 80c68fa:	eb 22                	jmp    80c691e <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xfc>
 80c68fc:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80c6900:	74 06                	je     80c6908 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0xe6>
 80c6902:	8b 45 18             	mov    0x18(%ebp),%eax
 80c6905:	c6 00 00             	movb   $0x0,(%eax)
 80c6908:	89 d8                	mov    %ebx,%eax
 80c690a:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80c690d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c6911:	89 04 24             	mov    %eax,(%esp)
 80c6914:	e8 97 10 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c6919:	e9 f3 00 00 00       	jmp    80c6a11 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 80c691e:	89 de                	mov    %ebx,%esi
 80c6920:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c6923:	89 04 24             	mov    %eax,(%esp)
 80c6926:	e8 63 05 00 00       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 80c692b:	83 c0 04             	add    $0x4,%eax
 80c692e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6932:	89 34 24             	mov    %esi,(%esp)
 80c6935:	e8 76 10 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c693a:	e9 d2 00 00 00       	jmp    80c6a11 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 80c693f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c6942:	8d 88 88 00 00 00    	lea    0x88(%eax),%ecx
 80c6948:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80c694b:	8d 55 10             	lea    0x10(%ebp),%edx
 80c694e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c6952:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c6956:	89 04 24             	mov    %eax,(%esp)
 80c6959:	e8 ca 04 00 00       	call   80c6e28 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 80c695e:	83 ec 04             	sub    $0x4,%esp
 80c6961:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80c6964:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c6967:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c696a:	8d 90 88 00 00 00    	lea    0x88(%eax),%edx
 80c6970:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c6973:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c6977:	89 04 24             	mov    %eax,(%esp)
 80c697a:	e8 d5 04 00 00       	call   80c6e54 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 80c697f:	83 ec 04             	sub    $0x4,%esp
 80c6982:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c6985:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6989:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c698c:	89 04 24             	mov    %eax,(%esp)
 80c698f:	e8 e6 04 00 00       	call   80c6e7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 80c6994:	84 c0                	test   %al,%al
 80c6996:	74 0e                	je     80c69a6 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x184>
 80c6998:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80c699c:	74 27                	je     80c69c5 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1a3>
 80c699e:	8b 45 18             	mov    0x18(%ebp),%eax
 80c69a1:	c6 00 01             	movb   $0x1,(%eax)
 80c69a4:	eb 1f                	jmp    80c69c5 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1a3>
 80c69a6:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80c69aa:	74 06                	je     80c69b2 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x190>
 80c69ac:	8b 45 18             	mov    0x18(%ebp),%eax
 80c69af:	c6 00 00             	movb   $0x0,(%eax)
 80c69b2:	89 d8                	mov    %ebx,%eax
 80c69b4:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80c69b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c69bb:	89 04 24             	mov    %eax,(%esp)
 80c69be:	e8 ed 0f 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c69c3:	eb 4c                	jmp    80c6a11 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 80c69c5:	89 de                	mov    %ebx,%esi
 80c69c7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c69ca:	89 04 24             	mov    %eax,(%esp)
 80c69cd:	e8 bc 04 00 00       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 80c69d2:	83 c0 04             	add    $0x4,%eax
 80c69d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c69d9:	89 34 24             	mov    %esi,(%esp)
 80c69dc:	e8 cf 0f 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c69e1:	eb 2e                	jmp    80c6a11 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 80c69e3:	89 d8                	mov    %ebx,%eax
 80c69e5:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80c69e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c69ec:	89 04 24             	mov    %eax,(%esp)
 80c69ef:	e8 bc 0f 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c69f4:	eb 1b                	jmp    80c6a11 <_ZNK13np_server_xml10CServerXml14GetEventStringEiNS_12_eStringTypeEPb+0x1ef>
 80c69f6:	89 d3                	mov    %edx,%ebx
 80c69f8:	89 c6                	mov    %eax,%esi
 80c69fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c69fd:	89 04 24             	mov    %eax,(%esp)
 80c6a00:	e8 db 11 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c6a05:	89 f0                	mov    %esi,%eax
 80c6a07:	89 da                	mov    %ebx,%edx
 80c6a09:	89 04 24             	mov    %eax,(%esp)
 80c6a0c:	e8 3f cd a1 00       	call   8ae3750 <_Unwind_Resume>
 80c6a11:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c6a14:	89 04 24             	mov    %eax,(%esp)
 80c6a17:	e8 c4 11 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c6a1c:	89 d8                	mov    %ebx,%eax
 80c6a1e:	89 d8                	mov    %ebx,%eax
 80c6a20:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80c6a23:	83 c4 00             	add    $0x0,%esp
 80c6a26:	5b                   	pop    %ebx
 80c6a27:	5e                   	pop    %esi
 80c6a28:	5d                   	pop    %ebp
 80c6a29:	c2 04 00             	ret    $0x4

```

```c
// np_server_xml::CServerXml::GetEventString @ 0x80c6822

/* np_server_xml::CServerXml::GetEventString(int, np_server_xml::_eStringType, bool*) const */

string * np_server_xml::CServerXml::GetEventString
                   (string *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  int local_30 [4];
  int local_20;
  string local_1c [7];
  allocator<char> local_15;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 080c684d to 080c6851 has its CatchHandler @ 080c6854 */
  std::string::string(local_1c,"",(allocator *)&local_15);
  std::allocator<char>::~allocator(&local_15);
  std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
  if (param_4 == 1) {
                    /* try { // try from 080c68b2 to 080c69f3 has its CatchHandler @ 080c69f6 */
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
              (local_30);
    local_20 = local_30[0];
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      std::string::string(param_1,local_1c);
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
      std::string::string(param_1,(string *)(iVar2 + 4));
    }
  }
  else if (param_4 == 2) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
              (local_30);
    local_20 = local_30[0];
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20,
                       (_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      std::string::string(param_1,local_1c);
    }
    else {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 1;
      }
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_20);
      std::string::string(param_1,(string *)(iVar2 + 4));
    }
  }
  else {
    std::string::string(param_1,local_1c);
  }
  std::string::~string(local_1c);
  return param_1;
}

```

---

## GetServerString

```asm
// === 080c6668 np_server_xml::CServerXml::GetServerString  [0x080c6668-0x80c679f] ===
 80c6668:	55                   	push   %ebp
 80c6669:	89 e5                	mov    %esp,%ebp
 80c666b:	56                   	push   %esi
 80c666c:	53                   	push   %ebx
 80c666d:	83 ec 30             	sub    $0x30,%esp
 80c6670:	8b 5d 08             	mov    0x8(%ebp),%ebx
 80c6673:	8d 45 f3             	lea    -0xd(%ebp),%eax
 80c6676:	89 04 24             	mov    %eax,(%esp)
 80c6679:	e8 52 9a 61 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 80c667e:	8d 45 f3             	lea    -0xd(%ebp),%eax
 80c6681:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c6685:	c7 44 24 04 d1 47 b2 	movl   $0x8b247d1,0x4(%esp)
 80c668c:	08 
 80c668d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c6690:	89 04 24             	mov    %eax,(%esp)
 80c6693:	e8 98 0f 64 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 80c6698:	eb 1b                	jmp    80c66b5 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x4d>
 80c669a:	89 d3                	mov    %edx,%ebx
 80c669c:	89 c6                	mov    %eax,%esi
 80c669e:	8d 45 f3             	lea    -0xd(%ebp),%eax
 80c66a1:	89 04 24             	mov    %eax,(%esp)
 80c66a4:	e8 47 9a 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c66a9:	89 f0                	mov    %esi,%eax
 80c66ab:	89 da                	mov    %ebx,%edx
 80c66ad:	89 04 24             	mov    %eax,(%esp)
 80c66b0:	e8 9b d0 a1 00       	call   8ae3750 <_Unwind_Resume>
 80c66b5:	8d 45 f3             	lea    -0xd(%ebp),%eax
 80c66b8:	89 04 24             	mov    %eax,(%esp)
 80c66bb:	e8 30 9a 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c66c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c66c3:	89 04 24             	mov    %eax,(%esp)
 80c66c6:	e8 4f 07 00 00       	call   80c6e1a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1Ev>
 80c66cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c66ce:	8d 48 58             	lea    0x58(%eax),%ecx
 80c66d1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c66d4:	8d 55 10             	lea    0x10(%ebp),%edx
 80c66d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c66db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c66df:	89 04 24             	mov    %eax,(%esp)
 80c66e2:	e8 41 07 00 00       	call   80c6e28 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 80c66e7:	83 ec 04             	sub    $0x4,%esp
 80c66ea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c66ed:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c66f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c66f3:	8d 50 58             	lea    0x58(%eax),%edx
 80c66f6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c66f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c66fd:	89 04 24             	mov    %eax,(%esp)
 80c6700:	e8 4f 07 00 00       	call   80c6e54 <_ZNKSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 80c6705:	83 ec 04             	sub    $0x4,%esp
 80c6708:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c670b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c670f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c6712:	89 04 24             	mov    %eax,(%esp)
 80c6715:	e8 60 07 00 00       	call   80c6e7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 80c671a:	84 c0                	test   %al,%al
 80c671c:	74 0e                	je     80c672c <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xc4>
 80c671e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80c6722:	74 27                	je     80c674b <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xe3>
 80c6724:	8b 45 14             	mov    0x14(%ebp),%eax
 80c6727:	c6 00 01             	movb   $0x1,(%eax)
 80c672a:	eb 1f                	jmp    80c674b <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xe3>
 80c672c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80c6730:	74 06                	je     80c6738 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0xd0>
 80c6732:	8b 45 14             	mov    0x14(%ebp),%eax
 80c6735:	c6 00 00             	movb   $0x0,(%eax)
 80c6738:	89 d8                	mov    %ebx,%eax
 80c673a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80c673d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c6741:	89 04 24             	mov    %eax,(%esp)
 80c6744:	e8 67 12 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c6749:	eb 39                	jmp    80c6784 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x11c>
 80c674b:	89 de                	mov    %ebx,%esi
 80c674d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c6750:	89 04 24             	mov    %eax,(%esp)
 80c6753:	e8 36 07 00 00       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 80c6758:	83 c0 04             	add    $0x4,%eax
 80c675b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c675f:	89 34 24             	mov    %esi,(%esp)
 80c6762:	e8 49 12 64 00       	call   87079b0 <_ZNSsC1ERKSs>
 80c6767:	eb 1b                	jmp    80c6784 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb+0x11c>
 80c6769:	89 d3                	mov    %edx,%ebx
 80c676b:	89 c6                	mov    %eax,%esi
 80c676d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c6770:	89 04 24             	mov    %eax,(%esp)
 80c6773:	e8 68 14 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c6778:	89 f0                	mov    %esi,%eax
 80c677a:	89 da                	mov    %ebx,%edx
 80c677c:	89 04 24             	mov    %eax,(%esp)
 80c677f:	e8 cc cf a1 00       	call   8ae3750 <_Unwind_Resume>
 80c6784:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c6787:	89 04 24             	mov    %eax,(%esp)
 80c678a:	e8 51 14 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c678f:	89 d8                	mov    %ebx,%eax
 80c6791:	89 d8                	mov    %ebx,%eax
 80c6793:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80c6796:	83 c4 00             	add    $0x0,%esp
 80c6799:	5b                   	pop    %ebx
 80c679a:	5e                   	pop    %esi
 80c679b:	5d                   	pop    %ebp
 80c679c:	c2 04 00             	ret    $0x4
 80c679f:	90                   	nop

```

```c
// np_server_xml::CServerXml::GetServerString @ 0x80c6668

/* np_server_xml::CServerXml::GetServerString(int, bool*) const */

int np_server_xml::CServerXml::GetServerString(int param_1,bool *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *in_stack_00000010;
  int local_20;
  int local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 080c6693 to 080c6697 has its CatchHandler @ 080c669a */
  std::string::string(local_18,"",(allocator *)&local_11);
  std::allocator<char>::~allocator(&local_11);
  std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c);
                    /* try { // try from 080c66e2 to 080c6766 has its CatchHandler @ 080c6769 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::find
            (&local_20);
  local_1c = local_20;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c,
                     (_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 0;
    }
    std::string::string((string *)param_1,local_18);
  }
  else {
    if (in_stack_00000010 != (undefined1 *)0x0) {
      *in_stack_00000010 = 1;
    }
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,std::string>> *)&local_1c);
    std::string::string((string *)param_1,(string *)(iVar2 + 4));
  }
  std::string::~string(local_18);
  return param_1;
}

```

---

## InitString

```asm
// === 080c5c3e np_server_xml::CServerXml::InitString  [0x080c5c3e-0x80c5ca7] ===
 80c5c3e:	55                   	push   %ebp
 80c5c3f:	89 e5                	mov    %esp,%ebp
 80c5c41:	83 ec 18             	sub    $0x18,%esp
 80c5c44:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c47:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 80c5c4e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c51:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 80c5c58:	00 
 80c5c59:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c5c60:	00 
 80c5c61:	89 04 24             	mov    %eax,(%esp)
 80c5c64:	e8 57 80 fb ff       	call   807dcc0 <memset@plt>
 80c5c69:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c6c:	83 c0 58             	add    $0x58,%eax
 80c5c6f:	89 04 24             	mov    %eax,(%esp)
 80c5c72:	e8 5f 0f 00 00       	call   80c6bd6 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5clearEv>
 80c5c77:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c7a:	83 c0 70             	add    $0x70,%eax
 80c5c7d:	89 04 24             	mov    %eax,(%esp)
 80c5c80:	e8 51 0f 00 00       	call   80c6bd6 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5clearEv>
 80c5c85:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c88:	05 88 00 00 00       	add    $0x88,%eax
 80c5c8d:	89 04 24             	mov    %eax,(%esp)
 80c5c90:	e8 41 0f 00 00       	call   80c6bd6 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5clearEv>
 80c5c95:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c98:	05 a0 00 00 00       	add    $0xa0,%eax
 80c5c9d:	89 04 24             	mov    %eax,(%esp)
 80c5ca0:	e8 39 10 00 00       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 80c5ca5:	c9                   	leave
 80c5ca6:	c3                   	ret
 80c5ca7:	90                   	nop

```

```c
// np_server_xml::CServerXml::InitString @ 0x80c5c3e

/* np_server_xml::CServerXml::InitString() */

void __thiscall np_server_xml::CServerXml::InitString(CServerXml *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  memset(this,0,5);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
  return;
}

```

---

## ProcessLoad

```asm
// === 080c62b6 np_server_xml::CServerXml::ProcessLoad  [0x080c62b6-0x80c6401] ===
 80c62b6:	55                   	push   %ebp
 80c62b7:	89 e5                	mov    %esp,%ebp
 80c62b9:	83 ec 38             	sub    $0x38,%esp
 80c62bc:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80c62c3:	c7 44 24 04 81 47 b2 	movl   $0x8b24781,0x4(%esp)
 80c62ca:	08 
 80c62cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c62ce:	89 04 24             	mov    %eax,(%esp)
 80c62d1:	e8 04 08 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c62d6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c62d9:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80c62dd:	75 11                	jne    80c62f0 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode+0x3a>
 80c62df:	c7 04 24 85 47 b2 08 	movl   $0x8b24785,(%esp)
 80c62e6:	e8 85 82 fb ff       	call   807e570 <puts@plt>
 80c62eb:	e9 10 01 00 00       	jmp    80c6400 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode+0x14a>
 80c62f0:	c7 44 24 04 a3 47 b2 	movl   $0x8b247a3,0x4(%esp)
 80c62f7:	08 
 80c62f8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c62fb:	89 04 24             	mov    %eax,(%esp)
 80c62fe:	e8 d7 07 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c6303:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c6306:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80c630a:	0f 85 e1 00 00 00    	jne    80c63f1 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode+0x13b>
 80c6310:	c7 04 24 ac 47 b2 08 	movl   $0x8b247ac,(%esp)
 80c6317:	e8 54 82 fb ff       	call   807e570 <puts@plt>
 80c631c:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c6323:	e8 98 7e fb ff       	call   807e1c0 <exit@plt>
 80c6328:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80c632f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c6336:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80c633d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80c6344:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c6347:	8b 00                	mov    (%eax),%eax
 80c6349:	83 c0 2c             	add    $0x2c,%eax
 80c634c:	8b 10                	mov    (%eax),%edx
 80c634e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c6351:	89 04 24             	mov    %eax,(%esp)
 80c6354:	ff d2                	call   *%edx
 80c6356:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80c6359:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c635d:	c7 44 24 04 43 47 b2 	movl   $0x8b24743,0x4(%esp)
 80c6364:	08 
 80c6365:	89 04 24             	mov    %eax,(%esp)
 80c6368:	e8 63 b0 71 00       	call   87e13d0 <_ZNK12TiXmlElement9AttributeEPKcPi>
 80c636d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c6370:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6374:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c6377:	89 04 24             	mov    %eax,(%esp)
 80c637a:	e8 5b 07 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c637f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c6382:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c6386:	75 15                	jne    80c639d <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode+0xe7>
 80c6388:	8b 45 08             	mov    0x8(%ebp),%eax
 80c638b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c638f:	c7 04 24 46 47 b2 08 	movl   $0x8b24746,(%esp)
 80c6396:	e8 c5 77 fb ff       	call   807db60 <printf@plt>
 80c639b:	eb 63                	jmp    80c6400 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode+0x14a>
 80c639d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c63a0:	8b 00                	mov    (%eax),%eax
 80c63a2:	83 c0 2c             	add    $0x2c,%eax
 80c63a5:	8b 10                	mov    (%eax),%edx
 80c63a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c63aa:	89 04 24             	mov    %eax,(%esp)
 80c63ad:	ff d2                	call   *%edx
 80c63af:	c7 44 24 04 cc 47 b2 	movl   $0x8b247cc,0x4(%esp)
 80c63b6:	08 
 80c63b7:	89 04 24             	mov    %eax,(%esp)
 80c63ba:	e8 21 ae 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c63bf:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c63c2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80c63c5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c63cc:	00 
 80c63cd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c63d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c63d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c63d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80c63db:	89 04 24             	mov    %eax,(%esp)
 80c63de:	e8 1f 00 00 00       	call   80c6402 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE>
 80c63e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80c63e6:	89 04 24             	mov    %eax,(%esp)
 80c63e9:	e8 06 07 00 00       	call   80c6af4 <_ZN9TiXmlNode11NextSiblingEv>
 80c63ee:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80c63f1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80c63f5:	0f 95 c0             	setne  %al
 80c63f8:	84 c0                	test   %al,%al
 80c63fa:	0f 85 28 ff ff ff    	jne    80c6328 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode+0x72>
 80c6400:	c9                   	leave
 80c6401:	c3                   	ret

```

```c
// np_server_xml::CServerXml::ProcessLoad @ 0x80c62b6

/* np_server_xml::CServerXml::ProcessLoad(TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::ProcessLoad(CServerXml *this,TiXmlNode *param_1)

{
  TiXmlElement *pTVar1;
  int local_20;
  TiXmlNode *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  
  local_1c = (TiXmlNode *)0x0;
  local_1c = (TiXmlNode *)TiXmlNode::FirstChild(param_1,"str");
  if (local_1c == (TiXmlNode *)0x0) {
    puts("[CServerXml] <str> Tag Skip!!");
  }
  else {
    local_1c = (TiXmlNode *)TiXmlNode::FirstChild(local_1c,"string");
    if (local_1c == (TiXmlNode *)0x0) {
      puts("[CServerXml] <string> Tag Error");
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    for (; local_1c != (TiXmlNode *)0x0; local_1c = (TiXmlNode *)TiXmlNode::NextSibling(local_1c)) {
      local_20 = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = (int *)0x0;
      pTVar1 = (TiXmlElement *)(**(code **)(*(int *)local_1c + 0x2c))(local_1c);
      TiXmlElement::Attribute(pTVar1,"id",&local_20);
      local_10 = (int *)TiXmlNode::FirstChild(local_1c,(char *)this);
      if (local_10 == (int *)0x0) {
        printf("%s Tag Error\n",this);
        return;
      }
      pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
      local_14 = TiXmlElement::Attribute(pTVar1,"text");
      StrPunish(this,local_20,local_14,0);
    }
  }
  return;
}

```

---

## RGBALoad

```asm
// === 080c6164 np_server_xml::CServerXml::RGBALoad  [0x080c6164-0x80c62b5] ===
 80c6164:	55                   	push   %ebp
 80c6165:	89 e5                	mov    %esp,%ebp
 80c6167:	83 ec 38             	sub    $0x38,%esp
 80c616a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80c6171:	c7 44 24 04 66 47 b2 	movl   $0x8b24766,0x4(%esp)
 80c6178:	08 
 80c6179:	8b 45 10             	mov    0x10(%ebp),%eax
 80c617c:	89 04 24             	mov    %eax,(%esp)
 80c617f:	e8 56 09 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c6184:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c6187:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c618b:	75 1f                	jne    80c61ac <_ZN13np_server_xml10CServerXml8RGBALoadEiP9TiXmlNode+0x48>
 80c618d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c6190:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6194:	c7 04 24 46 47 b2 08 	movl   $0x8b24746,(%esp)
 80c619b:	e8 c0 79 fb ff       	call   807db60 <printf@plt>
 80c61a0:	c7 04 24 ff ff ff ff 	movl   $0xffffffff,(%esp)
 80c61a7:	e8 14 80 fb ff       	call   807e1c0 <exit@plt>
 80c61ac:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80c61b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c61b6:	8b 00                	mov    (%eax),%eax
 80c61b8:	83 c0 2c             	add    $0x2c,%eax
 80c61bb:	8b 10                	mov    (%eax),%edx
 80c61bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c61c0:	89 04 24             	mov    %eax,(%esp)
 80c61c3:	ff d2                	call   *%edx
 80c61c5:	c7 44 24 04 6c 47 b2 	movl   $0x8b2476c,0x4(%esp)
 80c61cc:	08 
 80c61cd:	89 04 24             	mov    %eax,(%esp)
 80c61d0:	e8 0b b0 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c61d5:	89 04 24             	mov    %eax,(%esp)
 80c61d8:	e8 13 85 fb ff       	call   807e6f0 <atoi@plt>
 80c61dd:	88 45 d8             	mov    %al,-0x28(%ebp)
 80c61e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c61e3:	8b 00                	mov    (%eax),%eax
 80c61e5:	83 c0 2c             	add    $0x2c,%eax
 80c61e8:	8b 10                	mov    (%eax),%edx
 80c61ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c61ed:	89 04 24             	mov    %eax,(%esp)
 80c61f0:	ff d2                	call   *%edx
 80c61f2:	c7 44 24 04 70 47 b2 	movl   $0x8b24770,0x4(%esp)
 80c61f9:	08 
 80c61fa:	89 04 24             	mov    %eax,(%esp)
 80c61fd:	e8 de af 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c6202:	89 04 24             	mov    %eax,(%esp)
 80c6205:	e8 e6 84 fb ff       	call   807e6f0 <atoi@plt>
 80c620a:	88 45 d9             	mov    %al,-0x27(%ebp)
 80c620d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c6210:	8b 00                	mov    (%eax),%eax
 80c6212:	83 c0 2c             	add    $0x2c,%eax
 80c6215:	8b 10                	mov    (%eax),%edx
 80c6217:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c621a:	89 04 24             	mov    %eax,(%esp)
 80c621d:	ff d2                	call   *%edx
 80c621f:	c7 44 24 04 76 47 b2 	movl   $0x8b24776,0x4(%esp)
 80c6226:	08 
 80c6227:	89 04 24             	mov    %eax,(%esp)
 80c622a:	e8 b1 af 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c622f:	89 04 24             	mov    %eax,(%esp)
 80c6232:	e8 b9 84 fb ff       	call   807e6f0 <atoi@plt>
 80c6237:	88 45 da             	mov    %al,-0x26(%ebp)
 80c623a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c623d:	8b 00                	mov    (%eax),%eax
 80c623f:	83 c0 2c             	add    $0x2c,%eax
 80c6242:	8b 10                	mov    (%eax),%edx
 80c6244:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c6247:	89 04 24             	mov    %eax,(%esp)
 80c624a:	ff d2                	call   *%edx
 80c624c:	c7 44 24 04 7b 47 b2 	movl   $0x8b2477b,0x4(%esp)
 80c6253:	08 
 80c6254:	89 04 24             	mov    %eax,(%esp)
 80c6257:	e8 84 af 71 00       	call   87e11e0 <_ZNK12TiXmlElement9AttributeEPKc>
 80c625c:	89 04 24             	mov    %eax,(%esp)
 80c625f:	e8 8c 84 fb ff       	call   807e6f0 <atoi@plt>
 80c6264:	88 45 db             	mov    %al,-0x25(%ebp)
 80c6267:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c626a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c626e:	8d 45 0c             	lea    0xc(%ebp),%eax
 80c6271:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6275:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c6278:	89 04 24             	mov    %eax,(%esp)
 80c627b:	e8 72 0a 00 00       	call   80c6cf2 <_ZNSt4pairIiiEC1IRiS2_EEOT_OT0_>
 80c6280:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80c6283:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6287:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80c628a:	89 04 24             	mov    %eax,(%esp)
 80c628d:	e8 8e 0a 00 00       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 80c6292:	8b 45 08             	mov    0x8(%ebp),%eax
 80c6295:	8d 88 a0 00 00 00    	lea    0xa0(%eax),%ecx
 80c629b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c629e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80c62a1:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c62a5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c62a9:	89 04 24             	mov    %eax,(%esp)
 80c62ac:	e8 9f 0a 00 00       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 80c62b1:	83 ec 04             	sub    $0x4,%esp
 80c62b4:	c9                   	leave
 80c62b5:	c3                   	ret

```

```c
// np_server_xml::CServerXml::RGBALoad @ 0x80c6164

/* np_server_xml::CServerXml::RGBALoad(int, TiXmlNode*) */

void __thiscall np_server_xml::CServerXml::RGBALoad(CServerXml *this,int param_1,TiXmlNode *param_2)

{
  TiXmlElement *pTVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_2c;
  pair local_28 [8];
  pair<int_const,int> local_20 [8];
  pair<int,int> local_18 [8];
  int *local_10;
  
  local_10 = (int *)0x0;
  local_10 = (int *)TiXmlNode::FirstChild(param_2,"color");
  if (local_10 == (int *)0x0) {
    printf("%s Tag Error\n",this);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_2c = 0;
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"red");
  iVar3 = atoi(pcVar2);
  local_2c = CONCAT31(local_2c._1_3_,(char)iVar3);
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"green");
  iVar3 = atoi(pcVar2);
  local_2c._0_2_ = CONCAT11((char)iVar3,(undefined1)local_2c);
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"blue");
  iVar3 = atoi(pcVar2);
  local_2c._0_3_ = CONCAT12((char)iVar3,(undefined2)local_2c);
  pTVar1 = (TiXmlElement *)(**(code **)(*local_10 + 0x2c))(local_10);
  pcVar2 = (char *)TiXmlElement::Attribute(pTVar1,"alpha");
  iVar3 = atoi(pcVar2);
  local_2c = CONCAT13((char)iVar3,(undefined3)local_2c);
  std::pair<int,int>::pair<int&,int&>(local_18,&param_1,&local_2c);
  std::pair<int_const,int>::pair<int,int>(local_20,local_18);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_28);
  return;
}

```

---

## StrLoading

```asm
// === 080c5ca8 np_server_xml::CServerXml::StrLoading  [0x080c5ca8-0x80c5d37] ===
 80c5ca8:	55                   	push   %ebp
 80c5ca9:	89 e5                	mov    %esp,%ebp
 80c5cab:	56                   	push   %esi
 80c5cac:	53                   	push   %ebx
 80c5cad:	83 ec 20             	sub    $0x20,%esp
 80c5cb0:	8d 45 f7             	lea    -0x9(%ebp),%eax
 80c5cb3:	89 04 24             	mov    %eax,(%esp)
 80c5cb6:	e8 15 a4 61 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 80c5cbb:	8d 45 f7             	lea    -0x9(%ebp),%eax
 80c5cbe:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c5cc2:	c7 44 24 04 c8 4d b2 	movl   $0x8b24dc8,0x4(%esp)
 80c5cc9:	08 
 80c5cca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c5ccd:	89 04 24             	mov    %eax,(%esp)
 80c5cd0:	e8 5b 19 64 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 80c5cd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c5cd8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c5cdc:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5cdf:	89 04 24             	mov    %eax,(%esp)
 80c5ce2:	e8 51 00 00 00       	call   80c5d38 <_ZN13np_server_xml10CServerXml10StrLoadingESs>
 80c5ce7:	eb 15                	jmp    80c5cfe <_ZN13np_server_xml10CServerXml10StrLoadingEv+0x56>
 80c5ce9:	89 d3                	mov    %edx,%ebx
 80c5ceb:	89 c6                	mov    %eax,%esi
 80c5ced:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c5cf0:	89 04 24             	mov    %eax,(%esp)
 80c5cf3:	e8 e8 1e 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c5cf8:	89 f0                	mov    %esi,%eax
 80c5cfa:	89 da                	mov    %ebx,%edx
 80c5cfc:	eb 0d                	jmp    80c5d0b <_ZN13np_server_xml10CServerXml10StrLoadingEv+0x63>
 80c5cfe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c5d01:	89 04 24             	mov    %eax,(%esp)
 80c5d04:	e8 d7 1e 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c5d09:	eb 1b                	jmp    80c5d26 <_ZN13np_server_xml10CServerXml10StrLoadingEv+0x7e>
 80c5d0b:	89 d3                	mov    %edx,%ebx
 80c5d0d:	89 c6                	mov    %eax,%esi
 80c5d0f:	8d 45 f7             	lea    -0x9(%ebp),%eax
 80c5d12:	89 04 24             	mov    %eax,(%esp)
 80c5d15:	e8 d6 a3 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c5d1a:	89 f0                	mov    %esi,%eax
 80c5d1c:	89 da                	mov    %ebx,%edx
 80c5d1e:	89 04 24             	mov    %eax,(%esp)
 80c5d21:	e8 2a da a1 00       	call   8ae3750 <_Unwind_Resume>
 80c5d26:	8d 45 f7             	lea    -0x9(%ebp),%eax
 80c5d29:	89 04 24             	mov    %eax,(%esp)
 80c5d2c:	e8 bf a3 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c5d31:	83 c4 20             	add    $0x20,%esp
 80c5d34:	5b                   	pop    %ebx
 80c5d35:	5e                   	pop    %esi
 80c5d36:	5d                   	pop    %ebp
 80c5d37:	c3                   	ret

```

```c
// np_server_xml::CServerXml::StrLoading @ 0x80c5ca8

/* np_server_xml::CServerXml::StrLoading() */

void __thiscall np_server_xml::CServerXml::StrLoading(CServerXml *this)

{
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 080c5cd0 to 080c5cd4 has its CatchHandler @ 080c5d0b */
  std::string::string(local_14,"server_str.xml",(allocator *)&local_d);
                    /* try { // try from 080c5ce2 to 080c5ce6 has its CatchHandler @ 080c5ce9 */
  StrLoading(this,(string)local_14);
                    /* try { // try from 080c5d04 to 080c5d08 has its CatchHandler @ 080c5d0b */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  return;
}

```

---

## StrLoading_080c5d38

```asm
// === 080c5d38 np_server_xml::CServerXml::StrLoading  [0x080c5d38-0x80c5e0d] ===
 80c5d38:	55                   	push   %ebp
 80c5d39:	89 e5                	mov    %esp,%ebp
 80c5d3b:	83 ec 28             	sub    $0x28,%esp
 80c5d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5d41:	89 04 24             	mov    %eax,(%esp)
 80c5d44:	e8 f5 fe ff ff       	call   80c5c3e <_ZN13np_server_xml10CServerXml10InitStringEv>
 80c5d49:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5d4c:	8d 50 54             	lea    0x54(%eax),%edx
 80c5d4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c5d52:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c5d56:	89 14 24             	mov    %edx,(%esp)
 80c5d59:	e8 a2 1f 64 00       	call   8707d00 <_ZNSsaSERKSs>
 80c5d5e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5d61:	83 c0 08             	add    $0x8,%eax
 80c5d64:	89 04 24             	mov    %eax,(%esp)
 80c5d67:	e8 84 a0 71 00       	call   87dfdf0 <_ZN9TiXmlNode5ClearEv>
 80c5d6c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5d6f:	8d 50 54             	lea    0x54(%eax),%edx
 80c5d72:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5d75:	83 c0 08             	add    $0x8,%eax
 80c5d78:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80c5d7f:	00 
 80c5d80:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c5d84:	89 04 24             	mov    %eax,(%esp)
 80c5d87:	e8 f4 0d 00 00       	call   80c6b80 <_ZN13TiXmlDocument8LoadFileERKSs13TiXmlEncoding>
 80c5d8c:	83 f0 01             	xor    $0x1,%eax
 80c5d8f:	84 c0                	test   %al,%al
 80c5d91:	74 16                	je     80c5da9 <_ZN13np_server_xml10CServerXml10StrLoadingESs+0x71>
 80c5d93:	c7 44 24 04 c8 4d b2 	movl   $0x8b24dc8,0x4(%esp)
 80c5d9a:	08 
 80c5d9b:	c7 04 24 20 46 b2 08 	movl   $0x8b24620,(%esp)
 80c5da2:	e8 b9 7d fb ff       	call   807db60 <printf@plt>
 80c5da7:	eb 63                	jmp    80c5e0c <_ZN13np_server_xml10CServerXml10StrLoadingESs+0xd4>
 80c5da9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5dac:	83 c0 08             	add    $0x8,%eax
 80c5daf:	c7 44 24 04 42 46 b2 	movl   $0x8b24642,0x4(%esp)
 80c5db6:	08 
 80c5db7:	89 04 24             	mov    %eax,(%esp)
 80c5dba:	e8 1b 0d 00 00       	call   80c6ada <_ZN9TiXmlNode10FirstChildEPKc>
 80c5dbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c5dc2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80c5dc6:	75 0e                	jne    80c5dd6 <_ZN13np_server_xml10CServerXml10StrLoadingESs+0x9e>
 80c5dc8:	c7 04 24 46 46 b2 08 	movl   $0x8b24646,(%esp)
 80c5dcf:	e8 9c 87 fb ff       	call   807e570 <puts@plt>
 80c5dd4:	eb 36                	jmp    80c5e0c <_ZN13np_server_xml10CServerXml10StrLoadingESs+0xd4>
 80c5dd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c5dd9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c5ddd:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5de0:	89 04 24             	mov    %eax,(%esp)
 80c5de3:	e8 26 00 00 00       	call   80c5e0e <_ZN13np_server_xml10CServerXml11CharsetInitEP9TiXmlNode>
 80c5de8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c5deb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c5def:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5df2:	89 04 24             	mov    %eax,(%esp)
 80c5df5:	e8 b4 01 00 00       	call   80c5fae <_ZN13np_server_xml10CServerXml9EventLoadEP9TiXmlNode>
 80c5dfa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c5dfd:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c5e01:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5e04:	89 04 24             	mov    %eax,(%esp)
 80c5e07:	e8 aa 04 00 00       	call   80c62b6 <_ZN13np_server_xml10CServerXml11ProcessLoadEP9TiXmlNode>
 80c5e0c:	c9                   	leave
 80c5e0d:	c3                   	ret

```

```c
// np_server_xml::CServerXml::StrLoading @ 0x80c5d38

/* np_server_xml::CServerXml::StrLoading(std::string) */

void __thiscall np_server_xml::CServerXml::StrLoading(CServerXml *this,string param_1)

{
  char cVar1;
  TiXmlNode *pTVar2;
  
  InitString(this);
  std::string::operator=((string *)(this + 0x54),(string *)param_1._M_dataplus._M_p);
  TiXmlNode::Clear((TiXmlNode *)(this + 8));
  cVar1 = TiXmlDocument::LoadFile((TiXmlDocument *)(this + 8),this + 0x54,0);
  if (cVar1 == '\x01') {
    pTVar2 = (TiXmlNode *)TiXmlNode::FirstChild((TiXmlNode *)(this + 8),"xml");
    if (pTVar2 == (TiXmlNode *)0x0) {
      puts("[CServerXml] <xml> Tag Error");
    }
    else {
      CharsetInit(this,pTVar2);
      EventLoad(this,pTVar2);
      ProcessLoad(this,pTVar2);
    }
  }
  else {
    printf("[CServerXml] Load Fail File : %s\n","server_str.xml");
  }
  return;
}

```

---

## StrPunish

```asm
// === 080c6402 np_server_xml::CServerXml::StrPunish  [0x080c6402-0x80c6667] ===
 80c6402:	55                   	push   %ebp
 80c6403:	89 e5                	mov    %esp,%ebp
 80c6405:	56                   	push   %esi
 80c6406:	53                   	push   %ebx
 80c6407:	83 ec 60             	sub    $0x60,%esp
 80c640a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80c640e:	0f 84 48 02 00 00    	je     80c665c <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25a>
 80c6414:	8d 45 af             	lea    -0x51(%ebp),%eax
 80c6417:	89 04 24             	mov    %eax,(%esp)
 80c641a:	e8 b1 9c 61 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 80c641f:	8d 45 af             	lea    -0x51(%ebp),%eax
 80c6422:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c6426:	8b 45 10             	mov    0x10(%ebp),%eax
 80c6429:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c642d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80c6430:	89 04 24             	mov    %eax,(%esp)
 80c6433:	e8 f8 11 64 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 80c6438:	eb 1b                	jmp    80c6455 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x53>
 80c643a:	89 d3                	mov    %edx,%ebx
 80c643c:	89 c6                	mov    %eax,%esi
 80c643e:	8d 45 af             	lea    -0x51(%ebp),%eax
 80c6441:	89 04 24             	mov    %eax,(%esp)
 80c6444:	e8 a7 9c 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c6449:	89 f0                	mov    %esi,%eax
 80c644b:	89 da                	mov    %ebx,%edx
 80c644d:	89 04 24             	mov    %eax,(%esp)
 80c6450:	e8 fb d2 a1 00       	call   8ae3750 <_Unwind_Resume>
 80c6455:	8d 45 af             	lea    -0x51(%ebp),%eax
 80c6458:	89 04 24             	mov    %eax,(%esp)
 80c645b:	e8 90 9c 61 00       	call   86e00f0 <_ZNSaIcED1Ev>
 80c6460:	8b 45 14             	mov    0x14(%ebp),%eax
 80c6463:	83 f8 01             	cmp    $0x1,%eax
 80c6466:	0f 84 a5 00 00 00    	je     80c6511 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x10f>
 80c646c:	83 f8 02             	cmp    $0x2,%eax
 80c646f:	0f 84 30 01 00 00    	je     80c65a5 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x1a3>
 80c6475:	85 c0                	test   %eax,%eax
 80c6477:	0f 85 b7 01 00 00    	jne    80c6634 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x232>
 80c647d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80c6480:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c6484:	8d 45 0c             	lea    0xc(%ebp),%eax
 80c6487:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c648b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80c648e:	89 04 24             	mov    %eax,(%esp)
 80c6491:	e8 e6 08 00 00       	call   80c6d7c <_ZNSt4pairIiSsEC1IRiRSsEEOT_OT0_>
 80c6496:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80c6499:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c649d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c64a0:	89 04 24             	mov    %eax,(%esp)
 80c64a3:	e8 0c 09 00 00       	call   80c6db4 <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 80c64a8:	8b 45 08             	mov    0x8(%ebp),%eax
 80c64ab:	8d 48 58             	lea    0x58(%eax),%ecx
 80c64ae:	8d 45 b0             	lea    -0x50(%ebp),%eax
 80c64b1:	8d 55 b8             	lea    -0x48(%ebp),%edx
 80c64b4:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c64b8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c64bc:	89 04 24             	mov    %eax,(%esp)
 80c64bf:	e8 2a 09 00 00       	call   80c6dee <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 80c64c4:	83 ec 04             	sub    $0x4,%esp
 80c64c7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c64ca:	89 04 24             	mov    %eax,(%esp)
 80c64cd:	e8 ee 06 00 00       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 80c64d2:	eb 2d                	jmp    80c6501 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0xff>
 80c64d4:	89 d3                	mov    %edx,%ebx
 80c64d6:	89 c6                	mov    %eax,%esi
 80c64d8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80c64db:	89 04 24             	mov    %eax,(%esp)
 80c64de:	e8 dd 06 00 00       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 80c64e3:	89 f0                	mov    %esi,%eax
 80c64e5:	89 da                	mov    %ebx,%edx
 80c64e7:	eb 00                	jmp    80c64e9 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0xe7>
 80c64e9:	89 d3                	mov    %edx,%ebx
 80c64eb:	89 c6                	mov    %eax,%esi
 80c64ed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80c64f0:	89 04 24             	mov    %eax,(%esp)
 80c64f3:	e8 b2 06 00 00       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 80c64f8:	89 f0                	mov    %esi,%eax
 80c64fa:	89 da                	mov    %ebx,%edx
 80c64fc:	e9 40 01 00 00       	jmp    80c6641 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x23f>
 80c6501:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80c6504:	89 04 24             	mov    %eax,(%esp)
 80c6507:	e8 9e 06 00 00       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 80c650c:	e9 23 01 00 00       	jmp    80c6634 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x232>
 80c6511:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80c6514:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c6518:	8d 45 0c             	lea    0xc(%ebp),%eax
 80c651b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c651f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c6522:	89 04 24             	mov    %eax,(%esp)
 80c6525:	e8 52 08 00 00       	call   80c6d7c <_ZNSt4pairIiSsEC1IRiRSsEEOT_OT0_>
 80c652a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c652d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c6531:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80c6534:	89 04 24             	mov    %eax,(%esp)
 80c6537:	e8 78 08 00 00       	call   80c6db4 <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 80c653c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c653f:	8d 48 70             	lea    0x70(%eax),%ecx
 80c6542:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80c6545:	8d 55 d0             	lea    -0x30(%ebp),%edx
 80c6548:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c654c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c6550:	89 04 24             	mov    %eax,(%esp)
 80c6553:	e8 96 08 00 00       	call   80c6dee <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 80c6558:	83 ec 04             	sub    $0x4,%esp
 80c655b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80c655e:	89 04 24             	mov    %eax,(%esp)
 80c6561:	e8 5a 06 00 00       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 80c6566:	eb 2d                	jmp    80c6595 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x193>
 80c6568:	89 d3                	mov    %edx,%ebx
 80c656a:	89 c6                	mov    %eax,%esi
 80c656c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80c656f:	89 04 24             	mov    %eax,(%esp)
 80c6572:	e8 49 06 00 00       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 80c6577:	89 f0                	mov    %esi,%eax
 80c6579:	89 da                	mov    %ebx,%edx
 80c657b:	eb 00                	jmp    80c657d <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x17b>
 80c657d:	89 d3                	mov    %edx,%ebx
 80c657f:	89 c6                	mov    %eax,%esi
 80c6581:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c6584:	89 04 24             	mov    %eax,(%esp)
 80c6587:	e8 1e 06 00 00       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 80c658c:	89 f0                	mov    %esi,%eax
 80c658e:	89 da                	mov    %ebx,%edx
 80c6590:	e9 ac 00 00 00       	jmp    80c6641 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x23f>
 80c6595:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80c6598:	89 04 24             	mov    %eax,(%esp)
 80c659b:	e8 0a 06 00 00       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 80c65a0:	e9 8f 00 00 00       	jmp    80c6634 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x232>
 80c65a5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80c65a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c65ac:	8d 45 0c             	lea    0xc(%ebp),%eax
 80c65af:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c65b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c65b6:	89 04 24             	mov    %eax,(%esp)
 80c65b9:	e8 be 07 00 00       	call   80c6d7c <_ZNSt4pairIiSsEC1IRiRSsEEOT_OT0_>
 80c65be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c65c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c65c5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c65c8:	89 04 24             	mov    %eax,(%esp)
 80c65cb:	e8 e4 07 00 00       	call   80c6db4 <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 80c65d0:	8b 45 08             	mov    0x8(%ebp),%eax
 80c65d3:	8d 88 88 00 00 00    	lea    0x88(%eax),%ecx
 80c65d9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c65dc:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80c65df:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c65e3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c65e7:	89 04 24             	mov    %eax,(%esp)
 80c65ea:	e8 ff 07 00 00       	call   80c6dee <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 80c65ef:	83 ec 04             	sub    $0x4,%esp
 80c65f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c65f5:	89 04 24             	mov    %eax,(%esp)
 80c65f8:	e8 c3 05 00 00       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 80c65fd:	eb 2a                	jmp    80c6629 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x227>
 80c65ff:	89 d3                	mov    %edx,%ebx
 80c6601:	89 c6                	mov    %eax,%esi
 80c6603:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c6606:	89 04 24             	mov    %eax,(%esp)
 80c6609:	e8 b2 05 00 00       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 80c660e:	89 f0                	mov    %esi,%eax
 80c6610:	89 da                	mov    %ebx,%edx
 80c6612:	eb 00                	jmp    80c6614 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x212>
 80c6614:	89 d3                	mov    %edx,%ebx
 80c6616:	89 c6                	mov    %eax,%esi
 80c6618:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c661b:	89 04 24             	mov    %eax,(%esp)
 80c661e:	e8 87 05 00 00       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 80c6623:	89 f0                	mov    %esi,%eax
 80c6625:	89 da                	mov    %ebx,%edx
 80c6627:	eb 18                	jmp    80c6641 <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x23f>
 80c6629:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80c662c:	89 04 24             	mov    %eax,(%esp)
 80c662f:	e8 76 05 00 00       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 80c6634:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80c6637:	89 04 24             	mov    %eax,(%esp)
 80c663a:	e8 a1 15 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c663f:	eb 1c                	jmp    80c665d <_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE+0x25b>
 80c6641:	89 d3                	mov    %edx,%ebx
 80c6643:	89 c6                	mov    %eax,%esi
 80c6645:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80c6648:	89 04 24             	mov    %eax,(%esp)
 80c664b:	e8 90 15 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c6650:	89 f0                	mov    %esi,%eax
 80c6652:	89 da                	mov    %ebx,%edx
 80c6654:	89 04 24             	mov    %eax,(%esp)
 80c6657:	e8 f4 d0 a1 00       	call   8ae3750 <_Unwind_Resume>
 80c665c:	90                   	nop
 80c665d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80c6660:	83 c4 00             	add    $0x0,%esp
 80c6663:	5b                   	pop    %ebx
 80c6664:	5e                   	pop    %esi
 80c6665:	5d                   	pop    %ebp
 80c6666:	c3                   	ret
 80c6667:	90                   	nop

```

```c
// np_server_xml::CServerXml::StrPunish @ 0x80c6402

/* np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType) */

void __thiscall
np_server_xml::CServerXml::StrPunish(undefined4 this,undefined4 param_1,char *param_2,int param_4)

{
  string local_5c;
  allocator<char> local_55;
  pair local_54 [8];
  pair<int_const,std::string> local_4c [8];
  pair<int,std::string> local_44 [8];
  pair local_3c [8];
  pair<int_const,std::string> local_34 [8];
  pair<int,std::string> local_2c [8];
  pair local_24 [8];
  pair<int_const,std::string> local_1c [8];
  pair<int,std::string> local_14 [8];
  
  if (param_2 != (char *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080c6433 to 080c6437 has its CatchHandler @ 080c643a */
    std::string::string((string *)&local_5c,param_2,(allocator *)&local_55);
    std::allocator<char>::~allocator(&local_55);
    if (param_4 == 1) {
      std::pair<int,std::string>::pair<int&,std::string&>(local_2c,&param_1,&local_5c);
                    /* try { // try from 080c6537 to 080c653b has its CatchHandler @ 080c657d */
      std::pair<int_const,std::string>::pair<int,std::string>(local_34,local_2c);
                    /* try { // try from 080c6553 to 080c6557 has its CatchHandler @ 080c6568 */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_3c);
                    /* try { // try from 080c6561 to 080c6565 has its CatchHandler @ 080c657d */
      std::pair<int_const,std::string>::~pair(local_34);
                    /* try { // try from 080c659b to 080c65bd has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::~pair(local_2c);
    }
    else if (param_4 == 2) {
      std::pair<int,std::string>::pair<int&,std::string&>(local_14,&param_1,&local_5c);
                    /* try { // try from 080c65cb to 080c65cf has its CatchHandler @ 080c6614 */
      std::pair<int_const,std::string>::pair<int,std::string>(local_1c,local_14);
                    /* try { // try from 080c65ea to 080c65ee has its CatchHandler @ 080c65ff */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_24);
                    /* try { // try from 080c65f8 to 080c65fc has its CatchHandler @ 080c6614 */
      std::pair<int_const,std::string>::~pair(local_1c);
                    /* try { // try from 080c662f to 080c6633 has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::~pair(local_14);
    }
    else if (param_4 == 0) {
                    /* try { // try from 080c6491 to 080c6495 has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::pair<int&,std::string&>(local_44,&param_1,&local_5c);
                    /* try { // try from 080c64a3 to 080c64a7 has its CatchHandler @ 080c64e9 */
      std::pair<int_const,std::string>::pair<int,std::string>(local_4c,local_44);
                    /* try { // try from 080c64bf to 080c64c3 has its CatchHandler @ 080c64d4 */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_54);
                    /* try { // try from 080c64cd to 080c64d1 has its CatchHandler @ 080c64e9 */
      std::pair<int_const,std::string>::~pair(local_4c);
                    /* try { // try from 080c6507 to 080c6529 has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::~pair(local_44);
    }
    std::string::~string((string *)&local_5c);
  }
  return;
}

```

---

## ~CServerXml

```asm
// === 080c5b26 np_server_xml::CServerXml::~CServerXml  [0x080c5b26-0x80c5c3d] ===
 80c5b26:	55                   	push   %ebp
 80c5b27:	89 e5                	mov    %esp,%ebp
 80c5b29:	56                   	push   %esi
 80c5b2a:	53                   	push   %ebx
 80c5b2b:	83 ec 10             	sub    $0x10,%esp
 80c5b2e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b31:	89 04 24             	mov    %eax,(%esp)
 80c5b34:	e8 05 01 00 00       	call   80c5c3e <_ZN13np_server_xml10CServerXml10InitStringEv>
 80c5b39:	eb 1a                	jmp    80c5b55 <_ZN13np_server_xml10CServerXmlD1Ev+0x2f>
 80c5b3b:	89 d3                	mov    %edx,%ebx
 80c5b3d:	89 c6                	mov    %eax,%esi
 80c5b3f:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b42:	05 a0 00 00 00       	add    $0xa0,%eax
 80c5b47:	89 04 24             	mov    %eax,(%esp)
 80c5b4a:	e8 77 0f 00 00       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 80c5b4f:	89 f0                	mov    %esi,%eax
 80c5b51:	89 da                	mov    %ebx,%edx
 80c5b53:	eb 12                	jmp    80c5b67 <_ZN13np_server_xml10CServerXmlD1Ev+0x41>
 80c5b55:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b58:	05 a0 00 00 00       	add    $0xa0,%eax
 80c5b5d:	89 04 24             	mov    %eax,(%esp)
 80c5b60:	e8 61 0f 00 00       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 80c5b65:	eb 1a                	jmp    80c5b81 <_ZN13np_server_xml10CServerXmlD1Ev+0x5b>
 80c5b67:	89 d3                	mov    %edx,%ebx
 80c5b69:	89 c6                	mov    %eax,%esi
 80c5b6b:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b6e:	05 88 00 00 00       	add    $0x88,%eax
 80c5b73:	89 04 24             	mov    %eax,(%esp)
 80c5b76:	e8 37 0f 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5b7b:	89 f0                	mov    %esi,%eax
 80c5b7d:	89 da                	mov    %ebx,%edx
 80c5b7f:	eb 12                	jmp    80c5b93 <_ZN13np_server_xml10CServerXmlD1Ev+0x6d>
 80c5b81:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b84:	05 88 00 00 00       	add    $0x88,%eax
 80c5b89:	89 04 24             	mov    %eax,(%esp)
 80c5b8c:	e8 21 0f 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5b91:	eb 18                	jmp    80c5bab <_ZN13np_server_xml10CServerXmlD1Ev+0x85>
 80c5b93:	89 d3                	mov    %edx,%ebx
 80c5b95:	89 c6                	mov    %eax,%esi
 80c5b97:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5b9a:	83 c0 70             	add    $0x70,%eax
 80c5b9d:	89 04 24             	mov    %eax,(%esp)
 80c5ba0:	e8 0d 0f 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5ba5:	89 f0                	mov    %esi,%eax
 80c5ba7:	89 da                	mov    %ebx,%edx
 80c5ba9:	eb 10                	jmp    80c5bbb <_ZN13np_server_xml10CServerXmlD1Ev+0x95>
 80c5bab:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5bae:	83 c0 70             	add    $0x70,%eax
 80c5bb1:	89 04 24             	mov    %eax,(%esp)
 80c5bb4:	e8 f9 0e 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5bb9:	eb 18                	jmp    80c5bd3 <_ZN13np_server_xml10CServerXmlD1Ev+0xad>
 80c5bbb:	89 d3                	mov    %edx,%ebx
 80c5bbd:	89 c6                	mov    %eax,%esi
 80c5bbf:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5bc2:	83 c0 58             	add    $0x58,%eax
 80c5bc5:	89 04 24             	mov    %eax,(%esp)
 80c5bc8:	e8 e5 0e 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5bcd:	89 f0                	mov    %esi,%eax
 80c5bcf:	89 da                	mov    %ebx,%edx
 80c5bd1:	eb 10                	jmp    80c5be3 <_ZN13np_server_xml10CServerXmlD1Ev+0xbd>
 80c5bd3:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5bd6:	83 c0 58             	add    $0x58,%eax
 80c5bd9:	89 04 24             	mov    %eax,(%esp)
 80c5bdc:	e8 d1 0e 00 00       	call   80c6ab2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEED1Ev>
 80c5be1:	eb 18                	jmp    80c5bfb <_ZN13np_server_xml10CServerXmlD1Ev+0xd5>
 80c5be3:	89 d3                	mov    %edx,%ebx
 80c5be5:	89 c6                	mov    %eax,%esi
 80c5be7:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5bea:	83 c0 54             	add    $0x54,%eax
 80c5bed:	89 04 24             	mov    %eax,(%esp)
 80c5bf0:	e8 eb 1f 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c5bf5:	89 f0                	mov    %esi,%eax
 80c5bf7:	89 da                	mov    %ebx,%edx
 80c5bf9:	eb 10                	jmp    80c5c0b <_ZN13np_server_xml10CServerXmlD1Ev+0xe5>
 80c5bfb:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5bfe:	83 c0 54             	add    $0x54,%eax
 80c5c01:	89 04 24             	mov    %eax,(%esp)
 80c5c04:	e8 d7 1f 64 00       	call   8707be0 <_ZNSsD1Ev>
 80c5c09:	eb 1e                	jmp    80c5c29 <_ZN13np_server_xml10CServerXmlD1Ev+0x103>
 80c5c0b:	89 d3                	mov    %edx,%ebx
 80c5c0d:	89 c6                	mov    %eax,%esi
 80c5c0f:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c12:	83 c0 08             	add    $0x8,%eax
 80c5c15:	89 04 24             	mov    %eax,(%esp)
 80c5c18:	e8 e3 0e 00 00       	call   80c6b00 <_ZN13TiXmlDocumentD1Ev>
 80c5c1d:	89 f0                	mov    %esi,%eax
 80c5c1f:	89 da                	mov    %ebx,%edx
 80c5c21:	89 04 24             	mov    %eax,(%esp)
 80c5c24:	e8 27 db a1 00       	call   8ae3750 <_Unwind_Resume>
 80c5c29:	8b 45 08             	mov    0x8(%ebp),%eax
 80c5c2c:	83 c0 08             	add    $0x8,%eax
 80c5c2f:	89 04 24             	mov    %eax,(%esp)
 80c5c32:	e8 c9 0e 00 00       	call   80c6b00 <_ZN13TiXmlDocumentD1Ev>
 80c5c37:	83 c4 10             	add    $0x10,%esp
 80c5c3a:	5b                   	pop    %ebx
 80c5c3b:	5e                   	pop    %esi
 80c5c3c:	5d                   	pop    %ebp
 80c5c3d:	c3                   	ret

```

```c
// np_server_xml::CServerXml::~CServerXml @ 0x80c5b26

/* np_server_xml::CServerXml::~CServerXml() */

void __thiscall np_server_xml::CServerXml::~CServerXml(CServerXml *this)

{
                    /* try { // try from 080c5b34 to 080c5b38 has its CatchHandler @ 080c5b3b */
  InitString(this);
                    /* try { // try from 080c5b60 to 080c5b64 has its CatchHandler @ 080c5b67 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa0));
                    /* try { // try from 080c5b8c to 080c5b90 has its CatchHandler @ 080c5b93 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x88));
                    /* try { // try from 080c5bb4 to 080c5bb8 has its CatchHandler @ 080c5bbb */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x70));
                    /* try { // try from 080c5bdc to 080c5be0 has its CatchHandler @ 080c5be3 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x58));
                    /* try { // try from 080c5c04 to 080c5c08 has its CatchHandler @ 080c5c0b */
  std::string::~string((string *)(this + 0x54));
  TiXmlDocument::~TiXmlDocument((TiXmlDocument *)(this + 8));
  return;
}

```

