# RefillItemByScript

`_ZN5CUser18RefillItemByScriptERSt6vectorISt4pairIiiESaIS2_EE`

`CUser::RefillItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086890be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086890be  _ZN5CUser18RefillItemByScriptERSt6vectorISt4pairIiiESaIS2_EE
#           CUser::RefillItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x086890be, 0x086893ab]
086890be +0x000:  push   %ebp
086890bf +0x001:  mov    %esp,%ebp
086890c1 +0x003:  push   %ebx
086890c2 +0x004:  sub    $0xc4,%esp
086890c8 +0x00a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086890cd +0x00f:  mov    %eax,(%esp)
086890d0 +0x012:  call   08693f32 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x787>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x787
086890d5 +0x017:  mov    %eax,-0x20(%ebp)
086890d8 +0x01a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086890df +0x021:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086890e4 +0x026:  mov    %eax,-0x1c(%ebp)
086890e7 +0x029:  movl   $0x0,-0x18(%ebp)
086890ee +0x030:  jmp    0868938d <+0x2cf>
086890f3 +0x035:  mov    -0x20(%ebp),%eax
086890f6 +0x038:  mov    -0x18(%ebp),%edx
086890f9 +0x03b:  mov    %edx,0x4(%esp)
086890fd +0x03f:  mov    %eax,(%esp)
08689100 +0x042:  call   0869c7aa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fff
08689105 +0x047:  mov    %eax,-0x14(%ebp)
08689108 +0x04a:  mov    -0x14(%ebp),%eax
0868910b +0x04d:  mov    0x8(%eax),%eax
0868910e +0x050:  cmp    -0x1c(%ebp),%eax
08689111 +0x053:  jle    08689385 <+0x2c7>
08689117 +0x059:  mov    -0x14(%ebp),%eax
0868911a +0x05c:  mov    0x4(%eax),%eax
0868911d +0x05f:  test   %eax,%eax
0868911f +0x061:  jne    0868915b <+0x9d>
08689121 +0x063:  movl   $0x0,-0x24(%ebp)
08689128 +0x06a:  mov    -0x14(%ebp),%edx
0868912b +0x06d:  lea    -0x2c(%ebp),%eax
0868912e +0x070:  lea    -0x24(%ebp),%ecx
08689131 +0x073:  mov    %ecx,0x8(%esp)
08689135 +0x077:  mov    %edx,0x4(%esp)
08689139 +0x07b:  mov    %eax,(%esp)
0868913c +0x07e:  call   08135ba6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x17ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x17ad
08689141 +0x083:  sub    $0x4,%esp
08689144 +0x086:  lea    -0x2c(%ebp),%eax
08689147 +0x089:  mov    %eax,0x4(%esp)
0868914b +0x08d:  mov    0xc(%ebp),%eax
0868914e +0x090:  mov    %eax,(%esp)
08689151 +0x093:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08689156 +0x098:  jmp    08689389 <+0x2cb>
0868915b +0x09d:  mov    -0x14(%ebp),%eax
0868915e +0x0a0:  mov    (%eax),%ebx
08689160 +0x0a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08689165 +0x0a7:  mov    %ebx,0x4(%esp)
08689169 +0x0ab:  mov    %eax,(%esp)
0868916c +0x0ae:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08689171 +0x0b3:  mov    %eax,-0x10(%ebp)
08689174 +0x0b6:  cmpl   $0x0,-0x10(%ebp)
08689178 +0x0ba:  je     08689388 <+0x2ca>
0868917e +0x0c0:  lea    -0x69(%ebp),%eax
08689181 +0x0c3:  mov    %eax,(%esp)
08689184 +0x0c6:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08689189 +0x0cb:  mov    -0x14(%ebp),%eax
0868918c +0x0ce:  mov    (%eax),%ebx
0868918e +0x0d0:  mov    0x8(%ebp),%eax
08689191 +0x0d3:  mov    %eax,(%esp)
08689194 +0x0d6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08689199 +0x0db:  lea    -0x69(%ebp),%edx
0868919c +0x0de:  mov    %edx,0x8(%esp)
086891a0 +0x0e2:  mov    %ebx,0x4(%esp)
086891a4 +0x0e6:  mov    %eax,(%esp)
086891a7 +0x0e9:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
086891ac +0x0ee:  mov    %eax,-0xc(%ebp)
086891af +0x0f1:  cmpl   $0x0,-0xc(%ebp)
086891b3 +0x0f5:  jns    08689287 <+0x1c9>
086891b9 +0x0fb:  mov    -0x10(%ebp),%eax
086891bc +0x0fe:  mov    (%eax),%eax
086891be +0x100:  add    $0x8,%eax
086891c1 +0x103:  mov    (%eax),%edx
086891c3 +0x105:  lea    -0x69(%ebp),%eax
086891c6 +0x108:  mov    %eax,0x4(%esp)
086891ca +0x10c:  mov    -0x10(%ebp),%eax
086891cd +0x10f:  mov    %eax,(%esp)
086891d0 +0x112:  call   *%edx
086891d2 +0x114:  mov    -0x14(%ebp),%eax
086891d5 +0x117:  mov    0x4(%eax),%eax
086891d8 +0x11a:  mov    %eax,-0x62(%ebp)
086891db +0x11d:  mov    -0x14(%ebp),%eax
086891de +0x120:  mov    (%eax),%eax
086891e0 +0x122:  mov    %eax,-0x67(%ebp)
086891e3 +0x125:  mov    0x8(%ebp),%eax
086891e6 +0x128:  mov    %eax,(%esp)
086891e9 +0x12b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086891ee +0x130:  movl   $0x0,0x4c(%esp)
086891f6 +0x138:  movl   $0x1,0x48(%esp)
086891fe +0x140:  movl   $0xd,0x44(%esp)
08689206 +0x148:  mov    -0x69(%ebp),%edx
08689209 +0x14b:  mov    %edx,0x4(%esp)
0868920d +0x14f:  mov    -0x65(%ebp),%edx
08689210 +0x152:  mov    %edx,0x8(%esp)
08689214 +0x156:  mov    -0x61(%ebp),%edx
08689217 +0x159:  mov    %edx,0xc(%esp)
0868921b +0x15d:  mov    -0x5d(%ebp),%edx
0868921e +0x160:  mov    %edx,0x10(%esp)
08689222 +0x164:  mov    -0x59(%ebp),%edx
08689225 +0x167:  mov    %edx,0x14(%esp)
08689229 +0x16b:  mov    -0x55(%ebp),%edx
0868922c +0x16e:  mov    %edx,0x18(%esp)
08689230 +0x172:  mov    -0x51(%ebp),%edx
08689233 +0x175:  mov    %edx,0x1c(%esp)
08689237 +0x179:  mov    -0x4d(%ebp),%edx
0868923a +0x17c:  mov    %edx,0x20(%esp)
0868923e +0x180:  mov    -0x49(%ebp),%edx
08689241 +0x183:  mov    %edx,0x24(%esp)
08689245 +0x187:  mov    -0x45(%ebp),%edx
08689248 +0x18a:  mov    %edx,0x28(%esp)
0868924c +0x18e:  mov    -0x41(%ebp),%edx
0868924f +0x191:  mov    %edx,0x2c(%esp)
08689253 +0x195:  mov    -0x3d(%ebp),%edx
08689256 +0x198:  mov    %edx,0x30(%esp)
0868925a +0x19c:  mov    -0x39(%ebp),%edx
0868925d +0x19f:  mov    %edx,0x34(%esp)
08689261 +0x1a3:  mov    -0x35(%ebp),%edx
08689264 +0x1a6:  mov    %edx,0x38(%esp)
08689268 +0x1aa:  mov    -0x31(%ebp),%edx
0868926b +0x1ad:  mov    %edx,0x3c(%esp)
0868926f +0x1b1:  movzbl -0x2d(%ebp),%edx
08689273 +0x1b5:  mov    %dl,0x40(%esp)
08689277 +0x1b9:  mov    %eax,(%esp)
0868927a +0x1bc:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
0868927f +0x1c1:  mov    %eax,-0xc(%ebp)
08689282 +0x1c4:  jmp    0868935b <+0x29d>
08689287 +0x1c9:  mov    -0x67(%ebp),%eax
0868928a +0x1cc:  mov    %eax,%edx
0868928c +0x1ce:  mov    -0x62(%ebp),%eax
0868928f +0x1d1:  mov    0x8(%ebp),%ecx
08689292 +0x1d4:  lea    0x79700(%ecx),%ebx
08689298 +0x1da:  movl   $0xd,0x14(%esp)
086892a0 +0x1e2:  lea    -0x69(%ebp),%ecx
086892a3 +0x1e5:  mov    %ecx,0x10(%esp)
086892a7 +0x1e9:  mov    %edx,0xc(%esp)
086892ab +0x1ed:  mov    %eax,0x8(%esp)
086892af +0x1f1:  movl   $0x1,0x4(%esp)
086892b7 +0x1f9:  mov    %ebx,(%esp)
086892ba +0x1fc:  call   08682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>  ; cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason)
086892bf +0x201:  mov    -0x14(%ebp),%eax
086892c2 +0x204:  mov    0x4(%eax),%eax
086892c5 +0x207:  mov    %eax,-0x62(%ebp)
086892c8 +0x20a:  mov    0x8(%ebp),%eax
086892cb +0x20d:  mov    %eax,(%esp)
086892ce +0x210:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086892d3 +0x215:  mov    -0x69(%ebp),%edx
086892d6 +0x218:  mov    %edx,0xc(%esp)
086892da +0x21c:  mov    -0x65(%ebp),%edx
086892dd +0x21f:  mov    %edx,0x10(%esp)
086892e1 +0x223:  mov    -0x61(%ebp),%edx
086892e4 +0x226:  mov    %edx,0x14(%esp)
086892e8 +0x22a:  mov    -0x5d(%ebp),%edx
086892eb +0x22d:  mov    %edx,0x18(%esp)
086892ef +0x231:  mov    -0x59(%ebp),%edx
086892f2 +0x234:  mov    %edx,0x1c(%esp)
086892f6 +0x238:  mov    -0x55(%ebp),%edx
086892f9 +0x23b:  mov    %edx,0x20(%esp)
086892fd +0x23f:  mov    -0x51(%ebp),%edx
08689300 +0x242:  mov    %edx,0x24(%esp)
08689304 +0x246:  mov    -0x4d(%ebp),%edx
08689307 +0x249:  mov    %edx,0x28(%esp)
0868930b +0x24d:  mov    -0x49(%ebp),%edx
0868930e +0x250:  mov    %edx,0x2c(%esp)
08689312 +0x254:  mov    -0x45(%ebp),%edx
08689315 +0x257:  mov    %edx,0x30(%esp)
08689319 +0x25b:  mov    -0x41(%ebp),%edx
0868931c +0x25e:  mov    %edx,0x34(%esp)
08689320 +0x262:  mov    -0x3d(%ebp),%edx
08689323 +0x265:  mov    %edx,0x38(%esp)
08689327 +0x269:  mov    -0x39(%ebp),%edx
0868932a +0x26c:  mov    %edx,0x3c(%esp)
0868932e +0x270:  mov    -0x35(%ebp),%edx
08689331 +0x273:  mov    %edx,0x40(%esp)
08689335 +0x277:  mov    -0x31(%ebp),%edx
08689338 +0x27a:  mov    %edx,0x44(%esp)
0868933c +0x27e:  movzbl -0x2d(%ebp),%edx
08689340 +0x282:  mov    %dl,0x48(%esp)
08689344 +0x286:  mov    -0xc(%ebp),%edx
08689347 +0x289:  mov    %edx,0x8(%esp)
0868934b +0x28d:  movl   $0x1,0x4(%esp)
08689353 +0x295:  mov    %eax,(%esp)
08689356 +0x298:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0868935b +0x29d:  cmpl   $0x0,-0xc(%ebp)
0868935f +0x2a1:  js     08689389 <+0x2cb>
08689361 +0x2a3:  mov    -0xc(%ebp),%eax
08689364 +0x2a6:  mov    %eax,0xc(%esp)
08689368 +0x2aa:  movl   $0x0,0x8(%esp)
08689370 +0x2b2:  movl   $0x1,0x4(%esp)
08689378 +0x2ba:  mov    0x8(%ebp),%eax
0868937b +0x2bd:  mov    %eax,(%esp)
0868937e +0x2c0:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08689383 +0x2c5:  jmp    08689389 <+0x2cb>
08689385 +0x2c7:  nop
08689386 +0x2c8:  jmp    08689389 <+0x2cb>
08689388 +0x2ca:  nop
08689389 +0x2cb:  addl   $0x1,-0x18(%ebp)
0868938d +0x2cf:  mov    -0x20(%ebp),%eax
08689390 +0x2d2:  mov    %eax,(%esp)
08689393 +0x2d5:  call   0869c788 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8fdd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8fdd
08689398 +0x2da:  cmp    -0x18(%ebp),%eax
0868939b +0x2dd:  seta   %al
0868939e +0x2e0:  test   %al,%al
086893a0 +0x2e2:  jne    086890f3 <+0x35>
086893a6 +0x2e8:  mov    -0x4(%ebp),%ebx
086893a9 +0x2eb:  leave
086893aa +0x2ec:  ret
086893ab +0x2ed:  nop
```

