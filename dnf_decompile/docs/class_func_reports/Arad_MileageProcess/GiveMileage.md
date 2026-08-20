# GiveMileage

`_ZN19Arad_MileageProcess11GiveMileageEP5CUserii`

`Arad_MileageProcess::GiveMileage(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `Arad_MileageProcess` | `0x0819dc9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819dc9c  _ZN19Arad_MileageProcess11GiveMileageEP5CUserii
#           Arad_MileageProcess::GiveMileage(CUser*, int, int)
# range [0x0819dc9c, 0x0819dd4d]
0819dc9c +0x00:  push   %ebp
0819dc9d +0x01:  mov    %esp,%ebp
0819dc9f +0x03:  sub    $0x38,%esp
0819dca2 +0x06:  cmpl   $0x0,0xc(%ebp)
0819dca6 +0x0a:  je     0819dd4b <+0xaf>
0819dcac +0x10:  movl   $0x0,-0x14(%ebp)
0819dcb3 +0x17:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
0819dcb8 +0x1c:  mov    %eax,(%esp)
0819dcbb +0x1f:  call   0819e6a6 <_GLOBAL__I__ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0x1d>  ; global constructors keyed to Arad_MileageProcess::GiveMileage(CUser*, int, int)+0x1d
0819dcc0 +0x24:  mov    0x10(%ebp),%edx
0819dcc3 +0x27:  mov    %edx,0x4(%esp)
0819dcc7 +0x2b:  mov    %eax,(%esp)
0819dcca +0x2e:  call   081a3668 <_ZN17Arad_Mileage_Data4findEi>  ; Arad_Mileage_Data::find(int)
0819dccf +0x33:  mov    %eax,-0x10(%ebp)
0819dcd2 +0x36:  cmpl   $0x0,-0x10(%ebp)
0819dcd6 +0x3a:  js     0819dce9 <+0x4d>
0819dcd8 +0x3c:  cmpl   $0x3e8,-0x10(%ebp)
0819dcdf +0x43:  jg     0819dce9 <+0x4d>
0819dce1 +0x45:  mov    -0x10(%ebp),%eax
0819dce4 +0x48:  mov    %eax,-0x14(%ebp)
0819dce7 +0x4b:  jmp    0819dd01 <+0x65>
0819dce9 +0x4d:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
0819dcee +0x52:  mov    %eax,(%esp)
0819dcf1 +0x55:  call   0819e6a6 <_GLOBAL__I__ZN19Arad_MileageProcess11GiveMileageEP5CUserii+0x1d>  ; global constructors keyed to Arad_MileageProcess::GiveMileage(CUser*, int, int)+0x1d
0819dcf6 +0x5a:  mov    %eax,(%esp)
0819dcf9 +0x5d:  call   081a36f0 <_ZN17Arad_Mileage_Data13default_valueEv>  ; Arad_Mileage_Data::default_value()
0819dcfe +0x62:  mov    %eax,-0x14(%ebp)
0819dd01 +0x65:  fildl  0x14(%ebp)
0819dd04 +0x68:  fildl  -0x14(%ebp)
0819dd07 +0x6b:  flds   &data#ef72e4bb(.rodata)
0819dd0d +0x71:  fdivrp %st,%st(1)
0819dd0f +0x73:  fmulp  %st,%st(1)
0819dd11 +0x75:  fstpl  (%esp)
0819dd14 +0x78:  call   0807db70 <_init+0x468>
0819dd19 +0x7d:  fnstcw -0x1a(%ebp)
0819dd1c +0x80:  movzwl -0x1a(%ebp),%eax
0819dd20 +0x84:  mov    $0xc,%ah
0819dd22 +0x86:  mov    %ax,-0x1c(%ebp)
0819dd26 +0x8a:  fldcw  -0x1c(%ebp)
0819dd29 +0x8d:  fistpl -0xc(%ebp)
0819dd2c +0x90:  fldcw  -0x1a(%ebp)
0819dd2f +0x93:  movl   $0x3,0x8(%esp)
0819dd37 +0x9b:  mov    -0xc(%ebp),%eax
0819dd3a +0x9e:  mov    %eax,0x4(%esp)
0819dd3e +0xa2:  mov    0xc(%ebp),%eax
0819dd41 +0xa5:  mov    %eax,(%esp)
0819dd44 +0xa8:  call   08650954 <_ZN5CUser10AddMileageEi14eCoinAddReason>  ; CUser::AddMileage(int, eCoinAddReason)
0819dd49 +0xad:  jmp    0819dd4c <+0xb0>
0819dd4b +0xaf:  nop
0819dd4c +0xb0:  leave
0819dd4d +0xb1:  ret
```

## 反编译 C

```c
// Arad_MileageProcess::GiveMileage @ 0x819dc9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Arad_MileageProcess::GiveMileage(CUser*, int, int) */

void __thiscall
Arad_MileageProcess::GiveMileage(Arad_MileageProcess *this,CUser *param_1,int param_2,int param_3)

{
  Arad_DataManager *pAVar1;
  Arad_Mileage_Data *pAVar2;
  double dVar3;
  undefined4 local_18;
  
  if (param_1 != (CUser *)0x0) {
    pAVar1 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
    pAVar2 = (Arad_Mileage_Data *)ARAD::Arad_DataManager::getAradMileageData(pAVar1);
    local_18 = Arad_Mileage_Data::find(pAVar2,param_2);
    if ((local_18 < 0) || (1000 < local_18)) {
      pAVar1 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
      pAVar2 = (Arad_Mileage_Data *)ARAD::Arad_DataManager::getAradMileageData(pAVar1);
      local_18 = Arad_Mileage_Data::default_value(pAVar2);
    }
    dVar3 = floor((double)(((float)local_18 / _DAT_08ba7330) * (float)param_3));
    CUser::AddMileage(param_1,(int)ROUND(dVar3),3);
  }
  return;
}
```
