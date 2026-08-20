# IPGOutputSimulation

`_ZN8WongWork3IPG10CIPGHelper19IPGOutputSimulationEP5CUserPKcS5_S5_S5_S5_Pv`

`WongWork::IPG::CIPGHelper::IPGOutputSimulation(CUser*, char const*, char const*, char const*, char const*, char const*, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x0810034e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810034e  _ZN8WongWork3IPG10CIPGHelper19IPGOutputSimulationEP5CUserPKcS5_S5_S5_S5_Pv
#           WongWork::IPG::CIPGHelper::IPGOutputSimulation(CUser*, char const*, char const*, char const*, char const*, char const*, void*)
# range [0x0810034e, 0x081004dd]
0810034e +0x000:  push   %ebp
0810034f +0x001:  mov    %esp,%ebp
08100351 +0x003:  sub    $0x28,%esp
08100354 +0x006:  movl   $0x1,0xc(%esp)
0810035c +0x00e:  movl   $0x2,0x8(%esp)
08100364 +0x016:  mov    0xc(%ebp),%eax
08100367 +0x019:  mov    %eax,0x4(%esp)
0810036b +0x01d:  mov    0x8(%ebp),%eax
0810036e +0x020:  mov    %eax,(%esp)
08100371 +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
08100376 +0x028:  mov    %eax,-0x10(%ebp)
08100379 +0x02b:  mov    -0x10(%ebp),%eax
0810037c +0x02e:  add    $0x69,%eax
0810037f +0x031:  movl   $0x8,0x8(%esp)
08100387 +0x039:  mov    0x10(%ebp),%edx
0810038a +0x03c:  mov    %edx,0x4(%esp)
0810038e +0x040:  mov    %eax,(%esp)
08100391 +0x043:  call   0807d8d0 <_init+0x1c8>
08100396 +0x048:  mov    -0x10(%ebp),%eax
08100399 +0x04b:  add    $0x71,%eax
0810039c +0x04e:  movl   $0xc,0x8(%esp)
081003a4 +0x056:  mov    0x14(%ebp),%edx
081003a7 +0x059:  mov    %edx,0x4(%esp)
081003ab +0x05d:  mov    %eax,(%esp)
081003ae +0x060:  call   0807d8d0 <_init+0x1c8>
081003b3 +0x065:  mov    -0x10(%ebp),%eax
081003b6 +0x068:  add    $0x7d,%eax
081003b9 +0x06b:  movl   $0x14,0x8(%esp)
081003c1 +0x073:  mov    0x18(%ebp),%edx
081003c4 +0x076:  mov    %edx,0x4(%esp)
081003c8 +0x07a:  mov    %eax,(%esp)
081003cb +0x07d:  call   0807d8d0 <_init+0x1c8>
081003d0 +0x082:  cmpl   $0x0,0x1c(%ebp)
081003d4 +0x086:  je     081003f5 <+0xa7>
081003d6 +0x088:  mov    -0x10(%ebp),%eax
081003d9 +0x08b:  add    $0x91,%eax
081003de +0x090:  movl   $0x64,0x8(%esp)
081003e6 +0x098:  mov    0x1c(%ebp),%edx
081003e9 +0x09b:  mov    %edx,0x4(%esp)
081003ed +0x09f:  mov    %eax,(%esp)
081003f0 +0x0a2:  call   0807d8d0 <_init+0x1c8>
081003f5 +0x0a7:  cmpl   $0x0,0x20(%ebp)
081003f9 +0x0ab:  je     0810041a <+0xcc>
081003fb +0x0ad:  mov    -0x10(%ebp),%eax
081003fe +0x0b0:  add    $0xf5,%eax
08100403 +0x0b5:  movl   $0x64,0x8(%esp)
0810040b +0x0bd:  mov    0x20(%ebp),%edx
0810040e +0x0c0:  mov    %edx,0x4(%esp)
08100412 +0x0c4:  mov    %eax,(%esp)
08100415 +0x0c7:  call   0807d8d0 <_init+0x1c8>
0810041a +0x0cc:  mov    -0x10(%ebp),%eax
0810041d +0x0cf:  mov    0x24(%ebp),%edx
08100420 +0x0d2:  mov    %edx,0x2d8(%eax)
08100426 +0x0d8:  mov    0x8(%ebp),%eax
08100429 +0x0db:  mov    0x4(%eax),%eax
0810042c +0x0de:  mov    %eax,(%esp)
0810042f +0x0e1:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
08100434 +0x0e6:  mov    %eax,-0xc(%ebp)
08100437 +0x0e9:  mov    -0x10(%ebp),%eax
0810043a +0x0ec:  mov    (%eax),%eax
0810043c +0x0ee:  mov    -0x10(%ebp),%edx
0810043f +0x0f1:  lea    0x28(%edx),%ecx
08100442 +0x0f4:  mov    -0xc(%ebp),%edx
08100445 +0x0f7:  add    $0x28,%edx
08100448 +0x0fa:  mov    %eax,0x8(%esp)
0810044c +0x0fe:  mov    %ecx,0x4(%esp)
08100450 +0x102:  mov    %edx,(%esp)
08100453 +0x105:  call   0807d8a0 <_init+0x198>
08100458 +0x10a:  mov    -0xc(%ebp),%eax
0810045b +0x10d:  add    $0x173,%eax
08100460 +0x112:  movl   $0x2,0x8(%esp)
08100468 +0x11a:  movl   $"0",0x4(%esp)
08100470 +0x122:  mov    %eax,(%esp)
08100473 +0x125:  call   0807d8a0 <_init+0x198>
08100478 +0x12a:  mov    -0x10(%ebp),%eax
0810047b +0x12d:  mov    (%eax),%edx
0810047d +0x12f:  mov    -0xc(%ebp),%eax
08100480 +0x132:  mov    %edx,(%eax)
08100482 +0x134:  mov    -0x10(%ebp),%eax
08100485 +0x137:  mov    0x1c(%eax),%edx
08100488 +0x13a:  mov    -0xc(%ebp),%eax
0810048b +0x13d:  mov    %edx,0x1c(%eax)
0810048e +0x140:  mov    0x8(%ebp),%eax
08100491 +0x143:  mov    (%eax),%eax
08100493 +0x145:  add    $0x34,%eax
08100496 +0x148:  mov    (%eax),%edx
08100498 +0x14a:  mov    -0xc(%ebp),%eax
0810049b +0x14d:  mov    %eax,0x8(%esp)
0810049f +0x151:  mov    -0x10(%ebp),%eax
081004a2 +0x154:  mov    %eax,0x4(%esp)
081004a6 +0x158:  mov    0x8(%ebp),%eax
081004a9 +0x15b:  mov    %eax,(%esp)
081004ac +0x15e:  call   *%edx
081004ae +0x160:  mov    0x8(%ebp),%eax
081004b1 +0x163:  mov    0x4(%eax),%eax
081004b4 +0x166:  mov    -0x10(%ebp),%edx
081004b7 +0x169:  mov    %edx,0x4(%esp)
081004bb +0x16d:  mov    %eax,(%esp)
081004be +0x170:  call   081046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*)
081004c3 +0x175:  mov    0x8(%ebp),%eax
081004c6 +0x178:  mov    0x4(%eax),%eax
081004c9 +0x17b:  mov    -0xc(%ebp),%edx
081004cc +0x17e:  mov    %edx,0x4(%esp)
081004d0 +0x182:  mov    %eax,(%esp)
081004d3 +0x185:  call   081046f0 <_ZN8WongWork3IPG7CIPGMgr11FreeIPGDataEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::FreeIPGData(WongWork::IPG::SIPGData*)
081004d8 +0x18a:  mov    -0x10(%ebp),%eax
081004db +0x18d:  leave
081004dc +0x18e:  ret
081004dd +0x18f:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutputSimulation @ 0x810034e

/* WongWork::IPG::CIPGHelper::IPGOutputSimulation(CUser*, char const*, char const*, char const*,
   char const*, char const*, void*) */

SIPGData * __thiscall
WongWork::IPG::CIPGHelper::IPGOutputSimulation
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  SIPGData *pSVar2;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,2,1);
  strncpy((char *)(pSVar1 + 0x69),param_2,8);
  strncpy((char *)(pSVar1 + 0x71),param_3,0xc);
  strncpy((char *)(pSVar1 + 0x7d),param_4,0x14);
  if (param_5 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x91),param_5,100);
  }
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xf5),param_6,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_7;
  pSVar2 = (SIPGData *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  memcpy(pSVar2 + 0x28,pSVar1 + 0x28,*(size_t *)pSVar1);
  memcpy(pSVar2 + 0x173,&DAT_08b41446,2);
  *(undefined4 *)pSVar2 = *(undefined4 *)pSVar1;
  *(undefined4 *)(pSVar2 + 0x1c) = *(undefined4 *)(pSVar1 + 0x1c);
  (**(code **)(*(int *)this + 0x34))(this,pSVar1,pSVar2);
  CIPGMgr::FreeIPGData(*(CIPGMgr **)(this + 4),pSVar1);
  CIPGMgr::FreeIPGData(*(CIPGMgr **)(this + 4),pSVar2);
  return pSVar1;
}
```
