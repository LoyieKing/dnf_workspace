# DeleteInvalidItemScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DeleteInvalidItemScript

```asm
// === 08ac1d40 DeleteInvalidItemScript::DeleteInvalidItemScript  [0x08ac1d40-0x8ac1dcd] ===
 8ac1d40:	55                   	push   %ebp
 8ac1d41:	89 e5                	mov    %esp,%ebp
 8ac1d43:	56                   	push   %esi
 8ac1d44:	53                   	push   %ebx
 8ac1d45:	83 ec 10             	sub    $0x10,%esp
 8ac1d48:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1d4b:	89 04 24             	mov    %eax,(%esp)
 8ac1d4e:	e8 7d 48 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ac1d53:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1d56:	83 c0 04             	add    $0x4,%eax
 8ac1d59:	89 04 24             	mov    %eax,(%esp)
 8ac1d5c:	e8 6f 48 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ac1d61:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1d64:	83 c0 08             	add    $0x8,%eax
 8ac1d67:	89 04 24             	mov    %eax,(%esp)
 8ac1d6a:	e8 e7 04 00 00       	call   8ac2256 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 8ac1d6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1d72:	89 04 24             	mov    %eax,(%esp)
 8ac1d75:	e8 ec 02 00 00       	call   8ac2066 <_ZN23DeleteInvalidItemScript11clearScriptEv>
 8ac1d7a:	eb 4b                	jmp    8ac1dc7 <_ZN23DeleteInvalidItemScriptC1Ev+0x87>
 8ac1d7c:	89 d3                	mov    %edx,%ebx
 8ac1d7e:	89 c6                	mov    %eax,%esi
 8ac1d80:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1d83:	83 c0 08             	add    $0x8,%eax
 8ac1d86:	89 04 24             	mov    %eax,(%esp)
 8ac1d89:	e8 b4 04 00 00       	call   8ac2242 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8ac1d8e:	89 f0                	mov    %esi,%eax
 8ac1d90:	89 da                	mov    %ebx,%edx
 8ac1d92:	eb 00                	jmp    8ac1d94 <_ZN23DeleteInvalidItemScriptC1Ev+0x54>
 8ac1d94:	89 d3                	mov    %edx,%ebx
 8ac1d96:	89 c6                	mov    %eax,%esi
 8ac1d98:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1d9b:	83 c0 04             	add    $0x4,%eax
 8ac1d9e:	89 04 24             	mov    %eax,(%esp)
 8ac1da1:	e8 3a 5e c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac1da6:	89 f0                	mov    %esi,%eax
 8ac1da8:	89 da                	mov    %ebx,%edx
 8ac1daa:	eb 00                	jmp    8ac1dac <_ZN23DeleteInvalidItemScriptC1Ev+0x6c>
 8ac1dac:	89 d3                	mov    %edx,%ebx
 8ac1dae:	89 c6                	mov    %eax,%esi
 8ac1db0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1db3:	89 04 24             	mov    %eax,(%esp)
 8ac1db6:	e8 25 5e c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac1dbb:	89 f0                	mov    %esi,%eax
 8ac1dbd:	89 da                	mov    %ebx,%edx
 8ac1dbf:	89 04 24             	mov    %eax,(%esp)
 8ac1dc2:	e8 89 19 02 00       	call   8ae3750 <_Unwind_Resume>
 8ac1dc7:	83 c4 10             	add    $0x10,%esp
 8ac1dca:	5b                   	pop    %ebx
 8ac1dcb:	5e                   	pop    %esi
 8ac1dcc:	5d                   	pop    %ebp
 8ac1dcd:	c3                   	ret

```

```c
// DeleteInvalidItemScript::DeleteInvalidItemScript @ 0x8ac1d40

/* DeleteInvalidItemScript::DeleteInvalidItemScript() */

void __thiscall DeleteInvalidItemScript::DeleteInvalidItemScript(DeleteInvalidItemScript *this)

{
  std::string::string((string *)this);
                    /* try { // try from 08ac1d5c to 08ac1d60 has its CatchHandler @ 08ac1dac */
  std::string::string((string *)(this + 4));
                    /* try { // try from 08ac1d6a to 08ac1d6e has its CatchHandler @ 08ac1d94 */
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::map((map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
         *)(this + 8));
                    /* try { // try from 08ac1d75 to 08ac1d79 has its CatchHandler @ 08ac1d7c */
  clearScript(this);
  return;
}

```

