# AddAvatarItem

`_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt`

`CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509b9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509b9e  _ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt
#           CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
# range [0x08509b9e, 0x08509e77]
08509b9e +0x000:  push   %ebp
08509b9f +0x001:  mov    %esp,%ebp
08509ba1 +0x003:  push   %edi
08509ba2 +0x004:  push   %esi
08509ba3 +0x005:  push   %ebx
08509ba4 +0x006:  sub    $0xac,%esp
08509baa +0x00c:  mov    0x14(%ebp),%esi
08509bad +0x00f:  mov    0x18(%ebp),%ebx
08509bb0 +0x012:  mov    0x1c(%ebp),%ecx
08509bb3 +0x015:  mov    0x28(%ebp),%edx
08509bb6 +0x018:  mov    0x2c(%ebp),%eax
08509bb9 +0x01b:  mov    %eax,-0x7c(%ebp)
08509bbc +0x01e:  mov    %esi,%eax
08509bbe +0x020:  mov    %al,-0x5c(%ebp)
08509bc1 +0x023:  mov    %bl,-0x60(%ebp)
08509bc4 +0x026:  mov    %cl,-0x64(%ebp)
08509bc7 +0x029:  mov    %dl,-0x68(%ebp)
08509bca +0x02c:  movzwl -0x7c(%ebp),%eax
08509bce +0x030:  mov    %ax,-0x6c(%ebp)
08509bd2 +0x034:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08509bd7 +0x039:  mov    0xc(%ebp),%edx
08509bda +0x03c:  mov    %edx,0x4(%esp)
08509bde +0x040:  mov    %eax,(%esp)
08509be1 +0x043:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08509be6 +0x048:  mov    %eax,-0x28(%ebp)
08509be9 +0x04b:  cmpl   $0x0,-0x28(%ebp)
08509bed +0x04f:  je     08509c08 <+0x6a>
08509bef +0x051:  mov    -0x28(%ebp),%eax
08509bf2 +0x054:  mov    (%eax),%eax
08509bf4 +0x056:  add    $0x10,%eax
08509bf7 +0x059:  mov    (%eax),%edx
08509bf9 +0x05b:  mov    -0x28(%ebp),%eax
08509bfc +0x05e:  mov    %eax,(%esp)
08509bff +0x061:  call   *%edx
08509c01 +0x063:  xor    $0x1,%eax
08509c04 +0x066:  test   %al,%al
08509c06 +0x068:  je     08509c0f <+0x71>
08509c08 +0x06a:  mov    $0x1,%eax
08509c0d +0x06f:  jmp    08509c14 <+0x76>
08509c0f +0x071:  mov    $0x0,%eax
08509c14 +0x076:  test   %al,%al
08509c16 +0x078:  je     08509c22 <+0x84>
08509c18 +0x07a:  mov    $0xffffffff,%eax
08509c1d +0x07f:  jmp    08509e6c <+0x2ce>
08509c22 +0x084:  lea    -0x46(%ebp),%eax
08509c25 +0x087:  mov    %eax,(%esp)
08509c28 +0x08a:  call   081506e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d
08509c2d +0x08f:  movsbl -0x64(%ebp),%edx
08509c31 +0x093:  mov    -0x28(%ebp),%eax
08509c34 +0x096:  lea    -0x46(%ebp),%ecx
08509c37 +0x099:  mov    %ecx,0x8(%esp)
08509c3b +0x09d:  mov    %edx,0x4(%esp)
08509c3f +0x0a1:  mov    %eax,(%esp)
08509c42 +0x0a4:  call   08150f36 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x86b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x86b
08509c47 +0x0a9:  movl   $0x0,-0x24(%ebp)
08509c4e +0x0b0:  jmp    08509e58 <+0x2ba>
08509c53 +0x0b5:  mov    0x8(%ebp),%eax
08509c56 +0x0b8:  mov    0x654(%eax),%edx
08509c5c +0x0be:  mov    -0x24(%ebp),%eax
08509c5f +0x0c1:  imul   $0x3d,%eax,%eax
08509c62 +0x0c4:  lea    (%edx,%eax,1),%eax
08509c65 +0x0c7:  mov    0x2(%eax),%eax
08509c68 +0x0ca:  test   %eax,%eax
08509c6a +0x0cc:  jne    08509e54 <+0x2b6>
08509c70 +0x0d2:  call   0858c802 <_ZN6OS_API15GetDateTimeTickEv>  ; OS_API::GetDateTimeTick()
08509c75 +0x0d7:  mov    %eax,-0x20(%ebp)
08509c78 +0x0da:  mov    0x8(%ebp),%eax
08509c7b +0x0dd:  mov    0x654(%eax),%edx
08509c81 +0x0e3:  mov    -0x24(%ebp),%eax
08509c84 +0x0e6:  imul   $0x3d,%eax,%eax
08509c87 +0x0e9:  add    %eax,%edx
08509c89 +0x0eb:  mov    0xc(%ebp),%eax
08509c8c +0x0ee:  mov    %eax,0x2(%edx)
08509c8f +0x0f1:  mov    0x8(%ebp),%eax
08509c92 +0x0f4:  mov    0x654(%eax),%edx
08509c98 +0x0fa:  mov    -0x24(%ebp),%eax
08509c9b +0x0fd:  imul   $0x3d,%eax,%eax
08509c9e +0x100:  lea    (%edx,%eax,1),%ebx
08509ca1 +0x103:  movzbl -0x68(%ebp),%edx
08509ca5 +0x107:  mov    -0x20(%ebp),%eax
08509ca8 +0x10a:  mov    0x8(%ebp),%ecx
08509cab +0x10d:  lea    0x734(%ecx),%esi
08509cb1 +0x113:  lea    -0x46(%ebp),%ecx
08509cb4 +0x116:  mov    %ecx,0x14(%esp)
08509cb8 +0x11a:  mov    %edx,0x10(%esp)
08509cbc +0x11e:  mov    0x20(%ebp),%edx
08509cbf +0x121:  mov    %edx,0xc(%esp)
08509cc3 +0x125:  mov    %eax,0x8(%esp)
08509cc7 +0x129:  mov    0x10(%ebp),%eax
08509cca +0x12c:  mov    %eax,0x4(%esp)
08509cce +0x130:  mov    %esi,(%esp)
08509cd1 +0x133:  call   082f94bc <_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t>  ; WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(int, int, char const*, bool, stAvatarEmblemInfo_t const&)
08509cd6 +0x138:  mov    %eax,0x7(%ebx)
08509cd9 +0x13b:  mov    0x8(%ebp),%eax
08509cdc +0x13e:  mov    0x654(%eax),%edx
08509ce2 +0x144:  mov    -0x24(%ebp),%eax
08509ce5 +0x147:  imul   $0x3d,%eax,%eax
08509ce8 +0x14a:  lea    (%edx,%eax,1),%eax
08509ceb +0x14d:  movb   $0x8,0x1(%eax)
08509cef +0x151:  mov    0x8(%ebp),%eax
08509cf2 +0x154:  mov    0x654(%eax),%edx
08509cf8 +0x15a:  mov    -0x24(%ebp),%eax
08509cfb +0x15d:  imul   $0x3d,%eax,%eax
08509cfe +0x160:  add    %eax,%edx
08509d00 +0x162:  movsbw -0x60(%ebp),%ax
08509d05 +0x167:  mov    %ax,0xb(%edx)
08509d09 +0x16b:  mov    0x8(%ebp),%eax
08509d0c +0x16e:  mov    0x654(%eax),%edx
08509d12 +0x174:  mov    -0x24(%ebp),%eax
08509d15 +0x177:  imul   $0x3d,%eax,%eax
08509d18 +0x17a:  lea    (%edx,%eax,1),%eax
08509d1b +0x17d:  movb   $0x0,(%eax)
08509d1e +0x180:  mov    0x8(%ebp),%eax
08509d21 +0x183:  mov    0x654(%eax),%edx
08509d27 +0x189:  mov    -0x24(%ebp),%eax
08509d2a +0x18c:  imul   $0x3d,%eax,%eax
08509d2d +0x18f:  lea    (%edx,%eax,1),%eax
08509d30 +0x192:  movw   $0x0,0xd(%eax)
08509d36 +0x198:  mov    -0x28(%ebp),%eax
08509d39 +0x19b:  mov    %eax,-0x1c(%ebp)
08509d3c +0x19e:  mov    -0x1c(%ebp),%eax
08509d3f +0x1a1:  mov    %eax,(%esp)
08509d42 +0x1a4:  call   0817edec <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x1d>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x1d
08509d47 +0x1a9:  test   %al,%al
08509d49 +0x1ab:  je     08509d64 <+0x1c6>
08509d4b +0x1ad:  mov    0x8(%ebp),%eax
08509d4e +0x1b0:  mov    0x654(%eax),%edx
08509d54 +0x1b6:  mov    -0x24(%ebp),%eax
08509d57 +0x1b9:  imul   $0x3d,%eax,%eax
08509d5a +0x1bc:  add    %eax,%edx
08509d5c +0x1be:  movzwl -0x6c(%ebp),%eax
08509d60 +0x1c2:  mov    %ax,0xd(%edx)
08509d64 +0x1c6:  mov    0x8(%ebp),%eax
08509d67 +0x1c9:  mov    0x654(%eax),%edx
08509d6d +0x1cf:  mov    -0x24(%ebp),%eax
08509d70 +0x1d2:  imul   $0x3d,%eax,%eax
08509d73 +0x1d5:  lea    (%edx,%eax,1),%eax
08509d76 +0x1d8:  movw   $0x0,0xf(%eax)
08509d7c +0x1de:  mov    0x8(%ebp),%eax
08509d7f +0x1e1:  mov    0x654(%eax),%edx
08509d85 +0x1e7:  mov    -0x24(%ebp),%eax
08509d88 +0x1ea:  imul   $0x3d,%eax,%eax
08509d8b +0x1ed:  lea    (%edx,%eax,1),%eax
08509d8e +0x1f0:  mov    %eax,(%esp)
08509d91 +0x1f3:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08509d96 +0x1f8:  lea    -0x4a(%ebp),%eax
08509d99 +0x1fb:  mov    %eax,(%esp)
08509d9c +0x1fe:  call   0833421e <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x1c>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x1c
08509da1 +0x203:  mov    0x8(%ebp),%eax
08509da4 +0x206:  mov    0x654(%eax),%edx
08509daa +0x20c:  mov    -0x24(%ebp),%eax
08509dad +0x20f:  imul   $0x3d,%eax,%eax
08509db0 +0x212:  lea    (%edx,%eax,1),%eax
08509db3 +0x215:  mov    0xd(%eax),%edi
08509db6 +0x218:  movsbl -0x60(%ebp),%esi
08509dba +0x21c:  movzbl -0x5c(%ebp),%ebx
08509dbe +0x220:  mov    0x8(%ebp),%eax
08509dc1 +0x223:  mov    0x654(%eax),%edx
08509dc7 +0x229:  mov    -0x24(%ebp),%eax
08509dca +0x22c:  imul   $0x3d,%eax,%eax
08509dcd +0x22f:  lea    (%edx,%eax,1),%eax
08509dd0 +0x232:  mov    0x7(%eax),%eax
08509dd3 +0x235:  mov    0x8(%ebp),%edx
08509dd6 +0x238:  add    $0x734,%edx
08509ddc +0x23e:  mov    %eax,0x4(%esp)
08509de0 +0x242:  mov    %edx,(%esp)
08509de3 +0x245:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
08509de8 +0x24a:  lea    -0x4a(%ebp),%edx
08509deb +0x24d:  mov    %edx,0x20(%esp)
08509def +0x251:  mov    %edi,0x1c(%esp)
08509df3 +0x255:  mov    0x20(%ebp),%edx
08509df6 +0x258:  mov    %edx,0x18(%esp)
08509dfa +0x25c:  lea    -0x46(%ebp),%edx
08509dfd +0x25f:  mov    %edx,0x14(%esp)
08509e01 +0x263:  mov    %esi,0x10(%esp)
08509e05 +0x267:  mov    %ebx,0xc(%esp)
08509e09 +0x26b:  mov    %eax,0x8(%esp)
08509e0d +0x26f:  mov    -0x24(%ebp),%eax
08509e10 +0x272:  mov    %eax,0x4(%esp)
08509e14 +0x276:  mov    0x8(%ebp),%eax
08509e17 +0x279:  mov    %eax,(%esp)
08509e1a +0x27c:  call   08509e78 <_ZN10CInventory15_SaveAvatarItemEiibcRK20stAvatarEmblemInfo_tPKcmRK23stAvatarExpansionInfo_t>  ; CInventory::_SaveAvatarItem(int, int, bool, char, stAvatarEmblemInfo_t const&, char const*, unsigned long, stAvatarExpansionInfo_t const&)
08509e1f +0x281:  mov    0x8(%ebp),%eax
08509e22 +0x284:  mov    (%eax),%eax
08509e24 +0x286:  lea    0x79700(%eax),%edx
08509e2a +0x28c:  mov    0x24(%ebp),%eax
08509e2d +0x28f:  mov    %eax,0x10(%esp)
08509e31 +0x293:  mov    0x20(%ebp),%eax
08509e34 +0x296:  mov    %eax,0xc(%esp)
08509e38 +0x29a:  movl   $0xffffffff,0x8(%esp)
08509e40 +0x2a2:  mov    0xc(%ebp),%eax
08509e43 +0x2a5:  mov    %eax,0x4(%esp)
08509e47 +0x2a9:  mov    %edx,(%esp)
08509e4a +0x2ac:  call   08684652 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason>  ; cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason)
08509e4f +0x2b1:  mov    -0x24(%ebp),%eax
08509e52 +0x2b4:  jmp    08509e6c <+0x2ce>
08509e54 +0x2b6:  addl   $0x1,-0x24(%ebp)
08509e58 +0x2ba:  cmpl   $0x68,-0x24(%ebp)
08509e5c +0x2be:  setle  %al
08509e5f +0x2c1:  test   %al,%al
08509e61 +0x2c3:  jne    08509c53 <+0xb5>
08509e67 +0x2c9:  mov    $0xffffffff,%eax
08509e6c +0x2ce:  add    $0xac,%esp
08509e72 +0x2d4:  pop    %ebx
08509e73 +0x2d5:  pop    %esi
08509e74 +0x2d6:  pop    %edi
08509e75 +0x2d7:  pop    %ebp
08509e76 +0x2d8:  ret
08509e77 +0x2d9:  nop
```

