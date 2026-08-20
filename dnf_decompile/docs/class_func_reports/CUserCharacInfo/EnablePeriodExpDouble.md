# EnablePeriodExpDouble

`_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv`

`CUserCharacInfo::EnablePeriodExpDouble()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08659bec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659bec  _ZN15CUserCharacInfo21EnablePeriodExpDoubleEv
#           CUserCharacInfo::EnablePeriodExpDouble()
# range [0x08659bec, 0x08659cef]
08659bec +0x000:  push   %ebp
08659bed +0x001:  mov    %esp,%ebp
08659bef +0x003:  sub    $0x48,%esp
08659bf2 +0x006:  mov    0x8(%ebp),%eax
08659bf5 +0x009:  mov    0x10(%eax),%eax
08659bf8 +0x00c:  add    $0xea6,%eax
08659bfd +0x011:  mov    %eax,-0x14(%ebp)
08659c00 +0x014:  lea    -0x20(%ebp),%eax
08659c03 +0x017:  mov    -0x14(%ebp),%edx
08659c06 +0x01a:  mov    %edx,0x4(%esp)
08659c0a +0x01e:  mov    %eax,(%esp)
08659c0d +0x021:  call   0869aeba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x770f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x770f
08659c12 +0x026:  sub    $0x4,%esp
08659c15 +0x029:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08659c1c +0x030:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08659c21 +0x035:  mov    %eax,-0x10(%ebp)
08659c24 +0x038:  jmp    08659cb9 <+0xcd>
08659c29 +0x03d:  lea    -0x20(%ebp),%eax
08659c2c +0x040:  mov    %eax,(%esp)
08659c2f +0x043:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08659c34 +0x048:  mov    (%eax),%eax
08659c36 +0x04a:  cmp    $0x1cd1,%eax
08659c3b +0x04f:  sete   %al
08659c3e +0x052:  test   %al,%al
08659c40 +0x054:  je     08659c9c <+0xb0>
08659c42 +0x056:  lea    -0x20(%ebp),%eax
08659c45 +0x059:  mov    %eax,(%esp)
08659c48 +0x05c:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
08659c4d +0x061:  mov    0x4(%eax),%eax
08659c50 +0x064:  mov    %eax,-0xc(%ebp)
08659c53 +0x067:  mov    -0x10(%ebp),%eax
08659c56 +0x06a:  cmp    -0xc(%ebp),%eax
08659c59 +0x06d:  jae    08659c65 <+0x79>
08659c5b +0x06f:  mov    $0x1,%eax
08659c60 +0x074:  jmp    08659ced <+0x101>
08659c65 +0x079:  lea    -0x2c(%ebp),%eax
08659c68 +0x07c:  mov    -0x20(%ebp),%edx
08659c6b +0x07f:  mov    %edx,0x8(%esp)
08659c6f +0x083:  mov    -0x14(%ebp),%edx
08659c72 +0x086:  mov    %edx,0x4(%esp)
08659c76 +0x08a:  mov    %eax,(%esp)
08659c79 +0x08d:  call   0869af3a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x778f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x778f
08659c7e +0x092:  sub    $0x4,%esp
08659c81 +0x095:  mov    -0x2c(%ebp),%eax
08659c84 +0x098:  mov    %eax,-0x20(%ebp)
08659c87 +0x09b:  movl   $0x0,0x4(%esp)
08659c8f +0x0a3:  mov    0x8(%ebp),%eax
08659c92 +0x0a6:  mov    %eax,(%esp)
08659c95 +0x0a9:  call   08696a54 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32a9
08659c9a +0x0ae:  jmp    08659ce8 <+0xfc>
08659c9c +0x0b0:  lea    -0x18(%ebp),%eax
08659c9f +0x0b3:  movl   $0x0,0x8(%esp)
08659ca7 +0x0bb:  lea    -0x20(%ebp),%edx
08659caa +0x0be:  mov    %edx,0x4(%esp)
08659cae +0x0c2:  mov    %eax,(%esp)
08659cb1 +0x0c5:  call   0869b020 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7875>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7875
08659cb6 +0x0ca:  sub    $0x4,%esp
08659cb9 +0x0cd:  lea    -0x1c(%ebp),%eax
08659cbc +0x0d0:  mov    -0x14(%ebp),%edx
08659cbf +0x0d3:  mov    %edx,0x4(%esp)
08659cc3 +0x0d7:  mov    %eax,(%esp)
08659cc6 +0x0da:  call   0869aede <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7733>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7733
08659ccb +0x0df:  sub    $0x4,%esp
08659cce +0x0e2:  lea    -0x1c(%ebp),%eax
08659cd1 +0x0e5:  mov    %eax,0x4(%esp)
08659cd5 +0x0e9:  lea    -0x20(%ebp),%eax
08659cd8 +0x0ec:  mov    %eax,(%esp)
08659cdb +0x0ef:  call   0869af04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7759>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7759
08659ce0 +0x0f4:  test   %al,%al
08659ce2 +0x0f6:  jne    08659c29 <+0x3d>
08659ce8 +0x0fc:  mov    $0x0,%eax
08659ced +0x101:  leave
08659cee +0x102:  ret
08659cef +0x103:  nop
```

## 反编译 C

```c
// CUserCharacInfo::EnablePeriodExpDouble @ 0x8659bec

/* CUserCharacInfo::EnablePeriodExpDouble() */

undefined4 __thiscall CUserCharacInfo::EnablePeriodExpDouble(CUserCharacInfo *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_30 [3];
  undefined4 local_24;
  __normal_iterator local_20 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_1c [4];
  int local_18;
  uint local_14;
  uint local_10;
  
  local_18 = *(int *)(this + 0x10) + 0xea6;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_24,local_20);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                    ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                                  *)&local_24);
    if (*piVar2 == 0x1cd1) break;
    __gnu_cxx::
    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
    ::operator++(local_1c,(int)&local_24);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
          ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                        *)&local_24);
  local_10 = *(uint *)(iVar3 + 4);
  if (local_10 <= local_14) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
              (local_30,local_18,local_24);
    local_24 = local_30[0];
    SetIsAffectedExpDouble(this,false);
    return 0;
  }
  return 1;
}
```