## 反编译 C

```c
// CUser::RefillItemByScript @ 0x86890be

/* CUser::RefillItemByScript(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> >
   >&) */

void __thiscall CUser::RefillItemByScript(CUser *this,vector *param_1)

{
  int iVar1;
  CDataManager *pCVar2;
  CInventory *this_00;
  undefined4 uVar3;
  uint uVar4;
  undefined2 local_6d;
  undefined2 uStack_6b;
  undefined2 uStack_69;
  undefined1 uStack_67;
  int iStack_66;
  undefined1 uStack_62;
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
  int local_30 [2];
  undefined4 local_28;
  vector<stRefillItemInfo::RefillItem,std::allocator<stRefillItemInfo::RefillItem>> *local_24;
  int local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  
  pCVar2 = (CDataManager *)G_CDataManager();
  local_24 = (vector<stRefillItemInfo::RefillItem,std::allocator<stRefillItemInfo::RefillItem>> *)
             CDataManager::GetRefillItemInfo(pCVar2);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = 0;
  while (uVar4 = std::
                 vector<stRefillItemInfo::RefillItem,std::allocator<stRefillItemInfo::RefillItem>>::
                 size(local_24), local_1c < uVar4) {
    local_18 = (int *)std::
                      vector<stRefillItemInfo::RefillItem,std::allocator<stRefillItemInfo::RefillItem>>
                      ::operator[](local_24,local_1c);
    if (local_20 < local_18[2]) {
      if (local_18[1] == 0) {
        local_28 = 0;
        std::make_pair<int_const&,int>(local_30,local_18);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                   (pair *)local_30);
      }
      else {
        iVar1 = *local_18;
        pCVar2 = (CDataManager *)G_CDataManager();
        local_14 = (int *)CDataManager::find_item(pCVar2,iVar1);
        if (local_14 != (int *)0x0) {
          Inven_Item::Inven_Item((Inven_Item *)&local_6d);
          iVar1 = *local_18;
          this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          local_10 = CInventory::GetInvenData(this_00,iVar1,(Inven_Item *)&local_6d);
          if (local_10 < 0) {
            (**(code **)(*local_14 + 8))(local_14,&local_6d);
            iStack_66 = local_18[1];
            uStack_6b = (undefined2)*local_18;
            uStack_69 = (undefined2)((uint)*local_18 >> 0x10);
            uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
            local_10 = CInventory::insertItemIntoInventory
                                 (uVar3,CONCAT22(uStack_6b,local_6d),
                                  CONCAT13((undefined1)iStack_66,CONCAT12(uStack_67,uStack_69)),
                                  CONCAT13(uStack_62,iStack_66._1_3_),local_61,local_5d,local_59,
                                  local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                                  local_39,local_35,local_31,0xd,1,0);
          }
          else {
            cUserHistoryLog::ItemAdd
                      ((cUserHistoryLog *)(this + 0x79700),1,iStack_66,CONCAT22(uStack_69,uStack_6b)
                       ,&local_6d,0xd);
            iStack_66 = local_18[1];
            uVar3 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
            CInventory::update_item
                      (uVar3,1,local_10,CONCAT22(uStack_6b,local_6d),
                       CONCAT13((undefined1)iStack_66,CONCAT12(uStack_67,uStack_69)),
                       CONCAT13(uStack_62,iStack_66._1_3_),local_61,local_5d,local_59,local_55,
                       local_51,local_4d,local_49,local_45,local_41,local_3d,local_39,local_35,
                       local_31);
          }
          if (-1 < local_10) {
            SendUpdateItemList(this,1,0,local_10);
          }
        }
      }
    }
    local_1c = local_1c + 1;
  }
  return;
}
```
