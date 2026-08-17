# WongWork

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## arad_parsing

```asm
// === 08483e98 WongWork::arad_parsing  [0x08483e98-0x8483fad] ===
 8483e98:	55                   	push   %ebp
 8483e99:	89 e5                	mov    %esp,%ebp
 8483e9b:	56                   	push   %esi
 8483e9c:	53                   	push   %ebx
 8483e9d:	83 ec 20             	sub    $0x20,%esp
 8483ea0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8483ea7:	00 
 8483ea8:	8b 45 10             	mov    0x10(%ebp),%eax
 8483eab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483eaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8483eb2:	89 04 24             	mov    %eax,(%esp)
 8483eb5:	e8 66 2f 28 00       	call   8706e20 <_ZNKSs17find_first_not_ofERKSsj>
 8483eba:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8483ebd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8483ec0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8483ec4:	8b 45 10             	mov    0x10(%ebp),%eax
 8483ec7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483ecb:	8b 45 08             	mov    0x8(%ebp),%eax
 8483ece:	89 04 24             	mov    %eax,(%esp)
 8483ed1:	e8 fa 30 28 00       	call   8706fd0 <_ZNKSs13find_first_ofERKSsj>
 8483ed6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8483ed9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8483edc:	89 04 24             	mov    %eax,(%esp)
 8483edf:	e8 e4 d7 eb ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8483ee4:	e9 9a 00 00 00       	jmp    8483f83 <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xeb>
 8483ee9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8483eec:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8483eef:	29 c2                	sub    %eax,%edx
 8483ef1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8483ef4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8483ef8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8483efb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8483eff:	8b 55 08             	mov    0x8(%ebp),%edx
 8483f02:	89 54 24 04          	mov    %edx,0x4(%esp)
 8483f06:	89 04 24             	mov    %eax,(%esp)
 8483f09:	e8 72 39 28 00       	call   8707880 <_ZNKSs6substrEjj>
 8483f0e:	83 ec 04             	sub    $0x4,%esp
 8483f11:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8483f14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483f18:	8b 45 0c             	mov    0xc(%ebp),%eax
 8483f1b:	89 04 24             	mov    %eax,(%esp)
 8483f1e:	e8 89 3b db ff       	call   8237aac <_ZNSt6vectorISsSaISsEE9push_backEOSs>
 8483f23:	eb 1b                	jmp    8483f40 <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xa8>
 8483f25:	89 d3                	mov    %edx,%ebx
 8483f27:	89 c6                	mov    %eax,%esi
 8483f29:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8483f2c:	89 04 24             	mov    %eax,(%esp)
 8483f2f:	e8 ac 3c 28 00       	call   8707be0 <_ZNSsD1Ev>
 8483f34:	89 f0                	mov    %esi,%eax
 8483f36:	89 da                	mov    %ebx,%edx
 8483f38:	89 04 24             	mov    %eax,(%esp)
 8483f3b:	e8 10 f8 65 00       	call   8ae3750 <_Unwind_Resume>
 8483f40:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8483f43:	89 04 24             	mov    %eax,(%esp)
 8483f46:	e8 95 3c 28 00       	call   8707be0 <_ZNSsD1Ev>
 8483f4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8483f4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8483f52:	8b 45 10             	mov    0x10(%ebp),%eax
 8483f55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483f59:	8b 45 08             	mov    0x8(%ebp),%eax
 8483f5c:	89 04 24             	mov    %eax,(%esp)
 8483f5f:	e8 bc 2e 28 00       	call   8706e20 <_ZNKSs17find_first_not_ofERKSsj>
 8483f64:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8483f67:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8483f6a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8483f6e:	8b 45 10             	mov    0x10(%ebp),%eax
 8483f71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8483f75:	8b 45 08             	mov    0x8(%ebp),%eax
 8483f78:	89 04 24             	mov    %eax,(%esp)
 8483f7b:	e8 50 30 28 00       	call   8706fd0 <_ZNKSs13find_first_ofERKSsj>
 8483f80:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8483f83:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 8483f87:	75 06                	jne    8483f8f <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xf7>
 8483f89:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8483f8d:	74 07                	je     8483f96 <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0xfe>
 8483f8f:	b8 01 00 00 00       	mov    $0x1,%eax
 8483f94:	eb 05                	jmp    8483f9b <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x103>
 8483f96:	b8 00 00 00 00       	mov    $0x0,%eax
 8483f9b:	84 c0                	test   %al,%al
 8483f9d:	0f 85 46 ff ff ff    	jne    8483ee9 <_ZN8WongWork12arad_parsingERKSsRSt6vectorISsSaISsEES1_+0x51>
 8483fa3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8483fa6:	83 c4 00             	add    $0x0,%esp
 8483fa9:	5b                   	pop    %ebx
 8483faa:	5e                   	pop    %esi
 8483fab:	5d                   	pop    %ebp
 8483fac:	c3                   	ret
 8483fad:	90                   	nop

```

```c
// WongWork::arad_parsing @ 0x8483e98

/* WongWork::arad_parsing(std::string const&, std::vector<std::string, std::allocator<std::string >
   >&, std::string const&) */

void WongWork::arad_parsing(string *param_1,vector *param_2,string *param_3)

{
  bool bVar1;
  string local_18;
  uint local_14;
  uint local_10;
  
  local_14 = std::string::find_first_not_of((string *)param_1,param_3,0);
  local_10 = std::string::find_first_of((string *)param_1,param_3,local_14);
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_2);
  while( true ) {
    if ((local_10 == 0xffffffff) && (local_14 == 0xffffffff)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    std::string::substr((uint)&local_18,(uint)param_1);
                    /* try { // try from 08483f1e to 08483f22 has its CatchHandler @ 08483f25 */
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_2,&local_18);
    std::string::~string((string *)&local_18);
    local_14 = std::string::find_first_not_of((string *)param_1,param_3,local_10);
    local_10 = std::string::find_first_of((string *)param_1,param_3,local_14);
  }
  return;
}

```

