# Village

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## GetUserCount

```asm
// === 086c3d10 Village::GetUserCount  [0x086c3d10-0x86c3d49] ===
 86c3d10:	55                   	push   %ebp
 86c3d11:	89 e5                	mov    %esp,%ebp
 86c3d13:	83 ec 18             	sub    $0x18,%esp
 86c3d16:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86c3d1a:	78 0b                	js     86c3d27 <_ZNK7Village12GetUserCountEi+0x17>
 86c3d1c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3d1f:	8b 40 24             	mov    0x24(%eax),%eax
 86c3d22:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c3d25:	7f 07                	jg     86c3d2e <_ZNK7Village12GetUserCountEi+0x1e>
 86c3d27:	b8 00 00 00 00       	mov    $0x0,%eax
 86c3d2c:	eb 1a                	jmp    86c3d48 <_ZNK7Village12GetUserCountEi+0x38>
 86c3d2e:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3d31:	8b 50 28             	mov    0x28(%eax),%edx
 86c3d34:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3d37:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3d3d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86c3d40:	89 04 24             	mov    %eax,(%esp)
 86c3d43:	e8 aa f4 ff ff       	call   86c31f2 <_ZNK4Area12GetUserCountEv>
 86c3d48:	c9                   	leave
 86c3d49:	c3                   	ret

```

```c
// Village::GetUserCount @ 0x86c3d10

/* Village::GetUserCount(int) const */

undefined4 __thiscall Village::GetUserCount(Village *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = Area::GetUserCount();
  }
  return uVar1;
}

```

---

## Village

```asm
// === 086c32e0 Village::Village  [0x086c32e0-0x86c32ff] ===
 86c32e0:	55                   	push   %ebp
 86c32e1:	89 e5                	mov    %esp,%ebp
 86c32e3:	83 ec 18             	sub    $0x18,%esp
 86c32e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86c32e9:	83 c0 08             	add    $0x8,%eax
 86c32ec:	89 04 24             	mov    %eax,(%esp)
 86c32ef:	e8 14 fb 00 00       	call   86d2e08 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEEC1Ev>
 86c32f4:	8b 45 08             	mov    0x8(%ebp),%eax
 86c32f7:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 86c32fe:	c9                   	leave
 86c32ff:	c3                   	ret

```

```c
// Village::Village @ 0x86c32e0

/* Village::Village() */

void __thiscall Village::Village(Village *this)

{
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::map((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
         *)(this + 8));
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

```

---

## destroy

```asm
// === 086c3348 Village::destroy  [0x086c3348-0x86c33b7] ===
 86c3348:	55                   	push   %ebp
 86c3349:	89 e5                	mov    %esp,%ebp
 86c334b:	53                   	push   %ebx
 86c334c:	83 ec 14             	sub    $0x14,%esp
 86c334f:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3352:	8b 40 28             	mov    0x28(%eax),%eax
 86c3355:	85 c0                	test   %eax,%eax
 86c3357:	74 59                	je     86c33b2 <_ZN7Village7destroyEv+0x6a>
 86c3359:	8b 45 08             	mov    0x8(%ebp),%eax
 86c335c:	8b 40 28             	mov    0x28(%eax),%eax
 86c335f:	85 c0                	test   %eax,%eax
 86c3361:	74 45                	je     86c33a8 <_ZN7Village7destroyEv+0x60>
 86c3363:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3366:	8b 50 28             	mov    0x28(%eax),%edx
 86c3369:	8b 45 08             	mov    0x8(%ebp),%eax
 86c336c:	8b 40 28             	mov    0x28(%eax),%eax
 86c336f:	83 e8 04             	sub    $0x4,%eax
 86c3372:	8b 00                	mov    (%eax),%eax
 86c3374:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c337a:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 86c337d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3380:	8b 40 28             	mov    0x28(%eax),%eax
 86c3383:	39 c3                	cmp    %eax,%ebx
 86c3385:	74 10                	je     86c3397 <_ZN7Village7destroyEv+0x4f>
 86c3387:	81 eb 98 00 00 00    	sub    $0x98,%ebx
 86c338d:	89 1c 24             	mov    %ebx,(%esp)
 86c3390:	e8 db ee 00 00       	call   86d2270 <_ZN4AreaD1Ev>
 86c3395:	eb e6                	jmp    86c337d <_ZN7Village7destroyEv+0x35>
 86c3397:	8b 45 08             	mov    0x8(%ebp),%eax
 86c339a:	8b 40 28             	mov    0x28(%eax),%eax
 86c339d:	83 e8 04             	sub    $0x4,%eax
 86c33a0:	89 04 24             	mov    %eax,(%esp)
 86c33a3:	e8 08 18 06 00       	call   8724bb0 <_ZdaPv>
 86c33a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86c33ab:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 86c33b2:	83 c4 14             	add    $0x14,%esp
 86c33b5:	5b                   	pop    %ebx
 86c33b6:	5d                   	pop    %ebp
 86c33b7:	c3                   	ret

```

```c
// Village::destroy @ 0x86c3348

/* Village::destroy() */

void __thiscall Village::destroy(Village *this)

{
  Area *this_00;
  
  if (*(int *)(this + 0x28) != 0) {
    if (*(int *)(this + 0x28) != 0) {
      this_00 = (Area *)(*(int *)(this + 0x28) + *(int *)(*(int *)(this + 0x28) + -4) * 0x98);
      while (this_00 != *(Area **)(this + 0x28)) {
        this_00 = this_00 + -0x98;
        Area::~Area(this_00);
      }
      operator_delete__((void *)(*(int *)(this + 0x28) + -4));
    }
    *(undefined4 *)(this + 0x28) = 0;
  }
  return;
}

```

---

## getArea

```asm
// === 086c3ba2 Village::getArea  [0x086c3ba2-0x86c3c1f] ===
 86c3ba2:	55                   	push   %ebp
 86c3ba3:	89 e5                	mov    %esp,%ebp
 86c3ba5:	53                   	push   %ebx
 86c3ba6:	83 ec 24             	sub    $0x24,%esp
 86c3ba9:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86c3bad:	78 0b                	js     86c3bba <_ZN7Village7getAreaEi+0x18>
 86c3baf:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3bb2:	8b 40 24             	mov    0x24(%eax),%eax
 86c3bb5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c3bb8:	7f 4e                	jg     86c3c08 <_ZN7Village7getAreaEi+0x66>
 86c3bba:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3bbd:	8b 58 24             	mov    0x24(%eax),%ebx
 86c3bc0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86c3bc7:	00 
 86c3bc8:	c7 44 24 08 56 03 00 	movl   $0x356,0x8(%esp)
 86c3bcf:	00 
 86c3bd0:	c7 44 24 04 ae d7 cf 	movl   $0x8cfd7ae,0x4(%esp)
 86c3bd7:	08 
 86c3bd8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c3bdb:	89 04 24             	mov    %eax,(%esp)
 86c3bde:	e8 35 bb e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86c3be3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86c3be7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3bea:	89 44 24 08          	mov    %eax,0x8(%esp)
 86c3bee:	c7 44 24 04 f8 b4 cf 	movl   $0x8cfb4f8,0x4(%esp)
 86c3bf5:	08 
 86c3bf6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86c3bf9:	89 04 24             	mov    %eax,(%esp)
 86c3bfc:	e8 87 bb e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86c3c01:	b8 00 00 00 00       	mov    $0x0,%eax
 86c3c06:	eb 12                	jmp    86c3c1a <_ZN7Village7getAreaEi+0x78>
 86c3c08:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3c0b:	8b 50 28             	mov    0x28(%eax),%edx
 86c3c0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3c11:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3c17:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86c3c1a:	83 c4 24             	add    $0x24,%esp
 86c3c1d:	5b                   	pop    %ebx
 86c3c1e:	5d                   	pop    %ebp
 86c3c1f:	c3                   	ret

```