## 反编译 C

```c
// CInventory::AddAvatarItem @ 0x8509b9e

/* CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool,
   unsigned short) */

int __thiscall
CInventory::AddAvatarItem
          (CInventory *this,int param_1,int param_2,bool param_3,char param_4,char param_5,
          char *param_6,undefined4 param_8,bool param_9,undefined2 param_10)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  stAvatarExpansionInfo_t local_4e [4];
  stAvatarEmblemInfo_t local_4a [30];
  CEquipItem *local_2c;
  int local_28;
  int local_24;
  CItem *local_20;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_2c = (CEquipItem *)CDataManager::find_item(this_00,param_1);
  if ((local_2c == (CEquipItem *)0x0) ||
     (cVar3 = (**(code **)(*(int *)local_2c + 0x10))(local_2c), cVar3 != '\x01')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    stAvatarEmblemInfo_t::init(local_4a);
    CEquipItem::getAvatarSocket(local_2c,(int)param_5,local_4a);
    for (local_28 = 0; local_28 < 0x69; local_28 = local_28 + 1) {
      if (*(int *)(*(int *)(this + 0x654) + local_28 * 0x3d + 2) == 0) {
        local_24 = OS_API::GetDateTimeTick();
        *(int *)(*(int *)(this + 0x654) + local_28 * 0x3d + 2) = param_1;
        iVar6 = *(int *)(this + 0x654);
        iVar4 = local_28 * 0x3d;
        uVar5 = WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem
                          ((CAvatarItemMgr *)(this + 0x734),param_2,local_24,param_6,param_9,
                           local_4a);
        *(undefined4 *)(iVar6 + iVar4 + 7) = uVar5;
        *(undefined1 *)(*(int *)(this + 0x654) + local_28 * 0x3d + 1) = 8;
        *(short *)(*(int *)(this + 0x654) + local_28 * 0x3d + 0xb) = (short)param_4;
        *(undefined1 *)(*(int *)(this + 0x654) + local_28 * 0x3d) = 0;
        *(undefined2 *)(*(int *)(this + 0x654) + local_28 * 0x3d + 0xd) = 0;
        local_20 = (CItem *)local_2c;
        cVar3 = CItem::IsHiddenOption((CItem *)local_2c);
        if (cVar3 != '\0') {
          *(undefined2 *)(*(int *)(this + 0x654) + local_28 * 0x3d + 0xd) = param_10;
        }
        *(undefined2 *)(*(int *)(this + 0x654) + local_28 * 0x3d + 0xf) = 0;
        Inven_Item::ResetItemAttr((Inven_Item *)(*(int *)(this + 0x654) + local_28 * 0x3d));
        stAvatarExpansionInfo_t::init(local_4e);
        uVar1 = *(ulong *)(*(int *)(this + 0x654) + local_28 * 0x3d + 0xd);
        iVar6 = WongWork::CAvatarItemMgr::GetExpireDate
                          ((CAvatarItemMgr *)(this + 0x734),
                           *(int *)(*(int *)(this + 0x654) + local_28 * 0x3d + 7));
        _SaveAvatarItem(this,local_28,iVar6,param_3,param_4,local_4a,param_6,uVar1,local_4e);
        cUserHistoryLog::AvatarItemAdd
                  ((cUserHistoryLog *)(*(int *)this + 0x79700),param_1,0xffffffff,param_6,param_8);
        return local_28;
      }
    }
  }
  return -1;
}
```
