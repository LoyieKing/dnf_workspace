# ReadHeader

`_ZN8TaoCrypt11CertDecoder10ReadHeaderEv`

`TaoCrypt::CertDecoder::ReadHeader()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08755570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08755570  _ZN8TaoCrypt11CertDecoder10ReadHeaderEv
#           TaoCrypt::CertDecoder::ReadHeader()
# range [0x08755570, 0x08755619]
08755570 +0x00:  push   %ebp
08755571 +0x01:  mov    %esp,%ebp
08755573 +0x03:  sub    $0x38,%esp
08755576 +0x06:  mov    %esi,-0x8(%ebp)
08755579 +0x09:  mov    0x8(%ebp),%esi
0875557c +0x0c:  mov    %ebx,-0xc(%ebp)
0875557f +0x0f:  mov    %edi,-0x4(%ebp)
08755582 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08755587 +0x17:  add    $0xc17611,%ebx
0875558d +0x1d:  mov    0x4(%esi),%eax
08755590 +0x20:  mov    0x10(%eax),%edx
08755593 +0x23:  test   %edx,%edx
08755595 +0x25:  jne    08755605 <+0x95>
08755597 +0x27:  mov    %esi,(%esp)
0875559a +0x2a:  lea    -0x28(%ebp),%edi
0875559d +0x2d:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
087555a2 +0x32:  mov    0x4(%esi),%eax
087555a5 +0x35:  mov    0xc(%eax),%eax
087555a8 +0x38:  mov    %eax,0x10(%esi)
087555ab +0x3b:  mov    %esi,(%esp)
087555ae +0x3e:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
087555b3 +0x43:  mov    0x4(%esi),%edx
087555b6 +0x46:  mov    %eax,0x14(%esi)
087555b9 +0x49:  add    0xc(%edx),%eax
087555bc +0x4c:  mov    %eax,0x14(%esi)
087555bf +0x4f:  mov    %esi,(%esp)
087555c2 +0x52:  call   087538c0 <_ZN8TaoCrypt11BER_Decoder18GetExplicitVersionEv>  ; TaoCrypt::BER_Decoder::GetExplicitVersion()
087555c7 +0x57:  mov    %edi,(%esp)
087555ca +0x5a:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
087555cf +0x5f:  mov    %esi,(%esp)
087555d2 +0x62:  mov    %edi,0x4(%esp)
087555d6 +0x66:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
087555db +0x6b:  mov    -0x28(%ebp),%eax
087555de +0x6e:  mov    -0x24(%ebp),%esi
087555e1 +0x71:  movl   $0x0,0x4(%esp)
087555e9 +0x79:  shl    $0x2,%eax
087555ec +0x7c:  mov    %eax,0x8(%esp)
087555f0 +0x80:  mov    %esi,(%esp)
087555f3 +0x83:  call   0807dcc0 <_init+0x5b8>
087555f8 +0x88:  movb   $0x0,0x4(%esp)
087555fd +0x8d:  mov    %esi,(%esp)
08755600 +0x90:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755605 +0x95:  mov    -0xc(%ebp),%ebx
08755608 +0x98:  mov    -0x8(%ebp),%esi
0875560b +0x9b:  mov    -0x4(%ebp),%edi
0875560e +0x9e:  mov    %ebp,%esp
08755610 +0xa0:  pop    %ebp
08755611 +0xa1:  ret
08755612 +0xa2:  lea    0x0(%esi,%eiz,1),%esi
08755619 +0xa9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::ReadHeader @ 0x8755570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ReadHeader() */

void __thiscall TaoCrypt::CertDecoder::ReadHeader(CertDecoder *this)

{
  int iVar1;
  uint uVar2;
  int local_2c;
  void *local_28;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(int *)(this + 4) + 0xc);
    iVar1 = BER_Decoder::GetSequence((BER_Decoder *)this);
    *(int *)(this + 0x14) = iVar1;
    *(int *)(this + 0x14) = iVar1 + *(int *)(*(int *)(this + 4) + 0xc);
    BER_Decoder::GetExplicitVersion((BER_Decoder *)this);
    Integer::Integer((Integer *)&local_2c);
    BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
  }
  return;
}
```
