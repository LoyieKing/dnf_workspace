# UseSealDoorItems

`_ZN6CParty16UseSealDoorItemsERSt6vectorIiSaIiEE`

`CParty::UseSealDoorItems(std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8038  _ZN6CParty16UseSealDoorItemsERSt6vectorIiSaIiEE
#           CParty::UseSealDoorItems(std::vector<int, std::allocator<int> >&)
# range [0x085a8038, 0x085a82d1]
085a8038 +0x000:  push   %ebp
085a8039 +0x001:  mov    %esp,%ebp
085a803b +0x003:  push   %ebx
085a803c +0x004:  sub    $0x94,%esp
085a8042 +0x00a:  movl   $0x0,-0x14(%ebp)
085a8049 +0x011:  lea    -0x69(%ebp),%eax
085a804c +0x014:  mov    %eax,(%esp)
085a804f +0x017:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085a8054 +0x01c:  movl   $0x0,-0x10(%ebp)
085a805b +0x023:  jmp    085a82ae <+0x276>
085a8060 +0x028:  mov    -0x10(%ebp),%eax
085a8063 +0x02b:  mov    %eax,0x4(%esp)
085a8067 +0x02f:  mov    0x8(%ebp),%eax
085a806a +0x032:  mov    %eax,(%esp)
085a806d +0x035:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085a8072 +0x03a:  xor    $0x1,%eax
085a8075 +0x03d:  test   %al,%al
085a8077 +0x03f:  jne    085a82a6 <+0x26e>
085a807d +0x045:  mov    -0x10(%ebp),%edx
085a8080 +0x048:  mov    0x8(%ebp),%ecx
085a8083 +0x04b:  mov    %edx,%eax
085a8085 +0x04d:  add    %eax,%eax
085a8087 +0x04f:  add    %edx,%eax
085a8089 +0x051:  shl    $0x3,%eax
085a808c +0x054:  lea    (%ecx,%eax,1),%eax
085a808f +0x057:  add    $0x78,%eax
085a8092 +0x05a:  mov    (%eax),%eax
085a8094 +0x05c:  movl   $0x1,0x8(%esp)
085a809c +0x064:  mov    %eax,0x4(%esp)
085a80a0 +0x068:  mov    0x8(%ebp),%eax
085a80a3 +0x06b:  mov    %eax,(%esp)
085a80a6 +0x06e:  call   085bc86e <_ZN6CParty38CheckHellDungeonFreepassItemHaveAndDelEP5CUserb>  ; CParty::CheckHellDungeonFreepassItemHaveAndDel(CUser*, bool)
085a80ab +0x073:  test   %al,%al
085a80ad +0x075:  jne    085a82a9 <+0x271>
085a80b3 +0x07b:  lea    -0x2c(%ebp),%eax
085a80b6 +0x07e:  mov    0xc(%ebp),%edx
085a80b9 +0x081:  mov    %edx,0x4(%esp)
085a80bd +0x085:  mov    %eax,(%esp)
085a80c0 +0x088:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085a80c5 +0x08d:  sub    $0x4,%esp
085a80c8 +0x090:  jmp    085a8275 <+0x23d>
085a80cd +0x095:  mov    0x8(%ebp),%eax
085a80d0 +0x098:  mov    0xcac(%eax),%eax
085a80d6 +0x09e:  mov    %eax,(%esp)
085a80d9 +0x0a1:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a80de +0x0a6:  cmp    $0x2c,%eax
085a80e1 +0x0a9:  setle  %al
085a80e4 +0x0ac:  test   %al,%al
085a80e6 +0x0ae:  je     085a80fc <+0xc4>
085a80e8 +0x0b0:  mov    0x8(%ebp),%eax
085a80eb +0x0b3:  movb   $0x0,0xced(%eax)
085a80f2 +0x0ba:  mov    $0x0,%eax
085a80f7 +0x0bf:  jmp    085a82cc <+0x294>
085a80fc +0x0c4:  mov    0x8(%ebp),%eax
085a80ff +0x0c7:  mov    0xcac(%eax),%eax
085a8105 +0x0cd:  mov    %eax,(%esp)
085a8108 +0x0d0:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
085a810d +0x0d5:  mov    %eax,(%esp)
085a8110 +0x0d8:  call   08891be6 <_Z33getHellPartyEntranceItemNeedCounti>  ; getHellPartyEntranceItemNeedCount(int)
085a8115 +0x0dd:  mov    %eax,-0xc(%ebp)
085a8118 +0x0e0:  lea    -0x2c(%ebp),%eax
085a811b +0x0e3:  mov    %eax,(%esp)
085a811e +0x0e6:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
085a8123 +0x0eb:  mov    (%eax),%ebx
085a8125 +0x0ed:  mov    -0x10(%ebp),%edx
085a8128 +0x0f0:  mov    0x8(%ebp),%ecx
085a812b +0x0f3:  mov    %edx,%eax
085a812d +0x0f5:  add    %eax,%eax
085a812f +0x0f7:  add    %edx,%eax
085a8131 +0x0f9:  shl    $0x3,%eax
085a8134 +0x0fc:  lea    (%ecx,%eax,1),%eax
085a8137 +0x0ff:  add    $0x78,%eax
085a813a +0x102:  mov    (%eax),%eax
085a813c +0x104:  mov    %eax,(%esp)
085a813f +0x107:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085a8144 +0x10c:  mov    %ebx,0x4(%esp)
085a8148 +0x110:  mov    %eax,(%esp)
085a814b +0x113:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
085a8150 +0x118:  mov    %eax,-0x14(%ebp)
085a8153 +0x11b:  cmpl   $0xffffffff,-0x14(%ebp)
085a8157 +0x11f:  setne  %al
085a815a +0x122:  test   %al,%al
085a815c +0x124:  je     085a8259 <+0x221>
085a8162 +0x12a:  mov    -0x10(%ebp),%edx
085a8165 +0x12d:  mov    0x8(%ebp),%ecx
085a8168 +0x130:  mov    %edx,%eax
085a816a +0x132:  add    %eax,%eax
085a816c +0x134:  add    %edx,%eax
085a816e +0x136:  shl    $0x3,%eax
085a8171 +0x139:  lea    (%ecx,%eax,1),%eax
085a8174 +0x13c:  add    $0x78,%eax
085a8177 +0x13f:  mov    (%eax),%eax
085a8179 +0x141:  mov    %eax,(%esp)
085a817c +0x144:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085a8181 +0x149:  movl   $0x1,0x14(%esp)
085a8189 +0x151:  movl   $0x17,0x10(%esp)
085a8191 +0x159:  mov    -0xc(%ebp),%edx
085a8194 +0x15c:  mov    %edx,0xc(%esp)
085a8198 +0x160:  mov    -0x14(%ebp),%edx
085a819b +0x163:  mov    %edx,0x8(%esp)
085a819f +0x167:  movl   $0x1,0x4(%esp)
085a81a7 +0x16f:  mov    %eax,(%esp)
085a81aa +0x172:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085a81af +0x177:  xor    $0x1,%eax
085a81b2 +0x17a:  test   %al,%al
085a81b4 +0x17c:  je     085a8221 <+0x1e9>
085a81b6 +0x17e:  mov    -0x10(%ebp),%edx
085a81b9 +0x181:  mov    0x8(%ebp),%ecx
085a81bc +0x184:  mov    %edx,%eax
085a81be +0x186:  add    %eax,%eax
085a81c0 +0x188:  add    %edx,%eax
085a81c2 +0x18a:  shl    $0x3,%eax
085a81c5 +0x18d:  lea    (%ecx,%eax,1),%eax
085a81c8 +0x190:  add    $0x78,%eax
085a81cb +0x193:  mov    (%eax),%eax
085a81cd +0x195:  mov    %eax,(%esp)
085a81d0 +0x198:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085a81d5 +0x19d:  mov    %eax,%ebx
085a81d7 +0x19f:  movl   $0x5,0xc(%esp)
085a81df +0x1a7:  movl   $0x1d22,0x8(%esp)
085a81e7 +0x1af:  movl   $&_ZZN6CParty16UseSealDoorItemsERSt6vectorIiSaIiEEE19__PRETTY_FUNCTION__,0x4(%esp)
085a81ef +0x1b7:  lea    -0x24(%ebp),%eax
085a81f2 +0x1ba:  mov    %eax,(%esp)
085a81f5 +0x1bd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085a81fa +0x1c2:  mov    -0xc(%ebp),%eax
085a81fd +0x1c5:  mov    %eax,0x10(%esp)
085a8201 +0x1c9:  mov    -0x14(%ebp),%eax
085a8204 +0x1cc:  mov    %eax,0xc(%esp)
085a8208 +0x1d0:  mov    %ebx,0x8(%esp)
085a820c +0x1d4:  movl   $"CParty::UseSealDoorItems, delete_item failed , User ch =%d , %d %d",0x4(%esp)
085a8214 +0x1dc:  lea    -0x24(%ebp),%eax
085a8217 +0x1df:  mov    %eax,(%esp)
085a821a +0x1e2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085a821f +0x1e7:  jmp    085a826a <+0x232>
085a8221 +0x1e9:  mov    -0x10(%ebp),%edx
085a8224 +0x1ec:  mov    0x8(%ebp),%ecx
085a8227 +0x1ef:  mov    %edx,%eax
085a8229 +0x1f1:  add    %eax,%eax
085a822b +0x1f3:  add    %edx,%eax
085a822d +0x1f5:  shl    $0x3,%eax
085a8230 +0x1f8:  lea    (%ecx,%eax,1),%eax
085a8233 +0x1fb:  add    $0x78,%eax
085a8236 +0x1fe:  mov    (%eax),%eax
085a8238 +0x200:  mov    -0x14(%ebp),%edx
085a823b +0x203:  mov    %edx,0xc(%esp)
085a823f +0x207:  movl   $0x0,0x8(%esp)
085a8247 +0x20f:  movl   $0x1,0x4(%esp)
085a824f +0x217:  mov    %eax,(%esp)
085a8252 +0x21a:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085a8257 +0x21f:  jmp    085a826a <+0x232>
085a8259 +0x221:  mov    0x8(%ebp),%eax
085a825c +0x224:  movb   $0x0,0xced(%eax)
085a8263 +0x22b:  mov    $0x0,%eax
085a8268 +0x230:  jmp    085a82cc <+0x294>
085a826a +0x232:  lea    -0x2c(%ebp),%eax
085a826d +0x235:  mov    %eax,(%esp)
085a8270 +0x238:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
085a8275 +0x23d:  lea    -0x28(%ebp),%eax
085a8278 +0x240:  mov    0xc(%ebp),%edx
085a827b +0x243:  mov    %edx,0x4(%esp)
085a827f +0x247:  mov    %eax,(%esp)
085a8282 +0x24a:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085a8287 +0x24f:  sub    $0x4,%esp
085a828a +0x252:  lea    -0x28(%ebp),%eax
085a828d +0x255:  mov    %eax,0x4(%esp)
085a8291 +0x259:  lea    -0x2c(%ebp),%eax
085a8294 +0x25c:  mov    %eax,(%esp)
085a8297 +0x25f:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
085a829c +0x264:  test   %al,%al
085a829e +0x266:  jne    085a80cd <+0x95>
085a82a4 +0x26c:  jmp    085a82aa <+0x272>
085a82a6 +0x26e:  nop
085a82a7 +0x26f:  jmp    085a82aa <+0x272>
085a82a9 +0x271:  nop
085a82aa +0x272:  addl   $0x1,-0x10(%ebp)
085a82ae +0x276:  cmpl   $0x3,-0x10(%ebp)
085a82b2 +0x27a:  setle  %al
085a82b5 +0x27d:  test   %al,%al
085a82b7 +0x27f:  jne    085a8060 <+0x28>
085a82bd +0x285:  mov    0x8(%ebp),%eax
085a82c0 +0x288:  movb   $0x1,0xced(%eax)
085a82c7 +0x28f:  mov    $0x1,%eax
085a82cc +0x294:  mov    -0x4(%ebp),%ebx
085a82cf +0x297:  leave
085a82d0 +0x298:  ret
085a82d1 +0x299:  nop
```

