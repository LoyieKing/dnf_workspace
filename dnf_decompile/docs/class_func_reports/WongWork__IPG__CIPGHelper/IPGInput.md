# IPGInput

`_ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserPKcS5_S5_S5_S5_Pv`

`WongWork::IPG::CIPGHelper::IPGInput(CUser*, char const*, char const*, char const*, char const*, char const*, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x080ffb0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ffb0a  _ZN8WongWork3IPG10CIPGHelper8IPGInputEP5CUserPKcS5_S5_S5_S5_Pv
#           WongWork::IPG::CIPGHelper::IPGInput(CUser*, char const*, char const*, char const*, char const*, char const*, void*)
# range [0x080ffb0a, 0x080ffca3]
080ffb0a +0x000:  push   %ebp
080ffb0b +0x001:  mov    %esp,%ebp
080ffb0d +0x003:  sub    $0x28,%esp
080ffb10 +0x006:  movl   $0x1,0xc(%esp)
080ffb18 +0x00e:  movl   $0x0,0x8(%esp)
080ffb20 +0x016:  mov    0xc(%ebp),%eax
080ffb23 +0x019:  mov    %eax,0x4(%esp)
080ffb27 +0x01d:  mov    0x8(%ebp),%eax
080ffb2a +0x020:  mov    %eax,(%esp)
080ffb2d +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
080ffb32 +0x028:  mov    %eax,-0xc(%ebp)
080ffb35 +0x02b:  mov    -0xc(%ebp),%eax
080ffb38 +0x02e:  lea    0xdd(%eax),%edx
080ffb3e +0x034:  movl   $0xb,0x8(%esp)
080ffb46 +0x03c:  mov    0x10(%ebp),%eax
080ffb49 +0x03f:  mov    %eax,0x4(%esp)
080ffb4d +0x043:  mov    %edx,(%esp)
080ffb50 +0x046:  call   0807d8d0 <_init+0x1c8>
080ffb55 +0x04b:  mov    -0xc(%ebp),%eax
080ffb58 +0x04e:  lea    0xe8(%eax),%edx
080ffb5e +0x054:  movl   $0xc,0x8(%esp)
080ffb66 +0x05c:  mov    0x14(%ebp),%eax
080ffb69 +0x05f:  mov    %eax,0x4(%esp)
080ffb6d +0x063:  mov    %edx,(%esp)
080ffb70 +0x066:  call   0807d8d0 <_init+0x1c8>
080ffb75 +0x06b:  mov    -0xc(%ebp),%eax
080ffb78 +0x06e:  lea    0xf4(%eax),%edx
080ffb7e +0x074:  movl   $0x14,0x8(%esp)
080ffb86 +0x07c:  mov    0x18(%ebp),%eax
080ffb89 +0x07f:  mov    %eax,0x4(%esp)
080ffb8d +0x083:  mov    %edx,(%esp)
080ffb90 +0x086:  call   0807d8d0 <_init+0x1c8>
080ffb95 +0x08b:  cmpl   $0x0,0x1c(%ebp)
080ffb99 +0x08f:  je     080ffbbb <+0xb1>
080ffb9b +0x091:  mov    -0xc(%ebp),%eax
080ffb9e +0x094:  lea    0x108(%eax),%edx
080ffba4 +0x09a:  movl   $0x64,0x8(%esp)
080ffbac +0x0a2:  mov    0x1c(%ebp),%eax
080ffbaf +0x0a5:  mov    %eax,0x4(%esp)
080ffbb3 +0x0a9:  mov    %edx,(%esp)
080ffbb6 +0x0ac:  call   0807d8d0 <_init+0x1c8>
080ffbbb +0x0b1:  cmpl   $0x0,0x20(%ebp)
080ffbbf +0x0b5:  je     080ffbe1 <+0xd7>
080ffbc1 +0x0b7:  mov    -0xc(%ebp),%eax
080ffbc4 +0x0ba:  lea    0x16c(%eax),%edx
080ffbca +0x0c0:  movl   $0x64,0x8(%esp)
080ffbd2 +0x0c8:  mov    0x20(%ebp),%eax
080ffbd5 +0x0cb:  mov    %eax,0x4(%esp)
080ffbd9 +0x0cf:  mov    %edx,(%esp)
080ffbdc +0x0d2:  call   0807d8d0 <_init+0x1c8>
080ffbe1 +0x0d7:  mov    0xc(%ebp),%eax
080ffbe4 +0x0da:  mov    %eax,(%esp)
080ffbe7 +0x0dd:  call   08101048 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x6a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x6a
080ffbec +0x0e2:  mov    -0xc(%ebp),%edx
080ffbef +0x0e5:  add    $0x1d0,%edx
080ffbf5 +0x0eb:  movl   $0x32,0x8(%esp)
080ffbfd +0x0f3:  mov    %eax,0x4(%esp)
080ffc01 +0x0f7:  mov    %edx,(%esp)
080ffc04 +0x0fa:  call   0807d8d0 <_init+0x1c8>
080ffc09 +0x0ff:  mov    0xc(%ebp),%eax
080ffc0c +0x102:  mov    %eax,(%esp)
080ffc0f +0x105:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
080ffc14 +0x10a:  mov    -0xc(%ebp),%edx
080ffc17 +0x10d:  add    $0x202,%edx
080ffc1d +0x113:  movl   $0xe,0x8(%esp)
080ffc25 +0x11b:  mov    %eax,0x4(%esp)
080ffc29 +0x11f:  mov    %edx,(%esp)
080ffc2c +0x122:  call   0807d8d0 <_init+0x1c8>
080ffc31 +0x127:  mov    0xc(%ebp),%eax
080ffc34 +0x12a:  mov    %eax,(%esp)
080ffc37 +0x12d:  call   08101064 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x86>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x86
080ffc3c +0x132:  mov    -0xc(%ebp),%edx
080ffc3f +0x135:  add    $0x210,%edx
080ffc45 +0x13b:  movl   $0x3c,0x8(%esp)
080ffc4d +0x143:  mov    %eax,0x4(%esp)
080ffc51 +0x147:  mov    %edx,(%esp)
080ffc54 +0x14a:  call   0807d8d0 <_init+0x1c8>
080ffc59 +0x14f:  mov    -0xc(%ebp),%eax
080ffc5c +0x152:  add    $0x24c,%eax
080ffc61 +0x157:  movl   $0x7,0x8(%esp)
080ffc69 +0x15f:  movl   $0x0,0x4(%esp)
080ffc71 +0x167:  mov    %eax,(%esp)
080ffc74 +0x16a:  call   0807dcc0 <_init+0x5b8>
080ffc79 +0x16f:  mov    -0xc(%ebp),%eax
080ffc7c +0x172:  mov    0x24(%ebp),%edx
080ffc7f +0x175:  mov    %edx,0x2d8(%eax)
080ffc85 +0x17b:  mov    0x8(%ebp),%eax
080ffc88 +0x17e:  mov    0x4(%eax),%eax
080ffc8b +0x181:  movl   $0x1,0x8(%esp)
080ffc93 +0x189:  mov    -0xc(%ebp),%edx
080ffc96 +0x18c:  mov    %edx,0x4(%esp)
080ffc9a +0x190:  mov    %eax,(%esp)
080ffc9d +0x193:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
080ffca2 +0x198:  leave
080ffca3 +0x199:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGInput @ 0x80ffb0a

/* WongWork::IPG::CIPGHelper::IPGInput(CUser*, char const*, char const*, char const*, char const*,
   char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGInput
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  char *pcVar2;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,0,1);
  strncpy((char *)(pSVar1 + 0xdd),param_2,0xb);
  strncpy((char *)(pSVar1 + 0xe8),param_3,0xc);
  strncpy((char *)(pSVar1 + 0xf4),param_4,0x14);
  if (param_5 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x108),param_5,100);
  }
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x16c),param_6,100);
  }
  pcVar2 = (char *)CUser::GetUserName(param_1);
  strncpy((char *)(pSVar1 + 0x1d0),pcVar2,0x32);
  pcVar2 = (char *)CUser::GetSsnString(param_1);
  strncpy((char *)(pSVar1 + 0x202),pcVar2,0xe);
  pcVar2 = (char *)CUser::GetUserEMail(param_1);
  strncpy((char *)(pSVar1 + 0x210),pcVar2,0x3c);
  memset(pSVar1 + 0x24c,0,7);
  *(void **)(pSVar1 + 0x2d8) = param_7;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
