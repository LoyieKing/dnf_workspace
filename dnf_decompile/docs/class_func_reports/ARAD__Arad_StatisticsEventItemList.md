# ARAD__Arad_StatisticsEventItemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Arad_StatisticsEventItemList

```asm
// === 0819cbe8 ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList  [0x0819cbe8-0x819ccab] ===
 819cbe8:	55                   	push   %ebp
 819cbe9:	89 e5                	mov    %esp,%ebp
 819cbeb:	56                   	push   %esi
 819cbec:	53                   	push   %ebx
 819cbed:	83 ec 20             	sub    $0x20,%esp
 819cbf0:	8d 45 f7             	lea    -0x9(%ebp),%eax
 819cbf3:	89 04 24             	mov    %eax,(%esp)
 819cbf6:	e8 d5 34 54 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 819cbfb:	8d 45 f7             	lea    -0x9(%ebp),%eax
 819cbfe:	89 44 24 08          	mov    %eax,0x8(%esp)
 819cc02:	c7 44 24 04 40 4e ba 	movl   $0x8ba4e40,0x4(%esp)
 819cc09:	08 
 819cc0a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819cc0d:	89 04 24             	mov    %eax,(%esp)
 819cc10:	e8 1b aa 56 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 819cc15:	8b 45 08             	mov    0x8(%ebp),%eax
 819cc18:	8d 55 f0             	lea    -0x10(%ebp),%edx
 819cc1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 819cc1f:	89 04 24             	mov    %eax,(%esp)
 819cc22:	e8 35 90 ff ff       	call   8195c5c <_ZN4ARAD24Arad_InterfaceGameScriptC1ESs>
 819cc27:	eb 15                	jmp    819cc3e <_ZN4ARAD28Arad_StatisticsEventItemListC1Ev+0x56>
 819cc29:	89 d3                	mov    %edx,%ebx
 819cc2b:	89 c6                	mov    %eax,%esi
 819cc2d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819cc30:	89 04 24             	mov    %eax,(%esp)
 819cc33:	e8 a8 af 56 00       	call   8707be0 <_ZNSsD1Ev>
 819cc38:	89 f0                	mov    %esi,%eax
 819cc3a:	89 da                	mov    %ebx,%edx
 819cc3c:	eb 0d                	jmp    819cc4b <_ZN4ARAD28Arad_StatisticsEventItemListC1Ev+0x63>
 819cc3e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819cc41:	89 04 24             	mov    %eax,(%esp)
 819cc44:	e8 97 af 56 00       	call   8707be0 <_ZNSsD1Ev>
 819cc49:	eb 1b                	jmp    819cc66 <_ZN4ARAD28Arad_StatisticsEventItemListC1Ev+0x7e>
 819cc4b:	89 d3                	mov    %edx,%ebx
 819cc4d:	89 c6                	mov    %eax,%esi
 819cc4f:	8d 45 f7             	lea    -0x9(%ebp),%eax
 819cc52:	89 04 24             	mov    %eax,(%esp)
 819cc55:	e8 96 34 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 819cc5a:	89 f0                	mov    %esi,%eax
 819cc5c:	89 da                	mov    %ebx,%edx
 819cc5e:	89 04 24             	mov    %eax,(%esp)
 819cc61:	e8 ea 6a 94 00       	call   8ae3750 <_Unwind_Resume>
 819cc66:	8d 45 f7             	lea    -0x9(%ebp),%eax
 819cc69:	89 04 24             	mov    %eax,(%esp)
 819cc6c:	e8 7f 34 54 00       	call   86e00f0 <_ZNSaIcED1Ev>
 819cc71:	8b 45 08             	mov    0x8(%ebp),%eax
 819cc74:	c7 00 80 5a ba 08    	movl   $0x8ba5a80,(%eax)
 819cc7a:	8b 45 08             	mov    0x8(%ebp),%eax
 819cc7d:	83 c0 08             	add    $0x8,%eax
 819cc80:	89 04 24             	mov    %eax,(%esp)
 819cc83:	e8 3a 87 f5 ff       	call   80f53c2 <_ZNSt6vectorImSaImEEC1Ev>
 819cc88:	eb 1b                	jmp    819cca5 <_ZN4ARAD28Arad_StatisticsEventItemListC1Ev+0xbd>
 819cc8a:	89 d3                	mov    %edx,%ebx
 819cc8c:	89 c6                	mov    %eax,%esi
 819cc8e:	8b 45 08             	mov    0x8(%ebp),%eax
 819cc91:	89 04 24             	mov    %eax,(%esp)
 819cc94:	e8 e9 8f ff ff       	call   8195c82 <_ZN4ARAD24Arad_InterfaceGameScriptD1Ev>
 819cc99:	89 f0                	mov    %esi,%eax
 819cc9b:	89 da                	mov    %ebx,%edx
 819cc9d:	89 04 24             	mov    %eax,(%esp)
 819cca0:	e8 ab 6a 94 00       	call   8ae3750 <_Unwind_Resume>
 819cca5:	83 c4 20             	add    $0x20,%esp
 819cca8:	5b                   	pop    %ebx
 819cca9:	5e                   	pop    %esi
 819ccaa:	5d                   	pop    %ebp
 819ccab:	c3                   	ret

```