## 反编译 C

```c
// CParty::UseSealDoorItems @ 0x85a8038

/* CParty::UseSealDoorItems(std::vector<int, std::allocator<int> >&) */

undefined4 CParty::UseSealDoorItems(vector *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  CInventory *pCVar5;
  undefined4 uVar6;
  Inven_Item local_6d [61];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator local_2c [4];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_18 = 0;
  Inven_Item::Inven_Item(local_6d);
  local_14 = 0;
  do {
    if (3 < local_14) {
      param_1[0xced] = (vector)0x1;
      return 1;
    }
    cVar1 = _checkValidUser((CParty *)param_1,local_14);
    if ((cVar1 == '\x01') &&
       (cVar1 = CheckHellDungeonFreepassItemHaveAndDel
                          ((CParty *)param_1,*(CUser **)(param_1 + local_14 * 0x18 + 0x78),true),
       cVar1 == '\0')) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_30,local_2c);
        if (!bVar2) break;
        iVar3 = CDungeon::get_min_level(*(CDungeon **)(param_1 + 0xcac));
        if (iVar3 < 0x2d) {
          param_1[0xced] = (vector)0x0;
          return 0;
        }
        iVar3 = CDungeon::get_min_level(*(CDungeon **)(param_1 + 0xcac));
        local_10 = getHellPartyEntranceItemNeedCount(iVar3);
        piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_30);
        iVar3 = *piVar4;
        pCVar5 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR
                           (*(CUserCharacInfo **)(param_1 + local_14 * 0x18 + 0x78));
        local_18 = CInventory::check_item_exist(pCVar5,iVar3);
        if (local_18 == -1) {
          param_1[0xced] = (vector)0x0;
          return 0;
        }
        pCVar5 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenW
                           (*(CUserCharacInfo **)(param_1 + local_14 * 0x18 + 0x78));
        cVar1 = CInventory::delete_item(pCVar5,1,local_18,local_10,0x17,1);
        if (cVar1 == '\x01') {
          CUser::SendUpdateItem(*(CUser **)(param_1 + local_14 * 0x18 + 0x78),1,0,local_18);
        }
        else {
          uVar6 = CUserCharacInfo::getCurCharacNo
                            (*(CUserCharacInfo **)(param_1 + local_14 * 0x18 + 0x78));
          cMyTrace::cMyTrace(local_28,"bool CParty::UseSealDoorItems(IntVector&)",0x1d22,5);
          cMyTrace::operator()
                    (local_28,"CParty::UseSealDoorItems, delete_item failed , User ch =%d , %d %d",
                     uVar6,local_18,local_10);
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_30);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
