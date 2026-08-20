# PeekData

`_ZN5yaSSL3SSL8PeekDataERNS_4DataE`

`yaSSL::SSL::PeekData(yaSSL::Data&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874fa70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874fa70  _ZN5yaSSL3SSL8PeekDataERNS_4DataE
#           yaSSL::SSL::PeekData(yaSSL::Data&)
# range [0x0874fa70, 0x0874fbba]
0874fa70 +0x000:  push   %ebp
0874fa71 +0x001:  mov    %esp,%ebp
0874fa73 +0x003:  push   %edi
0874fa74 +0x004:  push   %esi
0874fa75 +0x005:  push   %ebx
0874fa76 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874fa7b +0x00b:  add    $0xc1d11d,%ebx
0874fa81 +0x011:  sub    $0x3c,%esp
0874fa84 +0x014:  mov    0x8(%ebp),%edi
0874fa87 +0x017:  mov    0xc(%ebp),%esi
0874fa8a +0x01a:  mov    %edi,(%esp)
0874fa8d +0x01d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874fa92 +0x022:  test   %eax,%eax
0874fa94 +0x024:  je     0874faa0 <+0x30>
0874fa96 +0x026:  add    $0x3c,%esp
0874fa99 +0x029:  pop    %ebx
0874fa9a +0x02a:  pop    %esi
0874fa9b +0x02b:  pop    %edi
0874fa9c +0x02c:  pop    %ebp
0874fa9d +0x02d:  ret
0874fa9e +0x02e:  xchg   %ax,%ax
0874faa0 +0x030:  mov    (%esi),%eax
0874faa2 +0x032:  mov    %esi,(%esp)
0874faa5 +0x035:  call   *0x10(%eax)
0874faa8 +0x038:  lea    0x9c0(%edi),%edx
0874faae +0x03e:  mov    %edx,(%esp)
0874fab1 +0x041:  mov    %edx,-0x2c(%ebp)
0874fab4 +0x044:  movzwl %ax,%ecx
0874fab7 +0x047:  mov    %ecx,-0x30(%ebp)
0874faba +0x04a:  call   0874e920 <_ZNK5yaSSL7Buffers7getDataEv>  ; yaSSL::Buffers::getData() const
0874fabf +0x04f:  mov    0x8(%eax),%eax
0874fac2 +0x052:  movl   $0x0,0x4(%esp)
0874faca +0x05a:  mov    %esi,(%esp)
0874facd +0x05d:  mov    %eax,-0x1c(%ebp)
0874fad0 +0x060:  call   08746cb0 <_ZN5yaSSL4Data10set_lengthEt>  ; yaSSL::Data::set_length(unsigned short)
0874fad5 +0x065:  mov    %edi,(%esp)
0874fad8 +0x068:  call   0874fa10 <_ZN5yaSSL3SSL12bufferedDataEv>  ; yaSSL::SSL::bufferedData()
0874fadd +0x06d:  mov    -0x30(%ebp),%ecx
0874fae0 +0x070:  mov    -0x2c(%ebp),%edx
0874fae3 +0x073:  mov    %edx,(%esp)
0874fae6 +0x076:  cmp    %eax,%ecx
0874fae8 +0x078:  cmovbe %ecx,%eax
0874faeb +0x07b:  mov    %eax,-0x24(%ebp)
0874faee +0x07e:  call   0874e940 <_ZN5yaSSL7Buffers7useDataEv>  ; yaSSL::Buffers::useData()
0874faf3 +0x083:  mov    (%eax),%edi
0874faf5 +0x085:  mov    -0x1c(%ebp),%eax
0874faf8 +0x088:  test   %eax,%eax
0874fafa +0x08a:  jne    0874fb09 <+0x99>
0874fafc +0x08c:  jmp    0874fa96 <+0x26>
0874fafe +0x08e:  xchg   %ax,%ax
0874fb00 +0x090:  subl   $0x1,-0x1c(%ebp)
0874fb04 +0x094:  mov    0x4(%edi),%edi
0874fb07 +0x097:  je     0874fa96 <+0x26>
0874fb09 +0x099:  mov    0x8(%edi),%eax
0874fb0c +0x09c:  mov    %eax,(%esp)
0874fb0f +0x09f:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0874fb14 +0x0a4:  mov    %eax,%edx
0874fb16 +0x0a6:  mov    (%esi),%eax
0874fb18 +0x0a8:  mov    %edx,-0x2c(%ebp)
0874fb1b +0x0ab:  mov    %esi,(%esp)
0874fb1e +0x0ae:  call   *0x10(%eax)
0874fb21 +0x0b1:  mov    -0x24(%ebp),%ecx
0874fb24 +0x0b4:  mov    -0x2c(%ebp),%edx
0874fb27 +0x0b7:  movzwl %ax,%eax
0874fb2a +0x0ba:  sub    %eax,%ecx
0874fb2c +0x0bc:  mov    0x8(%edi),%eax
0874fb2f +0x0bf:  cmp    %edx,%ecx
0874fb31 +0x0c1:  cmovbe %ecx,%edx
0874fb34 +0x0c4:  mov    %edx,-0x20(%ebp)
0874fb37 +0x0c7:  mov    %eax,(%esp)
0874fb3a +0x0ca:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0874fb3f +0x0cf:  mov    %esi,(%esp)
0874fb42 +0x0d2:  mov    %eax,-0x2c(%ebp)
0874fb45 +0x0d5:  call   08746cc0 <_ZN5yaSSL4Data10set_bufferEv>  ; yaSSL::Data::set_buffer()
0874fb4a +0x0da:  mov    %eax,-0x28(%ebp)
0874fb4d +0x0dd:  mov    (%esi),%eax
0874fb4f +0x0df:  mov    %esi,(%esp)
0874fb52 +0x0e2:  call   *0x10(%eax)
0874fb55 +0x0e5:  mov    -0x20(%ebp),%ecx
0874fb58 +0x0e8:  mov    %ecx,0x8(%esp)
0874fb5c +0x0ec:  movzwl %ax,%eax
0874fb5f +0x0ef:  add    -0x28(%ebp),%eax
0874fb62 +0x0f2:  mov    %eax,0x4(%esp)
0874fb66 +0x0f6:  mov    0x8(%edi),%eax
0874fb69 +0x0f9:  mov    %eax,(%esp)
0874fb6c +0x0fc:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874fb71 +0x101:  mov    (%esi),%eax
0874fb73 +0x103:  mov    %esi,(%esp)
0874fb76 +0x106:  call   *0x10(%eax)
0874fb79 +0x109:  mov    %esi,(%esp)
0874fb7c +0x10c:  add    -0x20(%ebp),%ax
0874fb80 +0x110:  movzwl %ax,%eax
0874fb83 +0x113:  mov    %eax,0x4(%esp)
0874fb87 +0x117:  call   08746cb0 <_ZN5yaSSL4Data10set_lengthEt>  ; yaSSL::Data::set_length(unsigned short)
0874fb8c +0x11c:  mov    -0x2c(%ebp),%edx
0874fb8f +0x11f:  mov    %edx,0x4(%esp)
0874fb93 +0x123:  mov    0x8(%edi),%eax
0874fb96 +0x126:  mov    %eax,(%esp)
0874fb99 +0x129:  call   08796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>  ; yaSSL::input_buffer::set_current(unsigned int)
0874fb9e +0x12e:  mov    (%esi),%eax
0874fba0 +0x130:  mov    %esi,(%esp)
0874fba3 +0x133:  call   *0x10(%eax)
0874fba6 +0x136:  movzwl %ax,%eax
0874fba9 +0x139:  cmp    -0x24(%ebp),%eax
0874fbac +0x13c:  jne    0874fb00 <+0x90>
0874fbb2 +0x142:  add    $0x3c,%esp
0874fbb5 +0x145:  pop    %ebx
0874fbb6 +0x146:  pop    %esi
0874fbb7 +0x147:  pop    %edi
0874fbb8 +0x148:  pop    %ebp
0874fbb9 +0x149:  ret
0874fbba +0x14a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::PeekData @ 0x874fa70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::PeekData(yaSSL::Data&) */

void __thiscall yaSSL::SSL::PeekData(SSL *this,Data *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  short local_24;
  
  iVar3 = GetError(this);
  if (iVar3 == 0) {
    uVar4 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    iVar3 = Buffers::getData((Buffers *)(this + 0x9c0));
    iVar3 = *(int *)(iVar3 + 8);
    yaSSL::Data::set_length(param_1,0);
    uVar5 = bufferedData(this);
    if ((uVar4 & 0xffff) <= uVar5) {
      uVar5 = uVar4 & 0xffff;
    }
    piVar6 = (int *)Buffers::useData((Buffers *)(this + 0x9c0));
    iVar1 = *piVar6;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      uVar4 = input_buffer::get_remaining(*(input_buffer **)(iVar1 + 8));
      uVar7 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      uVar7 = uVar5 - (uVar7 & 0xffff);
      if (uVar7 <= uVar4) {
        uVar4 = uVar7;
      }
      uVar7 = input_buffer::get_current(*(input_buffer **)(iVar1 + 8));
      iVar8 = yaSSL::Data::set_buffer(param_1);
      uVar9 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      input_buffer::read(*(input_buffer **)(iVar1 + 8),(uchar *)((uVar9 & 0xffff) + iVar8),uVar4);
      sVar2 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      local_24 = (short)uVar4;
      yaSSL::Data::set_length(param_1,sVar2 + local_24);
      input_buffer::set_current(*(input_buffer **)(iVar1 + 8),uVar7);
      uVar4 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
      if ((uVar4 & 0xffff) == uVar5) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}
```
