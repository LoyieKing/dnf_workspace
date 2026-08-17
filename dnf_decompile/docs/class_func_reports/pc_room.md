# pc_room

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CheckInventoryEmptyCount

```asm
// === 0827108c pc_room::CheckInventoryEmptyCount  [0x0827108c-0x82711f6] ===
 827108c:	55                   	push   %ebp
 827108d:	89 e5                	mov    %esp,%ebp
 827108f:	83 ec 18             	sub    $0x18,%esp
 8271092:	8b 45 08             	mov    0x8(%ebp),%eax
 8271095:	89 04 24             	mov    %eax,(%esp)
 8271098:	e8 e1 91 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827109d:	8b 55 0c             	mov    0xc(%ebp),%edx
 82710a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82710a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82710ab:	00 
 82710ac:	89 04 24             	mov    %eax,(%esp)
 82710af:	e8 b0 3e 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 82710b4:	83 f0 01             	xor    $0x1,%eax
 82710b7:	84 c0                	test   %al,%al
 82710b9:	0f 85 2a 01 00 00    	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 82710bf:	8b 45 08             	mov    0x8(%ebp),%eax
 82710c2:	89 04 24             	mov    %eax,(%esp)
 82710c5:	e8 b4 91 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82710ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 82710cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 82710d1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82710d8:	00 
 82710d9:	89 04 24             	mov    %eax,(%esp)
 82710dc:	e8 83 3e 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 82710e1:	83 f0 01             	xor    $0x1,%eax
 82710e4:	84 c0                	test   %al,%al
 82710e6:	0f 85 fd 00 00 00    	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 82710ec:	8b 45 08             	mov    0x8(%ebp),%eax
 82710ef:	89 04 24             	mov    %eax,(%esp)
 82710f2:	e8 87 91 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82710f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82710fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 82710fe:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8271105:	00 
 8271106:	89 04 24             	mov    %eax,(%esp)
 8271109:	e8 56 3e 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 827110e:	83 f0 01             	xor    $0x1,%eax
 8271111:	84 c0                	test   %al,%al
 8271113:	0f 85 d0 00 00 00    	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 8271119:	8b 45 08             	mov    0x8(%ebp),%eax
 827111c:	89 04 24             	mov    %eax,(%esp)
 827111f:	e8 5a 91 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8271124:	8b 55 0c             	mov    0xc(%ebp),%edx
 8271127:	89 54 24 08          	mov    %edx,0x8(%esp)
 827112b:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8271132:	00 
 8271133:	89 04 24             	mov    %eax,(%esp)
 8271136:	e8 29 3e 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 827113b:	83 f0 01             	xor    $0x1,%eax
 827113e:	84 c0                	test   %al,%al
 8271140:	0f 85 a3 00 00 00    	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 8271146:	8b 45 08             	mov    0x8(%ebp),%eax
 8271149:	89 04 24             	mov    %eax,(%esp)
 827114c:	e8 2d 91 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8271151:	8b 55 0c             	mov    0xc(%ebp),%edx
 8271154:	89 54 24 08          	mov    %edx,0x8(%esp)
 8271158:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 827115f:	00 
 8271160:	89 04 24             	mov    %eax,(%esp)
 8271163:	e8 fc 3d 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 8271168:	83 f0 01             	xor    $0x1,%eax
 827116b:	84 c0                	test   %al,%al
 827116d:	75 7a                	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 827116f:	8b 45 08             	mov    0x8(%ebp),%eax
 8271172:	89 04 24             	mov    %eax,(%esp)
 8271175:	e8 04 91 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 827117a:	8b 55 0c             	mov    0xc(%ebp),%edx
 827117d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8271181:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8271188:	00 
 8271189:	89 04 24             	mov    %eax,(%esp)
 827118c:	e8 d3 3d 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 8271191:	83 f0 01             	xor    $0x1,%eax
 8271194:	84 c0                	test   %al,%al
 8271196:	75 51                	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 8271198:	8b 45 08             	mov    0x8(%ebp),%eax
 827119b:	89 04 24             	mov    %eax,(%esp)
 827119e:	e8 db 90 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82711a3:	8b 55 0c             	mov    0xc(%ebp),%edx
 82711a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 82711aa:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 82711b1:	00 
 82711b2:	89 04 24             	mov    %eax,(%esp)
 82711b5:	e8 aa 3d 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 82711ba:	83 f0 01             	xor    $0x1,%eax
 82711bd:	84 c0                	test   %al,%al
 82711bf:	75 28                	jne    82711e9 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x15d>
 82711c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82711c4:	89 04 24             	mov    %eax,(%esp)
 82711c7:	e8 b2 90 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82711cc:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 82711d3:	00 
 82711d4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82711db:	00 
 82711dc:	89 04 24             	mov    %eax,(%esp)
 82711df:	e8 96 a4 28 00       	call   84fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 82711e4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 82711e7:	7c 07                	jl     82711f0 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x164>
 82711e9:	b8 01 00 00 00       	mov    $0x1,%eax
 82711ee:	eb 05                	jmp    82711f5 <_ZN7pc_room24CheckInventoryEmptyCountER5CUseri+0x169>
 82711f0:	b8 00 00 00 00       	mov    $0x0,%eax
 82711f5:	c9                   	leave
 82711f6:	c3                   	ret

```

```c
// pc_room::CheckInventoryEmptyCount @ 0x827108c

/* pc_room::CheckInventoryEmptyCount(CUser&, int) */

undefined4 pc_room::CheckInventoryEmptyCount(CUser *param_1,int param_2)

{
  char cVar1;
  CInventory *pCVar2;
  int iVar3;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  cVar1 = CInventory::check_empty_count(pCVar2,1,param_2);
  if (cVar1 == '\x01') {
    pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    cVar1 = CInventory::check_empty_count(pCVar2,2,param_2);
    if (cVar1 == '\x01') {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar1 = CInventory::check_empty_count(pCVar2,3,param_2);
      if (cVar1 == '\x01') {
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        cVar1 = CInventory::check_empty_count(pCVar2,10,param_2);
        if (cVar1 == '\x01') {
          pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar1 = CInventory::check_empty_count(pCVar2,9,param_2);
          if (cVar1 == '\x01') {
            pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            cVar1 = CInventory::check_empty_count(pCVar2,5,param_2);
            if (cVar1 == '\x01') {
              pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              cVar1 = CInventory::check_empty_count(pCVar2,6,param_2);
              if (cVar1 == '\x01') {
                pCVar2 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                iVar3 = CInventory::GetRemainCapacity(pCVar2,2,8);
                if (iVar3 < param_2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

```

---

## CheckInventoryEquipmentEmptyCount

```asm
// === 08271062 pc_room::CheckInventoryEquipmentEmptyCount  [0x08271062-0x827108b] ===
 8271062:	55                   	push   %ebp
 8271063:	89 e5                	mov    %esp,%ebp
 8271065:	83 ec 18             	sub    $0x18,%esp
 8271068:	8b 45 08             	mov    0x8(%ebp),%eax
 827106b:	89 04 24             	mov    %eax,(%esp)
 827106e:	e8 0b 92 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8271073:	8b 55 0c             	mov    0xc(%ebp),%edx
 8271076:	89 54 24 08          	mov    %edx,0x8(%esp)
 827107a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8271081:	00 
 8271082:	89 04 24             	mov    %eax,(%esp)
 8271085:	e8 da 3e 29 00       	call   8504f64 <_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi>
 827108a:	c9                   	leave
 827108b:	c3                   	ret

```

