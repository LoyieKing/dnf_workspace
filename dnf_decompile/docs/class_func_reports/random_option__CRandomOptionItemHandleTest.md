# random_option__CRandomOptionItemHandleTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## _get_auction_id

```asm
// === 085f3cc4 random_option::CRandomOptionItemHandleTest::_get_auction_id  [0x085f3cc4-0x85f3db9] ===
 85f3cc4:	55                   	push   %ebp
 85f3cc5:	89 e5                	mov    %esp,%ebp
 85f3cc7:	83 ec 28             	sub    $0x28,%esp
 85f3cca:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3ccd:	8b 50 04             	mov    0x4(%eax),%edx
 85f3cd0:	8b 00                	mov    (%eax),%eax
 85f3cd2:	09 d0                	or     %edx,%eax
 85f3cd4:	85 c0                	test   %eax,%eax
 85f3cd6:	74 0d                	je     85f3ce5 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0x21>
 85f3cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3cdb:	8b 50 04             	mov    0x4(%eax),%edx
 85f3cde:	8b 00                	mov    (%eax),%eax
 85f3ce0:	e9 d2 00 00 00       	jmp    85f3db7 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xf3>
 85f3ce5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 85f3cea:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85f3cf1:	00 
 85f3cf2:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 85f3cf9:	00 
 85f3cfa:	89 04 24             	mov    %eax,(%esp)
 85f3cfd:	e8 3c 15 e0 ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 85f3d02:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f3d05:	c7 44 24 04 2c 01 cd 	movl   $0x8cd012c,0x4(%esp)
 85f3d0c:	08 
 85f3d0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3d10:	89 04 24             	mov    %eax,(%esp)
 85f3d13:	e8 a8 04 e0 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 85f3d18:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85f3d1f:	00 
 85f3d20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3d23:	89 04 24             	mov    %eax,(%esp)
 85f3d26:	e8 fb 05 e0 ff       	call   83f4326 <_ZN5MySQL4execEb>
 85f3d2b:	83 f0 01             	xor    $0x1,%eax
 85f3d2e:	84 c0                	test   %al,%al
 85f3d30:	74 0c                	je     85f3d3e <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0x7a>
 85f3d32:	b8 00 00 00 00       	mov    $0x0,%eax
 85f3d37:	ba 00 00 00 00       	mov    $0x0,%edx
 85f3d3c:	eb 79                	jmp    85f3db7 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xf3>
 85f3d3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3d41:	89 04 24             	mov    %eax,(%esp)
 85f3d44:	e8 73 07 e0 ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 85f3d49:	83 f0 01             	xor    $0x1,%eax
 85f3d4c:	84 c0                	test   %al,%al
 85f3d4e:	74 0c                	je     85f3d5c <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0x98>
 85f3d50:	b8 00 00 00 00       	mov    $0x0,%eax
 85f3d55:	ba 00 00 00 00       	mov    $0x0,%edx
 85f3d5a:	eb 5b                	jmp    85f3db7 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xf3>
 85f3d5c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f3d63:	00 
 85f3d64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3d67:	89 04 24             	mov    %eax,(%esp)
 85f3d6a:	e8 43 04 00 00       	call   85f41b2 <_ZN5MySQL13is_valid_dataEi>
 85f3d6f:	83 f0 01             	xor    $0x1,%eax
 85f3d72:	84 c0                	test   %al,%al
 85f3d74:	74 0c                	je     85f3d82 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xbe>
 85f3d76:	b8 00 00 00 00       	mov    $0x0,%eax
 85f3d7b:	ba 00 00 00 00       	mov    $0x0,%edx
 85f3d80:	eb 35                	jmp    85f3db7 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xf3>
 85f3d82:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3d85:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f3d89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f3d90:	00 
 85f3d91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3d94:	89 04 24             	mov    %eax,(%esp)
 85f3d97:	e8 78 04 00 00       	call   85f4214 <_ZN5MySQL12get_longlongEiRx>
 85f3d9c:	83 f0 01             	xor    $0x1,%eax
 85f3d9f:	84 c0                	test   %al,%al
 85f3da1:	74 0c                	je     85f3daf <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xeb>
 85f3da3:	b8 00 00 00 00       	mov    $0x0,%eax
 85f3da8:	ba 00 00 00 00       	mov    $0x0,%edx
 85f3dad:	eb 08                	jmp    85f3db7 <_ZN13random_option27CRandomOptionItemHandleTest15_get_auction_idEv+0xf3>
 85f3daf:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3db2:	8b 50 04             	mov    0x4(%eax),%edx
 85f3db5:	8b 00                	mov    (%eax),%eax
 85f3db7:	c9                   	leave
 85f3db8:	c3                   	ret
 85f3db9:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandleTest::_get_auction_id @ 0x85f3cc4

/* random_option::CRandomOptionItemHandleTest::_get_auction_id() */

undefined8 __thiscall
random_option::CRandomOptionItemHandleTest::_get_auction_id(CRandomOptionItemHandleTest *this)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)this == 0 && *(int *)(this + 4) == 0) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xc,0);
    MySQL::set_query(this_00,"seLect max(auction_id) from auction_main");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::is_valid_data(this_00,0);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_longlong(this_00,0,(longlong *)this);
          if (cVar1 == '\x01') {
            uVar3 = *(undefined4 *)(this + 4);
            uVar2 = *(undefined4 *)this;
          }
          else {
            uVar2 = 0;
            uVar3 = 0;
          }
        }
        else {
          uVar2 = 0;
          uVar3 = 0;
        }
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = *(undefined4 *)(this + 4);
    uVar2 = *(undefined4 *)this;
  }
  return CONCAT44(uVar3,uVar2);
}

```

