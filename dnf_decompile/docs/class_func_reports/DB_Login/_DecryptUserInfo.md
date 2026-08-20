# _DecryptUserInfo

`_ZN8DB_Login16_DecryptUserInfoEPcS0_j`

`DB_Login::_DecryptUserInfo(char*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0841300e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841300e  _ZN8DB_Login16_DecryptUserInfoEPcS0_j
#           DB_Login::_DecryptUserInfo(char*, char*, unsigned int)
# range [0x0841300e, 0x0841325d]
0841300e +0x000:  push   %ebp
0841300f +0x001:  mov    %esp,%ebp
08413011 +0x003:  push   %edi
08413012 +0x004:  push   %esi
08413013 +0x005:  push   %ebx
08413014 +0x006:  sub    $0x55c,%esp
0841301a +0x00c:  movl   $0x6fffffff,-0x1c(%ebp)
08413021 +0x013:  lea    -0x548(%ebp),%eax
08413027 +0x019:  mov    %eax,(%esp)
0841302a +0x01c:  call   080b60ac <_ZN9CRijndaelC1Ev>  ; CRijndael::CRijndael()
0841302f +0x021:  movl   $0x0,0x1c(%esp)
08413037 +0x029:  movl   $0x0,0x18(%esp)
0841303f +0x031:  movl   $0x10,0x14(%esp)
08413047 +0x039:  movl   $0x10,0x10(%esp)
0841304f +0x041:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
08413057 +0x049:  movl   $0x20,0x8(%esp)
0841305f +0x051:  movl   $"sbTgiYsfxpfg5fox",0x4(%esp)
08413067 +0x059:  lea    -0x548(%ebp),%eax
0841306d +0x05f:  mov    %eax,(%esp)
08413070 +0x062:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
08413075 +0x067:  lea    -0xcc(%ebp),%ebx
0841307b +0x06d:  mov    $0x0,%eax
08413080 +0x072:  mov    $0x20,%edx
08413085 +0x077:  mov    %ebx,%edi
08413087 +0x079:  mov    %edx,%ecx
08413089 +0x07b:  rep stos %eax,%es:(%edi)
0841308b +0x07d:  mov    0xc(%ebp),%eax
0841308e +0x080:  mov    %eax,(%esp)
08413091 +0x083:  call   0807e3b0 <_init+0xca8>
08413096 +0x088:  shr    %eax
08413098 +0x08a:  cmp    $0x80,%eax
0841309d +0x08f:  jbe    084130f8 <+0xea>
0841309f +0x091:  movl   $0x0,0x4(%esp)
084130a7 +0x099:  mov    0x14(%ebp),%eax
084130aa +0x09c:  mov    %eax,(%esp)
084130ad +0x09f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084130b2 +0x0a4:  mov    %eax,%ebx
084130b4 +0x0a6:  movl   $0x5,0xc(%esp)
084130bc +0x0ae:  movl   $0x3815,0x8(%esp)
084130c4 +0x0b6:  movl   $&_ZZN8DB_Login16_DecryptUserInfoEPcS0_jE19__PRETTY_FUNCTION__,0x4(%esp)
084130cc +0x0be:  lea    -0x4c(%ebp),%eax
084130cf +0x0c1:  mov    %eax,(%esp)
084130d2 +0x0c4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084130d7 +0x0c9:  mov    %ebx,0x8(%esp)
084130db +0x0cd:  movl   $"DB_Login::_DecryptUserInfo ERROR m_id=%s",0x4(%esp)
084130e3 +0x0d5:  lea    -0x4c(%ebp),%eax
084130e6 +0x0d8:  mov    %eax,(%esp)
084130e9 +0x0db:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084130ee +0x0e0:  mov    $0x0,%ebx
084130f3 +0x0e5:  jmp    08413243 <+0x235>
084130f8 +0x0ea:  mov    0xc(%ebp),%eax
084130fb +0x0ed:  mov    %eax,(%esp)
084130fe +0x0f0:  call   0807e3b0 <_init+0xca8>
08413103 +0x0f5:  shr    %eax
08413105 +0x0f7:  mov    %eax,%edx
08413107 +0x0f9:  lea    -0xcc(%ebp),%eax
0841310d +0x0ff:  mov    %edx,0x8(%esp)
08413111 +0x103:  mov    %eax,0x4(%esp)
08413115 +0x107:  mov    0xc(%ebp),%eax
08413118 +0x10a:  mov    %eax,(%esp)
0841311b +0x10d:  call   081088cf <_ZN7DNFFLib10Hex2BinaryEPKcPhi>  ; DNFFLib::Hex2Binary(char const*, unsigned char*, int)
08413120 +0x112:  xor    $0x1,%eax
08413123 +0x115:  test   %al,%al
08413125 +0x117:  je     08413180 <+0x172>
08413127 +0x119:  movl   $0x0,0x4(%esp)
0841312f +0x121:  mov    0x14(%ebp),%eax
08413132 +0x124:  mov    %eax,(%esp)
08413135 +0x127:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841313a +0x12c:  mov    %eax,%ebx
0841313c +0x12e:  movl   $0x5,0xc(%esp)
08413144 +0x136:  movl   $0x381b,0x8(%esp)
0841314c +0x13e:  movl   $&_ZZN8DB_Login16_DecryptUserInfoEPcS0_jE19__PRETTY_FUNCTION__,0x4(%esp)
08413154 +0x146:  lea    -0x3c(%ebp),%eax
08413157 +0x149:  mov    %eax,(%esp)
0841315a +0x14c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841315f +0x151:  mov    %ebx,0x8(%esp)
08413163 +0x155:  movl   $"DB_Login::_DecryptUserInfo::Hex2Binary ERROR m_id=%s",0x4(%esp)
0841316b +0x15d:  lea    -0x3c(%ebp),%eax
0841316e +0x160:  mov    %eax,(%esp)
08413171 +0x163:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413176 +0x168:  mov    $0x0,%ebx
0841317b +0x16d:  jmp    08413243 <+0x235>
08413180 +0x172:  mov    0xc(%ebp),%eax
08413183 +0x175:  mov    %eax,(%esp)
08413186 +0x178:  call   0807e3b0 <_init+0xca8>
0841318b +0x17d:  shr    %eax
0841318d +0x17f:  mov    %eax,0xc(%esp)
08413191 +0x183:  mov    0x10(%ebp),%eax
08413194 +0x186:  mov    %eax,0x8(%esp)
08413198 +0x18a:  lea    -0xcc(%ebp),%eax
0841319e +0x190:  mov    %eax,0x4(%esp)
084131a2 +0x194:  lea    -0x548(%ebp),%eax
084131a8 +0x19a:  mov    %eax,(%esp)
084131ab +0x19d:  call   080b8028 <_ZN9CRijndael7DecryptEPKcPcj>  ; CRijndael::Decrypt(char const*, char*, unsigned int)
084131b0 +0x1a2:  mov    %eax,-0x1c(%ebp)
084131b3 +0x1a5:  cmpl   $0x6fffffff,-0x1c(%ebp)
084131ba +0x1ac:  setne  %al
084131bd +0x1af:  test   %al,%al
084131bf +0x1b1:  je     0841321e <+0x210>
084131c1 +0x1b3:  movl   $0x0,0x4(%esp)
084131c9 +0x1bb:  mov    0x14(%ebp),%eax
084131cc +0x1be:  mov    %eax,(%esp)
084131cf +0x1c1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084131d4 +0x1c6:  mov    %eax,%ebx
084131d6 +0x1c8:  movl   $0x5,0xc(%esp)
084131de +0x1d0:  movl   $0x3820,0x8(%esp)
084131e6 +0x1d8:  movl   $&_ZZN8DB_Login16_DecryptUserInfoEPcS0_jE19__PRETTY_FUNCTION__,0x4(%esp)
084131ee +0x1e0:  lea    -0x2c(%ebp),%eax
084131f1 +0x1e3:  mov    %eax,(%esp)
084131f4 +0x1e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084131f9 +0x1eb:  mov    -0x1c(%ebp),%eax
084131fc +0x1ee:  mov    %eax,0xc(%esp)
08413200 +0x1f2:  mov    %ebx,0x8(%esp)
08413204 +0x1f6:  movl   $"DB_Login::_DecryptUserInfo::Decrypt ERROR m_id=%s ret=%u",0x4(%esp)
0841320c +0x1fe:  lea    -0x2c(%ebp),%eax
0841320f +0x201:  mov    %eax,(%esp)
08413212 +0x204:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413217 +0x209:  mov    $0x0,%ebx
0841321c +0x20e:  jmp    08413243 <+0x235>
0841321e +0x210:  mov    $0x1,%ebx
08413223 +0x215:  jmp    08413243 <+0x235>
08413225 +0x217:  mov    %edx,%ebx
08413227 +0x219:  mov    %eax,%esi
08413229 +0x21b:  lea    -0x548(%ebp),%eax
0841322f +0x221:  mov    %eax,(%esp)
08413232 +0x224:  call   080b61d2 <_ZN9CRijndaelD1Ev>  ; CRijndael::~CRijndael()
08413237 +0x229:  mov    %esi,%eax
08413239 +0x22b:  mov    %ebx,%edx
0841323b +0x22d:  mov    %eax,(%esp)
0841323e +0x230:  call   08ae3750 <_Unwind_Resume>
08413243 +0x235:  lea    -0x548(%ebp),%eax
08413249 +0x23b:  mov    %eax,(%esp)
0841324c +0x23e:  call   080b61d2 <_ZN9CRijndaelD1Ev>  ; CRijndael::~CRijndael()
08413251 +0x243:  mov    %ebx,%eax
08413253 +0x245:  add    $0x55c,%esp
08413259 +0x24b:  pop    %ebx
0841325a +0x24c:  pop    %esi
0841325b +0x24d:  pop    %edi
0841325c +0x24e:  pop    %ebp
0841325d +0x24f:  ret
```