```c
// pc_room::CheckInventoryEquipmentEmptyCount @ 0x8271062

/* pc_room::CheckInventoryEquipmentEmptyCount(CUser&, int) */

void pc_room::CheckInventoryEquipmentEmptyCount(CUser *param_1,int param_2)

{
  CInventory *pCVar1;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::check_empty_count(pCVar1,1,param_2);
  return;
}

```

---

## CheckRentableEnvironment

```asm
// === 08271002 pc_room::CheckRentableEnvironment  [0x08271002-0x8271031] ===
 8271002:	55                   	push   %ebp
 8271003:	89 e5                	mov    %esp,%ebp
 8271005:	83 ec 28             	sub    $0x28,%esp
 8271008:	e8 9a 93 e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827100d:	89 04 24             	mov    %eax,(%esp)
 8271010:	e8 0b 5b ea ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8271015:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8271018:	83 7d f4 0f          	cmpl   $0xf,-0xc(%ebp)
 827101c:	74 06                	je     8271024 <_ZN7pc_room24CheckRentableEnvironmentER5CUser+0x22>
 827101e:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
 8271022:	75 07                	jne    827102b <_ZN7pc_room24CheckRentableEnvironmentER5CUser+0x29>
 8271024:	b8 00 00 00 00       	mov    $0x0,%eax
 8271029:	eb 05                	jmp    8271030 <_ZN7pc_room24CheckRentableEnvironmentER5CUser+0x2e>
 827102b:	b8 01 00 00 00       	mov    $0x1,%eax
 8271030:	c9                   	leave
 8271031:	c3                   	ret

```

```c
// pc_room::CheckRentableEnvironment @ 0x8271002

/* pc_room::CheckRentableEnvironment(CUser&) */

undefined4 pc_room::CheckRentableEnvironment(CUser *param_1)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if ((iVar1 == 0xf) || (iVar1 == 0x10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## CheckRentableEnvironmentAtChannelType

```asm
// === 08271032 pc_room::CheckRentableEnvironmentAtChannelType  [0x08271032-0x8271061] ===
 8271032:	55                   	push   %ebp
 8271033:	89 e5                	mov    %esp,%ebp
 8271035:	83 ec 28             	sub    $0x28,%esp
 8271038:	e8 6a 93 e6 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827103d:	89 04 24             	mov    %eax,(%esp)
 8271040:	e8 db 5a ea ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 8271045:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8271048:	83 7d f4 0f          	cmpl   $0xf,-0xc(%ebp)
 827104c:	74 06                	je     8271054 <_ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser+0x22>
 827104e:	83 7d f4 10          	cmpl   $0x10,-0xc(%ebp)
 8271052:	75 07                	jne    827105b <_ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser+0x29>
 8271054:	b8 00 00 00 00       	mov    $0x0,%eax
 8271059:	eb 05                	jmp    8271060 <_ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser+0x2e>
 827105b:	b8 01 00 00 00       	mov    $0x1,%eax
 8271060:	c9                   	leave
 8271061:	c3                   	ret

```

```c
// pc_room::CheckRentableEnvironmentAtChannelType @ 0x8271032

/* pc_room::CheckRentableEnvironmentAtChannelType(CUser&) */