---

## _regist_auction

```asm
// === 085f3dba random_option::CRandomOptionItemHandleTest::_regist_auction  [0x085f3dba-0x85f3f93] ===
 85f3dba:	55                   	push   %ebp
 85f3dbb:	89 e5                	mov    %esp,%ebp
 85f3dbd:	57                   	push   %edi
 85f3dbe:	56                   	push   %esi
 85f3dbf:	53                   	push   %ebx
 85f3dc0:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 85f3dc6:	8b 45 10             	mov    0x10(%ebp),%eax
 85f3dc9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85f3dcc:	8b 45 14             	mov    0x14(%ebp),%eax
 85f3dcf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85f3dd2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 85f3dd7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85f3dde:	00 
 85f3ddf:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 85f3de6:	00 
 85f3de7:	89 04 24             	mov    %eax,(%esp)
 85f3dea:	e8 4f 14 e0 ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 85f3def:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f3df2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3df5:	83 c0 25             	add    $0x25,%eax
 85f3df8:	c7 44 24 0c 0e 00 00 	movl   $0xe,0xc(%esp)
 85f3dff:	00 
 85f3e00:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f3e04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85f3e0b:	00 
 85f3e0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f3e0f:	89 04 24             	mov    %eax,(%esp)
 85f3e12:	e8 13 07 e0 ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 85f3e17:	89 c6                	mov    %eax,%esi
 85f3e19:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e1c:	83 c0 15             	add    $0x15,%eax
 85f3e1f:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 85f3e26:	00 
 85f3e27:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f3e2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f3e32:	00 
 85f3e33:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f3e36:	89 04 24             	mov    %eax,(%esp)
 85f3e39:	e8 ec 06 e0 ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 85f3e3e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85f3e41:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e44:	83 c0 11             	add    $0x11,%eax
 85f3e47:	89 04 24             	mov    %eax,(%esp)
 85f3e4a:	e8 23 c9 b5 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 85f3e4f:	0f b7 c0             	movzwl %ax,%eax
 85f3e52:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85f3e55:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e58:	83 c0 11             	add    $0x11,%eax
 85f3e5b:	89 04 24             	mov    %eax,(%esp)
 85f3e5e:	e8 cf c8 b5 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 85f3e63:	0f b6 c0             	movzbl %al,%eax
 85f3e66:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85f3e69:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e6c:	8b 40 0d             	mov    0xd(%eax),%eax
 85f3e6f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85f3e72:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e75:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 85f3e79:	0f b7 c0             	movzwl %ax,%eax
 85f3e7c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85f3e7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e82:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 85f3e86:	c0 e8 05             	shr    $0x5,%al
 85f3e89:	0f b6 c0             	movzbl %al,%eax
 85f3e8c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85f3e8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3e92:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 85f3e96:	83 e0 1f             	and    $0x1f,%eax
 85f3e99:	0f b6 c0             	movzbl %al,%eax
 85f3e9c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85f3e9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3ea2:	8b 78 07             	mov    0x7(%eax),%edi
 85f3ea5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3ea8:	8b 58 02             	mov    0x2(%eax),%ebx
 85f3eab:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f3eae:	0f b6 00             	movzbl (%eax),%eax
 85f3eb1:	0f b6 c8             	movzbl %al,%ecx
 85f3eb4:	8b 45 18             	mov    0x18(%ebp),%eax
 85f3eb7:	8d 90 80 f4 03 00    	lea    0x3f480(%eax),%edx
 85f3ebd:	89 74 24 64          	mov    %esi,0x64(%esp)
 85f3ec1:	c7 44 24 60 00 00 00 	movl   $0x0,0x60(%esp)
 85f3ec8:	00 
 85f3ec9:	c7 44 24 5c 01 00 00 	movl   $0x1,0x5c(%esp)
 85f3ed0:	00 
 85f3ed1:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 85f3ed4:	89 44 24 58          	mov    %eax,0x58(%esp)
 85f3ed8:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%esp)
 85f3edf:	00 
 85f3ee0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 85f3ee3:	89 44 24 50          	mov    %eax,0x50(%esp)
 85f3ee7:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85f3eea:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 85f3eee:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85f3ef1:	89 44 24 48          	mov    %eax,0x48(%esp)
 85f3ef5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85f3ef8:	89 44 24 44          	mov    %eax,0x44(%esp)
 85f3efc:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85f3eff:	89 44 24 40          	mov    %eax,0x40(%esp)
 85f3f03:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85f3f06:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 85f3f0a:	89 7c 24 38          	mov    %edi,0x38(%esp)
 85f3f0e:	89 5c 24 34          	mov    %ebx,0x34(%esp)
 85f3f12:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85f3f16:	c7 44 24 2c 02 00 00 	movl   $0x2,0x2c(%esp)
 85f3f1d:	00 
 85f3f1e:	c7 44 24 28 01 00 00 	movl   $0x1,0x28(%esp)
 85f3f25:	00 
 85f3f26:	c7 44 24 24 55 01 cd 	movl   $0x8cd0155,0x24(%esp)
 85f3f2d:	08 
 85f3f2e:	c7 44 24 20 ff ff ff 	movl   $0xffffffff,0x20(%esp)
 85f3f35:	ff 
 85f3f36:	8b 45 20             	mov    0x20(%ebp),%eax
 85f3f39:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85f3f3d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f3f40:	89 44 24 18          	mov    %eax,0x18(%esp)
 85f3f44:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f3f48:	8b 45 18             	mov    0x18(%ebp),%eax
 85f3f4b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f3f4f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85f3f52:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85f3f55:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f3f59:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f3f5d:	c7 44 24 04 58 01 cd 	movl   $0x8cd0158,0x4(%esp)
 85f3f64:	08 
 85f3f65:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f3f68:	89 04 24             	mov    %eax,(%esp)
 85f3f6b:	e8 50 02 e0 ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 85f3f70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85f3f77:	00 
 85f3f78:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f3f7b:	89 04 24             	mov    %eax,(%esp)
 85f3f7e:	e8 a3 03 e0 ff       	call   83f4326 <_ZN5MySQL4execEb>
 85f3f83:	b8 01 00 00 00       	mov    $0x1,%eax
 85f3f88:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 85f3f8e:	5b                   	pop    %ebx
 85f3f8f:	5e                   	pop    %esi
 85f3f90:	5f                   	pop    %edi
 85f3f91:	5d                   	pop    %ebp
 85f3f92:	c3                   	ret
 85f3f93:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandleTest::_regist_auction @ 0x85f3dba

/* random_option::CRandomOptionItemHandleTest::_regist_auction(Inven_Item&, long long, int, int,
   char const*) */

undefined4
random_option::CRandomOptionItemHandleTest::_regist_auction
          (Inven_Item *param_1,longlong param_2,int param_3,int param_4,char *param_5)

{
  MySQL *this;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_stack_0000001c;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xc,0);
  uVar1 = MySQL::blob_to_str(this,1,(byte *)param_2 + 0x25,0xe);
  uVar2 = MySQL::blob_to_str(this,0,(byte *)param_2 + 0x15,10);
  uVar3 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)((byte *)param_2 + 0x11));
  uVar4 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)((byte *)param_2 + 0x11));
  MySQL::set_query(this,
                   "inSert into auction_main(auction_id,occ_time,expire_time,owner_id,owner_name,buyer_id,buyer_name,price,instant_price,seal_flag,item_id,add_info,upgrade,seal_cnt,endurance,extend_info,amplify_option,amplify_value,owner_type,item_guid,unit_price,black_point,random_option) values(%llu,from_unixtime(%d),%d,%d,\'%s\',%d,\'%s\',%d,%d,%d,%u,%d,%hhu,%hhu,%hu,%hu,%hhu,%hu,%hhu,\'%s\',%d,%d,\'%s\')"
                   ,param_2._4_4_,param_3,param_4,param_4 + 0x3f480,param_5,in_stack_0000001c,
                   0xffffffff,&DAT_08cd0155,1,2,(uint)*(byte *)param_2,
                   *(undefined4 *)((byte *)param_2 + 2),*(undefined4 *)((byte *)param_2 + 7),
                   (uint)(((byte *)param_2)[6] & 0x1f),(uint)(((byte *)param_2)[6] >> 5),
                   (uint)*(ushort *)((byte *)param_2 + 0xb),*(undefined4 *)((byte *)param_2 + 0xd),
                   uVar4 & 0xff,uVar3 & 0xffff,0,uVar2,1,0,uVar1);
  MySQL::exec(this,true);
  return 1;
}

```

