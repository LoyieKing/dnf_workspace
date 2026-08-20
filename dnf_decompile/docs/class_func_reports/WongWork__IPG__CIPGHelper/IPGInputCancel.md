# IPGInputCancel

`_ZN8WongWork3IPG10CIPGHelper14IPGInputCancelEP5CUserPKcS5_S5_S5_S5_S5_Pv`

`WongWork::IPG::CIPGHelper::IPGInputCancel(CUser*, char const*, char const*, char const*, char const*, char const*, char const*, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x080ffea8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ffea8  _ZN8WongWork3IPG10CIPGHelper14IPGInputCancelEP5CUserPKcS5_S5_S5_S5_S5_Pv
#           WongWork::IPG::CIPGHelper::IPGInputCancel(CUser*, char const*, char const*, char const*, char const*, char const*, char const*, void*)
# range [0x080ffea8, 0x080fffbf]
080ffea8 +0x000:  push   %ebp
080ffea9 +0x001:  mov    %esp,%ebp
080ffeab +0x003:  sub    $0x28,%esp
080ffeae +0x006:  movl   $0x0,0xc(%esp)
080ffeb6 +0x00e:  movl   $0x1,0x8(%esp)
080ffebe +0x016:  mov    0xc(%ebp),%eax
080ffec1 +0x019:  mov    %eax,0x4(%esp)
080ffec5 +0x01d:  mov    0x8(%ebp),%eax
080ffec8 +0x020:  mov    %eax,(%esp)
080ffecb +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
080ffed0 +0x028:  mov    %eax,-0xc(%ebp)
080ffed3 +0x02b:  mov    -0xc(%ebp),%eax
080ffed6 +0x02e:  add    $0x69,%eax
080ffed9 +0x031:  movl   $0x15,0x8(%esp)
080ffee1 +0x039:  mov    0x10(%ebp),%edx
080ffee4 +0x03c:  mov    %edx,0x4(%esp)
080ffee8 +0x040:  mov    %eax,(%esp)
080ffeeb +0x043:  call   0807d8d0 <_init+0x1c8>
080ffef0 +0x048:  mov    -0xc(%ebp),%eax
080ffef3 +0x04b:  add    $0x7e,%eax
080ffef6 +0x04e:  movl   $0xb,0x8(%esp)
080ffefe +0x056:  mov    0x14(%ebp),%edx
080fff01 +0x059:  mov    %edx,0x4(%esp)
080fff05 +0x05d:  mov    %eax,(%esp)
080fff08 +0x060:  call   0807d8d0 <_init+0x1c8>
080fff0d +0x065:  mov    -0xc(%ebp),%eax
080fff10 +0x068:  add    $0x89,%eax
080fff15 +0x06d:  movl   $0xc,0x8(%esp)
080fff1d +0x075:  mov    0x18(%ebp),%edx
080fff20 +0x078:  mov    %edx,0x4(%esp)
080fff24 +0x07c:  mov    %eax,(%esp)
080fff27 +0x07f:  call   0807d8d0 <_init+0x1c8>
080fff2c +0x084:  mov    -0xc(%ebp),%eax
080fff2f +0x087:  add    $0x95,%eax
080fff34 +0x08c:  movl   $0x14,0x8(%esp)
080fff3c +0x094:  mov    0x1c(%ebp),%edx
080fff3f +0x097:  mov    %edx,0x4(%esp)
080fff43 +0x09b:  mov    %eax,(%esp)
080fff46 +0x09e:  call   0807d8d0 <_init+0x1c8>
080fff4b +0x0a3:  cmpl   $0x0,0x20(%ebp)
080fff4f +0x0a7:  je     080fff70 <+0xc8>
080fff51 +0x0a9:  mov    -0xc(%ebp),%eax
080fff54 +0x0ac:  add    $0xa9,%eax
080fff59 +0x0b1:  movl   $0x64,0x8(%esp)
080fff61 +0x0b9:  mov    0x20(%ebp),%edx
080fff64 +0x0bc:  mov    %edx,0x4(%esp)
080fff68 +0x0c0:  mov    %eax,(%esp)
080fff6b +0x0c3:  call   0807d8d0 <_init+0x1c8>
080fff70 +0x0c8:  cmpl   $0x0,0x24(%ebp)
080fff74 +0x0cc:  je     080fff95 <+0xed>
080fff76 +0x0ce:  mov    -0xc(%ebp),%eax
080fff79 +0x0d1:  add    $0x10d,%eax
080fff7e +0x0d6:  movl   $0x64,0x8(%esp)
080fff86 +0x0de:  mov    0x24(%ebp),%edx
080fff89 +0x0e1:  mov    %edx,0x4(%esp)
080fff8d +0x0e5:  mov    %eax,(%esp)
080fff90 +0x0e8:  call   0807d8d0 <_init+0x1c8>
080fff95 +0x0ed:  mov    -0xc(%ebp),%eax
080fff98 +0x0f0:  mov    0x28(%ebp),%edx
080fff9b +0x0f3:  mov    %edx,0x2d8(%eax)
080fffa1 +0x0f9:  mov    0x8(%ebp),%eax
080fffa4 +0x0fc:  mov    0x4(%eax),%eax
080fffa7 +0x0ff:  movl   $0x1,0x8(%esp)
080fffaf +0x107:  mov    -0xc(%ebp),%edx
080fffb2 +0x10a:  mov    %edx,0x4(%esp)
080fffb6 +0x10e:  mov    %eax,(%esp)
080fffb9 +0x111:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
080fffbe +0x116:  leave
080fffbf +0x117:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGInputCancel @ 0x80ffea8

/* WongWork::IPG::CIPGHelper::IPGInputCancel(CUser*, char const*, char const*, char const*, char
   const*, char const*, char const*, void*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGInputCancel
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,void *param_8)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,1,0);
  strncpy((char *)(pSVar1 + 0x69),param_2,0x15);
  strncpy((char *)(pSVar1 + 0x7e),param_3,0xb);
  strncpy((char *)(pSVar1 + 0x89),param_4,0xc);
  strncpy((char *)(pSVar1 + 0x95),param_5,0x14);
  if (param_6 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0xa9),param_6,100);
  }
  if (param_7 != (char *)0x0) {
    strncpy((char *)(pSVar1 + 0x10d),param_7,100);
  }
  *(void **)(pSVar1 + 0x2d8) = param_8;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
