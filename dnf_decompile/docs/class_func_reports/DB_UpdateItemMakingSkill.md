# DB_UpdateItemMakingSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08440f3e DB_UpdateItemMakingSkill::dispatch  [0x08440f3e-0x84411ff] ===
 8440f3e:	55                   	push   %ebp
 8440f3f:	89 e5                	mov    %esp,%ebp
 8440f41:	57                   	push   %edi
 8440f42:	56                   	push   %esi
 8440f43:	53                   	push   %ebx
 8440f44:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8440f4a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8440f4f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8440f56:	00 
 8440f57:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8440f5e:	00 
 8440f5f:	89 04 24             	mov    %eax,(%esp)
 8440f62:	e8 d7 42 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8440f67:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8440f6a:	8b 45 14             	mov    0x14(%ebp),%eax
 8440f6d:	89 04 24             	mov    %eax,(%esp)
 8440f70:	e8 ad 2d 01 00       	call   8453d22 <_ZN6Stream12GetOutBufferI21SIG_ITEM_MAKING_SKILLEEPT_v>
 8440f75:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8440f78:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440f7b:	8b 38                	mov    (%eax),%edi
 8440f7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440f80:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 8440f84:	98                   	cwtl
 8440f85:	89 45 88             	mov    %eax,-0x78(%ebp)
 8440f88:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440f8b:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 8440f8f:	98                   	cwtl
 8440f90:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8440f93:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440f96:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 8440f9a:	98                   	cwtl
 8440f9b:	89 45 90             	mov    %eax,-0x70(%ebp)
 8440f9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fa1:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8440fa5:	98                   	cwtl
 8440fa6:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8440fa9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fac:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 8440fb0:	98                   	cwtl
 8440fb1:	89 45 98             	mov    %eax,-0x68(%ebp)
 8440fb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fb7:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8440fbb:	98                   	cwtl
 8440fbc:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8440fbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fc2:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8440fc6:	0f bf f0             	movswl %ax,%esi
 8440fc9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fcc:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8440fd0:	0f bf d8             	movswl %ax,%ebx
 8440fd3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fd6:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8440fda:	0f bf c8             	movswl %ax,%ecx
 8440fdd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fe0:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8440fe4:	0f bf d0             	movswl %ax,%edx
 8440fe7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440fea:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8440fee:	98                   	cwtl
 8440fef:	89 7c 24 34          	mov    %edi,0x34(%esp)
 8440ff3:	8b 7d 88             	mov    -0x78(%ebp),%edi
 8440ff6:	89 7c 24 30          	mov    %edi,0x30(%esp)
 8440ffa:	8b 7d 8c             	mov    -0x74(%ebp),%edi
 8440ffd:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 8441001:	8b 7d 90             	mov    -0x70(%ebp),%edi
 8441004:	89 7c 24 28          	mov    %edi,0x28(%esp)
 8441008:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 844100b:	89 7c 24 24          	mov    %edi,0x24(%esp)
 844100f:	8b 7d 98             	mov    -0x68(%ebp),%edi
 8441012:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8441016:	8b 7d 9c             	mov    -0x64(%ebp),%edi
 8441019:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 844101d:	89 74 24 18          	mov    %esi,0x18(%esp)
 8441021:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8441025:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8441029:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844102d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441031:	c7 44 24 04 6c 61 c5 	movl   $0x8c5616c,0x4(%esp)
 8441038:	08 
 8441039:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844103c:	89 04 24             	mov    %eax,(%esp)
 844103f:	e8 7c 31 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441044:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844104b:	00 
 844104c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844104f:	89 04 24             	mov    %eax,(%esp)
 8441052:	e8 cf 32 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8441057:	83 f0 01             	xor    $0x1,%eax
 844105a:	84 c0                	test   %al,%al
 844105c:	74 49                	je     84410a7 <_ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream+0x169>
 844105e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441061:	8b 18                	mov    (%eax),%ebx
 8441063:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844106a:	00 
 844106b:	c7 44 24 08 de 9f 00 	movl   $0x9fde,0x8(%esp)
 8441072:	00 
 8441073:	c7 44 24 04 00 b9 c5 	movl   $0x8c5b900,0x4(%esp)
 844107a:	08 
 844107b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 844107e:	89 04 24             	mov    %eax,(%esp)
 8441081:	e8 92 e6 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8441086:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844108a:	c7 44 24 04 28 62 c5 	movl   $0x8c56228,0x4(%esp)
 8441091:	08 
 8441092:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8441095:	89 04 24             	mov    %eax,(%esp)
 8441098:	e8 eb e6 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844109d:	b8 00 00 00 00       	mov    $0x0,%eax
 84410a2:	e9 4d 01 00 00       	jmp    84411f4 <_ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream+0x2b6>
 84410a7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84410aa:	89 04 24             	mov    %eax,(%esp)
 84410ad:	e8 5e 32 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84410b2:	09 d0                	or     %edx,%eax
 84410b4:	85 c0                	test   %eax,%eax
 84410b6:	0f 94 c0             	sete   %al
 84410b9:	84 c0                	test   %al,%al
 84410bb:	0f 84 2e 01 00 00    	je     84411ef <_ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream+0x2b1>
 84410c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84410c4:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 84410c8:	0f bf f8             	movswl %ax,%edi
 84410cb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84410ce:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 84410d2:	98                   	cwtl
 84410d3:	89 45 a0             	mov    %eax,-0x60(%ebp)
 84410d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84410d9:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 84410dd:	98                   	cwtl
 84410de:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84410e1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84410e4:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 84410e8:	98                   	cwtl
 84410e9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84410ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84410ef:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 84410f3:	98                   	cwtl
 84410f4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84410f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84410fa:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84410fe:	98                   	cwtl
 84410ff:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8441102:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441105:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8441109:	98                   	cwtl
 844110a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 844110d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441110:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8441114:	0f bf f0             	movswl %ax,%esi
 8441117:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844111a:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 844111e:	0f bf d8             	movswl %ax,%ebx
 8441121:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441124:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8441128:	0f bf c8             	movswl %ax,%ecx
 844112b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844112e:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8441132:	0f bf d0             	movswl %ax,%edx
 8441135:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441138:	8b 00                	mov    (%eax),%eax
 844113a:	89 7c 24 34          	mov    %edi,0x34(%esp)
 844113e:	8b 7d a0             	mov    -0x60(%ebp),%edi
 8441141:	89 7c 24 30          	mov    %edi,0x30(%esp)
 8441145:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 8441148:	89 7c 24 2c          	mov    %edi,0x2c(%esp)
 844114c:	8b 7d a8             	mov    -0x58(%ebp),%edi
 844114f:	89 7c 24 28          	mov    %edi,0x28(%esp)
 8441153:	8b 7d ac             	mov    -0x54(%ebp),%edi
 8441156:	89 7c 24 24          	mov    %edi,0x24(%esp)
 844115a:	8b 7d b0             	mov    -0x50(%ebp),%edi
 844115d:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8441161:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 8441164:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8441168:	89 74 24 18          	mov    %esi,0x18(%esp)
 844116c:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8441170:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8441174:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8441178:	89 44 24 08          	mov    %eax,0x8(%esp)
 844117c:	c7 44 24 04 7c 62 c5 	movl   $0x8c5627c,0x4(%esp)
 8441183:	08 
 8441184:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8441187:	89 04 24             	mov    %eax,(%esp)
 844118a:	e8 31 30 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844118f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441196:	00 
 8441197:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844119a:	89 04 24             	mov    %eax,(%esp)
 844119d:	e8 84 31 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84411a2:	83 f0 01             	xor    $0x1,%eax
 84411a5:	84 c0                	test   %al,%al
 84411a7:	74 46                	je     84411ef <_ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream+0x2b1>
 84411a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84411ac:	8b 18                	mov    (%eax),%ebx
 84411ae:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84411b5:	00 
 84411b6:	c7 44 24 08 f5 9f 00 	movl   $0x9ff5,0x8(%esp)
 84411bd:	00 
 84411be:	c7 44 24 04 00 b9 c5 	movl   $0x8c5b900,0x4(%esp)
 84411c5:	08 
 84411c6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84411c9:	89 04 24             	mov    %eax,(%esp)
 84411cc:	e8 47 e5 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84411d1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84411d5:	c7 44 24 04 48 63 c5 	movl   $0x8c56348,0x4(%esp)
 84411dc:	08 
 84411dd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84411e0:	89 04 24             	mov    %eax,(%esp)
 84411e3:	e8 a0 e5 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84411e8:	b8 00 00 00 00       	mov    $0x0,%eax
 84411ed:	eb 05                	jmp    84411f4 <_ZN24DB_UpdateItemMakingSkill8dispatchEiiP6Stream+0x2b6>
 84411ef:	b8 01 00 00 00       	mov    $0x1,%eax
 84411f4:	81 c4 ac 00 00 00    	add    $0xac,%esp
 84411fa:	5b                   	pop    %ebx
 84411fb:	5e                   	pop    %esi
 84411fc:	5f                   	pop    %edi
 84411fd:	5d                   	pop    %ebp
 84411fe:	c3                   	ret
 84411ff:	90                   	nop