```c
// ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList @ 0x819cbe8

/* ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::Arad_StatisticsEventItemList(Arad_StatisticsEventItemList *this)

{
  string local_14 [7];
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 0819cc10 to 0819cc14 has its CatchHandler @ 0819cc4b */
  std::string::string(local_14,"Arad_StatisticsEventItemList",(allocator *)&local_d);
                    /* try { // try from 0819cc22 to 0819cc26 has its CatchHandler @ 0819cc29 */
  Arad_InterfaceGameScript::Arad_InterfaceGameScript
            ((Arad_InterfaceGameScript *)this,(string)local_14);
                    /* try { // try from 0819cc44 to 0819cc48 has its CatchHandler @ 0819cc4b */
  std::string::~string(local_14);
  std::allocator<char>::~allocator(&local_d);
  *(undefined ***)this = &PTR__Arad_StatisticsEventItemList_08ba5a80;
                    /* try { // try from 0819cc83 to 0819cc87 has its CatchHandler @ 0819cc8a */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::vector
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8));
  return;
}

```

---

## clearScriptData

```asm
// === 0819d084 ARAD::Arad_StatisticsEventItemList::clearScriptData  [0x0819d084-0x819d099] ===
 819d084:	55                   	push   %ebp
 819d085:	89 e5                	mov    %esp,%ebp
 819d087:	83 ec 18             	sub    $0x18,%esp
 819d08a:	8b 45 08             	mov    0x8(%ebp),%eax
 819d08d:	83 c0 08             	add    $0x8,%eax
 819d090:	89 04 24             	mov    %eax,(%esp)
 819d093:	e8 fe 59 fb ff       	call   8152a96 <_ZNSt6vectorImSaImEE5clearEv>
 819d098:	c9                   	leave
 819d099:	c3                   	ret

```

```c
// ARAD::Arad_StatisticsEventItemList::clearScriptData @ 0x819d084

/* ARAD::Arad_StatisticsEventItemList::clearScriptData() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::clearScriptData(Arad_StatisticsEventItemList *this)

{
  std::vector<unsigned_long,std::allocator<unsigned_long>>::clear
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8));
  return;
}

```

---

## loadScriptData

