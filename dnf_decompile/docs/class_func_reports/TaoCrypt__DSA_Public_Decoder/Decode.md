# Decode

`_ZN8TaoCrypt18DSA_Public_Decoder6DecodeERNS_13DSA_PublicKeyE`

`TaoCrypt::DSA_Public_Decoder::Decode(TaoCrypt::DSA_PublicKey&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DSA_Public_Decoder` | `0x08755720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08755720  _ZN8TaoCrypt18DSA_Public_Decoder6DecodeERNS_13DSA_PublicKeyE
#           TaoCrypt::DSA_Public_Decoder::Decode(TaoCrypt::DSA_PublicKey&)
# range [0x08755720, 0x087558c9]
08755720 +0x000:  push   %ebp
08755721 +0x001:  mov    %esp,%ebp
08755723 +0x003:  sub    $0x78,%esp
08755726 +0x006:  mov    %esi,-0x8(%ebp)
08755729 +0x009:  mov    0x8(%ebp),%esi
0875572c +0x00c:  mov    %ebx,-0xc(%ebp)
0875572f +0x00f:  mov    %edi,-0x4(%ebp)
08755732 +0x012:  mov    0xc(%ebp),%edi
08755735 +0x015:  call   08722df8 <__i686.get_pc_thunk.bx>
0875573a +0x01a:  add    $0xc1745e,%ebx
08755740 +0x020:  mov    (%esi),%eax
08755742 +0x022:  mov    %esi,(%esp)
08755745 +0x025:  call   *0x8(%eax)
08755748 +0x028:  mov    0x4(%esi),%eax
0875574b +0x02b:  mov    0x10(%eax),%eax
0875574e +0x02e:  test   %eax,%eax
08755750 +0x030:  jne    087558b4 <+0x194>
08755756 +0x036:  lea    -0x28(%ebp),%eax
08755759 +0x039:  mov    %eax,(%esp)
0875575c +0x03c:  mov    %eax,-0x5c(%ebp)
0875575f +0x03f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755764 +0x044:  mov    -0x5c(%ebp),%eax
08755767 +0x047:  mov    %esi,(%esp)
0875576a +0x04a:  mov    %eax,0x4(%esp)
0875576e +0x04e:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755773 +0x053:  mov    %edi,(%esp)
08755776 +0x056:  mov    %eax,0x4(%esp)
0875577a +0x05a:  call   08757640 <_ZN8TaoCrypt13DSA_PublicKey10SetModulusERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetModulus(TaoCrypt::Integer const&)
0875577f +0x05f:  mov    -0x28(%ebp),%eax
08755782 +0x062:  mov    -0x24(%ebp),%edx
08755785 +0x065:  movl   $0x0,0x4(%esp)
0875578d +0x06d:  shl    $0x2,%eax
08755790 +0x070:  mov    %edx,(%esp)
08755793 +0x073:  mov    %edx,-0x5c(%ebp)
08755796 +0x076:  mov    %eax,0x8(%esp)
0875579a +0x07a:  call   0807dcc0 <_init+0x5b8>
0875579f +0x07f:  mov    -0x5c(%ebp),%edx
087557a2 +0x082:  movb   $0x0,0x4(%esp)
087557a7 +0x087:  mov    %edx,(%esp)
087557aa +0x08a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087557af +0x08f:  lea    -0x38(%ebp),%eax
087557b2 +0x092:  mov    %eax,(%esp)
087557b5 +0x095:  mov    %eax,-0x5c(%ebp)
087557b8 +0x098:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087557bd +0x09d:  mov    -0x5c(%ebp),%eax
087557c0 +0x0a0:  mov    %esi,(%esp)
087557c3 +0x0a3:  mov    %eax,0x4(%esp)
087557c7 +0x0a7:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
087557cc +0x0ac:  mov    %edi,(%esp)
087557cf +0x0af:  mov    %eax,0x4(%esp)
087557d3 +0x0b3:  call   08757610 <_ZN8TaoCrypt13DSA_PublicKey16SetSubGroupOrderERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetSubGroupOrder(TaoCrypt::Integer const&)
087557d8 +0x0b8:  mov    -0x38(%ebp),%eax
087557db +0x0bb:  mov    -0x34(%ebp),%edx
087557de +0x0be:  movl   $0x0,0x4(%esp)
087557e6 +0x0c6:  shl    $0x2,%eax
087557e9 +0x0c9:  mov    %edx,(%esp)
087557ec +0x0cc:  mov    %edx,-0x5c(%ebp)
087557ef +0x0cf:  mov    %eax,0x8(%esp)
087557f3 +0x0d3:  call   0807dcc0 <_init+0x5b8>
087557f8 +0x0d8:  mov    -0x5c(%ebp),%edx
087557fb +0x0db:  movb   $0x0,0x4(%esp)
08755800 +0x0e0:  mov    %edx,(%esp)
08755803 +0x0e3:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755808 +0x0e8:  lea    -0x48(%ebp),%eax
0875580b +0x0eb:  mov    %eax,(%esp)
0875580e +0x0ee:  mov    %eax,-0x5c(%ebp)
08755811 +0x0f1:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755816 +0x0f6:  mov    -0x5c(%ebp),%eax
08755819 +0x0f9:  mov    %esi,(%esp)
0875581c +0x0fc:  mov    %eax,0x4(%esp)
08755820 +0x100:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755825 +0x105:  mov    %edi,(%esp)
08755828 +0x108:  mov    %eax,0x4(%esp)
0875582c +0x10c:  call   087575e0 <_ZN8TaoCrypt13DSA_PublicKey20SetSubGroupGeneratorERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetSubGroupGenerator(TaoCrypt::Integer const&)
08755831 +0x111:  mov    -0x48(%ebp),%eax
08755834 +0x114:  mov    -0x44(%ebp),%edx
08755837 +0x117:  movl   $0x0,0x4(%esp)
0875583f +0x11f:  shl    $0x2,%eax
08755842 +0x122:  mov    %edx,(%esp)
08755845 +0x125:  mov    %edx,-0x5c(%ebp)
08755848 +0x128:  mov    %eax,0x8(%esp)
0875584c +0x12c:  call   0807dcc0 <_init+0x5b8>
08755851 +0x131:  mov    -0x5c(%ebp),%edx
08755854 +0x134:  movb   $0x0,0x4(%esp)
08755859 +0x139:  mov    %edx,(%esp)
0875585c +0x13c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755861 +0x141:  lea    -0x58(%ebp),%eax
08755864 +0x144:  mov    %eax,(%esp)
08755867 +0x147:  mov    %eax,-0x5c(%ebp)
0875586a +0x14a:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0875586f +0x14f:  mov    -0x5c(%ebp),%eax
08755872 +0x152:  mov    %esi,(%esp)
08755875 +0x155:  mov    %eax,0x4(%esp)
08755879 +0x159:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
0875587e +0x15e:  mov    %edi,(%esp)
08755881 +0x161:  mov    %eax,0x4(%esp)
08755885 +0x165:  call   087575b0 <_ZN8TaoCrypt13DSA_PublicKey13SetPublicPartERKNS_7IntegerE>  ; TaoCrypt::DSA_PublicKey::SetPublicPart(TaoCrypt::Integer const&)
0875588a +0x16a:  mov    -0x58(%ebp),%eax
0875588d +0x16d:  mov    -0x54(%ebp),%esi
08755890 +0x170:  movl   $0x0,0x4(%esp)
08755898 +0x178:  shl    $0x2,%eax
0875589b +0x17b:  mov    %eax,0x8(%esp)
0875589f +0x17f:  mov    %esi,(%esp)
087558a2 +0x182:  call   0807dcc0 <_init+0x5b8>
087558a7 +0x187:  movb   $0x0,0x4(%esp)
087558ac +0x18c:  mov    %esi,(%esp)
087558af +0x18f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087558b4 +0x194:  mov    -0xc(%ebp),%ebx
087558b7 +0x197:  mov    -0x8(%ebp),%esi
087558ba +0x19a:  mov    -0x4(%ebp),%edi
087558bd +0x19d:  mov    %ebp,%esp
087558bf +0x19f:  pop    %ebp
087558c0 +0x1a0:  ret
087558c1 +0x1a1:  nop
087558c2 +0x1a2:  lea    0x0(%esi,%eiz,1),%esi
087558c9 +0x1a9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::DSA_Public_Decoder::Decode @ 0x8755720

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DSA_Public_Decoder::Decode(TaoCrypt::DSA_PublicKey&) */

void __thiscall
TaoCrypt::DSA_Public_Decoder::Decode(DSA_Public_Decoder *this,DSA_PublicKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
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
    DSA_PublicKey::SetModulus(param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    DSA_PublicKey::SetSubGroupOrder(param_1,pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_4c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_4c);
    DSA_PublicKey::SetSubGroupGenerator(param_1,pIVar1);
    uVar2 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_5c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_5c);
    DSA_PublicKey::SetPublicPart(param_1,pIVar1);
    uVar2 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar2 & 0xffffff00);
  }
  return;
}
```
