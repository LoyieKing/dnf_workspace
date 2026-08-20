# CheckDestroyConditionSealDoor

`_ZN6CParty29CheckDestroyConditionSealDoorEPK8CDungeonRSt6vectorIiSaIiEES6_`

`CParty::CheckDestroyConditionSealDoor(CDungeon const*, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a7d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a7d86  _ZN6CParty29CheckDestroyConditionSealDoorEPK8CDungeonRSt6vectorIiSaIiEES6_
#           CParty::CheckDestroyConditionSealDoor(CDungeon const*, std::vector<int, std::allocator<int> >&, std::vector<int, std::allocator<int> >&)
# range [0x085a7d86, 0x085a8037]
085a7d86 +0x000:  push   %ebp
085a7d87 +0x001:  mov    %esp,%ebp
085a7d89 +0x003:  push   %ebx
085a7d8a +0x004:  sub    $0xc4,%esp
085a7d90 +0x00a:  movl   $0x0,-0x20(%ebp)
085a7d97 +0x011:  movl   $0x0,-0x1c(%ebp)
085a7d9e +0x018:  movl   $0x0,-0x18(%ebp)
085a7da5 +0x01f:  movl   $0x0,-0x14(%ebp)
085a7dac +0x026:  lea    -0x69(%ebp),%eax
085a7daf +0x029:  mov    %eax,(%esp)
085a7db2 +0x02c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085a7db7 +0x031:  movb   $0x0,-0xd(%ebp)
085a7dbb +0x035:  movl   $0x0,-0x28(%ebp)
085a7dc2 +0x03c:  jmp    085a8012 <+0x28c>
085a7dc7 +0x041:  mov    -0x28(%ebp),%eax
085a7dca +0x044:  mov    %eax,0x4(%esp)
085a7dce +0x048:  mov    0x8(%ebp),%eax
085a7dd1 +0x04b:  mov    %eax,(%esp)
085a7dd4 +0x04e:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a7dd9 +0x053:  xor    $0x1,%eax
085a7ddc +0x056:  test   %al,%al
085a7dde +0x058:  jne    085a8008 <+0x282>
085a7de4 +0x05e:  addl   $0x1,-0x1c(%ebp)
085a7de8 +0x062:  movl   $0x0,-0x18(%ebp)
085a7def +0x069:  mov    -0x28(%ebp),%edx
085a7df2 +0x06c:  mov    0x8(%ebp),%ecx
085a7df5 +0x06f:  mov    %edx,%eax
085a7df7 +0x071:  add    %eax,%eax
085a7df9 +0x073:  add    %edx,%eax
085a7dfb +0x075:  shl    $0x3,%eax
085a7dfe +0x078:  lea    (%ecx,%eax,1),%eax
085a7e01 +0x07b:  add    $0x78,%eax
085a7e04 +0x07e:  mov    (%eax),%eax
085a7e06 +0x080:  movl   $0x0,0x8(%esp)
085a7e0e +0x088:  mov    %eax,0x4(%esp)
085a7e12 +0x08c:  mov    0x8(%ebp),%eax
085a7e15 +0x08f:  mov    %eax,(%esp)
085a7e18 +0x092:  call   085bc86e <_ZN6CParty38CheckHellDungeonFreepassItemHaveAndDelEP5CUserb>  ; CParty::CheckHellDungeonFreepassItemHaveAndDel(CUser*, bool)
085a7e1d +0x097:  test   %al,%al
085a7e1f +0x099:  je     085a7e2a <+0xa4>
085a7e21 +0x09b:  addl   $0x1,-0x20(%ebp)
085a7e25 +0x09f:  jmp    085a8009 <+0x283>
085a7e2a +0x0a4:  mov    0xc(%ebp),%eax
085a7e2d +0x0a7:  mov    %eax,(%esp)
085a7e30 +0x0aa:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a7e35 +0x0af:  cmp    $0x2c,%eax
085a7e38 +0x0b2:  setle  %al
085a7e3b +0x0b5:  test   %al,%al
085a7e3d +0x0b7:  je     085a7e49 <+0xc3>
085a7e3f +0x0b9:  mov    $0x0,%eax
085a7e44 +0x0be:  jmp    085a8033 <+0x2ad>
085a7e49 +0x0c3:  mov    0xc(%ebp),%eax
085a7e4c +0x0c6:  mov    %eax,(%esp)
085a7e4f +0x0c9:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a7e54 +0x0ce:  mov    %eax,(%esp)
085a7e57 +0x0d1:  call   08891be6 <_Z33getHellPartyEntranceItemNeedCounti>  ; getHellPartyEntranceItemNeedCount(int)
085a7e5c +0x0d6:  mov    %eax,-0xc(%ebp)
085a7e5f +0x0d9:  lea    -0x2c(%ebp),%eax
085a7e62 +0x0dc:  mov    0x14(%ebp),%edx
085a7e65 +0x0df:  mov    %edx,0x4(%esp)
085a7e69 +0x0e3:  mov    %eax,(%esp)
085a7e6c +0x0e6:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085a7e71 +0x0eb:  sub    $0x4,%esp
085a7e74 +0x0ee:  jmp    085a7fa8 <+0x222>
085a7e79 +0x0f3:  lea    -0x2c(%ebp),%eax
085a7e7c +0x0f6:  mov    %eax,(%esp)
085a7e7f +0x0f9:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085a7e84 +0x0fe:  mov    (%eax),%ebx
085a7e86 +0x100:  mov    -0x28(%ebp),%edx
085a7e89 +0x103:  mov    0x8(%ebp),%ecx
085a7e8c +0x106:  mov    %edx,%eax
085a7e8e +0x108:  add    %eax,%eax
085a7e90 +0x10a:  add    %edx,%eax
085a7e92 +0x10c:  shl    $0x3,%eax
085a7e95 +0x10f:  lea    (%ecx,%eax,1),%eax
085a7e98 +0x112:  add    $0x78,%eax
085a7e9b +0x115:  mov    (%eax),%eax
085a7e9d +0x117:  mov    %eax,(%esp)
085a7ea0 +0x11a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a7ea5 +0x11f:  mov    %ebx,0x4(%esp)
085a7ea9 +0x123:  mov    %eax,(%esp)
085a7eac +0x126:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
085a7eb1 +0x12b:  mov    %eax,-0x14(%ebp)
085a7eb4 +0x12e:  cmpl   $0xffffffff,-0x14(%ebp)
085a7eb8 +0x132:  setne  %al
085a7ebb +0x135:  test   %al,%al
085a7ebd +0x137:  je     085a7f9d <+0x217>
085a7ec3 +0x13d:  mov    -0x28(%ebp),%edx
085a7ec6 +0x140:  mov    0x8(%ebp),%ecx
085a7ec9 +0x143:  mov    %edx,%eax
085a7ecb +0x145:  add    %eax,%eax
085a7ecd +0x147:  add    %edx,%eax
085a7ecf +0x149:  shl    $0x3,%eax
085a7ed2 +0x14c:  lea    (%ecx,%eax,1),%eax
085a7ed5 +0x14f:  add    $0x78,%eax
085a7ed8 +0x152:  mov    (%eax),%eax
085a7eda +0x154:  mov    %eax,(%esp)
085a7edd +0x157:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a7ee2 +0x15c:  lea    -0xb8(%ebp),%edx
085a7ee8 +0x162:  mov    -0x14(%ebp),%ecx
085a7eeb +0x165:  mov    %ecx,0xc(%esp)
085a7eef +0x169:  movl   $0x1,0x8(%esp)
085a7ef7 +0x171:  mov    %eax,0x4(%esp)
085a7efb +0x175:  mov    %edx,(%esp)
085a7efe +0x178:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085a7f03 +0x17d:  sub    $0x4,%esp
085a7f06 +0x180:  mov    -0xb8(%ebp),%eax
085a7f0c +0x186:  mov    %eax,-0x69(%ebp)
085a7f0f +0x189:  mov    -0xb4(%ebp),%eax
085a7f15 +0x18f:  mov    %eax,-0x65(%ebp)
085a7f18 +0x192:  mov    -0xb0(%ebp),%eax
085a7f1e +0x198:  mov    %eax,-0x61(%ebp)
085a7f21 +0x19b:  mov    -0xac(%ebp),%eax
085a7f27 +0x1a1:  mov    %eax,-0x5d(%ebp)
085a7f2a +0x1a4:  mov    -0xa8(%ebp),%eax
085a7f30 +0x1aa:  mov    %eax,-0x59(%ebp)
085a7f33 +0x1ad:  mov    -0xa4(%ebp),%eax
085a7f39 +0x1b3:  mov    %eax,-0x55(%ebp)
085a7f3c +0x1b6:  mov    -0xa0(%ebp),%eax
085a7f42 +0x1bc:  mov    %eax,-0x51(%ebp)
085a7f45 +0x1bf:  mov    -0x9c(%ebp),%eax
085a7f4b +0x1c5:  mov    %eax,-0x4d(%ebp)
085a7f4e +0x1c8:  mov    -0x98(%ebp),%eax
085a7f54 +0x1ce:  mov    %eax,-0x49(%ebp)
085a7f57 +0x1d1:  mov    -0x94(%ebp),%eax
085a7f5d +0x1d7:  mov    %eax,-0x45(%ebp)
085a7f60 +0x1da:  mov    -0x90(%ebp),%eax
085a7f66 +0x1e0:  mov    %eax,-0x41(%ebp)
085a7f69 +0x1e3:  mov    -0x8c(%ebp),%eax
085a7f6f +0x1e9:  mov    %eax,-0x3d(%ebp)
085a7f72 +0x1ec:  mov    -0x88(%ebp),%eax
085a7f78 +0x1f2:  mov    %eax,-0x39(%ebp)
085a7f7b +0x1f5:  mov    -0x84(%ebp),%eax
085a7f81 +0x1fb:  mov    %eax,-0x35(%ebp)
085a7f84 +0x1fe:  mov    -0x80(%ebp),%eax
085a7f87 +0x201:  mov    %eax,-0x31(%ebp)
085a7f8a +0x204:  movzbl -0x7c(%ebp),%eax
085a7f8e +0x208:  mov    %al,-0x2d(%ebp)
085a7f91 +0x20b:  mov    -0x62(%ebp),%eax
085a7f94 +0x20e:  cmp    -0xc(%ebp),%eax
085a7f97 +0x211:  jl     085a7f9d <+0x217>
085a7f99 +0x213:  addl   $0x1,-0x18(%ebp)
085a7f9d +0x217:  lea    -0x2c(%ebp),%eax
085a7fa0 +0x21a:  mov    %eax,(%esp)
085a7fa3 +0x21d:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
085a7fa8 +0x222:  lea    -0x24(%ebp),%eax
085a7fab +0x225:  mov    0x14(%ebp),%edx
085a7fae +0x228:  mov    %edx,0x4(%esp)
085a7fb2 +0x22c:  mov    %eax,(%esp)
085a7fb5 +0x22f:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085a7fba +0x234:  sub    $0x4,%esp
085a7fbd +0x237:  lea    -0x24(%ebp),%eax
085a7fc0 +0x23a:  mov    %eax,0x4(%esp)
085a7fc4 +0x23e:  lea    -0x2c(%ebp),%eax
085a7fc7 +0x241:  mov    %eax,(%esp)
085a7fca +0x244:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
085a7fcf +0x249:  test   %al,%al
085a7fd1 +0x24b:  jne    085a7e79 <+0xf3>
085a7fd7 +0x251:  mov    -0x18(%ebp),%ebx
085a7fda +0x254:  mov    0x14(%ebp),%eax
085a7fdd +0x257:  mov    %eax,(%esp)
085a7fe0 +0x25a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085a7fe5 +0x25f:  cmp    %eax,%ebx
085a7fe7 +0x261:  sete   %al
085a7fea +0x264:  test   %al,%al
085a7fec +0x266:  je     085a7ff4 <+0x26e>
085a7fee +0x268:  addl   $0x1,-0x20(%ebp)
085a7ff2 +0x26c:  jmp    085a8009 <+0x283>
085a7ff4 +0x26e:  lea    -0x28(%ebp),%eax
085a7ff7 +0x271:  mov    %eax,0x4(%esp)
085a7ffb +0x275:  mov    0x10(%ebp),%eax
085a7ffe +0x278:  mov    %eax,(%esp)
085a8001 +0x27b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085a8006 +0x280:  jmp    085a8009 <+0x283>
085a8008 +0x282:  nop
085a8009 +0x283:  mov    -0x28(%ebp),%eax
085a800c +0x286:  add    $0x1,%eax
085a800f +0x289:  mov    %eax,-0x28(%ebp)
085a8012 +0x28c:  mov    -0x28(%ebp),%eax
085a8015 +0x28f:  cmp    $0x3,%eax
085a8018 +0x292:  setle  %al
085a801b +0x295:  test   %al,%al
085a801d +0x297:  jne    085a7dc7 <+0x41>
085a8023 +0x29d:  mov    -0x1c(%ebp),%eax
085a8026 +0x2a0:  cmp    -0x20(%ebp),%eax
085a8029 +0x2a3:  jg     085a802f <+0x2a9>
085a802b +0x2a5:  movb   $0x1,-0xd(%ebp)
085a802f +0x2a9:  movzbl -0xd(%ebp),%eax
085a8033 +0x2ad:  mov    -0x4(%ebp),%ebx
085a8036 +0x2b0:  leave
085a8037 +0x2b1:  ret
```

