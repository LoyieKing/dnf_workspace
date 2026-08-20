# dispatch_sig

`_ZN22Inter_AvatarChangeStat12dispatch_sigEP5CUserPci`

`Inter_AvatarChangeStat::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AvatarChangeStat` | `0x084cf6ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf6ec  _ZN22Inter_AvatarChangeStat12dispatch_sigEP5CUserPci
#           Inter_AvatarChangeStat::dispatch_sig(CUser*, char*, int)
# range [0x084cf6ec, 0x084cf7f9]
084cf6ec +0x000:  push   %ebp
084cf6ed +0x001:  mov    %esp,%ebp
084cf6ef +0x003:  push   %edi
084cf6f0 +0x004:  push   %esi
084cf6f1 +0x005:  push   %ebx
084cf6f2 +0x006:  sub    $0x4c,%esp
084cf6f5 +0x009:  mov    0xc(%ebp),%eax
084cf6f8 +0x00c:  mov    %eax,(%esp)
084cf6fb +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cf700 +0x014:  cmp    $0x2,%eax
084cf703 +0x017:  setle  %al
084cf706 +0x01a:  test   %al,%al
084cf708 +0x01c:  je     084cf714 <+0x28>
084cf70a +0x01e:  mov    $0x0,%eax
084cf70f +0x023:  jmp    084cf7f1 <+0x105>
084cf714 +0x028:  mov    0x10(%ebp),%eax
084cf717 +0x02b:  mov    %eax,-0x1c(%ebp)
084cf71a +0x02e:  mov    -0x1c(%ebp),%eax
084cf71d +0x031:  mov    (%eax),%eax
084cf71f +0x033:  mov    %eax,%ebx
084cf721 +0x035:  mov    0xc(%ebp),%eax
084cf724 +0x038:  mov    %eax,(%esp)
084cf727 +0x03b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084cf72c +0x040:  mov    %eax,(%esp)
084cf72f +0x043:  call   080dd576 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xbf>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xbf
084cf734 +0x048:  mov    %ebx,0x4(%esp)
084cf738 +0x04c:  mov    %eax,(%esp)
084cf73b +0x04f:  call   082f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>  ; WongWork::CAvatarItemMgr::GetExpireDate(int) const
084cf740 +0x054:  cmp    $0xffffffff,%eax
084cf743 +0x057:  sete   %al
084cf746 +0x05a:  test   %al,%al
084cf748 +0x05c:  je     084cf7c0 <+0xd4>
084cf74a +0x05e:  mov    -0x1c(%ebp),%eax
084cf74d +0x061:  add    $0x4d,%eax
084cf750 +0x064:  mov    %eax,-0x34(%ebp)
084cf753 +0x067:  mov    -0x1c(%ebp),%eax
084cf756 +0x06a:  add    $0x2f,%eax
084cf759 +0x06d:  mov    %eax,-0x30(%ebp)
084cf75c +0x070:  mov    -0x1c(%ebp),%eax
084cf75f +0x073:  add    $0x12,%eax
084cf762 +0x076:  mov    %eax,-0x2c(%ebp)
084cf765 +0x079:  mov    -0x1c(%ebp),%eax
084cf768 +0x07c:  mov    0xa(%eax),%eax
084cf76b +0x07f:  mov    %eax,%edi
084cf76d +0x081:  mov    -0x1c(%ebp),%eax
084cf770 +0x084:  mov    0xe(%eax),%eax
084cf773 +0x087:  mov    %eax,%esi
084cf775 +0x089:  mov    -0x1c(%ebp),%eax
084cf778 +0x08c:  mov    (%eax),%eax
084cf77a +0x08e:  mov    %eax,%ebx
084cf77c +0x090:  mov    0xc(%ebp),%eax
084cf77f +0x093:  mov    %eax,(%esp)
084cf782 +0x096:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084cf787 +0x09b:  mov    %eax,(%esp)
084cf78a +0x09e:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
084cf78f +0x0a3:  movl   $0x0,0x1c(%esp)
084cf797 +0x0ab:  mov    -0x34(%ebp),%edx
084cf79a +0x0ae:  mov    %edx,0x18(%esp)
084cf79e +0x0b2:  mov    -0x30(%ebp),%edx
084cf7a1 +0x0b5:  mov    %edx,0x14(%esp)
084cf7a5 +0x0b9:  mov    -0x2c(%ebp),%edx
084cf7a8 +0x0bc:  mov    %edx,0x10(%esp)
084cf7ac +0x0c0:  mov    %edi,0xc(%esp)
084cf7b0 +0x0c4:  mov    %esi,0x8(%esp)
084cf7b4 +0x0c8:  mov    %ebx,0x4(%esp)
084cf7b8 +0x0cc:  mov    %eax,(%esp)
084cf7bb +0x0cf:  call   082f901c <_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb>  ; WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&, stAvatarExpansionInfo_t const&, bool)
084cf7c0 +0x0d4:  mov    -0x1c(%ebp),%eax
084cf7c3 +0x0d7:  movzbl 0x8(%eax),%eax
084cf7c7 +0x0db:  movzbl %al,%eax
084cf7ca +0x0de:  sub    $0xa,%eax
084cf7cd +0x0e1:  mov    %eax,0xc(%esp)
084cf7d1 +0x0e5:  movl   $0x1,0x8(%esp)
084cf7d9 +0x0ed:  movl   $0x1,0x4(%esp)
084cf7e1 +0x0f5:  mov    0xc(%ebp),%eax
084cf7e4 +0x0f8:  mov    %eax,(%esp)
084cf7e7 +0x0fb:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
084cf7ec +0x100:  mov    $0x0,%eax
084cf7f1 +0x105:  add    $0x4c,%esp
084cf7f4 +0x108:  pop    %ebx
084cf7f5 +0x109:  pop    %esi
084cf7f6 +0x10a:  pop    %edi
084cf7f7 +0x10b:  pop    %ebp
084cf7f8 +0x10c:  ret
084cf7f9 +0x10d:  nop
```

## 反编译 C

```c
// Inter_AvatarChangeStat::dispatch_sig @ 0x84cf6ec

/* Inter_AvatarChangeStat::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AvatarChangeStat::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CInventory *pCVar4;
  CAvatarItemMgr *pCVar5;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = *(int *)param_3;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
    iVar3 = WongWork::CAvatarItemMgr::GetExpireDate(pCVar5,iVar3);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_3 + 10);
      iVar1 = *(int *)(param_3 + 0xe);
      iVar2 = *(int *)param_3;
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar4);
      WongWork::CAvatarItemMgr::RegistItem
                (pCVar5,iVar2,iVar1,iVar3,(char *)(param_3 + 0x12),
                 (stAvatarEmblemInfo_t *)(param_3 + 0x2f),
                 (stAvatarExpansionInfo_t *)(param_3 + 0x4d),false);
    }
    CUser::SendUpdateItemList((CUser *)param_2,1,1,*(byte *)(param_3 + 8) - 10);
  }
  return 0;
}
```