```c
// Village::getArea @ 0x86c3ba2

/* Village::getArea(int) */

int __thiscall Village::getArea(Village *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_1c [20];
  
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    uVar1 = *(undefined4 *)(this + 0x24);
    cMyTrace::cMyTrace(local_1c,"Area* Village::getArea(int)",0x356,5);
    cMyTrace::operator()(local_1c,"area(%d) < 0 || area >= m_iAreaCount(%d)",param_1,uVar1);
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x28) + param_1 * 0x98;
  }
  return iVar2;
}

```

---

## get_gate_area

```asm
// === 086c3b58 Village::get_gate_area  [0x086c3b58-0x86c3ba1] ===
 86c3b58:	55                   	push   %ebp
 86c3b59:	89 e5                	mov    %esp,%ebp
 86c3b5b:	83 ec 10             	sub    $0x10,%esp
 86c3b5e:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86c3b65:	eb 23                	jmp    86c3b8a <_ZN7Village13get_gate_areaEv+0x32>
 86c3b67:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3b6a:	8b 50 28             	mov    0x28(%eax),%edx
 86c3b6d:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86c3b70:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3b76:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86c3b79:	8b 40 68             	mov    0x68(%eax),%eax
 86c3b7c:	83 f8 01             	cmp    $0x1,%eax
 86c3b7f:	75 05                	jne    86c3b86 <_ZN7Village13get_gate_areaEv+0x2e>
 86c3b81:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86c3b84:	eb 19                	jmp    86c3b9f <_ZN7Village13get_gate_areaEv+0x47>
 86c3b86:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86c3b8a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3b8d:	8b 40 24             	mov    0x24(%eax),%eax
 86c3b90:	3b 45 fc             	cmp    -0x4(%ebp),%eax
 86c3b93:	0f 9f c0             	setg   %al
 86c3b96:	84 c0                	test   %al,%al
 86c3b98:	75 cd                	jne    86c3b67 <_ZN7Village13get_gate_areaEv+0xf>
 86c3b9a:	b8 01 00 00 00       	mov    $0x1,%eax
 86c3b9f:	c9                   	leave
 86c3ba0:	c3                   	ret
 86c3ba1:	90                   	nop

```

```c
// Village::get_gate_area @ 0x86c3b58

/* Village::get_gate_area() */

int __thiscall Village::get_gate_area(Village *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(this + 0x24) <= local_8) {
      return 1;
    }
    if (*(int *)(*(int *)(this + 0x28) + local_8 * 0x98 + 0x68) == 1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

```

---

## get_user_id_list

```asm
// === 086c3c98 Village::get_user_id_list  [0x086c3c98-0x86c3d0f] ===
 86c3c98:	55                   	push   %ebp
 86c3c99:	89 e5                	mov    %esp,%ebp
 86c3c9b:	83 ec 28             	sub    $0x28,%esp
 86c3c9e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86c3ca2:	78 0b                	js     86c3caf <_ZN7Village16get_user_id_listEiRSt6vectorItSaItEE+0x17>
 86c3ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3ca7:	8b 40 24             	mov    0x24(%eax),%eax
 86c3caa:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c3cad:	7f 3f                	jg     86c3cee <_ZN7Village16get_user_id_listEiRSt6vectorItSaItEE+0x56>
 86c3caf:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3cb2:	8b 40 24             	mov    0x24(%eax),%eax
 86c3cb5:	89 44 24 18          	mov    %eax,0x18(%esp)
 86c3cb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3cbc:	89 44 24 14          	mov    %eax,0x14(%esp)
 86c3cc0:	c7 44 24 10 f8 b4 cf 	movl   $0x8cfb4f8,0x10(%esp)
 86c3cc7:	08 
 86c3cc8:	c7 44 24 0c 6a 03 00 	movl   $0x36a,0xc(%esp)
 86c3ccf:	00 
 86c3cd0:	c7 44 24 08 00 d7 cf 	movl   $0x8cfd700,0x8(%esp)
 86c3cd7:	08 
 86c3cd8:	c7 44 24 04 85 b4 cf 	movl   $0x8cfb485,0x4(%esp)
 86c3cdf:	08 
 86c3ce0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86c3ce7:	e8 1e ff 40 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86c3cec:	eb 20                	jmp    86c3d0e <_ZN7Village16get_user_id_listEiRSt6vectorItSaItEE+0x76>
 86c3cee:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3cf1:	8b 50 28             	mov    0x28(%eax),%edx
 86c3cf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3cf7:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3cfd:	01 c2                	add    %eax,%edx
 86c3cff:	8b 45 10             	mov    0x10(%ebp),%eax
 86c3d02:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3d06:	89 14 24             	mov    %edx,(%esp)
 86c3d09:	e8 50 f3 ff ff       	call   86c305e <_ZN4Area16get_user_id_listERSt6vectorItSaItEE>
 86c3d0e:	c9                   	leave
 86c3d0f:	c3                   	ret

```

```c
// Village::get_user_id_list @ 0x86c3c98

/* Village::get_user_id_list(int, std::vector<unsigned short, std::allocator<unsigned short> >&) */

void __thiscall Village::get_user_id_list(Village *this,int param_1,vector *param_2)

{
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    LogManager::logFormat
              (1,"world.cpp",
               "void Village::get_user_id_list(int, std::vector<short unsigned int, std::allocator<short unsigned int> >&)"
               ,0x36a,"area(%d) < 0 || area >= m_iAreaCount(%d)",param_1,
               *(undefined4 *)(this + 0x24));
  }
  else {
    Area::get_user_id_list((Area *)(*(int *)(this + 0x28) + param_1 * 0x98),param_2);
  }
  return;
}

```

---

## send_to_area

```asm
// === 086c3c20 Village::send_to_area  [0x086c3c20-0x86c3c97] ===
 86c3c20:	55                   	push   %ebp
 86c3c21:	89 e5                	mov    %esp,%ebp
 86c3c23:	83 ec 28             	sub    $0x28,%esp
 86c3c26:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86c3c2a:	78 0b                	js     86c3c37 <_ZN7Village12send_to_areaEiR11PacketGuard+0x17>
 86c3c2c:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3c2f:	8b 40 24             	mov    0x24(%eax),%eax
 86c3c32:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86c3c35:	7f 3f                	jg     86c3c76 <_ZN7Village12send_to_areaEiR11PacketGuard+0x56>
 86c3c37:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3c3a:	8b 40 24             	mov    0x24(%eax),%eax
 86c3c3d:	89 44 24 18          	mov    %eax,0x18(%esp)
 86c3c41:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3c44:	89 44 24 14          	mov    %eax,0x14(%esp)
 86c3c48:	c7 44 24 10 f8 b4 cf 	movl   $0x8cfb4f8,0x10(%esp)
 86c3c4f:	08 
 86c3c50:	c7 44 24 0c 60 03 00 	movl   $0x360,0xc(%esp)
 86c3c57:	00 
 86c3c58:	c7 44 24 08 80 d7 cf 	movl   $0x8cfd780,0x8(%esp)
 86c3c5f:	08 
 86c3c60:	c7 44 24 04 85 b4 cf 	movl   $0x8cfb485,0x4(%esp)
 86c3c67:	08 
 86c3c68:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86c3c6f:	e8 96 ff 40 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86c3c74:	eb 20                	jmp    86c3c96 <_ZN7Village12send_to_areaEiR11PacketGuard+0x76>
 86c3c76:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3c79:	8b 50 28             	mov    0x28(%eax),%edx
 86c3c7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3c7f:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3c85:	01 c2                	add    %eax,%edx
 86c3c87:	8b 45 10             	mov    0x10(%ebp),%eax
 86c3c8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3c8e:	89 14 24             	mov    %edx,(%esp)
 86c3c91:	e8 94 f0 ff ff       	call   86c2d2a <_ZN4Area11send_to_allER11PacketGuard>
 86c3c96:	c9                   	leave
 86c3c97:	c3                   	ret

```