```asm
// === 0819cd2c ARAD::Arad_StatisticsEventItemList::loadScriptData  [0x0819cd2c-0x819d083] ===
 819cd2c:	55                   	push   %ebp
 819cd2d:	89 e5                	mov    %esp,%ebp
 819cd2f:	81 ec 98 00 00 00    	sub    $0x98,%esp
 819cd35:	c7 45 80 aa d3 28 00 	movl   $0x28d3aa,-0x80(%ebp)
 819cd3c:	8b 45 08             	mov    0x8(%ebp),%eax
 819cd3f:	8d 50 08             	lea    0x8(%eax),%edx
 819cd42:	8d 45 80             	lea    -0x80(%ebp),%eax
 819cd45:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cd49:	89 14 24             	mov    %edx,(%esp)
 819cd4c:	e8 3b 04 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cd51:	c7 45 84 a4 d3 28 00 	movl   $0x28d3a4,-0x7c(%ebp)
 819cd58:	8b 45 08             	mov    0x8(%ebp),%eax
 819cd5b:	8d 50 08             	lea    0x8(%eax),%edx
 819cd5e:	8d 45 84             	lea    -0x7c(%ebp),%eax
 819cd61:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cd65:	89 14 24             	mov    %edx,(%esp)
 819cd68:	e8 1f 04 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cd6d:	c7 45 88 56 68 00 00 	movl   $0x6856,-0x78(%ebp)
 819cd74:	8b 45 08             	mov    0x8(%ebp),%eax
 819cd77:	8d 50 08             	lea    0x8(%eax),%edx
 819cd7a:	8d 45 88             	lea    -0x78(%ebp),%eax
 819cd7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cd81:	89 14 24             	mov    %edx,(%esp)
 819cd84:	e8 03 04 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cd89:	c7 45 8c 57 68 00 00 	movl   $0x6857,-0x74(%ebp)
 819cd90:	8b 45 08             	mov    0x8(%ebp),%eax
 819cd93:	8d 50 08             	lea    0x8(%eax),%edx
 819cd96:	8d 45 8c             	lea    -0x74(%ebp),%eax
 819cd99:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cd9d:	89 14 24             	mov    %edx,(%esp)
 819cda0:	e8 e7 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cda5:	c7 45 90 58 68 00 00 	movl   $0x6858,-0x70(%ebp)
 819cdac:	8b 45 08             	mov    0x8(%ebp),%eax
 819cdaf:	8d 50 08             	lea    0x8(%eax),%edx
 819cdb2:	8d 45 90             	lea    -0x70(%ebp),%eax
 819cdb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cdb9:	89 14 24             	mov    %edx,(%esp)
 819cdbc:	e8 cb 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cdc1:	c7 45 94 59 68 00 00 	movl   $0x6859,-0x6c(%ebp)
 819cdc8:	8b 45 08             	mov    0x8(%ebp),%eax
 819cdcb:	8d 50 08             	lea    0x8(%eax),%edx
 819cdce:	8d 45 94             	lea    -0x6c(%ebp),%eax
 819cdd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cdd5:	89 14 24             	mov    %edx,(%esp)
 819cdd8:	e8 af 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cddd:	c7 45 98 5a 68 00 00 	movl   $0x685a,-0x68(%ebp)
 819cde4:	8b 45 08             	mov    0x8(%ebp),%eax
 819cde7:	8d 50 08             	lea    0x8(%eax),%edx
 819cdea:	8d 45 98             	lea    -0x68(%ebp),%eax
 819cded:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cdf1:	89 14 24             	mov    %edx,(%esp)
 819cdf4:	e8 93 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cdf9:	c7 45 9c 5b 68 00 00 	movl   $0x685b,-0x64(%ebp)
 819ce00:	8b 45 08             	mov    0x8(%ebp),%eax
 819ce03:	8d 50 08             	lea    0x8(%eax),%edx
 819ce06:	8d 45 9c             	lea    -0x64(%ebp),%eax
 819ce09:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ce0d:	89 14 24             	mov    %edx,(%esp)
 819ce10:	e8 77 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819ce15:	c7 45 a0 5c 68 00 00 	movl   $0x685c,-0x60(%ebp)
 819ce1c:	8b 45 08             	mov    0x8(%ebp),%eax
 819ce1f:	8d 50 08             	lea    0x8(%eax),%edx
 819ce22:	8d 45 a0             	lea    -0x60(%ebp),%eax
 819ce25:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ce29:	89 14 24             	mov    %edx,(%esp)
 819ce2c:	e8 5b 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819ce31:	c7 45 a4 98 1d 00 00 	movl   $0x1d98,-0x5c(%ebp)
 819ce38:	8b 45 08             	mov    0x8(%ebp),%eax
 819ce3b:	8d 50 08             	lea    0x8(%eax),%edx
 819ce3e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 819ce41:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ce45:	89 14 24             	mov    %edx,(%esp)
 819ce48:	e8 3f 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819ce4d:	c7 45 a8 35 d4 28 00 	movl   $0x28d435,-0x58(%ebp)
 819ce54:	8b 45 08             	mov    0x8(%ebp),%eax
 819ce57:	8d 50 08             	lea    0x8(%eax),%edx
 819ce5a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 819ce5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ce61:	89 14 24             	mov    %edx,(%esp)
 819ce64:	e8 23 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819ce69:	c7 45 ac 36 d4 28 00 	movl   $0x28d436,-0x54(%ebp)
 819ce70:	8b 45 08             	mov    0x8(%ebp),%eax
 819ce73:	8d 50 08             	lea    0x8(%eax),%edx
 819ce76:	8d 45 ac             	lea    -0x54(%ebp),%eax
 819ce79:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ce7d:	89 14 24             	mov    %edx,(%esp)
 819ce80:	e8 07 03 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819ce85:	c7 45 b0 37 d4 28 00 	movl   $0x28d437,-0x50(%ebp)
 819ce8c:	8b 45 08             	mov    0x8(%ebp),%eax
 819ce8f:	8d 50 08             	lea    0x8(%eax),%edx
 819ce92:	8d 45 b0             	lea    -0x50(%ebp),%eax
 819ce95:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ce99:	89 14 24             	mov    %edx,(%esp)
 819ce9c:	e8 eb 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cea1:	c7 45 b4 38 d4 28 00 	movl   $0x28d438,-0x4c(%ebp)
 819cea8:	8b 45 08             	mov    0x8(%ebp),%eax
 819ceab:	8d 50 08             	lea    0x8(%eax),%edx
 819ceae:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 819ceb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ceb5:	89 14 24             	mov    %edx,(%esp)
 819ceb8:	e8 cf 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cebd:	c7 45 b8 39 d4 28 00 	movl   $0x28d439,-0x48(%ebp)
 819cec4:	8b 45 08             	mov    0x8(%ebp),%eax
 819cec7:	8d 50 08             	lea    0x8(%eax),%edx
 819ceca:	8d 45 b8             	lea    -0x48(%ebp),%eax
 819cecd:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ced1:	89 14 24             	mov    %edx,(%esp)
 819ced4:	e8 b3 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819ced9:	c7 45 bc 95 1d 00 00 	movl   $0x1d95,-0x44(%ebp)
 819cee0:	8b 45 08             	mov    0x8(%ebp),%eax
 819cee3:	8d 50 08             	lea    0x8(%eax),%edx
 819cee6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 819cee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ceed:	89 14 24             	mov    %edx,(%esp)
 819cef0:	e8 97 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cef5:	c7 45 c0 4d d1 28 00 	movl   $0x28d14d,-0x40(%ebp)
 819cefc:	8b 45 08             	mov    0x8(%ebp),%eax
 819ceff:	8d 50 08             	lea    0x8(%eax),%edx
 819cf02:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819cf05:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cf09:	89 14 24             	mov    %edx,(%esp)
 819cf0c:	e8 7b 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cf11:	c7 45 c4 ad cd 28 00 	movl   $0x28cdad,-0x3c(%ebp)
 819cf18:	8b 45 08             	mov    0x8(%ebp),%eax
 819cf1b:	8d 50 08             	lea    0x8(%eax),%edx
 819cf1e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 819cf21:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cf25:	89 14 24             	mov    %edx,(%esp)
 819cf28:	e8 5f 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cf2d:	c7 45 c8 ac cd 28 00 	movl   $0x28cdac,-0x38(%ebp)
 819cf34:	8b 45 08             	mov    0x8(%ebp),%eax
 819cf37:	8d 50 08             	lea    0x8(%eax),%edx
 819cf3a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 819cf3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cf41:	89 14 24             	mov    %edx,(%esp)
 819cf44:	e8 43 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cf49:	c7 45 cc 87 d4 28 00 	movl   $0x28d487,-0x34(%ebp)
 819cf50:	8b 45 08             	mov    0x8(%ebp),%eax
 819cf53:	8d 50 08             	lea    0x8(%eax),%edx
 819cf56:	8d 45 cc             	lea    -0x34(%ebp),%eax
 819cf59:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cf5d:	89 14 24             	mov    %edx,(%esp)
 819cf60:	e8 27 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cf65:	c7 45 d0 bf d4 28 00 	movl   $0x28d4bf,-0x30(%ebp)
 819cf6c:	8b 45 08             	mov    0x8(%ebp),%eax
 819cf6f:	8d 50 08             	lea    0x8(%eax),%edx
 819cf72:	8d 45 d0             	lea    -0x30(%ebp),%eax
 819cf75:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cf79:	89 14 24             	mov    %edx,(%esp)
 819cf7c:	e8 0b 02 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cf81:	c7 45 d4 5c 44 2a 00 	movl   $0x2a445c,-0x2c(%ebp)
 819cf88:	8b 45 08             	mov    0x8(%ebp),%eax
 819cf8b:	8d 50 08             	lea    0x8(%eax),%edx
 819cf8e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 819cf91:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cf95:	89 14 24             	mov    %edx,(%esp)
 819cf98:	e8 ef 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cf9d:	c7 45 d8 9c 4a 2a 00 	movl   $0x2a4a9c,-0x28(%ebp)
 819cfa4:	8b 45 08             	mov    0x8(%ebp),%eax
 819cfa7:	8d 50 08             	lea    0x8(%eax),%edx
 819cfaa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 819cfad:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cfb1:	89 14 24             	mov    %edx,(%esp)
 819cfb4:	e8 d3 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cfb9:	c7 45 dc 26 70 2a 00 	movl   $0x2a7026,-0x24(%ebp)
 819cfc0:	8b 45 08             	mov    0x8(%ebp),%eax
 819cfc3:	8d 50 08             	lea    0x8(%eax),%edx
 819cfc6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 819cfc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cfcd:	89 14 24             	mov    %edx,(%esp)
 819cfd0:	e8 b7 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cfd5:	c7 45 e0 9c 63 2a 00 	movl   $0x2a639c,-0x20(%ebp)
 819cfdc:	8b 45 08             	mov    0x8(%ebp),%eax
 819cfdf:	8d 50 08             	lea    0x8(%eax),%edx
 819cfe2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 819cfe5:	89 44 24 04          	mov    %eax,0x4(%esp)
 819cfe9:	89 14 24             	mov    %edx,(%esp)
 819cfec:	e8 9b 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819cff1:	c7 45 e4 dc 50 2a 00 	movl   $0x2a50dc,-0x1c(%ebp)
 819cff8:	8b 45 08             	mov    0x8(%ebp),%eax
 819cffb:	8d 50 08             	lea    0x8(%eax),%edx
 819cffe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 819d001:	89 44 24 04          	mov    %eax,0x4(%esp)
 819d005:	89 14 24             	mov    %edx,(%esp)
 819d008:	e8 7f 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819d00d:	c7 45 e8 1c 57 2a 00 	movl   $0x2a571c,-0x18(%ebp)
 819d014:	8b 45 08             	mov    0x8(%ebp),%eax
 819d017:	8d 50 08             	lea    0x8(%eax),%edx
 819d01a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819d01d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819d021:	89 14 24             	mov    %edx,(%esp)
 819d024:	e8 63 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819d029:	c7 45 ec 60 76 2a 00 	movl   $0x2a7660,-0x14(%ebp)
 819d030:	8b 45 08             	mov    0x8(%ebp),%eax
 819d033:	8d 50 08             	lea    0x8(%eax),%edx
 819d036:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819d039:	89 44 24 04          	mov    %eax,0x4(%esp)
 819d03d:	89 14 24             	mov    %edx,(%esp)
 819d040:	e8 47 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819d045:	c7 45 f0 63 5d 2a 00 	movl   $0x2a5d63,-0x10(%ebp)
 819d04c:	8b 45 08             	mov    0x8(%ebp),%eax
 819d04f:	8d 50 08             	lea    0x8(%eax),%edx
 819d052:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819d055:	89 44 24 04          	mov    %eax,0x4(%esp)
 819d059:	89 14 24             	mov    %edx,(%esp)
 819d05c:	e8 2b 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819d061:	c7 45 f4 dd 69 2a 00 	movl   $0x2a69dd,-0xc(%ebp)
 819d068:	8b 45 08             	mov    0x8(%ebp),%eax
 819d06b:	8d 50 08             	lea    0x8(%eax),%edx
 819d06e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819d071:	89 44 24 04          	mov    %eax,0x4(%esp)
 819d075:	89 14 24             	mov    %edx,(%esp)
 819d078:	e8 0f 01 00 00       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 819d07d:	b8 01 00 00 00       	mov    $0x1,%eax
 819d082:	c9                   	leave
 819d083:	c3                   	ret

```

