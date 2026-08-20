# GetItemDropRate

`_ZN28CAutoMarketConditionsControl15GetItemDropRateEi`

`CAutoMarketConditionsControl::GetItemDropRate(int)`

| 类 | 地址 |
|---|---|
| `CAutoMarketConditionsControl` | `0x082f8ae8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f8ae8  _ZN28CAutoMarketConditionsControl15GetItemDropRateEi
#           CAutoMarketConditionsControl::GetItemDropRate(int)
# range [0x082f8ae8, 0x082f8c8b]
082f8ae8 +0x000:  push   %ebp
082f8ae9 +0x001:  mov    %esp,%ebp
082f8aeb +0x003:  push   %ebx
082f8aec +0x004:  sub    $0x84,%esp
082f8af2 +0x00a:  mov    $0x3f800000,%eax
082f8af7 +0x00f:  mov    %eax,-0xc(%ebp)
082f8afa +0x012:  mov    0x8(%ebp),%eax
082f8afd +0x015:  mov    0x380(%eax),%eax
082f8b03 +0x01b:  test   %eax,%eax
082f8b05 +0x01d:  je     082f8c7a <+0x192>
082f8b0b +0x023:  mov    0x8(%ebp),%eax
082f8b0e +0x026:  add    $0x3dc,%eax
082f8b13 +0x02b:  mov    %eax,(%esp)
082f8b16 +0x02e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
082f8b1b +0x033:  cmp    0xc(%ebp),%eax
082f8b1e +0x036:  jle    082f8b26 <+0x3e>
082f8b20 +0x038:  cmpl   $0x0,0xc(%ebp)
082f8b24 +0x03c:  jns    082f8b2d <+0x45>
082f8b26 +0x03e:  mov    $0x1,%eax
082f8b2b +0x043:  jmp    082f8b32 <+0x4a>
082f8b2d +0x045:  mov    $0x0,%eax
082f8b32 +0x04a:  test   %al,%al
082f8b34 +0x04c:  je     082f8b7b <+0x93>
082f8b36 +0x04e:  movl   $0x0,0xc(%esp)
082f8b3e +0x056:  movl   $0xde,0x8(%esp)
082f8b46 +0x05e:  movl   $&_ZZN28CAutoMarketConditionsControl15GetItemDropRateEiE19__PRETTY_FUNCTION__,0x4(%esp)
082f8b4e +0x066:  lea    -0x2c(%ebp),%eax
082f8b51 +0x069:  mov    %eax,(%esp)
082f8b54 +0x06c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f8b59 +0x071:  mov    0xc(%ebp),%eax
082f8b5c +0x074:  mov    %eax,0x8(%esp)
082f8b60 +0x078:  movl   $"GetItemDropRate() error levelRange(%d)",0x4(%esp)
082f8b68 +0x080:  lea    -0x2c(%ebp),%eax
082f8b6b +0x083:  mov    %eax,(%esp)
082f8b6e +0x086:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f8b73 +0x08b:  mov    -0xc(%ebp),%eax
082f8b76 +0x08e:  jmp    082f8c7d <+0x195>
082f8b7b +0x093:  mov    0xc(%ebp),%eax
082f8b7e +0x096:  mov    0x8(%ebp),%edx
082f8b81 +0x099:  add    $0x3dc,%edx
082f8b87 +0x09f:  mov    %eax,0x4(%esp)
082f8b8b +0x0a3:  mov    %edx,(%esp)
082f8b8e +0x0a6:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
082f8b93 +0x0ab:  mov    (%eax),%eax
082f8b95 +0x0ad:  test   %eax,%eax
082f8b97 +0x0af:  setne  %al
082f8b9a +0x0b2:  test   %al,%al
082f8b9c +0x0b4:  je     082f8be2 <+0xfa>
082f8b9e +0x0b6:  mov    0x8(%ebp),%eax
082f8ba1 +0x0b9:  fldl   0x3d4(%eax)
082f8ba7 +0x0bf:  fld1
082f8ba9 +0x0c1:  fsubp  %st,%st(1)
082f8bab +0x0c3:  fstpl  -0x58(%ebp)
082f8bae +0x0c6:  mov    0xc(%ebp),%eax
082f8bb1 +0x0c9:  mov    0x8(%ebp),%edx
082f8bb4 +0x0cc:  add    $0x3dc,%edx
082f8bba +0x0d2:  mov    %eax,0x4(%esp)
082f8bbe +0x0d6:  mov    %edx,(%esp)
082f8bc1 +0x0d9:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
082f8bc6 +0x0de:  mov    (%eax),%eax
082f8bc8 +0x0e0:  mov    %eax,-0x40(%ebp)
082f8bcb +0x0e3:  fildl  -0x40(%ebp)
082f8bce +0x0e6:  fldl   -0x58(%ebp)
082f8bd1 +0x0e9:  fmulp  %st,%st(1)
082f8bd3 +0x0eb:  fldl   &data#6b682136(.rodata)
082f8bd9 +0x0f1:  fdivrp %st,%st(1)
082f8bdb +0x0f3:  fld1
082f8bdd +0x0f5:  faddp  %st,%st(1)
082f8bdf +0x0f7:  fstps  -0xc(%ebp)
082f8be2 +0x0fa:  mov    &_ZZN28CAutoMarketConditionsControl15GetItemDropRateEiE8logCount,%ecx
082f8be8 +0x100:  mov    $0x10624dd3,%edx
082f8bed +0x105:  mov    %ecx,%eax
082f8bef +0x107:  imul   %edx
082f8bf1 +0x109:  sar    $0x6,%edx
082f8bf4 +0x10c:  mov    %ecx,%eax
082f8bf6 +0x10e:  sar    $0x1f,%eax
082f8bf9 +0x111:  mov    %edx,%ebx
082f8bfb +0x113:  sub    %eax,%ebx
082f8bfd +0x115:  mov    %ebx,%eax
082f8bff +0x117:  imul   $0x3e8,%eax,%eax
082f8c05 +0x11d:  mov    %ecx,%edx
082f8c07 +0x11f:  sub    %eax,%edx
082f8c09 +0x121:  mov    %edx,%eax
082f8c0b +0x123:  test   %eax,%eax
082f8c0d +0x125:  sete   %al
082f8c10 +0x128:  lea    0x1(%ecx),%edx
082f8c13 +0x12b:  mov    %edx,&_ZZN28CAutoMarketConditionsControl15GetItemDropRateEiE8logCount
082f8c19 +0x131:  test   %al,%al
082f8c1b +0x133:  je     082f8c7a <+0x192>
082f8c1d +0x135:  mov    0x8(%ebp),%eax
082f8c20 +0x138:  fldl   0x3d4(%eax)
082f8c26 +0x13e:  fstpl  -0x50(%ebp)
082f8c29 +0x141:  flds   -0xc(%ebp)
082f8c2c +0x144:  fstpl  -0x48(%ebp)
082f8c2f +0x147:  movl   $0x0,0xc(%esp)
082f8c37 +0x14f:  movl   $0xe8,0x8(%esp)
082f8c3f +0x157:  movl   $&_ZZN28CAutoMarketConditionsControl15GetItemDropRateEiE19__PRETTY_FUNCTION__,0x4(%esp)
082f8c47 +0x15f:  lea    -0x1c(%ebp),%eax
082f8c4a +0x162:  mov    %eax,(%esp)
082f8c4d +0x165:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082f8c52 +0x16a:  fldl   -0x50(%ebp)
082f8c55 +0x16d:  fstpl  0x14(%esp)
082f8c59 +0x171:  mov    0xc(%ebp),%eax
082f8c5c +0x174:  mov    %eax,0x10(%esp)
082f8c60 +0x178:  fldl   -0x48(%ebp)
082f8c63 +0x17b:  fstpl  0x8(%esp)
082f8c67 +0x17f:  movl   $"itemDropRate(%f), levelRange(%d), curRate(%lf)",0x4(%esp)
082f8c6f +0x187:  lea    -0x1c(%ebp),%eax
082f8c72 +0x18a:  mov    %eax,(%esp)
082f8c75 +0x18d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082f8c7a +0x192:  mov    -0xc(%ebp),%eax
082f8c7d +0x195:  mov    %eax,-0x5c(%ebp)
082f8c80 +0x198:  flds   -0x5c(%ebp)
082f8c83 +0x19b:  add    $0x84,%esp
082f8c89 +0x1a1:  pop    %ebx
082f8c8a +0x1a2:  pop    %ebp
082f8c8b +0x1a3:  ret
```