---

## GetMailInfo

```asm
// === 08ac2180 DeleteInvalidItemScript::GetMailInfo  [0x08ac2180-0x8ac21ae] ===
 8ac2180:	55                   	push   %ebp
 8ac2181:	89 e5                	mov    %esp,%ebp
 8ac2183:	83 ec 18             	sub    $0x18,%esp
 8ac2186:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2189:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac218d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac2190:	89 04 24             	mov    %eax,(%esp)
 8ac2193:	e8 68 5b c4 ff       	call   8707d00 <_ZNSsaSERKSs>
 8ac2198:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac219b:	83 c0 04             	add    $0x4,%eax
 8ac219e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac21a2:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac21a5:	89 04 24             	mov    %eax,(%esp)
 8ac21a8:	e8 53 5b c4 ff       	call   8707d00 <_ZNSsaSERKSs>
 8ac21ad:	c9                   	leave
 8ac21ae:	c3                   	ret

```

```c
// DeleteInvalidItemScript::GetMailInfo @ 0x8ac2180

/* DeleteInvalidItemScript::GetMailInfo(std::string&, std::string&) const */

void __thiscall
DeleteInvalidItemScript::GetMailInfo(DeleteInvalidItemScript *this,string *param_1,string *param_2)

{
  std::string::operator=(param_1,(string *)this);
  std::string::operator=(param_2,(string *)(this + 4));
  return;
}

```

---

## GetRewardItemInfo

```asm
// === 08ac20f8 DeleteInvalidItemScript::GetRewardItemInfo  [0x08ac20f8-0x8ac217f] ===
 8ac20f8:	55                   	push   %ebp
 8ac20f9:	89 e5                	mov    %esp,%ebp
 8ac20fb:	83 ec 28             	sub    $0x28,%esp
 8ac20fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2101:	8d 48 08             	lea    0x8(%eax),%ecx
 8ac2104:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac2107:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ac210a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac210e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ac2112:	89 04 24             	mov    %eax,(%esp)
 8ac2115:	e8 70 02 00 00       	call   8ac238a <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8ac211a:	83 ec 04             	sub    $0x4,%esp
 8ac211d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2120:	8d 50 08             	lea    0x8(%eax),%edx
 8ac2123:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac2126:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac212a:	89 04 24             	mov    %eax,(%esp)
 8ac212d:	e8 84 02 00 00       	call   8ac23b6 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8ac2132:	83 ec 04             	sub    $0x4,%esp
 8ac2135:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac2138:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac213c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac213f:	89 04 24             	mov    %eax,(%esp)
 8ac2142:	e8 95 02 00 00       	call   8ac23dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN23DeleteInvalidItemScript21DeleteInvalidItemDataEEEeqERKS5_>
 8ac2147:	84 c0                	test   %al,%al
 8ac2149:	74 07                	je     8ac2152 <_ZN23DeleteInvalidItemScript17GetRewardItemInfoEiRiS0_+0x5a>
 8ac214b:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac2150:	eb 2b                	jmp    8ac217d <_ZN23DeleteInvalidItemScript17GetRewardItemInfoEiRiS0_+0x85>
 8ac2152:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac2155:	89 04 24             	mov    %eax,(%esp)
 8ac2158:	e8 93 02 00 00       	call   8ac23f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN23DeleteInvalidItemScript21DeleteInvalidItemDataEEEptEv>
 8ac215d:	8b 50 08             	mov    0x8(%eax),%edx
 8ac2160:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac2163:	89 10                	mov    %edx,(%eax)
 8ac2165:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac2168:	89 04 24             	mov    %eax,(%esp)
 8ac216b:	e8 80 02 00 00       	call   8ac23f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN23DeleteInvalidItemScript21DeleteInvalidItemDataEEEptEv>
 8ac2170:	8b 50 0c             	mov    0xc(%eax),%edx
 8ac2173:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac2176:	89 10                	mov    %edx,(%eax)
 8ac2178:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac217d:	c9                   	leave
 8ac217e:	c3                   	ret
 8ac217f:	90                   	nop

```