## 反编译 C

```c
// DB_Login::_DecryptUserInfo @ 0x841300e

/* DB_Login::_DecryptUserInfo(char*, char*, unsigned int) */

undefined4 __thiscall
DB_Login::_DecryptUserInfo(DB_Login *this,char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  uchar *puVar5;
  byte bVar6;
  CRijndael local_54c [1148];
  uchar local_d0 [128];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  bVar6 = 0;
  local_20 = 0x6fffffff;
  CRijndael::CRijndael(local_54c);
                    /* try { // try from 08413070 to 08413216 has its CatchHandler @ 08413225 */
  CRijndael::Initialize(local_54c,"sbTgiYsfxpfg5fox",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  puVar5 = local_d0;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar5[0] = '\0';
    puVar5[1] = '\0';
    puVar5[2] = '\0';
    puVar5[3] = '\0';
    puVar5 = puVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  sVar2 = strlen(param_1);
  if (sVar2 >> 1 < 0x81) {
    sVar2 = strlen(param_1);
    cVar1 = DNFFLib::Hex2Binary(param_1,local_d0,sVar2 >> 1);
    if (cVar1 == '\x01') {
      sVar2 = strlen(param_1);
      local_20 = CRijndael::Decrypt(local_54c,(char *)local_d0,param_2,sVar2 >> 1);
      if (local_20 == 0x6fffffff) {
        uVar3 = 1;
      }
      else {
        uVar3 = NumberToString(param_3,0);
        cMyTrace::cMyTrace(local_30,
                           "bool DB_Login::_DecryptUserInfo(char*, char*, memberIdentificationNumber_t)"
                           ,0x3820,5);
        cMyTrace::operator()
                  (local_30,"DB_Login::_DecryptUserInfo::Decrypt ERROR m_id=%s ret=%u",uVar3,
                   local_20);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = NumberToString(param_3,0);
      cMyTrace::cMyTrace(local_40,
                         "bool DB_Login::_DecryptUserInfo(char*, char*, memberIdentificationNumber_t)"
                         ,0x381b,5);
      cMyTrace::operator()(local_40,"DB_Login::_DecryptUserInfo::Hex2Binary ERROR m_id=%s",uVar3);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = NumberToString(param_3,0);
    cMyTrace::cMyTrace(local_50,
                       "bool DB_Login::_DecryptUserInfo(char*, char*, memberIdentificationNumber_t)"
                       ,0x3815,5);
    cMyTrace::operator()(local_50,"DB_Login::_DecryptUserInfo ERROR m_id=%s",uVar3);
    uVar3 = 0;
  }
  CRijndael::~CRijndael(local_54c);
  return uVar3;
}
```