undefined4 pc_room::CheckRentableEnvironmentAtChannelType(CUser *param_1)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if ((iVar1 == 0xf) || (iVar1 == 0x10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## DeleteAllRentalItemInSameSectionForNewRent

```asm
// === 08271807 pc_room::DeleteAllRentalItemInSameSectionForNewRent  [0x08271807-0x8271999] ===
 8271807:	55                   	push   %ebp
 8271808:	89 e5                	mov    %esp,%ebp
 827180a:	56                   	push   %esi
 827180b:	53                   	push   %ebx
 827180c:	83 ec 40             	sub    $0x40,%esp
 827180f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8271812:	89 04 24             	mov    %eax,(%esp)
 8271815:	e8 1a 49 fc ff       	call   8236134 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EEC1Ev>
 827181a:	8b 45 10             	mov    0x10(%ebp),%eax
 827181d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8271821:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8271824:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271828:	8b 45 08             	mov    0x8(%ebp),%eax
 827182b:	89 04 24             	mov    %eax,(%esp)
 827182e:	e8 33 59 40 00       	call   8677166 <_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>
 8271833:	83 f0 01             	xor    $0x1,%eax
 8271836:	84 c0                	test   %al,%al
 8271838:	0f 85 47 01 00 00    	jne    8271985 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0x17e>
 827183e:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 8271842:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8271849:	8d 45 d8             	lea    -0x28(%ebp),%eax
 827184c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 827184f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8271853:	89 04 24             	mov    %eax,(%esp)
 8271856:	e8 4b 5d fc ff       	call   82375a6 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE5beginEv>
 827185b:	83 ec 04             	sub    $0x4,%esp
 827185e:	e9 d6 00 00 00       	jmp    8271939 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0x132>
 8271863:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8271866:	89 04 24             	mov    %eax,(%esp)
 8271869:	e8 e0 05 00 00       	call   8271e4e <_ZNK9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEdeEv>
 827186e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8271871:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271874:	8b 40 04             	mov    0x4(%eax),%eax
 8271877:	89 c3                	mov    %eax,%ebx
 8271879:	8b 45 08             	mov    0x8(%ebp),%eax
 827187c:	89 04 24             	mov    %eax,(%esp)
 827187f:	e8 fa 89 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8271884:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 8271887:	89 54 24 0c          	mov    %edx,0xc(%esp)
 827188b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 827188e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8271892:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8271896:	89 04 24             	mov    %eax,(%esp)
 8271899:	e8 20 3a 29 00       	call   85052be <_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb>
 827189e:	83 f0 01             	xor    $0x1,%eax
 82718a1:	84 c0                	test   %al,%al
 82718a3:	0f 85 84 00 00 00    	jne    827192d <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0x126>
 82718a9:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 82718ad:	84 c0                	test   %al,%al
 82718af:	74 24                	je     82718d5 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0xce>
 82718b1:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 82718b4:	8b 45 08             	mov    0x8(%ebp),%eax
 82718b7:	89 04 24             	mov    %eax,(%esp)
 82718ba:	e8 cf 89 e6 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82718bf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82718c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82718ca:	00 
 82718cb:	89 04 24             	mov    %eax,(%esp)
 82718ce:	e8 57 9a 28 00       	call   84fb32a <_ZN10CInventory9ResetSlotEii>
 82718d3:	eb 22                	jmp    82718f7 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0xf0>
 82718d5:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 82718d8:	8b 45 08             	mov    0x8(%ebp),%eax
 82718db:	89 04 24             	mov    %eax,(%esp)
 82718de:	e8 ab 89 e6 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82718e3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82718e7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82718ee:	00 
 82718ef:	89 04 24             	mov    %eax,(%esp)
 82718f2:	e8 33 9a 28 00       	call   84fb32a <_ZN10CInventory9ResetSlotEii>
 82718f7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 82718fa:	89 04 24             	mov    %eax,(%esp)
 82718fd:	e8 38 01 00 00       	call   8271a3a <_ZN20InstanceRentalSystem15DeletedRentItemC1Ev>
 8271902:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8271905:	66 89 45 d2          	mov    %ax,-0x2e(%ebp)
 8271909:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 827190d:	88 45 d0             	mov    %al,-0x30(%ebp)
 8271910:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271913:	8b 40 04             	mov    0x4(%eax),%eax
 8271916:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8271919:	8d 45 d0             	lea    -0x30(%ebp),%eax
 827191c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271920:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271923:	89 04 24             	mov    %eax,(%esp)
 8271926:	e8 2d 05 00 00       	call   8271e58 <_ZNSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS1_EE9push_backERKS1_>
 827192b:	eb 01                	jmp    827192e <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0x127>
 827192d:	90                   	nop
 827192e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8271931:	89 04 24             	mov    %eax,(%esp)
 8271934:	e8 ff 04 00 00       	call   8271e38 <_ZN9__gnu_cxx17__normal_iteratorIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEppEv>
 8271939:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827193c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 827193f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8271943:	89 04 24             	mov    %eax,(%esp)
 8271946:	e8 99 5c fc ff       	call   82375e4 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE3endEv>
 827194b:	83 ec 04             	sub    $0x4,%esp
 827194e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8271951:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271955:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8271958:	89 04 24             	mov    %eax,(%esp)
 827195b:	e8 ab 04 00 00       	call   8271e0b <_ZN9__gnu_cxxneIPN20InstanceRentalSystem10RentalInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8271960:	84 c0                	test   %al,%al
 8271962:	0f 85 fb fe ff ff    	jne    8271863 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0x5c>
 8271968:	eb 1b                	jmp    8271985 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi+0x17e>
 827196a:	89 d3                	mov    %edx,%ebx
 827196c:	89 c6                	mov    %eax,%esi
 827196e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8271971:	89 04 24             	mov    %eax,(%esp)
 8271974:	e8 cf 47 fc ff       	call   8236148 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EED1Ev>
 8271979:	89 f0                	mov    %esi,%eax
 827197b:	89 da                	mov    %ebx,%edx
 827197d:	89 04 24             	mov    %eax,(%esp)
 8271980:	e8 cb 1d 87 00       	call   8ae3750 <_Unwind_Resume>
 8271985:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8271988:	89 04 24             	mov    %eax,(%esp)
 827198b:	e8 b8 47 fc ff       	call   8236148 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EED1Ev>
 8271990:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8271993:	83 c4 00             	add    $0x0,%esp
 8271996:	5b                   	pop    %ebx
 8271997:	5e                   	pop    %esi
 8271998:	5d                   	pop    %ebp
 8271999:	c3                   	ret

```

```c
// pc_room::DeleteAllRentalItemInSameSectionForNewRent @ 0x8271807

/* pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser&,
   std::vector<InstanceRentalSystem::DeletedRentItem,
   std::allocator<InstanceRentalSystem::DeletedRentItem> >&, int) */

void pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser *param_1,vector *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CInventory *pCVar4;
  DeletedRentItem local_34 [2];
  undefined2 local_32;
  undefined4 local_30;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_2c [4];
  int local_28;
  DeletedRentItem local_21;
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_20 [12];
  __normal_iterator local_14 [4];
  int local_10;
  
  std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
  vector(local_20);
                    /* try { // try from 0827182e to 0827195f has its CatchHandler @ 0827196a */
  cVar2 = CUser::GetCurrentCharacRentalInfo(param_1,(vector *)local_20,param_3);
  if (cVar2 == '\x01') {
    local_21 = (DeletedRentItem)0x0;
    local_28 = 0;
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    begin();
    while( true ) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      bVar3 = __gnu_cxx::operator!=(local_2c,local_14);
      if (!bVar3) break;
      local_10 = __gnu_cxx::
                 __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                 ::operator*(local_2c);
      iVar1 = *(int *)(local_10 + 4);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckExistItemInInventoryOrEquipment
                        (pCVar4,iVar1,&local_28,(bool *)&local_21);
      iVar1 = local_28;
      if (cVar2 == '\x01') {
        if (local_21 == (DeletedRentItem)0x0) {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::ResetSlot(pCVar4,1,iVar1);
        }
        else {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::ResetSlot(pCVar4,0,iVar1);
        }
        InstanceRentalSystem::DeletedRentItem::DeletedRentItem(local_34);
        local_32 = (undefined2)local_28;
        local_34[0] = local_21;
        local_30 = *(undefined4 *)(local_10 + 4);
        std::
        vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
        ::push_back((vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
                     *)param_2,local_34);
      }
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
      ::operator++(local_2c);
    }
  }
  std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
  ~vector(local_20);
  return;
}

```

---

## GetCharacterJob

```asm
// === 082712a6 pc_room::GetCharacterJob  [0x082712a6-0x82712d9] ===
 82712a6:	55                   	push   %ebp
 82712a7:	89 e5                	mov    %esp,%ebp
 82712a9:	83 ec 28             	sub    $0x28,%esp
 82712ac:	8b 45 08             	mov    0x8(%ebp),%eax
 82712af:	89 04 24             	mov    %eax,(%esp)
 82712b2:	e8 7b f1 ea ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82712b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82712ba:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82712be:	75 07                	jne    82712c7 <_ZN7pc_room15GetCharacterJobER5CUserRc+0x21>
 82712c0:	b8 00 00 00 00       	mov    $0x0,%eax
 82712c5:	eb 11                	jmp    82712d8 <_ZN7pc_room15GetCharacterJobER5CUserRc+0x32>
 82712c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82712ca:	0f b6 50 26          	movzbl 0x26(%eax),%edx
 82712ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 82712d1:	88 10                	mov    %dl,(%eax)
 82712d3:	b8 01 00 00 00       	mov    $0x1,%eax
 82712d8:	c9                   	leave
 82712d9:	c3                   	ret

```

```c
// pc_room::GetCharacterJob @ 0x82712a6

/* pc_room::GetCharacterJob(CUser&, char&) */

bool pc_room::GetCharacterJob(CUser *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    *param_2 = *(char *)(iVar1 + 0x26);
  }
  return iVar1 != 0;
}

```

---

## GetRentItemInfo

```asm
// === 08271396 pc_room::GetRentItemInfo  [0x08271396-0x82714c4] ===
 8271396:	55                   	push   %ebp
 8271397:	89 e5                	mov    %esp,%ebp
 8271399:	83 ec 48             	sub    $0x48,%esp
 827139c:	8b 55 0c             	mov    0xc(%ebp),%edx
 827139f:	8b 45 10             	mov    0x10(%ebp),%eax
 82713a2:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 82713a5:	88 45 d0             	mov    %al,-0x30(%ebp)
 82713a8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 82713af:	8b 45 18             	mov    0x18(%ebp),%eax
 82713b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 82713b6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82713b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82713bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82713c0:	89 04 24             	mov    %eax,(%esp)
 82713c3:	e8 2f fe ff ff       	call   82711f7 <_ZN7pc_room17GetSelectionIndexER5CUserRii>
 82713c8:	83 f0 01             	xor    $0x1,%eax
 82713cb:	84 c0                	test   %al,%al
 82713cd:	74 0a                	je     82713d9 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x43>
 82713cf:	b8 00 00 00 00       	mov    $0x0,%eax
 82713d4:	e9 ea 00 00 00       	jmp    82714c3 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x12d>
 82713d9:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 82713dd:	8d 45 df             	lea    -0x21(%ebp),%eax
 82713e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82713e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82713e7:	89 04 24             	mov    %eax,(%esp)
 82713ea:	e8 b7 fe ff ff       	call   82712a6 <_ZN7pc_room15GetCharacterJobER5CUserRc>
 82713ef:	83 f0 01             	xor    $0x1,%eax
 82713f2:	84 c0                	test   %al,%al
 82713f4:	74 0a                	je     8271400 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x6a>
 82713f6:	b8 00 00 00 00       	mov    $0x0,%eax
 82713fb:	e9 c3 00 00 00       	jmp    82714c3 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x12d>
 8271400:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8271403:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8271407:	0f be c0             	movsbl %al,%eax
 827140a:	89 54 24 04          	mov    %edx,0x4(%esp)
 827140e:	89 04 24             	mov    %eax,(%esp)
 8271411:	e8 97 31 62 00       	call   88945ad <_Z30makeFairPVPEquipmentPackageKeyii>
 8271416:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8271419:	8b 45 18             	mov    0x18(%ebp),%eax
 827141c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271420:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8271423:	89 04 24             	mov    %eax,(%esp)
 8271426:	e8 af fe ff ff       	call   82712da <_ZN7pc_room26GetRewardItemSelectionListEii>
 827142b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 827142e:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8271432:	75 0a                	jne    827143e <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0xa8>
 8271434:	b8 00 00 00 00       	mov    $0x0,%eax
 8271439:	e9 85 00 00 00       	jmp    82714c3 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x12d>
 827143e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8271441:	89 04 24             	mov    %eax,(%esp)
 8271444:	e8 0f ea ff ff       	call   826fe58 <_ZNKSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE4sizeEv>
 8271449:	89 45 ec             	mov    %eax,-0x14(%ebp)
 827144c:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 8271450:	78 09                	js     827145b <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0xc5>
 8271452:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
 8271456:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8271459:	7c 07                	jl     8271462 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0xcc>
 827145b:	b8 00 00 00 00       	mov    $0x0,%eax
 8271460:	eb 61                	jmp    82714c3 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x12d>
 8271462:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
 8271466:	89 44 24 04          	mov    %eax,0x4(%esp)
 827146a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 827146d:	89 04 24             	mov    %eax,(%esp)
 8271470:	e8 05 ea ff ff       	call   826fe7a <_ZNSt6vectorIS_I19EventRewardItemInfoSaIS0_EESaIS2_EE2atEj>
 8271475:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8271478:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827147b:	89 04 24             	mov    %eax,(%esp)
 827147e:	e8 d3 61 fc ff       	call   8237656 <_ZNKSt6vectorI19EventRewardItemInfoSaIS0_EE4sizeEv>
 8271483:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8271486:	80 7d d0 00          	cmpb   $0x0,-0x30(%ebp)
 827148a:	78 09                	js     8271495 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0xff>
 827148c:	0f be 45 d0          	movsbl -0x30(%ebp),%eax
 8271490:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8271493:	7c 07                	jl     827149c <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x106>
 8271495:	b8 00 00 00 00       	mov    $0x0,%eax
 827149a:	eb 27                	jmp    82714c3 <_ZN7pc_room15GetRentItemInfoER5CUserccR19EventRewardItemInfoi+0x12d>
 827149c:	0f be 45 d0          	movsbl -0x30(%ebp),%eax
 82714a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82714a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82714a7:	89 04 24             	mov    %eax,(%esp)
 82714aa:	e8 f7 e9 ff ff       	call   826fea6 <_ZNSt6vectorI19EventRewardItemInfoSaIS0_EEixEj>
 82714af:	89 44 24 04          	mov    %eax,0x4(%esp)
 82714b3:	8b 45 14             	mov    0x14(%ebp),%eax
 82714b6:	89 04 24             	mov    %eax,(%esp)
 82714b9:	e8 f8 e5 ff ff       	call   826fab6 <_ZN19EventRewardItemInfoaSERKS_>
 82714be:	b8 01 00 00 00       	mov    $0x1,%eax
 82714c3:	c9                   	leave
 82714c4:	c3                   	ret

```

```c
// pc_room::GetRentItemInfo @ 0x8271396

/* pc_room::GetRentItemInfo(CUser&, char, char, EventRewardItemInfo&, int) */

undefined4
pc_room::GetRentItemInfo
          (CUser *param_1,char param_2,char param_3,EventRewardItemInfo *param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  EventRewardItemInfo *pEVar3;
  char local_25;
  int local_24;
  int local_20;
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  *local_1c;
  int local_18;
  vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *local_14;
  int local_10;
  
  local_24 = 0;
  cVar1 = GetSelectionIndex(param_1,&local_24,param_5);
  if (cVar1 == '\x01') {
    local_25 = '\0';
    cVar1 = GetCharacterJob(param_1,&local_25);
    if (cVar1 == '\x01') {
      local_20 = makeFairPVPEquipmentPackageKey((int)local_25,local_24);
      local_1c = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                  *)GetRewardItemSelectionList(local_20,param_5);
      if (local_1c ==
          (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
           *)0x0) {
        uVar2 = 0;
      }
      else {
        local_18 = std::
                   vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                   ::size(local_1c);
        if ((param_2 < '\0') || (local_18 <= param_2)) {
          uVar2 = 0;
        }
        else {
          local_14 = (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)
                     std::
                     vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                     ::at(local_1c,(int)param_2);
          local_10 = std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::size
                               (local_14);
          if ((param_3 < '\0') || (local_10 <= param_3)) {
            uVar2 = 0;
          }
          else {
            pEVar3 = (EventRewardItemInfo *)
                     std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::
                     operator[](local_14,(int)param_3);
            EventRewardItemInfo::operator=(param_4,pEVar3);
            uVar2 = 1;
          }
        }
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

## GetRewardItemSelectionList

```asm
// === 082712da pc_room::GetRewardItemSelectionList  [0x082712da-0x8271337] ===
 82712da:	55                   	push   %ebp
 82712db:	89 e5                	mov    %esp,%ebp
 82712dd:	83 ec 28             	sub    $0x28,%esp
 82712e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82712e3:	83 f8 01             	cmp    $0x1,%eax
 82712e6:	74 07                	je     82712ef <_ZN7pc_room26GetRewardItemSelectionListEii+0x15>
 82712e8:	83 f8 02             	cmp    $0x2,%eax
 82712eb:	74 23                	je     8271310 <_ZN7pc_room26GetRewardItemSelectionListEii+0x36>
 82712ed:	eb 42                	jmp    8271331 <_ZN7pc_room26GetRewardItemSelectionListEii+0x57>
 82712ef:	e8 a7 ae e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82712f4:	05 f4 4a 00 00       	add    $0x4af4,%eax
 82712f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82712fc:	8b 45 08             	mov    0x8(%ebp),%eax
 82712ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271303:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8271306:	89 04 24             	mov    %eax,(%esp)
 8271309:	e8 8e 42 6a 00       	call   891559c <_ZN20PcBangItemRentarData22getRewardSelectionListEi>
 827130e:	eb 26                	jmp    8271336 <_ZN7pc_room26GetRewardItemSelectionListEii+0x5c>
 8271310:	e8 86 ae e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8271315:	05 34 4b 00 00       	add    $0x4b34,%eax
 827131a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827131d:	8b 45 08             	mov    0x8(%ebp),%eax
 8271320:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271324:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271327:	89 04 24             	mov    %eax,(%esp)
 827132a:	e8 57 4d 6a 00       	call   8916086 <_ZN29DimensionActivationRewardData23getRewardSelectItemListEi>
 827132f:	eb 05                	jmp    8271336 <_ZN7pc_room26GetRewardItemSelectionListEii+0x5c>
 8271331:	b8 00 00 00 00       	mov    $0x0,%eax
 8271336:	c9                   	leave
 8271337:	c3                   	ret

```

```c
// pc_room::GetRewardItemSelectionList @ 0x82712da

/* pc_room::GetRewardItemSelectionList(int, int) */

undefined4 pc_room::GetRewardItemSelectionList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = G_CDataManager();
    uVar2 = PcBangItemRentarData::getRewardSelectionList(iVar1 + 0x4af4);
  }
  else if (param_2 == 2) {
    iVar1 = G_CDataManager();
    uVar2 = DimensionActivationRewardData::getRewardSelectItemList(iVar1 + 0x4b34);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetRewardSection

```asm
// === 08271338 pc_room::GetRewardSection  [0x08271338-0x8271395] ===
 8271338:	55                   	push   %ebp
 8271339:	89 e5                	mov    %esp,%ebp
 827133b:	83 ec 28             	sub    $0x28,%esp
 827133e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271341:	83 f8 01             	cmp    $0x1,%eax
 8271344:	74 07                	je     827134d <_ZN7pc_room16GetRewardSectionEii+0x15>
 8271346:	83 f8 02             	cmp    $0x2,%eax
 8271349:	74 23                	je     827136e <_ZN7pc_room16GetRewardSectionEii+0x36>
 827134b:	eb 42                	jmp    827138f <_ZN7pc_room16GetRewardSectionEii+0x57>
 827134d:	e8 49 ae e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8271352:	05 f4 4a 00 00       	add    $0x4af4,%eax
 8271357:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827135a:	8b 45 08             	mov    0x8(%ebp),%eax
 827135d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271361:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8271364:	89 04 24             	mov    %eax,(%esp)
 8271367:	e8 ac 41 6a 00       	call   8915518 <_ZN20PcBangItemRentarData14getSectionDataEi>
 827136c:	eb 26                	jmp    8271394 <_ZN7pc_room16GetRewardSectionEii+0x5c>
 827136e:	e8 28 ae e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8271373:	05 34 4b 00 00       	add    $0x4b34,%eax
 8271378:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827137b:	8b 45 08             	mov    0x8(%ebp),%eax
 827137e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271382:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271385:	89 04 24             	mov    %eax,(%esp)
 8271388:	e8 89 4b 6a 00       	call   8915f16 <_ZN29DimensionActivationRewardData14getSectionDataEi>
 827138d:	eb 05                	jmp    8271394 <_ZN7pc_room16GetRewardSectionEii+0x5c>
 827138f:	b8 00 00 00 00       	mov    $0x0,%eax
 8271394:	c9                   	leave
 8271395:	c3                   	ret

```

```c
// pc_room::GetRewardSection @ 0x8271338

/* pc_room::GetRewardSection(int, int) */

undefined4 pc_room::GetRewardSection(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    iVar1 = G_CDataManager();
    uVar2 = PcBangItemRentarData::getSectionData((PcBangItemRentarData *)(iVar1 + 0x4af4),param_1);
  }
  else if (param_2 == 2) {
    iVar1 = G_CDataManager();
    uVar2 = DimensionActivationRewardData::getSectionData
                      ((DimensionActivationRewardData *)(iVar1 + 0x4b34),param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetSelectionIndex

```asm
// === 082711f7 pc_room::GetSelectionIndex  [0x082711f7-0x82712a5] ===
 82711f7:	55                   	push   %ebp
 82711f8:	89 e5                	mov    %esp,%ebp
 82711fa:	83 ec 28             	sub    $0x28,%esp
 82711fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8271200:	89 04 24             	mov    %eax,(%esp)
 8271203:	e8 2a f2 ea ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8271208:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827120b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 827120f:	75 0a                	jne    827121b <_ZN7pc_room17GetSelectionIndexER5CUserRii+0x24>
 8271211:	b8 00 00 00 00       	mov    $0x0,%eax
 8271216:	e9 89 00 00 00       	jmp    82712a4 <_ZN7pc_room17GetSelectionIndexER5CUserRii+0xad>
 827121b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827121e:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 8271222:	98                   	cwtl
 8271223:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8271226:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 827122d:	00 
 827122e:	8b 45 08             	mov    0x8(%ebp),%eax
 8271231:	89 04 24             	mov    %eax,(%esp)
 8271234:	e8 d5 4d e7 ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 8271239:	84 c0                	test   %al,%al
 827123b:	74 09                	je     8271246 <_ZN7pc_room17GetSelectionIndexER5CUserRii+0x4f>
 827123d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8271240:	83 c0 05             	add    $0x5,%eax
 8271243:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8271246:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 827124a:	75 0b                	jne    8271257 <_ZN7pc_room17GetSelectionIndexER5CUserRii+0x60>
 827124c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827124f:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 8271253:	98                   	cwtl
 8271254:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8271257:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 827125e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8271261:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271265:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8271268:	89 04 24             	mov    %eax,(%esp)
 827126b:	e8 a8 cf e1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8271270:	8b 00                	mov    (%eax),%eax
 8271272:	8b 55 10             	mov    0x10(%ebp),%edx
 8271275:	89 54 24 04          	mov    %edx,0x4(%esp)
 8271279:	89 04 24             	mov    %eax,(%esp)
 827127c:	e8 b7 00 00 00       	call   8271338 <_ZN7pc_room16GetRewardSectionEii>
 8271281:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8271284:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8271288:	75 07                	jne    8271291 <_ZN7pc_room17GetSelectionIndexER5CUserRii+0x9a>
 827128a:	b8 00 00 00 00       	mov    $0x0,%eax
 827128f:	eb 13                	jmp    82712a4 <_ZN7pc_room17GetSelectionIndexER5CUserRii+0xad>
 8271291:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271294:	0f b6 00             	movzbl (%eax),%eax
 8271297:	0f b6 d0             	movzbl %al,%edx
 827129a:	8b 45 0c             	mov    0xc(%ebp),%eax
 827129d:	89 10                	mov    %edx,(%eax)
 827129f:	b8 01 00 00 00       	mov    $0x1,%eax
 82712a4:	c9                   	leave
 82712a5:	c3                   	ret

```

```c
// pc_room::GetSelectionIndex @ 0x82711f7

/* pc_room::GetSelectionIndex(CUser&, int&, int) */

undefined4 pc_room::GetSelectionIndex(CUser *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  byte *pbVar4;
  int local_1c [6];
  
  local_1c[2] = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (local_1c[2] == 0) {
    uVar2 = 0;
  }
  else {
    local_1c[0] = (int)*(short *)(local_1c[2] + 0x27);
    cVar1 = CUser::isAffectedPremium(param_1,0x16);
    if (cVar1 != '\0') {
      local_1c[0] = local_1c[0] + 5;
    }
    if (param_3 == 2) {
      local_1c[0] = (int)*(short *)(local_1c[2] + 0x27);
    }
    local_1c[1] = 0;
    piVar3 = std::max<int>(local_1c + 1,local_1c);
    pbVar4 = (byte *)GetRewardSection(*piVar3,param_3);
    if (pbVar4 == (byte *)0x0) {
      uVar2 = 0;
    }
    else {
      *param_2 = (uint)*pbVar4;
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## IsPcRoomUser

```asm
// === 08270fea pc_room::IsPcRoomUser  [0x08270fea-0x8271001] ===
 8270fea:	55                   	push   %ebp
 8270feb:	89 e5                	mov    %esp,%ebp
 8270fed:	83 ec 18             	sub    $0x18,%esp
 8270ff0:	8b 45 08             	mov    0x8(%ebp),%eax
 8270ff3:	89 04 24             	mov    %eax,(%esp)
 8270ff6:	e8 c7 fd e9 ff       	call   8110dc2 <_ZN5CUser11GetPCRoomNoEv>
 8270ffb:	85 c0                	test   %eax,%eax
 8270ffd:	0f 95 c0             	setne  %al
 8271000:	c9                   	leave
 8271001:	c3                   	ret

```

```c
// pc_room::IsPcRoomUser @ 0x8270fea

/* pc_room::IsPcRoomUser(CUser&) */

bool pc_room::IsPcRoomUser(CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUser::GetPCRoomNo(param_1);
  return iVar1 != 0;
}

```

---

## ProcessEquipItem

```asm
// === 082714c5 pc_room::ProcessEquipItem  [0x082714c5-0x8271665] ===
 82714c5:	55                   	push   %ebp
 82714c6:	89 e5                	mov    %esp,%ebp
 82714c8:	53                   	push   %ebx
 82714c9:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 82714cf:	8b 45 10             	mov    0x10(%ebp),%eax
 82714d2:	8b 00                	mov    (%eax),%eax
 82714d4:	89 c3                	mov    %eax,%ebx
 82714d6:	e8 c0 ac e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82714db:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82714df:	89 04 24             	mov    %eax,(%esp)
 82714e2:	e8 4b e5 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82714e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82714ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82714ee:	75 0a                	jne    82714fa <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x35>
 82714f0:	b8 01 00 00 00       	mov    $0x1,%eax
 82714f5:	e9 63 01 00 00       	jmp    827165d <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x198>
 82714fa:	8d 45 a7             	lea    -0x59(%ebp),%eax
 82714fd:	89 04 24             	mov    %eax,(%esp)
 8271500:	e8 4f a3 e5 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8271505:	8b 45 10             	mov    0x10(%ebp),%eax
 8271508:	8b 00                	mov    (%eax),%eax
 827150a:	89 45 a9             	mov    %eax,-0x57(%ebp)
 827150d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271510:	8b 00                	mov    (%eax),%eax
 8271512:	83 c0 08             	add    $0x8,%eax
 8271515:	8b 10                	mov    (%eax),%edx
 8271517:	8d 45 a7             	lea    -0x59(%ebp),%eax
 827151a:	89 44 24 04          	mov    %eax,0x4(%esp)
 827151e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8271521:	89 04 24             	mov    %eax,(%esp)
 8271524:	ff d2                	call   *%edx
 8271526:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271529:	8b 40 04             	mov    0x4(%eax),%eax
 827152c:	83 f8 ff             	cmp    $0xffffffff,%eax
 827152f:	74 09                	je     827153a <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x75>
 8271531:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271534:	8b 40 04             	mov    0x4(%eax),%eax
 8271537:	89 45 ae             	mov    %eax,-0x52(%ebp)
 827153a:	8b 45 10             	mov    0x10(%ebp),%eax
 827153d:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8271541:	0f b6 c0             	movzbl %al,%eax
 8271544:	89 44 24 04          	mov    %eax,0x4(%esp)
 8271548:	8d 45 a7             	lea    -0x59(%ebp),%eax
 827154b:	89 04 24             	mov    %eax,(%esp)
 827154e:	e8 a9 fa e7 ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8271553:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8271556:	89 04 24             	mov    %eax,(%esp)
 8271559:	e8 98 04 00 00       	call   82719f6 <_ZN20InstanceRentalSystem10RentalInfoC1Ev>
 827155e:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8271561:	8b 45 08             	mov    0x8(%ebp),%eax
 8271564:	89 04 24             	mov    %eax,(%esp)
 8271567:	e8 22 8d e6 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 827156c:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8271573:	00 
 8271574:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 827157b:	00 
 827157c:	89 5c 24 44          	mov    %ebx,0x44(%esp)
 8271580:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8271583:	89 54 24 04          	mov    %edx,0x4(%esp)
 8271587:	8b 55 ab             	mov    -0x55(%ebp),%edx
 827158a:	89 54 24 08          	mov    %edx,0x8(%esp)
 827158e:	8b 55 af             	mov    -0x51(%ebp),%edx
 8271591:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8271595:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8271598:	89 54 24 10          	mov    %edx,0x10(%esp)
 827159c:	8b 55 b7             	mov    -0x49(%ebp),%edx
 827159f:	89 54 24 14          	mov    %edx,0x14(%esp)
 82715a3:	8b 55 bb             	mov    -0x45(%ebp),%edx
 82715a6:	89 54 24 18          	mov    %edx,0x18(%esp)
 82715aa:	8b 55 bf             	mov    -0x41(%ebp),%edx
 82715ad:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 82715b1:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 82715b4:	89 54 24 20          	mov    %edx,0x20(%esp)
 82715b8:	8b 55 c7             	mov    -0x39(%ebp),%edx
 82715bb:	89 54 24 24          	mov    %edx,0x24(%esp)
 82715bf:	8b 55 cb             	mov    -0x35(%ebp),%edx
 82715c2:	89 54 24 28          	mov    %edx,0x28(%esp)
 82715c6:	8b 55 cf             	mov    -0x31(%ebp),%edx
 82715c9:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 82715cd:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 82715d0:	89 54 24 30          	mov    %edx,0x30(%esp)
 82715d4:	8b 55 d7             	mov    -0x29(%ebp),%edx
 82715d7:	89 54 24 34          	mov    %edx,0x34(%esp)
 82715db:	8b 55 db             	mov    -0x25(%ebp),%edx
 82715de:	89 54 24 38          	mov    %edx,0x38(%esp)
 82715e2:	8b 55 df             	mov    -0x21(%ebp),%edx
 82715e5:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 82715e9:	0f b6 55 e3          	movzbl -0x1d(%ebp),%edx
 82715ed:	88 54 24 40          	mov    %dl,0x40(%esp)
 82715f1:	89 04 24             	mov    %eax,(%esp)
 82715f4:	e8 4b 0d 29 00       	call   8502344 <_ZN10CInventory23insertItemIntoEquipmentE10Inven_Item14eItemAddReasonbb>
 82715f9:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 82715fd:	8b 45 10             	mov    0x10(%ebp),%eax
 8271600:	8b 00                	mov    (%eax),%eax
 8271602:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8271605:	c6 45 e4 03          	movb   $0x3,-0x1c(%ebp)
 8271609:	c6 45 ee 01          	movb   $0x1,-0x12(%ebp)
 827160d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271610:	0f b6 00             	movzbl (%eax),%eax
 8271613:	88 45 ec             	mov    %al,-0x14(%ebp)
 8271616:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271619:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 827161d:	88 45 ed             	mov    %al,-0x13(%ebp)
 8271620:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271623:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 8271627:	88 45 ef             	mov    %al,-0x11(%ebp)
 827162a:	8b 45 0c             	mov    0xc(%ebp),%eax
 827162d:	8b 40 04             	mov    0x4(%eax),%eax
 8271630:	83 f8 ff             	cmp    $0xffffffff,%eax
 8271633:	74 0b                	je     8271640 <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x17b>
 8271635:	8b 45 0c             	mov    0xc(%ebp),%eax
 8271638:	8b 40 04             	mov    0x4(%eax),%eax
 827163b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827163e:	eb 06                	jmp    8271646 <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x181>
 8271640:	8b 45 ae             	mov    -0x52(%ebp),%eax
 8271643:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8271646:	8b 45 14             	mov    0x14(%ebp),%eax
 8271649:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 827164c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8271650:	89 04 24             	mov    %eax,(%esp)
 8271653:	e8 40 07 00 00       	call   8271d98 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE9push_backERKS1_>
 8271658:	b8 00 00 00 00       	mov    $0x0,%eax
 827165d:	81 c4 b4 00 00 00    	add    $0xb4,%esp
 8271663:	5b                   	pop    %ebx
 8271664:	5d                   	pop    %ebp
 8271665:	c3                   	ret

```

```c
// pc_room::ProcessEquipItem @ 0x82714c5

/* pc_room::ProcessEquipItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&,
   EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int) */

undefined4
pc_room::ProcessEquipItem
          (CUser *param_1,RentInElem *param_2,EventRewardItemInfo *param_3,RentOutput *param_4,
          int param_5)

{
  int iVar1;
  CDataManager *this;
  undefined4 uVar2;
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined2 uStack_59;
  undefined1 uStack_57;
  undefined4 uStack_56;
  undefined1 uStack_52;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  RentalInfo local_20 [2];
  undefined2 local_1e;
  undefined4 local_1c;
  RentInElem local_18;
  RentInElem local_17;
  undefined1 local_16;
  RentInElem local_15;
  undefined4 local_14;
  int *local_10;
  
  iVar1 = *(int *)param_3;
  this = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this,iVar1);
  if (local_10 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_5d);
    uStack_5b = (undefined2)*(undefined4 *)param_3;
    uStack_59 = (undefined2)((uint)*(undefined4 *)param_3 >> 0x10);
    (**(code **)(*local_10 + 8))(local_10,&local_5d);
    if (*(int *)(param_2 + 4) != -1) {
      uStack_56 = *(undefined4 *)(param_2 + 4);
    }
    Inven_Item::SetUpgrade((Inven_Item *)&local_5d,(uchar)*(undefined2 *)(param_3 + 8));
    InstanceRentalSystem::RentalInfo::RentalInfo(local_20);
    uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_1e = CInventory::insertItemIntoEquipment
                         (uVar2,CONCAT22(uStack_5b,local_5d),
                          CONCAT13((undefined1)uStack_56,CONCAT12(uStack_57,uStack_59)),
                          CONCAT13(uStack_52,uStack_56._1_3_),local_51,local_4d,local_49,local_45,
                          local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,local_25,
                          local_21,param_5,1,0);
    local_1c = *(undefined4 *)param_3;
    local_20[0] = (RentalInfo)0x3;
    local_16 = 1;
    local_18 = *param_2;
    local_17 = param_2[1];
    local_15 = param_2[3];
    if (*(int *)(param_2 + 4) == -1) {
      local_14 = uStack_56;
    }
    else {
      local_14 = *(undefined4 *)(param_2 + 4);
    }
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    push_back((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
               *)param_4,local_20);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ProcessInsertItem

```asm
// === 08271666 pc_room::ProcessInsertItem  [0x08271666-0x8271806] ===
 8271666:	55                   	push   %ebp
 8271667:	89 e5                	mov    %esp,%ebp
 8271669:	53                   	push   %ebx
 827166a:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 8271670:	8b 45 10             	mov    0x10(%ebp),%eax
 8271673:	8b 00                	mov    (%eax),%eax
 8271675:	89 c3                	mov    %eax,%ebx
 8271677:	e8 1f ab e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827167c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8271680:	89 04 24             	mov    %eax,(%esp)
 8271683:	e8 aa e3 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8271688:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827168b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 827168f:	75 0a                	jne    827169b <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x35>
 8271691:	b8 01 00 00 00       	mov    $0x1,%eax
 8271696:	e9 63 01 00 00       	jmp    82717fe <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x198>
 827169b:	8d 45 a7             	lea    -0x59(%ebp),%eax
 827169e:	89 04 24             	mov    %eax,(%esp)
 82716a1:	e8 ae a1 e5 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 82716a6:	8b 45 10             	mov    0x10(%ebp),%eax
 82716a9:	8b 00                	mov    (%eax),%eax
 82716ab:	89 45 a9             	mov    %eax,-0x57(%ebp)
 82716ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82716b1:	8b 00                	mov    (%eax),%eax
 82716b3:	83 c0 08             	add    $0x8,%eax
 82716b6:	8b 10                	mov    (%eax),%edx
 82716b8:	8d 45 a7             	lea    -0x59(%ebp),%eax
 82716bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 82716bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82716c2:	89 04 24             	mov    %eax,(%esp)
 82716c5:	ff d2                	call   *%edx
 82716c7:	8b 45 10             	mov    0x10(%ebp),%eax
 82716ca:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 82716ce:	0f b6 c0             	movzbl %al,%eax
 82716d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82716d5:	8d 45 a7             	lea    -0x59(%ebp),%eax
 82716d8:	89 04 24             	mov    %eax,(%esp)
 82716db:	e8 1c f9 e7 ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 82716e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82716e3:	8b 40 04             	mov    0x4(%eax),%eax
 82716e6:	83 f8 ff             	cmp    $0xffffffff,%eax
 82716e9:	74 09                	je     82716f4 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x8e>
 82716eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82716ee:	8b 40 04             	mov    0x4(%eax),%eax
 82716f1:	89 45 ae             	mov    %eax,-0x52(%ebp)
 82716f4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82716f7:	89 04 24             	mov    %eax,(%esp)
 82716fa:	e8 f7 02 00 00       	call   82719f6 <_ZN20InstanceRentalSystem10RentalInfoC1Ev>
 82716ff:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8271702:	8b 45 08             	mov    0x8(%ebp),%eax
 8271705:	89 04 24             	mov    %eax,(%esp)
 8271708:	e8 81 8b e6 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 827170d:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8271714:	00 
 8271715:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 827171c:	00 
 827171d:	89 5c 24 44          	mov    %ebx,0x44(%esp)
 8271721:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8271724:	89 54 24 04          	mov    %edx,0x4(%esp)
 8271728:	8b 55 ab             	mov    -0x55(%ebp),%edx
 827172b:	89 54 24 08          	mov    %edx,0x8(%esp)
 827172f:	8b 55 af             	mov    -0x51(%ebp),%edx
 8271732:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8271736:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 8271739:	89 54 24 10          	mov    %edx,0x10(%esp)
 827173d:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8271740:	89 54 24 14          	mov    %edx,0x14(%esp)
 8271744:	8b 55 bb             	mov    -0x45(%ebp),%edx
 8271747:	89 54 24 18          	mov    %edx,0x18(%esp)
 827174b:	8b 55 bf             	mov    -0x41(%ebp),%edx
 827174e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8271752:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8271755:	89 54 24 20          	mov    %edx,0x20(%esp)
 8271759:	8b 55 c7             	mov    -0x39(%ebp),%edx
 827175c:	89 54 24 24          	mov    %edx,0x24(%esp)
 8271760:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8271763:	89 54 24 28          	mov    %edx,0x28(%esp)
 8271767:	8b 55 cf             	mov    -0x31(%ebp),%edx
 827176a:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 827176e:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 8271771:	89 54 24 30          	mov    %edx,0x30(%esp)
 8271775:	8b 55 d7             	mov    -0x29(%ebp),%edx
 8271778:	89 54 24 34          	mov    %edx,0x34(%esp)
 827177c:	8b 55 db             	mov    -0x25(%ebp),%edx
 827177f:	89 54 24 38          	mov    %edx,0x38(%esp)
 8271783:	8b 55 df             	mov    -0x21(%ebp),%edx
 8271786:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 827178a:	0f b6 55 e3          	movzbl -0x1d(%ebp),%edx
 827178e:	88 54 24 40          	mov    %dl,0x40(%esp)
 8271792:	89 04 24             	mov    %eax,(%esp)
 8271795:	e8 ec 15 29 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 827179a:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 827179e:	8b 45 10             	mov    0x10(%ebp),%eax
 82717a1:	8b 00                	mov    (%eax),%eax
 82717a3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 82717a6:	c6 45 e4 00          	movb   $0x0,-0x1c(%ebp)
 82717aa:	c6 45 ee 00          	movb   $0x0,-0x12(%ebp)
 82717ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 82717b1:	0f b6 00             	movzbl (%eax),%eax
 82717b4:	88 45 ec             	mov    %al,-0x14(%ebp)
 82717b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82717ba:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 82717be:	88 45 ed             	mov    %al,-0x13(%ebp)
 82717c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82717c4:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 82717c8:	88 45 ef             	mov    %al,-0x11(%ebp)
 82717cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82717ce:	8b 40 04             	mov    0x4(%eax),%eax
 82717d1:	83 f8 ff             	cmp    $0xffffffff,%eax
 82717d4:	74 0b                	je     82717e1 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x17b>
 82717d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82717d9:	8b 40 04             	mov    0x4(%eax),%eax
 82717dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82717df:	eb 06                	jmp    82717e7 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi+0x181>
 82717e1:	8b 45 ae             	mov    -0x52(%ebp),%eax
 82717e4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82717e7:	8b 45 14             	mov    0x14(%ebp),%eax
 82717ea:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82717ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 82717f1:	89 04 24             	mov    %eax,(%esp)
 82717f4:	e8 9f 05 00 00       	call   8271d98 <_ZNSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS1_EE9push_backERKS1_>
 82717f9:	b8 00 00 00 00       	mov    $0x0,%eax
 82717fe:	81 c4 b4 00 00 00    	add    $0xb4,%esp
 8271804:	5b                   	pop    %ebx
 8271805:	5d                   	pop    %ebp
 8271806:	c3                   	ret

```

```c
// pc_room::ProcessInsertItem @ 0x8271666

/* pc_room::ProcessInsertItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&,
   EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int) */

undefined4
pc_room::ProcessInsertItem
          (CUser *param_1,RentInElem *param_2,EventRewardItemInfo *param_3,RentOutput *param_4,
          int param_5)

{
  int iVar1;
  CDataManager *this;
  undefined4 uVar2;
  undefined2 local_5d;
  undefined2 uStack_5b;
  undefined2 uStack_59;
  undefined1 uStack_57;
  undefined4 uStack_56;
  undefined1 uStack_52;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  RentalInfo local_20 [2];
  undefined2 local_1e;
  undefined4 local_1c;
  RentInElem local_18;
  RentInElem local_17;
  undefined1 local_16;
  RentInElem local_15;
  undefined4 local_14;
  int *local_10;
  
  iVar1 = *(int *)param_3;
  this = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this,iVar1);
  if (local_10 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    Inven_Item::Inven_Item((Inven_Item *)&local_5d);
    uStack_5b = (undefined2)*(undefined4 *)param_3;
    uStack_59 = (undefined2)((uint)*(undefined4 *)param_3 >> 0x10);
    (**(code **)(*local_10 + 8))(local_10,&local_5d);
    Inven_Item::SetUpgrade((Inven_Item *)&local_5d,(uchar)*(undefined2 *)(param_3 + 8));
    if (*(int *)(param_2 + 4) != -1) {
      uStack_56 = *(undefined4 *)(param_2 + 4);
    }
    InstanceRentalSystem::RentalInfo::RentalInfo(local_20);
    uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_1e = CInventory::insertItemIntoInventory
                         (uVar2,CONCAT22(uStack_5b,local_5d),
                          CONCAT13((undefined1)uStack_56,CONCAT12(uStack_57,uStack_59)),
                          CONCAT13(uStack_52,uStack_56._1_3_),local_51,local_4d,local_49,local_45,
                          local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,local_25,
                          local_21,param_5,1,0);
    local_1c = *(undefined4 *)param_3;
    local_20[0] = (RentalInfo)0x0;
    local_16 = 0;
    local_18 = *param_2;
    local_17 = param_2[1];
    local_15 = param_2[3];
    if (*(int *)(param_2 + 4) == -1) {
      local_14 = uStack_56;
    }
    else {
      local_14 = *(undefined4 *)(param_2 + 4);
    }
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    push_back((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
               *)param_4,local_20);
    uVar2 = 0;
  }
  return uVar2;
}

```

