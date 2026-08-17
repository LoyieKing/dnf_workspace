# WongWork__IItemUpgrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## IItemUpgrade

```asm
// === 080fc834 WongWork::IItemUpgrade::IItemUpgrade  [0x080fc834-0x80fc841] ===
 80fc834:	55                   	push   %ebp
 80fc835:	89 e5                	mov    %esp,%ebp
 80fc837:	8b 45 08             	mov    0x8(%ebp),%eax
 80fc83a:	c7 00 38 fa b3 08    	movl   $0x8b3fa38,(%eax)
 80fc840:	5d                   	pop    %ebp
 80fc841:	c3                   	ret

```

```c
// WongWork::IItemUpgrade::IItemUpgrade @ 0x80fc834

/* WongWork::IItemUpgrade::IItemUpgrade() */

void __thiscall WongWork::IItemUpgrade::IItemUpgrade(IItemUpgrade *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08b3fa38;
  return;
}

```

---

## item_upgrade_system

```asm
// === 080fc850 WongWork::IItemUpgrade::item_upgrade_system  [0x080fc850-0x80fc927] ===
 80fc850:	55                   	push   %ebp
 80fc851:	89 e5                	mov    %esp,%ebp
 80fc853:	56                   	push   %esi
 80fc854:	53                   	push   %ebx
 80fc855:	83 ec 20             	sub    $0x20,%esp
 80fc858:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80fc85f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc862:	89 04 24             	mov    %eax,(%esp)
 80fc865:	e8 e2 14 49 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80fc86a:	8b 45 14             	mov    0x14(%ebp),%eax
 80fc86d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fc871:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80fc878:	00 
 80fc879:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc87c:	89 04 24             	mov    %eax,(%esp)
 80fc87f:	e8 78 f0 fc ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80fc884:	8b 45 08             	mov    0x8(%ebp),%eax
 80fc887:	8b 00                	mov    (%eax),%eax
 80fc889:	8b 10                	mov    (%eax),%edx
 80fc88b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc88e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80fc892:	8b 45 10             	mov    0x10(%ebp),%eax
 80fc895:	89 44 24 08          	mov    %eax,0x8(%esp)
 80fc899:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fc89c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fc8a0:	8b 45 08             	mov    0x8(%ebp),%eax
 80fc8a3:	89 04 24             	mov    %eax,(%esp)
 80fc8a6:	ff d2                	call   *%edx
 80fc8a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80fc8ab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80fc8af:	0f 94 c0             	sete   %al
 80fc8b2:	84 c0                	test   %al,%al
 80fc8b4:	74 27                	je     80fc8dd <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi+0x8d>
 80fc8b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80fc8bd:	00 
 80fc8be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc8c1:	89 04 24             	mov    %eax,(%esp)
 80fc8c4:	e8 8f f0 fc ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80fc8c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc8cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fc8d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fc8d3:	89 04 24             	mov    %eax,(%esp)
 80fc8d6:	e8 df bc 54 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80fc8db:	eb 39                	jmp    80fc916 <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi+0xc6>
 80fc8dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80fc8e0:	0f b7 d0             	movzwl %ax,%edx
 80fc8e3:	8b 45 14             	mov    0x14(%ebp),%eax
 80fc8e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 80fc8ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 80fc8ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 80fc8f1:	89 04 24             	mov    %eax,(%esp)
 80fc8f4:	e8 17 f8 57 00       	call   867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>
 80fc8f9:	eb 1b                	jmp    80fc916 <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi+0xc6>
 80fc8fb:	89 d3                	mov    %edx,%ebx
 80fc8fd:	89 c6                	mov    %eax,%esi
 80fc8ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc902:	89 04 24             	mov    %eax,(%esp)
 80fc905:	e8 76 15 49 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80fc90a:	89 f0                	mov    %esi,%eax
 80fc90c:	89 da                	mov    %ebx,%edx
 80fc90e:	89 04 24             	mov    %eax,(%esp)
 80fc911:	e8 3a 6e 9e 00       	call   8ae3750 <_Unwind_Resume>
 80fc916:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80fc919:	89 04 24             	mov    %eax,(%esp)
 80fc91c:	e8 5f 15 49 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80fc921:	83 c4 20             	add    $0x20,%esp
 80fc924:	5b                   	pop    %ebx
 80fc925:	5e                   	pop    %esi
 80fc926:	5d                   	pop    %ebp
 80fc927:	c3                   	ret

```

```c
// WongWork::IItemUpgrade::item_upgrade_system @ 0x80fc850

/* WongWork::IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, int) */

void __thiscall
WongWork::IItemUpgrade::item_upgrade_system
          (IItemUpgrade *this,CUser *param_1,MSG_ITEM_UPGRADE *param_2,int param_3)

{
  PacketGuard local_1c [12];
  uint local_10;
  
  local_10 = 0;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080fc87f to 080fc8f8 has its CatchHandler @ 080fc8fb */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,param_3);
  local_10 = (*(code *)**(undefined4 **)this)(this,param_1,param_2,local_1c);
  if (local_10 == 0) {
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  else {
    CUser::SendCmdErrorPacket2Byte(param_1,param_3,local_10 & 0xffff);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## ~IItemUpgrade

```asm
// === 080fc842 WongWork::IItemUpgrade::~IItemUpgrade  [0x080fc842-0x80fc84f] ===
 80fc842:	55                   	push   %ebp
 80fc843:	89 e5                	mov    %esp,%ebp
 80fc845:	8b 45 08             	mov    0x8(%ebp),%eax
 80fc848:	c7 00 38 fa b3 08    	movl   $0x8b3fa38,(%eax)
 80fc84e:	5d                   	pop    %ebp
 80fc84f:	c3                   	ret

```

```c
// WongWork::IItemUpgrade::~IItemUpgrade @ 0x80fc842

/* WongWork::IItemUpgrade::~IItemUpgrade() */

void __thiscall WongWork::IItemUpgrade::~IItemUpgrade(IItemUpgrade *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08b3fa38;
  return;
}

```

