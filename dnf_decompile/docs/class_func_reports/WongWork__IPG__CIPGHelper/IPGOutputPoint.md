# IPGOutputPoint

`_ZN8WongWork3IPG10CIPGHelper14IPGOutputPointEP5CUserPKcS5_S5_S5_S5_Pv`

`WongWork::IPG::CIPGHelper::IPGOutputPoint(CUser*, char const*, char const*, char const*, char const*, char const*, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x081000f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081000f6  _ZN8WongWork3IPG10CIPGHelper14IPGOutputPointEP5CUserPKcS5_S5_S5_S5_Pv
#           WongWork::IPG::CIPGHelper::IPGOutputPoint(CUser*, char const*, char const*, char const*, char const*, char const*, void*)
# range [0x081000f6, 0x0810022d]
081000f6 +0x000:  push   %ebp
081000f7 +0x001:  mov    %esp,%ebp
081000f9 +0x003:  sub    $0x28,%esp
081000fc +0x006:  movl   $0x1,0xc(%esp)
08100104 +0x00e:  movl   $0x6,0x8(%esp)
0810010c +0x016:  mov    0xc(%ebp),%eax
0810010f +0x019:  mov    %eax,0x4(%esp)
08100113 +0x01d:  mov    0x8(%ebp),%eax
08100116 +0x020:  mov    %eax,(%esp)
08100119 +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
0810011e +0x028:  mov    %eax,-0xc(%ebp)
08100121 +0x02b:  mov    0xc(%ebp),%eax
08100124 +0x02e:  mov    %eax,(%esp)
08100127 +0x031:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810012c +0x036:  mov    -0xc(%ebp),%edx
0810012f +0x039:  add    $0x28,%edx
08100132 +0x03c:  mov    %eax,0x8(%esp)
08100136 +0x040:  movl   $"%d",0x4(%esp)
0810013e +0x048:  mov    %edx,(%esp)
08100141 +0x04b:  call   0807e440 <_init+0xd38>
08100146 +0x050:  mov    0xc(%ebp),%eax
08100149 +0x053:  mov    %eax,(%esp)
0810014c +0x056:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08100151 +0x05b:  mov    -0xc(%ebp),%edx
08100154 +0x05e:  add    $0x3c,%edx
08100157 +0x061:  movl   $0x28,0x8(%esp)
0810015f +0x069:  mov    %eax,0x4(%esp)
08100163 +0x06d:  mov    %edx,(%esp)
08100166 +0x070:  call   0807d8d0 <_init+0x1c8>
0810016b +0x075:  mov    0xc(%ebp),%eax
0810016e +0x078:  mov    %eax,(%esp)
08100171 +0x07b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08100176 +0x080:  mov    -0xc(%ebp),%edx
08100179 +0x083:  add    $0x64,%edx
0810017c +0x086:  movl   $0x28,0x8(%esp)
08100184 +0x08e:  mov    %eax,0x4(%esp)
08100188 +0x092:  mov    %edx,(%esp)
0810018b +0x095:  call   0807d8d0 <_init+0x1c8>
08100190 +0x09a:  mov    -0xc(%ebp),%eax
08100193 +0x09d:  add    $0x8c,%eax
08100198 +0x0a2:  movl   $0x8,0x8(%esp)
081001a0 +0x0aa:  mov    0x10(%ebp),%edx
081001a3 +0x0ad:  mov    %edx,0x4(%esp)
081001a7 +0x0b1:  mov    %eax,(%esp)
081001aa +0x0b4:  call   0807d8d0 <_init+0x1c8>
081001af +0x0b9:  mov    -0xc(%ebp),%eax
081001b2 +0x0bc:  add    $0x94,%eax
081001b7 +0x0c1:  movl   $0x15,0x8(%esp)
081001bf +0x0c9:  mov    0x18(%ebp),%edx
081001c2 +0x0cc:  mov    %edx,0x4(%esp)
081001c6 +0x0d0:  mov    %eax,(%esp)
081001c9 +0x0d3:  call   0807d8d0 <_init+0x1c8>
081001ce +0x0d8:  mov    0x14(%ebp),%eax
081001d1 +0x0db:  mov    %eax,(%esp)
081001d4 +0x0de:  call   0807e6f0 <_init+0xfe8>
081001d9 +0x0e3:  mov    %eax,%edx
081001db +0x0e5:  mov    -0xc(%ebp),%eax
081001de +0x0e8:  mov    %edx,0xac(%eax)
081001e4 +0x0ee:  mov    -0xc(%ebp),%eax
081001e7 +0x0f1:  movb   $0x55,0xb0(%eax)
081001ee +0x0f8:  mov    -0xc(%ebp),%eax
081001f1 +0x0fb:  movb   $0x0,0xb1(%eax)
081001f8 +0x102:  mov    -0xc(%ebp),%eax
081001fb +0x105:  movb   $0x0,0xb2(%eax)
08100202 +0x10c:  mov    -0xc(%ebp),%eax
08100205 +0x10f:  mov    0x24(%ebp),%edx
08100208 +0x112:  mov    %edx,0x2d8(%eax)
0810020e +0x118:  mov    0x8(%ebp),%eax
08100211 +0x11b:  mov    0x4(%eax),%eax
08100214 +0x11e:  movl   $0x1,0x8(%esp)
0810021c +0x126:  mov    -0xc(%ebp),%edx
0810021f +0x129:  mov    %edx,0x4(%esp)
08100223 +0x12d:  mov    %eax,(%esp)
08100226 +0x130:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
0810022b +0x135:  leave
0810022c +0x136:  ret
0810022d +0x137:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutputPoint @ 0x81000f6

/* WongWork::IPG::CIPGHelper::IPGOutputPoint(CUser*, char const*, char const*, char const*, char
   const*, char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputPoint
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,6,1);
  uVar2 = CUser::get_acc_id(param_1);
  sprintf((char *)(pSVar1 + 0x28),"%d",uVar2);
  pcVar3 = (char *)CUser::get_acc_name(param_1);
  strncpy((char *)(pSVar1 + 0x3c),pcVar3,0x28);
  pcVar3 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(pSVar1 + 100),pcVar3,0x28);
  strncpy((char *)(pSVar1 + 0x8c),param_2,8);
  strncpy((char *)(pSVar1 + 0x94),param_4,0x15);
  iVar4 = atoi(param_3);
  *(int *)(pSVar1 + 0xac) = iVar4;
  pSVar1[0xb0] = (SIPGData)0x55;
  pSVar1[0xb1] = (SIPGData)0x0;
  pSVar1[0xb2] = (SIPGData)0x0;
  *(void **)(pSVar1 + 0x2d8) = param_7;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
