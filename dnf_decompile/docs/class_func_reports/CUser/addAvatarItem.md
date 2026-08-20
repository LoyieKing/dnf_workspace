# addAvatarItem

`_ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason`

`CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08681224` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08681224  _ZN5CUser13addAvatarItemEmccPKc20eAvatarItemAddReason
#           CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason)
# range [0x08681224, 0x08681311]
08681224 +0x00:  push   %ebp
08681225 +0x01:  mov    %esp,%ebp
08681227 +0x03:  push   %edi
08681228 +0x04:  push   %esi
08681229 +0x05:  push   %ebx
0868122a +0x06:  sub    $0x5c,%esp
0868122d +0x09:  mov    0x10(%ebp),%edx
08681230 +0x0c:  mov    0x14(%ebp),%eax
08681233 +0x0f:  mov    %dl,-0x2c(%ebp)
08681236 +0x12:  mov    %al,-0x30(%ebp)
08681239 +0x15:  mov    0xc(%ebp),%ebx
0868123c +0x18:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08681241 +0x1d:  mov    %ebx,0x4(%esp)
08681245 +0x21:  mov    %eax,(%esp)
08681248 +0x24:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0868124d +0x29:  mov    %eax,-0x28(%ebp)
08681250 +0x2c:  cmpl   $0x0,-0x28(%ebp)
08681254 +0x30:  jne    08681260 <+0x3c>
08681256 +0x32:  mov    $0xffffffff,%eax
0868125b +0x37:  jmp    08681309 <+0xe5>
08681260 +0x3c:  mov    -0x28(%ebp),%eax
08681263 +0x3f:  mov    %eax,-0x24(%ebp)
08681266 +0x42:  mov    -0x24(%ebp),%eax
08681269 +0x45:  mov    %eax,(%esp)
0868126c +0x48:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
08681271 +0x4d:  mov    %eax,-0x20(%ebp)
08681274 +0x50:  mov    -0x24(%ebp),%eax
08681277 +0x53:  mov    %eax,(%esp)
0868127a +0x56:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0868127f +0x5b:  mov    %eax,-0x1c(%ebp)
08681282 +0x5e:  movsbl -0x30(%ebp),%ebx
08681286 +0x62:  mov    -0x20(%ebp),%eax
08681289 +0x65:  mov    %eax,(%esp)
0868128c +0x68:  call   0815219a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1acf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1acf
08681291 +0x6d:  cmp    %eax,%ebx
08681293 +0x6f:  setl   %al
08681296 +0x72:  test   %al,%al
08681298 +0x74:  je     086812b2 <+0x8e>
0868129a +0x76:  movsbl -0x30(%ebp),%eax
0868129e +0x7a:  mov    %eax,0x4(%esp)
086812a2 +0x7e:  mov    -0x20(%ebp),%eax
086812a5 +0x81:  mov    %eax,(%esp)
086812a8 +0x84:  call   081522f6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1c2b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1c2b
086812ad +0x89:  mov    (%eax),%eax
086812af +0x8b:  mov    %eax,-0x1c(%ebp)
086812b2 +0x8e:  movsbl -0x30(%ebp),%edi
086812b6 +0x92:  movsbl -0x2c(%ebp),%esi
086812ba +0x96:  mov    0xc(%ebp),%ebx
086812bd +0x99:  mov    0x8(%ebp),%eax
086812c0 +0x9c:  mov    %eax,(%esp)
086812c3 +0x9f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
086812c8 +0xa4:  movl   $0x0,0x24(%esp)
086812d0 +0xac:  movl   $0x0,0x20(%esp)
086812d8 +0xb4:  mov    0x1c(%ebp),%edx
086812db +0xb7:  mov    %edx,0x1c(%esp)
086812df +0xbb:  mov    0x18(%ebp),%edx
086812e2 +0xbe:  mov    %edx,0x18(%esp)
086812e6 +0xc2:  mov    %edi,0x14(%esp)
086812ea +0xc6:  mov    %esi,0x10(%esp)
086812ee +0xca:  movl   $0x0,0xc(%esp)
086812f6 +0xd2:  mov    -0x1c(%ebp),%edx
086812f9 +0xd5:  mov    %edx,0x8(%esp)
086812fd +0xd9:  mov    %ebx,0x4(%esp)
08681301 +0xdd:  mov    %eax,(%esp)
08681304 +0xe0:  call   08509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>  ; CInventory::AddAvatarItem(int, int, bool, char, char, char const*, eAvatarItemAddReason, bool, unsigned short)
08681309 +0xe5:  add    $0x5c,%esp
0868130c +0xe8:  pop    %ebx
0868130d +0xe9:  pop    %esi
0868130e +0xea:  pop    %edi
0868130f +0xeb:  pop    %ebp
08681310 +0xec:  ret
08681311 +0xed:  nop
```

## 反编译 C

```c
// CUser::addAvatarItem @ 0x8681224

/* CUser::addAvatarItem(unsigned long, char, char, char const*, eAvatarItemAddReason) */

undefined4 __thiscall
CUser::addAvatarItem
          (CUser *this,int param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_6)

{
  CDataManager *this_00;
  CEquipItem *this_01;
  undefined4 uVar1;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *this_02;
  int iVar2;
  undefined4 *puVar3;
  CInventory *pCVar4;
  undefined4 local_20;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEquipItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CEquipItem *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    this_02 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
              CEquipItem::getAvatarTypeSelect(this_01);
    local_20 = CItem::getUsablePeriod((CItem *)this_01);
    iVar2 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size(this_02);
    if (param_3 < iVar2) {
      puVar3 = (undefined4 *)
               std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                         (this_02,(int)param_3);
      local_20 = *puVar3;
    }
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
    uVar1 = CInventory::AddAvatarItem
                      (pCVar4,param_1,local_20,0,(int)param_2,(int)param_3,param_4,param_6,0,0);
  }
  return uVar1;
}
```