```c
// DeleteInvalidItemScript::GetRewardItemInfo @ 0x8ac20f8

/* DeleteInvalidItemScript::GetRewardItemInfo(int, int&, int&) */

bool __thiscall
DeleteInvalidItemScript::GetRewardItemInfo
          (DeleteInvalidItemScript *this,int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>
  local_14 [4];
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  local_10 [12];
  
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::find((int *)local_14);
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
          operator==(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
            operator->(local_14);
    *param_2 = *(int *)(iVar2 + 8);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
            operator->(local_14);
    *param_3 = *(int *)(iVar2 + 0xc);
  }
  return cVar1 == '\0';
}

```

---

## IsInvalidItem2Delete

```asm
// === 08ac2096 DeleteInvalidItemScript::IsInvalidItem2Delete  [0x08ac2096-0x8ac20f7] ===
 8ac2096:	55                   	push   %ebp
 8ac2097:	89 e5                	mov    %esp,%ebp
 8ac2099:	83 ec 28             	sub    $0x28,%esp
 8ac209c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac209f:	8d 48 08             	lea    0x8(%eax),%ecx
 8ac20a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac20a5:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ac20a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac20ac:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ac20b0:	89 04 24             	mov    %eax,(%esp)
 8ac20b3:	e8 d2 02 00 00       	call   8ac238a <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 8ac20b8:	83 ec 04             	sub    $0x4,%esp
 8ac20bb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac20be:	8d 50 08             	lea    0x8(%eax),%edx
 8ac20c1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac20c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac20c8:	89 04 24             	mov    %eax,(%esp)
 8ac20cb:	e8 e6 02 00 00       	call   8ac23b6 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 8ac20d0:	83 ec 04             	sub    $0x4,%esp
 8ac20d3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac20d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac20da:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac20dd:	89 04 24             	mov    %eax,(%esp)
 8ac20e0:	e8 f7 02 00 00       	call   8ac23dc <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN23DeleteInvalidItemScript21DeleteInvalidItemDataEEEeqERKS5_>
 8ac20e5:	84 c0                	test   %al,%al
 8ac20e7:	74 07                	je     8ac20f0 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi+0x5a>
 8ac20e9:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac20ee:	eb 05                	jmp    8ac20f5 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi+0x5f>
 8ac20f0:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac20f5:	c9                   	leave
 8ac20f6:	c3                   	ret
 8ac20f7:	90                   	nop

```

```c
// DeleteInvalidItemScript::IsInvalidItem2Delete @ 0x8ac2096

/* DeleteInvalidItemScript::IsInvalidItem2Delete(int) */

bool DeleteInvalidItemScript::IsInvalidItem2Delete(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>
  local_14 [4];
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  local_10 [12];
  
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::find((int *)local_14);
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
          operator==(local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 == '\0';
}

```

---

## clearScript

```asm
// === 08ac2066 DeleteInvalidItemScript::clearScript  [0x08ac2066-0x8ac2095] ===
 8ac2066:	55                   	push   %ebp
 8ac2067:	89 e5                	mov    %esp,%ebp
 8ac2069:	83 ec 18             	sub    $0x18,%esp
 8ac206c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac206f:	89 04 24             	mov    %eax,(%esp)
 8ac2072:	e8 59 6d c4 ff       	call   8708dd0 <_ZNSs5clearEv>
 8ac2077:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac207a:	83 c0 04             	add    $0x4,%eax
 8ac207d:	89 04 24             	mov    %eax,(%esp)
 8ac2080:	e8 4b 6d c4 ff       	call   8708dd0 <_ZNSs5clearEv>
 8ac2085:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2088:	83 c0 08             	add    $0x8,%eax
 8ac208b:	89 04 24             	mov    %eax,(%esp)
 8ac208e:	e8 e3 02 00 00       	call   8ac2376 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 8ac2093:	c9                   	leave
 8ac2094:	c3                   	ret
 8ac2095:	90                   	nop

```

```c
// DeleteInvalidItemScript::clearScript @ 0x8ac2066

/* DeleteInvalidItemScript::clearScript() */

void __thiscall DeleteInvalidItemScript::clearScript(DeleteInvalidItemScript *this)

{
  std::string::clear((string *)this);
  std::string::clear((string *)(this + 4));
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::clear((map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
           *)(this + 8));
  return;
}

```

---

## loadScript

