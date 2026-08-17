# MissionScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## MissionScript

```asm
// === 08a5ba8c MissionScript::MissionScript  [0x08a5ba8c-0x8a5bbb1] ===
 8a5ba8c:	55                   	push   %ebp
 8a5ba8d:	89 e5                	mov    %esp,%ebp
 8a5ba8f:	56                   	push   %esi
 8a5ba90:	53                   	push   %ebx
 8a5ba91:	83 ec 10             	sub    $0x10,%esp
 8a5ba94:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5ba97:	83 c0 10             	add    $0x10,%eax
 8a5ba9a:	89 04 24             	mov    %eax,(%esp)
 8a5ba9d:	e8 ec a1 75 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8a5baa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5baa5:	83 c0 18             	add    $0x18,%eax
 8a5baa8:	89 04 24             	mov    %eax,(%esp)
 8a5baab:	e8 de a1 75 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 8a5bab0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bab3:	83 c0 28             	add    $0x28,%eax
 8a5bab6:	89 04 24             	mov    %eax,(%esp)
 8a5bab9:	e8 ee 26 63 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a5babe:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bac1:	83 c0 38             	add    $0x38,%eax
 8a5bac4:	89 04 24             	mov    %eax,(%esp)
 8a5bac7:	e8 04 ab ca ff       	call   87065d0 <_ZNSsC1Ev>
 8a5bacc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bacf:	83 c0 3c             	add    $0x3c,%eax
 8a5bad2:	89 04 24             	mov    %eax,(%esp)
 8a5bad5:	e8 f6 aa ca ff       	call   87065d0 <_ZNSsC1Ev>
 8a5bada:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5badd:	83 c0 44             	add    $0x44,%eax
 8a5bae0:	89 04 24             	mov    %eax,(%esp)
 8a5bae3:	e8 ee 8e 6d ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8a5bae8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5baeb:	83 c0 50             	add    $0x50,%eax
 8a5baee:	89 04 24             	mov    %eax,(%esp)
 8a5baf1:	e8 b6 26 63 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a5baf6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5baf9:	83 c0 60             	add    $0x60,%eax
 8a5bafc:	89 04 24             	mov    %eax,(%esp)
 8a5baff:	e8 28 05 00 00       	call   8a5c02c <_ZNSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEEC1Ev>
 8a5bb04:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb07:	89 04 24             	mov    %eax,(%esp)
 8a5bb0a:	e8 a3 00 00 00       	call   8a5bbb2 <_ZN13MissionScript5clearEv>
 8a5bb0f:	e9 96 00 00 00       	jmp    8a5bbaa <_ZN13MissionScriptC1Ev+0x11e>
 8a5bb14:	89 d3                	mov    %edx,%ebx
 8a5bb16:	89 c6                	mov    %eax,%esi
 8a5bb18:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb1b:	83 c0 60             	add    $0x60,%eax
 8a5bb1e:	89 04 24             	mov    %eax,(%esp)
 8a5bb21:	e8 06 b3 b8 ff       	call   85e6e2c <_ZNSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEED1Ev>
 8a5bb26:	89 f0                	mov    %esi,%eax
 8a5bb28:	89 da                	mov    %ebx,%edx
 8a5bb2a:	eb 00                	jmp    8a5bb2c <_ZN13MissionScriptC1Ev+0xa0>
 8a5bb2c:	89 d3                	mov    %edx,%ebx
 8a5bb2e:	89 c6                	mov    %eax,%esi
 8a5bb30:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb33:	83 c0 50             	add    $0x50,%eax
 8a5bb36:	89 04 24             	mov    %eax,(%esp)
 8a5bb39:	e8 9c 82 62 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a5bb3e:	89 f0                	mov    %esi,%eax
 8a5bb40:	89 da                	mov    %ebx,%edx
 8a5bb42:	eb 00                	jmp    8a5bb44 <_ZN13MissionScriptC1Ev+0xb8>
 8a5bb44:	89 d3                	mov    %edx,%ebx
 8a5bb46:	89 c6                	mov    %eax,%esi
 8a5bb48:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb4b:	83 c0 44             	add    $0x44,%eax
 8a5bb4e:	89 04 24             	mov    %eax,(%esp)
 8a5bb51:	e8 94 8e 6d ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8a5bb56:	89 f0                	mov    %esi,%eax
 8a5bb58:	89 da                	mov    %ebx,%edx
 8a5bb5a:	eb 00                	jmp    8a5bb5c <_ZN13MissionScriptC1Ev+0xd0>
 8a5bb5c:	89 d3                	mov    %edx,%ebx
 8a5bb5e:	89 c6                	mov    %eax,%esi
 8a5bb60:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb63:	83 c0 3c             	add    $0x3c,%eax
 8a5bb66:	89 04 24             	mov    %eax,(%esp)
 8a5bb69:	e8 72 c0 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a5bb6e:	89 f0                	mov    %esi,%eax
 8a5bb70:	89 da                	mov    %ebx,%edx
 8a5bb72:	eb 00                	jmp    8a5bb74 <_ZN13MissionScriptC1Ev+0xe8>
 8a5bb74:	89 d3                	mov    %edx,%ebx
 8a5bb76:	89 c6                	mov    %eax,%esi
 8a5bb78:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb7b:	83 c0 38             	add    $0x38,%eax
 8a5bb7e:	89 04 24             	mov    %eax,(%esp)
 8a5bb81:	e8 5a c0 ca ff       	call   8707be0 <_ZNSsD1Ev>
 8a5bb86:	89 f0                	mov    %esi,%eax
 8a5bb88:	89 da                	mov    %ebx,%edx
 8a5bb8a:	eb 00                	jmp    8a5bb8c <_ZN13MissionScriptC1Ev+0x100>
 8a5bb8c:	89 d3                	mov    %edx,%ebx
 8a5bb8e:	89 c6                	mov    %eax,%esi
 8a5bb90:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bb93:	83 c0 28             	add    $0x28,%eax
 8a5bb96:	89 04 24             	mov    %eax,(%esp)
 8a5bb99:	e8 3c 82 62 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a5bb9e:	89 f0                	mov    %esi,%eax
 8a5bba0:	89 da                	mov    %ebx,%edx
 8a5bba2:	89 04 24             	mov    %eax,(%esp)
 8a5bba5:	e8 a6 7b 08 00       	call   8ae3750 <_Unwind_Resume>
 8a5bbaa:	83 c4 10             	add    $0x10,%esp
 8a5bbad:	5b                   	pop    %ebx
 8a5bbae:	5e                   	pop    %esi
 8a5bbaf:	5d                   	pop    %ebp
 8a5bbb0:	c3                   	ret
 8a5bbb1:	90                   	nop

```

