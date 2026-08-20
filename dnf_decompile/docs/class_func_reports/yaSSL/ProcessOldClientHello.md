# ProcessOldClientHello

`_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE`

`yaSSL::ProcessOldClientHello(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879d7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879d7e0  _ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE
#           yaSSL::ProcessOldClientHello(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x0879d7e0, 0x0879db69]
0879d7e0 +0x000:  push   %ebp
0879d7e1 +0x001:  mov    %esp,%ebp
0879d7e3 +0x003:  push   %edi
0879d7e4 +0x004:  push   %esi
0879d7e5 +0x005:  push   %ebx
0879d7e6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879d7eb +0x00b:  add    $0xbcf3ad,%ebx
0879d7f1 +0x011:  sub    $0x10c,%esp
0879d7f7 +0x017:  mov    0x8(%ebp),%esi
0879d7fa +0x01a:  mov    %esi,(%esp)
0879d7fd +0x01d:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0879d802 +0x022:  cmp    $0x1,%eax
0879d805 +0x025:  jbe    0879daf8 <+0x318>
0879d80b +0x02b:  movl   $0xfeedbeef,0x4(%esp)
0879d813 +0x033:  mov    %esi,(%esp)
0879d816 +0x036:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0879d81b +0x03b:  movzbl (%eax),%edi
0879d81e +0x03e:  movl   $0xfeedbeef,0x4(%esp)
0879d826 +0x046:  mov    %esi,(%esp)
0879d829 +0x049:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0879d82e +0x04e:  mov    %edi,%edx
0879d830 +0x050:  and    $0x7f,%edx
0879d833 +0x053:  shl    $0x8,%edx
0879d836 +0x056:  movzbl (%eax),%edi
0879d839 +0x059:  mov    %esi,(%esp)
0879d83c +0x05c:  or     %edx,%edi
0879d83e +0x05e:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0879d843 +0x063:  cmp    %eax,%edi
0879d845 +0x065:  ja     0879dad8 <+0x2f8>
0879d84b +0x06b:  mov    %esi,(%esp)
0879d84e +0x06e:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879d853 +0x073:  mov    %esi,(%esp)
0879d856 +0x076:  mov    %eax,-0xfc(%ebp)
0879d85c +0x07c:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0879d861 +0x081:  mov    0xc(%ebp),%ecx
0879d864 +0x084:  add    -0xfc(%ebp),%eax
0879d86a +0x08a:  mov    %ecx,(%esp)
0879d86d +0x08d:  mov    %eax,-0xfc(%ebp)
0879d873 +0x093:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d878 +0x098:  mov    %eax,(%esp)
0879d87b +0x09b:  call   0874e870 <_ZN5yaSSL9sslHashes7use_MD5Ev>  ; yaSSL::sslHashes::use_MD5()
0879d880 +0x0a0:  mov    -0xfc(%ebp),%ecx
0879d886 +0x0a6:  mov    (%eax),%edx
0879d888 +0x0a8:  mov    %ecx,0x4(%esp)
0879d88c +0x0ac:  mov    %eax,(%esp)
0879d88f +0x0af:  mov    %edi,0x8(%esp)
0879d893 +0x0b3:  call   *0x8(%edx)
0879d896 +0x0b6:  mov    0xc(%ebp),%eax
0879d899 +0x0b9:  mov    %eax,(%esp)
0879d89c +0x0bc:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0879d8a1 +0x0c1:  mov    %eax,(%esp)
0879d8a4 +0x0c4:  call   0874e880 <_ZN5yaSSL9sslHashes7use_SHAEv>  ; yaSSL::sslHashes::use_SHA()
0879d8a9 +0x0c9:  mov    -0xfc(%ebp),%ecx
0879d8af +0x0cf:  mov    (%eax),%edx
0879d8b1 +0x0d1:  mov    %ecx,0x4(%esp)
0879d8b5 +0x0d5:  mov    %eax,(%esp)
0879d8b8 +0x0d8:  mov    %edi,0x8(%esp)
0879d8bc +0x0dc:  call   *0x8(%edx)
0879d8bf +0x0df:  movl   $0xfeedbeef,0x4(%esp)
0879d8c7 +0x0e7:  mov    %esi,(%esp)
0879d8ca +0x0ea:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0879d8cf +0x0ef:  lea    -0xf4(%ebp),%eax
0879d8d5 +0x0f5:  mov    %eax,-0x104(%ebp)
0879d8db +0x0fb:  mov    %eax,(%esp)
0879d8de +0x0fe:  call   08747a30 <_ZN5yaSSL11ClientHelloC1Ev>  ; yaSSL::ClientHello::ClientHello()
0879d8e3 +0x103:  movl   $0xfeedbeef,0x4(%esp)
0879d8eb +0x10b:  mov    %esi,(%esp)
0879d8ee +0x10e:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0879d8f3 +0x113:  movzbl (%eax),%eax
0879d8f6 +0x116:  movl   $0xfeedbeef,0x4(%esp)
0879d8fe +0x11e:  mov    %esi,(%esp)
0879d901 +0x121:  mov    %al,-0xec(%ebp)
0879d907 +0x127:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0879d90c +0x12c:  lea    -0x1a(%ebp),%edx
0879d90f +0x12f:  movzbl (%eax),%eax
0879d912 +0x132:  mov    %edx,-0xfc(%ebp)
0879d918 +0x138:  mov    %edx,0x4(%esp)
0879d91c +0x13c:  movl   $0x2,0x8(%esp)
0879d924 +0x144:  mov    %al,-0xeb(%ebp)
0879d92a +0x14a:  mov    %esi,(%esp)
0879d92d +0x14d:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879d932 +0x152:  mov    -0xfc(%ebp),%ecx
0879d938 +0x158:  lea    -0xa8(%ebp),%eax
0879d93e +0x15e:  mov    %eax,0x4(%esp)
0879d942 +0x162:  mov    %ecx,(%esp)
0879d945 +0x165:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0879d94a +0x16a:  mov    -0xfc(%ebp),%eax
0879d950 +0x170:  movl   $0x2,0x8(%esp)
0879d958 +0x178:  mov    %esi,(%esp)
0879d95b +0x17b:  mov    %eax,0x4(%esp)
0879d95f +0x17f:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879d964 +0x184:  mov    -0xfc(%ebp),%edx
0879d96a +0x18a:  lea    -0x1c(%ebp),%eax
0879d96d +0x18d:  mov    %eax,0x4(%esp)
0879d971 +0x191:  mov    %edx,(%esp)
0879d974 +0x194:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0879d979 +0x199:  movzwl -0x1c(%ebp),%eax
0879d97d +0x19d:  mov    -0xfc(%ebp),%ecx
0879d983 +0x1a3:  movl   $0x2,0x8(%esp)
0879d98b +0x1ab:  mov    %esi,(%esp)
0879d98e +0x1ae:  mov    %al,-0xca(%ebp)
0879d994 +0x1b4:  mov    %ecx,0x4(%esp)
0879d998 +0x1b8:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879d99d +0x1bd:  lea    -0x1e(%ebp),%eax
0879d9a0 +0x1c0:  mov    %eax,0x4(%esp)
0879d9a4 +0x1c4:  mov    -0xfc(%ebp),%eax
0879d9aa +0x1ca:  mov    %eax,(%esp)
0879d9ad +0x1cd:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0879d9b2 +0x1d2:  movzwl -0xa8(%ebp),%eax
0879d9b9 +0x1d9:  cmp    $0x80,%ax
0879d9bd +0x1dd:  ja     0879dad8 <+0x2f8>
0879d9c3 +0x1e3:  cmpw   $0x20,-0x1c(%ebp)
0879d9c8 +0x1e8:  ja     0879dad8 <+0x2f8>
0879d9ce +0x1ee:  cmpw   $0x20,-0x1e(%ebp)
0879d9d3 +0x1f3:  ja     0879dad8 <+0x2f8>
0879d9d9 +0x1f9:  xor    %edi,%edi
0879d9db +0x1fb:  xor    %edx,%edx
0879d9dd +0x1fd:  test   %ax,%ax
0879d9e0 +0x200:  movl   $0x0,-0x100(%ebp)
0879d9ea +0x20a:  jne    0879da16 <+0x236>
0879d9ec +0x20c:  jmp    0879da69 <+0x289>
0879d9ee +0x20e:  xchg   %ax,%ax
0879d9f0 +0x210:  mov    -0xfc(%ebp),%ecx
0879d9f6 +0x216:  add    $0x3,%edi
0879d9f9 +0x219:  movl   $0x2,0x8(%esp)
0879da01 +0x221:  mov    %esi,(%esp)
0879da04 +0x224:  mov    %ecx,0x4(%esp)
0879da08 +0x228:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879da0d +0x22d:  cmp    %di,-0xa8(%ebp)
0879da14 +0x234:  jbe    0879da62 <+0x282>
0879da16 +0x236:  movl   $0xfeedbeef,0x4(%esp)
0879da1e +0x23e:  mov    %esi,(%esp)
0879da21 +0x241:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0879da26 +0x246:  cmpb   $0x0,(%eax)
0879da29 +0x249:  jne    0879d9f0 <+0x210>
0879da2b +0x24b:  mov    -0x104(%ebp),%ecx
0879da31 +0x251:  add    $0x3,%edi
0879da34 +0x254:  mov    -0x100(%ebp),%edx
0879da3a +0x25a:  movl   $0x2,0x8(%esp)
0879da42 +0x262:  mov    %esi,(%esp)
0879da45 +0x265:  lea    0x4e(%ecx,%edx,1),%eax
0879da49 +0x269:  mov    %eax,0x4(%esp)
0879da4d +0x26d:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879da52 +0x272:  addl   $0x2,-0x100(%ebp)
0879da59 +0x279:  cmp    %di,-0xa8(%ebp)
0879da60 +0x280:  ja     0879da16 <+0x236>
0879da62 +0x282:  movzwl -0x100(%ebp),%edx
0879da69 +0x289:  movzbl -0xca(%ebp),%eax
0879da70 +0x290:  mov    %dx,-0xa8(%ebp)
0879da77 +0x297:  test   %al,%al
0879da79 +0x299:  jne    0879db18 <+0x338>
0879da7f +0x29f:  movzwl -0x1e(%ebp),%eax
0879da83 +0x2a3:  cmp    $0x1f,%ax
0879da87 +0x2a7:  jbe    0879db38 <+0x358>
0879da8d +0x2ad:  mov    -0x104(%ebp),%edx
0879da93 +0x2b3:  movzwl %ax,%eax
0879da96 +0x2b6:  mov    %eax,0x8(%esp)
0879da9a +0x2ba:  mov    %esi,(%esp)
0879da9d +0x2bd:  sub    %eax,%edx
0879da9f +0x2bf:  mov    %edx,%eax
0879daa1 +0x2c1:  add    $0x2a,%eax
0879daa4 +0x2c4:  mov    %eax,0x4(%esp)
0879daa8 +0x2c8:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879daad +0x2cd:  mov    0xc(%ebp),%ecx
0879dab0 +0x2d0:  mov    -0x104(%ebp),%eax
0879dab6 +0x2d6:  mov    %esi,0x4(%esp)
0879daba +0x2da:  mov    %ecx,0x8(%esp)
0879dabe +0x2de:  mov    %eax,(%esp)
0879dac1 +0x2e1:  call   0874a450 <_ZN5yaSSL11ClientHello7ProcessERNS_12input_bufferERNS_3SSLE>  ; yaSSL::ClientHello::Process(yaSSL::input_buffer&, yaSSL::SSL&)
0879dac6 +0x2e6:  add    $0x10c,%esp
0879dacc +0x2ec:  pop    %ebx
0879dacd +0x2ed:  pop    %esi
0879dace +0x2ee:  pop    %edi
0879dacf +0x2ef:  pop    %ebp
0879dad0 +0x2f0:  ret
0879dad1 +0x2f1:  lea    0x0(%esi,%eiz,1),%esi
0879dad8 +0x2f8:  mov    0xc(%ebp),%edx
0879dadb +0x2fb:  movl   $0x6d,0x4(%esp)
0879dae3 +0x303:  mov    %edx,(%esp)
0879dae6 +0x306:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879daeb +0x30b:  add    $0x10c,%esp
0879daf1 +0x311:  pop    %ebx
0879daf2 +0x312:  pop    %esi
0879daf3 +0x313:  pop    %edi
0879daf4 +0x314:  pop    %ebp
0879daf5 +0x315:  ret
0879daf6 +0x316:  xchg   %ax,%ax
0879daf8 +0x318:  mov    0xc(%ebp),%eax
0879dafb +0x31b:  movl   $0x6d,0x4(%esp)
0879db03 +0x323:  mov    %eax,(%esp)
0879db06 +0x326:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879db0b +0x32b:  add    $0x10c,%esp
0879db11 +0x331:  pop    %ebx
0879db12 +0x332:  pop    %esi
0879db13 +0x333:  pop    %edi
0879db14 +0x334:  pop    %ebp
0879db15 +0x335:  ret
0879db16 +0x336:  xchg   %ax,%ax
0879db18 +0x338:  movzbl %al,%eax
0879db1b +0x33b:  mov    %eax,0x8(%esp)
0879db1f +0x33f:  lea    -0xc9(%ebp),%eax
0879db25 +0x345:  mov    %eax,0x4(%esp)
0879db29 +0x349:  mov    %esi,(%esp)
0879db2c +0x34c:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0879db31 +0x351:  jmp    0879da7f <+0x29f>
0879db36 +0x356:  xchg   %ax,%ax
0879db38 +0x358:  movzwl %ax,%eax
0879db3b +0x35b:  mov    $0x20,%edx
0879db40 +0x360:  sub    %eax,%edx
0879db42 +0x362:  lea    -0xea(%ebp),%eax
0879db48 +0x368:  mov    %edx,0x8(%esp)
0879db4c +0x36c:  movl   $0x0,0x4(%esp)
0879db54 +0x374:  mov    %eax,(%esp)
0879db57 +0x377:  call   0807dcc0 <_init+0x5b8>
0879db5c +0x37c:  movzwl -0x1e(%ebp),%eax
0879db60 +0x380:  jmp    0879da8d <+0x2ad>
0879db65 +0x385:  lea    0x0(%esi,%eiz,1),%esi
0879db69 +0x389:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ProcessOldClientHello @ 0x879d7e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Type propagation algorithm not settling */
/* yaSSL::ProcessOldClientHello(yaSSL::input_buffer&, yaSSL::SSL&) */

void yaSSL::ProcessOldClientHello(input_buffer *param_1,SSL *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  sslHashes *psVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  ushort uVar10;
  uint uVar11;
  int local_104;
  ClientHello local_f8 [8];
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee [32];
  byte local_ce [34];
  ushort local_ac;
  uchar auStack_aa [136];
  ushort local_22;
  ushort local_20;
  uchar local_1e [10];
  undefined4 uStack_14;
  
  uStack_14 = 0x879d7eb;
  uVar2 = input_buffer::get_remaining(param_1);
  if (uVar2 < 2) {
    SSL::SetError(param_2,0x6d);
    return;
  }
  pbVar3 = (byte *)input_buffer::operator[]((uint)param_1);
  bVar1 = *pbVar3;
  pbVar3 = (byte *)input_buffer::operator[]((uint)param_1);
  uVar11 = (uint)*pbVar3 | (bVar1 & 0x7f) << 8;
  uVar2 = input_buffer::get_remaining(param_1);
  if (uVar11 <= uVar2) {
    iVar4 = input_buffer::get_buffer(param_1);
    iVar5 = input_buffer::get_current(param_1);
    psVar6 = (sslHashes *)SSL::useHashes(param_2);
    piVar7 = (int *)sslHashes::use_MD5(psVar6);
    (**(code **)(*piVar7 + 8))(piVar7,iVar5 + iVar4,uVar11);
    psVar6 = (sslHashes *)SSL::useHashes(param_2);
    piVar7 = (int *)sslHashes::use_SHA(psVar6);
    (**(code **)(*piVar7 + 8))(piVar7,iVar5 + iVar4,uVar11);
    input_buffer::operator[]((uint)param_1);
    ClientHello::ClientHello(local_f8);
    puVar8 = (undefined1 *)input_buffer::operator[]((uint)param_1);
    local_f0 = *puVar8;
    puVar8 = (undefined1 *)input_buffer::operator[]((uint)param_1);
    local_ef = *puVar8;
    input_buffer::read(param_1,local_1e,2);
    ato16(local_1e,&local_ac);
    input_buffer::read(param_1,local_1e,2);
    ato16(local_1e,&local_20);
    local_ce[0] = (byte)local_20;
    input_buffer::read(param_1,local_1e,2);
    ato16(local_1e,&local_22);
    if (((local_ac < 0x81) && (local_20 < 0x21)) && (local_22 < 0x21)) {
      uVar10 = 0;
      local_104._0_2_ = 0;
      local_104 = 0;
      if (local_ac != 0) {
        do {
          while (pcVar9 = (char *)input_buffer::operator[]((uint)param_1), *pcVar9 == '\0') {
            uVar10 = uVar10 + 3;
            input_buffer::read(param_1,auStack_aa + local_104,2);
            local_104 = local_104 + 2;
            if (local_ac <= uVar10) goto LAB_0879da62;
          }
          uVar10 = uVar10 + 3;
          input_buffer::read(param_1,local_1e,2);
        } while (uVar10 < local_ac);
LAB_0879da62:
      }
      local_ac = (ushort)local_104;
      if (local_ce[0] != 0) {
        input_buffer::read(param_1,(uchar *)((int)local_ce + 1),(uint)local_ce[0]);
      }
      if (local_22 < 0x20) {
        memset(local_ee,0,0x20 - local_22);
      }
      input_buffer::read(param_1,local_ce + -(uint)local_22,(uint)local_22);
      ClientHello::Process(local_f8,param_1,param_2);
      return;
    }
  }
  SSL::SetError(param_2,0x6d);
  return;
}
```
