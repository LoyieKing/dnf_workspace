# PRF

`_ZN5yaSSL3PRFEPhjPKhjS2_jS2_j`

`yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879e980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879e980  _ZN5yaSSL3PRFEPhjPKhjS2_jS2_j
#           yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int)
# range [0x0879e980, 0x0879eb3c]
0879e980 +0x000:  push   %ebp
0879e981 +0x001:  mov    %esp,%ebp
0879e983 +0x003:  push   %edi
0879e984 +0x004:  push   %esi
0879e985 +0x005:  push   %ebx
0879e986 +0x006:  sub    $0x7c,%esp
0879e989 +0x009:  mov    0x14(%ebp),%edi
0879e98c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879e991 +0x011:  add    $0xbce207,%ebx
0879e997 +0x017:  lea    -0x24(%ebp),%eax
0879e99a +0x01a:  mov    %eax,-0x64(%ebp)
0879e99d +0x01d:  mov    %eax,(%esp)
0879e9a0 +0x020:  lea    0x1(%edi),%esi
0879e9a3 +0x023:  and    $0x1,%edi
0879e9a6 +0x026:  shr    %esi
0879e9a8 +0x028:  mov    %esi,0x4(%esp)
0879e9ac +0x02c:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0879e9b1 +0x031:  lea    -0x30(%ebp),%eax
0879e9b4 +0x034:  mov    %esi,0x4(%esp)
0879e9b8 +0x038:  mov    %eax,-0x68(%ebp)
0879e9bb +0x03b:  mov    %eax,(%esp)
0879e9be +0x03e:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0879e9c3 +0x043:  mov    0x24(%ebp),%eax
0879e9c6 +0x046:  add    0x1c(%ebp),%eax
0879e9c9 +0x049:  mov    %eax,0x4(%esp)
0879e9cd +0x04d:  lea    -0x3c(%ebp),%eax
0879e9d0 +0x050:  mov    %eax,-0x60(%ebp)
0879e9d3 +0x053:  mov    %eax,(%esp)
0879e9d6 +0x056:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0879e9db +0x05b:  mov    0x10(%ebp),%eax
0879e9de +0x05e:  mov    %esi,0x8(%esp)
0879e9e2 +0x062:  mov    %eax,0x4(%esp)
0879e9e6 +0x066:  mov    -0x64(%ebp),%eax
0879e9e9 +0x069:  mov    %eax,(%esp)
0879e9ec +0x06c:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879e9f1 +0x071:  mov    -0x68(%ebp),%eax
0879e9f4 +0x074:  mov    %esi,0x8(%esp)
0879e9f8 +0x078:  sub    %edi,%esi
0879e9fa +0x07a:  add    0x10(%ebp),%esi
0879e9fd +0x07d:  lea    -0x48(%ebp),%edi
0879ea00 +0x080:  mov    %eax,(%esp)
0879ea03 +0x083:  mov    %esi,0x4(%esp)
0879ea07 +0x087:  lea    -0x54(%ebp),%esi
0879ea0a +0x08a:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879ea0f +0x08f:  mov    0x1c(%ebp),%eax
0879ea12 +0x092:  mov    %eax,0x8(%esp)
0879ea16 +0x096:  mov    0x18(%ebp),%eax
0879ea19 +0x099:  mov    %eax,0x4(%esp)
0879ea1d +0x09d:  mov    -0x60(%ebp),%eax
0879ea20 +0x0a0:  mov    %eax,(%esp)
0879ea23 +0x0a3:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879ea28 +0x0a8:  mov    0x24(%ebp),%eax
0879ea2b +0x0ab:  mov    %eax,0x8(%esp)
0879ea2f +0x0af:  mov    0x20(%ebp),%eax
0879ea32 +0x0b2:  mov    %eax,0x4(%esp)
0879ea36 +0x0b6:  mov    -0x60(%ebp),%eax
0879ea39 +0x0b9:  mov    %eax,(%esp)
0879ea3c +0x0bc:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879ea41 +0x0c1:  mov    0xc(%ebp),%eax
0879ea44 +0x0c4:  mov    %edi,(%esp)
0879ea47 +0x0c7:  mov    %eax,0x4(%esp)
0879ea4b +0x0cb:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0879ea50 +0x0d0:  mov    0xc(%ebp),%eax
0879ea53 +0x0d3:  mov    %esi,(%esp)
0879ea56 +0x0d6:  mov    %eax,0x4(%esp)
0879ea5a +0x0da:  call   087971d0 <_ZN5yaSSL13output_bufferC1Ej>  ; yaSSL::output_buffer::output_buffer(unsigned int)
0879ea5f +0x0df:  mov    -0x60(%ebp),%eax
0879ea62 +0x0e2:  mov    -0x64(%ebp),%edx
0879ea65 +0x0e5:  movl   $0x1,0x4(%esp)
0879ea6d +0x0ed:  mov    %eax,(%esp)
0879ea70 +0x0f0:  mov    %edi,%eax
0879ea72 +0x0f2:  call   0879e730 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE>  ; yaSSL::(anonymous namespace)::p_hash(yaSSL::output_buffer&, yaSSL::output_buffer const&, yaSSL::output_buffer const&, yaSSL::MACAlgorithm)
0879ea77 +0x0f7:  mov    -0x60(%ebp),%eax
0879ea7a +0x0fa:  mov    -0x68(%ebp),%edx
0879ea7d +0x0fd:  movl   $0x2,0x4(%esp)
0879ea85 +0x105:  mov    %eax,(%esp)
0879ea88 +0x108:  mov    %esi,%eax
0879ea8a +0x10a:  call   0879e730 <_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE>  ; yaSSL::(anonymous namespace)::p_hash(yaSSL::output_buffer&, yaSSL::output_buffer const&, yaSSL::output_buffer const&, yaSSL::MACAlgorithm)
0879ea8f +0x10f:  movl   $0x0,0x4(%esp)
0879ea97 +0x117:  mov    %edi,(%esp)
0879ea9a +0x11a:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
0879ea9f +0x11f:  movl   $0x0,0x4(%esp)
0879eaa7 +0x127:  mov    %esi,(%esp)
0879eaaa +0x12a:  call   08796ee0 <_ZN5yaSSL13output_buffer11set_currentEj>  ; yaSSL::output_buffer::set_current(unsigned int)
0879eaaf +0x12f:  mov    0xc(%ebp),%eax
0879eab2 +0x132:  test   %eax,%eax
0879eab4 +0x134:  je     0879eb02 <+0x182>
0879eab6 +0x136:  xor    %edx,%edx
0879eab8 +0x138:  mov    %edi,-0x5c(%ebp)
0879eabb +0x13b:  mov    %esi,%edi
0879eabd +0x13d:  mov    %edx,%esi
0879eabf +0x13f:  nop
0879eac0 +0x140:  mov    -0x5c(%ebp),%eax
0879eac3 +0x143:  movl   $0xfeedbeef,0x4(%esp)
0879eacb +0x14b:  mov    %eax,(%esp)
0879eace +0x14e:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
0879ead3 +0x153:  movzbl (%eax),%edx
0879ead6 +0x156:  movl   $0xfeedbeef,0x4(%esp)
0879eade +0x15e:  mov    %edi,(%esp)
0879eae1 +0x161:  mov    %dl,-0x6c(%ebp)
0879eae4 +0x164:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
0879eae9 +0x169:  movzbl -0x6c(%ebp),%edx
0879eaed +0x16d:  xor    (%eax),%dl
0879eaef +0x16f:  mov    0x8(%ebp),%eax
0879eaf2 +0x172:  mov    %dl,(%eax,%esi,1)
0879eaf5 +0x175:  add    $0x1,%esi
0879eaf8 +0x178:  cmp    %esi,0xc(%ebp)
0879eafb +0x17b:  ja     0879eac0 <+0x140>
0879eafd +0x17d:  mov    %edi,%esi
0879eaff +0x17f:  mov    -0x5c(%ebp),%edi
0879eb02 +0x182:  mov    %esi,(%esp)
0879eb05 +0x185:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879eb0a +0x18a:  mov    %edi,(%esp)
0879eb0d +0x18d:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879eb12 +0x192:  mov    -0x60(%ebp),%eax
0879eb15 +0x195:  mov    %eax,(%esp)
0879eb18 +0x198:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879eb1d +0x19d:  mov    -0x68(%ebp),%eax
0879eb20 +0x1a0:  mov    %eax,(%esp)
0879eb23 +0x1a3:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879eb28 +0x1a8:  mov    -0x64(%ebp),%eax
0879eb2b +0x1ab:  mov    %eax,(%esp)
0879eb2e +0x1ae:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879eb33 +0x1b3:  add    $0x7c,%esp
0879eb36 +0x1b6:  pop    %ebx
0879eb37 +0x1b7:  pop    %esi
0879eb38 +0x1b8:  pop    %edi
0879eb39 +0x1b9:  pop    %ebp
0879eb3a +0x1ba:  ret
0879eb3b +0x1bb:  nop
0879eb3c +0x1bc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::PRF @ 0x879e980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::PRF(unsigned char*, unsigned int, unsigned char const*, unsigned int, unsigned char
   const*, unsigned int, unsigned char const*, unsigned int) */

void yaSSL::PRF(uchar *param_1,uint param_2,uchar *param_3,uint param_4,uchar *param_5,uint param_6,
               uchar *param_7,uint param_8)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  output_buffer local_58 [12];
  output_buffer local_4c [12];
  output_buffer local_40 [12];
  output_buffer local_34 [12];
  output_buffer local_28 [24];
  
  uVar3 = param_4 + 1 >> 1;
  output_buffer::output_buffer(local_28,uVar3);
  output_buffer::output_buffer(local_34,uVar3);
  output_buffer::output_buffer(local_40,param_8 + param_6);
  output_buffer::write(local_28,param_3,uVar3);
  output_buffer::write(local_34,param_3 + (uVar3 - (param_4 & 1)),uVar3);
  output_buffer::write(local_40,param_5,param_6);
  output_buffer::write(local_40,param_7,param_8);
  output_buffer::output_buffer(local_4c,param_2);
  output_buffer::output_buffer(local_58,param_2);
  (anonymous_namespace)::p_hash(local_4c,local_28,local_40,1);
  (anonymous_namespace)::p_hash(local_58,local_34,local_40,2);
  output_buffer::set_current(local_4c,0);
  output_buffer::set_current(local_58,0);
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      pbVar2 = (byte *)output_buffer::operator[]((uint)local_4c);
      bVar1 = *pbVar2;
      pbVar2 = (byte *)output_buffer::operator[]((uint)local_58);
      param_1[uVar3] = bVar1 ^ *pbVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  output_buffer::~output_buffer(local_58);
  output_buffer::~output_buffer(local_4c);
  output_buffer::~output_buffer(local_40);
  output_buffer::~output_buffer(local_34);
  output_buffer::~output_buffer(local_28);
  return;
}
```
