# sendData

`_ZN5yaSSL8sendDataERNS_3SSLEPKvi`

`yaSSL::sendData(yaSSL::SSL&, void const*, int)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879faf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879faf0  _ZN5yaSSL8sendDataERNS_3SSLEPKvi
#           yaSSL::sendData(yaSSL::SSL&, void const*, int)
# range [0x0879faf0, 0x0879fd3b]
0879faf0 +0x000:  push   %ebp
0879faf1 +0x001:  mov    %esp,%ebp
0879faf3 +0x003:  push   %edi
0879faf4 +0x004:  push   %esi
0879faf5 +0x005:  push   %ebx
0879faf6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879fafb +0x00b:  add    $0xbcd09d,%ebx
0879fb01 +0x011:  sub    $0x6c,%esp
0879fb04 +0x014:  mov    0x8(%ebp),%eax
0879fb07 +0x017:  mov    %eax,(%esp)
0879fb0a +0x01a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879fb0f +0x01f:  cmp    $0x50,%eax
0879fb12 +0x022:  je     0879fd28 <+0x238>
0879fb18 +0x028:  mov    0x8(%ebp),%eax
0879fb1b +0x02b:  mov    %eax,(%esp)
0879fb1e +0x02e:  call   0874e0e0 <_ZN5yaSSL3SSL23verfiyHandShakeCompleteEv>  ; yaSSL::SSL::verfiyHandShakeComplete()
0879fb23 +0x033:  mov    0x8(%ebp),%edx
0879fb26 +0x036:  mov    %edx,(%esp)
0879fb29 +0x039:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879fb2e +0x03e:  mov    %eax,%edx
0879fb30 +0x040:  mov    $0xffffffff,%eax
0879fb35 +0x045:  test   %edx,%edx
0879fb37 +0x047:  jne    0879fcdc <+0x1ec>
0879fb3d +0x04d:  lea    -0x34(%ebp),%eax
0879fb40 +0x050:  mov    %eax,-0x50(%ebp)
0879fb43 +0x053:  mov    -0x420(%ebx),%eax
0879fb49 +0x059:  lea    -0x44(%ebp),%edx
0879fb4c +0x05c:  movl   $0x0,-0x4c(%ebp)
0879fb53 +0x063:  lea    -0x24(%ebp),%edi
0879fb56 +0x066:  mov    %edx,-0x54(%ebp)
0879fb59 +0x069:  add    $0x8,%eax
0879fb5c +0x06c:  mov    %eax,-0x58(%ebp)
0879fb5f +0x06f:  jmp    0879fc32 <+0x142>
0879fb64 +0x074:  lea    0x0(%esi,%eiz,1),%esi
0879fb68 +0x078:  mov    -0x50(%ebp),%eax
0879fb6b +0x07b:  mov    %esi,0x4(%esp)
0879fb6f +0x07f:  mov    %eax,0x8(%esp)
0879fb73 +0x083:  mov    0xc(%ebp),%eax
0879fb76 +0x086:  add    -0x4c(%ebp),%eax
0879fb79 +0x089:  mov    %eax,(%esp)
0879fb7c +0x08c:  call   0874f090 <_ZN5yaSSL8CompressEPKhiRNS_12input_bufferE>  ; yaSSL::Compress(unsigned char const*, int, yaSSL::input_buffer&)
0879fb81 +0x091:  cmp    $0xffffffff,%eax
0879fb84 +0x094:  je     0879fce8 <+0x1f8>
0879fb8a +0x09a:  mov    -0x50(%ebp),%eax
0879fb8d +0x09d:  mov    %eax,(%esp)
0879fb90 +0x0a0:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879fb95 +0x0a5:  mov    %eax,%edx
0879fb97 +0x0a7:  mov    -0x50(%ebp),%eax
0879fb9a +0x0aa:  mov    %edx,-0x5c(%ebp)
0879fb9d +0x0ad:  mov    %eax,(%esp)
0879fba0 +0x0b0:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
0879fba5 +0x0b5:  mov    -0x5c(%ebp),%edx
0879fba8 +0x0b8:  mov    %edx,0x8(%esp)
0879fbac +0x0bc:  mov    -0x54(%ebp),%edx
0879fbaf +0x0bf:  movzwl %ax,%eax
0879fbb2 +0x0c2:  mov    %eax,0x4(%esp)
0879fbb6 +0x0c6:  mov    %edx,(%esp)
0879fbb9 +0x0c9:  call   08746c60 <_ZN5yaSSL4Data7SetDataEtPKh>  ; yaSSL::Data::SetData(unsigned short, unsigned char const*)
0879fbbe +0x0ce:  mov    -0x54(%ebp),%edx
0879fbc1 +0x0d1:  mov    0x8(%ebp),%eax
0879fbc4 +0x0d4:  mov    %edx,(%esp)
0879fbc7 +0x0d7:  mov    %edi,%edx
0879fbc9 +0x0d9:  call   0879f580 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE>  ; yaSSL::(anonymous namespace)::buildMessage(yaSSL::SSL&, yaSSL::output_buffer&, yaSSL::Message const&)
0879fbce +0x0de:  mov    %edi,(%esp)
0879fbd1 +0x0e1:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879fbd6 +0x0e6:  mov    %edi,(%esp)
0879fbd9 +0x0e9:  mov    %eax,-0x5c(%ebp)
0879fbdc +0x0ec:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879fbe1 +0x0f1:  mov    -0x5c(%ebp),%edx
0879fbe4 +0x0f4:  mov    %edx,0x8(%esp)
0879fbe8 +0x0f8:  mov    %eax,0x4(%esp)
0879fbec +0x0fc:  mov    0x8(%ebp),%eax
0879fbef +0x0ff:  mov    %eax,(%esp)
0879fbf2 +0x102:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
0879fbf7 +0x107:  mov    0x8(%ebp),%edx
0879fbfa +0x10a:  mov    %edx,(%esp)
0879fbfd +0x10d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879fc02 +0x112:  test   %eax,%eax
0879fc04 +0x114:  jne    0879fcfb <+0x20b>
0879fc0a +0x11a:  add    %esi,-0x4c(%ebp)
0879fc0d +0x11d:  mov    0x10(%ebp),%eax
0879fc10 +0x120:  cmp    %eax,-0x4c(%ebp)
0879fc13 +0x123:  je     0879fc98 <+0x1a8>
0879fc19 +0x129:  mov    -0x58(%ebp),%edx
0879fc1c +0x12c:  mov    -0x50(%ebp),%eax
0879fc1f +0x12f:  mov    %edx,-0x44(%ebp)
0879fc22 +0x132:  mov    %eax,(%esp)
0879fc25 +0x135:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879fc2a +0x13a:  mov    %edi,(%esp)
0879fc2d +0x13d:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879fc32 +0x142:  mov    0x10(%ebp),%esi
0879fc35 +0x145:  mov    $0x4000,%eax
0879fc3a +0x14a:  sub    -0x4c(%ebp),%esi
0879fc3d +0x14d:  mov    %edi,(%esp)
0879fc40 +0x150:  cmp    $0x4000,%esi
0879fc46 +0x156:  cmovge %eax,%esi
0879fc49 +0x159:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
0879fc4e +0x15e:  mov    -0x50(%ebp),%edx
0879fc51 +0x161:  mov    %edx,(%esp)
0879fc54 +0x164:  call   08796d00 <_ZN5yaSSL12input_bufferC1Ev>  ; yaSSL::input_buffer::input_buffer()
0879fc59 +0x169:  mov    -0x54(%ebp),%eax
0879fc5c +0x16c:  mov    %eax,(%esp)
0879fc5f +0x16f:  call   08746be0 <_ZN5yaSSL4DataC1Ev>  ; yaSSL::Data::Data()
0879fc64 +0x174:  mov    0x8(%ebp),%edx
0879fc67 +0x177:  mov    %edx,(%esp)
0879fc6a +0x17a:  call   0874e9d0 <_ZNK5yaSSL3SSL13CompressionOnEv>  ; yaSSL::SSL::CompressionOn() const
0879fc6f +0x17f:  test   %al,%al
0879fc71 +0x181:  jne    0879fb68 <+0x78>
0879fc77 +0x187:  mov    0xc(%ebp),%eax
0879fc7a +0x18a:  add    -0x4c(%ebp),%eax
0879fc7d +0x18d:  mov    %eax,0x8(%esp)
0879fc81 +0x191:  movzwl %si,%eax
0879fc84 +0x194:  mov    %eax,0x4(%esp)
0879fc88 +0x198:  mov    -0x54(%ebp),%eax
0879fc8b +0x19b:  mov    %eax,(%esp)
0879fc8e +0x19e:  call   08746c60 <_ZN5yaSSL4Data7SetDataEtPKh>  ; yaSSL::Data::SetData(unsigned short, unsigned char const*)
0879fc93 +0x1a3:  jmp    0879fbbe <+0xce>
0879fc98 +0x1a8:  mov    -0x420(%ebx),%edx
0879fc9e +0x1ae:  lea    0x8(%edx),%eax
0879fca1 +0x1b1:  mov    %eax,-0x44(%ebp)
0879fca4 +0x1b4:  mov    -0x50(%ebp),%eax
0879fca7 +0x1b7:  mov    %eax,(%esp)
0879fcaa +0x1ba:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879fcaf +0x1bf:  mov    %edi,(%esp)
0879fcb2 +0x1c2:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879fcb7 +0x1c7:  mov    0x8(%ebp),%edx
0879fcba +0x1ca:  mov    %edx,(%esp)
0879fcbd +0x1cd:  call   0874e300 <_ZN5yaSSL3SSL6useLogEv>  ; yaSSL::SSL::useLog()
0879fcc2 +0x1d2:  mov    -0x4c(%ebp),%edx
0879fcc5 +0x1d5:  movl   $0x1,0x8(%esp)
0879fccd +0x1dd:  mov    %edx,0x4(%esp)
0879fcd1 +0x1e1:  mov    %eax,(%esp)
0879fcd4 +0x1e4:  call   087a1480 <_ZN5yaSSL3Log8ShowDataEjb>  ; yaSSL::Log::ShowData(unsigned int, bool)
0879fcd9 +0x1e9:  mov    -0x4c(%ebp),%eax
0879fcdc +0x1ec:  add    $0x6c,%esp
0879fcdf +0x1ef:  pop    %ebx
0879fce0 +0x1f0:  pop    %esi
0879fce1 +0x1f1:  pop    %edi
0879fce2 +0x1f2:  pop    %ebp
0879fce3 +0x1f3:  ret
0879fce4 +0x1f4:  lea    0x0(%esi,%eiz,1),%esi
0879fce8 +0x1f8:  mov    0x8(%ebp),%edx
0879fceb +0x1fb:  movl   $0x76,0x4(%esp)
0879fcf3 +0x203:  mov    %edx,(%esp)
0879fcf6 +0x206:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879fcfb +0x20b:  mov    -0x420(%ebx),%edx
0879fd01 +0x211:  lea    0x8(%edx),%eax
0879fd04 +0x214:  mov    %eax,-0x44(%ebp)
0879fd07 +0x217:  mov    -0x50(%ebp),%eax
0879fd0a +0x21a:  mov    %eax,(%esp)
0879fd0d +0x21d:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879fd12 +0x222:  mov    %edi,(%esp)
0879fd15 +0x225:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879fd1a +0x22a:  add    $0x6c,%esp
0879fd1d +0x22d:  mov    $0xffffffff,%eax
0879fd22 +0x232:  pop    %ebx
0879fd23 +0x233:  pop    %esi
0879fd24 +0x234:  pop    %edi
0879fd25 +0x235:  pop    %ebp
0879fd26 +0x236:  ret
0879fd27 +0x237:  nop
0879fd28 +0x238:  mov    0x8(%ebp),%edx
0879fd2b +0x23b:  movl   $0x0,0x4(%esp)
0879fd33 +0x243:  mov    %edx,(%esp)
0879fd36 +0x246:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879fd3b +0x24b:  jmp    0879fb18 <+0x28>
```

