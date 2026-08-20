# Decode

`_ZN8TaoCrypt10DH_Decoder6DecodeERNS_2DHE`

`TaoCrypt::DH_Decoder::Decode(TaoCrypt::DH&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH_Decoder` | `0x08755620` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08755620  _ZN8TaoCrypt10DH_Decoder6DecodeERNS_2DHE
#           TaoCrypt::DH_Decoder::Decode(TaoCrypt::DH&)
# range [0x08755620, 0x08755719]
08755620 +0x00:  push   %ebp
08755621 +0x01:  mov    %esp,%ebp
08755623 +0x03:  sub    $0x58,%esp
08755626 +0x06:  mov    %esi,-0x8(%ebp)
08755629 +0x09:  mov    0x8(%ebp),%esi
0875562c +0x0c:  mov    %ebx,-0xc(%ebp)
0875562f +0x0f:  mov    %edi,-0x4(%ebp)
08755632 +0x12:  mov    0xc(%ebp),%edi
08755635 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0875563a +0x1a:  add    $0xc1755e,%ebx
08755640 +0x20:  mov    (%esi),%eax
08755642 +0x22:  mov    %esi,(%esp)
08755645 +0x25:  call   *0x8(%eax)
08755648 +0x28:  mov    0x4(%esi),%eax
0875564b +0x2b:  mov    0x10(%eax),%ecx
0875564e +0x2e:  test   %ecx,%ecx
08755650 +0x30:  jne    08755705 <+0xe5>
08755656 +0x36:  lea    -0x28(%ebp),%eax
08755659 +0x39:  mov    %eax,(%esp)
0875565c +0x3c:  mov    %eax,-0x3c(%ebp)
0875565f +0x3f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755664 +0x44:  mov    -0x3c(%ebp),%eax
08755667 +0x47:  mov    %esi,(%esp)
0875566a +0x4a:  mov    %eax,0x4(%esp)
0875566e +0x4e:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755673 +0x53:  mov    %edi,(%esp)
08755676 +0x56:  add    $0x10,%edi
08755679 +0x59:  mov    %eax,0x4(%esp)
0875567d +0x5d:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755682 +0x62:  mov    -0x28(%ebp),%eax
08755685 +0x65:  mov    -0x24(%ebp),%edx
08755688 +0x68:  movl   $0x0,0x4(%esp)
08755690 +0x70:  shl    $0x2,%eax
08755693 +0x73:  mov    %edx,(%esp)
08755696 +0x76:  mov    %edx,-0x3c(%ebp)
08755699 +0x79:  mov    %eax,0x8(%esp)
0875569d +0x7d:  call   0807dcc0 <_init+0x5b8>
087556a2 +0x82:  mov    -0x3c(%ebp),%edx
087556a5 +0x85:  movb   $0x0,0x4(%esp)
087556aa +0x8a:  mov    %edx,(%esp)
087556ad +0x8d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087556b2 +0x92:  lea    -0x38(%ebp),%eax
087556b5 +0x95:  mov    %eax,(%esp)
087556b8 +0x98:  mov    %eax,-0x3c(%ebp)
087556bb +0x9b:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087556c0 +0xa0:  mov    -0x3c(%ebp),%eax
087556c3 +0xa3:  mov    %esi,(%esp)
087556c6 +0xa6:  mov    %eax,0x4(%esp)
087556ca +0xaa:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
087556cf +0xaf:  mov    %edi,(%esp)
087556d2 +0xb2:  mov    %eax,0x4(%esp)
087556d6 +0xb6:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087556db +0xbb:  mov    -0x38(%ebp),%eax
087556de +0xbe:  mov    -0x34(%ebp),%esi
087556e1 +0xc1:  movl   $0x0,0x4(%esp)
087556e9 +0xc9:  shl    $0x2,%eax
087556ec +0xcc:  mov    %eax,0x8(%esp)
087556f0 +0xd0:  mov    %esi,(%esp)
087556f3 +0xd3:  call   0807dcc0 <_init+0x5b8>
087556f8 +0xd8:  movb   $0x0,0x4(%esp)
087556fd +0xdd:  mov    %esi,(%esp)
08755700 +0xe0:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755705 +0xe5:  mov    -0xc(%ebp),%ebx
08755708 +0xe8:  mov    -0x8(%ebp),%esi
0875570b +0xeb:  mov    -0x4(%ebp),%edi
0875570e +0xee:  mov    %ebp,%esp
08755710 +0xf0:  pop    %ebp
08755711 +0xf1:  ret
08755712 +0xf2:  lea    0x0(%esi,%eiz,1),%esi
08755719 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::DH_Decoder::Decode @ 0x8755620

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH_Decoder::Decode(TaoCrypt::DH&) */

void __thiscall TaoCrypt::DH_Decoder::Decode(DH_Decoder *this,DH *param_1)

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
