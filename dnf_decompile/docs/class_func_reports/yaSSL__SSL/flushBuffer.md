# flushBuffer

`_ZN5yaSSL3SSL11flushBufferEv`

`yaSSL::SSL::flushBuffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08752a50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752a50  _ZN5yaSSL3SSL11flushBufferEv
#           yaSSL::SSL::flushBuffer()
# range [0x08752a50, 0x08752be9]
08752a50 +0x000:  push   %ebp
08752a51 +0x001:  mov    %esp,%ebp
08752a53 +0x003:  push   %edi
08752a54 +0x004:  push   %esi
08752a55 +0x005:  push   %ebx
08752a56 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08752a5b +0x00b:  add    $0xc1a13d,%ebx
08752a61 +0x011:  sub    $0x3c,%esp
08752a64 +0x014:  mov    0x8(%ebp),%eax
08752a67 +0x017:  mov    %eax,(%esp)
08752a6a +0x01a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
08752a6f +0x01f:  test   %eax,%eax
08752a71 +0x021:  je     08752a80 <+0x30>
08752a73 +0x023:  add    $0x3c,%esp
08752a76 +0x026:  pop    %ebx
08752a77 +0x027:  pop    %esi
08752a78 +0x028:  pop    %edi
08752a79 +0x029:  pop    %ebp
08752a7a +0x02a:  ret
08752a7b +0x02b:  nop
08752a7c +0x02c:  lea    0x0(%esi,%eiz,1),%esi
08752a80 +0x030:  mov    0x8(%ebp),%edi
08752a83 +0x033:  add    $0x9c0,%edi
08752a89 +0x039:  mov    %edi,(%esp)
08752a8c +0x03c:  call   0874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>  ; yaSSL::Buffers::getHandShake() const
08752a91 +0x041:  mov    %edi,(%esp)
08752a94 +0x044:  call   0874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>  ; yaSSL::Buffers::getHandShake() const
08752a99 +0x049:  mov    (%eax),%esi
08752a9b +0x04b:  xor    %eax,%eax
08752a9d +0x04d:  test   %esi,%esi
08752a9f +0x04f:  je     08752ac1 <+0x71>
08752aa1 +0x051:  mov    %edi,-0x2c(%ebp)
08752aa4 +0x054:  mov    %eax,%edi
08752aa6 +0x056:  xchg   %ax,%ax
08752aa8 +0x058:  mov    0x8(%esi),%eax
08752aab +0x05b:  mov    %eax,(%esp)
08752aae +0x05e:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
08752ab3 +0x063:  mov    0x4(%esi),%esi
08752ab6 +0x066:  add    %eax,%edi
08752ab8 +0x068:  test   %esi,%esi
08752aba +0x06a:  jne    08752aa8 <+0x58>
08752abc +0x06c:  mov    %edi,%eax
08752abe +0x06e:  mov    -0x2c(%ebp),%edi
08752ac1 +0x071:  mov    %eax,0x4(%esp)
08752ac5 +0x075:  lea    -0x24(%ebp),%eax
08752ac8 +0x078:  mov    %eax,-0x30(%ebp)
08752acb +0x07b:  mov    %eax,(%esp)
08752ace +0x07e:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
08752ad3 +0x083:  mov    %edi,(%esp)
08752ad6 +0x086:  call   0874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>  ; yaSSL::Buffers::getHandShake() const
08752adb +0x08b:  mov    0x8(%eax),%eax
08752ade +0x08e:  test   %eax,%eax
08752ae0 +0x090:  mov    %eax,-0x34(%ebp)
08752ae3 +0x093:  je     08752ba8 <+0x158>
08752ae9 +0x099:  movl   $0x0,-0x2c(%ebp)
08752af0 +0x0a0:  jmp    08752b3f <+0xef>
08752af2 +0x0a2:  lea    0x0(%esi),%esi
08752af8 +0x0a8:  mov    0x4(%edx),%ecx
08752afb +0x0ab:  mov    %ecx,(%eax)
08752afd +0x0ad:  movl   $0x0,(%ecx)
08752b03 +0x0b3:  mov    %eax,-0x38(%ebp)
08752b06 +0x0b6:  movb   $0x0,0x4(%esp)
08752b0b +0x0bb:  mov    %edx,(%esp)
08752b0e +0x0be:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752b13 +0x0c3:  mov    -0x38(%ebp),%eax
08752b16 +0x0c6:  subl   $0x1,0x8(%eax)
08752b1a +0x0ca:  test   %esi,%esi
08752b1c +0x0cc:  je     08752b26 <+0xd6>
08752b1e +0x0ce:  mov    %esi,(%esp)
08752b21 +0x0d1:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
08752b26 +0x0d6:  movb   $0x0,0x4(%esp)
08752b2b +0x0db:  mov    %esi,(%esp)
08752b2e +0x0de:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752b33 +0x0e3:  mov    -0x34(%ebp),%eax
08752b36 +0x0e6:  addl   $0x1,-0x2c(%ebp)
08752b3a +0x0ea:  cmp    %eax,-0x2c(%ebp)
08752b3d +0x0ed:  jae    08752ba8 <+0x158>
08752b3f +0x0ef:  mov    %edi,(%esp)
08752b42 +0x0f2:  xor    %esi,%esi
08752b44 +0x0f4:  call   0874e930 <_ZNK5yaSSL7Buffers12getHandShakeEv>  ; yaSSL::Buffers::getHandShake() const
08752b49 +0x0f9:  mov    (%eax),%eax
08752b4b +0x0fb:  test   %eax,%eax
08752b4d +0x0fd:  je     08752b52 <+0x102>
08752b4f +0x0ff:  mov    0x8(%eax),%esi
08752b52 +0x102:  mov    %esi,(%esp)
08752b55 +0x105:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
08752b5a +0x10a:  mov    %esi,(%esp)
08752b5d +0x10d:  mov    %eax,-0x38(%ebp)
08752b60 +0x110:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
08752b65 +0x115:  mov    -0x38(%ebp),%edx
08752b68 +0x118:  mov    %edx,0x8(%esp)
08752b6c +0x11c:  mov    %eax,0x4(%esp)
08752b70 +0x120:  mov    -0x30(%ebp),%eax
08752b73 +0x123:  mov    %eax,(%esp)
08752b76 +0x126:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08752b7b +0x12b:  mov    %edi,(%esp)
08752b7e +0x12e:  call   0874e950 <_ZN5yaSSL7Buffers12useHandShakeEv>  ; yaSSL::Buffers::useHandShake()
08752b83 +0x133:  mov    (%eax),%edx
08752b85 +0x135:  test   %edx,%edx
08752b87 +0x137:  je     08752b1a <+0xca>
08752b89 +0x139:  cmp    0x4(%eax),%edx
08752b8c +0x13c:  jne    08752af8 <+0xa8>
08752b92 +0x142:  movl   $0x0,0x4(%eax)
08752b99 +0x149:  movl   $0x0,(%eax)
08752b9f +0x14f:  jmp    08752b03 <+0xb3>
08752ba4 +0x154:  lea    0x0(%esi,%eiz,1),%esi
08752ba8 +0x158:  mov    -0x30(%ebp),%eax
08752bab +0x15b:  mov    %eax,(%esp)
08752bae +0x15e:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
08752bb3 +0x163:  mov    %eax,%esi
08752bb5 +0x165:  mov    -0x30(%ebp),%eax
08752bb8 +0x168:  mov    %eax,(%esp)
08752bbb +0x16b:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
08752bc0 +0x170:  mov    %esi,0x8(%esp)
08752bc4 +0x174:  mov    %eax,0x4(%esp)
08752bc8 +0x178:  mov    0x8(%ebp),%eax
08752bcb +0x17b:  mov    %eax,(%esp)
08752bce +0x17e:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
08752bd3 +0x183:  mov    -0x30(%ebp),%eax
08752bd6 +0x186:  mov    %eax,(%esp)
08752bd9 +0x189:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
08752bde +0x18e:  add    $0x3c,%esp
08752be1 +0x191:  pop    %ebx
08752be2 +0x192:  pop    %esi
08752be3 +0x193:  pop    %edi
08752be4 +0x194:  pop    %ebp
08752be5 +0x195:  ret
08752be6 +0x196:  lea    0x0(%esi),%esi
08752be9 +0x199:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::flushBuffer @ 0x8752a50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::flushBuffer() */

void __thiscall yaSSL::SSL::flushBuffer(SSL *this)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uchar *puVar7;
  output_buffer *this_00;
  Buffers *this_01;
  uint local_30;
  output_buffer local_28 [20];
  undefined4 uStack_14;
  
  uStack_14 = 0x8752a5b;
  iVar2 = GetError(this);
  if (iVar2 == 0) {
    this_01 = (Buffers *)(this + 0x9c0);
    Buffers::getHandShake(this_01);
    piVar3 = (int *)Buffers::getHandShake(this_01);
    iVar2 = *piVar3;
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 0;
      do {
        iVar5 = output_buffer::get_size(*(output_buffer **)(iVar2 + 8));
        iVar2 = *(int *)(iVar2 + 4);
        uVar4 = uVar4 + iVar5;
      } while (iVar2 != 0);
    }
    output_buffer::output_buffer(local_28,uVar4);
    iVar2 = Buffers::getHandShake(this_01);
    uVar4 = *(uint *)(iVar2 + 8);
    if (uVar4 != 0) {
      local_30 = 0;
      do {
        this_00 = (output_buffer *)0x0;
        piVar3 = (int *)Buffers::getHandShake(this_01);
        if (*piVar3 != 0) {
          this_00 = *(output_buffer **)(*piVar3 + 8);
        }
        uVar6 = output_buffer::get_size(this_00);
        puVar7 = (uchar *)output_buffer::get_buffer(this_00);
        output_buffer::write(local_28,puVar7,uVar6);
        piVar3 = (int *)Buffers::useHandShake(this_01);
        iVar2 = *piVar3;
        if (iVar2 != 0) {
          if (iVar2 == piVar3[1]) {
            piVar3[1] = 0;
            *piVar3 = 0;
          }
          else {
            puVar1 = *(undefined4 **)(iVar2 + 4);
            *piVar3 = (int)puVar1;
            *puVar1 = 0;
          }
          puVar7 = (uchar *)((uint)puVar7 & 0xffffff00);
          operator_delete__(iVar2,puVar7);
          piVar3[2] = piVar3[2] + -1;
        }
        if (this_00 != (output_buffer *)0x0) {
          output_buffer::~output_buffer(this_00);
        }
        operator_delete(this_00,(uint)puVar7 & 0xffffff00);
        local_30 = local_30 + 1;
      } while (local_30 < uVar4);
    }
    uVar4 = output_buffer::get_size(local_28);
    puVar7 = (uchar *)output_buffer::get_buffer(local_28);
    Send(this,puVar7,uVar4);
    output_buffer::~output_buffer(local_28);
    return;
  }
  return;
}
```
