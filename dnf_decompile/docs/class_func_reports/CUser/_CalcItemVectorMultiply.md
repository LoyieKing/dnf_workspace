# _CalcItemVectorMultiply

`_ZN5CUser23_CalcItemVectorMultiplyERSt6vectorISt4pairIiiESaIS2_EEi`

`CUser::_CalcItemVectorMultiply(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08672042` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08672042  _ZN5CUser23_CalcItemVectorMultiplyERSt6vectorISt4pairIiiESaIS2_EEi
#           CUser::_CalcItemVectorMultiply(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int)
# range [0x08672042, 0x086720cf]
08672042 +0x00:  push   %ebp
08672043 +0x01:  mov    %esp,%ebp
08672045 +0x03:  push   %ebx
08672046 +0x04:  sub    $0x24,%esp
08672049 +0x07:  lea    -0x10(%ebp),%eax
0867204c +0x0a:  mov    0xc(%ebp),%edx
0867204f +0x0d:  mov    %edx,0x4(%esp)
08672053 +0x11:  mov    %eax,(%esp)
08672056 +0x14:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0867205b +0x19:  sub    $0x4,%esp
0867205e +0x1c:  lea    -0xc(%ebp),%eax
08672061 +0x1f:  mov    0xc(%ebp),%edx
08672064 +0x22:  mov    %edx,0x4(%esp)
08672068 +0x26:  mov    %eax,(%esp)
0867206b +0x29:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08672070 +0x2e:  sub    $0x4,%esp
08672073 +0x31:  lea    -0xc(%ebp),%eax
08672076 +0x34:  mov    %eax,0x4(%esp)
0867207a +0x38:  lea    -0x14(%ebp),%eax
0867207d +0x3b:  mov    %eax,(%esp)
08672080 +0x3e:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
08672085 +0x43:  jmp    086720b4 <+0x72>
08672087 +0x45:  lea    -0x10(%ebp),%eax
0867208a +0x48:  mov    %eax,(%esp)
0867208d +0x4b:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
08672092 +0x50:  mov    %eax,%ebx
08672094 +0x52:  lea    -0x10(%ebp),%eax
08672097 +0x55:  mov    %eax,(%esp)
0867209a +0x58:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
0867209f +0x5d:  mov    0x4(%eax),%eax
086720a2 +0x60:  imul   0x10(%ebp),%eax
086720a6 +0x64:  mov    %eax,0x4(%ebx)
086720a9 +0x67:  lea    -0x10(%ebp),%eax
086720ac +0x6a:  mov    %eax,(%esp)
086720af +0x6d:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
086720b4 +0x72:  lea    -0x14(%ebp),%eax
086720b7 +0x75:  mov    %eax,0x4(%esp)
086720bb +0x79:  lea    -0x10(%ebp),%eax
086720be +0x7c:  mov    %eax,(%esp)
086720c1 +0x7f:  call   0869b2d3 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7b28>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7b28
086720c6 +0x84:  test   %al,%al
086720c8 +0x86:  jne    08672087 <+0x45>
086720ca +0x88:  mov    -0x4(%ebp),%ebx
086720cd +0x8b:  leave
086720ce +0x8c:  ret
086720cf +0x8d:  nop
```

## 反编译 C

```c
// CUser::_CalcItemVectorMultiply @ 0x8672042

/* CUser::_CalcItemVectorMultiply(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > >&, int) */

void __thiscall CUser::_CalcItemVectorMultiply(CUser *this,vector *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  __normal_iterator local_10 [8];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_18,local_10);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_14);
    iVar3 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_14);
    *(int *)(iVar2 + 4) = *(int *)(iVar3 + 4) * param_2;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14);
  }
  return;
}
```
