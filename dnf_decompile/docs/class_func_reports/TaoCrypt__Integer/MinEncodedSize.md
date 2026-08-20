# MinEncodedSize

`_ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE`

`TaoCrypt::Integer::MinEncodedSize(TaoCrypt::Integer::Signedness) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760dd0  _ZNK8TaoCrypt7Integer14MinEncodedSizeENS0_10SignednessE
#           TaoCrypt::Integer::MinEncodedSize(TaoCrypt::Integer::Signedness) const
# range [0x08760dd0, 0x08760f09]
08760dd0 +0x000:  push   %ebp
08760dd1 +0x001:  mov    %esp,%ebp
08760dd3 +0x003:  sub    $0x58,%esp
08760dd6 +0x006:  mov    %ebx,-0xc(%ebp)
08760dd9 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
08760dde +0x00e:  add    $0xc0bdba,%ebx
08760de4 +0x014:  mov    %edi,-0x4(%ebp)
08760de7 +0x017:  mov    0x8(%ebp),%edi
08760dea +0x01a:  mov    %esi,-0x8(%ebp)
08760ded +0x01d:  mov    %edi,(%esp)
08760df0 +0x020:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08760df5 +0x025:  test   %eax,%eax
08760df7 +0x027:  mov    %eax,%esi
08760df9 +0x029:  mov    $0x1,%eax
08760dfe +0x02e:  cmove  %eax,%esi
08760e01 +0x031:  mov    0xc(%ebp),%eax
08760e04 +0x034:  test   %eax,%eax
08760e06 +0x036:  je     08760e2d <+0x5d>
08760e08 +0x038:  cmpl   $0x1,0xc(%edi)
08760e0c +0x03c:  je     08760e40 <+0x70>
08760e0e +0x03e:  lea    -0x1(%esi),%eax
08760e11 +0x041:  mov    %eax,0x4(%esp)
08760e15 +0x045:  mov    %edi,(%esp)
08760e18 +0x048:  call   0875d100 <_ZNK8TaoCrypt7Integer7GetByteEj>  ; TaoCrypt::Integer::GetByte(unsigned int) const
08760e1d +0x04d:  test   %al,%al
08760e1f +0x04f:  js     08760f00 <+0x130>
08760e25 +0x055:  mov    0xc(%edi),%eax
08760e28 +0x058:  cmp    $0x1,%eax
08760e2b +0x05b:  je     08760e40 <+0x70>
08760e2d +0x05d:  mov    %esi,%eax
08760e2f +0x05f:  mov    -0xc(%ebp),%ebx
08760e32 +0x062:  mov    -0x8(%ebp),%esi
08760e35 +0x065:  mov    -0x4(%ebp),%edi
08760e38 +0x068:  mov    %ebp,%esp
08760e3a +0x06a:  pop    %ebp
08760e3b +0x06b:  ret
08760e3c +0x06c:  lea    0x0(%esi,%eiz,1),%esi
08760e40 +0x070:  lea    -0x28(%ebp),%edx
08760e43 +0x073:  lea    -0x1(,%esi,8),%eax
08760e4a +0x07a:  mov    %eax,0x4(%esp)
08760e4e +0x07e:  mov    %edx,(%esp)
08760e51 +0x081:  mov    %edx,-0x3c(%ebp)
08760e54 +0x084:  call   08760d70 <_ZN8TaoCrypt7Integer6Power2Ej>  ; TaoCrypt::Integer::Power2(unsigned int)
08760e59 +0x089:  mov    -0x3c(%ebp),%edx
08760e5c +0x08c:  lea    -0x38(%ebp),%eax
08760e5f +0x08f:  mov    %eax,-0x3c(%ebp)
08760e62 +0x092:  sub    $0x4,%esp
08760e65 +0x095:  mov    %edx,0x4(%esp)
08760e69 +0x099:  mov    %eax,(%esp)
08760e6c +0x09c:  call   0875f490 <_ZNK8TaoCrypt7IntegerngEv>  ; TaoCrypt::Integer::operator-() const
08760e71 +0x0a1:  mov    -0x3c(%ebp),%eax
08760e74 +0x0a4:  sub    $0x4,%esp
08760e77 +0x0a7:  mov    %edi,(%esp)
08760e7a +0x0aa:  mov    %eax,0x4(%esp)
08760e7e +0x0ae:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08760e83 +0x0b3:  mov    -0x34(%ebp),%edi
08760e86 +0x0b6:  movl   $0x0,0x4(%esp)
08760e8e +0x0be:  mov    %edi,(%esp)
08760e91 +0x0c1:  mov    %eax,%edx
08760e93 +0x0c3:  mov    -0x38(%ebp),%eax
08760e96 +0x0c6:  mov    %edx,-0x3c(%ebp)
08760e99 +0x0c9:  shl    $0x2,%eax
08760e9c +0x0cc:  mov    %eax,0x8(%esp)
08760ea0 +0x0d0:  call   0807dcc0 <_init+0x5b8>
08760ea5 +0x0d5:  mov    %edi,(%esp)
08760ea8 +0x0d8:  movb   $0x0,0x4(%esp)
08760ead +0x0dd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760eb2 +0x0e2:  mov    -0x28(%ebp),%eax
08760eb5 +0x0e5:  mov    -0x24(%ebp),%edi
08760eb8 +0x0e8:  movl   $0x0,0x4(%esp)
08760ec0 +0x0f0:  shl    $0x2,%eax
08760ec3 +0x0f3:  mov    %eax,0x8(%esp)
08760ec7 +0x0f7:  mov    %edi,(%esp)
08760eca +0x0fa:  call   0807dcc0 <_init+0x5b8>
08760ecf +0x0ff:  movb   $0x0,0x4(%esp)
08760ed4 +0x104:  mov    %edi,(%esp)
08760ed7 +0x107:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760edc +0x10c:  mov    -0x3c(%ebp),%edx
08760edf +0x10f:  test   %edx,%edx
08760ee1 +0x111:  jns    08760e2d <+0x5d>
08760ee7 +0x117:  add    $0x1,%esi
08760eea +0x11a:  mov    -0xc(%ebp),%ebx
08760eed +0x11d:  mov    %esi,%eax
08760eef +0x11f:  mov    -0x4(%ebp),%edi
08760ef2 +0x122:  mov    -0x8(%ebp),%esi
08760ef5 +0x125:  mov    %ebp,%esp
08760ef7 +0x127:  pop    %ebp
08760ef8 +0x128:  ret
08760ef9 +0x129:  lea    0x0(%esi,%eiz,1),%esi
08760f00 +0x130:  add    $0x1,%esi
08760f03 +0x133:  jmp    08760e25 <+0x55>
08760f08 +0x138:  nop
08760f09 +0x139:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::MinEncodedSize @ 0x8760dd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::MinEncodedSize(TaoCrypt::Integer::Signedness) const */

int __thiscall TaoCrypt::Integer::MinEncodedSize(Integer *this,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  iVar2 = ByteCount(this);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(this + 0xc) != 1) {
      cVar1 = GetByte(this,iVar2 - 1);
      if (cVar1 < '\0') {
        iVar2 = iVar2 + 1;
      }
      if (*(int *)(this + 0xc) != 1) {
        return iVar2;
      }
    }
    Power2((Integer *)&local_2c,iVar2 * 8 - 1);
    operator-((Integer *)&local_3c);
    iVar3 = Compare(this,(Integer *)&local_3c);
    uVar4 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar4 & 0xffffff00);
    if (iVar3 < 0) {
      return iVar2 + 1;
    }
  }
  return iVar2;
}
```
