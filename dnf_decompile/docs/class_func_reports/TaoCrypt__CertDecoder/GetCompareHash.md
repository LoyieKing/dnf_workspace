# GetCompareHash

`_ZN8TaoCrypt11CertDecoder14GetCompareHashEPKhjPhj`

`TaoCrypt::CertDecoder::GetCompareHash(unsigned char const*, unsigned int, unsigned char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x08756660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08756660  _ZN8TaoCrypt11CertDecoder14GetCompareHashEPKhjPhj
#           TaoCrypt::CertDecoder::GetCompareHash(unsigned char const*, unsigned int, unsigned char*, unsigned int)
# range [0x08756660, 0x0875679c]
08756660 +0x000:  push   %ebp
08756661 +0x001:  mov    %esp,%ebp
08756663 +0x003:  sub    $0x4c8,%esp
08756669 +0x009:  mov    %edi,-0x4(%ebp)
0875666c +0x00c:  mov    0x8(%ebp),%edi
0875666f +0x00f:  mov    %ebx,-0xc(%ebp)
08756672 +0x012:  mov    0x10(%ebp),%edx
08756675 +0x015:  mov    %esi,-0x8(%ebp)
08756678 +0x018:  call   08722df8 <__i686.get_pc_thunk.bx>
0875667d +0x01d:  add    $0xc1651b,%ebx
08756683 +0x023:  mov    0x4(%edi),%eax
08756686 +0x026:  mov    0x10(%eax),%ecx
08756689 +0x029:  test   %ecx,%ecx
0875668b +0x02b:  je     087566a0 <+0x40>
0875668d +0x02d:  mov    -0xc(%ebp),%ebx
08756690 +0x030:  mov    -0x8(%ebp),%esi
08756693 +0x033:  mov    -0x4(%ebp),%edi
08756696 +0x036:  mov    %ebp,%esp
08756698 +0x038:  pop    %ebp
08756699 +0x039:  ret
0875669a +0x03a:  lea    0x0(%esi),%esi
087566a0 +0x040:  xor    %eax,%eax
087566a2 +0x042:  test   %edx,%edx
087566a4 +0x044:  mov    %edx,-0x2c(%ebp)
087566a7 +0x047:  je     087566b9 <+0x59>
087566a9 +0x049:  mov    %edx,(%esp)
087566ac +0x04c:  movb   $0x0,0x4(%esp)
087566b1 +0x051:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087566b6 +0x056:  mov    -0x2c(%ebp),%edx
087566b9 +0x059:  mov    %edx,0x8(%esp)
087566bd +0x05d:  mov    0xc(%ebp),%edx
087566c0 +0x060:  lea    -0x4a0(%ebp),%esi
087566c6 +0x066:  mov    %eax,-0x28(%ebp)
087566c9 +0x069:  mov    %eax,(%esp)
087566cc +0x06c:  mov    %edx,0x4(%esp)
087566d0 +0x070:  call   0807d8a0 <_init+0x198>
087566d5 +0x075:  lea    -0x2c(%ebp),%eax
087566d8 +0x078:  mov    %eax,0x4(%esp)
087566dc +0x07c:  movl   $0x0,-0x20(%ebp)
087566e3 +0x083:  movl   $0x0,-0x1c(%ebp)
087566ea +0x08a:  movl   $0x1,0x14(%esp)
087566f2 +0x092:  movl   $0x0,0x10(%esp)
087566fa +0x09a:  movl   $0x0,0xc(%esp)
08756702 +0x0a2:  movl   $0x0,0x8(%esp)
0875670a +0x0aa:  mov    %esi,(%esp)
0875670d +0x0ad:  call   087565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>  ; TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)
08756712 +0x0b2:  mov    %esi,(%esp)
08756715 +0x0b5:  call   08753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>  ; TaoCrypt::BER_Decoder::GetSequence()
0875671a +0x0ba:  mov    %esi,(%esp)
0875671d +0x0bd:  call   08753a30 <_ZN8TaoCrypt11CertDecoder9GetAlgoIdEv>  ; TaoCrypt::CertDecoder::GetAlgoId()
08756722 +0x0c2:  mov    %esi,(%esp)
08756725 +0x0c5:  call   08753ce0 <_ZN8TaoCrypt11CertDecoder9GetDigestEv>  ; TaoCrypt::CertDecoder::GetDigest()
0875672a +0x0ca:  mov    -0x488(%ebp),%eax
08756730 +0x0d0:  cmp    0x18(%ebp),%eax
08756733 +0x0d3:  ja     08756790 <+0x130>
08756735 +0x0d5:  mov    %eax,0x8(%esp)
08756739 +0x0d9:  mov    -0x454(%ebp),%eax
0875673f +0x0df:  mov    %eax,0x4(%esp)
08756743 +0x0e3:  mov    0x14(%ebp),%eax
08756746 +0x0e6:  mov    %eax,(%esp)
08756749 +0x0e9:  call   0807d8a0 <_init+0x198>
0875674e +0x0ee:  mov    %esi,(%esp)
08756751 +0x0f1:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08756756 +0x0f6:  mov    -0x28(%ebp),%esi
08756759 +0x0f9:  mov    -0x2c(%ebp),%eax
0875675c +0x0fc:  movl   $0x0,0x4(%esp)
08756764 +0x104:  mov    %esi,(%esp)
08756767 +0x107:  mov    %eax,0x8(%esp)
0875676b +0x10b:  call   0807dcc0 <_init+0x5b8>
08756770 +0x110:  mov    %esi,(%esp)
08756773 +0x113:  movb   $0x0,0x4(%esp)
08756778 +0x118:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875677d +0x11d:  mov    -0xc(%ebp),%ebx
08756780 +0x120:  mov    -0x8(%ebp),%esi
08756783 +0x123:  mov    -0x4(%ebp),%edi
08756786 +0x126:  mov    %ebp,%esp
08756788 +0x128:  pop    %ebp
08756789 +0x129:  ret
0875678a +0x12a:  lea    0x0(%esi),%esi
08756790 +0x130:  mov    0x4(%edi),%eax
08756793 +0x133:  movl   $0x408,0x10(%eax)
0875679a +0x13a:  jmp    0875674e <+0xee>
0875679c +0x13c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::GetCompareHash @ 0x8756660

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::GetCompareHash(unsigned char const*, unsigned int, unsigned char*,
   unsigned int) */

void __thiscall
TaoCrypt::CertDecoder::GetCompareHash
          (CertDecoder *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4)

{
  void *pvVar1;
  uint in_stack_fffffb38;
  uint uVar2;
  CertDecoder local_4a4 [24];
  uint local_48c;
  void *local_458;
  uint local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(*(int *)(this + 4) + 0x10) != 0) {
    return;
  }
  local_2c = (void *)0x0;
  local_30 = param_2;
  if (param_2 != 0) {
    local_2c = operator_new__(param_2,in_stack_fffffb38 & 0xffffff00);
  }
  memcpy(local_2c,param_1,local_30);
  local_24 = 0;
  local_20 = 0;
  CertDecoder(local_4a4,&local_30,0,0,0,1);
  BER_Decoder::GetSequence((BER_Decoder *)local_4a4);
  GetAlgoId(local_4a4);
  GetDigest(local_4a4);
  if (param_4 < local_48c) {
    *(undefined4 *)(*(int *)(this + 4) + 0x10) = 0x408;
  }
  else {
    memcpy(param_3,local_458,local_48c);
  }
  ~CertDecoder(local_4a4);
  pvVar1 = local_2c;
  uVar2 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}
```
