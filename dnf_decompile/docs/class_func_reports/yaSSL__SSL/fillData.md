# fillData

`_ZN5yaSSL3SSL8fillDataERNS_4DataE`

`yaSSL::SSL::fillData(yaSSL::Data&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08750a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750a30  _ZN5yaSSL3SSL8fillDataERNS_4DataE
#           yaSSL::SSL::fillData(yaSSL::Data&)
# range [0x08750a30, 0x08750c1a]
08750a30 +0x000:  push   %ebp
08750a31 +0x001:  mov    %esp,%ebp
08750a33 +0x003:  push   %edi
08750a34 +0x004:  push   %esi
08750a35 +0x005:  push   %ebx
08750a36 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08750a3b +0x00b:  add    $0xc1c15d,%ebx
08750a41 +0x011:  sub    $0x3c,%esp
08750a44 +0x014:  mov    0x8(%ebp),%eax
08750a47 +0x017:  mov    0xc(%ebp),%esi
08750a4a +0x01a:  mov    %eax,(%esp)
08750a4d +0x01d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
08750a52 +0x022:  test   %eax,%eax
08750a54 +0x024:  je     08750a60 <+0x30>
08750a56 +0x026:  add    $0x3c,%esp
08750a59 +0x029:  pop    %ebx
08750a5a +0x02a:  pop    %esi
08750a5b +0x02b:  pop    %edi
08750a5c +0x02c:  pop    %ebp
08750a5d +0x02d:  ret
08750a5e +0x02e:  xchg   %ax,%ax
08750a60 +0x030:  mov    (%esi),%eax
08750a62 +0x032:  mov    %esi,(%esp)
08750a65 +0x035:  call   *0x10(%eax)
08750a68 +0x038:  mov    0x8(%ebp),%edx
08750a6b +0x03b:  add    $0x9c0,%edx
08750a71 +0x041:  mov    %edx,-0x30(%ebp)
08750a74 +0x044:  movzwl %ax,%edi
08750a77 +0x047:  mov    %edx,(%esp)
08750a7a +0x04a:  call   0874e920 <_ZNK5yaSSL7Buffers7getDataEv>  ; yaSSL::Buffers::getData() const
08750a7f +0x04f:  mov    0x8(%eax),%eax
08750a82 +0x052:  movl   $0x0,0x4(%esp)
08750a8a +0x05a:  mov    %esi,(%esp)
08750a8d +0x05d:  mov    %eax,-0x34(%ebp)
08750a90 +0x060:  call   08746cb0 <_ZN5yaSSL4Data10set_lengthEt>  ; yaSSL::Data::set_length(unsigned short)
08750a95 +0x065:  mov    0x8(%ebp),%eax
08750a98 +0x068:  mov    %eax,(%esp)
08750a9b +0x06b:  call   0874fa10 <_ZN5yaSSL3SSL12bufferedDataEv>  ; yaSSL::SSL::bufferedData()
08750aa0 +0x070:  cmp    %eax,%edi
08750aa2 +0x072:  cmovbe %edi,%eax
08750aa5 +0x075:  mov    -0x34(%ebp),%edi
08750aa8 +0x078:  mov    %eax,-0x28(%ebp)
08750aab +0x07b:  test   %edi,%edi
08750aad +0x07d:  je     08750be0 <+0x1b0>
08750ab3 +0x083:  movl   $0x0,-0x24(%ebp)
08750aba +0x08a:  jmp    08750ae4 <+0xb4>
08750abc +0x08c:  lea    0x0(%esi,%eiz,1),%esi
08750ac0 +0x090:  mov    (%esi),%eax
08750ac2 +0x092:  mov    %esi,(%esp)
08750ac5 +0x095:  call   *0x10(%eax)
08750ac8 +0x098:  movzwl %ax,%eax
08750acb +0x09b:  cmp    -0x28(%ebp),%eax
08750ace +0x09e:  je     08750be0 <+0x1b0>
08750ad4 +0x0a4:  addl   $0x1,-0x24(%ebp)
08750ad8 +0x0a8:  mov    -0x34(%ebp),%eax
08750adb +0x0ab:  cmp    %eax,-0x24(%ebp)
08750ade +0x0ae:  jae    08750be0 <+0x1b0>
08750ae4 +0x0b4:  mov    -0x30(%ebp),%edx
08750ae7 +0x0b7:  xor    %edi,%edi
08750ae9 +0x0b9:  mov    %edx,(%esp)
08750aec +0x0bc:  call   0874e920 <_ZNK5yaSSL7Buffers7getDataEv>  ; yaSSL::Buffers::getData() const
08750af1 +0x0c1:  mov    (%eax),%eax
08750af3 +0x0c3:  test   %eax,%eax
08750af5 +0x0c5:  je     08750afa <+0xca>
08750af7 +0x0c7:  mov    0x8(%eax),%edi
08750afa +0x0ca:  mov    %edi,(%esp)
08750afd +0x0cd:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
08750b02 +0x0d2:  mov    %eax,-0x20(%ebp)
08750b05 +0x0d5:  mov    (%esi),%eax
08750b07 +0x0d7:  mov    %esi,(%esp)
08750b0a +0x0da:  call   *0x10(%eax)
08750b0d +0x0dd:  mov    -0x28(%ebp),%edx
08750b10 +0x0e0:  mov    %esi,(%esp)
08750b13 +0x0e3:  movzwl %ax,%eax
08750b16 +0x0e6:  sub    %eax,%edx
08750b18 +0x0e8:  mov    %edx,%eax
08750b1a +0x0ea:  cmp    -0x20(%ebp),%edx
08750b1d +0x0ed:  cmova  -0x20(%ebp),%eax
08750b21 +0x0f1:  mov    %eax,-0x1c(%ebp)
08750b24 +0x0f4:  call   08746cc0 <_ZN5yaSSL4Data10set_bufferEv>  ; yaSSL::Data::set_buffer()
08750b29 +0x0f9:  mov    %eax,-0x2c(%ebp)
08750b2c +0x0fc:  mov    (%esi),%eax
08750b2e +0x0fe:  mov    %esi,(%esp)
08750b31 +0x101:  call   *0x10(%eax)
08750b34 +0x104:  mov    -0x1c(%ebp),%edx
08750b37 +0x107:  mov    %edi,(%esp)
08750b3a +0x10a:  mov    %edx,0x8(%esp)
08750b3e +0x10e:  movzwl %ax,%eax
08750b41 +0x111:  add    -0x2c(%ebp),%eax
08750b44 +0x114:  mov    %eax,0x4(%esp)
08750b48 +0x118:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08750b4d +0x11d:  mov    (%esi),%eax
08750b4f +0x11f:  mov    %esi,(%esp)
08750b52 +0x122:  call   *0x10(%eax)
08750b55 +0x125:  mov    %esi,(%esp)
08750b58 +0x128:  add    -0x1c(%ebp),%ax
08750b5c +0x12c:  movzwl %ax,%eax
08750b5f +0x12f:  mov    %eax,0x4(%esp)
08750b63 +0x133:  call   08746cb0 <_ZN5yaSSL4Data10set_lengthEt>  ; yaSSL::Data::set_length(unsigned short)
08750b68 +0x138:  mov    -0x1c(%ebp),%eax
08750b6b +0x13b:  cmp    %eax,-0x20(%ebp)
08750b6e +0x13e:  jne    08750ac0 <+0x90>
08750b74 +0x144:  mov    -0x30(%ebp),%edx
08750b77 +0x147:  mov    %edx,(%esp)
08750b7a +0x14a:  call   0874e940 <_ZN5yaSSL7Buffers7useDataEv>  ; yaSSL::Buffers::useData()
08750b7f +0x14f:  mov    (%eax),%ecx
08750b81 +0x151:  test   %ecx,%ecx
08750b83 +0x153:  je     08750bac <+0x17c>
08750b85 +0x155:  cmp    0x4(%eax),%ecx
08750b88 +0x158:  je     08750c08 <+0x1d8>
08750b8a +0x15a:  mov    0x4(%ecx),%edx
08750b8d +0x15d:  mov    %edx,(%eax)
08750b8f +0x15f:  movl   $0x0,(%edx)
08750b95 +0x165:  mov    %eax,-0x38(%ebp)
08750b98 +0x168:  movb   $0x0,0x4(%esp)
08750b9d +0x16d:  mov    %ecx,(%esp)
08750ba0 +0x170:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08750ba5 +0x175:  mov    -0x38(%ebp),%eax
08750ba8 +0x178:  subl   $0x1,0x8(%eax)
08750bac +0x17c:  test   %edi,%edi
08750bae +0x17e:  je     08750bb8 <+0x188>
08750bb0 +0x180:  mov    %edi,(%esp)
08750bb3 +0x183:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08750bb8 +0x188:  movb   $0x0,0x4(%esp)
08750bbd +0x18d:  mov    %edi,(%esp)
08750bc0 +0x190:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08750bc5 +0x195:  mov    (%esi),%eax
08750bc7 +0x197:  mov    %esi,(%esp)
08750bca +0x19a:  call   *0x10(%eax)
08750bcd +0x19d:  movzwl %ax,%eax
08750bd0 +0x1a0:  cmp    -0x28(%ebp),%eax
08750bd3 +0x1a3:  jne    08750ad4 <+0xa4>
08750bd9 +0x1a9:  lea    0x0(%esi,%eiz,1),%esi
08750be0 +0x1b0:  mov    -0x30(%ebp),%edx
08750be3 +0x1b3:  mov    %edx,(%esp)
08750be6 +0x1b6:  call   0874e920 <_ZNK5yaSSL7Buffers7getDataEv>  ; yaSSL::Buffers::getData() const
08750beb +0x1bb:  mov    0x8(%eax),%ecx
08750bee +0x1be:  test   %ecx,%ecx
08750bf0 +0x1c0:  jne    08750a56 <+0x26>
08750bf6 +0x1c6:  mov    0x8(%ebp),%eax
08750bf9 +0x1c9:  movb   $0x0,0x9de(%eax)
08750c00 +0x1d0:  add    $0x3c,%esp
08750c03 +0x1d3:  pop    %ebx
08750c04 +0x1d4:  pop    %esi
08750c05 +0x1d5:  pop    %edi
08750c06 +0x1d6:  pop    %ebp
08750c07 +0x1d7:  ret
08750c08 +0x1d8:  movl   $0x0,0x4(%eax)
08750c0f +0x1df:  movl   $0x0,(%eax)
08750c15 +0x1e5:  jmp    08750b95 <+0x165>
08750c1a +0x1ea:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL::fillData @ 0x8750a30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::fillData(yaSSL::Data&) */

void __thiscall yaSSL::SSL::fillData(SSL *this,Data *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  Buffers *this_00;
  input_buffer *this_01;
  uint local_28;
  short local_20;
  
  iVar4 = GetError(this);
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    this_00 = (Buffers *)(this + 0x9c0);
    iVar4 = Buffers::getData(this_00);
    uVar1 = *(uint *)(iVar4 + 8);
    yaSSL::Data::set_length(param_1,0);
    uVar6 = bufferedData(this);
    if ((uVar5 & 0xffff) <= uVar6) {
      uVar6 = uVar5 & 0xffff;
    }
    if (uVar1 != 0) {
      local_28 = 0;
      do {
        this_01 = (input_buffer *)0x0;
        piVar7 = (int *)Buffers::getData(this_00);
        if (*piVar7 != 0) {
          this_01 = *(input_buffer **)(*piVar7 + 8);
        }
        uVar8 = input_buffer::get_remaining(this_01);
        uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        uVar5 = uVar6 - (uVar5 & 0xffff);
        if (uVar8 < uVar5) {
          uVar5 = uVar8;
        }
        iVar4 = yaSSL::Data::set_buffer(param_1);
        uVar9 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        input_buffer::read(this_01,(uchar *)((uVar9 & 0xffff) + iVar4),uVar5);
        sVar3 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        local_20 = (short)uVar5;
        uVar9 = (uint)(ushort)(sVar3 + local_20);
        yaSSL::Data::set_length(param_1,sVar3 + local_20);
        if (uVar8 == uVar5) {
          piVar7 = (int *)Buffers::useData(this_00);
          iVar4 = *piVar7;
          if (iVar4 != 0) {
            if (iVar4 == piVar7[1]) {
              piVar7[1] = 0;
              *piVar7 = 0;
            }
            else {
              puVar2 = *(undefined4 **)(iVar4 + 4);
              *piVar7 = (int)puVar2;
              *puVar2 = 0;
            }
            uVar9 = uVar9 & 0xffffff00;
            operator_delete__(iVar4,uVar9);
            piVar7[2] = piVar7[2] + -1;
          }
          if (this_01 != (input_buffer *)0x0) {
            input_buffer::~input_buffer(this_01);
          }
          operator_delete(this_01,uVar9 & 0xffffff00);
          uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        }
        else {
          uVar5 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
        }
      } while (((uVar5 & 0xffff) != uVar6) && (local_28 = local_28 + 1, local_28 < uVar1));
    }
    iVar4 = Buffers::getData(this_00);
    if (*(int *)(iVar4 + 8) == 0) {
      this[0x9de] = (SSL)0x0;
      return;
    }
  }
  return;
}
```
