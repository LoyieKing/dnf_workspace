# CalNeedSlot

`_ZNK10CInventory11CalNeedSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE`

`CInventory::CalNeedSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850891a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850891a  _ZNK10CInventory11CalNeedSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE
#           CInventory::CalNeedSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
# range [0x0850891a, 0x08508c2d]
0850891a +0x000:  push   %ebp
0850891b +0x001:  mov    %esp,%ebp
0850891d +0x003:  sub    $0x58,%esp
08508920 +0x006:  mov    0x10(%ebp),%eax
08508923 +0x009:  mov    %eax,(%esp)
08508926 +0x00c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0850892b +0x011:  test   %eax,%eax
0850892d +0x013:  sete   %al
08508930 +0x016:  test   %al,%al
08508932 +0x018:  jne    08508c2a <+0x310>
08508938 +0x01e:  lea    -0x38(%ebp),%eax
0850893b +0x021:  mov    0x10(%ebp),%edx
0850893e +0x024:  mov    %edx,0x4(%esp)
08508942 +0x028:  mov    %eax,(%esp)
08508945 +0x02b:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0850894a +0x030:  sub    $0x4,%esp
0850894d +0x033:  lea    -0x40(%ebp),%eax
08508950 +0x036:  mov    %eax,(%esp)
08508953 +0x039:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08508958 +0x03e:  jmp    08508bf9 <+0x2df>
0850895d +0x043:  movb   $0x0,-0x19(%ebp)
08508961 +0x047:  lea    -0x38(%ebp),%eax
08508964 +0x04a:  mov    %eax,(%esp)
08508967 +0x04d:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
0850896c +0x052:  mov    0x4(%eax),%edx
0850896f +0x055:  mov    (%eax),%eax
08508971 +0x057:  mov    %eax,-0x30(%ebp)
08508974 +0x05a:  mov    %edx,-0x2c(%ebp)
08508977 +0x05d:  lea    -0x30(%ebp),%eax
0850897a +0x060:  mov    %eax,0x4(%esp)
0850897e +0x064:  lea    -0x40(%ebp),%eax
08508981 +0x067:  mov    %eax,(%esp)
08508984 +0x06a:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08508989 +0x06f:  mov    -0x40(%ebp),%eax
0850898c +0x072:  mov    %eax,-0x18(%ebp)
0850898f +0x075:  mov    -0x3c(%ebp),%eax
08508992 +0x078:  mov    %eax,-0x10(%ebp)
08508995 +0x07b:  cmpl   $0x0,-0x18(%ebp)
08508999 +0x07f:  jne    085089bd <+0xa3>
0850899b +0x081:  lea    -0x28(%ebp),%eax
0850899e +0x084:  movl   $0x0,0x8(%esp)
085089a6 +0x08c:  lea    -0x38(%ebp),%edx
085089a9 +0x08f:  mov    %edx,0x4(%esp)
085089ad +0x093:  mov    %eax,(%esp)
085089b0 +0x096:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
085089b5 +0x09b:  sub    $0x4,%esp
085089b8 +0x09e:  jmp    08508bf9 <+0x2df>
085089bd +0x0a3:  mov    -0x18(%ebp),%eax
085089c0 +0x0a6:  mov    %eax,0x4(%esp)
085089c4 +0x0aa:  mov    0x8(%ebp),%eax
085089c7 +0x0ad:  mov    %eax,(%esp)
085089ca +0x0b0:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
085089cf +0x0b5:  mov    %eax,-0xc(%ebp)
085089d2 +0x0b8:  cmpl   $0x0,-0xc(%ebp)
085089d6 +0x0bc:  jne    085089fa <+0xe0>
085089d8 +0x0be:  lea    -0x24(%ebp),%eax
085089db +0x0c1:  movl   $0x0,0x8(%esp)
085089e3 +0x0c9:  lea    -0x38(%ebp),%edx
085089e6 +0x0cc:  mov    %edx,0x4(%esp)
085089ea +0x0d0:  mov    %eax,(%esp)
085089ed +0x0d3:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
085089f2 +0x0d8:  sub    $0x4,%esp
085089f5 +0x0db:  jmp    08508bf9 <+0x2df>
085089fa +0x0e0:  cmpl   $0x1,-0xc(%ebp)
085089fe +0x0e4:  jne    08508a1e <+0x104>
08508a00 +0x0e6:  mov    -0xc(%ebp),%eax
08508a03 +0x0e9:  shl    $0x2,%eax
08508a06 +0x0ec:  add    0xc(%ebp),%eax
08508a09 +0x0ef:  mov    -0xc(%ebp),%edx
08508a0c +0x0f2:  shl    $0x2,%edx
08508a0f +0x0f5:  add    0xc(%ebp),%edx
08508a12 +0x0f8:  mov    (%edx),%edx
08508a14 +0x0fa:  add    -0x10(%ebp),%edx
08508a17 +0x0fd:  mov    %edx,(%eax)
08508a19 +0x0ff:  jmp    08508bdc <+0x2c2>
08508a1e +0x104:  mov    -0xc(%ebp),%eax
08508a21 +0x107:  mov    %eax,(%esp)
08508a24 +0x10a:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
08508a29 +0x10f:  test   %al,%al
08508a2b +0x111:  je     08508add <+0x1c3>
08508a31 +0x117:  mov    -0xc(%ebp),%eax
08508a34 +0x11a:  mov    %eax,(%esp)
08508a37 +0x11d:  call   0850d17c <_GLOBAL__I_g_emptySlot+0xb1>  ; global constructors keyed to g_emptySlot+0xb1
08508a3c +0x122:  test   %al,%al
08508a3e +0x124:  je     08508a5e <+0x144>
08508a40 +0x126:  mov    -0xc(%ebp),%eax
08508a43 +0x129:  shl    $0x2,%eax
08508a46 +0x12c:  add    0xc(%ebp),%eax
08508a49 +0x12f:  mov    -0xc(%ebp),%edx
08508a4c +0x132:  shl    $0x2,%edx
08508a4f +0x135:  add    0xc(%ebp),%edx
08508a52 +0x138:  mov    (%edx),%edx
08508a54 +0x13a:  add    -0x10(%ebp),%edx
08508a57 +0x13d:  mov    %edx,(%eax)
08508a59 +0x13f:  jmp    08508bdc <+0x2c2>
08508a5e +0x144:  lea    -0x48(%ebp),%eax
08508a61 +0x147:  mov    %eax,0xc(%esp)
08508a65 +0x14b:  lea    -0x44(%ebp),%eax
08508a68 +0x14e:  mov    %eax,0x8(%esp)
08508a6c +0x152:  mov    -0xc(%ebp),%eax
08508a6f +0x155:  mov    %eax,0x4(%esp)
08508a73 +0x159:  mov    0x8(%ebp),%eax
08508a76 +0x15c:  mov    %eax,(%esp)
08508a79 +0x15f:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08508a7e +0x164:  mov    -0x44(%ebp),%eax
08508a81 +0x167:  mov    %eax,-0x14(%ebp)
08508a84 +0x16a:  jmp    08508aac <+0x192>
08508a86 +0x16c:  mov    0x8(%ebp),%eax
08508a89 +0x16f:  mov    0x6e4(%eax),%edx
08508a8f +0x175:  mov    -0x14(%ebp),%eax
08508a92 +0x178:  imul   $0x3d,%eax,%eax
08508a95 +0x17b:  lea    (%edx,%eax,1),%eax
08508a98 +0x17e:  mov    0x2(%eax),%edx
08508a9b +0x181:  mov    -0x18(%ebp),%eax
08508a9e +0x184:  cmp    %eax,%edx
08508aa0 +0x186:  jne    08508aa8 <+0x18e>
08508aa2 +0x188:  movb   $0x1,-0x19(%ebp)
08508aa6 +0x18c:  jmp    08508ab9 <+0x19f>
08508aa8 +0x18e:  addl   $0x1,-0x14(%ebp)
08508aac +0x192:  mov    -0x48(%ebp),%eax
08508aaf +0x195:  cmp    %eax,-0x14(%ebp)
08508ab2 +0x198:  setle  %al
08508ab5 +0x19b:  test   %al,%al
08508ab7 +0x19d:  jne    08508a86 <+0x16c>
08508ab9 +0x19f:  movzbl -0x19(%ebp),%eax
08508abd +0x1a3:  xor    $0x1,%eax
08508ac0 +0x1a6:  test   %al,%al
08508ac2 +0x1a8:  je     08508bdc <+0x2c2>
08508ac8 +0x1ae:  mov    -0xc(%ebp),%eax
08508acb +0x1b1:  shl    $0x2,%eax
08508ace +0x1b4:  add    0xc(%ebp),%eax
08508ad1 +0x1b7:  mov    (%eax),%edx
08508ad3 +0x1b9:  add    $0x1,%edx
08508ad6 +0x1bc:  mov    %edx,(%eax)
08508ad8 +0x1be:  jmp    08508bdc <+0x2c2>
08508add +0x1c3:  cmpl   $0x8,-0xc(%ebp)
08508ae1 +0x1c7:  jne    08508b21 <+0x207>
08508ae3 +0x1c9:  movl   $0x68,0x8(%esp)
08508aeb +0x1d1:  movl   $0x0,0x4(%esp)
08508af3 +0x1d9:  mov    0x8(%ebp),%eax
08508af6 +0x1dc:  mov    %eax,(%esp)
08508af9 +0x1df:  call   08503638 <_ZNK10CInventory18getAvatarEmptySlotEii>  ; CInventory::getAvatarEmptySlot(int, int) const
08508afe +0x1e4:  cmp    $0xffffffff,%eax
08508b01 +0x1e7:  setne  %al
08508b04 +0x1ea:  test   %al,%al
08508b06 +0x1ec:  je     08508bdc <+0x2c2>
08508b0c +0x1f2:  mov    -0xc(%ebp),%eax
08508b0f +0x1f5:  shl    $0x2,%eax
08508b12 +0x1f8:  add    0xc(%ebp),%eax
08508b15 +0x1fb:  mov    (%eax),%edx
08508b17 +0x1fd:  add    $0x1,%edx
08508b1a +0x200:  mov    %edx,(%eax)
08508b1c +0x202:  jmp    08508bdc <+0x2c2>
08508b21 +0x207:  lea    -0x48(%ebp),%eax
08508b24 +0x20a:  mov    %eax,0xc(%esp)
08508b28 +0x20e:  lea    -0x44(%ebp),%eax
08508b2b +0x211:  mov    %eax,0x8(%esp)
08508b2f +0x215:  mov    -0xc(%ebp),%eax
08508b32 +0x218:  mov    %eax,0x4(%esp)
08508b36 +0x21c:  mov    0x8(%ebp),%eax
08508b39 +0x21f:  mov    %eax,(%esp)
08508b3c +0x222:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08508b41 +0x227:  mov    -0x44(%ebp),%eax
08508b44 +0x22a:  mov    %eax,-0x14(%ebp)
08508b47 +0x22d:  jmp    08508b6f <+0x255>
08508b49 +0x22f:  mov    0x8(%ebp),%eax
08508b4c +0x232:  mov    0x650(%eax),%edx
08508b52 +0x238:  mov    -0x14(%ebp),%eax
08508b55 +0x23b:  imul   $0x3d,%eax,%eax
08508b58 +0x23e:  lea    (%edx,%eax,1),%eax
08508b5b +0x241:  mov    0x2(%eax),%edx
08508b5e +0x244:  mov    -0x18(%ebp),%eax
08508b61 +0x247:  cmp    %eax,%edx
08508b63 +0x249:  jne    08508b6b <+0x251>
08508b65 +0x24b:  movb   $0x1,-0x19(%ebp)
08508b69 +0x24f:  jmp    08508b7c <+0x262>
08508b6b +0x251:  addl   $0x1,-0x14(%ebp)
08508b6f +0x255:  mov    -0x48(%ebp),%eax
08508b72 +0x258:  cmp    %eax,-0x14(%ebp)
08508b75 +0x25b:  setle  %al
08508b78 +0x25e:  test   %al,%al
08508b7a +0x260:  jne    08508b49 <+0x22f>
08508b7c +0x262:  movzbl -0x19(%ebp),%eax
08508b80 +0x266:  xor    $0x1,%eax
08508b83 +0x269:  test   %al,%al
08508b85 +0x26b:  je     08508bc1 <+0x2a7>
08508b87 +0x26d:  movl   $0x3,-0x14(%ebp)
08508b8e +0x274:  jmp    08508bb6 <+0x29c>
08508b90 +0x276:  mov    0x8(%ebp),%eax
08508b93 +0x279:  mov    0x650(%eax),%edx
08508b99 +0x27f:  mov    -0x14(%ebp),%eax
08508b9c +0x282:  imul   $0x3d,%eax,%eax
08508b9f +0x285:  lea    (%edx,%eax,1),%eax
08508ba2 +0x288:  mov    0x2(%eax),%edx
08508ba5 +0x28b:  mov    -0x18(%ebp),%eax
08508ba8 +0x28e:  cmp    %eax,%edx
08508baa +0x290:  jne    08508bb2 <+0x298>
08508bac +0x292:  movb   $0x1,-0x19(%ebp)
08508bb0 +0x296:  jmp    08508bc1 <+0x2a7>
08508bb2 +0x298:  addl   $0x1,-0x14(%ebp)
08508bb6 +0x29c:  cmpl   $0x8,-0x14(%ebp)
08508bba +0x2a0:  setle  %al
08508bbd +0x2a3:  test   %al,%al
08508bbf +0x2a5:  jne    08508b90 <+0x276>
08508bc1 +0x2a7:  movzbl -0x19(%ebp),%eax
08508bc5 +0x2ab:  xor    $0x1,%eax
08508bc8 +0x2ae:  test   %al,%al
08508bca +0x2b0:  je     08508bdc <+0x2c2>
08508bcc +0x2b2:  mov    -0xc(%ebp),%eax
08508bcf +0x2b5:  shl    $0x2,%eax
08508bd2 +0x2b8:  add    0xc(%ebp),%eax
08508bd5 +0x2bb:  mov    (%eax),%edx
08508bd7 +0x2bd:  add    $0x1,%edx
08508bda +0x2c0:  mov    %edx,(%eax)
08508bdc +0x2c2:  lea    -0x20(%ebp),%eax
08508bdf +0x2c5:  movl   $0x0,0x8(%esp)
08508be7 +0x2cd:  lea    -0x38(%ebp),%edx
08508bea +0x2d0:  mov    %edx,0x4(%esp)
08508bee +0x2d4:  mov    %eax,(%esp)
08508bf1 +0x2d7:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08508bf6 +0x2dc:  sub    $0x4,%esp
08508bf9 +0x2df:  lea    -0x34(%ebp),%eax
08508bfc +0x2e2:  mov    0x10(%ebp),%edx
08508bff +0x2e5:  mov    %edx,0x4(%esp)
08508c03 +0x2e9:  mov    %eax,(%esp)
08508c06 +0x2ec:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08508c0b +0x2f1:  sub    $0x4,%esp
08508c0e +0x2f4:  lea    -0x34(%ebp),%eax
08508c11 +0x2f7:  mov    %eax,0x4(%esp)
08508c15 +0x2fb:  lea    -0x38(%ebp),%eax
08508c18 +0x2fe:  mov    %eax,(%esp)
08508c1b +0x301:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08508c20 +0x306:  test   %al,%al
08508c22 +0x308:  jne    0850895d <+0x43>
08508c28 +0x30e:  jmp    08508c2b <+0x311>
08508c2a +0x310:  nop
08508c2b +0x311:  leave
08508c2c +0x312:  ret
08508c2d +0x313:  nop
```