```

```c
// DB_UpdateItemMakingSkill::dispatch @ 0x8440f3e

/* DB_UpdateItemMakingSkill::dispatch(int, int, Stream*) */

undefined4 DB_UpdateItemMakingSkill::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  Stream *in_stack_00000010;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  SIG_ITEM_MAKING_SKILL *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = Stream::GetOutBuffer<SIG_ITEM_MAKING_SKILL>(in_stack_00000010);
  MySQL::set_query(local_24,
                   "upDate item_making_skill_info set weapon=%d, cloth=%d, leather=%d, light_armor=%d, heavy_armor=%d, plate=%d, amulet=%d, wrist=%d, ring=%d, support=%d, magic_stone=%d where charac_no =%u"
                   ,(int)*(short *)(local_20 + 4),(int)*(short *)(local_20 + 6),
                   (int)*(short *)(local_20 + 8),(int)*(short *)(local_20 + 10),
                   (int)*(short *)(local_20 + 0xc),(int)*(short *)(local_20 + 0xe),
                   (int)*(short *)(local_20 + 0x10),(int)*(short *)(local_20 + 0x12),
                   (int)*(short *)(local_20 + 0x14),(int)*(short *)(local_20 + 0x16),
                   (int)*(short *)(local_20 + 0x18),*(undefined4 *)local_20);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(local_24);
    if (lVar3 == 0) {
      MySQL::set_query(local_24,
                       "inSert into item_making_skill_info (charac_no, weapon, cloth, leather, light_armor, heavy_armor, plate, amulet, wrist, ring, support, magic_stone) values(%u, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d )"
                       ,*(undefined4 *)local_20,(int)*(short *)(local_20 + 4),
                       (int)*(short *)(local_20 + 6),(int)*(short *)(local_20 + 8),
                       (int)*(short *)(local_20 + 10),(int)*(short *)(local_20 + 0xc),
                       (int)*(short *)(local_20 + 0xe),(int)*(short *)(local_20 + 0x10),
                       (int)*(short *)(local_20 + 0x12),(int)*(short *)(local_20 + 0x14),
                       (int)*(short *)(local_20 + 0x16),(int)*(short *)(local_20 + 0x18));
      cVar1 = MySQL::exec(local_24,true);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)local_20;
        cMyTrace::cMyTrace(local_34,
                           "virtual bool DB_UpdateItemMakingSkill::dispatch(int, int, Stream*)",
                           0x9ff5,5);
        cMyTrace::operator()
                  (local_34,
                   "DB_UpdateItemMakingSkill::InsertItemMakingSkill insert, exec() ERROR charac_no=%u"
                   ,uVar2);
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)local_20;
    cMyTrace::cMyTrace(local_44,"virtual bool DB_UpdateItemMakingSkill::dispatch(int, int, Stream*)"
                       ,0x9fde,5);
    cMyTrace::operator()
              (local_44,
               "DB_UpdateItemMakingSkill::UpdateItemMakingSkill update, exec() ERROR charac_no=%u",
               uVar2);
    uVar2 = 0;
  }
  return uVar2;
}

```

