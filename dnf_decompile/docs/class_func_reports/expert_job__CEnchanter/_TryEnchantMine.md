# _TryEnchantMine

`_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t`

`expert_job::CEnchanter::_TryEnchantMine(CUser*, stItemPos_t*)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849d7b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849d7b6  _ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t
#           expert_job::CEnchanter::_TryEnchantMine(CUser*, stItemPos_t*)
# range [0x0849d7b6, 0x0849da3d]
0849d7b6 +0x000:  push   %ebp
0849d7b7 +0x001:  mov    %esp,%ebp
0849d7b9 +0x003:  push   %ebx
0849d7ba +0x004:  sub    $0x64,%esp
0849d7bd +0x007:  movl   $0x0,-0x18(%ebp)
0849d7c4 +0x00e:  mov    0x10(%ebp),%eax
0849d7c7 +0x011:  movzwl 0x1(%eax),%eax
0849d7cb +0x015:  movzwl %ax,%edx
0849d7ce +0x018:  mov    0x10(%ebp),%eax
0849d7d1 +0x01b:  movzbl (%eax),%eax
0849d7d4 +0x01e:  movzbl %al,%eax
0849d7d7 +0x021:  mov    0x8(%ebp),%ecx
0849d7da +0x024:  add    $0x8,%ecx
0849d7dd +0x027:  mov    %edx,0xc(%esp)
0849d7e1 +0x02b:  mov    %eax,0x8(%esp)
0849d7e5 +0x02f:  mov    0xc(%ebp),%eax
0849d7e8 +0x032:  mov    %eax,0x4(%esp)
0849d7ec +0x036:  mov    %ecx,(%esp)
0849d7ef +0x039:  call   0849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>  ; expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short)
0849d7f4 +0x03e:  mov    %eax,-0x18(%ebp)
0849d7f7 +0x041:  cmpl   $0x0,-0x18(%ebp)
0849d7fb +0x045:  setne  %al
0849d7fe +0x048:  test   %al,%al
0849d800 +0x04a:  je     0849d80a <+0x54>
0849d802 +0x04c:  mov    -0x18(%ebp),%eax
0849d805 +0x04f:  jmp    0849da38 <+0x282>
0849d80a +0x054:  mov    0x8(%ebp),%eax
0849d80d +0x057:  mov    0x40(%eax),%eax
0849d810 +0x05a:  mov    %eax,(%esp)
0849d813 +0x05d:  call   0849be32 <_ZN10expert_job15FindMonsterCardEP5CItem>  ; expert_job::FindMonsterCard(CItem*)
0849d818 +0x062:  mov    %eax,-0x14(%ebp)
0849d81b +0x065:  cmpl   $0x0,-0x14(%ebp)
0849d81f +0x069:  jne    0849d82b <+0x75>
0849d821 +0x06b:  mov    $0x11,%eax
0849d826 +0x070:  jmp    0849da38 <+0x282>
0849d82b +0x075:  lea    -0x55(%ebp),%eax
0849d82e +0x078:  mov    %eax,(%esp)
0849d831 +0x07b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0849d836 +0x080:  movl   $0xffffffff,-0x10(%ebp)
0849d83d +0x087:  movl   $0x0,-0xc(%ebp)
0849d844 +0x08e:  mov    -0x14(%ebp),%eax
0849d847 +0x091:  mov    %eax,(%esp)
0849d84a +0x094:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849d84f +0x099:  mov    %eax,%ebx
0849d851 +0x09b:  mov    0xc(%ebp),%eax
0849d854 +0x09e:  mov    %eax,(%esp)
0849d857 +0x0a1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849d85c +0x0a6:  lea    -0x55(%ebp),%edx
0849d85f +0x0a9:  mov    %edx,0x8(%esp)
0849d863 +0x0ad:  mov    %ebx,0x4(%esp)
0849d867 +0x0b1:  mov    %eax,(%esp)
0849d86a +0x0b4:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
0849d86f +0x0b9:  mov    %eax,-0x10(%ebp)
0849d872 +0x0bc:  cmpl   $0xffffffff,-0x10(%ebp)
0849d876 +0x0c0:  jne    0849d882 <+0xcc>
0849d878 +0x0c2:  mov    $0x11,%eax
0849d87d +0x0c7:  jmp    0849da38 <+0x282>
0849d882 +0x0cc:  mov    -0x10(%ebp),%eax
0849d885 +0x0cf:  movzwl %ax,%eax
0849d888 +0x0d2:  mov    0x8(%ebp),%edx
0849d88b +0x0d5:  add    $0x18,%edx
0849d88e +0x0d8:  mov    %eax,0xc(%esp)
0849d892 +0x0dc:  movl   $0x0,0x8(%esp)
0849d89a +0x0e4:  mov    0xc(%ebp),%eax
0849d89d +0x0e7:  mov    %eax,0x4(%esp)
0849d8a1 +0x0eb:  mov    %edx,(%esp)
0849d8a4 +0x0ee:  call   0849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>  ; expert_job::ExpertJobMaterial::SetData(CUser*, unsigned short, unsigned short)
0849d8a9 +0x0f3:  mov    %eax,-0x18(%ebp)
0849d8ac +0x0f6:  cmpl   $0x0,-0x18(%ebp)
0849d8b0 +0x0fa:  setne  %al
0849d8b3 +0x0fd:  test   %al,%al
0849d8b5 +0x0ff:  je     0849d8bf <+0x109>
0849d8b7 +0x101:  mov    -0x18(%ebp),%eax
0849d8ba +0x104:  jmp    0849da38 <+0x282>
0849d8bf +0x109:  mov    0x8(%ebp),%eax
0849d8c2 +0x10c:  mov    %eax,(%esp)
0849d8c5 +0x10f:  call   0849ca06 <_ZN10expert_job10CEnchanter13IsRecipeRightEv>  ; expert_job::CEnchanter::IsRecipeRight()
0849d8ca +0x114:  xor    $0x1,%eax
0849d8cd +0x117:  test   %al,%al
0849d8cf +0x119:  je     0849d8db <+0x125>
0849d8d1 +0x11b:  mov    $0x11,%eax
0849d8d6 +0x120:  jmp    0849da38 <+0x282>
0849d8db +0x125:  mov    0x8(%ebp),%eax
0849d8de +0x128:  mov    0x40(%eax),%eax
0849d8e1 +0x12b:  mov    %eax,0x4(%esp)
0849d8e5 +0x12f:  mov    0xc(%ebp),%eax
0849d8e8 +0x132:  mov    %eax,(%esp)
0849d8eb +0x135:  call   0849b590 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem>  ; expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*)
0849d8f0 +0x13a:  xor    $0x1,%eax
0849d8f3 +0x13d:  test   %al,%al
0849d8f5 +0x13f:  je     0849d901 <+0x14b>
0849d8f7 +0x141:  mov    $0x11,%eax
0849d8fc +0x146:  jmp    0849da38 <+0x282>
0849d901 +0x14b:  mov    0x8(%ebp),%eax
0849d904 +0x14e:  add    $0x8,%eax
0849d907 +0x151:  movl   $0x0,0x8(%esp)
0849d90f +0x159:  movl   $0x0,0x4(%esp)
0849d917 +0x161:  mov    %eax,(%esp)
0849d91a +0x164:  call   0849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>  ; expert_job::ExpertJobMaterial::CheckType(bool, int)
0849d91f +0x169:  mov    %eax,-0x18(%ebp)
0849d922 +0x16c:  cmpl   $0x0,-0x18(%ebp)
0849d926 +0x170:  setne  %al
0849d929 +0x173:  test   %al,%al
0849d92b +0x175:  je     0849d935 <+0x17f>
0849d92d +0x177:  mov    -0x18(%ebp),%eax
0849d930 +0x17a:  jmp    0849da38 <+0x282>
0849d935 +0x17f:  mov    0x8(%ebp),%eax
0849d938 +0x182:  add    $0x18,%eax
0849d93b +0x185:  movl   $0x2,0x8(%esp)
0849d943 +0x18d:  movl   $0x1,0x4(%esp)
0849d94b +0x195:  mov    %eax,(%esp)
0849d94e +0x198:  call   0849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>  ; expert_job::ExpertJobMaterial::CheckType(bool, int)
0849d953 +0x19d:  mov    %eax,-0x18(%ebp)
0849d956 +0x1a0:  cmpl   $0x0,-0x18(%ebp)
0849d95a +0x1a4:  setne  %al
0849d95d +0x1a7:  test   %al,%al
0849d95f +0x1a9:  je     0849d969 <+0x1b3>
0849d961 +0x1ab:  mov    -0x18(%ebp),%eax
0849d964 +0x1ae:  jmp    0849da38 <+0x282>
0849d969 +0x1b3:  mov    0x8(%ebp),%eax
0849d96c +0x1b6:  mov    0x1c(%eax),%edx
0849d96f +0x1b9:  mov    0x8(%ebp),%eax
0849d972 +0x1bc:  mov    %edx,0x3c(%eax)
0849d975 +0x1bf:  mov    0x8(%ebp),%eax
0849d978 +0x1c2:  mov    0x3c(%eax),%eax
0849d97b +0x1c5:  test   %eax,%eax
0849d97d +0x1c7:  jne    0849d989 <+0x1d3>
0849d97f +0x1c9:  mov    $0x11,%eax
0849d984 +0x1ce:  jmp    0849da38 <+0x282>
0849d989 +0x1d3:  mov    0x8(%ebp),%eax
0849d98c +0x1d6:  mov    %eax,(%esp)
0849d98f +0x1d9:  call   0849ca6a <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv>  ; expert_job::CEnchanter::IsEqualMonsterCad()
0849d994 +0x1de:  xor    $0x1,%eax
0849d997 +0x1e1:  test   %al,%al
0849d999 +0x1e3:  je     0849d9a5 <+0x1ef>
0849d99b +0x1e5:  mov    $0x11,%eax
0849d9a0 +0x1ea:  jmp    0849da38 <+0x282>
0849d9a5 +0x1ef:  mov    0x8(%ebp),%eax
0849d9a8 +0x1f2:  mov    0x40(%eax),%edx
0849d9ab +0x1f5:  mov    0x8(%ebp),%eax
0849d9ae +0x1f8:  mov    0xc(%eax),%eax
0849d9b1 +0x1fb:  mov    %edx,0x4(%esp)
0849d9b5 +0x1ff:  mov    %eax,(%esp)
0849d9b8 +0x202:  call   0849d768 <_Z11EnableWorldPK5CItemS1_>  ; EnableWorld(CItem const*, CItem const*)
0849d9bd +0x207:  xor    $0x1,%eax
0849d9c0 +0x20a:  test   %al,%al
0849d9c2 +0x20c:  je     0849d9cb <+0x215>
0849d9c4 +0x20e:  mov    $0x11,%eax
0849d9c9 +0x213:  jmp    0849da38 <+0x282>
0849d9cb +0x215:  mov    0x8(%ebp),%eax
0849d9ce +0x218:  mov    0x3c(%eax),%eax
0849d9d1 +0x21b:  mov    (%eax),%eax
0849d9d3 +0x21d:  add    $0x20,%eax
0849d9d6 +0x220:  mov    (%eax),%ebx
0849d9d8 +0x222:  mov    0x8(%ebp),%eax
0849d9db +0x225:  mov    0xc(%eax),%eax
0849d9de +0x228:  mov    (%eax),%eax
0849d9e0 +0x22a:  add    $0xc,%eax
0849d9e3 +0x22d:  mov    (%eax),%edx
0849d9e5 +0x22f:  mov    0x8(%ebp),%eax
0849d9e8 +0x232:  mov    0xc(%eax),%eax
0849d9eb +0x235:  mov    %eax,(%esp)
0849d9ee +0x238:  call   *%edx
0849d9f0 +0x23a:  mov    0x8(%ebp),%edx
0849d9f3 +0x23d:  mov    0x3c(%edx),%edx
0849d9f6 +0x240:  mov    %eax,0x4(%esp)
0849d9fa +0x244:  mov    %edx,(%esp)
0849d9fd +0x247:  call   *%ebx
0849d9ff +0x249:  xor    $0x1,%eax
0849da02 +0x24c:  test   %al,%al
0849da04 +0x24e:  je     0849da0d <+0x257>
0849da06 +0x250:  mov    $0x17,%eax
0849da0b +0x255:  jmp    0849da38 <+0x282>
0849da0d +0x257:  movl   $0x0,0x4(%esp)
0849da15 +0x25f:  mov    0x8(%ebp),%eax
0849da18 +0x262:  mov    %eax,(%esp)
0849da1b +0x265:  call   0849cb2c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE>  ; expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE)
0849da20 +0x26a:  mov    %eax,-0x18(%ebp)
0849da23 +0x26d:  cmpl   $0x0,-0x18(%ebp)
0849da27 +0x271:  setne  %al
0849da2a +0x274:  test   %al,%al
0849da2c +0x276:  je     0849da33 <+0x27d>
0849da2e +0x278:  mov    -0x18(%ebp),%eax
0849da31 +0x27b:  jmp    0849da38 <+0x282>
0849da33 +0x27d:  mov    $0x0,%eax
0849da38 +0x282:  add    $0x64,%esp
0849da3b +0x285:  pop    %ebx
0849da3c +0x286:  pop    %ebp
0849da3d +0x287:  ret
```

