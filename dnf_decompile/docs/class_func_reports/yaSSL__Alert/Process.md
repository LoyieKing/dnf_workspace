# Process

`_ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::Alert::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Alert` | `0x08749e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749e40  _ZN5yaSSL5Alert7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::Alert::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08749e40, 0x0874a099]
08749e40 +0x000:  push   %ebp
08749e41 +0x001:  mov    %esp,%ebp
08749e43 +0x003:  sub    $0x78,%esp
08749e46 +0x006:  mov    %ebx,-0xc(%ebp)
08749e49 +0x009:  mov    0x10(%ebp),%eax
08749e4c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08749e51 +0x011:  add    $0xc22d47,%ebx
08749e57 +0x017:  mov    %esi,-0x8(%ebp)
08749e5a +0x01a:  mov    0xc(%ebp),%esi
08749e5d +0x01d:  mov    %edi,-0x4(%ebp)
08749e60 +0x020:  mov    %eax,(%esp)
08749e63 +0x023:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08749e68 +0x028:  mov    %eax,(%esp)
08749e6b +0x02b:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08749e70 +0x030:  cmpb   $0x0,0x28(%eax)
08749e74 +0x034:  je     08749e90 <+0x50>
08749e76 +0x036:  mov    0x8(%ebp),%eax
08749e79 +0x039:  cmpl   $0x2,0x4(%eax)
08749e7d +0x03d:  je     08749fb8 <+0x178>
08749e83 +0x043:  mov    -0xc(%ebp),%ebx
08749e86 +0x046:  mov    -0x8(%ebp),%esi
08749e89 +0x049:  mov    -0x4(%ebp),%edi
08749e8c +0x04c:  mov    %ebp,%esp
08749e8e +0x04e:  pop    %ebp
08749e8f +0x04f:  ret
08749e90 +0x050:  mov    0x8(%ebp),%edx
08749e93 +0x053:  mov    (%edx),%eax
08749e95 +0x055:  mov    %edx,(%esp)
08749e98 +0x058:  call   *0x10(%eax)
08749e9b +0x05b:  mov    %esi,(%esp)
08749e9e +0x05e:  movzwl %ax,%eax
08749ea1 +0x061:  mov    %eax,-0x50(%ebp)
08749ea4 +0x064:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08749ea9 +0x069:  mov    %esi,(%esp)
08749eac +0x06c:  mov    %eax,%edi
08749eae +0x06e:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08749eb3 +0x073:  sub    -0x50(%ebp),%eax
08749eb6 +0x076:  add    %eax,%edi
08749eb8 +0x078:  mov    0x10(%ebp),%eax
08749ebb +0x07b:  mov    %eax,(%esp)
08749ebe +0x07e:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
08749ec3 +0x083:  test   %al,%al
08749ec5 +0x085:  jne    08749f80 <+0x140>
08749ecb +0x08b:  mov    -0x50(%ebp),%eax
08749ece +0x08e:  lea    -0x2c(%ebp),%edx
08749ed1 +0x091:  movl   $0x1,0x14(%esp)
08749ed9 +0x099:  movl   $0x15,0x10(%esp)
08749ee1 +0x0a1:  mov    %edi,0x8(%esp)
08749ee5 +0x0a5:  mov    %eax,0xc(%esp)
08749ee9 +0x0a9:  mov    0x10(%ebp),%eax
08749eec +0x0ac:  mov    %edx,-0x54(%ebp)
08749eef +0x0af:  mov    %edx,0x4(%esp)
08749ef3 +0x0b3:  mov    %eax,(%esp)
08749ef6 +0x0b6:  call   0879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
08749efb +0x0bb:  mov    0x10(%ebp),%edx
08749efe +0x0be:  mov    %edx,(%esp)
08749f01 +0x0c1:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
08749f06 +0x0c6:  mov    %eax,(%esp)
08749f09 +0x0c9:  call   0874e750 <_ZNK5yaSSL6Crypto10get_digestEv>  ; yaSSL::Crypto::get_digest() const
08749f0e +0x0ce:  mov    (%eax),%edx
08749f10 +0x0d0:  mov    %eax,(%esp)
08749f13 +0x0d3:  call   *0xc(%edx)
08749f16 +0x0d6:  mov    %esi,(%esp)
08749f19 +0x0d9:  mov    %eax,-0x4c(%ebp)
08749f1c +0x0dc:  mov    %eax,0x8(%esp)
08749f20 +0x0e0:  lea    -0x40(%ebp),%eax
08749f23 +0x0e3:  mov    %eax,-0x58(%ebp)
08749f26 +0x0e6:  mov    %eax,0x4(%esp)
08749f2a +0x0ea:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08749f2f +0x0ef:  mov    0x10(%ebp),%edx
08749f32 +0x0f2:  mov    %edx,(%esp)
08749f35 +0x0f5:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08749f3a +0x0fa:  mov    %eax,(%esp)
08749f3d +0x0fd:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08749f42 +0x102:  cmpl   $0x1,0x8(%eax)
08749f46 +0x106:  je     0874a010 <+0x1d0>
08749f4c +0x10c:  mov    -0x4c(%ebp),%eax
08749f4f +0x10f:  mov    -0x58(%ebp),%esi
08749f52 +0x112:  mov    -0x54(%ebp),%edi
08749f55 +0x115:  cmp    %eax,%eax
08749f57 +0x117:  mov    %eax,%ecx
08749f59 +0x119:  repz cmpsb %es:(%edi),%ds:(%esi)
08749f5b +0x11b:  je     08749e76 <+0x36>
08749f61 +0x121:  mov    0x10(%ebp),%edx
08749f64 +0x124:  movl   $0x70,0x4(%esp)
08749f6c +0x12c:  mov    %edx,(%esp)
08749f6f +0x12f:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08749f74 +0x134:  jmp    08749e83 <+0x43>
08749f79 +0x139:  lea    0x0(%esi,%eiz,1),%esi
08749f80 +0x140:  mov    -0x50(%ebp),%edx
08749f83 +0x143:  lea    -0x2c(%ebp),%eax
08749f86 +0x146:  movl   $0x1,0x14(%esp)
08749f8e +0x14e:  movl   $0x15,0x10(%esp)
08749f96 +0x156:  mov    %edi,0x8(%esp)
08749f9a +0x15a:  mov    %edx,0xc(%esp)
08749f9e +0x15e:  mov    0x10(%ebp),%edx
08749fa1 +0x161:  mov    %eax,-0x54(%ebp)
08749fa4 +0x164:  mov    %eax,0x4(%esp)
08749fa8 +0x168:  mov    %edx,(%esp)
08749fab +0x16b:  call   0879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
08749fb0 +0x170:  jmp    08749efb <+0xbb>
08749fb5 +0x175:  lea    0x0(%esi),%esi
08749fb8 +0x178:  mov    0x10(%ebp),%edx
08749fbb +0x17b:  mov    %edx,(%esp)
08749fbe +0x17e:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
08749fc3 +0x183:  mov    %eax,(%esp)
08749fc6 +0x186:  call   0874df00 <_ZN5yaSSL6States9useRecordEv>  ; yaSSL::States::useRecord()
08749fcb +0x18b:  movl   $0x0,(%eax)
08749fd1 +0x191:  mov    0x10(%ebp),%eax
08749fd4 +0x194:  mov    %eax,(%esp)
08749fd7 +0x197:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
08749fdc +0x19c:  mov    %eax,(%esp)
08749fdf +0x19f:  call   0874df10 <_ZN5yaSSL6States12useHandShakeEv>  ; yaSSL::States::useHandShake()
08749fe4 +0x1a4:  mov    0x8(%ebp),%edx
08749fe7 +0x1a7:  movl   $0x0,(%eax)
08749fed +0x1ad:  mov    0x8(%edx),%eax
08749ff0 +0x1b0:  mov    %eax,0x4(%esp)
08749ff4 +0x1b4:  mov    0x10(%ebp),%eax
08749ff7 +0x1b7:  mov    %eax,(%esp)
08749ffa +0x1ba:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08749fff +0x1bf:  mov    -0xc(%ebp),%ebx
0874a002 +0x1c2:  mov    -0x8(%ebp),%esi
0874a005 +0x1c5:  mov    -0x4(%ebp),%edi
0874a008 +0x1c8:  mov    %ebp,%esp
0874a00a +0x1ca:  pop    %ebp
0874a00b +0x1cb:  ret
0874a00c +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
0874a010 +0x1d0:  mov    0x10(%ebp),%eax
0874a013 +0x1d3:  xor    %edi,%edi
0874a015 +0x1d5:  mov    %eax,(%esp)
0874a018 +0x1d8:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
0874a01d +0x1dd:  test   %al,%al
0874a01f +0x1df:  jne    0874a070 <+0x230>
0874a021 +0x1e1:  mov    0x10(%ebp),%eax
0874a024 +0x1e4:  mov    %eax,(%esp)
0874a027 +0x1e7:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a02c +0x1ec:  mov    %eax,(%esp)
0874a02f +0x1ef:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874a034 +0x1f4:  movzwl 0x2a(%eax),%eax
0874a038 +0x1f8:  sub    %edi,%eax
0874a03a +0x1fa:  sub    -0x50(%ebp),%eax
0874a03d +0x1fd:  sub    -0x4c(%ebp),%eax
0874a040 +0x200:  test   %eax,%eax
0874a042 +0x202:  jle    08749f4c <+0x10c>
0874a048 +0x208:  mov    %esi,-0x50(%ebp)
0874a04b +0x20b:  xor    %edi,%edi
0874a04d +0x20d:  mov    %eax,%esi
0874a04f +0x20f:  nop
0874a050 +0x210:  mov    -0x50(%ebp),%edx
0874a053 +0x213:  add    $0x1,%edi
0874a056 +0x216:  movl   $0xfeedbeef,0x4(%esp)
0874a05e +0x21e:  mov    %edx,(%esp)
0874a061 +0x221:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874a066 +0x226:  cmp    %edi,%esi
0874a068 +0x228:  jg     0874a050 <+0x210>
0874a06a +0x22a:  jmp    08749f4c <+0x10c>
0874a06f +0x22f:  nop
0874a070 +0x230:  mov    0x10(%ebp),%edx
0874a073 +0x233:  mov    %edx,(%esp)
0874a076 +0x236:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874a07b +0x23b:  mov    %eax,(%esp)
0874a07e +0x23e:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
0874a083 +0x243:  mov    %eax,%edx
0874a085 +0x245:  mov    (%eax),%eax
0874a087 +0x247:  mov    %edx,(%esp)
0874a08a +0x24a:  call   *0x10(%eax)
0874a08d +0x24d:  mov    %eax,%edi
0874a08f +0x24f:  jmp    0874a021 <+0x1e1>
0874a091 +0x251:  nop
0874a092 +0x252:  lea    0x0(%esi,%eiz,1),%esi
0874a099 +0x259:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Alert::Process @ 0x8749e40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Alert::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Alert::Process(Alert *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  Security *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  Crypto *pCVar6;
  int *piVar7;
  uint uVar8;
  States *pSVar9;
  undefined4 *puVar10;
  uchar *puVar11;
  bool bVar12;
  byte bVar13;
  uchar *local_58;
  uchar local_44 [20];
  uchar local_30 [32];
  
  bVar13 = 0;
  pSVar2 = (Security *)SSL::getSecurity(param_2);
  iVar3 = Security::get_parms(pSVar2);
  if (*(char *)(iVar3 + 0x28) == '\0') {
    uVar4 = (**(code **)(*(int *)this + 0x10))(this);
    uVar4 = uVar4 & 0xffff;
    iVar3 = input_buffer::get_buffer(param_1);
    iVar5 = input_buffer::get_current(param_1);
    iVar3 = iVar3 + (iVar5 - uVar4);
    cVar1 = SSL::isTLS(param_2);
    if (cVar1 == '\0') {
      hmac(param_2,local_30,iVar3,uVar4,0x15,1);
    }
    else {
      TLS_hmac(param_2,local_30,iVar3,uVar4,0x15,1);
    }
    local_58 = local_30;
    pCVar6 = (Crypto *)SSL::getCrypto(param_2);
    piVar7 = (int *)Crypto::get_digest(pCVar6);
    uVar8 = (**(code **)(*piVar7 + 0xc))(piVar7);
    input_buffer::read(param_1,local_44,uVar8);
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    iVar3 = Security::get_parms(pSVar2);
    if (*(int *)(iVar3 + 8) == 1) {
      iVar3 = 0;
      cVar1 = SSL::isTLSv1_1(param_2);
      if (cVar1 != '\0') {
        pCVar6 = (Crypto *)SSL::getCrypto(param_2);
        piVar7 = (int *)Crypto::get_cipher(pCVar6);
        iVar3 = (**(code **)(*piVar7 + 0x10))(piVar7);
      }
      pSVar2 = (Security *)SSL::getSecurity(param_2);
      iVar5 = Security::get_parms(pSVar2);
      iVar3 = (((uint)*(ushort *)(iVar5 + 0x2a) - iVar3) - uVar4) - uVar8;
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          input_buffer::operator[]((uint)param_1);
        } while (iVar5 < iVar3);
      }
    }
    bVar12 = true;
    puVar11 = local_44;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar12 = *puVar11 == *local_58;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
      local_58 = local_58 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    if (!bVar12) {
      SSL::SetError(param_2,0x70);
      return;
    }
  }
  if (*(int *)(this + 4) != 2) {
    return;
  }
  pSVar9 = (States *)SSL::useStates(param_2);
  puVar10 = (undefined4 *)States::useRecord(pSVar9);
  *puVar10 = 0;
  pSVar9 = (States *)SSL::useStates(param_2);
  puVar10 = (undefined4 *)States::useHandShake(pSVar9);
  *puVar10 = 0;
  SSL::SetError(param_2,*(undefined4 *)(this + 8));
  return;
}
```