```c
// ARAD::Arad_StatisticsEventItemList::loadScriptData @ 0x819cd2c

/* ARAD::Arad_StatisticsEventItemList::loadScriptData() */

undefined4 __thiscall
ARAD::Arad_StatisticsEventItemList::loadScriptData(Arad_StatisticsEventItemList *this)

{
  ulong local_84 [32];
  
  local_84[0] = 0x28d3aa;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84);
  local_84[1] = 0x28d3a4;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 1);
  local_84[2] = 0x6856;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 2);
  local_84[3] = 0x6857;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 3);
  local_84[4] = 0x6858;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 4);
  local_84[5] = 0x6859;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 5);
  local_84[6] = 0x685a;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 6);
  local_84[7] = 0x685b;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 7);
  local_84[8] = 0x685c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 8);
  local_84[9] = 0x1d98;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 9);
  local_84[10] = 0x28d435;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 10);
  local_84[0xb] = 0x28d436;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xb);
  local_84[0xc] = 0x28d437;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xc);
  local_84[0xd] = 0x28d438;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xd);
  local_84[0xe] = 0x28d439;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xe);
  local_84[0xf] = 0x1d95;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0xf);
  local_84[0x10] = 0x28d14d;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x10);
  local_84[0x11] = 0x28cdad;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x11);
  local_84[0x12] = 0x28cdac;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x12);
  local_84[0x13] = 0x28d487;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x13);
  local_84[0x14] = 0x28d4bf;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x14);
  local_84[0x15] = 0x2a445c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x15);
  local_84[0x16] = 0x2a4a9c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x16);
  local_84[0x17] = 0x2a7026;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x17);
  local_84[0x18] = 0x2a639c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x18);
  local_84[0x19] = 0x2a50dc;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x19);
  local_84[0x1a] = 0x2a571c;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1a);
  local_84[0x1b] = 0x2a7660;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1b);
  local_84[0x1c] = 0x2a5d63;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1c);
  local_84[0x1d] = 0x2a69dd;
  std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8),local_84 + 0x1d);
  return 1;
}

```