## 反编译 C

```c
// CAutoMarketConditionsControl::GetItemDropRate @ 0x82f8ae8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CAutoMarketConditionsControl::GetItemDropRate(int) */

longdouble __thiscall
CAutoMarketConditionsControl::GetItemDropRate(CAutoMarketConditionsControl *this,int param_1)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  float local_10;
  
  local_10 = 1.0;
  if (*(int *)(this + 0x380) != 0) {
    iVar3 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x3dc));
    if ((param_1 < iVar3) && (-1 < param_1)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      cMyTrace::cMyTrace(local_30,"float CAutoMarketConditionsControl::GetItemDropRate(int)",0xde,0)
      ;
      cMyTrace::operator()(local_30,"GetItemDropRate() error levelRange(%d)",param_1);
    }
    else {
      piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x3dc),param_1);
      if (*piVar4 != 0) {
        dVar1 = *(double *)(this + 0x3d4);
        piVar4 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(this + 0x3dc),param_1);
        local_10 = ((float)(1.0 - dVar1) * (float)*piVar4) / (float)_DAT_08c1fc70 + 1.0;
      }
      bVar5 = GetItemDropRate(int)::logCount == (GetItemDropRate(int)::logCount / 1000) * 1000;
      GetItemDropRate(int)::logCount = GetItemDropRate(int)::logCount + 1;
      if (bVar5) {
        uVar2 = *(undefined8 *)(this + 0x3d4);
        dVar1 = (double)local_10;
        cMyTrace::cMyTrace(local_20,"float CAutoMarketConditionsControl::GetItemDropRate(int)",0xe8,
                           0);
        cMyTrace::operator()
                  (local_20,"itemDropRate(%f), levelRange(%d), curRate(%lf)",dVar1,param_1,uVar2);
      }
    }
  }
  return (longdouble)local_10;
}
```
