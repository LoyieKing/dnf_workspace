# Agree

`_ZN8TaoCrypt2DH5AgreeEPhPKhS3_j`

`TaoCrypt::DH::Agree(unsigned char*, unsigned char const*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH` | `0x087a8820` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8820  _ZN8TaoCrypt2DH5AgreeEPhPKhS3_j
#           TaoCrypt::DH::Agree(unsigned char*, unsigned char const*, unsigned char const*, unsigned int)
# range [0x087a8820, 0x087a898c]
087a8820 +0x000:  push   %ebp
087a8821 +0x001:  mov    %esp,%ebp
087a8823 +0x003:  push   %edi
087a8824 +0x004:  push   %esi
087a8825 +0x005:  push   %ebx
087a8826 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a882b +0x00b:  add    $0xbc436d,%ebx
087a8831 +0x011:  sub    $0x5c,%esp
087a8834 +0x014:  mov    0x8(%ebp),%esi
087a8837 +0x017:  mov    0x18(%ebp),%edi
087a883a +0x01a:  mov    %esi,(%esp)
087a883d +0x01d:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
087a8842 +0x022:  movl   $0x0,0xc(%esp)
087a884a +0x02a:  mov    %eax,-0x4c(%ebp)
087a884d +0x02d:  mov    %eax,0x8(%esp)
087a8851 +0x031:  mov    0x10(%ebp),%eax
087a8854 +0x034:  mov    %eax,0x4(%esp)
087a8858 +0x038:  lea    -0x28(%ebp),%eax
087a885b +0x03b:  mov    %eax,-0x50(%ebp)
087a885e +0x03e:  mov    %eax,(%esp)
087a8861 +0x041:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087a8866 +0x046:  lea    -0x38(%ebp),%edx
087a8869 +0x049:  mov    %edx,(%esp)
087a886c +0x04c:  mov    %edx,-0x54(%ebp)
087a886f +0x04f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087a8874 +0x054:  test   %edi,%edi
087a8876 +0x056:  mov    -0x54(%ebp),%edx
087a8879 +0x059:  jne    087a8968 <+0x148>
087a887f +0x05f:  mov    -0x4c(%ebp),%eax
087a8882 +0x062:  mov    %edx,(%esp)
087a8885 +0x065:  mov    %edx,-0x54(%ebp)
087a8888 +0x068:  movl   $0x0,0xc(%esp)
087a8890 +0x070:  mov    %eax,0x8(%esp)
087a8894 +0x074:  mov    0x14(%ebp),%eax
087a8897 +0x077:  mov    %eax,0x4(%esp)
087a889b +0x07b:  call   08761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Decode(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087a88a0 +0x080:  mov    -0x54(%ebp),%edx
087a88a3 +0x083:  mov    -0x50(%ebp),%eax
087a88a6 +0x086:  lea    -0x48(%ebp),%edi
087a88a9 +0x089:  mov    %edx,0x4(%esp)
087a88ad +0x08d:  mov    %esi,0xc(%esp)
087a88b1 +0x091:  mov    %edi,(%esp)
087a88b4 +0x094:  mov    %eax,0x8(%esp)
087a88b8 +0x098:  call   0875f630 <_ZN8TaoCrypt13a_exp_b_mod_cERKNS_7IntegerES2_S2_>  ; TaoCrypt::a_exp_b_mod_c(TaoCrypt::Integer const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
087a88bd +0x09d:  mov    -0x4c(%ebp),%eax
087a88c0 +0x0a0:  sub    $0x4,%esp
087a88c3 +0x0a3:  mov    %eax,0x8(%esp)
087a88c7 +0x0a7:  mov    0xc(%ebp),%eax
087a88ca +0x0aa:  mov    %edi,(%esp)
087a88cd +0x0ad:  movl   $0x0,0xc(%esp)
087a88d5 +0x0b5:  mov    %eax,0x4(%esp)
087a88d9 +0x0b9:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
087a88de +0x0be:  mov    -0x48(%ebp),%eax
087a88e1 +0x0c1:  mov    -0x44(%ebp),%esi
087a88e4 +0x0c4:  movl   $0x0,0x4(%esp)
087a88ec +0x0cc:  shl    $0x2,%eax
087a88ef +0x0cf:  mov    %esi,(%esp)
087a88f2 +0x0d2:  mov    %eax,0x8(%esp)
087a88f6 +0x0d6:  call   0807dcc0 <_init+0x5b8>
087a88fb +0x0db:  mov    %esi,(%esp)
087a88fe +0x0de:  movb   $0x0,0x4(%esp)
087a8903 +0x0e3:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8908 +0x0e8:  mov    -0x38(%ebp),%eax
087a890b +0x0eb:  mov    -0x34(%ebp),%esi
087a890e +0x0ee:  movl   $0x0,0x4(%esp)
087a8916 +0x0f6:  shl    $0x2,%eax
087a8919 +0x0f9:  mov    %esi,(%esp)
087a891c +0x0fc:  mov    %eax,0x8(%esp)
087a8920 +0x100:  call   0807dcc0 <_init+0x5b8>
087a8925 +0x105:  mov    %esi,(%esp)
087a8928 +0x108:  movb   $0x0,0x4(%esp)
087a892d +0x10d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8932 +0x112:  mov    -0x28(%ebp),%eax
087a8935 +0x115:  mov    -0x24(%ebp),%esi
087a8938 +0x118:  movl   $0x0,0x4(%esp)
087a8940 +0x120:  shl    $0x2,%eax
087a8943 +0x123:  mov    %esi,(%esp)
087a8946 +0x126:  mov    %eax,0x8(%esp)
087a894a +0x12a:  call   0807dcc0 <_init+0x5b8>
087a894f +0x12f:  mov    %esi,(%esp)
087a8952 +0x132:  movb   $0x0,0x4(%esp)
087a8957 +0x137:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a895c +0x13c:  lea    -0xc(%ebp),%esp
087a895f +0x13f:  pop    %ebx
087a8960 +0x140:  pop    %esi
087a8961 +0x141:  pop    %edi
087a8962 +0x142:  pop    %ebp
087a8963 +0x143:  ret
087a8964 +0x144:  lea    0x0(%esi,%eiz,1),%esi
087a8968 +0x148:  mov    0x14(%ebp),%eax
087a896b +0x14b:  mov    %edx,(%esp)
087a896e +0x14e:  movl   $0x0,0xc(%esp)
087a8976 +0x156:  mov    %edi,0x8(%esp)
087a897a +0x15a:  mov    %eax,0x4(%esp)
087a897e +0x15e:  call   08761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Decode(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
087a8983 +0x163:  mov    -0x54(%ebp),%edx
087a8986 +0x166:  jmp    087a88a3 <+0x83>
087a898b +0x16b:  nop
087a898c +0x16c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::DH::Agree @ 0x87a8820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::Agree(unsigned char*, unsigned char const*, unsigned char const*, unsigned int) */

void __thiscall
TaoCrypt::DH::Agree(DH *this,uchar *param_1,uchar *param_2,uchar *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a882b;
  uVar1 = Integer::ByteCount((Integer *)this);
  Integer::Integer((Integer *)&local_2c,param_2,uVar1,0);
  Integer::Integer((Integer *)&local_3c);
  if (param_4 == 0) {
    Integer::Decode((Integer *)&local_3c,param_3,uVar1,0);
  }
  else {
    Integer::Decode((Integer *)&local_3c,param_3,param_4,0);
  }
  a_exp_b_mod_c((TaoCrypt *)&local_4c,(Integer *)&local_3c,(Integer *)&local_2c,(Integer *)this);
  Integer::Encode((Integer *)&local_4c,param_1,uVar1,0);
  uVar2 = 0;
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  return;
}
```