```c
// Village::send_to_area @ 0x86c3c20

/* Village::send_to_area(int, PacketGuard&) */

void __thiscall Village::send_to_area(Village *this,int param_1,PacketGuard *param_2)

{
  if ((param_1 < 0) || (*(int *)(this + 0x24) <= param_1)) {
    LogManager::logFormat
              (1,"world.cpp","void Village::send_to_area(int, PacketGuard&)",0x360,
               "area(%d) < 0 || area >= m_iAreaCount(%d)",param_1,*(undefined4 *)(this + 0x24));
  }
  else {
    Area::send_to_all((Area *)(*(int *)(this + 0x28) + param_1 * 0x98),param_2);
  }
  return;
}

```

---

## set_village

```asm
// === 086c33b8 Village::set_village  [0x086c33b8-0x86c3b57] ===
 86c33b8:	55                   	push   %ebp
 86c33b9:	89 e5                	mov    %esp,%ebp
 86c33bb:	57                   	push   %edi
 86c33bc:	56                   	push   %esi
 86c33bd:	53                   	push   %ebx
 86c33be:	81 ec 6c 04 00 00    	sub    $0x46c,%esp
 86c33c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c33c7:	8b 10                	mov    (%eax),%edx
 86c33c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86c33cc:	89 10                	mov    %edx,(%eax)
 86c33ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c33d1:	8b 40 18             	mov    0x18(%eax),%eax
 86c33d4:	83 f8 ff             	cmp    $0xffffffff,%eax
 86c33d7:	75 09                	jne    86c33e2 <_ZN7Village11set_villageER10TownScript+0x2a>
 86c33d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86c33dc:	c6 40 20 00          	movb   $0x0,0x20(%eax)
 86c33e0:	eb 32                	jmp    86c3414 <_ZN7Village11set_villageER10TownScript+0x5c>
 86c33e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86c33e5:	c6 40 20 01          	movb   $0x1,0x20(%eax)
 86c33e9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86c33ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c33ef:	8b 70 18             	mov    0x18(%eax),%esi
 86c33f2:	e8 a4 8d a0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86c33f7:	89 74 24 04          	mov    %esi,0x4(%esp)
 86c33fb:	89 04 24             	mov    %eax,(%esp)
 86c33fe:	e8 c5 e4 00 00       	call   86d18c8 <_ZN12CDataManager11get_dungeonEi>
 86c3403:	05 d4 06 00 00       	add    $0x6d4,%eax
 86c3408:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86c340c:	89 04 24             	mov    %eax,(%esp)
 86c340f:	e8 12 dd a4 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 86c3414:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3417:	83 c0 20             	add    $0x20,%eax
 86c341a:	89 04 24             	mov    %eax,(%esp)
 86c341d:	e8 6e 05 01 00       	call   86d3990 <_ZNKSt3mapIi14TownAreaScriptSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 86c3422:	89 c2                	mov    %eax,%edx
 86c3424:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3427:	89 50 24             	mov    %edx,0x24(%eax)
 86c342a:	8b 45 08             	mov    0x8(%ebp),%eax
 86c342d:	8b 40 24             	mov    0x24(%eax),%eax
 86c3430:	85 c0                	test   %eax,%eax
 86c3432:	75 38                	jne    86c346c <_ZN7Village11set_villageER10TownScript+0xb4>
 86c3434:	c7 44 24 10 bc b4 cf 	movl   $0x8cfb4bc,0x10(%esp)
 86c343b:	08 
 86c343c:	c7 44 24 0c d0 02 00 	movl   $0x2d0,0xc(%esp)
 86c3443:	00 
 86c3444:	c7 44 24 08 e0 d7 cf 	movl   $0x8cfd7e0,0x8(%esp)
 86c344b:	08 
 86c344c:	c7 44 24 04 85 b4 cf 	movl   $0x8cfb485,0x4(%esp)
 86c3453:	08 
 86c3454:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86c345b:	e8 aa 07 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86c3460:	c6 85 b7 fb ff ff 00 	movb   $0x0,-0x449(%ebp)
 86c3467:	e9 da 06 00 00       	jmp    86c3b46 <_ZN7Village11set_villageER10TownScript+0x78e>
 86c346c:	e8 36 6f a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86c3471:	89 04 24             	mov    %eax,(%esp)
 86c3474:	e8 d5 a7 d8 ff       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 86c3479:	84 c0                	test   %al,%al
 86c347b:	74 11                	je     86c348e <_ZN7Village11set_villageER10TownScript+0xd6>
 86c347d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3480:	8b 00                	mov    (%eax),%eax
 86c3482:	83 f8 02             	cmp    $0x2,%eax
 86c3485:	75 07                	jne    86c348e <_ZN7Village11set_villageER10TownScript+0xd6>
 86c3487:	b8 01 00 00 00       	mov    $0x1,%eax
 86c348c:	eb 05                	jmp    86c3493 <_ZN7Village11set_villageER10TownScript+0xdb>
 86c348e:	b8 00 00 00 00       	mov    $0x0,%eax
 86c3493:	84 c0                	test   %al,%al
 86c3495:	0f 84 f9 00 00 00    	je     86c3594 <_ZN7Village11set_villageER10TownScript+0x1dc>
 86c349b:	8b 45 08             	mov    0x8(%ebp),%eax
 86c349e:	8b 40 24             	mov    0x24(%eax),%eax
 86c34a1:	05 58 02 00 00       	add    $0x258,%eax
 86c34a6:	89 c3                	mov    %eax,%ebx
 86c34a8:	6b c3 26             	imul   $0x26,%ebx,%eax
 86c34ab:	83 c0 01             	add    $0x1,%eax
 86c34ae:	c1 e0 02             	shl    $0x2,%eax
 86c34b1:	89 04 24             	mov    %eax,(%esp)
 86c34b4:	e8 07 f9 05 00       	call   8722dc0 <_Znaj>
 86c34b9:	89 c6                	mov    %eax,%esi
 86c34bb:	89 f0                	mov    %esi,%eax
 86c34bd:	89 18                	mov    %ebx,(%eax)
 86c34bf:	89 f0                	mov    %esi,%eax
 86c34c1:	8d 78 04             	lea    0x4(%eax),%edi
 86c34c4:	89 bd b8 fb ff ff    	mov    %edi,-0x448(%ebp)
 86c34ca:	8d 43 ff             	lea    -0x1(%ebx),%eax
 86c34cd:	89 85 bc fb ff ff    	mov    %eax,-0x444(%ebp)
 86c34d3:	eb 1f                	jmp    86c34f4 <_ZN7Village11set_villageER10TownScript+0x13c>
 86c34d5:	8b 85 b8 fb ff ff    	mov    -0x448(%ebp),%eax
 86c34db:	89 04 24             	mov    %eax,(%esp)
 86c34de:	e8 69 ec 00 00       	call   86d214c <_ZN4AreaC1Ev>
 86c34e3:	81 85 b8 fb ff ff 98 	addl   $0x98,-0x448(%ebp)
 86c34ea:	00 00 00 
 86c34ed:	83 ad bc fb ff ff 01 	subl   $0x1,-0x444(%ebp)
 86c34f4:	83 bd bc fb ff ff ff 	cmpl   $0xffffffff,-0x444(%ebp)
 86c34fb:	0f 95 c0             	setne  %al
 86c34fe:	84 c0                	test   %al,%al
 86c3500:	75 d3                	jne    86c34d5 <_ZN7Village11set_villageER10TownScript+0x11d>
 86c3502:	eb 5a                	jmp    86c355e <_ZN7Village11set_villageER10TownScript+0x1a6>
 86c3504:	89 95 d4 fb ff ff    	mov    %edx,-0x42c(%ebp)
 86c350a:	89 85 d0 fb ff ff    	mov    %eax,-0x430(%ebp)
 86c3510:	85 ff                	test   %edi,%edi
 86c3512:	74 26                	je     86c353a <_ZN7Village11set_villageER10TownScript+0x182>
 86c3514:	8d 43 ff             	lea    -0x1(%ebx),%eax
 86c3517:	2b 85 bc fb ff ff    	sub    -0x444(%ebp),%eax
 86c351d:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3523:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
 86c3526:	39 fb                	cmp    %edi,%ebx
 86c3528:	74 10                	je     86c353a <_ZN7Village11set_villageER10TownScript+0x182>
 86c352a:	81 eb 98 00 00 00    	sub    $0x98,%ebx
 86c3530:	89 1c 24             	mov    %ebx,(%esp)
 86c3533:	e8 38 ed 00 00       	call   86d2270 <_ZN4AreaD1Ev>
 86c3538:	eb ec                	jmp    86c3526 <_ZN7Village11set_villageER10TownScript+0x16e>
 86c353a:	8b 85 d0 fb ff ff    	mov    -0x430(%ebp),%eax
 86c3540:	8b 95 d4 fb ff ff    	mov    -0x42c(%ebp),%edx
 86c3546:	89 d3                	mov    %edx,%ebx
 86c3548:	89 c7                	mov    %eax,%edi
 86c354a:	89 34 24             	mov    %esi,(%esp)
 86c354d:	e8 5e 16 06 00       	call   8724bb0 <_ZdaPv>
 86c3552:	89 f8                	mov    %edi,%eax
 86c3554:	89 da                	mov    %ebx,%edx
 86c3556:	89 04 24             	mov    %eax,(%esp)
 86c3559:	e8 f2 01 42 00       	call   8ae3750 <_Unwind_Resume>
 86c355e:	89 f0                	mov    %esi,%eax
 86c3560:	8d 50 04             	lea    0x4(%eax),%edx
 86c3563:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3566:	89 50 28             	mov    %edx,0x28(%eax)
 86c3569:	8b 45 08             	mov    0x8(%ebp),%eax
 86c356c:	8b 40 24             	mov    0x24(%eax),%eax
 86c356f:	8d 90 58 02 00 00    	lea    0x258(%eax),%edx
 86c3575:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3578:	8b 40 24             	mov    0x24(%eax),%eax
 86c357b:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c357f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3583:	c7 04 24 80 e0 43 09 	movl   $0x943e080,(%esp)
 86c358a:	e8 cd ee 00 00       	call   86d245c <_ZN10CSchoolMgr13SetSchoolAreaEii>
 86c358f:	e9 cb 01 00 00       	jmp    86c375f <_ZN7Village11set_villageER10TownScript+0x3a7>
 86c3594:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3597:	8b 00                	mov    (%eax),%eax
 86c3599:	83 f8 08             	cmp    $0x8,%eax
 86c359c:	0f 85 f4 00 00 00    	jne    86c3696 <_ZN7Village11set_villageER10TownScript+0x2de>
 86c35a2:	8b 45 08             	mov    0x8(%ebp),%eax
 86c35a5:	8b 40 24             	mov    0x24(%eax),%eax
 86c35a8:	05 60 09 00 00       	add    $0x960,%eax
 86c35ad:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86c35b0:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 86c35b3:	6b c3 26             	imul   $0x26,%ebx,%eax
 86c35b6:	83 c0 01             	add    $0x1,%eax
 86c35b9:	c1 e0 02             	shl    $0x2,%eax
 86c35bc:	89 04 24             	mov    %eax,(%esp)
 86c35bf:	e8 fc f7 05 00       	call   8722dc0 <_Znaj>
 86c35c4:	89 c6                	mov    %eax,%esi
 86c35c6:	89 f0                	mov    %esi,%eax
 86c35c8:	89 18                	mov    %ebx,(%eax)
 86c35ca:	89 f0                	mov    %esi,%eax
 86c35cc:	8d 78 04             	lea    0x4(%eax),%edi
 86c35cf:	89 bd c0 fb ff ff    	mov    %edi,-0x440(%ebp)
 86c35d5:	8d 43 ff             	lea    -0x1(%ebx),%eax
 86c35d8:	89 85 c4 fb ff ff    	mov    %eax,-0x43c(%ebp)
 86c35de:	eb 1f                	jmp    86c35ff <_ZN7Village11set_villageER10TownScript+0x247>
 86c35e0:	8b 85 c0 fb ff ff    	mov    -0x440(%ebp),%eax
 86c35e6:	89 04 24             	mov    %eax,(%esp)
 86c35e9:	e8 5e eb 00 00       	call   86d214c <_ZN4AreaC1Ev>
 86c35ee:	81 85 c0 fb ff ff 98 	addl   $0x98,-0x440(%ebp)
 86c35f5:	00 00 00 
 86c35f8:	83 ad c4 fb ff ff 01 	subl   $0x1,-0x43c(%ebp)
 86c35ff:	83 bd c4 fb ff ff ff 	cmpl   $0xffffffff,-0x43c(%ebp)
 86c3606:	0f 95 c0             	setne  %al
 86c3609:	84 c0                	test   %al,%al
 86c360b:	75 d3                	jne    86c35e0 <_ZN7Village11set_villageER10TownScript+0x228>
 86c360d:	eb 5a                	jmp    86c3669 <_ZN7Village11set_villageER10TownScript+0x2b1>
 86c360f:	89 95 dc fb ff ff    	mov    %edx,-0x424(%ebp)
 86c3615:	89 85 d8 fb ff ff    	mov    %eax,-0x428(%ebp)
 86c361b:	85 ff                	test   %edi,%edi
 86c361d:	74 26                	je     86c3645 <_ZN7Village11set_villageER10TownScript+0x28d>
 86c361f:	8d 43 ff             	lea    -0x1(%ebx),%eax
 86c3622:	2b 85 c4 fb ff ff    	sub    -0x43c(%ebp),%eax
 86c3628:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c362e:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
 86c3631:	39 fb                	cmp    %edi,%ebx
 86c3633:	74 10                	je     86c3645 <_ZN7Village11set_villageER10TownScript+0x28d>
 86c3635:	81 eb 98 00 00 00    	sub    $0x98,%ebx
 86c363b:	89 1c 24             	mov    %ebx,(%esp)
 86c363e:	e8 2d ec 00 00       	call   86d2270 <_ZN4AreaD1Ev>
 86c3643:	eb ec                	jmp    86c3631 <_ZN7Village11set_villageER10TownScript+0x279>
 86c3645:	8b 85 d8 fb ff ff    	mov    -0x428(%ebp),%eax
 86c364b:	8b 95 dc fb ff ff    	mov    -0x424(%ebp),%edx
 86c3651:	89 d3                	mov    %edx,%ebx
 86c3653:	89 c7                	mov    %eax,%edi
 86c3655:	89 34 24             	mov    %esi,(%esp)
 86c3658:	e8 53 15 06 00       	call   8724bb0 <_ZdaPv>
 86c365d:	89 f8                	mov    %edi,%eax
 86c365f:	89 da                	mov    %ebx,%edx
 86c3661:	89 04 24             	mov    %eax,(%esp)
 86c3664:	e8 e7 00 42 00       	call   8ae3750 <_Unwind_Resume>
 86c3669:	89 f0                	mov    %esi,%eax
 86c366b:	8d 50 04             	lea    0x4(%eax),%edx
 86c366e:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3671:	89 50 28             	mov    %edx,0x28(%eax)
 86c3674:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3677:	8b 40 24             	mov    0x24(%eax),%eax
 86c367a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86c367d:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c3681:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3685:	c7 04 24 e0 e0 43 09 	movl   $0x943e0e0,(%esp)
 86c368c:	e8 b1 ef 00 00       	call   86d2642 <_ZN17CGuildAgitManager22SetGuildAgitAreaDomainEii>
 86c3691:	e9 c9 00 00 00       	jmp    86c375f <_ZN7Village11set_villageER10TownScript+0x3a7>
 86c3696:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3699:	8b 40 24             	mov    0x24(%eax),%eax
 86c369c:	89 c3                	mov    %eax,%ebx
 86c369e:	6b c3 26             	imul   $0x26,%ebx,%eax
 86c36a1:	83 c0 01             	add    $0x1,%eax
 86c36a4:	c1 e0 02             	shl    $0x2,%eax
 86c36a7:	89 04 24             	mov    %eax,(%esp)
 86c36aa:	e8 11 f7 05 00       	call   8722dc0 <_Znaj>
 86c36af:	89 c6                	mov    %eax,%esi
 86c36b1:	89 f0                	mov    %esi,%eax
 86c36b3:	89 18                	mov    %ebx,(%eax)
 86c36b5:	89 f0                	mov    %esi,%eax
 86c36b7:	8d 78 04             	lea    0x4(%eax),%edi
 86c36ba:	89 bd c8 fb ff ff    	mov    %edi,-0x438(%ebp)
 86c36c0:	8d 43 ff             	lea    -0x1(%ebx),%eax
 86c36c3:	89 85 cc fb ff ff    	mov    %eax,-0x434(%ebp)
 86c36c9:	eb 1f                	jmp    86c36ea <_ZN7Village11set_villageER10TownScript+0x332>
 86c36cb:	8b 85 c8 fb ff ff    	mov    -0x438(%ebp),%eax
 86c36d1:	89 04 24             	mov    %eax,(%esp)
 86c36d4:	e8 73 ea 00 00       	call   86d214c <_ZN4AreaC1Ev>
 86c36d9:	81 85 c8 fb ff ff 98 	addl   $0x98,-0x438(%ebp)
 86c36e0:	00 00 00 
 86c36e3:	83 ad cc fb ff ff 01 	subl   $0x1,-0x434(%ebp)
 86c36ea:	83 bd cc fb ff ff ff 	cmpl   $0xffffffff,-0x434(%ebp)
 86c36f1:	0f 95 c0             	setne  %al
 86c36f4:	84 c0                	test   %al,%al
 86c36f6:	75 d3                	jne    86c36cb <_ZN7Village11set_villageER10TownScript+0x313>
 86c36f8:	eb 5a                	jmp    86c3754 <_ZN7Village11set_villageER10TownScript+0x39c>
 86c36fa:	89 95 e4 fb ff ff    	mov    %edx,-0x41c(%ebp)
 86c3700:	89 85 e0 fb ff ff    	mov    %eax,-0x420(%ebp)
 86c3706:	85 ff                	test   %edi,%edi
 86c3708:	74 26                	je     86c3730 <_ZN7Village11set_villageER10TownScript+0x378>
 86c370a:	8d 43 ff             	lea    -0x1(%ebx),%eax
 86c370d:	2b 85 cc fb ff ff    	sub    -0x434(%ebp),%eax
 86c3713:	69 c0 98 00 00 00    	imul   $0x98,%eax,%eax
 86c3719:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
 86c371c:	39 fb                	cmp    %edi,%ebx
 86c371e:	74 10                	je     86c3730 <_ZN7Village11set_villageER10TownScript+0x378>
 86c3720:	81 eb 98 00 00 00    	sub    $0x98,%ebx
 86c3726:	89 1c 24             	mov    %ebx,(%esp)
 86c3729:	e8 42 eb 00 00       	call   86d2270 <_ZN4AreaD1Ev>
 86c372e:	eb ec                	jmp    86c371c <_ZN7Village11set_villageER10TownScript+0x364>
 86c3730:	8b 85 e0 fb ff ff    	mov    -0x420(%ebp),%eax
 86c3736:	8b 95 e4 fb ff ff    	mov    -0x41c(%ebp),%edx
 86c373c:	89 d3                	mov    %edx,%ebx
 86c373e:	89 c7                	mov    %eax,%edi
 86c3740:	89 34 24             	mov    %esi,(%esp)
 86c3743:	e8 68 14 06 00       	call   8724bb0 <_ZdaPv>
 86c3748:	89 f8                	mov    %edi,%eax
 86c374a:	89 da                	mov    %ebx,%edx
 86c374c:	89 04 24             	mov    %eax,(%esp)
 86c374f:	e8 fc ff 41 00       	call   8ae3750 <_Unwind_Resume>
 86c3754:	89 f0                	mov    %esi,%eax
 86c3756:	8d 50 04             	lea    0x4(%eax),%edx
 86c3759:	8b 45 08             	mov    0x8(%ebp),%eax
 86c375c:	89 50 28             	mov    %edx,0x28(%eax)
 86c375f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3762:	8b 50 3c             	mov    0x3c(%eax),%edx
 86c3765:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3768:	89 50 2c             	mov    %edx,0x2c(%eax)
 86c376b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c376e:	8b 50 40             	mov    0x40(%eax),%edx
 86c3771:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3774:	89 50 30             	mov    %edx,0x30(%eax)
 86c3777:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c377d:	89 04 24             	mov    %eax,(%esp)
 86c3780:	e8 15 e6 00 00       	call   86d1d9a <_ZN14TownAreaScriptC1Ev>
 86c3785:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3788:	8d 50 20             	lea    0x20(%eax),%edx
 86c378b:	8d 45 90             	lea    -0x70(%ebp),%eax
 86c378e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3792:	89 04 24             	mov    %eax,(%esp)
 86c3795:	e8 0a 02 01 00       	call   86d39a4 <_ZNSt3mapIi14TownAreaScriptSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 86c379a:	83 ec 04             	sub    $0x4,%esp
 86c379d:	e9 3d 03 00 00       	jmp    86c3adf <_ZN7Village11set_villageER10TownScript+0x727>
 86c37a2:	8d 45 90             	lea    -0x70(%ebp),%eax
 86c37a5:	89 04 24             	mov    %eax,(%esp)
 86c37a8:	e8 57 02 01 00       	call   86d3a04 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14TownAreaScriptEEptEv>
 86c37ad:	83 c0 04             	add    $0x4,%eax
 86c37b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c37b4:	8d 45 98             	lea    -0x68(%ebp),%eax
 86c37b7:	89 04 24             	mov    %eax,(%esp)
 86c37ba:	e8 ab f1 00 00       	call   86d296a <_ZN14TownAreaScriptC1ERKS_>
 86c37bf:	8d 45 98             	lea    -0x68(%ebp),%eax
 86c37c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c37c6:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c37cc:	89 04 24             	mov    %eax,(%esp)
 86c37cf:	e8 46 f2 00 00       	call   86d2a1a <_ZN14TownAreaScriptaSERKS_>
 86c37d4:	eb 18                	jmp    86c37ee <_ZN7Village11set_villageER10TownScript+0x436>
 86c37d6:	89 d3                	mov    %edx,%ebx
 86c37d8:	89 c6                	mov    %eax,%esi
 86c37da:	8d 45 98             	lea    -0x68(%ebp),%eax
 86c37dd:	89 04 24             	mov    %eax,(%esp)
 86c37e0:	e8 11 f1 00 00       	call   86d28f6 <_ZN14TownAreaScriptD1Ev>
 86c37e5:	89 f0                	mov    %esi,%eax
 86c37e7:	89 da                	mov    %ebx,%edx
 86c37e9:	e9 2c 03 00 00       	jmp    86c3b1a <_ZN7Village11set_villageER10TownScript+0x762>
 86c37ee:	8d 45 98             	lea    -0x68(%ebp),%eax
 86c37f1:	89 04 24             	mov    %eax,(%esp)
 86c37f4:	e8 fd f0 00 00       	call   86d28f6 <_ZN14TownAreaScriptD1Ev>
 86c37f9:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c37ff:	85 c0                	test   %eax,%eax
 86c3801:	0f 88 7b 02 00 00    	js     86c3a82 <_ZN7Village11set_villageER10TownScript+0x6ca>
 86c3807:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 86c380d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3810:	8b 40 24             	mov    0x24(%eax),%eax
 86c3813:	39 c2                	cmp    %eax,%edx
 86c3815:	0f 8d 67 02 00 00    	jge    86c3a82 <_ZN7Village11set_villageER10TownScript+0x6ca>
 86c381b:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 86c3821:	89 04 24             	mov    %eax,(%esp)
 86c3824:	e8 6b 94 ca ff       	call   836cc94 <_ZN11STMapScriptC1Ev>
 86c3829:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c382f:	83 c0 04             	add    $0x4,%eax
 86c3832:	89 04 24             	mov    %eax,(%esp)
 86c3835:	e8 b6 2c 04 00       	call   87064f0 <_ZNKSs5c_strEv>
 86c383a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c383e:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 86c3844:	89 04 24             	mov    %eax,(%esp)
 86c3847:	e8 08 97 31 00       	call   89dcf54 <_Z15ImportMapScriptP11STMapScriptPKc>
 86c384c:	83 f0 01             	xor    $0x1,%eax
 86c384f:	84 c0                	test   %al,%al
 86c3851:	74 11                	je     86c3864 <_ZN7Village11set_villageER10TownScript+0x4ac>
 86c3853:	c6 85 b7 fb ff ff 00 	movb   $0x0,-0x449(%ebp)
 86c385a:	bb 00 00 00 00       	mov    $0x0,%ebx
 86c385f:	e9 06 02 00 00       	jmp    86c3a6a <_ZN7Village11set_villageER10TownScript+0x6b2>
 86c3864:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3867:	8b 00                	mov    (%eax),%eax
 86c3869:	8b 55 08             	mov    0x8(%ebp),%edx
 86c386c:	8b 4a 28             	mov    0x28(%edx),%ecx
 86c386f:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 86c3875:	69 d2 98 00 00 00    	imul   $0x98,%edx,%edx
 86c387b:	01 d1                	add    %edx,%ecx
 86c387d:	8d 95 ec fb ff ff    	lea    -0x414(%ebp),%edx
 86c3883:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86c3887:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 86c388d:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c3891:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3895:	89 0c 24             	mov    %ecx,(%esp)
 86c3898:	e8 77 e4 ff ff       	call   86c1d14 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript>
 86c389d:	e8 05 6b a1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86c38a2:	89 04 24             	mov    %eax,(%esp)
 86c38a5:	e8 a4 a3 d8 ff       	call   844dc4e <_ZNK9GameWorld18IsSchoolPvPChannelEv>
 86c38aa:	84 c0                	test   %al,%al
 86c38ac:	74 1c                	je     86c38ca <_ZN7Village11set_villageER10TownScript+0x512>
 86c38ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c38b1:	8b 00                	mov    (%eax),%eax
 86c38b3:	83 f8 02             	cmp    $0x2,%eax
 86c38b6:	75 12                	jne    86c38ca <_ZN7Village11set_villageER10TownScript+0x512>
 86c38b8:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c38be:	83 f8 04             	cmp    $0x4,%eax
 86c38c1:	75 07                	jne    86c38ca <_ZN7Village11set_villageER10TownScript+0x512>
 86c38c3:	b8 01 00 00 00       	mov    $0x1,%eax
 86c38c8:	eb 05                	jmp    86c38cf <_ZN7Village11set_villageER10TownScript+0x517>
 86c38ca:	b8 00 00 00 00       	mov    $0x0,%eax
 86c38cf:	84 c0                	test   %al,%al
 86c38d1:	74 78                	je     86c394b <_ZN7Village11set_villageER10TownScript+0x593>
 86c38d3:	8b 45 08             	mov    0x8(%ebp),%eax
 86c38d6:	8b 40 24             	mov    0x24(%eax),%eax
 86c38d9:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86c38dc:	eb 46                	jmp    86c3924 <_ZN7Village11set_villageER10TownScript+0x56c>
 86c38de:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86c38e1:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 86c38e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86c38ea:	8b 00                	mov    (%eax),%eax
 86c38ec:	8b 55 08             	mov    0x8(%ebp),%edx
 86c38ef:	8b 4a 28             	mov    0x28(%edx),%ecx
 86c38f2:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 86c38f8:	69 d2 98 00 00 00    	imul   $0x98,%edx,%edx
 86c38fe:	01 d1                	add    %edx,%ecx
 86c3900:	8d 95 ec fb ff ff    	lea    -0x414(%ebp),%edx
 86c3906:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86c390a:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 86c3910:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c3914:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3918:	89 0c 24             	mov    %ecx,(%esp)
 86c391b:	e8 f4 e3 ff ff       	call   86c1d14 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript>
 86c3920:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 86c3924:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3927:	8b 40 24             	mov    0x24(%eax),%eax
 86c392a:	05 58 02 00 00       	add    $0x258,%eax
 86c392f:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 86c3932:	0f 9f c0             	setg   %al
 86c3935:	84 c0                	test   %al,%al
 86c3937:	75 a5                	jne    86c38de <_ZN7Village11set_villageER10TownScript+0x526>
 86c3939:	8b 45 08             	mov    0x8(%ebp),%eax
 86c393c:	8b 40 24             	mov    0x24(%eax),%eax
 86c393f:	8d 90 58 02 00 00    	lea    0x258(%eax),%edx
 86c3945:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3948:	89 50 24             	mov    %edx,0x24(%eax)
 86c394b:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c394e:	8b 00                	mov    (%eax),%eax
 86c3950:	83 f8 08             	cmp    $0x8,%eax
 86c3953:	0f 85 ef 00 00 00    	jne    86c3a48 <_ZN7Village11set_villageER10TownScript+0x690>
 86c3959:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c395f:	83 f8 03             	cmp    $0x3,%eax
 86c3962:	0f 8f e0 00 00 00    	jg     86c3a48 <_ZN7Village11set_villageER10TownScript+0x690>
 86c3968:	8b 45 08             	mov    0x8(%ebp),%eax
 86c396b:	8b 40 24             	mov    0x24(%eax),%eax
 86c396e:	05 60 09 00 00       	add    $0x960,%eax
 86c3973:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86c3976:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86c397d:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c3983:	85 c0                	test   %eax,%eax
 86c3985:	75 0b                	jne    86c3992 <_ZN7Village11set_villageER10TownScript+0x5da>
 86c3987:	8b 45 08             	mov    0x8(%ebp),%eax
 86c398a:	8b 40 24             	mov    0x24(%eax),%eax
 86c398d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c3990:	eb 5b                	jmp    86c39ed <_ZN7Village11set_villageER10TownScript+0x635>
 86c3992:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c3998:	83 f8 01             	cmp    $0x1,%eax
 86c399b:	75 0e                	jne    86c39ab <_ZN7Village11set_villageER10TownScript+0x5f3>
 86c399d:	8b 45 08             	mov    0x8(%ebp),%eax
 86c39a0:	8b 40 24             	mov    0x24(%eax),%eax
 86c39a3:	83 c0 01             	add    $0x1,%eax
 86c39a6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c39a9:	eb 42                	jmp    86c39ed <_ZN7Village11set_villageER10TownScript+0x635>
 86c39ab:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c39b1:	83 f8 02             	cmp    $0x2,%eax
 86c39b4:	75 0e                	jne    86c39c4 <_ZN7Village11set_villageER10TownScript+0x60c>
 86c39b6:	8b 45 08             	mov    0x8(%ebp),%eax
 86c39b9:	8b 40 24             	mov    0x24(%eax),%eax
 86c39bc:	83 c0 02             	add    $0x2,%eax
 86c39bf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c39c2:	eb 29                	jmp    86c39ed <_ZN7Village11set_villageER10TownScript+0x635>
 86c39c4:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 86c39ca:	83 f8 03             	cmp    $0x3,%eax
 86c39cd:	75 1e                	jne    86c39ed <_ZN7Village11set_villageER10TownScript+0x635>
 86c39cf:	8b 45 08             	mov    0x8(%ebp),%eax
 86c39d2:	8b 40 24             	mov    0x24(%eax),%eax
 86c39d5:	83 c0 03             	add    $0x3,%eax
 86c39d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86c39db:	8b 45 08             	mov    0x8(%ebp),%eax
 86c39de:	8b 40 24             	mov    0x24(%eax),%eax
 86c39e1:	8d 90 60 09 00 00    	lea    0x960(%eax),%edx
 86c39e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86c39ea:	89 50 24             	mov    %edx,0x24(%eax)
 86c39ed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86c39f0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86c39f3:	eb 46                	jmp    86c3a3b <_ZN7Village11set_villageER10TownScript+0x683>
 86c39f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86c39f8:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 86c39fe:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3a01:	8b 00                	mov    (%eax),%eax
 86c3a03:	8b 55 08             	mov    0x8(%ebp),%edx
 86c3a06:	8b 4a 28             	mov    0x28(%edx),%ecx
 86c3a09:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 86c3a0f:	69 d2 98 00 00 00    	imul   $0x98,%edx,%edx
 86c3a15:	01 d1                	add    %edx,%ecx
 86c3a17:	8d 95 ec fb ff ff    	lea    -0x414(%ebp),%edx
 86c3a1d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86c3a21:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 86c3a27:	89 54 24 08          	mov    %edx,0x8(%esp)
 86c3a2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3a2f:	89 0c 24             	mov    %ecx,(%esp)
 86c3a32:	e8 dd e2 ff ff       	call   86c1d14 <_ZN4Area8set_areaEiR14TownAreaScriptR11STMapScript>
 86c3a37:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
 86c3a3b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86c3a3e:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 86c3a41:	0f 9c c0             	setl   %al
 86c3a44:	84 c0                	test   %al,%al
 86c3a46:	75 ad                	jne    86c39f5 <_ZN7Village11set_villageER10TownScript+0x63d>
 86c3a48:	bb 01 00 00 00       	mov    $0x1,%ebx
 86c3a4d:	eb 1b                	jmp    86c3a6a <_ZN7Village11set_villageER10TownScript+0x6b2>
 86c3a4f:	89 d3                	mov    %edx,%ebx
 86c3a51:	89 c6                	mov    %eax,%esi
 86c3a53:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 86c3a59:	89 04 24             	mov    %eax,(%esp)
 86c3a5c:	e8 5b 9a ca ff       	call   836d4bc <_ZN11STMapScriptD1Ev>
 86c3a61:	89 f0                	mov    %esi,%eax
 86c3a63:	89 da                	mov    %ebx,%edx
 86c3a65:	e9 b0 00 00 00       	jmp    86c3b1a <_ZN7Village11set_villageER10TownScript+0x762>
 86c3a6a:	8d 85 ec fb ff ff    	lea    -0x414(%ebp),%eax
 86c3a70:	89 04 24             	mov    %eax,(%esp)
 86c3a73:	e8 44 9a ca ff       	call   836d4bc <_ZN11STMapScriptD1Ev>
 86c3a78:	85 db                	test   %ebx,%ebx
 86c3a7a:	0f 84 b8 00 00 00    	je     86c3b38 <_ZN7Village11set_villageER10TownScript+0x780>
 86c3a80:	eb 40                	jmp    86c3ac2 <_ZN7Village11set_villageER10TownScript+0x70a>
 86c3a82:	8b 9d 68 ff ff ff    	mov    -0x98(%ebp),%ebx
 86c3a88:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86c3a8f:	00 
 86c3a90:	c7 44 24 08 2e 03 00 	movl   $0x32e,0x8(%esp)
 86c3a97:	00 
 86c3a98:	c7 44 24 04 e0 d7 cf 	movl   $0x8cfd7e0,0x4(%esp)
 86c3a9f:	08 
 86c3aa0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86c3aa3:	89 04 24             	mov    %eax,(%esp)
 86c3aa6:	e8 6d bc e8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86c3aab:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86c3aaf:	c7 44 24 04 de b4 cf 	movl   $0x8cfb4de,0x4(%esp)
 86c3ab6:	08 
 86c3ab7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86c3aba:	89 04 24             	mov    %eax,(%esp)
 86c3abd:	e8 c6 bc e8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86c3ac2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86c3ac5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86c3acc:	00 
 86c3acd:	8d 55 90             	lea    -0x70(%ebp),%edx
 86c3ad0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3ad4:	89 04 24             	mov    %eax,(%esp)
 86c3ad7:	e8 38 02 01 00       	call   86d3d14 <_ZNSt17_Rb_tree_iteratorISt4pairIKi14TownAreaScriptEEppEi>
 86c3adc:	83 ec 04             	sub    $0x4,%esp
 86c3adf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86c3ae2:	8d 50 20             	lea    0x20(%eax),%edx
 86c3ae5:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86c3ae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86c3aec:	89 04 24             	mov    %eax,(%esp)
 86c3aef:	e8 d6 fe 00 00       	call   86d39ca <_ZNSt3mapIi14TownAreaScriptSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86c3af4:	83 ec 04             	sub    $0x4,%esp
 86c3af7:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86c3afa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86c3afe:	8d 45 90             	lea    -0x70(%ebp),%eax
 86c3b01:	89 04 24             	mov    %eax,(%esp)
 86c3b04:	e8 e7 fe 00 00       	call   86d39f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi14TownAreaScriptEEneERKS4_>
 86c3b09:	84 c0                	test   %al,%al
 86c3b0b:	0f 85 91 fc ff ff    	jne    86c37a2 <_ZN7Village11set_villageER10TownScript+0x3ea>
 86c3b11:	c6 85 b7 fb ff ff 01 	movb   $0x1,-0x449(%ebp)
 86c3b18:	eb 1e                	jmp    86c3b38 <_ZN7Village11set_villageER10TownScript+0x780>
 86c3b1a:	89 d3                	mov    %edx,%ebx
 86c3b1c:	89 c6                	mov    %eax,%esi
 86c3b1e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c3b24:	89 04 24             	mov    %eax,(%esp)
 86c3b27:	e8 ca ed 00 00       	call   86d28f6 <_ZN14TownAreaScriptD1Ev>
 86c3b2c:	89 f0                	mov    %esi,%eax
 86c3b2e:	89 da                	mov    %ebx,%edx
 86c3b30:	89 04 24             	mov    %eax,(%esp)
 86c3b33:	e8 18 fc 41 00       	call   8ae3750 <_Unwind_Resume>
 86c3b38:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86c3b3e:	89 04 24             	mov    %eax,(%esp)
 86c3b41:	e8 b0 ed 00 00       	call   86d28f6 <_ZN14TownAreaScriptD1Ev>
 86c3b46:	0f b6 85 b7 fb ff ff 	movzbl -0x449(%ebp),%eax
 86c3b4d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86c3b50:	83 c4 00             	add    $0x0,%esp
 86c3b53:	5b                   	pop    %ebx
 86c3b54:	5e                   	pop    %esi
 86c3b55:	5f                   	pop    %edi
 86c3b56:	5d                   	pop    %ebp
 86c3b57:	c3                   	ret

```