```asm
// === 08ac1e60 DeleteInvalidItemScript::loadScript  [0x08ac1e60-0x8ac2065] ===
 8ac1e60:	55                   	push   %ebp
 8ac1e61:	89 e5                	mov    %esp,%ebp
 8ac1e63:	56                   	push   %esi
 8ac1e64:	53                   	push   %ebx
 8ac1e65:	83 ec 60             	sub    $0x60,%esp
 8ac1e68:	c7 44 24 04 60 dd e2 	movl   $0x8e2dd60,0x4(%esp)
 8ac1e6f:	08 
 8ac1e70:	c7 04 24 79 dd e2 08 	movl   $0x8e2dd79,(%esp)
 8ac1e77:	e8 ad 9e df ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8ac1e7c:	83 f0 01             	xor    $0x1,%eax
 8ac1e7f:	84 c0                	test   %al,%al
 8ac1e81:	74 0a                	je     8ac1e8d <_ZN23DeleteInvalidItemScript10loadScriptEv+0x2d>
 8ac1e83:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ac1e88:	e9 cd 01 00 00       	jmp    8ac205a <_ZN23DeleteInvalidItemScript10loadScriptEv+0x1fa>
 8ac1e8d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac1e90:	89 04 24             	mov    %eax,(%esp)
 8ac1e93:	e8 38 47 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ac1e98:	c6 45 c3 00          	movb   $0x0,-0x3d(%ebp)
 8ac1e9c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac1e9f:	89 04 24             	mov    %eax,(%esp)
 8ac1ea2:	e8 65 03 00 00       	call   8ac220c <_ZN23DeleteInvalidItemScript21DeleteInvalidItemDataC1Ev>
 8ac1ea7:	eb 07                	jmp    8ac1eb0 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x50>
 8ac1ea9:	90                   	nop
 8ac1eaa:	eb 04                	jmp    8ac1eb0 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x50>
 8ac1eac:	90                   	nop
 8ac1ead:	eb 01                	jmp    8ac1eb0 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x50>
 8ac1eaf:	90                   	nop
 8ac1eb0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ac1eb7:	00 
 8ac1eb8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac1ebb:	89 04 24             	mov    %eax,(%esp)
 8ac1ebe:	e8 9c a9 df ff       	call   88bc85f <_Z8ScanTypeRSsb>
 8ac1ec3:	83 f0 01             	xor    $0x1,%eax
 8ac1ec6:	84 c0                	test   %al,%al
 8ac1ec8:	0f 85 59 01 00 00    	jne    8ac2027 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x1c7>
 8ac1ece:	c7 44 24 04 7e dd e2 	movl   $0x8e2dd7e,0x4(%esp)
 8ac1ed5:	08 
 8ac1ed6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac1ed9:	89 04 24             	mov    %eax,(%esp)
 8ac1edc:	e8 c0 ea 5b ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac1ee1:	84 c0                	test   %al,%al
 8ac1ee3:	0f 84 cb 00 00 00    	je     8ac1fb4 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x154>
 8ac1ee9:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8ac1eec:	89 04 24             	mov    %eax,(%esp)
 8ac1eef:	e8 87 a4 df ff       	call   88bc37b <_Z7ScanIntPb>
 8ac1ef4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8ac1ef7:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8ac1efb:	83 f0 01             	xor    $0x1,%eax
 8ac1efe:	84 c0                	test   %al,%al
 8ac1f00:	74 05                	je     8ac1f07 <_ZN23DeleteInvalidItemScript10loadScriptEv+0xa7>
 8ac1f02:	e9 a8 00 00 00       	jmp    8ac1faf <_ZN23DeleteInvalidItemScript10loadScriptEv+0x14f>
 8ac1f07:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8ac1f0a:	89 04 24             	mov    %eax,(%esp)
 8ac1f0d:	e8 69 a4 df ff       	call   88bc37b <_Z7ScanIntPb>
 8ac1f12:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac1f15:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8ac1f19:	83 f0 01             	xor    $0x1,%eax
 8ac1f1c:	84 c0                	test   %al,%al
 8ac1f1e:	74 05                	je     8ac1f25 <_ZN23DeleteInvalidItemScript10loadScriptEv+0xc5>
 8ac1f20:	e9 8a 00 00 00       	jmp    8ac1faf <_ZN23DeleteInvalidItemScript10loadScriptEv+0x14f>
 8ac1f25:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 8ac1f28:	89 04 24             	mov    %eax,(%esp)
 8ac1f2b:	e8 4b a4 df ff       	call   88bc37b <_Z7ScanIntPb>
 8ac1f30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac1f33:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8ac1f37:	83 f0 01             	xor    $0x1,%eax
 8ac1f3a:	84 c0                	test   %al,%al
 8ac1f3c:	74 02                	je     8ac1f40 <_ZN23DeleteInvalidItemScript10loadScriptEv+0xe0>
 8ac1f3e:	eb 6f                	jmp    8ac1faf <_ZN23DeleteInvalidItemScript10loadScriptEv+0x14f>
 8ac1f40:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac1f43:	89 04 24             	mov    %eax,(%esp)
 8ac1f46:	e8 d5 02 00 00       	call   8ac2220 <_ZN23DeleteInvalidItemScript21DeleteInvalidItemData4initEv>
 8ac1f4b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8ac1f4e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8ac1f51:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac1f54:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ac1f57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac1f5a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8ac1f5d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ac1f60:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8ac1f63:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac1f67:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac1f6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac1f6e:	89 04 24             	mov    %eax,(%esp)
 8ac1f71:	e8 59 03 00 00       	call   8ac22cf <_ZSt9make_pairIRiRN23DeleteInvalidItemScript21DeleteInvalidItemDataEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8ac1f76:	83 ec 04             	sub    $0x4,%esp
 8ac1f79:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ac1f7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac1f80:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac1f83:	89 04 24             	mov    %eax,(%esp)
 8ac1f86:	e8 83 03 00 00       	call   8ac230e <_ZNSt4pairIKiN23DeleteInvalidItemScript21DeleteInvalidItemDataEEC1IiS2_EEOS_IT_T0_E>
 8ac1f8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1f8e:	8d 48 08             	lea    0x8(%eax),%ecx
 8ac1f91:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac1f94:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8ac1f97:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac1f9b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ac1f9f:	89 04 24             	mov    %eax,(%esp)
 8ac1fa2:	e8 a3 03 00 00       	call   8ac234a <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 8ac1fa7:	83 ec 04             	sub    $0x4,%esp
 8ac1faa:	e9 3a ff ff ff       	jmp    8ac1ee9 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x89>
 8ac1faf:	e9 fc fe ff ff       	jmp    8ac1eb0 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x50>
 8ac1fb4:	c7 44 24 04 8c dd e2 	movl   $0x8e2dd8c,0x4(%esp)
 8ac1fbb:	08 
 8ac1fbc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac1fbf:	89 04 24             	mov    %eax,(%esp)
 8ac1fc2:	e8 da e9 5b ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac1fc7:	84 c0                	test   %al,%al
 8ac1fc9:	74 1f                	je     8ac1fea <_ZN23DeleteInvalidItemScript10loadScriptEv+0x18a>
 8ac1fcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1fce:	89 04 24             	mov    %eax,(%esp)
 8ac1fd1:	e8 cc a7 df ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ac1fd6:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8ac1fd9:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8ac1fdd:	83 f0 01             	xor    $0x1,%eax
 8ac1fe0:	84 c0                	test   %al,%al
 8ac1fe2:	0f 84 c1 fe ff ff    	je     8ac1ea9 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x49>
 8ac1fe8:	eb 3e                	jmp    8ac2028 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x1c8>
 8ac1fea:	c7 44 24 04 9e dd e2 	movl   $0x8e2dd9e,0x4(%esp)
 8ac1ff1:	08 
 8ac1ff2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac1ff5:	89 04 24             	mov    %eax,(%esp)
 8ac1ff8:	e8 a4 e9 5b ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8ac1ffd:	84 c0                	test   %al,%al
 8ac1fff:	0f 84 a7 fe ff ff    	je     8ac1eac <_ZN23DeleteInvalidItemScript10loadScriptEv+0x4c>
 8ac2005:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac2008:	83 c0 04             	add    $0x4,%eax
 8ac200b:	89 04 24             	mov    %eax,(%esp)
 8ac200e:	e8 8f a7 df ff       	call   88bc7a2 <_Z7ScanStrPSs>
 8ac2013:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8ac2016:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8ac201a:	83 f0 01             	xor    $0x1,%eax
 8ac201d:	84 c0                	test   %al,%al
 8ac201f:	0f 84 8a fe ff ff    	je     8ac1eaf <_ZN23DeleteInvalidItemScript10loadScriptEv+0x4f>
 8ac2025:	eb 01                	jmp    8ac2028 <_ZN23DeleteInvalidItemScript10loadScriptEv+0x1c8>
 8ac2027:	90                   	nop
 8ac2028:	e8 27 a0 df ff       	call   88bc054 <_Z20unloadRDARScriptFilev>
 8ac202d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac2032:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac2035:	89 04 24             	mov    %eax,(%esp)
 8ac2038:	e8 a3 5b c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac203d:	eb 1b                	jmp    8ac205a <_ZN23DeleteInvalidItemScript10loadScriptEv+0x1fa>
 8ac203f:	89 d3                	mov    %edx,%ebx
 8ac2041:	89 c6                	mov    %eax,%esi
 8ac2043:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac2046:	89 04 24             	mov    %eax,(%esp)
 8ac2049:	e8 92 5b c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac204e:	89 f0                	mov    %esi,%eax
 8ac2050:	89 da                	mov    %ebx,%edx
 8ac2052:	89 04 24             	mov    %eax,(%esp)
 8ac2055:	e8 f6 16 02 00       	call   8ae3750 <_Unwind_Resume>
 8ac205a:	89 d8                	mov    %ebx,%eax
 8ac205c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ac205f:	83 c4 00             	add    $0x0,%esp
 8ac2062:	5b                   	pop    %ebx
 8ac2063:	5e                   	pop    %esi
 8ac2064:	5d                   	pop    %ebp
 8ac2065:	c3                   	ret

```

