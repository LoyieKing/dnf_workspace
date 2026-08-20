# EncodeDSA_Signature

`_ZN8TaoCrypt19EncodeDSA_SignatureERKNS_7IntegerES2_Ph`

`TaoCrypt::EncodeDSA_Signature(TaoCrypt::Integer const&, TaoCrypt::Integer const&, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087545b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087545b0  _ZN8TaoCrypt19EncodeDSA_SignatureERKNS_7IntegerES2_Ph
#           TaoCrypt::EncodeDSA_Signature(TaoCrypt::Integer const&, TaoCrypt::Integer const&, unsigned char*)
# range [0x087545b0, 0x087546fa]
087545b0 +0x000:  push   %ebp
087545b1 +0x001:  mov    %esp,%ebp
087545b3 +0x003:  push   %edi
087545b4 +0x004:  push   %esi
087545b5 +0x005:  push   %ebx
087545b6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087545bb +0x00b:  add    $0xc185dd,%ebx
087545c1 +0x011:  sub    $0x5c,%esp
087545c4 +0x014:  mov    0x8(%ebp),%eax
087545c7 +0x017:  mov    0x10(%ebp),%esi
087545ca +0x01a:  mov    %eax,(%esp)
087545cd +0x01d:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
087545d2 +0x022:  mov    0xc(%ebp),%edx
087545d5 +0x025:  mov    %edx,(%esp)
087545d8 +0x028:  mov    %eax,-0x3c(%ebp)
087545db +0x02b:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
087545e0 +0x030:  lea    -0x23(%ebp),%ecx
087545e3 +0x033:  mov    %ecx,-0x50(%ebp)
087545e6 +0x036:  movb   $0x2,-0x23(%ebp)
087545ea +0x03a:  movb   $0x2,-0x29(%ebp)
087545ee +0x03e:  mov    %eax,%edi
087545f0 +0x040:  lea    -0x22(%ebp),%eax
087545f3 +0x043:  mov    %eax,0x4(%esp)
087545f7 +0x047:  mov    -0x3c(%ebp),%eax
087545fa +0x04a:  mov    %eax,(%esp)
087545fd +0x04d:  call   087544e0 <_ZN8TaoCrypt9SetLengthEjPh>  ; TaoCrypt::SetLength(unsigned int, unsigned char*)
08754602 +0x052:  lea    -0x29(%ebp),%edx
08754605 +0x055:  mov    %edx,-0x4c(%ebp)
08754608 +0x058:  mov    %edi,(%esp)
0875460b +0x05b:  add    $0x1,%eax
0875460e +0x05e:  mov    %eax,-0x48(%ebp)
08754611 +0x061:  lea    -0x28(%ebp),%eax
08754614 +0x064:  mov    %eax,0x4(%esp)
08754618 +0x068:  call   087544e0 <_ZN8TaoCrypt9SetLengthEjPh>  ; TaoCrypt::SetLength(unsigned int, unsigned char*)
0875461d +0x06d:  lea    -0x1d(%ebp),%edx
08754620 +0x070:  mov    %edx,0x4(%esp)
08754624 +0x074:  mov    %edx,-0x54(%ebp)
08754627 +0x077:  add    $0x1,%eax
0875462a +0x07a:  mov    %eax,-0x44(%ebp)
0875462d +0x07d:  mov    -0x3c(%ebp),%eax
08754630 +0x080:  lea    (%edi,%eax,1),%eax
08754633 +0x083:  add    -0x48(%ebp),%eax
08754636 +0x086:  add    -0x44(%ebp),%eax
08754639 +0x089:  mov    %eax,(%esp)
0875463c +0x08c:  call   08754570 <_ZN8TaoCrypt11SetSequenceEjPh>  ; TaoCrypt::SetSequence(unsigned int, unsigned char*)
08754641 +0x091:  mov    -0x54(%ebp),%edx
08754644 +0x094:  mov    %esi,(%esp)
08754647 +0x097:  mov    %edx,0x4(%esp)
0875464b +0x09b:  mov    %eax,-0x40(%ebp)
0875464e +0x09e:  mov    %eax,0x8(%esp)
08754652 +0x0a2:  call   0807d8a0 <_init+0x198>
08754657 +0x0a7:  mov    -0x40(%ebp),%eax
0875465a +0x0aa:  mov    -0x48(%ebp),%edx
0875465d +0x0ad:  mov    -0x50(%ebp),%ecx
08754660 +0x0b0:  lea    (%esi,%eax,1),%eax
08754663 +0x0b3:  mov    %edx,0x8(%esp)
08754667 +0x0b7:  mov    %ecx,0x4(%esp)
0875466b +0x0bb:  mov    %eax,(%esp)
0875466e +0x0be:  call   0807d8a0 <_init+0x198>
08754673 +0x0c3:  mov    -0x48(%ebp),%edx
08754676 +0x0c6:  add    -0x40(%ebp),%edx
08754679 +0x0c9:  mov    -0x3c(%ebp),%ecx
0875467c +0x0cc:  movl   $0x0,0xc(%esp)
08754684 +0x0d4:  lea    (%esi,%edx,1),%eax
08754687 +0x0d7:  mov    %eax,0x4(%esp)
0875468b +0x0db:  mov    0x8(%ebp),%eax
0875468e +0x0de:  mov    %ecx,0x8(%esp)
08754692 +0x0e2:  mov    %edx,-0x54(%ebp)
08754695 +0x0e5:  mov    %eax,(%esp)
08754698 +0x0e8:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
0875469d +0x0ed:  mov    -0x44(%ebp),%ecx
087546a0 +0x0f0:  mov    -0x54(%ebp),%edx
087546a3 +0x0f3:  add    -0x3c(%ebp),%edx
087546a6 +0x0f6:  mov    %ecx,0x8(%esp)
087546aa +0x0fa:  mov    -0x4c(%ebp),%ecx
087546ad +0x0fd:  lea    (%esi,%edx,1),%eax
087546b0 +0x100:  mov    %edx,-0x54(%ebp)
087546b3 +0x103:  mov    %eax,(%esp)
087546b6 +0x106:  mov    %ecx,0x4(%esp)
087546ba +0x10a:  call   0807d8a0 <_init+0x198>
087546bf +0x10f:  mov    -0x54(%ebp),%edx
087546c2 +0x112:  add    -0x44(%ebp),%edx
087546c5 +0x115:  mov    0xc(%ebp),%eax
087546c8 +0x118:  mov    %edi,0x8(%esp)
087546cc +0x11c:  add    %edx,%esi
087546ce +0x11e:  mov    %esi,0x4(%esp)
087546d2 +0x122:  mov    %edx,-0x54(%ebp)
087546d5 +0x125:  movl   $0x0,0xc(%esp)
087546dd +0x12d:  mov    %eax,(%esp)
087546e0 +0x130:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
087546e5 +0x135:  mov    -0x54(%ebp),%edx
087546e8 +0x138:  add    $0x5c,%esp
087546eb +0x13b:  pop    %ebx
087546ec +0x13c:  pop    %esi
087546ed +0x13d:  lea    (%edx,%edi,1),%eax
087546f0 +0x140:  pop    %edi
087546f1 +0x141:  pop    %ebp
087546f2 +0x142:  ret
087546f3 +0x143:  nop
087546f4 +0x144:  lea    0x0(%esi),%esi
087546fa +0x14a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::EncodeDSA_Signature @ 0x87545b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::EncodeDSA_Signature(TaoCrypt::Integer const&, TaoCrypt::Integer const&, unsigned char*)
    */

int TaoCrypt::EncodeDSA_Signature(Integer *param_1,Integer *param_2,uchar *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  undefined1 local_2d;
  uchar local_2c [5];
  undefined1 local_27;
  uchar local_26 [5];
  uchar local_21 [13];
  undefined4 uStack_14;
  
  uStack_14 = 0x87545bb;
  uVar1 = Integer::ByteCount(param_1);
  uVar2 = Integer::ByteCount(param_2);
  local_27 = 2;
  local_2d = 2;
  iVar3 = SetLength(uVar1,local_26);
  __n = iVar3 + 1;
  iVar3 = SetLength(uVar2,local_2c);
  __n_00 = iVar3 + 1;
  __n_01 = SetSequence(uVar2 + uVar1 + __n + __n_00,local_21);
  memcpy(param_3,local_21,__n_01);
  memcpy(param_3 + __n_01,&local_27,__n);
  Integer::Encode(param_1,param_3 + __n + __n_01,uVar1,0);
  iVar3 = __n + __n_01 + uVar1;
  memcpy(param_3 + iVar3,&local_2d,__n_00);
  iVar3 = iVar3 + __n_00;
  Integer::Encode(param_2,param_3 + iVar3,uVar2,0);
  return iVar3 + uVar2;
}
```