---

## needStatistics

```asm
// === 0819d09a ARAD::Arad_StatisticsEventItemList::needStatistics  [0x0819d09a-0x819d12e] ===
 819d09a:	55                   	push   %ebp
 819d09b:	89 e5                	mov    %esp,%ebp
 819d09d:	83 ec 28             	sub    $0x28,%esp
 819d0a0:	8b 45 08             	mov    0x8(%ebp),%eax
 819d0a3:	8d 50 08             	lea    0x8(%eax),%edx
 819d0a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819d0a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 819d0ad:	89 04 24             	mov    %eax,(%esp)
 819d0b0:	e8 25 01 00 00       	call   819d1da <_ZNSt6vectorImSaImEE3endEv>
 819d0b5:	83 ec 04             	sub    $0x4,%esp
 819d0b8:	8b 45 08             	mov    0x8(%ebp),%eax
 819d0bb:	8d 50 08             	lea    0x8(%eax),%edx
 819d0be:	8d 45 f0             	lea    -0x10(%ebp),%eax
 819d0c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 819d0c5:	89 04 24             	mov    %eax,(%esp)
 819d0c8:	e8 0d 01 00 00       	call   819d1da <_ZNSt6vectorImSaImEE3endEv>
 819d0cd:	83 ec 04             	sub    $0x4,%esp
 819d0d0:	8b 45 08             	mov    0x8(%ebp),%eax
 819d0d3:	8d 50 08             	lea    0x8(%eax),%edx
 819d0d6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 819d0d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 819d0dd:	89 04 24             	mov    %eax,(%esp)
 819d0e0:	e8 d1 00 00 00       	call   819d1b6 <_ZNSt6vectorImSaImEE5beginEv>
 819d0e5:	83 ec 04             	sub    $0x4,%esp
 819d0e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819d0eb:	8d 55 0c             	lea    0xc(%ebp),%edx
 819d0ee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819d0f2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 819d0f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 819d0f9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819d0fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 819d100:	89 04 24             	mov    %eax,(%esp)
 819d103:	e8 f8 00 00 00       	call   819d200 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPmSt6vectorImSaImEEEEmET_S7_S7_RKT0_>
 819d108:	83 ec 04             	sub    $0x4,%esp
 819d10b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819d10e:	89 44 24 04          	mov    %eax,0x4(%esp)
 819d112:	8d 45 ec             	lea    -0x14(%ebp),%eax
 819d115:	89 04 24             	mov    %eax,(%esp)
 819d118:	e8 37 01 00 00       	call   819d254 <_ZN9__gnu_cxxneIPmSt6vectorImSaImEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 819d11d:	84 c0                	test   %al,%al
 819d11f:	74 07                	je     819d128 <_ZN4ARAD28Arad_StatisticsEventItemList14needStatisticsEm+0x8e>
 819d121:	b8 01 00 00 00       	mov    $0x1,%eax
 819d126:	eb 05                	jmp    819d12d <_ZN4ARAD28Arad_StatisticsEventItemList14needStatisticsEm+0x93>
 819d128:	b8 00 00 00 00       	mov    $0x0,%eax
 819d12d:	c9                   	leave
 819d12e:	c3                   	ret

```

