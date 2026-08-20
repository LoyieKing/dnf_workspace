# Process

`_ZN5yaSSL11Certificate7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::Certificate::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Certificate` | `0x08749780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749780  _ZN5yaSSL11Certificate7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::Certificate::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08749780, 0x08749949]
08749780 +0x000:  push   %ebp
08749781 +0x001:  mov    %esp,%ebp
08749783 +0x003:  push   %edi
08749784 +0x004:  push   %esi
08749785 +0x005:  push   %ebx
08749786 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874978b +0x00b:  add    $0xc2340d,%ebx
08749791 +0x011:  sub    $0x3c,%esp
08749794 +0x014:  mov    0x10(%ebp),%eax
08749797 +0x017:  mov    0xc(%ebp),%edi
0874979a +0x01a:  mov    %eax,(%esp)
0874979d +0x01d:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
087497a2 +0x022:  mov    %eax,(%esp)
087497a5 +0x025:  call   0874e7e0 <_ZN5yaSSL6Crypto15use_certManagerEv>  ; yaSSL::Crypto::use_certManager()
087497aa +0x02a:  movl   $0xfeedbeef,0x4(%esp)
087497b2 +0x032:  mov    %edi,(%esp)
087497b5 +0x035:  mov    %eax,-0x2c(%ebp)
087497b8 +0x038:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087497bd +0x03d:  movzbl (%eax),%eax
087497c0 +0x040:  movl   $0xfeedbeef,0x4(%esp)
087497c8 +0x048:  mov    %edi,(%esp)
087497cb +0x04b:  mov    %al,-0x1b(%ebp)
087497ce +0x04e:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087497d3 +0x053:  movzbl (%eax),%eax
087497d6 +0x056:  movl   $0xfeedbeef,0x4(%esp)
087497de +0x05e:  mov    %edi,(%esp)
087497e1 +0x061:  mov    %al,-0x1a(%ebp)
087497e4 +0x064:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087497e9 +0x069:  movzbl (%eax),%eax
087497ec +0x06c:  mov    %al,-0x19(%ebp)
087497ef +0x06f:  lea    -0x20(%ebp),%eax
087497f2 +0x072:  mov    %eax,0x4(%esp)
087497f6 +0x076:  lea    -0x1b(%ebp),%eax
087497f9 +0x079:  mov    %eax,-0x30(%ebp)
087497fc +0x07c:  mov    %eax,(%esp)
087497ff +0x07f:  call   0874dd30 <_ZN5yaSSL7c24to32EPKhRj>  ; yaSSL::c24to32(unsigned char const*, unsigned int&)
08749804 +0x084:  mov    -0x20(%ebp),%ecx
08749807 +0x087:  test   %ecx,%ecx
08749809 +0x089:  je     087498d7 <+0x157>
0874980f +0x08f:  lea    -0x24(%ebp),%eax
08749812 +0x092:  mov    %eax,-0x34(%ebp)
08749815 +0x095:  lea    0x0(%esi),%esi
08749818 +0x098:  movl   $0xfeedbeef,0x4(%esp)
08749820 +0x0a0:  mov    %edi,(%esp)
08749823 +0x0a3:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749828 +0x0a8:  movzbl (%eax),%eax
0874982b +0x0ab:  movl   $0xfeedbeef,0x4(%esp)
08749833 +0x0b3:  mov    %edi,(%esp)
08749836 +0x0b6:  mov    %al,-0x1b(%ebp)
08749839 +0x0b9:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874983e +0x0be:  movzbl (%eax),%eax
08749841 +0x0c1:  movl   $0xfeedbeef,0x4(%esp)
08749849 +0x0c9:  mov    %edi,(%esp)
0874984c +0x0cc:  mov    %al,-0x1a(%ebp)
0874984f +0x0cf:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749854 +0x0d4:  movzbl (%eax),%eax
08749857 +0x0d7:  mov    %al,-0x19(%ebp)
0874985a +0x0da:  mov    -0x34(%ebp),%eax
0874985d +0x0dd:  mov    %eax,0x4(%esp)
08749861 +0x0e1:  mov    -0x30(%ebp),%eax
08749864 +0x0e4:  mov    %eax,(%esp)
08749867 +0x0e7:  call   0874dd30 <_ZN5yaSSL7c24to32EPKhRj>  ; yaSSL::c24to32(unsigned char const*, unsigned int&)
0874986c +0x0ec:  movb   $0x0,0x4(%esp)
08749871 +0x0f1:  movl   $0x8,(%esp)
08749878 +0x0f8:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0874987d +0x0fd:  mov    %eax,%esi
0874987f +0x0ff:  mov    -0x24(%ebp),%eax
08749882 +0x102:  mov    %esi,(%esp)
08749885 +0x105:  mov    %eax,0x4(%esp)
08749889 +0x109:  call   08797750 <_ZN5yaSSL4x509C1Ej>  ; yaSSL::x509::x509(unsigned int)
0874988e +0x10e:  mov    -0x2c(%ebp),%eax
08749891 +0x111:  mov    %esi,0x4(%esp)
08749895 +0x115:  mov    %eax,(%esp)
08749898 +0x118:  call   087975e0 <_ZN5yaSSL11CertManager11AddPeerCertEPNS_4x509E>  ; yaSSL::CertManager::AddPeerCert(yaSSL::x509*)
0874989d +0x11d:  mov    %esi,(%esp)
087498a0 +0x120:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
087498a5 +0x125:  mov    %esi,(%esp)
087498a8 +0x128:  mov    %eax,-0x38(%ebp)
087498ab +0x12b:  call   087973f0 <_ZN5yaSSL4x50910use_bufferEv>  ; yaSSL::x509::use_buffer()
087498b0 +0x130:  mov    -0x38(%ebp),%edx
087498b3 +0x133:  mov    %edi,(%esp)
087498b6 +0x136:  mov    %edx,0x8(%esp)
087498ba +0x13a:  mov    %eax,0x4(%esp)
087498be +0x13e:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
087498c3 +0x143:  mov    -0x20(%ebp),%eax
087498c6 +0x146:  sub    $0x3,%eax
087498c9 +0x149:  sub    -0x24(%ebp),%eax
087498cc +0x14c:  test   %eax,%eax
087498ce +0x14e:  mov    %eax,-0x20(%ebp)
087498d1 +0x151:  jne    08749818 <+0x98>
087498d7 +0x157:  mov    -0x2c(%ebp),%eax
087498da +0x15a:  mov    %eax,(%esp)
087498dd +0x15d:  call   08797e90 <_ZN5yaSSL11CertManager8ValidateEv>  ; yaSSL::CertManager::Validate()
087498e2 +0x162:  test   %eax,%eax
087498e4 +0x164:  jne    08749908 <+0x188>
087498e6 +0x166:  mov    0x10(%ebp),%eax
087498e9 +0x169:  mov    %eax,(%esp)
087498ec +0x16c:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087498f1 +0x171:  mov    %eax,(%esp)
087498f4 +0x174:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
087498f9 +0x179:  cmpl   $0x1,(%eax)
087498fc +0x17c:  je     08749920 <+0x1a0>
087498fe +0x17e:  add    $0x3c,%esp
08749901 +0x181:  pop    %ebx
08749902 +0x182:  pop    %esi
08749903 +0x183:  pop    %edi
08749904 +0x184:  pop    %ebp
08749905 +0x185:  ret
08749906 +0x186:  xchg   %ax,%ax
08749908 +0x188:  mov    %eax,0x4(%esp)
0874990c +0x18c:  mov    0x10(%ebp),%eax
0874990f +0x18f:  mov    %eax,(%esp)
08749912 +0x192:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08749917 +0x197:  add    $0x3c,%esp
0874991a +0x19a:  pop    %ebx
0874991b +0x19b:  pop    %esi
0874991c +0x19c:  pop    %edi
0874991d +0x19d:  pop    %ebp
0874991e +0x19e:  ret
0874991f +0x19f:  nop
08749920 +0x1a0:  mov    0x10(%ebp),%eax
08749923 +0x1a3:  mov    %eax,(%esp)
08749926 +0x1a6:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
0874992b +0x1ab:  mov    %eax,(%esp)
0874992e +0x1ae:  call   0874df20 <_ZN5yaSSL6States9useClientEv>  ; yaSSL::States::useClient()
08749933 +0x1b3:  movl   $0x2,(%eax)
08749939 +0x1b9:  add    $0x3c,%esp
0874993c +0x1bc:  pop    %ebx
0874993d +0x1bd:  pop    %esi
0874993e +0x1be:  pop    %edi
0874993f +0x1bf:  pop    %ebp
08749940 +0x1c0:  ret
08749941 +0x1c1:  nop
08749942 +0x1c2:  lea    0x0(%esi,%eiz,1),%esi
08749949 +0x1c9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Certificate::Process @ 0x8749780

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Certificate::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Certificate::Process(Certificate *this,input_buffer *param_1,SSL *param_2)

{
  Crypto *this_00;
  CertManager *this_01;
  uchar *puVar1;
  undefined1 *puVar2;
  x509 *this_02;
  uint uVar3;
  int iVar4;
  Security *this_03;
  int *piVar5;
  States *this_04;
  undefined4 *puVar6;
  uint *puVar7;
  uint local_28;
  uint local_24;
  uchar local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined4 uStack_14;
  
  uStack_14 = 0x874978b;
  this_00 = (Crypto *)SSL::useCrypto(param_2);
  this_01 = (CertManager *)Crypto::use_certManager(this_00);
  puVar1 = (uchar *)input_buffer::operator[]((uint)param_1);
  local_1f = *puVar1;
  puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1e = *puVar2;
  puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1d = *puVar2;
  c24to32(&local_1f,&local_24);
  if (local_24 != 0) {
    do {
      puVar1 = (uchar *)input_buffer::operator[]((uint)param_1);
      local_1f = *puVar1;
      puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
      local_1e = *puVar2;
      puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_1);
      local_1d = *puVar2;
      puVar7 = &local_28;
      c24to32(&local_1f,&local_28);
      this_02 = operator_new(8,(uint)puVar7 & 0xffffff00);
      yaSSL::x509::x509(this_02,local_28);
      CertManager::AddPeerCert(this_01,this_02);
      uVar3 = yaSSL::x509::get_length(this_02);
      puVar1 = (uchar *)yaSSL::x509::use_buffer(this_02);
      input_buffer::read(param_1,puVar1,uVar3);
      local_24 = (local_24 - 3) - local_28;
    } while (local_24 != 0);
  }
  iVar4 = CertManager::Validate(this_01);
  if (iVar4 == 0) {
    this_03 = (Security *)SSL::getSecurity(param_2);
    piVar5 = (int *)Security::get_parms(this_03);
    if (*piVar5 != 1) {
      return;
    }
    this_04 = (States *)SSL::useStates(param_2);
    puVar6 = (undefined4 *)States::useClient(this_04);
    *puVar6 = 2;
    return;
  }
  SSL::SetError(param_2,iVar4);
  return;
}
```
