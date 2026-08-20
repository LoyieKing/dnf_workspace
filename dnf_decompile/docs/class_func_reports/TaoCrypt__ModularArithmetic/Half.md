# Half

`_ZNK8TaoCrypt17ModularArithmetic4HalfERKNS_7IntegerE`

`TaoCrypt::ModularArithmetic::Half(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x08760930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760930  _ZNK8TaoCrypt17ModularArithmetic4HalfERKNS_7IntegerE
#           TaoCrypt::ModularArithmetic::Half(TaoCrypt::Integer const&) const
# range [0x08760930, 0x08760b0a]
08760930 +0x000:  push   %ebp
08760931 +0x001:  mov    %esp,%ebp
08760933 +0x003:  push   %edi
08760934 +0x004:  push   %esi
08760935 +0x005:  push   %ebx
08760936 +0x006:  sub    $0x7c,%esp
08760939 +0x009:  mov    0xc(%ebp),%esi
0876093c +0x00c:  mov    0x8(%ebp),%edi
0876093f +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08760944 +0x014:  add    $0xc0c254,%ebx
0876094a +0x01a:  mov    (%esi),%eax
0876094c +0x01c:  cmp    0xc(%edi),%eax
0876094f +0x01f:  je     08760ad8 <+0x1a8>
08760955 +0x025:  movl   $0x0,0x4(%esp)
0876095d +0x02d:  mov    %esi,(%esp)
08760960 +0x030:  call   0875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>  ; TaoCrypt::Integer::GetBit(unsigned int) const
08760965 +0x035:  test   %al,%al
08760967 +0x037:  je     08760a70 <+0x140>
0876096d +0x03d:  lea    0xc(%edi),%edx
08760970 +0x040:  lea    -0x28(%ebp),%eax
08760973 +0x043:  mov    %edx,0x8(%esp)
08760977 +0x047:  mov    %esi,0x4(%esp)
0876097b +0x04b:  lea    -0x58(%ebp),%esi
0876097e +0x04e:  mov    %eax,(%esp)
08760981 +0x051:  mov    %eax,-0x5c(%ebp)
08760984 +0x054:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
08760989 +0x059:  mov    -0x5c(%ebp),%eax
0876098c +0x05c:  sub    $0x4,%esp
0876098f +0x05f:  mov    %eax,0x4(%esp)
08760993 +0x063:  mov    %esi,(%esp)
08760996 +0x066:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0876099b +0x06b:  mov    %esi,(%esp)
0876099e +0x06e:  lea    -0x38(%ebp),%esi
087609a1 +0x071:  movl   $0x1,0x4(%esp)
087609a9 +0x079:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
087609ae +0x07e:  mov    %esi,(%esp)
087609b1 +0x081:  mov    %eax,0x4(%esp)
087609b5 +0x085:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
087609ba +0x08a:  mov    -0x58(%ebp),%eax
087609bd +0x08d:  mov    -0x54(%ebp),%edx
087609c0 +0x090:  movl   $0x0,0x4(%esp)
087609c8 +0x098:  shl    $0x2,%eax
087609cb +0x09b:  mov    %edx,(%esp)
087609ce +0x09e:  mov    %edx,-0x5c(%ebp)
087609d1 +0x0a1:  mov    %eax,0x8(%esp)
087609d5 +0x0a5:  call   0807dcc0 <_init+0x5b8>
087609da +0x0aa:  mov    -0x5c(%ebp),%edx
087609dd +0x0ad:  movb   $0x0,0x4(%esp)
087609e2 +0x0b2:  mov    %edx,(%esp)
087609e5 +0x0b5:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087609ea +0x0ba:  mov    $0x1,%edx
087609ef +0x0bf:  add    $0x2c,%edi
087609f2 +0x0c2:  mov    %dl,-0x5c(%ebp)
087609f5 +0x0c5:  mov    %esi,0x4(%esp)
087609f9 +0x0c9:  mov    %edi,(%esp)
087609fc +0x0cc:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08760a01 +0x0d1:  mov    -0x34(%ebp),%esi
08760a04 +0x0d4:  movl   $0x0,0x4(%esp)
08760a0c +0x0dc:  mov    %esi,(%esp)
08760a0f +0x0df:  mov    %eax,%edi
08760a11 +0x0e1:  mov    -0x38(%ebp),%eax
08760a14 +0x0e4:  shl    $0x2,%eax
08760a17 +0x0e7:  mov    %eax,0x8(%esp)
08760a1b +0x0eb:  call   0807dcc0 <_init+0x5b8>
08760a20 +0x0f0:  movb   $0x0,0x4(%esp)
08760a25 +0x0f5:  mov    %esi,(%esp)
08760a28 +0x0f8:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760a2d +0x0fd:  movzbl -0x5c(%ebp),%edx
08760a31 +0x101:  test   %dl,%dl
08760a33 +0x103:  je     08760a5f <+0x12f>
08760a35 +0x105:  mov    -0x28(%ebp),%eax
08760a38 +0x108:  mov    -0x24(%ebp),%esi
08760a3b +0x10b:  movl   $0x0,0x4(%esp)
08760a43 +0x113:  shl    $0x2,%eax
08760a46 +0x116:  mov    %eax,0x8(%esp)
08760a4a +0x11a:  mov    %esi,(%esp)
08760a4d +0x11d:  call   0807dcc0 <_init+0x5b8>
08760a52 +0x122:  movb   $0x0,0x4(%esp)
08760a57 +0x127:  mov    %esi,(%esp)
08760a5a +0x12a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760a5f +0x12f:  lea    -0xc(%ebp),%esp
08760a62 +0x132:  mov    %edi,%eax
08760a64 +0x134:  pop    %ebx
08760a65 +0x135:  pop    %esi
08760a66 +0x136:  pop    %edi
08760a67 +0x137:  pop    %ebp
08760a68 +0x138:  ret
08760a69 +0x139:  lea    0x0(%esi,%eiz,1),%esi
08760a70 +0x140:  mov    %esi,0x4(%esp)
08760a74 +0x144:  lea    -0x48(%ebp),%esi
08760a77 +0x147:  mov    %esi,(%esp)
08760a7a +0x14a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08760a7f +0x14f:  mov    %esi,(%esp)
08760a82 +0x152:  lea    -0x38(%ebp),%esi
08760a85 +0x155:  movl   $0x1,0x4(%esp)
08760a8d +0x15d:  call   08760820 <_ZN8TaoCrypt7IntegerrSEj>  ; TaoCrypt::Integer::operator>>=(unsigned int)
08760a92 +0x162:  mov    %esi,(%esp)
08760a95 +0x165:  mov    %eax,0x4(%esp)
08760a99 +0x169:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
08760a9e +0x16e:  mov    -0x48(%ebp),%eax
08760aa1 +0x171:  mov    -0x44(%ebp),%edx
08760aa4 +0x174:  movl   $0x0,0x4(%esp)
08760aac +0x17c:  shl    $0x2,%eax
08760aaf +0x17f:  mov    %edx,(%esp)
08760ab2 +0x182:  mov    %edx,-0x5c(%ebp)
08760ab5 +0x185:  mov    %eax,0x8(%esp)
08760ab9 +0x189:  call   0807dcc0 <_init+0x5b8>
08760abe +0x18e:  mov    -0x5c(%ebp),%edx
08760ac1 +0x191:  movb   $0x0,0x4(%esp)
08760ac6 +0x196:  mov    %edx,(%esp)
08760ac9 +0x199:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760ace +0x19e:  xor    %edx,%edx
08760ad0 +0x1a0:  jmp    087609ef <+0xbf>
08760ad5 +0x1a5:  lea    0x0(%esi),%esi
08760ad8 +0x1a8:  mov    %eax,0x10(%esp)
08760adc +0x1ac:  mov    0x10(%edi),%eax
08760adf +0x1af:  movl   $0x1,0x8(%esp)
08760ae7 +0x1b7:  mov    %eax,0xc(%esp)
08760aeb +0x1bb:  mov    0x4(%esi),%eax
08760aee +0x1be:  mov    %eax,0x4(%esp)
08760af2 +0x1c2:  mov    0x20(%edi),%eax
08760af5 +0x1c5:  add    $0x1c,%edi
08760af8 +0x1c8:  mov    %eax,(%esp)
08760afb +0x1cb:  call   0875ce90 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j>  ; TaoCrypt::DivideByPower2Mod(unsigned int*, unsigned int const*, unsigned int, unsigned int const*, unsigned int)
08760b00 +0x1d0:  lea    -0xc(%ebp),%esp
08760b03 +0x1d3:  mov    %edi,%eax
08760b05 +0x1d5:  pop    %ebx
08760b06 +0x1d6:  pop    %esi
08760b07 +0x1d7:  pop    %edi
08760b08 +0x1d8:  pop    %ebp
08760b09 +0x1d9:  ret
08760b0a +0x1da:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::Half @ 0x8760930

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Half(TaoCrypt::Integer const&) const */

ModularArithmetic * __thiscall
TaoCrypt::ModularArithmetic::Half(ModularArithmetic *this,Integer *param_1)

{
  char cVar1;
  Integer *pIVar2;
  ModularArithmetic *pMVar3;
  uint uVar4;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  if (*(uint *)param_1 != *(uint *)(this + 0xc)) {
    cVar1 = Integer::GetBit(param_1,0);
    if (cVar1 == '\0') {
      Integer::Integer((Integer *)&local_4c,param_1);
      pIVar2 = (Integer *)Integer::operator>>=((Integer *)&local_4c,1);
      Integer::Integer((Integer *)&local_3c,pIVar2);
      uVar4 = 0;
      memset(local_48,0,local_4c << 2);
      operator_delete__(local_48,uVar4 & 0xffffff00);
    }
    else {
      Integer::Plus((Integer *)&local_2c);
      Integer::Integer((Integer *)&local_5c,(Integer *)&local_2c);
      pIVar2 = (Integer *)Integer::operator>>=((Integer *)&local_5c,1);
      Integer::Integer((Integer *)&local_3c,pIVar2);
      uVar4 = 0;
      memset(local_58,0,local_5c << 2);
      operator_delete__(local_58,uVar4 & 0xffffff00);
    }
    pMVar3 = (ModularArithmetic *)Integer::operator=((Integer *)(this + 0x2c),(Integer *)&local_3c);
    uVar4 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar4 & 0xffffff00);
    if (cVar1 != '\0') {
      uVar4 = 0;
      memset(local_28,0,local_2c << 2);
      operator_delete__(local_28,uVar4 & 0xffffff00);
    }
    return pMVar3;
  }
  DivideByPower2Mod(*(uint **)(this + 0x20),*(uint **)(param_1 + 4),1,*(uint **)(this + 0x10),
                    *(uint *)param_1);
  return this + 0x1c;
}
```