## 反编译 C

```c
// CParty::CheckDestroyConditionSealDoor @ 0x85a7d86

/* CParty::CheckDestroyConditionSealDoor(CDungeon const*, std::vector<int, std::allocator<int> >&,
   std::vector<int, std::allocator<int> >&) */

undefined1 __thiscall
CParty::CheckDestroyConditionSealDoor
          (CParty *this,CDungeon *param_1,vector *param_2,vector *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  CInventory *this_00;
  int iVar7;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined1 local_31;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_30 [4];
  int local_2c;
  __normal_iterator local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_11;
  int local_10;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  Inven_Item::Inven_Item((Inven_Item *)&local_6d);
  local_11 = 0;
  local_2c = 0;
  do {
    if (3 < local_2c) {
      if (local_20 <= local_24) {
        local_11 = 1;
      }
      return local_11;
    }
    cVar3 = _checkValidUser(this,local_2c);
    if (cVar3 == '\x01') {
      local_20 = local_20 + 1;
      local_1c = 0;
      cVar3 = CheckHellDungeonFreepassItemHaveAndDel
                        (this,*(CUser **)(this + local_2c * 0x18 + 0x78),false);
      if (cVar3 == '\0') {
        iVar5 = CDungeon::get_min_level(param_1);
        if (iVar5 < 0x2d) {
          return 0;
        }
        iVar5 = CDungeon::get_min_level(param_1);
        local_10 = getHellPartyEntranceItemNeedCount(iVar5);
        std::vector<int,std::allocator<int>>::begin();
        while( true ) {
          std::vector<int,std::allocator<int>>::end();
          bVar4 = __gnu_cxx::operator!=(local_30,local_28);
          iVar5 = local_1c;
          if (!bVar4) break;
          piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                          operator*(local_30);
          iVar5 = *piVar6;
          this_00 = (CInventory *)
                    CUserCharacInfo::getCurCharacInvenR
                              (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
          local_18 = CInventory::check_item_exist(this_00,iVar5);
          if (local_18 != -1) {
            iVar5 = CUserCharacInfo::getCurCharacInvenR
                              (*(CUserCharacInfo **)(this + local_2c * 0x18 + 0x78));
            CInventory::GetInvenSlot((int)&local_bc,iVar5);
            local_6d = local_bc;
            local_69 = local_b8;
            uVar1 = local_69;
            local_65 = local_b4;
            uVar2 = local_65;
            local_61 = local_b0;
            local_5d = local_ac;
            local_59 = local_a8;
            local_55 = local_a4;
            local_51 = local_a0;
            local_4d = local_9c;
            local_49 = local_98;
            local_45 = local_94;
            local_41 = local_90;
            local_3d = local_8c;
            local_39 = local_88;
            local_35 = local_84;
            local_31 = local_80;
            local_69._3_1_ = (undefined1)((uint)local_b8 >> 0x18);
            local_65._0_3_ = (undefined3)local_b4;
            iVar5 = CONCAT31((undefined3)local_65,local_69._3_1_);
            local_69 = uVar1;
            local_65 = uVar2;
            if (local_10 <= iVar5) {
              local_1c = local_1c + 1;
            }
          }
          __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                    (local_30);
        }
        iVar7 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)param_3);
        if (iVar5 == iVar7) {
          local_24 = local_24 + 1;
        }
        else {
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)param_2,&local_2c);
        }
      }
      else {
        local_24 = local_24 + 1;
      }
    }
    local_2c = local_2c + 1;
  } while( true );
}
```
