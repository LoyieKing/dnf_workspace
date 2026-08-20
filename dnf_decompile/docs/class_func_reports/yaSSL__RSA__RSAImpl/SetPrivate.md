# SetPrivate

`_ZN5yaSSL3RSA7RSAImpl10SetPrivateEPKhj`

`yaSSL::RSA::RSAImpl::SetPrivate(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::RSA::RSAImpl` | `0x0879b0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b0b0  _ZN5yaSSL3RSA7RSAImpl10SetPrivateEPKhj
#           yaSSL::RSA::RSAImpl::SetPrivate(unsigned char const*, unsigned int)
# range [0x0879b0b0, 0x0879b25c]
0879b0b0 +0x000:  push   %ebp
0879b0b1 +0x001:  xor    %eax,%eax
0879b0b3 +0x003:  mov    %esp,%ebp
0879b0b5 +0x005:  push   %edi
0879b0b6 +0x006:  push   %esi
0879b0b7 +0x007:  push   %ebx
0879b0b8 +0x008:  sub    $0x8c,%esp
0879b0be +0x00e:  mov    0x10(%ebp),%edx
0879b0c1 +0x011:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b0c6 +0x016:  add    $0xbd1ad2,%ebx
0879b0cc +0x01c:  mov    0x8(%ebp),%esi
0879b0cf +0x01f:  test   %edx,%edx
0879b0d1 +0x021:  mov    %edx,-0x2c(%ebp)
0879b0d4 +0x024:  je     0879b0e6 <+0x36>
0879b0d6 +0x026:  mov    %edx,(%esp)
0879b0d9 +0x029:  movb   $0x0,0x4(%esp)
0879b0de +0x02e:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0879b0e3 +0x033:  mov    -0x2c(%ebp),%edx
0879b0e6 +0x036:  mov    %edx,0x8(%esp)
0879b0ea +0x03a:  mov    0xc(%ebp),%edx
0879b0ed +0x03d:  lea    0x20(%esi),%edi
0879b0f0 +0x040:  mov    %eax,-0x28(%ebp)
0879b0f3 +0x043:  mov    %eax,(%esp)
0879b0f6 +0x046:  mov    %edx,0x4(%esp)
0879b0fa +0x04a:  call   0807d8a0 <_init+0x198>
0879b0ff +0x04f:  lea    -0x2c(%ebp),%eax
0879b102 +0x052:  mov    %eax,0x4(%esp)
0879b106 +0x056:  mov    %edi,(%esp)
0879b109 +0x059:  movl   $0x0,-0x20(%ebp)
0879b110 +0x060:  movl   $0x0,-0x1c(%ebp)
0879b117 +0x067:  call   08767ca0 <_ZN8TaoCrypt14RSA_PrivateKey10InitializeERNS_6SourceE>  ; TaoCrypt::RSA_PrivateKey::Initialize(TaoCrypt::Source&)
0879b11c +0x06c:  lea    -0x4c(%ebp),%eax
0879b11f +0x06f:  mov    %eax,(%esp)
0879b122 +0x072:  mov    %eax,-0x7c(%ebp)
0879b125 +0x075:  mov    %edi,0x4(%esp)
0879b129 +0x079:  lea    -0x3c(%ebp),%edi
0879b12c +0x07c:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879b131 +0x081:  lea    0x30(%esi),%edx
0879b134 +0x084:  mov    %edx,0x4(%esp)
0879b138 +0x088:  mov    %edi,(%esp)
0879b13b +0x08b:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879b140 +0x090:  mov    -0x7c(%ebp),%eax
0879b143 +0x093:  mov    %eax,0x4(%esp)
0879b147 +0x097:  lea    -0x6c(%ebp),%eax
0879b14a +0x09a:  mov    %eax,(%esp)
0879b14d +0x09d:  mov    %eax,-0x7c(%ebp)
0879b150 +0x0a0:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879b155 +0x0a5:  mov    %edi,0x4(%esp)
0879b159 +0x0a9:  lea    -0x5c(%ebp),%edi
0879b15c +0x0ac:  mov    %edi,(%esp)
0879b15f +0x0af:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879b164 +0x0b4:  mov    -0x7c(%ebp),%eax
0879b167 +0x0b7:  mov    %esi,(%esp)
0879b16a +0x0ba:  add    $0x10,%esi
0879b16d +0x0bd:  mov    %eax,0x4(%esp)
0879b171 +0x0c1:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
0879b176 +0x0c6:  mov    %edi,0x4(%esp)
0879b17a +0x0ca:  mov    %esi,(%esp)
0879b17d +0x0cd:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
0879b182 +0x0d2:  mov    -0x5c(%ebp),%eax
0879b185 +0x0d5:  mov    -0x58(%ebp),%esi
0879b188 +0x0d8:  movl   $0x0,0x4(%esp)
0879b190 +0x0e0:  shl    $0x2,%eax
0879b193 +0x0e3:  mov    %esi,(%esp)
0879b196 +0x0e6:  mov    %eax,0x8(%esp)
0879b19a +0x0ea:  call   0807dcc0 <_init+0x5b8>
0879b19f +0x0ef:  mov    %esi,(%esp)
0879b1a2 +0x0f2:  movb   $0x0,0x4(%esp)
0879b1a7 +0x0f7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b1ac +0x0fc:  mov    -0x6c(%ebp),%eax
0879b1af +0x0ff:  mov    -0x68(%ebp),%esi
0879b1b2 +0x102:  movl   $0x0,0x4(%esp)
0879b1ba +0x10a:  shl    $0x2,%eax
0879b1bd +0x10d:  mov    %esi,(%esp)
0879b1c0 +0x110:  mov    %eax,0x8(%esp)
0879b1c4 +0x114:  call   0807dcc0 <_init+0x5b8>
0879b1c9 +0x119:  mov    %esi,(%esp)
0879b1cc +0x11c:  movb   $0x0,0x4(%esp)
0879b1d1 +0x121:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b1d6 +0x126:  mov    -0x3c(%ebp),%eax
0879b1d9 +0x129:  mov    -0x38(%ebp),%esi
0879b1dc +0x12c:  movl   $0x0,0x4(%esp)
0879b1e4 +0x134:  shl    $0x2,%eax
0879b1e7 +0x137:  mov    %esi,(%esp)
0879b1ea +0x13a:  mov    %eax,0x8(%esp)
0879b1ee +0x13e:  call   0807dcc0 <_init+0x5b8>
0879b1f3 +0x143:  mov    %esi,(%esp)
0879b1f6 +0x146:  movb   $0x0,0x4(%esp)
0879b1fb +0x14b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b200 +0x150:  mov    -0x4c(%ebp),%eax
0879b203 +0x153:  mov    -0x48(%ebp),%esi
0879b206 +0x156:  movl   $0x0,0x4(%esp)
0879b20e +0x15e:  shl    $0x2,%eax
0879b211 +0x161:  mov    %esi,(%esp)
0879b214 +0x164:  mov    %eax,0x8(%esp)
0879b218 +0x168:  call   0807dcc0 <_init+0x5b8>
0879b21d +0x16d:  mov    %esi,(%esp)
0879b220 +0x170:  movb   $0x0,0x4(%esp)
0879b225 +0x175:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b22a +0x17a:  mov    -0x28(%ebp),%esi
0879b22d +0x17d:  mov    -0x2c(%ebp),%eax
0879b230 +0x180:  movl   $0x0,0x4(%esp)
0879b238 +0x188:  mov    %esi,(%esp)
0879b23b +0x18b:  mov    %eax,0x8(%esp)
0879b23f +0x18f:  call   0807dcc0 <_init+0x5b8>
0879b244 +0x194:  mov    %esi,(%esp)
0879b247 +0x197:  movb   $0x0,0x4(%esp)
0879b24c +0x19c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879b251 +0x1a1:  add    $0x8c,%esp
0879b257 +0x1a7:  pop    %ebx
0879b258 +0x1a8:  pop    %esi
0879b259 +0x1a9:  pop    %edi
0879b25a +0x1aa:  pop    %ebp
0879b25b +0x1ab:  ret
0879b25c +0x1ac:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::RSA::RSAImpl::SetPrivate @ 0x879b0b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RSA::RSAImpl::SetPrivate(unsigned char const*, unsigned int) */

void __thiscall yaSSL::RSA::RSAImpl::SetPrivate(RSAImpl *this,uchar *param_1,uint param_2)

{
  void *pvVar1;
  uint in_stack_ffffff68;
  uint uVar2;
  int local_70;
  void *local_6c;
  int local_60;
  void *local_5c;
  int local_50;
  void *local_4c;
  int local_40;
  void *local_3c;
  uint local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  local_2c = (void *)0x0;
  local_30 = param_2;
  if (param_2 != 0) {
    local_2c = operator_new__(param_2,in_stack_ffffff68 & 0xffffff00);
  }
  memcpy(local_2c,param_1,local_30);
  local_24 = 0;
  local_20 = 0;
  TaoCrypt::RSA_PrivateKey::Initialize((RSA_PrivateKey *)(this + 0x20),(Source *)&local_30);
  TaoCrypt::Integer::Integer((Integer *)&local_50,(Integer *)(this + 0x20));
  TaoCrypt::Integer::Integer((Integer *)&local_40,(Integer *)(this + 0x30));
  TaoCrypt::Integer::Integer((Integer *)&local_70,(Integer *)&local_50);
  TaoCrypt::Integer::Integer((Integer *)&local_60,(Integer *)&local_40);
  TaoCrypt::Integer::Swap((Integer *)this,(Integer *)&local_70);
  TaoCrypt::Integer::Swap((Integer *)(this + 0x10),(Integer *)&local_60);
  uVar2 = 0;
  memset(local_5c,0,local_60 << 2);
  operator_delete__(local_5c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_6c,0,local_70 << 2);
  operator_delete__(local_6c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_3c,0,local_40 << 2);
  operator_delete__(local_3c,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_4c,0,local_50 << 2);
  operator_delete__(local_4c,uVar2 & 0xffffff00);
  pvVar1 = local_2c;
  uVar2 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar1,uVar2 & 0xffffff00);
  return;
}
```
