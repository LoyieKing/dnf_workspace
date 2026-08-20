# Decode

`_ZN8TaoCrypt19DSA_Private_Decoder6DecodeERNS_14DSA_PrivateKeyE`

`TaoCrypt::DSA_Private_Decoder::Decode(TaoCrypt::DSA_PrivateKey&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Private_Decoder` | `0x087559d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087559d0  _ZN8TaoCrypt19DSA_Private_Decoder6DecodeERNS_14DSA_PrivateKeyE
#           TaoCrypt::DSA_Private_Decoder::Decode(TaoCrypt::DSA_PrivateKey&)
# range [0x087559d0, 0x08755bbf]
087559d0 +0x000:  push   %ebp
087559d1 +0x001:  mov    %esp,%ebp
087559d3 +0x003:  push   %edi
087559d4 +0x004:  push   %esi
087559d5 +0x005:  push   %ebx
087559d6 +0x006:  sub    $0x7c,%esp
087559d9 +0x009:  mov    0x8(%ebp),%esi
087559dc +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
087559e1 +0x011:  add    $0xc171b7,%ebx
087559e7 +0x017:  mov    0xc(%ebp),%edi
087559ea +0x01a:  mov    (%esi),%eax
087559ec +0x01c:  mov    %esi,(%esp)
087559ef +0x01f:  call   *0x8(%eax)
087559f2 +0x022:  mov    0x4(%esi),%eax
087559f5 +0x025:  mov    0x10(%eax),%ecx
087559f8 +0x028:  test   %ecx,%ecx
087559fa +0x02a:  jne    08755bb7 <+0x1e7>
08755a00 +0x030:  lea    -0x28(%ebp),%eax
08755a03 +0x033:  mov    %eax,(%esp)
08755a06 +0x036:  mov    %eax,-0x6c(%ebp)
08755a09 +0x039:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755a0e +0x03e:  mov    -0x6c(%ebp),%eax
08755a11 +0x041:  mov    %esi,(%esp)
08755a14 +0x044:  mov    %eax,0x4(%esp)
08755a18 +0x048:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755a1d +0x04d:  mov    %edi,(%esp)
08755a20 +0x050:  mov    %eax,0x4(%esp)
08755a24 +0x054:  call   08757640 <_ZN8TaoCrypt13DSA_PublicKey10SetModulusERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetModulus(TaoCrypt::Integer const&)
08755a29 +0x059:  mov    -0x28(%ebp),%eax
08755a2c +0x05c:  mov    -0x24(%ebp),%edx
08755a2f +0x05f:  movl   $0x0,0x4(%esp)
08755a37 +0x067:  shl    $0x2,%eax
08755a3a +0x06a:  mov    %edx,(%esp)
08755a3d +0x06d:  mov    %edx,-0x6c(%ebp)
08755a40 +0x070:  mov    %eax,0x8(%esp)
08755a44 +0x074:  call   0807dcc0 <_init+0x5b8>
08755a49 +0x079:  mov    -0x6c(%ebp),%edx
08755a4c +0x07c:  movb   $0x0,0x4(%esp)
08755a51 +0x081:  mov    %edx,(%esp)
08755a54 +0x084:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755a59 +0x089:  lea    -0x38(%ebp),%eax
08755a5c +0x08c:  mov    %eax,(%esp)
08755a5f +0x08f:  mov    %eax,-0x6c(%ebp)
08755a62 +0x092:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755a67 +0x097:  mov    -0x6c(%ebp),%eax
08755a6a +0x09a:  mov    %esi,(%esp)
08755a6d +0x09d:  mov    %eax,0x4(%esp)
08755a71 +0x0a1:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755a76 +0x0a6:  mov    %edi,(%esp)
08755a79 +0x0a9:  mov    %eax,0x4(%esp)
08755a7d +0x0ad:  call   08757610 <_ZN8TaoCrypt13DSA_PublicKey16SetSubGroupOrderERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetSubGroupOrder(TaoCrypt::Integer const&)
08755a82 +0x0b2:  mov    -0x38(%ebp),%eax
08755a85 +0x0b5:  mov    -0x34(%ebp),%edx
08755a88 +0x0b8:  movl   $0x0,0x4(%esp)
08755a90 +0x0c0:  shl    $0x2,%eax
08755a93 +0x0c3:  mov    %edx,(%esp)
08755a96 +0x0c6:  mov    %edx,-0x6c(%ebp)
08755a99 +0x0c9:  mov    %eax,0x8(%esp)
08755a9d +0x0cd:  call   0807dcc0 <_init+0x5b8>
08755aa2 +0x0d2:  mov    -0x6c(%ebp),%edx
08755aa5 +0x0d5:  movb   $0x0,0x4(%esp)
08755aaa +0x0da:  mov    %edx,(%esp)
08755aad +0x0dd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755ab2 +0x0e2:  lea    -0x48(%ebp),%eax
08755ab5 +0x0e5:  mov    %eax,(%esp)
08755ab8 +0x0e8:  mov    %eax,-0x6c(%ebp)
08755abb +0x0eb:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755ac0 +0x0f0:  mov    -0x6c(%ebp),%eax
08755ac3 +0x0f3:  mov    %esi,(%esp)
08755ac6 +0x0f6:  mov    %eax,0x4(%esp)
08755aca +0x0fa:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755acf +0x0ff:  mov    %edi,(%esp)
08755ad2 +0x102:  mov    %eax,0x4(%esp)
08755ad6 +0x106:  call   087575e0 <_ZN8TaoCrypt13DSA_PublicKey20SetSubGroupGeneratorERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(TaoCrypt::Integer const&)
08755adb +0x10b:  mov    -0x48(%ebp),%eax
08755ade +0x10e:  mov    -0x44(%ebp),%edx
08755ae1 +0x111:  movl   $0x0,0x4(%esp)
08755ae9 +0x119:  shl    $0x2,%eax
08755aec +0x11c:  mov    %edx,(%esp)
08755aef +0x11f:  mov    %edx,-0x6c(%ebp)
08755af2 +0x122:  mov    %eax,0x8(%esp)
08755af6 +0x126:  call   0807dcc0 <_init+0x5b8>
08755afb +0x12b:  mov    -0x6c(%ebp),%edx
08755afe +0x12e:  movb   $0x0,0x4(%esp)
08755b03 +0x133:  mov    %edx,(%esp)
08755b06 +0x136:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755b0b +0x13b:  lea    -0x58(%ebp),%eax
08755b0e +0x13e:  mov    %eax,(%esp)
08755b11 +0x141:  mov    %eax,-0x6c(%ebp)
08755b14 +0x144:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755b19 +0x149:  mov    -0x6c(%ebp),%eax
08755b1c +0x14c:  mov    %esi,(%esp)
08755b1f +0x14f:  mov    %eax,0x4(%esp)
08755b23 +0x153:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755b28 +0x158:  mov    %edi,(%esp)
08755b2b +0x15b:  mov    %eax,0x4(%esp)
08755b2f +0x15f:  call   087575b0 <_ZN8TaoCrypt13DSA_PublicKey13SetPublicPartERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetPublicPart(TaoCrypt::Integer const&)
08755b34 +0x164:  mov    -0x58(%ebp),%eax
08755b37 +0x167:  mov    -0x54(%ebp),%edx
08755b3a +0x16a:  movl   $0x0,0x4(%esp)
08755b42 +0x172:  shl    $0x2,%eax
08755b45 +0x175:  mov    %edx,(%esp)
08755b48 +0x178:  mov    %edx,-0x6c(%ebp)
08755b4b +0x17b:  mov    %eax,0x8(%esp)
08755b4f +0x17f:  call   0807dcc0 <_init+0x5b8>
08755b54 +0x184:  mov    -0x6c(%ebp),%edx
08755b57 +0x187:  movb   $0x0,0x4(%esp)
08755b5c +0x18c:  mov    %edx,(%esp)
08755b5f +0x18f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755b64 +0x194:  lea    -0x68(%ebp),%eax
08755b67 +0x197:  mov    %eax,(%esp)
08755b6a +0x19a:  mov    %eax,-0x6c(%ebp)
08755b6d +0x19d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755b72 +0x1a2:  mov    -0x6c(%ebp),%eax
08755b75 +0x1a5:  mov    %esi,(%esp)
08755b78 +0x1a8:  mov    %eax,0x4(%esp)
08755b7c +0x1ac:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755b81 +0x1b1:  mov    %edi,(%esp)
08755b84 +0x1b4:  mov    %eax,0x4(%esp)
08755b88 +0x1b8:  call   08757580 <_ZN8TaoCrypt14DSA_PrivateKey14SetPrivatePartERKNS_7IntegerE>  ; TaoCrypt::DSA_PrivateKey::SetPrivatePart(TaoCrypt::Integer const&)
08755b8d +0x1bd:  mov    -0x68(%ebp),%eax
08755b90 +0x1c0:  mov    -0x64(%ebp),%esi
08755b93 +0x1c3:  movl   $0x0,0x4(%esp)
08755b9b +0x1cb:  shl    $0x2,%eax
08755b9e +0x1ce:  mov    %eax,0x8(%esp)
08755ba2 +0x1d2:  mov    %esi,(%esp)
08755ba5 +0x1d5:  call   0807dcc0 <_init+0x5b8>
08755baa +0x1da:  movb   $0x0,0x4(%esp)
08755baf +0x1df:  mov    %esi,(%esp)
08755bb2 +0x1e2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755bb7 +0x1e7:  add    $0x7c,%esp
08755bba +0x1ea:  pop    %ebx
08755bbb +0x1eb:  pop    %esi
08755bbc +0x1ec:  pop    %edi
08755bbd +0x1ed:  pop    %ebp
08755bbe +0x1ee:  ret
08755bbf +0x1ef:  nop
```

## 反编译 C

```c
// TaoCrypt::DSA_Private_Decoder::Decode @ 0x87559d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Private_Decoder::Decode(TaoCrypt::DSA_PrivateKey&) */

void __thiscall
TaoCrypt::DSA_Private_Decoder::Decode(DSA_Private_Decoder *this,DSA_PrivateKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    DSA_PublicKey::SetModulus((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    DSA_PublicKey::SetSubGroupOrder((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_4c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_4c);
    DSA_PublicKey::SetSubGroupGenerator((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_5c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_5c);
    DSA_PublicKey::SetPublicPart((DSA_PublicKey *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_6c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_6c);
    DSA_PrivateKey::SetPrivatePart(param_1,pIVar1);
    uVar2 = 0;
    memset(local_68,0,local_6c << 2);
    operator_delete__(local_68,uVar2 & 0xffffff00);
  }
  return;
}
```
