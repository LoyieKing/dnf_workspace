# Process

`_ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::HandShakeHeader::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x0874beb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874beb0  _ZN5yaSSL15HandShakeHeader7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::HandShakeHeader::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x0874beb0, 0x0874c01a]
0874beb0 +0x000:  push   %ebp
0874beb1 +0x001:  mov    %esp,%ebp
0874beb3 +0x003:  push   %edi
0874beb4 +0x004:  push   %esi
0874beb5 +0x005:  push   %ebx
0874beb6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874bebb +0x00b:  add    $0xc20cdd,%ebx
0874bec1 +0x011:  sub    $0x2c,%esp
0874bec4 +0x014:  mov    0x10(%ebp),%esi
0874bec7 +0x017:  mov    0x8(%ebp),%edi
0874beca +0x01a:  mov    %esi,(%esp)
0874becd +0x01d:  mov    %edi,0x4(%esp)
0874bed1 +0x021:  call   0874f8d0 <_ZN5yaSSL3SSL11verifyStateERKNS_15HandShakeHeaderE>  ; yaSSL::SSL::verifyState(yaSSL::HandShakeHeader const&)
0874bed6 +0x026:  mov    %esi,(%esp)
0874bed9 +0x029:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874bede +0x02e:  test   %eax,%eax
0874bee0 +0x030:  je     0874bef0 <+0x40>
0874bee2 +0x032:  add    $0x2c,%esp
0874bee5 +0x035:  pop    %ebx
0874bee6 +0x036:  pop    %esi
0874bee7 +0x037:  pop    %edi
0874bee8 +0x038:  pop    %ebp
0874bee9 +0x039:  ret
0874beea +0x03a:  lea    0x0(%esi),%esi
0874bef0 +0x040:  mov    %esi,(%esp)
0874bef3 +0x043:  call   08751180 <_ZNK5yaSSL3SSL10getFactoryEv>  ; yaSSL::SSL::getFactory() const
0874bef8 +0x048:  mov    %eax,(%esp)
0874befb +0x04b:  call   0874df90 <_ZNK5yaSSL10sslFactory12getHandShakeEv>  ; yaSSL::sslFactory::getHandShake() const
0874bf00 +0x050:  mov    0x4(%edi),%ecx
0874bf03 +0x053:  mov    (%eax),%edx
0874bf05 +0x055:  mov    0x4(%eax),%eax
0874bf08 +0x058:  cmp    %eax,%edx
0874bf0a +0x05a:  jne    0874bf23 <+0x73>
0874bf0c +0x05c:  jmp    0874bff8 <+0x148>
0874bf11 +0x061:  lea    0x0(%esi,%eiz,1),%esi
0874bf18 +0x068:  add    $0x8,%edx
0874bf1b +0x06b:  cmp    %edx,%eax
0874bf1d +0x06d:  je     0874bff8 <+0x148>
0874bf23 +0x073:  cmp    (%edx),%ecx
0874bf25 +0x075:  jne    0874bf18 <+0x68>
0874bf27 +0x077:  call   *0x4(%edx)
0874bf2a +0x07a:  test   %eax,%eax
0874bf2c +0x07c:  mov    %eax,-0x1c(%ebp)
0874bf2f +0x07f:  nop
0874bf30 +0x080:  je     0874bff8 <+0x148>
0874bf36 +0x086:  add    $0x8,%edi
0874bf39 +0x089:  mov    %edi,(%esp)
0874bf3c +0x08c:  call   0874dd60 <_ZN5yaSSL7c24to32EPKh>  ; yaSSL::c24to32(unsigned char const*)
0874bf41 +0x091:  mov    %eax,%edi
0874bf43 +0x093:  mov    0xc(%ebp),%eax
0874bf46 +0x096:  mov    %eax,(%esp)
0874bf49 +0x099:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0874bf4e +0x09e:  cmp    %eax,%edi
0874bf50 +0x0a0:  jbe    0874bf88 <+0xd8>
0874bf52 +0x0a2:  movl   $0x6d,0x4(%esp)
0874bf5a +0x0aa:  mov    %esi,(%esp)
0874bf5d +0x0ad:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874bf62 +0x0b2:  mov    -0x1c(%ebp),%edx
0874bf65 +0x0b5:  mov    (%edx),%eax
0874bf67 +0x0b7:  mov    %edx,(%esp)
0874bf6a +0x0ba:  call   *0x10(%eax)
0874bf6d +0x0bd:  mov    -0x1c(%ebp),%edx
0874bf70 +0x0c0:  movb   $0x0,0x4(%esp)
0874bf75 +0x0c5:  mov    %edx,(%esp)
0874bf78 +0x0c8:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874bf7d +0x0cd:  add    $0x2c,%esp
0874bf80 +0x0d0:  pop    %ebx
0874bf81 +0x0d1:  pop    %esi
0874bf82 +0x0d2:  pop    %edi
0874bf83 +0x0d3:  pop    %ebp
0874bf84 +0x0d4:  ret
0874bf85 +0x0d5:  lea    0x0(%esi),%esi
0874bf88 +0x0d8:  mov    0xc(%ebp),%eax
0874bf8b +0x0db:  mov    %edi,0x8(%esp)
0874bf8f +0x0df:  mov    %esi,(%esp)
0874bf92 +0x0e2:  mov    %eax,0x4(%esp)
0874bf96 +0x0e6:  call   0879ce10 <_ZN5yaSSL13hashHandShakeERNS_3SSLERKNS_12input_bufferEj>  ; yaSSL::hashHandShake(yaSSL::SSL&, yaSSL::input_buffer const&, unsigned int)
0874bf9b +0x0eb:  mov    -0x1c(%ebp),%edx
0874bf9e +0x0ee:  mov    %edi,0x4(%esp)
0874bfa2 +0x0f2:  mov    %edx,(%esp)
0874bfa5 +0x0f5:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
0874bfaa +0x0fa:  mov    0xc(%ebp),%edx
0874bfad +0x0fd:  mov    -0x1c(%ebp),%eax
0874bfb0 +0x100:  mov    %edx,(%esp)
0874bfb3 +0x103:  mov    %eax,0x4(%esp)
0874bfb7 +0x107:  call   08746cd0 <_ZN5yaSSLrsERNS_12input_bufferERNS_13HandShakeBaseE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::HandShakeBase&)
0874bfbc +0x10c:  mov    -0x1c(%ebp),%edx
0874bfbf +0x10f:  mov    (%edx),%eax
0874bfc1 +0x111:  mov    0xc(%ebp),%edx
0874bfc4 +0x114:  mov    %esi,0x8(%esp)
0874bfc8 +0x118:  mov    %edx,0x4(%esp)
0874bfcc +0x11c:  mov    -0x1c(%ebp),%edx
0874bfcf +0x11f:  mov    %edx,(%esp)
0874bfd2 +0x122:  call   *0xc(%eax)
0874bfd5 +0x125:  mov    -0x1c(%ebp),%edx
0874bfd8 +0x128:  mov    (%edx),%eax
0874bfda +0x12a:  mov    %edx,(%esp)
0874bfdd +0x12d:  call   *0x10(%eax)
0874bfe0 +0x130:  mov    -0x1c(%ebp),%eax
0874bfe3 +0x133:  movb   $0x0,0x4(%esp)
0874bfe8 +0x138:  mov    %eax,(%esp)
0874bfeb +0x13b:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0874bff0 +0x140:  add    $0x2c,%esp
0874bff3 +0x143:  pop    %ebx
0874bff4 +0x144:  pop    %esi
0874bff5 +0x145:  pop    %edi
0874bff6 +0x146:  pop    %ebp
0874bff7 +0x147:  ret
0874bff8 +0x148:  movl   $0x67,0x4(%esp)
0874c000 +0x150:  mov    %esi,(%esp)
0874c003 +0x153:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874c008 +0x158:  movl   $0x0,-0x1c(%ebp)
0874c00f +0x15f:  jmp    0874bf6d <+0xbd>
0874c014 +0x164:  lea    0x0(%esi),%esi
0874c01a +0x16a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::Process @ 0x874beb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::HandShakeHeader::Process(HandShakeHeader *this,input_buffer *param_1,SSL *param_2)

{
  int iVar1;
  sslFactory *this_00;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  HandShakeBase *local_20;
  
  SSL::verifyState(param_2,this);
  iVar1 = SSL::GetError(param_2);
  if (iVar1 != 0) {
    return;
  }
  this_00 = (sslFactory *)SSL::getFactory();
  puVar2 = (undefined4 *)sslFactory::getHandShake(this_00);
  piVar5 = (int *)*puVar2;
  do {
    if (piVar5 == (int *)puVar2[1]) {
LAB_0874bff8:
      uVar3 = 0;
      SSL::SetError(param_2,0x67);
      local_20 = (HandShakeBase *)0x0;
LAB_0874bf6d:
      operator_delete(local_20,uVar3 & 0xffffff00);
      return;
    }
    if (*(int *)(this + 4) == *piVar5) {
      local_20 = (HandShakeBase *)(*(code *)piVar5[1])();
      if (local_20 != (HandShakeBase *)0x0) {
        uVar3 = c24to32((uchar *)(this + 8));
        uVar4 = input_buffer::get_remaining(param_1);
        if (uVar3 <= uVar4) {
          hashHandShake(param_2,param_1,uVar3);
          HandShakeBase::set_length(local_20,uVar3);
          yaSSL::operator>>(param_1,local_20);
          (**(code **)(*(int *)local_20 + 0xc))(local_20,param_1,param_2);
          (**(code **)(*(int *)local_20 + 0x10))(local_20);
          operator_delete(local_20,(uint)param_1 & 0xffffff00);
          return;
        }
        uVar3 = 0;
        SSL::SetError(param_2,0x6d);
        (**(code **)(*(int *)local_20 + 0x10))(local_20);
        goto LAB_0874bf6d;
      }
      goto LAB_0874bff8;
    }
    piVar5 = piVar5 + 2;
  } while( true );
}
```