```c
// Village::set_village @ 0x86c33b8

/* Village::set_village(TownScript&) */

undefined1 __thiscall Village::set_village(Village *this,TownScript *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  GameWorld *pGVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 local_44d;
  Area *local_44c;
  int local_448;
  Area *local_444;
  int local_440;
  Area *local_43c;
  int local_438;
  STMapScript local_418 [892];
  int local_9c;
  string asStack_98 [36];
  map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
  local_74 [4];
  map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
  local_70 [4];
  TownAreaScript local_6c [40];
  cMyTrace local_44 [16];
  _Rb_tree_iterator<std::pair<int_const,TownAreaScript>> local_34 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  if (*(int *)(param_1 + 0x18) == -1) {
    this[0x20] = (Village)0x0;
  }
  else {
    this[0x20] = (Village)0x1;
    iVar5 = G_CDataManager();
    iVar5 = CDataManager::get_dungeon(iVar5);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(iVar5 + 0x6d4),(int *)this);
  }
  uVar3 = std::
          map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
          ::size((map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
                  *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x24) = uVar3;
  if (*(int *)(this + 0x24) == 0) {
    LogManager::logFormat
              (1,"world.cpp","bool Village::set_village(TownScript&)",0x2d0,
               "town.townAreaScripts_.size() == 0");
    local_44d = 0;
  }
  else {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(pGVar4);
    if ((cVar2 == '\0') || (*(int *)param_1 != 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_448 = *(int *)(this + 0x24);
      iVar5 = local_448 + 600;
      piVar6 = operator_new__((iVar5 * 0x26 + 1) * 4);
      *piVar6 = iVar5;
      local_44c = (Area *)(piVar6 + 1);
      for (local_448 = local_448 + 599; local_448 != -1; local_448 = local_448 + -1) {
                    /* try { // try from 086c34de to 086c34e2 has its CatchHandler @ 086c3504 */
        Area::Area(local_44c);
        local_44c = local_44c + 0x98;
      }
      *(int **)(this + 0x28) = piVar6 + 1;
      CSchoolMgr::SetSchoolArea
                ((CSchoolMgr *)g_schoolMgr,*(int *)(this + 0x24),*(int *)(this + 0x24) + 600);
    }
    else if (*(int *)param_1 == 8) {
      local_440 = *(int *)(this + 0x24);
      iVar5 = local_440 + 0x960;
      local_30 = iVar5;
      piVar6 = operator_new__((iVar5 * 0x26 + 1) * 4);
      *piVar6 = iVar5;
      local_444 = (Area *)(piVar6 + 1);
      for (local_440 = local_440 + 0x95f; local_440 != -1; local_440 = local_440 + -1) {
                    /* try { // try from 086c35e9 to 086c35ed has its CatchHandler @ 086c360f */
        Area::Area(local_444);
        local_444 = local_444 + 0x98;
      }
      *(int **)(this + 0x28) = piVar6 + 1;
      CGuildAgitManager::SetGuildAgitAreaDomain
                ((CGuildAgitManager *)g_guildAgitMgr,*(int *)(this + 0x24),local_30);
    }
    else {
      local_438 = *(int *)(this + 0x24);
      piVar6 = operator_new__((local_438 * 0x26 + 1) * 4);
      *piVar6 = local_438;
      local_43c = (Area *)(piVar6 + 1);
      while (local_438 = local_438 + -1, local_438 != -1) {
                    /* try { // try from 086c36d4 to 086c36d8 has its CatchHandler @ 086c36fa */
        Area::Area(local_43c);
        local_43c = local_43c + 0x98;
      }
      *(int **)(this + 0x28) = piVar6 + 1;
    }
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x40);
    TownAreaScript::TownAreaScript((TownAreaScript *)&local_9c);
                    /* try { // try from 086c3795 to 086c37be has its CatchHandler @ 086c3b1a */
    std::map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>
    ::begin(local_74);
    while( true ) {
      std::
      map<int,TownAreaScript,std::less<int>,std::allocator<std::pair<int_const,TownAreaScript>>>::
      end(local_70);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,TownAreaScript>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,TownAreaScript>> *)local_74,
                         (_Rb_tree_iterator *)local_70);
      if (cVar2 == '\0') break;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,TownAreaScript>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,TownAreaScript>> *)local_74);
      TownAreaScript::TownAreaScript(local_6c,(TownAreaScript *)(iVar5 + 4));
                    /* try { // try from 086c37cf to 086c37d3 has its CatchHandler @ 086c37d6 */
      TownAreaScript::operator=((TownAreaScript *)&local_9c,local_6c);
                    /* try { // try from 086c37f4 to 086c3828 has its CatchHandler @ 086c3b1a */
      TownAreaScript::~TownAreaScript(local_6c);
      iVar5 = local_9c;
      if ((local_9c < 0) || (*(int *)(this + 0x24) <= local_9c)) {
        cMyTrace::cMyTrace(local_44,"bool Village::set_village(TownScript&)",0x32e,5);
        cMyTrace::operator()(local_44,"temp_area.areaIndex_ %d",iVar5);
      }
      else {
        STMapScript::STMapScript(local_418);
                    /* try { // try from 086c3835 to 086c3a36 has its CatchHandler @ 086c3a4f */
        pcVar7 = (char *)std::string::c_str(asStack_98);
        cVar2 = ImportMapScript(local_418,pcVar7);
        if (cVar2 == '\x01') {
          Area::set_area((Area *)(*(int *)(this + 0x28) + local_9c * 0x98),*(int *)this,
                         (TownAreaScript *)&local_9c,local_418);
          pGVar4 = (GameWorld *)G_GameWorld();
          cVar2 = GameWorld::IsSchoolPvPChannel(pGVar4);
          if (((cVar2 == '\0') || (*(int *)param_1 != 2)) || (local_9c != 4)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            for (local_2c = *(int *)(this + 0x24); local_2c < *(int *)(this + 0x24) + 600;
                local_2c = local_2c + 1) {
              local_9c = local_2c;
              Area::set_area((Area *)(*(int *)(this + 0x28) + local_2c * 0x98),*(int *)this,
                             (TownAreaScript *)&local_9c,local_418);
            }
            *(int *)(this + 0x24) = *(int *)(this + 0x24) + 600;
          }
          if ((*(int *)param_1 == 8) && (local_9c < 4)) {
            local_28 = *(int *)(this + 0x24) + 0x960;
            local_24 = 0;
            if (local_9c == 0) {
              local_24 = *(int *)(this + 0x24);
            }
            else if (local_9c == 1) {
              local_24 = *(int *)(this + 0x24) + 1;
            }
            else if (local_9c == 2) {
              local_24 = *(int *)(this + 0x24) + 2;
            }
            else if (local_9c == 3) {
              local_24 = *(int *)(this + 0x24) + 3;
              *(int *)(this + 0x24) = *(int *)(this + 0x24) + 0x960;
            }
            for (local_20 = local_24; local_20 < local_28; local_20 = local_20 + 4) {
              local_9c = local_20;
              Area::set_area((Area *)(*(int *)(this + 0x28) + local_20 * 0x98),*(int *)this,
                             (TownAreaScript *)&local_9c,local_418);
            }
          }
          bVar1 = true;
        }
        else {
          local_44d = 0;
          bVar1 = false;
        }
                    /* try { // try from 086c3a73 to 086c3af3 has its CatchHandler @ 086c3b1a */
        STMapScript::~STMapScript(local_418);
        if (!bVar1) goto LAB_086c3b38;
      }
      std::_Rb_tree_iterator<std::pair<int_const,TownAreaScript>>::operator++
                (local_34,(int)local_74);
    }
    local_44d = 1;
LAB_086c3b38:
    TownAreaScript::~TownAreaScript((TownAreaScript *)&local_9c);
  }
  return local_44d;
}

```

