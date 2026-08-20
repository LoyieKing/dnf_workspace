# IsExistContinuousEffectItem

`_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri`

`expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d121e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d121e  _ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri
#           expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int)
# range [0x085d121e, 0x085d12ed]
085d121e +0x00:  push   %ebp
085d121f +0x01:  mov    %esp,%ebp
085d1221 +0x03:  push   %ebx
085d1222 +0x04:  sub    $0x24,%esp
085d1225 +0x07:  mov    0x8(%ebp),%eax
085d1228 +0x0a:  mov    %eax,(%esp)
085d122b +0x0d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085d1230 +0x12:  test   %eax,%eax
085d1232 +0x14:  setne  %al
085d1235 +0x17:  test   %al,%al
085d1237 +0x19:  je     085d12e4 <+0xc6>
085d123d +0x1f:  mov    0x8(%ebp),%eax
085d1240 +0x22:  mov    %eax,(%esp)
085d1243 +0x25:  call   085d19fa <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x41>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x41
085d1248 +0x2a:  mov    %eax,-0xc(%ebp)
085d124b +0x2d:  lea    -0x10(%ebp),%eax
085d124e +0x30:  mov    -0xc(%ebp),%edx
085d1251 +0x33:  mov    %edx,0x4(%esp)
085d1255 +0x37:  mov    %eax,(%esp)
085d1258 +0x3a:  call   085d1a18 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x5f>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x5f
085d125d +0x3f:  sub    $0x4,%esp
085d1260 +0x42:  lea    -0x14(%ebp),%eax
085d1263 +0x45:  mov    -0xc(%ebp),%edx
085d1266 +0x48:  mov    %edx,0x4(%esp)
085d126a +0x4c:  mov    %eax,(%esp)
085d126d +0x4f:  call   085d1a44 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x8b>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x8b
085d1272 +0x54:  sub    $0x4,%esp
085d1275 +0x57:  jmp    085d12ce <+0xb0>
085d1277 +0x59:  lea    -0x10(%ebp),%eax
085d127a +0x5c:  mov    %eax,(%esp)
085d127d +0x5f:  call   085d1ab2 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xf9>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xf9
085d1282 +0x64:  mov    (%eax),%edx
085d1284 +0x66:  mov    0xc(%ebp),%eax
085d1287 +0x69:  cmp    %eax,%edx
085d1289 +0x6b:  sete   %al
085d128c +0x6e:  test   %al,%al
085d128e +0x70:  je     085d12c3 <+0xa5>
085d1290 +0x72:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d1297 +0x79:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d129c +0x7e:  mov    %eax,%ebx
085d129e +0x80:  lea    -0x10(%ebp),%eax
085d12a1 +0x83:  mov    %eax,(%esp)
085d12a4 +0x86:  call   085d1ab2 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xf9>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xf9
085d12a9 +0x8b:  mov    0x4(%eax),%eax
085d12ac +0x8e:  cmp    %eax,%ebx
085d12ae +0x90:  setb   %al
085d12b1 +0x93:  test   %al,%al
085d12b3 +0x95:  je     085d12bc <+0x9e>
085d12b5 +0x97:  mov    $0x1,%eax
085d12ba +0x9c:  jmp    085d12e9 <+0xcb>
085d12bc +0x9e:  mov    $0x0,%eax
085d12c1 +0xa3:  jmp    085d12e9 <+0xcb>
085d12c3 +0xa5:  lea    -0x10(%ebp),%eax
085d12c6 +0xa8:  mov    %eax,(%esp)
085d12c9 +0xab:  call   085d1a9c <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xe3>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xe3
085d12ce +0xb0:  lea    -0x14(%ebp),%eax
085d12d1 +0xb3:  mov    %eax,0x4(%esp)
085d12d5 +0xb7:  lea    -0x10(%ebp),%eax
085d12d8 +0xba:  mov    %eax,(%esp)
085d12db +0xbd:  call   085d1a70 <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0xb7>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0xb7
085d12e0 +0xc2:  test   %al,%al
085d12e2 +0xc4:  jne    085d1277 <+0x59>
085d12e4 +0xc6:  mov    $0x0,%eax
085d12e9 +0xcb:  mov    -0x4(%ebp),%ebx
085d12ec +0xce:  leave
085d12ed +0xcf:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::IsExistContinuousEffectItem @ 0x85d121e

/* expert_job::CAlchemist::IsExistContinuousEffectItem(CUser*, int) */

undefined4 expert_job::CAlchemist::IsExistContinuousEffectItem(CUser *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  undefined4 local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    local_10 = CUserCharacInfo::GetCurCharacEffectItemListR((CUserCharacInfo *)param_1);
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    while (bVar1 = __gnu_cxx::operator!=(local_14,local_18), bVar1) {
      piVar3 = (int *)__gnu_cxx::
                      __normal_iterator<ContinuousItemInfo_const*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                      ::operator*(local_14);
      if (*piVar3 == param_2) {
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
