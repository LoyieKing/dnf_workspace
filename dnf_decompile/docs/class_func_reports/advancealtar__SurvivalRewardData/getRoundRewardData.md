# getRoundRewardData

`_ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi`

`advancealtar::SurvivalRewardData::getRoundRewardData(int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::SurvivalRewardData` | `0x0889aebe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889aebe  _ZNK12advancealtar18SurvivalRewardData18getRoundRewardDataEi
#           advancealtar::SurvivalRewardData::getRoundRewardData(int) const
# range [0x0889aebe, 0x0889af73]
0889aebe +0x00:  push   %ebp
0889aebf +0x01:  mov    %esp,%ebp
0889aec1 +0x03:  sub    $0x28,%esp
0889aec4 +0x06:  mov    0x8(%ebp),%edx
0889aec7 +0x09:  lea    -0x14(%ebp),%eax
0889aeca +0x0c:  mov    %edx,0x4(%esp)
0889aece +0x10:  mov    %eax,(%esp)
0889aed1 +0x13:  call   083a504e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x3f01a>  ; global constructors keyed to CServerEvent::m_nExpRate+0x3f01a
0889aed6 +0x18:  sub    $0x4,%esp
0889aed9 +0x1b:  jmp    0889af3d <+0x7f>
0889aedb +0x1d:  lea    -0x14(%ebp),%eax
0889aede +0x20:  mov    %eax,(%esp)
0889aee1 +0x23:  call   0889c410 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xad9>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xad9
0889aee6 +0x28:  mov    (%eax),%eax
0889aee8 +0x2a:  cmp    0xc(%ebp),%eax
0889aeeb +0x2d:  jg     0889af07 <+0x49>
0889aeed +0x2f:  lea    -0x14(%ebp),%eax
0889aef0 +0x32:  mov    %eax,(%esp)
0889aef3 +0x35:  call   0889c410 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xad9>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xad9
0889aef8 +0x3a:  mov    0x4(%eax),%eax
0889aefb +0x3d:  cmp    0xc(%ebp),%eax
0889aefe +0x40:  jl     0889af07 <+0x49>
0889af00 +0x42:  mov    $0x1,%eax
0889af05 +0x47:  jmp    0889af0c <+0x4e>
0889af07 +0x49:  mov    $0x0,%eax
0889af0c +0x4e:  test   %al,%al
0889af0e +0x50:  je     0889af20 <+0x62>
0889af10 +0x52:  lea    -0x14(%ebp),%eax
0889af13 +0x55:  mov    %eax,(%esp)
0889af16 +0x58:  call   0889c410 <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xad9>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xad9
0889af1b +0x5d:  add    $0x8,%eax
0889af1e +0x60:  jmp    0889af71 <+0xb3>
0889af20 +0x62:  lea    -0xc(%ebp),%eax
0889af23 +0x65:  movl   $0x0,0x8(%esp)
0889af2b +0x6d:  lea    -0x14(%ebp),%edx
0889af2e +0x70:  mov    %edx,0x4(%esp)
0889af32 +0x74:  mov    %eax,(%esp)
0889af35 +0x77:  call   0889c3dc <_GLOBAL__I__ZN12advancealtar16isValidRidableIdENS_9RidableId1TE+0xaa5>  ; global constructors keyed to advancealtar::isValidRidableId(advancealtar::RidableId::T)+0xaa5
0889af3a +0x7c:  sub    $0x4,%esp
0889af3d +0x7f:  mov    0x8(%ebp),%edx
0889af40 +0x82:  lea    -0x10(%ebp),%eax
0889af43 +0x85:  mov    %edx,0x4(%esp)
0889af47 +0x89:  mov    %eax,(%esp)
0889af4a +0x8c:  call   083a507a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x3f046>  ; global constructors keyed to CServerEvent::m_nExpRate+0x3f046
0889af4f +0x91:  sub    $0x4,%esp
0889af52 +0x94:  lea    -0x10(%ebp),%eax
0889af55 +0x97:  mov    %eax,0x4(%esp)
0889af59 +0x9b:  lea    -0x14(%ebp),%eax
0889af5c +0x9e:  mov    %eax,(%esp)
0889af5f +0xa1:  call   083e93b1 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8337d>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8337d
0889af64 +0xa6:  test   %al,%al
0889af66 +0xa8:  jne    0889aedb <+0x1d>
0889af6c +0xae:  mov    $0x0,%eax
0889af71 +0xb3:  leave
0889af72 +0xb4:  ret
0889af73 +0xb5:  nop
```

## 反编译 C

```c
// advancealtar::SurvivalRewardData::getRoundRewardData @ 0x889aebe

/* advancealtar::SurvivalRewardData::getRoundRewardData(int) const */

int __thiscall
advancealtar::SurvivalRewardData::getRoundRewardData(SurvivalRewardData *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
  local_10 [12];
  
  std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>::begin();
  while( true ) {
    std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
                    ::operator->(local_18);
    if ((param_1 < *piVar2) ||
       (iVar3 = __gnu_cxx::
                __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
                ::operator->(local_18), *(int *)(iVar3 + 4) < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    __gnu_cxx::
    __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
    ::operator++(local_10,(int)local_18);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<advancealtar::RoundRewardData_const*,std::vector<advancealtar::RoundRewardData,std::allocator<advancealtar::RoundRewardData>>>
          ::operator->(local_18);
  return iVar3 + 8;
}
```