---

## test_change

```asm
// === 085f3f9a random_option::CRandomOptionItemHandleTest::test_change  [0x085f3f9a-0x85f3f9f] ===
 85f3f9a:	55                   	push   %ebp
 85f3f9b:	89 e5                	mov    %esp,%ebp
 85f3f9d:	5d                   	pop    %ebp
 85f3f9e:	c3                   	ret
 85f3f9f:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandleTest::test_change @ 0x85f3f9a

/* random_option::CRandomOptionItemHandleTest::test_change() */

void random_option::CRandomOptionItemHandleTest::test_change(void)

{
  return;
}

```

---

## test_drop

```asm
// === 085f3cb8 random_option::CRandomOptionItemHandleTest::test_drop  [0x085f3cb8-0x85f3cbd] ===
 85f3cb8:	55                   	push   %ebp
 85f3cb9:	89 e5                	mov    %esp,%ebp
 85f3cbb:	5d                   	pop    %ebp
 85f3cbc:	c3                   	ret
 85f3cbd:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandleTest::test_drop @ 0x85f3cb8

/* random_option::CRandomOptionItemHandleTest::test_drop() */

void random_option::CRandomOptionItemHandleTest::test_drop(void)

{
  return;
}

```

---

## test_regist_auction

```asm
// === 085f3f94 random_option::CRandomOptionItemHandleTest::test_regist_auction  [0x085f3f94-0x85f3f99] ===
 85f3f94:	55                   	push   %ebp
 85f3f95:	89 e5                	mov    %esp,%ebp
 85f3f97:	5d                   	pop    %ebp
 85f3f98:	c3                   	ret
 85f3f99:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandleTest::test_regist_auction @ 0x85f3f94

/* random_option::CRandomOptionItemHandleTest::test_regist_auction(CUser*) */

void random_option::CRandomOptionItemHandleTest::test_regist_auction(CUser *param_1)

{
  return;
}

```

---

## test_reset

```asm
// === 085f3fa0 random_option::CRandomOptionItemHandleTest::test_reset  [0x085f3fa0-0x85f3fa4] ===
 85f3fa0:	55                   	push   %ebp
 85f3fa1:	89 e5                	mov    %esp,%ebp
 85f3fa3:	5d                   	pop    %ebp
 85f3fa4:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandleTest::test_reset @ 0x85f3fa0

/* random_option::CRandomOptionItemHandleTest::test_reset() */

void random_option::CRandomOptionItemHandleTest::test_reset(void)

{
  return;
}

```

---

## test_unseal

```asm
// === 085f3cbe random_option::CRandomOptionItemHandleTest::test_unseal  [0x085f3cbe-0x85f3cc3] ===
 85f3cbe:	55                   	push   %ebp
 85f3cbf:	89 e5                	mov    %esp,%ebp
 85f3cc1:	5d                   	pop    %ebp
 85f3cc2:	c3                   	ret
 85f3cc3:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandleTest::test_unseal @ 0x85f3cbe

/* random_option::CRandomOptionItemHandleTest::test_unseal() */

void random_option::CRandomOptionItemHandleTest::test_unseal(void)

{
  return;
}

```