## 反编译 C

```c
// CInventory::CalNeedSlot @ 0x850891a

/* CInventory::CalNeedSlot(int*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int>
   > > const&) const */

void __thiscall CInventory::CalNeedSlot(CInventory *this,int *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_3c [4];
  __normal_iterator local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [7];
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2);
  if (iVar3 != 0) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    std::pair<int,int>::pair((pair<int,int> *)&local_44);
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_3c,local_38);
      if (!bVar2) break;
      local_1d = '\0';
      puVar4 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_3c);
      local_30 = puVar4[1];
      local_34 = *puVar4;
      std::pair<int,int>::operator=((pair<int,int> *)&local_44,(pair *)&local_34);
      local_1c = local_44;
      local_14 = local_40;
      if (local_44 == 0) {
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_2c,(int)local_3c);
      }
      else {
        local_10 = GetItemType(this,local_44);
        if (local_10 == 0) {
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_28,(int)local_3c);
        }
        else {
          if (local_10 == 1) {
            param_1[1] = param_1[1] + local_14;
          }
          else {
            cVar1 = IsCreatureItemType(local_10);
            if (cVar1 == '\0') {
              if (local_10 == 8) {
                iVar3 = getAvatarEmptySlot(this,0,0x68);
                if (iVar3 != -1) {
                  param_1[local_10] = param_1[local_10] + 1;
                }
              }
              else {
                StartEndPos(this,local_10,&local_48,&local_4c);
                for (local_18 = local_48; local_18 <= local_4c; local_18 = local_18 + 1) {
                  if (*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2) == local_1c) {
                    local_1d = '\x01';
                    break;
                  }
                }
                if (local_1d != '\x01') {
                  for (local_18 = 3; local_18 < 9; local_18 = local_18 + 1) {
                    if (*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2) == local_1c) {
                      local_1d = '\x01';
                      break;
                    }
                  }
                }
                if (local_1d != '\x01') {
                  param_1[local_10] = param_1[local_10] + 1;
                }
              }
            }
            else {
              cVar1 = isEquipableItemType(local_10);
              if (cVar1 == '\0') {
                StartEndPos(this,local_10,&local_48,&local_4c);
                for (local_18 = local_48; local_18 <= local_4c; local_18 = local_18 + 1) {
                  if (*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 2) == local_1c) {
                    local_1d = '\x01';
                    break;
                  }
                }
                if (local_1d != '\x01') {
                  param_1[local_10] = param_1[local_10] + 1;
                }
              }
              else {
                param_1[local_10] = param_1[local_10] + local_14;
              }
            }
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_24,(int)local_3c);
        }
      }
    }
  }
  return;
}
```
