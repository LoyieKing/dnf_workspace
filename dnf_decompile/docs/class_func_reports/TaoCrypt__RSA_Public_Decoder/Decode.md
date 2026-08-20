# Decode

`_ZN8TaoCrypt18RSA_Public_Decoder6DecodeERNS_13RSA_PublicKeyE`

`TaoCrypt::RSA_Public_Decoder::Decode(TaoCrypt::RSA_PublicKey&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_Public_Decoder` | `0x087558d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087558d0  _ZN8TaoCrypt18RSA_Public_Decoder6DecodeERNS_13RSA_PublicKeyE
#           TaoCrypt::RSA_Public_Decoder::Decode(TaoCrypt::RSA_PublicKey&)
# range [0x087558d0, 0x087559c9]
087558d0 +0x00:  push   %ebp
087558d1 +0x01:  mov    %esp,%ebp
087558d3 +0x03:  sub    $0x58,%esp
087558d6 +0x06:  mov    %esi,-0x8(%ebp)
087558d9 +0x09:  mov    0x8(%ebp),%esi
087558dc +0x0c:  mov    %ebx,-0xc(%ebp)
087558df +0x0f:  mov    %edi,-0x4(%ebp)
087558e2 +0x12:  mov    0xc(%ebp),%edi
087558e5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087558ea +0x1a:  add    $0xc172ae,%ebx
087558f0 +0x20:  mov    (%esi),%eax
087558f2 +0x22:  mov    %esi,(%esp)
087558f5 +0x25:  call   *0x8(%eax)
087558f8 +0x28:  mov    0x4(%esi),%eax
087558fb +0x2b:  mov    0x10(%eax),%edx
087558fe +0x2e:  test   %edx,%edx
08755900 +0x30:  jne    087559b5 <+0xe5>
08755906 +0x36:  lea    -0x28(%ebp),%eax
08755909 +0x39:  mov    %eax,(%esp)
0875590c +0x3c:  mov    %eax,-0x3c(%ebp)
0875590f +0x3f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755914 +0x44:  mov    -0x3c(%ebp),%eax
08755917 +0x47:  mov    %esi,(%esp)
0875591a +0x4a:  mov    %eax,0x4(%esp)
0875591e +0x4e:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755923 +0x53:  mov    %edi,(%esp)
08755926 +0x56:  add    $0x10,%edi
08755929 +0x59:  mov    %eax,0x4(%esp)
0875592d +0x5d:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755932 +0x62:  mov    -0x28(%ebp),%eax
08755935 +0x65:  mov    -0x24(%ebp),%edx
08755938 +0x68:  movl   $0x0,0x4(%esp)
08755940 +0x70:  shl    $0x2,%eax
08755943 +0x73:  mov    %edx,(%esp)
08755946 +0x76:  mov    %edx,-0x3c(%ebp)
08755949 +0x79:  mov    %eax,0x8(%esp)
0875594d +0x7d:  call   0807dcc0 <_init+0x5b8>
08755952 +0x82:  mov    -0x3c(%ebp),%edx
08755955 +0x85:  movb   $0x0,0x4(%esp)
0875595a +0x8a:  mov    %edx,(%esp)
0875595d +0x8d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755962 +0x92:  lea    -0x38(%ebp),%eax
08755965 +0x95:  mov    %eax,(%esp)
08755968 +0x98:  mov    %eax,-0x3c(%ebp)
0875596b +0x9b:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755970 +0xa0:  mov    -0x3c(%ebp),%eax
08755973 +0xa3:  mov    %esi,(%esp)
08755976 +0xa6:  mov    %eax,0x4(%esp)
0875597a +0xaa:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
0875597f +0xaf:  mov    %edi,(%esp)
08755982 +0xb2:  mov    %eax,0x4(%esp)
08755986 +0xb6:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0875598b +0xbb:  mov    -0x38(%ebp),%eax
0875598e +0xbe:  mov    -0x34(%ebp),%esi
08755991 +0xc1:  movl   $0x0,0x4(%esp)
08755999 +0xc9:  shl    $0x2,%eax
0875599c +0xcc:  mov    %eax,0x8(%esp)
087559a0 +0xd0:  mov    %esi,(%esp)
087559a3 +0xd3:  call   0807dcc0 <_init+0x5b8>
087559a8 +0xd8:  movb   $0x0,0x4(%esp)
087559ad +0xdd:  mov    %esi,(%esp)
087559b0 +0xe0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087559b5 +0xe5:  mov    -0xc(%ebp),%ebx
087559b8 +0xe8:  mov    -0x8(%ebp),%esi
087559bb +0xeb:  mov    -0x4(%ebp),%edi
087559be +0xee:  mov    %ebp,%esp
087559c0 +0xf0:  pop    %ebp
087559c1 +0xf1:  ret
087559c2 +0xf2:  lea    0x0(%esi,%eiz,1),%esi
087559c9 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RSA_Public_Decoder::Decode @ 0x87558d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Public_Decoder::Decode(TaoCrypt::RSA_PublicKey&) */

void __thiscall
TaoCrypt::RSA_Public_Decoder::Decode(RSA_Public_Decoder *this,RSA_PublicKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    Integer::operator=((Integer *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    Integer::operator=((Integer *)(param_1 + 0x10),pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
  }
  return;
}
```