```c
// MissionScript::MissionScript @ 0x8a5ba8c

/* MissionScript::MissionScript() */

void __thiscall MissionScript::MissionScript(MissionScript *this)

{
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x10));
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x18));
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x28));
                    /* try { // try from 08a5bac7 to 08a5bacb has its CatchHandler @ 08a5bb8c */
  std::string::string((string *)(this + 0x38));
                    /* try { // try from 08a5bad5 to 08a5bad9 has its CatchHandler @ 08a5bb74 */
  std::string::string((string *)(this + 0x3c));
                    /* try { // try from 08a5bae3 to 08a5bae7 has its CatchHandler @ 08a5bb5c */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x44));
                    /* try { // try from 08a5baf1 to 08a5baf5 has its CatchHandler @ 08a5bb44 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x50));
                    /* try { // try from 08a5baff to 08a5bb03 has its CatchHandler @ 08a5bb2c */
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::map((map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
         *)(this + 0x60));
                    /* try { // try from 08a5bb0a to 08a5bb0e has its CatchHandler @ 08a5bb14 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 08a5bbb2 MissionScript::clear  [0x08a5bbb2-0x8a5bca1] ===
 8a5bbb2:	55                   	push   %ebp
 8a5bbb3:	89 e5                	mov    %esp,%ebp
 8a5bbb5:	83 ec 28             	sub    $0x28,%esp
 8a5bbb8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8a5bbbf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a5bbc6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a5bbc9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a5bbcd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a5bbd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5bbd4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5bbd7:	89 04 24             	mov    %eax,(%esp)
 8a5bbda:	e8 f5 6b 70 ff       	call   81627d4 <_ZNSt4pairIiiEC1IiiEEOT_OT0_>
 8a5bbdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bbe2:	8d 50 10             	lea    0x10(%eax),%edx
 8a5bbe5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8a5bbe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a5bbec:	89 14 24             	mov    %edx,(%esp)
 8a5bbef:	e8 28 23 68 ff       	call   80ddf1c <_ZNSt4pairIiiEaSEOS0_>
 8a5bbf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bbf7:	c7 40 20 04 00 00 00 	movl   $0x4,0x20(%eax)
 8a5bbfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc01:	c7 40 24 0b 00 00 00 	movl   $0xb,0x24(%eax)
 8a5bc08:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc0b:	83 c0 28             	add    $0x28,%eax
 8a5bc0e:	89 04 24             	mov    %eax,(%esp)
 8a5bc11:	e8 58 af 63 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 8a5bc16:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc19:	c7 40 34 10 00 00 00 	movl   $0x10,0x34(%eax)
 8a5bc20:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc23:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 8a5bc29:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc2c:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 8a5bc33:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc36:	83 c0 38             	add    $0x38,%eax
 8a5bc39:	89 04 24             	mov    %eax,(%esp)
 8a5bc3c:	e8 8f d1 ca ff       	call   8708dd0 <_ZNSs5clearEv>
 8a5bc41:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc44:	83 c0 3c             	add    $0x3c,%eax
 8a5bc47:	89 04 24             	mov    %eax,(%esp)
 8a5bc4a:	e8 81 d1 ca ff       	call   8708dd0 <_ZNSs5clearEv>
 8a5bc4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc52:	83 c0 44             	add    $0x44,%eax
 8a5bc55:	89 04 24             	mov    %eax,(%esp)
 8a5bc58:	e8 e5 e6 71 ff       	call   817a342 <_ZNSt6vectorISt4pairIiiESaIS1_EE5clearEv>
 8a5bc5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc60:	ba 00 00 00 00       	mov    $0x0,%edx
 8a5bc65:	89 50 40             	mov    %edx,0x40(%eax)
 8a5bc68:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc6b:	c6 40 5c 00          	movb   $0x0,0x5c(%eax)
 8a5bc6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc72:	c6 40 5d 00          	movb   $0x0,0x5d(%eax)
 8a5bc76:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc79:	c6 40 5e 00          	movb   $0x0,0x5e(%eax)
 8a5bc7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc80:	83 c0 60             	add    $0x60,%eax
 8a5bc83:	89 04 24             	mov    %eax,(%esp)
 8a5bc86:	e8 b5 03 00 00       	call   8a5c040 <_ZNSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE5clearEv>
 8a5bc8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc8e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8a5bc95:	8b 45 08             	mov    0x8(%ebp),%eax
 8a5bc98:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a5bc9f:	c9                   	leave
 8a5bca0:	c3                   	ret
 8a5bca1:	90                   	nop

```

```c
// MissionScript::clear @ 0x8a5bbb2

/* MissionScript::clear() */

void __thiscall MissionScript::clear(MissionScript *this)

{
  pair<int,int> local_1c [8];
  int local_14 [4];
  
  local_14[0] = 0;
  local_14[1] = 0;
  std::pair<int,int>::pair<int,int>(local_1c,local_14 + 1,local_14);
  std::pair<int,int>::operator=((pair<int,int> *)(this + 0x10),local_1c);
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined4 *)(this + 0x24) = 0xb;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x28));
  *(undefined4 *)(this + 0x34) = 0x10;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  std::string::clear((string *)(this + 0x38));
  std::string::clear((string *)(this + 0x3c));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x44));
  *(undefined4 *)(this + 0x40) = 0;
  this[0x5c] = (MissionScript)0x0;
  this[0x5d] = (MissionScript)0x0;
  this[0x5e] = (MissionScript)0x0;
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::clear((map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
           *)(this + 0x60));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

