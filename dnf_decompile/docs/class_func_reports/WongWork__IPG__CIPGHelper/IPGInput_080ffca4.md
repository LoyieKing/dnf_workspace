# IPGInput

`_ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserhjPKcS5_S5_S5_S5_Pv`

`WongWork::IPG::CIPGHelper::IPGInput(CUser*, unsigned char, unsigned int, char const*, char const*, char const*, char const*, char const*, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x080ffca4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ffca4  _ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserhjPKcS5_S5_S5_S5_Pv
#           WongWork::IPG::CIPGHelper::IPGInput(CUser*, unsigned char, unsigned int, char const*, char const*, char const*, char const*, char const*, void*)
# range [0x080ffca4, 0x080ffea7]
080ffca4 +0x000:  push   %ebp
080ffca5 +0x001:  mov    %esp,%ebp
080ffca7 +0x003:  sub    $0x38,%esp
080ffcaa +0x006:  mov    0x10(%ebp),%eax
080ffcad +0x009:  mov    %al,-0x1c(%ebp)
080ffcb0 +0x00c:  movl   $0x1,0xc(%esp)
080ffcb8 +0x014:  movl   $0x0,0x8(%esp)
080ffcc0 +0x01c:  mov    0xc(%ebp),%eax
080ffcc3 +0x01f:  mov    %eax,0x4(%esp)
080ffcc7 +0x023:  mov    0x8(%ebp),%eax
080ffcca +0x026:  mov    %eax,(%esp)
080ffccd +0x029:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
080ffcd2 +0x02e:  mov    %eax,-0xc(%ebp)
080ffcd5 +0x031:  mov    -0xc(%ebp),%eax
080ffcd8 +0x034:  lea    0xdd(%eax),%edx
080ffcde +0x03a:  movl   $0xb,0x8(%esp)
080ffce6 +0x042:  mov    0x18(%ebp),%eax
080ffce9 +0x045:  mov    %eax,0x4(%esp)
080ffced +0x049:  mov    %edx,(%esp)
080ffcf0 +0x04c:  call   0807d8d0 <_init+0x1c8>
080ffcf5 +0x051:  mov    -0xc(%ebp),%eax
080ffcf8 +0x054:  lea    0xe8(%eax),%edx
080ffcfe +0x05a:  movl   $0xc,0x8(%esp)
080ffd06 +0x062:  mov    0x1c(%ebp),%eax
080ffd09 +0x065:  mov    %eax,0x4(%esp)
080ffd0d +0x069:  mov    %edx,(%esp)
080ffd10 +0x06c:  call   0807d8d0 <_init+0x1c8>
080ffd15 +0x071:  mov    -0xc(%ebp),%eax
080ffd18 +0x074:  lea    0xf4(%eax),%edx
080ffd1e +0x07a:  movl   $0x14,0x8(%esp)
080ffd26 +0x082:  mov    0x20(%ebp),%eax
080ffd29 +0x085:  mov    %eax,0x4(%esp)
080ffd2d +0x089:  mov    %edx,(%esp)
080ffd30 +0x08c:  call   0807d8d0 <_init+0x1c8>
080ffd35 +0x091:  cmpl   $0x0,0x24(%ebp)
080ffd39 +0x095:  je     080ffd5b <+0xb7>
080ffd3b +0x097:  mov    -0xc(%ebp),%eax
080ffd3e +0x09a:  lea    0x108(%eax),%edx
080ffd44 +0x0a0:  movl   $0x64,0x8(%esp)
080ffd4c +0x0a8:  mov    0x24(%ebp),%eax
080ffd4f +0x0ab:  mov    %eax,0x4(%esp)
080ffd53 +0x0af:  mov    %edx,(%esp)
080ffd56 +0x0b2:  call   0807d8d0 <_init+0x1c8>
080ffd5b +0x0b7:  cmpl   $0x0,0x28(%ebp)
080ffd5f +0x0bb:  je     080ffd81 <+0xdd>
080ffd61 +0x0bd:  mov    -0xc(%ebp),%eax
080ffd64 +0x0c0:  lea    0x16c(%eax),%edx
080ffd6a +0x0c6:  movl   $0x64,0x8(%esp)
080ffd72 +0x0ce:  mov    0x28(%ebp),%eax
080ffd75 +0x0d1:  mov    %eax,0x4(%esp)
080ffd79 +0x0d5:  mov    %edx,(%esp)
080ffd7c +0x0d8:  call   0807d8d0 <_init+0x1c8>
080ffd81 +0x0dd:  mov    0xc(%ebp),%eax
080ffd84 +0x0e0:  mov    %eax,(%esp)
080ffd87 +0x0e3:  call   08101048 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x6a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x6a
080ffd8c +0x0e8:  mov    -0xc(%ebp),%edx
080ffd8f +0x0eb:  add    $0x1d0,%edx
080ffd95 +0x0f1:  movl   $0x32,0x8(%esp)
080ffd9d +0x0f9:  mov    %eax,0x4(%esp)
080ffda1 +0x0fd:  mov    %edx,(%esp)
080ffda4 +0x100:  call   0807d8d0 <_init+0x1c8>
080ffda9 +0x105:  mov    0xc(%ebp),%eax
080ffdac +0x108:  mov    %eax,(%esp)
080ffdaf +0x10b:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
080ffdb4 +0x110:  mov    -0xc(%ebp),%edx
080ffdb7 +0x113:  add    $0x202,%edx
080ffdbd +0x119:  movl   $0xe,0x8(%esp)
080ffdc5 +0x121:  mov    %eax,0x4(%esp)
080ffdc9 +0x125:  mov    %edx,(%esp)
080ffdcc +0x128:  call   0807d8d0 <_init+0x1c8>
080ffdd1 +0x12d:  mov    0xc(%ebp),%eax
080ffdd4 +0x130:  mov    %eax,(%esp)
080ffdd7 +0x133:  call   08101064 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x86>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x86
080ffddc +0x138:  mov    -0xc(%ebp),%edx
080ffddf +0x13b:  add    $0x210,%edx
080ffde5 +0x141:  movl   $0x3c,0x8(%esp)
080ffded +0x149:  mov    %eax,0x4(%esp)
080ffdf1 +0x14d:  mov    %edx,(%esp)
080ffdf4 +0x150:  call   0807d8d0 <_init+0x1c8>
080ffdf9 +0x155:  mov    -0xc(%ebp),%eax
080ffdfc +0x158:  add    $0x24c,%eax
080ffe01 +0x15d:  movl   $0x7,0x8(%esp)
080ffe09 +0x165:  movl   $0x0,0x4(%esp)
080ffe11 +0x16d:  mov    %eax,(%esp)
080ffe14 +0x170:  call   0807dcc0 <_init+0x5b8>
080ffe19 +0x175:  mov    0xc(%ebp),%eax
080ffe1c +0x178:  mov    %eax,(%esp)
080ffe1f +0x17b:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
080ffe24 +0x180:  mov    -0xc(%ebp),%edx
080ffe27 +0x183:  add    $0x28,%edx
080ffe2a +0x186:  movl   $0x20,0x8(%esp)
080ffe32 +0x18e:  mov    %eax,0x4(%esp)
080ffe36 +0x192:  mov    %edx,(%esp)
080ffe39 +0x195:  call   0807d8d0 <_init+0x1c8>
080ffe3e +0x19a:  mov    0xc(%ebp),%eax
080ffe41 +0x19d:  mov    %eax,(%esp)
080ffe44 +0x1a0:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
080ffe49 +0x1a5:  mov    -0xc(%ebp),%edx
080ffe4c +0x1a8:  add    $0x50,%edx
080ffe4f +0x1ab:  movl   $0x1e,0x8(%esp)
080ffe57 +0x1b3:  mov    %eax,0x4(%esp)
080ffe5b +0x1b7:  mov    %edx,(%esp)
080ffe5e +0x1ba:  call   0807d8d0 <_init+0x1c8>
080ffe63 +0x1bf:  mov    -0xc(%ebp),%eax
080ffe66 +0x1c2:  movzbl -0x1c(%ebp),%edx
080ffe6a +0x1c6:  mov    %dl,0x26d(%eax)
080ffe70 +0x1cc:  mov    0x14(%ebp),%edx
080ffe73 +0x1cf:  mov    -0xc(%ebp),%eax
080ffe76 +0x1d2:  mov    %edx,0x98(%eax)
080ffe7c +0x1d8:  mov    -0xc(%ebp),%eax
080ffe7f +0x1db:  mov    0x2c(%ebp),%edx
080ffe82 +0x1de:  mov    %edx,0x2d8(%eax)
080ffe88 +0x1e4:  mov    0x8(%ebp),%eax
080ffe8b +0x1e7:  mov    0x4(%eax),%eax
080ffe8e +0x1ea:  movl   $0x1,0x8(%esp)
080ffe96 +0x1f2:  mov    -0xc(%ebp),%edx
080ffe99 +0x1f5:  mov    %edx,0x4(%esp)
080ffe9d +0x1f9:  mov    %eax,(%esp)
080ffea0 +0x1fc:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
080ffea5 +0x201:  leave
080ffea6 +0x202:  ret
080ffea7 +0x203:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGInput @ 0x80ffca4

/* WongWork::IPG::CIPGHelper::IPGInput(CUser*, unsigned char, unsigned int, char const*, char
   const*, char const*, char const*, char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGInput
          (CIPGHelper *this,CUser *param_1,uchar param_2,uint param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,char *param_8,void *param_9)

{
  SIPGData *pSVar1;
  char *pcVar2;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,0,1);
  strncpy((char *)(pSVar1 + 0xdd),param_4,0xb);
  strncpy((char *)(pSVar1 + 0xe8),param_5,0xc);
  strncpy((char *)(pSVar1 + 0xf4),param_6,0x14);
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x108),param_7,100);
  }
  if (param_8 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x16c),param_8,100);
  }
  pcVar2 = (char *)CUser::GetUserName(param_1);
  strncpy((char *)(pSVar1 + 0x1d0),pcVar2,0x32);
  pcVar2 = (char *)CUser::GetSsnString(param_1);
  strncpy((char *)(pSVar1 + 0x202),pcVar2,0xe);
  pcVar2 = (char *)CUser::GetUserEMail(param_1);
  strncpy((char *)(pSVar1 + 0x210),pcVar2,0x3c);
  memset(pSVar1 + 0x24c,0,7);
  pcVar2 = (char *)CUser::get_acc_name(param_1);
  strncpy((char *)(pSVar1 + 0x28),pcVar2,0x20);
  pcVar2 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(pSVar1 + 0x50),pcVar2,0x1e);
  pSVar1[0x26d] = (SIPGData)param_2;
  *(uint *)(pSVar1 + 0x98) = param_3;
  *(void **)(pSVar1 + 0x2d8) = param_9;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