## 反编译 C

```c
// expert_job::CEnchanter::_TryEnchantMine @ 0x849d7b6

/* expert_job::CEnchanter::_TryEnchantMine(CUser*, stItemPos_t*) */

int __thiscall
expert_job::CEnchanter::_TryEnchantMine(CEnchanter *this,CUser *param_1,stItemPos_t *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  undefined4 uVar4;
  Inven_Item local_59 [61];
  int local_1c;
  CItem *local_18;
  int local_14;
  undefined4 local_10;
  
  local_1c = 0;
  local_1c = ExpertJobMaterial::SetData
                       ((ExpertJobMaterial *)(this + 8),param_1,(ushort)(byte)*param_2,
                        *(ushort *)(param_2 + 1));
  if (local_1c == 0) {
    local_18 = (CItem *)FindMonsterCard(*(CItem **)(this + 0x40));
    if (local_18 == (CItem *)0x0) {
      local_1c = 0x11;
    }
    else {
      Inven_Item::Inven_Item(local_59);
      local_14 = 0xffffffff;
      local_10 = 0;
      iVar3 = CItem::get_index(local_18);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_14 = CInventory::GetInvenData(this_00,iVar3,local_59);
      if (local_14 == -1) {
        local_1c = 0x11;
      }
      else {
        local_1c = ExpertJobMaterial::SetData
                             ((ExpertJobMaterial *)(this + 0x18),param_1,0,(ushort)local_14);
        if (local_1c == 0) {
          cVar2 = IsRecipeRight(this);
          if (cVar2 == '\x01') {
            cVar2 = CExpertJob::IsLearnRecipe(param_1,*(CStackableItem **)(this + 0x40));
            if (cVar2 == '\x01') {
              local_1c = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 8),false,0);
              if ((local_1c == 0) &&
                 (local_1c = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 0x18),true,2)
                 , local_1c == 0)) {
                *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x1c);
                if (*(int *)(this + 0x3c) == 0) {
                  local_1c = 0x11;
                }
                else {
                  cVar2 = IsEqualMonsterCad(this);
                  if (cVar2 == '\x01') {
                    cVar2 = EnableWorld(*(CItem **)(this + 0xc),*(CItem **)(this + 0x40));
                    if (cVar2 == '\x01') {
                      pcVar1 = *(code **)(**(int **)(this + 0x3c) + 0x20);
                      uVar4 = (**(code **)(**(int **)(this + 0xc) + 0xc))
                                        (*(undefined4 *)(this + 0xc));
                      cVar2 = (*pcVar1)(*(undefined4 *)(this + 0x3c),uVar4);
                      if (cVar2 == '\x01') {
                        local_1c = _DoEnchant(this,0);
                        if (local_1c == 0) {
                          local_1c = 0;
                        }
                      }
                      else {
                        local_1c = 0x17;
                      }
                    }
                    else {
                      local_1c = 0x11;
                    }
                  }
                  else {
                    local_1c = 0x11;
                  }
                }
              }
            }
            else {
              local_1c = 0x11;
            }
          }
          else {
            local_1c = 0x11;
          }
        }
      }
    }
  }
  return local_1c;
}
```