```c
// ARAD::Arad_StatisticsEventItemList::needStatistics @ 0x819d09a

/* ARAD::Arad_StatisticsEventItemList::needStatistics(unsigned long) */

bool ARAD::Arad_StatisticsEventItemList::needStatistics(ulong param_1)

{
  bool bVar1;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  std::vector<unsigned_long,std::allocator<unsigned_long>>::end();
  std::vector<unsigned_long,std::allocator<unsigned_long>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<unsigned_long*,std::vector<unsigned_long,std::allocator<unsigned_long>>>,unsigned_long>
            (local_18,local_10,local_14,&stack0x00000008);
  bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
  return bVar1;
}

```

---

## ~Arad_StatisticsEventItemList

```asm
// === 0819ccac ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList  [0x0819ccac-0x819cd0d] ===
 819ccac:	55                   	push   %ebp
 819ccad:	89 e5                	mov    %esp,%ebp
 819ccaf:	56                   	push   %esi
 819ccb0:	53                   	push   %ebx
 819ccb1:	83 ec 10             	sub    $0x10,%esp
 819ccb4:	8b 45 08             	mov    0x8(%ebp),%eax
 819ccb7:	c7 00 80 5a ba 08    	movl   $0x8ba5a80,(%eax)
 819ccbd:	8b 45 08             	mov    0x8(%ebp),%eax
 819ccc0:	83 c0 08             	add    $0x8,%eax
 819ccc3:	89 04 24             	mov    %eax,(%esp)
 819ccc6:	e8 0b 87 f5 ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 819cccb:	eb 1b                	jmp    819cce8 <_ZN4ARAD28Arad_StatisticsEventItemListD1Ev+0x3c>
 819cccd:	89 d3                	mov    %edx,%ebx
 819cccf:	89 c6                	mov    %eax,%esi
 819ccd1:	8b 45 08             	mov    0x8(%ebp),%eax
 819ccd4:	89 04 24             	mov    %eax,(%esp)
 819ccd7:	e8 a6 8f ff ff       	call   8195c82 <_ZN4ARAD24Arad_InterfaceGameScriptD1Ev>
 819ccdc:	89 f0                	mov    %esi,%eax
 819ccde:	89 da                	mov    %ebx,%edx
 819cce0:	89 04 24             	mov    %eax,(%esp)
 819cce3:	e8 68 6a 94 00       	call   8ae3750 <_Unwind_Resume>
 819cce8:	8b 45 08             	mov    0x8(%ebp),%eax
 819cceb:	89 04 24             	mov    %eax,(%esp)
 819ccee:	e8 8f 8f ff ff       	call   8195c82 <_ZN4ARAD24Arad_InterfaceGameScriptD1Ev>
 819ccf3:	b8 00 00 00 00       	mov    $0x0,%eax
 819ccf8:	84 c0                	test   %al,%al
 819ccfa:	74 0b                	je     819cd07 <_ZN4ARAD28Arad_StatisticsEventItemListD1Ev+0x5b>
 819ccfc:	8b 45 08             	mov    0x8(%ebp),%eax
 819ccff:	89 04 24             	mov    %eax,(%esp)
 819cd02:	e8 e9 77 58 00       	call   87244f0 <_ZdlPv>
 819cd07:	83 c4 10             	add    $0x10,%esp
 819cd0a:	5b                   	pop    %ebx
 819cd0b:	5e                   	pop    %esi
 819cd0c:	5d                   	pop    %ebp
 819cd0d:	c3                   	ret

```

