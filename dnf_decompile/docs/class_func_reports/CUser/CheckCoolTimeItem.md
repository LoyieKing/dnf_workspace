# CheckCoolTimeItem

`_ZNK5CUser17CheckCoolTimeItemEm`

`CUser::CheckCoolTimeItem(unsigned long) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865e994` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865e994  _ZNK5CUser17CheckCoolTimeItemEm
#           CUser::CheckCoolTimeItem(unsigned long) const
# range [0x0865e994, 0x0865ea61]
0865e994 +0x00:  push   %ebp
0865e995 +0x01:  mov    %esp,%ebp
0865e997 +0x03:  push   %ebx
0865e998 +0x04:  sub    $0x24,%esp
0865e99b +0x07:  mov    0x8(%ebp),%eax
0865e99e +0x0a:  mov    %eax,(%esp)
0865e9a1 +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0865e9a6 +0x12:  test   %eax,%eax
0865e9a8 +0x14:  setne  %al
0865e9ab +0x17:  test   %al,%al
0865e9ad +0x19:  je     0865ea58 <+0xc4>
0865e9b3 +0x1f:  mov    0x8(%ebp),%eax
0865e9b6 +0x22:  mov    %eax,(%esp)
0865e9b9 +0x25:  call   08696a34 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3289>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3289
0865e9be +0x2a:  mov    %eax,-0xc(%ebp)
0865e9c1 +0x2d:  lea    -0x10(%ebp),%eax
0865e9c4 +0x30:  mov    -0xc(%ebp),%edx
0865e9c7 +0x33:  mov    %edx,0x4(%esp)
0865e9cb +0x37:  mov    %eax,(%esp)
0865e9ce +0x3a:  call   085d1a18 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x5f>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x5f
0865e9d3 +0x3f:  sub    $0x4,%esp
0865e9d6 +0x42:  lea    -0x14(%ebp),%eax
0865e9d9 +0x45:  mov    -0xc(%ebp),%edx
0865e9dc +0x48:  mov    %edx,0x4(%esp)
0865e9e0 +0x4c:  mov    %eax,(%esp)
0865e9e3 +0x4f:  call   085d1a44 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x8b>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x8b
0865e9e8 +0x54:  sub    $0x4,%esp
0865e9eb +0x57:  jmp    0865ea42 <+0xae>
0865e9ed +0x59:  lea    -0x10(%ebp),%eax
0865e9f0 +0x5c:  mov    %eax,(%esp)
0865e9f3 +0x5f:  call   085d1ab2 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xf9>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xf9
0865e9f8 +0x64:  mov    (%eax),%eax
0865e9fa +0x66:  cmp    0xc(%ebp),%eax
0865e9fd +0x69:  sete   %al
0865ea00 +0x6c:  test   %al,%al
0865ea02 +0x6e:  je     0865ea37 <+0xa3>
0865ea04 +0x70:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0865ea0b +0x77:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0865ea10 +0x7c:  mov    %eax,%ebx
0865ea12 +0x7e:  lea    -0x10(%ebp),%eax
0865ea15 +0x81:  mov    %eax,(%esp)
0865ea18 +0x84:  call   085d1ab2 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xf9>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xf9
0865ea1d +0x89:  mov    0x4(%eax),%eax
0865ea20 +0x8c:  cmp    %eax,%ebx
0865ea22 +0x8e:  setb   %al
0865ea25 +0x91:  test   %al,%al
0865ea27 +0x93:  je     0865ea30 <+0x9c>
0865ea29 +0x95:  mov    $0x1,%eax
0865ea2e +0x9a:  jmp    0865ea5d <+0xc9>
0865ea30 +0x9c:  mov    $0x0,%eax
0865ea35 +0xa1:  jmp    0865ea5d <+0xc9>
0865ea37 +0xa3:  lea    -0x10(%ebp),%eax
0865ea3a +0xa6:  mov    %eax,(%esp)
0865ea3d +0xa9:  call   085d1a9c <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xe3>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xe3
0865ea42 +0xae:  lea    -0x14(%ebp),%eax
0865ea45 +0xb1:  mov    %eax,0x4(%esp)
0865ea49 +0xb5:  lea    -0x10(%ebp),%eax
0865ea4c +0xb8:  mov    %eax,(%esp)
0865ea4f +0xbb:  call   085d1a70 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xb7>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xb7
0865ea54 +0xc0:  test   %al,%al
0865ea56 +0xc2:  jne    0865e9ed <+0x59>
0865ea58 +0xc4:  mov    $0x0,%eax
0865ea5d +0xc9:  mov    -0x4(%ebp),%ebx
0865ea60 +0xcc:  leave
0865ea61 +0xcd:  ret
```

## 反编译 C

```c
// CUser::CheckCoolTimeItem @ 0x865e994

/* CUser::CheckCoolTimeItem(unsigned long) const */

undefined4 __thiscall CUser::CheckCoolTimeItem(CUser *this,ulong param_1)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  undefined4 local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    local_10 = CUserCharacInfo::GetCurCharacCoolTimeItemListR((CUserCharacInfo *)this);
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_14,local_18), bVar1) {
      puVar3 = (ulong *)__gnu_cxx::
                        __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                        ::operator*(local_14);
      if (*puVar3 == param_1) {
        uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        iVar2 = __gnu_cxx::
                __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                ::operator*(local_14);
        if (uVar4 < *(uint *)(iVar2 + 4)) {
          return 1;
        }
        return 0;
      }
      __gnu_cxx::
      __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
      ::operator++(local_14);
    }
  }
  return 0;
}
```