## 反编译 C

```c
// yaSSL::sendData @ 0x879faf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendData(yaSSL::SSL&, void const*, int) */

int yaSSL::sendData(SSL *param_1,void *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  int local_50;
  undefined *local_48 [4];
  input_buffer local_38 [16];
  output_buffer local_28 [20];
  undefined4 uStack_14;
  
  uStack_14 = 0x879fafb;
  iVar3 = SSL::GetError(param_1);
  if (iVar3 == 0x50) {
    SSL::SetError(param_1,0);
  }
  SSL::verfiyHandShakeComplete(param_1);
  iVar3 = SSL::GetError(param_1);
  if (iVar3 != 0) {
    return -1;
  }
  local_50 = 0;
  puVar4 = PTR_vtable_0936c778 + 8;
  while( true ) {
    iVar3 = param_3 - local_50;
    if (0x3fff < iVar3) {
      iVar3 = 0x4000;
    }
    output_buffer::output_buffer(local_28);
    input_buffer::input_buffer(local_38);
    Data::Data((Data *)local_48);
    cVar1 = SSL::CompressionOn(param_1);
    if (cVar1 == '\0') {
      Data::SetData((Data *)local_48,(ushort)iVar3,(uchar *)((int)param_2 + local_50));
    }
    else {
      iVar7 = Compress((uchar *)((int)param_2 + local_50),iVar3,local_38);
      if (iVar7 == -1) {
        SSL::SetError(param_1,0x76);
        break;
      }
      puVar6 = (uchar *)input_buffer::get_buffer(local_38);
      uVar2 = input_buffer::get_size(local_38);
      Data::SetData((Data *)local_48,uVar2,puVar6);
    }
    (anonymous_namespace)::buildMessage(param_1,local_28,(Message *)local_48);
    uVar5 = output_buffer::get_size(local_28);
    puVar6 = (uchar *)output_buffer::get_buffer(local_28);
    SSL::Send(param_1,puVar6,uVar5);
    iVar7 = SSL::GetError(param_1);
    if (iVar7 != 0) break;
    local_50 = local_50 + iVar3;
    if (local_50 == param_3) {
      local_48[0] = PTR_vtable_0936c778 + 8;
      input_buffer::~input_buffer(local_38);
      output_buffer::~output_buffer(local_28);
      uVar5 = SSL::useLog(param_1);
      Log::ShowData(uVar5,SUB41(local_50,0));
      return local_50;
    }
    local_48[0] = puVar4;
    input_buffer::~input_buffer(local_38);
    output_buffer::~output_buffer(local_28);
  }
  local_48[0] = PTR_vtable_0936c778 + 8;
  input_buffer::~input_buffer(local_38);
  output_buffer::~output_buffer(local_28);
  return -1;
}
```
