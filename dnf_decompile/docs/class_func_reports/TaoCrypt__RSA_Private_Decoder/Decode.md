# Decode

`_ZN8TaoCrypt19RSA_Private_Decoder6DecodeERNS_14RSA_PrivateKeyE`

`TaoCrypt::RSA_Private_Decoder::Decode(TaoCrypt::RSA_PrivateKey&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_Private_Decoder` | `0x08755bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08755bc0  _ZN8TaoCrypt19RSA_Private_Decoder6DecodeERNS_14RSA_PrivateKeyE
#           TaoCrypt::RSA_Private_Decoder::Decode(TaoCrypt::RSA_PrivateKey&)
# range [0x08755bc0, 0x08755f49]
08755bc0 +0x000:  push   %ebp
08755bc1 +0x001:  mov    %esp,%ebp
08755bc3 +0x003:  push   %edi
08755bc4 +0x004:  push   %esi
08755bc5 +0x005:  push   %ebx
08755bc6 +0x006:  sub    $0xac,%esp
08755bcc +0x00c:  mov    0x8(%ebp),%esi
08755bcf +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
08755bd4 +0x014:  add    $0xc16fc4,%ebx
08755bda +0x01a:  mov    0xc(%ebp),%edi
08755bdd +0x01d:  mov    (%esi),%eax
08755bdf +0x01f:  mov    %esi,(%esp)
08755be2 +0x022:  call   *0x8(%eax)
08755be5 +0x025:  mov    0x4(%esi),%eax
08755be8 +0x028:  mov    0x10(%eax),%eax
08755beb +0x02b:  test   %eax,%eax
08755bed +0x02d:  jne    08755f36 <+0x376>
08755bf3 +0x033:  lea    -0x28(%ebp),%eax
08755bf6 +0x036:  mov    %eax,(%esp)
08755bf9 +0x039:  mov    %eax,-0x9c(%ebp)
08755bff +0x03f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755c04 +0x044:  mov    -0x9c(%ebp),%eax
08755c0a +0x04a:  mov    %esi,(%esp)
08755c0d +0x04d:  mov    %eax,0x4(%esp)
08755c11 +0x051:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755c16 +0x056:  mov    %edi,(%esp)
08755c19 +0x059:  mov    %eax,0x4(%esp)
08755c1d +0x05d:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755c22 +0x062:  mov    -0x28(%ebp),%eax
08755c25 +0x065:  mov    -0x24(%ebp),%edx
08755c28 +0x068:  movl   $0x0,0x4(%esp)
08755c30 +0x070:  shl    $0x2,%eax
08755c33 +0x073:  mov    %edx,(%esp)
08755c36 +0x076:  mov    %edx,-0x9c(%ebp)
08755c3c +0x07c:  mov    %eax,0x8(%esp)
08755c40 +0x080:  call   0807dcc0 <_init+0x5b8>
08755c45 +0x085:  mov    -0x9c(%ebp),%edx
08755c4b +0x08b:  movb   $0x0,0x4(%esp)
08755c50 +0x090:  mov    %edx,(%esp)
08755c53 +0x093:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755c58 +0x098:  lea    -0x38(%ebp),%eax
08755c5b +0x09b:  mov    %eax,(%esp)
08755c5e +0x09e:  mov    %eax,-0x9c(%ebp)
08755c64 +0x0a4:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755c69 +0x0a9:  mov    -0x9c(%ebp),%eax
08755c6f +0x0af:  mov    %esi,(%esp)
08755c72 +0x0b2:  mov    %eax,0x4(%esp)
08755c76 +0x0b6:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755c7b +0x0bb:  mov    %eax,0x4(%esp)
08755c7f +0x0bf:  lea    0x10(%edi),%eax
08755c82 +0x0c2:  mov    %eax,(%esp)
08755c85 +0x0c5:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755c8a +0x0ca:  mov    -0x38(%ebp),%eax
08755c8d +0x0cd:  mov    -0x34(%ebp),%edx
08755c90 +0x0d0:  movl   $0x0,0x4(%esp)
08755c98 +0x0d8:  shl    $0x2,%eax
08755c9b +0x0db:  mov    %edx,(%esp)
08755c9e +0x0de:  mov    %edx,-0x9c(%ebp)
08755ca4 +0x0e4:  mov    %eax,0x8(%esp)
08755ca8 +0x0e8:  call   0807dcc0 <_init+0x5b8>
08755cad +0x0ed:  mov    -0x9c(%ebp),%edx
08755cb3 +0x0f3:  movb   $0x0,0x4(%esp)
08755cb8 +0x0f8:  mov    %edx,(%esp)
08755cbb +0x0fb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755cc0 +0x100:  lea    -0x48(%ebp),%eax
08755cc3 +0x103:  mov    %eax,(%esp)
08755cc6 +0x106:  mov    %eax,-0x9c(%ebp)
08755ccc +0x10c:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755cd1 +0x111:  mov    -0x9c(%ebp),%eax
08755cd7 +0x117:  mov    %esi,(%esp)
08755cda +0x11a:  mov    %eax,0x4(%esp)
08755cde +0x11e:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755ce3 +0x123:  mov    %eax,0x4(%esp)
08755ce7 +0x127:  lea    0x20(%edi),%eax
08755cea +0x12a:  mov    %eax,(%esp)
08755ced +0x12d:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755cf2 +0x132:  mov    -0x48(%ebp),%eax
08755cf5 +0x135:  mov    -0x44(%ebp),%edx
08755cf8 +0x138:  movl   $0x0,0x4(%esp)
08755d00 +0x140:  shl    $0x2,%eax
08755d03 +0x143:  mov    %edx,(%esp)
08755d06 +0x146:  mov    %edx,-0x9c(%ebp)
08755d0c +0x14c:  mov    %eax,0x8(%esp)
08755d10 +0x150:  call   0807dcc0 <_init+0x5b8>
08755d15 +0x155:  mov    -0x9c(%ebp),%edx
08755d1b +0x15b:  movb   $0x0,0x4(%esp)
08755d20 +0x160:  mov    %edx,(%esp)
08755d23 +0x163:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755d28 +0x168:  lea    -0x58(%ebp),%eax
08755d2b +0x16b:  mov    %eax,(%esp)
08755d2e +0x16e:  mov    %eax,-0x9c(%ebp)
08755d34 +0x174:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755d39 +0x179:  mov    -0x9c(%ebp),%eax
08755d3f +0x17f:  mov    %esi,(%esp)
08755d42 +0x182:  mov    %eax,0x4(%esp)
08755d46 +0x186:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755d4b +0x18b:  mov    %eax,0x4(%esp)
08755d4f +0x18f:  lea    0x30(%edi),%eax
08755d52 +0x192:  mov    %eax,(%esp)
08755d55 +0x195:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755d5a +0x19a:  mov    -0x58(%ebp),%eax
08755d5d +0x19d:  mov    -0x54(%ebp),%edx
08755d60 +0x1a0:  movl   $0x0,0x4(%esp)
08755d68 +0x1a8:  shl    $0x2,%eax
08755d6b +0x1ab:  mov    %edx,(%esp)
08755d6e +0x1ae:  mov    %edx,-0x9c(%ebp)
08755d74 +0x1b4:  mov    %eax,0x8(%esp)
08755d78 +0x1b8:  call   0807dcc0 <_init+0x5b8>
08755d7d +0x1bd:  mov    -0x9c(%ebp),%edx
08755d83 +0x1c3:  movb   $0x0,0x4(%esp)
08755d88 +0x1c8:  mov    %edx,(%esp)
08755d8b +0x1cb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755d90 +0x1d0:  lea    -0x68(%ebp),%eax
08755d93 +0x1d3:  mov    %eax,(%esp)
08755d96 +0x1d6:  mov    %eax,-0x9c(%ebp)
08755d9c +0x1dc:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755da1 +0x1e1:  mov    -0x9c(%ebp),%eax
08755da7 +0x1e7:  mov    %esi,(%esp)
08755daa +0x1ea:  mov    %eax,0x4(%esp)
08755dae +0x1ee:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755db3 +0x1f3:  mov    %eax,0x4(%esp)
08755db7 +0x1f7:  lea    0x40(%edi),%eax
08755dba +0x1fa:  mov    %eax,(%esp)
08755dbd +0x1fd:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755dc2 +0x202:  mov    -0x68(%ebp),%eax
08755dc5 +0x205:  mov    -0x64(%ebp),%edx
08755dc8 +0x208:  movl   $0x0,0x4(%esp)
08755dd0 +0x210:  shl    $0x2,%eax
08755dd3 +0x213:  mov    %edx,(%esp)
08755dd6 +0x216:  mov    %edx,-0x9c(%ebp)
08755ddc +0x21c:  mov    %eax,0x8(%esp)
08755de0 +0x220:  call   0807dcc0 <_init+0x5b8>
08755de5 +0x225:  mov    -0x9c(%ebp),%edx
08755deb +0x22b:  movb   $0x0,0x4(%esp)
08755df0 +0x230:  mov    %edx,(%esp)
08755df3 +0x233:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755df8 +0x238:  lea    -0x78(%ebp),%eax
08755dfb +0x23b:  mov    %eax,(%esp)
08755dfe +0x23e:  mov    %eax,-0x9c(%ebp)
08755e04 +0x244:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755e09 +0x249:  mov    -0x9c(%ebp),%eax
08755e0f +0x24f:  mov    %esi,(%esp)
08755e12 +0x252:  mov    %eax,0x4(%esp)
08755e16 +0x256:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755e1b +0x25b:  mov    %eax,0x4(%esp)
08755e1f +0x25f:  lea    0x50(%edi),%eax
08755e22 +0x262:  mov    %eax,(%esp)
08755e25 +0x265:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755e2a +0x26a:  mov    -0x78(%ebp),%eax
08755e2d +0x26d:  mov    -0x74(%ebp),%edx
08755e30 +0x270:  movl   $0x0,0x4(%esp)
08755e38 +0x278:  shl    $0x2,%eax
08755e3b +0x27b:  mov    %edx,(%esp)
08755e3e +0x27e:  mov    %edx,-0x9c(%ebp)
08755e44 +0x284:  mov    %eax,0x8(%esp)
08755e48 +0x288:  call   0807dcc0 <_init+0x5b8>
08755e4d +0x28d:  mov    -0x9c(%ebp),%edx
08755e53 +0x293:  movb   $0x0,0x4(%esp)
08755e58 +0x298:  mov    %edx,(%esp)
08755e5b +0x29b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755e60 +0x2a0:  lea    -0x88(%ebp),%eax
08755e66 +0x2a6:  mov    %eax,(%esp)
08755e69 +0x2a9:  mov    %eax,-0x9c(%ebp)
08755e6f +0x2af:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755e74 +0x2b4:  mov    -0x9c(%ebp),%eax
08755e7a +0x2ba:  mov    %esi,(%esp)
08755e7d +0x2bd:  mov    %eax,0x4(%esp)
08755e81 +0x2c1:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755e86 +0x2c6:  mov    %eax,0x4(%esp)
08755e8a +0x2ca:  lea    0x60(%edi),%eax
08755e8d +0x2cd:  add    $0x70,%edi
08755e90 +0x2d0:  mov    %eax,(%esp)
08755e93 +0x2d3:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755e98 +0x2d8:  mov    -0x88(%ebp),%eax
08755e9e +0x2de:  mov    -0x84(%ebp),%edx
08755ea4 +0x2e4:  movl   $0x0,0x4(%esp)
08755eac +0x2ec:  shl    $0x2,%eax
08755eaf +0x2ef:  mov    %edx,(%esp)
08755eb2 +0x2f2:  mov    %edx,-0x9c(%ebp)
08755eb8 +0x2f8:  mov    %eax,0x8(%esp)
08755ebc +0x2fc:  call   0807dcc0 <_init+0x5b8>
08755ec1 +0x301:  mov    -0x9c(%ebp),%edx
08755ec7 +0x307:  movb   $0x0,0x4(%esp)
08755ecc +0x30c:  mov    %edx,(%esp)
08755ecf +0x30f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755ed4 +0x314:  lea    -0x98(%ebp),%eax
08755eda +0x31a:  mov    %eax,(%esp)
08755edd +0x31d:  mov    %eax,-0x9c(%ebp)
08755ee3 +0x323:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
08755ee8 +0x328:  mov    -0x9c(%ebp),%eax
08755eee +0x32e:  mov    %esi,(%esp)
08755ef1 +0x331:  mov    %eax,0x4(%esp)
08755ef5 +0x335:  call   087544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>  ; TaoCrypt::BER_Decoder::GetInteger(TaoCrypt::Integer&)
08755efa +0x33a:  mov    %edi,(%esp)
08755efd +0x33d:  mov    %eax,0x4(%esp)
08755f01 +0x341:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08755f06 +0x346:  mov    -0x98(%ebp),%eax
08755f0c +0x34c:  mov    -0x94(%ebp),%esi
08755f12 +0x352:  movl   $0x0,0x4(%esp)
08755f1a +0x35a:  shl    $0x2,%eax
08755f1d +0x35d:  mov    %eax,0x8(%esp)
08755f21 +0x361:  mov    %esi,(%esp)
08755f24 +0x364:  call   0807dcc0 <_init+0x5b8>
08755f29 +0x369:  movb   $0x0,0x4(%esp)
08755f2e +0x36e:  mov    %esi,(%esp)
08755f31 +0x371:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755f36 +0x376:  add    $0xac,%esp
08755f3c +0x37c:  pop    %ebx
08755f3d +0x37d:  pop    %esi
08755f3e +0x37e:  pop    %edi
08755f3f +0x37f:  pop    %ebp
08755f40 +0x380:  ret
08755f41 +0x381:  nop
08755f42 +0x382:  lea    0x0(%esi,%eiz,1),%esi
08755f49 +0x389:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::RSA_Private_Decoder::Decode @ 0x8755bc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_Private_Decoder::Decode(TaoCrypt::RSA_PrivateKey&) */

void __thiscall
TaoCrypt::RSA_Private_Decoder::Decode(RSA_Private_Decoder *this,RSA_PrivateKey *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_9c;
  void *local_98;
  int local_8c;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    Integer::operator=((Integer *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    Integer::operator=((Integer *)(param_1 + 0x10),pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_4c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_4c);
    Integer::operator=((Integer *)(param_1 + 0x20),pIVar1);
    uVar2 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_5c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_5c);
    Integer::operator=((Integer *)(param_1 + 0x30),pIVar1);
    uVar2 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_6c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_6c);
    Integer::operator=((Integer *)(param_1 + 0x40),pIVar1);
    uVar2 = 0;
    memset(local_68,0,local_6c << 2);
    operator_delete__(local_68,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_7c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_7c);
    Integer::operator=((Integer *)(param_1 + 0x50),pIVar1);
    uVar2 = 0;
    memset(local_78,0,local_7c << 2);
    operator_delete__(local_78,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_8c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_8c);
    Integer::operator=((Integer *)(param_1 + 0x60),pIVar1);
    uVar2 = 0;
    memset(local_88,0,local_8c << 2);
    operator_delete__(local_88,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_9c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_9c);
    Integer::operator=((Integer *)(param_1 + 0x70),pIVar1);
    uVar2 = 0;
    memset(local_98,0,local_9c << 2);
    operator_delete__(local_98,uVar2 & 0xffffff00);
  }
  return;
}
```