---

## ~Village

```asm
// === 086c3300 Village::~Village  [0x086c3300-0x86c3347] ===
 86c3300:	55                   	push   %ebp
 86c3301:	89 e5                	mov    %esp,%ebp
 86c3303:	56                   	push   %esi
 86c3304:	53                   	push   %ebx
 86c3305:	83 ec 10             	sub    $0x10,%esp
 86c3308:	8b 45 08             	mov    0x8(%ebp),%eax
 86c330b:	89 04 24             	mov    %eax,(%esp)
 86c330e:	e8 35 00 00 00       	call   86c3348 <_ZN7Village7destroyEv>
 86c3313:	eb 1e                	jmp    86c3333 <_ZN7VillageD1Ev+0x33>
 86c3315:	89 d3                	mov    %edx,%ebx
 86c3317:	89 c6                	mov    %eax,%esi
 86c3319:	8b 45 08             	mov    0x8(%ebp),%eax
 86c331c:	83 c0 08             	add    $0x8,%eax
 86c331f:	89 04 24             	mov    %eax,(%esp)
 86c3322:	e8 11 ee 00 00       	call   86d2138 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEED1Ev>
 86c3327:	89 f0                	mov    %esi,%eax
 86c3329:	89 da                	mov    %ebx,%edx
 86c332b:	89 04 24             	mov    %eax,(%esp)
 86c332e:	e8 1d 04 42 00       	call   8ae3750 <_Unwind_Resume>
 86c3333:	8b 45 08             	mov    0x8(%ebp),%eax
 86c3336:	83 c0 08             	add    $0x8,%eax
 86c3339:	89 04 24             	mov    %eax,(%esp)
 86c333c:	e8 f7 ed 00 00       	call   86d2138 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEED1Ev>
 86c3341:	83 c4 10             	add    $0x10,%esp
 86c3344:	5b                   	pop    %ebx
 86c3345:	5e                   	pop    %esi
 86c3346:	5d                   	pop    %ebp
 86c3347:	c3                   	ret

```

```c
// Village::~Village @ 0x86c3300

/* Village::~Village() */

void __thiscall Village::~Village(Village *this)

{
                    /* try { // try from 086c330e to 086c3312 has its CatchHandler @ 086c3315 */
  destroy(this);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::~map((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          *)(this + 8));
  return;
}

```