```c
// DeleteInvalidItemScript::loadScript @ 0x8ac1e60

/* DeleteInvalidItemScript::loadScript() */

undefined4 __thiscall DeleteInvalidItemScript::loadScript(DeleteInvalidItemScript *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  bool local_41;
  string local_40;
  pair local_3c [8];
  pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData> local_34 [16];
  int local_24 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("Etc/","tw_DeleteInvalidItem.etc");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_40);
    local_41 = false;
    DeleteInvalidItemData::DeleteInvalidItemData((DeleteInvalidItemData *)&local_54);
    do {
      while( true ) {
        while( true ) {
                    /* try { // try from 08ac1ebe to 08ac202c has its CatchHandler @ 08ac203f */
          cVar1 = ScanType((string *)&local_40,true);
          if (cVar1 != '\x01') goto LAB_08ac2028;
          bVar2 = std::operator==(&local_40,"[delete item]");
          if (!bVar2) break;
          while (((local_48 = ScanInt(&local_41), local_41 == true &&
                  (local_14 = ScanInt(&local_41), local_41 == true)) &&
                 (local_10 = ScanInt(&local_41), local_41 == true))) {
            DeleteInvalidItemData::init((DeleteInvalidItemData *)&local_54);
            local_54 = local_48;
            local_50 = local_14;
            local_4c = local_10;
            std::make_pair<int&,DeleteInvalidItemScript::DeleteInvalidItemData&>
                      (local_24,(DeleteInvalidItemData *)&local_48);
            std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>::
            pair<int,DeleteInvalidItemScript::DeleteInvalidItemData>(local_34,(pair *)local_24);
            std::
            map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
            ::insert(local_3c);
          }
        }
        bVar2 = std::operator==(&local_40,"[send mail title]");
        if (bVar2) break;
        bVar2 = std::operator==(&local_40,"[send mail content]");
        if ((bVar2) && (local_41 = (bool)ScanStr((string *)(this + 4)), local_41 != true))
        goto LAB_08ac2028;
      }
      local_41 = (bool)ScanStr((string *)this);
    } while (local_41 == true);
LAB_08ac2028:
    unloadRDARScriptFile();
    uVar3 = 1;
    std::string::~string((string *)&local_40);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~DeleteInvalidItemScript

```asm
// === 08ac1dce DeleteInvalidItemScript::~DeleteInvalidItemScript  [0x08ac1dce-0x8ac1e5f] ===
 8ac1dce:	55                   	push   %ebp
 8ac1dcf:	89 e5                	mov    %esp,%ebp
 8ac1dd1:	56                   	push   %esi
 8ac1dd2:	53                   	push   %ebx
 8ac1dd3:	83 ec 10             	sub    $0x10,%esp
 8ac1dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1dd9:	89 04 24             	mov    %eax,(%esp)
 8ac1ddc:	e8 85 02 00 00       	call   8ac2066 <_ZN23DeleteInvalidItemScript11clearScriptEv>
 8ac1de1:	eb 18                	jmp    8ac1dfb <_ZN23DeleteInvalidItemScriptD1Ev+0x2d>
 8ac1de3:	89 d3                	mov    %edx,%ebx
 8ac1de5:	89 c6                	mov    %eax,%esi
 8ac1de7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1dea:	83 c0 08             	add    $0x8,%eax
 8ac1ded:	89 04 24             	mov    %eax,(%esp)
 8ac1df0:	e8 4d 04 00 00       	call   8ac2242 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8ac1df5:	89 f0                	mov    %esi,%eax
 8ac1df7:	89 da                	mov    %ebx,%edx
 8ac1df9:	eb 10                	jmp    8ac1e0b <_ZN23DeleteInvalidItemScriptD1Ev+0x3d>
 8ac1dfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1dfe:	83 c0 08             	add    $0x8,%eax
 8ac1e01:	89 04 24             	mov    %eax,(%esp)
 8ac1e04:	e8 39 04 00 00       	call   8ac2242 <_ZNSt3mapIiN23DeleteInvalidItemScript21DeleteInvalidItemDataESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 8ac1e09:	eb 18                	jmp    8ac1e23 <_ZN23DeleteInvalidItemScriptD1Ev+0x55>
 8ac1e0b:	89 d3                	mov    %edx,%ebx
 8ac1e0d:	89 c6                	mov    %eax,%esi
 8ac1e0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1e12:	83 c0 04             	add    $0x4,%eax
 8ac1e15:	89 04 24             	mov    %eax,(%esp)
 8ac1e18:	e8 c3 5d c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac1e1d:	89 f0                	mov    %esi,%eax
 8ac1e1f:	89 da                	mov    %ebx,%edx
 8ac1e21:	eb 10                	jmp    8ac1e33 <_ZN23DeleteInvalidItemScriptD1Ev+0x65>
 8ac1e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1e26:	83 c0 04             	add    $0x4,%eax
 8ac1e29:	89 04 24             	mov    %eax,(%esp)
 8ac1e2c:	e8 af 5d c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac1e31:	eb 1b                	jmp    8ac1e4e <_ZN23DeleteInvalidItemScriptD1Ev+0x80>
 8ac1e33:	89 d3                	mov    %edx,%ebx
 8ac1e35:	89 c6                	mov    %eax,%esi
 8ac1e37:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1e3a:	89 04 24             	mov    %eax,(%esp)
 8ac1e3d:	e8 9e 5d c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac1e42:	89 f0                	mov    %esi,%eax
 8ac1e44:	89 da                	mov    %ebx,%edx
 8ac1e46:	89 04 24             	mov    %eax,(%esp)
 8ac1e49:	e8 02 19 02 00       	call   8ae3750 <_Unwind_Resume>
 8ac1e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac1e51:	89 04 24             	mov    %eax,(%esp)
 8ac1e54:	e8 87 5d c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac1e59:	83 c4 10             	add    $0x10,%esp
 8ac1e5c:	5b                   	pop    %ebx
 8ac1e5d:	5e                   	pop    %esi
 8ac1e5e:	5d                   	pop    %ebp
 8ac1e5f:	c3                   	ret

```

```c
// DeleteInvalidItemScript::~DeleteInvalidItemScript @ 0x8ac1dce

/* DeleteInvalidItemScript::~DeleteInvalidItemScript() */

void __thiscall DeleteInvalidItemScript::~DeleteInvalidItemScript(DeleteInvalidItemScript *this)

{
                    /* try { // try from 08ac1ddc to 08ac1de0 has its CatchHandler @ 08ac1de3 */
  clearScript(this);
                    /* try { // try from 08ac1e04 to 08ac1e08 has its CatchHandler @ 08ac1e0b */
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::~map((map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
          *)(this + 8));
                    /* try { // try from 08ac1e2c to 08ac1e30 has its CatchHandler @ 08ac1e33 */
  std::string::~string((string *)(this + 4));
  std::string::~string((string *)this);
  return;
}

```