```c
// ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList @ 0x819ccac

/* WARNING: Removing unreachable block (ram,0x0819ccfc) */
/* ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList
          (Arad_StatisticsEventItemList *this)

{
  *(undefined ***)this = &PTR__Arad_StatisticsEventItemList_08ba5a80;
                    /* try { // try from 0819ccc6 to 0819ccca has its CatchHandler @ 0819cccd */
  std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector
            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 8));
  Arad_InterfaceGameScript::~Arad_InterfaceGameScript((Arad_InterfaceGameScript *)this);
  return;
}

```

---

## ~Arad_StatisticsEventItemList_0819cd0e

```asm
// === 0819cd0e ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList  [0x0819cd0e-0x819cd2b] ===
 819cd0e:	55                   	push   %ebp
 819cd0f:	89 e5                	mov    %esp,%ebp
 819cd11:	83 ec 18             	sub    $0x18,%esp
 819cd14:	8b 45 08             	mov    0x8(%ebp),%eax
 819cd17:	89 04 24             	mov    %eax,(%esp)
 819cd1a:	e8 8d ff ff ff       	call   819ccac <_ZN4ARAD28Arad_StatisticsEventItemListD1Ev>
 819cd1f:	8b 45 08             	mov    0x8(%ebp),%eax
 819cd22:	89 04 24             	mov    %eax,(%esp)
 819cd25:	e8 c6 77 58 00       	call   87244f0 <_ZdlPv>
 819cd2a:	c9                   	leave
 819cd2b:	c3                   	ret

```

```c
// ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList @ 0x819cd0e

/* ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList() */

void __thiscall
ARAD::Arad_StatisticsEventItemList::~Arad_StatisticsEventItemList
          (Arad_StatisticsEventItemList *this)

{
  ~Arad_StatisticsEventItemList(this);
  operator_delete(this);
  return;
}

```

