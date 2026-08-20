# IPGOutputConfirm

`_ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE`

`WongWork::IPG::CIPGHelper::IPGOutputConfirm(CUser*, char const*, char const*, char const*, char const*, char const*, char const*, void*, Taiwan::BillTransaction*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100cd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100cd2  _ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEP5CUserPKcS5_S5_S5_S5_S5_PvPN6Taiwan15BillTransactionE
#           WongWork::IPG::CIPGHelper::IPGOutputConfirm(CUser*, char const*, char const*, char const*, char const*, char const*, char const*, void*, Taiwan::BillTransaction*)
# range [0x08100cd2, 0x08100e09]
08100cd2 +0x000:  push   %ebp
08100cd3 +0x001:  mov    %esp,%ebp
08100cd5 +0x003:  sub    $0x28,%esp
08100cd8 +0x006:  movl   $0x0,0xc(%esp)
08100ce0 +0x00e:  movl   $0x5,0x8(%esp)
08100ce8 +0x016:  mov    0xc(%ebp),%eax
08100ceb +0x019:  mov    %eax,0x4(%esp)
08100cef +0x01d:  mov    0x8(%ebp),%eax
08100cf2 +0x020:  mov    %eax,(%esp)
08100cf5 +0x023:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
08100cfa +0x028:  mov    %eax,-0xc(%ebp)
08100cfd +0x02b:  mov    -0xc(%ebp),%eax
08100d00 +0x02e:  add    $0x69,%eax
08100d03 +0x031:  movl   $0x15,0x8(%esp)
08100d0b +0x039:  mov    0x10(%ebp),%edx
08100d0e +0x03c:  mov    %edx,0x4(%esp)
08100d12 +0x040:  mov    %eax,(%esp)
08100d15 +0x043:  call   0807d8d0 <_init+0x1c8>
08100d1a +0x048:  mov    -0xc(%ebp),%eax
08100d1d +0x04b:  add    $0x7e,%eax
08100d20 +0x04e:  movl   $0x8,0x8(%esp)
08100d28 +0x056:  mov    0x14(%ebp),%edx
08100d2b +0x059:  mov    %edx,0x4(%esp)
08100d2f +0x05d:  mov    %eax,(%esp)
08100d32 +0x060:  call   0807d8d0 <_init+0x1c8>
08100d37 +0x065:  mov    -0xc(%ebp),%eax
08100d3a +0x068:  add    $0x86,%eax
08100d3f +0x06d:  movl   $0xc,0x8(%esp)
08100d47 +0x075:  mov    0x18(%ebp),%edx
08100d4a +0x078:  mov    %edx,0x4(%esp)
08100d4e +0x07c:  mov    %eax,(%esp)
08100d51 +0x07f:  call   0807d8d0 <_init+0x1c8>
08100d56 +0x084:  mov    -0xc(%ebp),%eax
08100d59 +0x087:  add    $0x92,%eax
08100d5e +0x08c:  movl   $0x14,0x8(%esp)
08100d66 +0x094:  mov    0x1c(%ebp),%edx
08100d69 +0x097:  mov    %edx,0x4(%esp)
08100d6d +0x09b:  mov    %eax,(%esp)
08100d70 +0x09e:  call   0807d8d0 <_init+0x1c8>
08100d75 +0x0a3:  cmpl   $0x0,0x20(%ebp)
08100d79 +0x0a7:  je     08100d9a <+0xc8>
08100d7b +0x0a9:  mov    -0xc(%ebp),%eax
08100d7e +0x0ac:  add    $0xa6,%eax
08100d83 +0x0b1:  movl   $0x64,0x8(%esp)
08100d8b +0x0b9:  mov    0x20(%ebp),%edx
08100d8e +0x0bc:  mov    %edx,0x4(%esp)
08100d92 +0x0c0:  mov    %eax,(%esp)
08100d95 +0x0c3:  call   0807d8d0 <_init+0x1c8>
08100d9a +0x0c8:  cmpl   $0x0,0x24(%ebp)
08100d9e +0x0cc:  je     08100dbf <+0xed>
08100da0 +0x0ce:  mov    -0xc(%ebp),%eax
08100da3 +0x0d1:  add    $0x10a,%eax
08100da8 +0x0d6:  movl   $0x64,0x8(%esp)
08100db0 +0x0de:  mov    0x24(%ebp),%edx
08100db3 +0x0e1:  mov    %edx,0x4(%esp)
08100db7 +0x0e5:  mov    %eax,(%esp)
08100dba +0x0e8:  call   0807d8d0 <_init+0x1c8>
08100dbf +0x0ed:  mov    -0xc(%ebp),%eax
08100dc2 +0x0f0:  mov    0x28(%ebp),%edx
08100dc5 +0x0f3:  mov    %edx,0x2d8(%eax)
08100dcb +0x0f9:  mov    -0xc(%ebp),%eax
08100dce +0x0fc:  mov    0x2c(%ebp),%edx
08100dd1 +0x0ff:  mov    (%edx),%ecx
08100dd3 +0x101:  mov    %ecx,0x1f0(%eax)
08100dd9 +0x107:  mov    0x4(%edx),%ecx
08100ddc +0x10a:  mov    %ecx,0x1f4(%eax)
08100de2 +0x110:  mov    0x8(%edx),%edx
08100de5 +0x113:  mov    %edx,0x1f8(%eax)
08100deb +0x119:  mov    0x8(%ebp),%eax
08100dee +0x11c:  mov    0x4(%eax),%eax
08100df1 +0x11f:  movl   $0x1,0x8(%esp)
08100df9 +0x127:  mov    -0xc(%ebp),%edx
08100dfc +0x12a:  mov    %edx,0x4(%esp)
08100e00 +0x12e:  mov    %eax,(%esp)
08100e03 +0x131:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
08100e08 +0x136:  leave
08100e09 +0x137:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutputConfirm @ 0x8100cd2

/* WongWork::IPG::CIPGHelper::IPGOutputConfirm(CUser*, char const*, char const*, char const*, char
   const*, char const*, char const*, void*, Taiwan::BillTransaction*) */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputConfirm
          (CIPGHelper *this,CUser *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
          char *param_6,char *param_7,void *param_8,BillTransaction *param_9)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,5,0);
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
