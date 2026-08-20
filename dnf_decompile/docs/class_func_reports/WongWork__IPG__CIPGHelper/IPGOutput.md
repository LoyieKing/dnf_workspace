# IPGOutput

`_ZN8WongWork3IPG10CIPGHelper9IPGOutputEP5CUserPKcS5_S5_S5_S5_Pv`

`WongWork::IPG::CIPGHelper::IPGOutput(CUser*, char const*, char const*, char const*, char const*, char const*, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x0810022e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810022e  _ZN8WongWork3IPG10CIPGHelper9IPGOutputEP5CUserPKcS5_S5_S5_S5_Pv
#           WongWork::IPG::CIPGHelper::IPGOutput(CUser*, char const*, char const*, char const*, char const*, char const*, void*)
# range [0x0810022e, 0x0810034d]
0810022e +0x000:  push   %ebp
0810022f +0x001:  mov    %esp,%ebp
08100231 +0x003:  sub    $0x28,%esp
08100234 +0x006:  movl   $0x1,0xc(%esp)
0810023c +0x00e:  movl   $0x2,0x8(%esp)
08100244 +0x016:  mov    0xc(%ebp),%eax
08100247 +0x019:  mov    %eax,0x4(%esp)
0810024b +0x01d:  mov    0x8(%ebp),%eax
0810024e +0x020:  mov    %eax,(%esp)
08100251 +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
08100256 +0x028:  mov    %eax,-0xc(%ebp)
08100259 +0x02b:  mov    -0xc(%ebp),%eax
0810025c +0x02e:  add    $0x69,%eax
0810025f +0x031:  movl   $0x8,0x8(%esp)
08100267 +0x039:  mov    0x10(%ebp),%edx
0810026a +0x03c:  mov    %edx,0x4(%esp)
0810026e +0x040:  mov    %eax,(%esp)
08100271 +0x043:  call   0807d8d0 <_init+0x1c8>
08100276 +0x048:  mov    -0xc(%ebp),%eax
08100279 +0x04b:  add    $0x71,%eax
0810027c +0x04e:  movl   $0xc,0x8(%esp)
08100284 +0x056:  mov    0x14(%ebp),%edx
08100287 +0x059:  mov    %edx,0x4(%esp)
0810028b +0x05d:  mov    %eax,(%esp)
0810028e +0x060:  call   0807d8d0 <_init+0x1c8>
08100293 +0x065:  mov    -0xc(%ebp),%eax
08100296 +0x068:  add    $0x7d,%eax
08100299 +0x06b:  movl   $0x14,0x8(%esp)
081002a1 +0x073:  mov    0x18(%ebp),%edx
081002a4 +0x076:  mov    %edx,0x4(%esp)
081002a8 +0x07a:  mov    %eax,(%esp)
081002ab +0x07d:  call   0807d8d0 <_init+0x1c8>
081002b0 +0x082:  cmpl   $0x0,0x1c(%ebp)
081002b4 +0x086:  je     081002d5 <+0xa7>
081002b6 +0x088:  mov    -0xc(%ebp),%eax
081002b9 +0x08b:  add    $0x91,%eax
081002be +0x090:  movl   $0x64,0x8(%esp)
081002c6 +0x098:  mov    0x1c(%ebp),%edx
081002c9 +0x09b:  mov    %edx,0x4(%esp)
081002cd +0x09f:  mov    %eax,(%esp)
081002d0 +0x0a2:  call   0807d8d0 <_init+0x1c8>
081002d5 +0x0a7:  cmpl   $0x0,0x20(%ebp)
081002d9 +0x0ab:  je     081002fa <+0xcc>
081002db +0x0ad:  mov    -0xc(%ebp),%eax
081002de +0x0b0:  add    $0xf5,%eax
081002e3 +0x0b5:  movl   $0x64,0x8(%esp)
081002eb +0x0bd:  mov    0x20(%ebp),%edx
081002ee +0x0c0:  mov    %edx,0x4(%esp)
081002f2 +0x0c4:  mov    %eax,(%esp)
081002f5 +0x0c7:  call   0807d8d0 <_init+0x1c8>
081002fa +0x0cc:  mov    0xc(%ebp),%eax
081002fd +0x0cf:  mov    %eax,(%esp)
08100300 +0x0d2:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08100305 +0x0d7:  mov    -0xc(%ebp),%edx
08100308 +0x0da:  add    $0x1e8,%edx
0810030e +0x0e0:  movl   $0x3a,0x8(%esp)
08100316 +0x0e8:  mov    %eax,0x4(%esp)
0810031a +0x0ec:  mov    %edx,(%esp)
0810031d +0x0ef:  call   0807d8d0 <_init+0x1c8>
08100322 +0x0f4:  mov    -0xc(%ebp),%eax
08100325 +0x0f7:  mov    0x24(%ebp),%edx
08100328 +0x0fa:  mov    %edx,0x2d8(%eax)
0810032e +0x100:  mov    0x8(%ebp),%eax
08100331 +0x103:  mov    0x4(%eax),%eax
08100334 +0x106:  movl   $0x1,0x8(%esp)
0810033c +0x10e:  mov    -0xc(%ebp),%edx
0810033f +0x111:  mov    %edx,0x4(%esp)
08100343 +0x115:  mov    %eax,(%esp)
08100346 +0x118:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
0810034b +0x11d:  leave
0810034c +0x11e:  ret
0810034d +0x11f:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutput @ 0x810022e

/* WongWork::IPG::CIPGHelper::IPGOutput(CUser*, char const*, char const*, char const*, char const*,
   char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutput
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,void *param_7)

{
  SIPGData *pSVar1;
  char *__src;
  
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
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(pSVar1 + 0x1e8),__src,0x3a);
  *(void **)(pSVar1 + 0x2d8) = param_7;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
