# verifyApplyUser

`_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser`

`EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CUsedFatigueGiveItem` | `0x08110756` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08110756  _ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser
#           EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUser*)
# range [0x08110756, 0x081107e9]
08110756 +0x00:  push   %ebp
08110757 +0x01:  mov    %esp,%ebp
08110759 +0x03:  push   %ebx
0811075a +0x04:  sub    $0x14,%esp
0811075d +0x07:  mov    0x8(%ebp),%eax
08110760 +0x0a:  mov    0x1c(%eax),%eax
08110763 +0x0d:  mov    0x18(%eax),%eax
08110766 +0x10:  test   %eax,%eax
08110768 +0x12:  js     08110789 <+0x33>
0811076a +0x14:  mov    0x8(%ebp),%eax
0811076d +0x17:  mov    0x1c(%eax),%eax
08110770 +0x1a:  mov    0x18(%eax),%ebx
08110773 +0x1d:  mov    0xc(%ebp),%eax
08110776 +0x20:  mov    %eax,(%esp)
08110779 +0x23:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0811077e +0x28:  cmp    %eax,%ebx
08110780 +0x2a:  je     08110789 <+0x33>
08110782 +0x2c:  mov    $0x1,%eax
08110787 +0x31:  jmp    0811078e <+0x38>
08110789 +0x33:  mov    $0x0,%eax
0811078e +0x38:  test   %al,%al
08110790 +0x3a:  je     08110799 <+0x43>
08110792 +0x3c:  mov    $0x0,%eax
08110797 +0x41:  jmp    081107e3 <+0x8d>
08110799 +0x43:  mov    0x8(%ebp),%eax
0811079c +0x46:  mov    %eax,(%esp)
0811079f +0x49:  call   08110eec <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3fe>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3fe
081107a4 +0x4e:  movzbl %al,%eax
081107a7 +0x51:  test   %eax,%eax
081107a9 +0x53:  je     081107b2 <+0x5c>
081107ab +0x55:  cmp    $0x1,%eax
081107ae +0x58:  je     081107b9 <+0x63>
081107b0 +0x5a:  jmp    081107de <+0x88>
081107b2 +0x5c:  mov    $0x1,%eax
081107b7 +0x61:  jmp    081107e3 <+0x8d>
081107b9 +0x63:  movl   $0xc,0x4(%esp)
081107c1 +0x6b:  mov    0xc(%ebp),%eax
081107c4 +0x6e:  mov    %eax,(%esp)
081107c7 +0x71:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
081107cc +0x76:  test   %al,%al
081107ce +0x78:  je     081107d7 <+0x81>
081107d0 +0x7a:  mov    $0x1,%eax
081107d5 +0x7f:  jmp    081107e3 <+0x8d>
081107d7 +0x81:  mov    $0x0,%eax
081107dc +0x86:  jmp    081107e3 <+0x8d>
081107de +0x88:  mov    $0x0,%eax
081107e3 +0x8d:  add    $0x14,%esp
081107e6 +0x90:  pop    %ebx
081107e7 +0x91:  pop    %ebp
081107e8 +0x92:  ret
081107e9 +0x93:  nop
```

## 反编译 C

```c
// EventClassify::CUsedFatigueGiveItem::verifyApplyUser @ 0x8110756

/* EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUser*) */

undefined4 __thiscall
EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUsedFatigueGiveItem *this,CUser *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (-1 < *(int *)(*(int *)(this + 0x1c) + 0x18)) {
    iVar1 = *(int *)(*(int *)(this + 0x1c) + 0x18);
    iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar1 != iVar4) {
      bVar2 = true;
      goto LAB_0811078e;
    }
  }
  bVar2 = false;
LAB_0811078e:
  if (bVar2) {
    uVar5 = 0;
  }
  else {
    cVar3 = get_user_type(this);
    if (cVar3 == '\0') {
      uVar5 = 1;
    }
    else if (cVar3 == '\x01') {
      cVar3 = CUser::isAffectedPremium(param_1,0xc);
      if (cVar3 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
