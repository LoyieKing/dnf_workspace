# Encode

`_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE`

`TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08760f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760f10  _ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE
#           TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
# range [0x08760f10, 0x0876104c]
08760f10 +0x000:  push   %ebp
08760f11 +0x001:  mov    %esp,%ebp
08760f13 +0x003:  push   %edi
08760f14 +0x004:  push   %esi
08760f15 +0x005:  push   %ebx
08760f16 +0x006:  sub    $0x4c,%esp
08760f19 +0x009:  mov    0x14(%ebp),%eax
08760f1c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08760f21 +0x011:  add    $0xc0bc77,%ebx
08760f27 +0x017:  mov    0xc(%ebp),%edi
08760f2a +0x01a:  test   %eax,%eax
08760f2c +0x01c:  jne    08760f60 <+0x50>
08760f2e +0x01e:  mov    0x10(%ebp),%esi
08760f31 +0x021:  test   %esi,%esi
08760f33 +0x023:  je     08760f53 <+0x43>
08760f35 +0x025:  mov    0x10(%ebp),%esi
08760f38 +0x028:  mov    0x8(%ebp),%eax
08760f3b +0x02b:  sub    $0x1,%esi
08760f3e +0x02e:  mov    %esi,0x4(%esp)
08760f42 +0x032:  mov    %eax,(%esp)
08760f45 +0x035:  call   0875d100 <_ZNK8TaoCrypt7Integer7GetByteEj>  ; TaoCrypt::Integer::GetByte(unsigned int) const
08760f4a +0x03a:  mov    %al,(%edi)
08760f4c +0x03c:  add    $0x1,%edi
08760f4f +0x03f:  test   %esi,%esi
08760f51 +0x041:  jne    08760f38 <+0x28>
08760f53 +0x043:  mov    0x10(%ebp),%eax
08760f56 +0x046:  lea    -0xc(%ebp),%esp
08760f59 +0x049:  pop    %ebx
08760f5a +0x04a:  pop    %esi
08760f5b +0x04b:  pop    %edi
08760f5c +0x04c:  pop    %ebp
08760f5d +0x04d:  ret
08760f5e +0x04e:  xchg   %ax,%ax
08760f60 +0x050:  mov    0x8(%ebp),%eax
08760f63 +0x053:  cmpl   $0x1,0xc(%eax)
08760f67 +0x057:  jne    08760f2e <+0x1e>
08760f69 +0x059:  mov    %eax,(%esp)
08760f6c +0x05c:  lea    -0x28(%ebp),%esi
08760f6f +0x05f:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08760f74 +0x064:  lea    -0x38(%ebp),%edx
08760f77 +0x067:  mov    %edx,(%esp)
08760f7a +0x06a:  mov    %edx,-0x44(%ebp)
08760f7d +0x06d:  cmp    0x10(%ebp),%eax
08760f80 +0x070:  cmovb  0x10(%ebp),%eax
08760f84 +0x074:  shl    $0x3,%eax
08760f87 +0x077:  mov    %eax,0x4(%esp)
08760f8b +0x07b:  call   08760d70 <_ZN8TaoCrypt7Integer6Power2Ej>  ; TaoCrypt::Integer::Power2(unsigned int)
08760f90 +0x080:  mov    0x8(%ebp),%eax
08760f93 +0x083:  mov    -0x44(%ebp),%edx
08760f96 +0x086:  sub    $0x4,%esp
08760f99 +0x089:  mov    %eax,0x8(%esp)
08760f9d +0x08d:  mov    %edx,0x4(%esp)
08760fa1 +0x091:  mov    %esi,(%esp)
08760fa4 +0x094:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
08760fa9 +0x099:  mov    -0x38(%ebp),%eax
08760fac +0x09c:  mov    -0x34(%ebp),%edx
08760faf +0x09f:  shl    $0x2,%eax
08760fb2 +0x0a2:  mov    %edx,-0x44(%ebp)
08760fb5 +0x0a5:  sub    $0x4,%esp
08760fb8 +0x0a8:  mov    %edx,(%esp)
08760fbb +0x0ab:  mov    %eax,0x8(%esp)
08760fbf +0x0af:  movl   $0x0,0x4(%esp)
08760fc7 +0x0b7:  call   0807dcc0 <_init+0x5b8>
08760fcc +0x0bc:  mov    -0x44(%ebp),%edx
08760fcf +0x0bf:  movb   $0x0,0x4(%esp)
08760fd4 +0x0c4:  mov    %edx,(%esp)
08760fd7 +0x0c7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760fdc +0x0cc:  mov    0x10(%ebp),%eax
08760fdf +0x0cf:  xor    %edx,%edx
08760fe1 +0x0d1:  mov    0x10(%ebp),%ecx
08760fe4 +0x0d4:  sub    $0x1,%eax
08760fe7 +0x0d7:  test   %ecx,%ecx
08760fe9 +0x0d9:  mov    %eax,-0x3c(%ebp)
08760fec +0x0dc:  je     08761017 <+0x107>
08760fee +0x0de:  mov    %esi,-0x40(%ebp)
08760ff1 +0x0e1:  mov    %edx,%esi
08760ff3 +0x0e3:  nop
08760ff4 +0x0e4:  lea    0x0(%esi,%eiz,1),%esi
08760ff8 +0x0e8:  mov    -0x3c(%ebp),%eax
08760ffb +0x0eb:  sub    %esi,%eax
08760ffd +0x0ed:  mov    %eax,0x4(%esp)
08761001 +0x0f1:  mov    -0x40(%ebp),%eax
08761004 +0x0f4:  mov    %eax,(%esp)
08761007 +0x0f7:  call   0875d100 <_ZNK8TaoCrypt7Integer7GetByteEj>  ; TaoCrypt::Integer::GetByte(unsigned int) const
0876100c +0x0fc:  mov    %al,(%edi,%esi,1)
0876100f +0x0ff:  add    $0x1,%esi
08761012 +0x102:  cmp    0x10(%ebp),%esi
08761015 +0x105:  jb     08760ff8 <+0xe8>
08761017 +0x107:  mov    -0x28(%ebp),%eax
0876101a +0x10a:  mov    -0x24(%ebp),%esi
0876101d +0x10d:  movl   $0x0,0x4(%esp)
08761025 +0x115:  shl    $0x2,%eax
08761028 +0x118:  mov    %esi,(%esp)
0876102b +0x11b:  mov    %eax,0x8(%esp)
0876102f +0x11f:  call   0807dcc0 <_init+0x5b8>
08761034 +0x124:  mov    %esi,(%esp)
08761037 +0x127:  movb   $0x0,0x4(%esp)
0876103c +0x12c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08761041 +0x131:  mov    0x10(%ebp),%eax
08761044 +0x134:  lea    -0xc(%ebp),%esp
08761047 +0x137:  pop    %ebx
08761048 +0x138:  pop    %esi
08761049 +0x139:  pop    %edi
0876104a +0x13a:  pop    %ebp
0876104b +0x13b:  ret
0876104c +0x13c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Encode @ 0x8760f10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const */

uint __thiscall
TaoCrypt::Integer::Encode(Integer *this,undefined1 *param_1,uint param_2,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  uVar2 = param_2;
  if ((param_4 != 0) && (*(int *)(this + 0xc) == 1)) {
    uVar2 = ByteCount(this);
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
    Power2((Integer *)&local_3c,uVar2 << 3);
    Plus((Integer *)&local_2c);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    if (param_2 != 0) {
      uVar2 = 0;
      do {
        uVar1 = GetByte((Integer *)&local_2c,(param_2 - 1) - uVar2);
        param_1[uVar2] = uVar1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    return param_2;
  }
  while (uVar2 != 0) {
    uVar1 = GetByte(this,uVar2 - 1);
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 - 1;
  }
  return param_2;
}
```
