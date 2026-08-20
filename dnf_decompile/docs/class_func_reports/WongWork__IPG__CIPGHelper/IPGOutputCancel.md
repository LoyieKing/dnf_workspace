# IPGOutputCancel

`_ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE`

`WongWork::IPG::CIPGHelper::IPGOutputCancel(CUser*, char const*, char const*, char const*, char const*, char const*, char const*, void*, Taiwan::BillTransaction*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x081004de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081004de  _ZN8WongWork3IPG10CIPGHelper15IPGOutputCancelEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE
#           WongWork::IPG::CIPGHelper::IPGOutputCancel(CUser*, char const*, char const*, char const*, char const*, char const*, char const*, void*, Taiwan::BillTransaction*)
# range [0x081004de, 0x08100615]
081004de +0x000:  push   %ebp
081004df +0x001:  mov    %esp,%ebp
081004e1 +0x003:  sub    $0x28,%esp
081004e4 +0x006:  movl   $0x0,0xc(%esp)
081004ec +0x00e:  movl   $0x3,0x8(%esp)
081004f4 +0x016:  mov    0xc(%ebp),%eax
081004f7 +0x019:  mov    %eax,0x4(%esp)
081004fb +0x01d:  mov    0x8(%ebp),%eax
081004fe +0x020:  mov    %eax,(%esp)
08100501 +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
08100506 +0x028:  mov    %eax,-0xc(%ebp)
08100509 +0x02b:  mov    -0xc(%ebp),%eax
0810050c +0x02e:  add    $0x69,%eax
0810050f +0x031:  movl   $0x15,0x8(%esp)
08100517 +0x039:  mov    0x10(%ebp),%edx
0810051a +0x03c:  mov    %edx,0x4(%esp)
0810051e +0x040:  mov    %eax,(%esp)
08100521 +0x043:  call   0807d8d0 <_init+0x1c8>
08100526 +0x048:  mov    -0xc(%ebp),%eax
08100529 +0x04b:  add    $0x7e,%eax
0810052c +0x04e:  movl   $0x8,0x8(%esp)
08100534 +0x056:  mov    0x14(%ebp),%edx
08100537 +0x059:  mov    %edx,0x4(%esp)
0810053b +0x05d:  mov    %eax,(%esp)
0810053e +0x060:  call   0807d8d0 <_init+0x1c8>
08100543 +0x065:  mov    -0xc(%ebp),%eax
08100546 +0x068:  add    $0x86,%eax
0810054b +0x06d:  movl   $0xc,0x8(%esp)
08100553 +0x075:  mov    0x18(%ebp),%edx
08100556 +0x078:  mov    %edx,0x4(%esp)
0810055a +0x07c:  mov    %eax,(%esp)
0810055d +0x07f:  call   0807d8d0 <_init+0x1c8>
08100562 +0x084:  mov    -0xc(%ebp),%eax
08100565 +0x087:  add    $0x92,%eax
0810056a +0x08c:  movl   $0x14,0x8(%esp)
08100572 +0x094:  mov    0x1c(%ebp),%edx
08100575 +0x097:  mov    %edx,0x4(%esp)
08100579 +0x09b:  mov    %eax,(%esp)
0810057c +0x09e:  call   0807d8d0 <_init+0x1c8>
08100581 +0x0a3:  cmpl   $0x0,0x20(%ebp)
08100585 +0x0a7:  je     081005a6 <+0xc8>
08100587 +0x0a9:  mov    -0xc(%ebp),%eax
0810058a +0x0ac:  add    $0xa6,%eax
0810058f +0x0b1:  movl   $0x64,0x8(%esp)
08100597 +0x0b9:  mov    0x20(%ebp),%edx
0810059a +0x0bc:  mov    %edx,0x4(%esp)
0810059e +0x0c0:  mov    %eax,(%esp)
081005a1 +0x0c3:  call   0807d8d0 <_init+0x1c8>
081005a6 +0x0c8:  cmpl   $0x0,0x24(%ebp)
081005aa +0x0cc:  je     081005cb <+0xed>
081005ac +0x0ce:  mov    -0xc(%ebp),%eax
081005af +0x0d1:  add    $0x10a,%eax
081005b4 +0x0d6:  movl   $0x64,0x8(%esp)
081005bc +0x0de:  mov    0x24(%ebp),%edx
081005bf +0x0e1:  mov    %edx,0x4(%esp)
081005c3 +0x0e5:  mov    %eax,(%esp)
081005c6 +0x0e8:  call   0807d8d0 <_init+0x1c8>
081005cb +0x0ed:  mov    -0xc(%ebp),%eax
081005ce +0x0f0:  mov    0x28(%ebp),%edx
081005d1 +0x0f3:  mov    %edx,0x2d8(%eax)
081005d7 +0x0f9:  mov    -0xc(%ebp),%eax
081005da +0x0fc:  mov    0x2c(%ebp),%edx
081005dd +0x0ff:  mov    (%edx),%ecx
081005df +0x101:  mov    %ecx,0x1f0(%eax)
081005e5 +0x107:  mov    0x4(%edx),%ecx
081005e8 +0x10a:  mov    %ecx,0x1f4(%eax)
081005ee +0x110:  mov    0x8(%edx),%edx
081005f1 +0x113:  mov    %edx,0x1f8(%eax)
081005f7 +0x119:  mov    0x8(%ebp),%eax
081005fa +0x11c:  mov    0x4(%eax),%eax
081005fd +0x11f:  movl   $0x1,0x8(%esp)
08100605 +0x127:  mov    -0xc(%ebp),%edx
08100608 +0x12a:  mov    %edx,0x4(%esp)
0810060c +0x12e:  mov    %eax,(%esp)
0810060f +0x131:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
08100614 +0x136:  leave
08100615 +0x137:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutputCancel @ 0x81004de

/* WongWork::IPG::CIPGHelper::IPGOutputCancel(CUser*, char const*, char const*, char const*, char
   const*, char const*, char const*, void*, Taiwan::BillTransaction*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputCancel
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,void *param_8,BillTransaction *param_9)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,3,0);
  strncpy((char *)(pSVar1 + 0x69),param_2,0x15);
  strncpy((char *)(pSVar1 + 0x7e),param_3,8);
  strncpy((char *)(pSVar1 + 0x86),param_4,0xc);
  strncpy((char *)(pSVar1 + 0x92),param_5,0x14);
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xa6),param_6,100);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x10a),param_7,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_8;
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)param_9;
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_9 + 4);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_9 + 8);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
