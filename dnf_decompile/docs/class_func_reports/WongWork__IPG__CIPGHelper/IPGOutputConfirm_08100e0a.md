# IPGOutputConfirm

`_ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEPNS0_8SIPGDataES3_`

`WongWork::IPG::CIPGHelper::IPGOutputConfirm(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100e0a  _ZN8WongWork3IPG10CIPGHelper16IPGOutputConfirmEPNS0_8SIPGDataES3_
#           WongWork::IPG::CIPGHelper::IPGOutputConfirm(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)
# range [0x08100e0a, 0x08100f9d]
08100e0a +0x000:  push   %ebp
08100e0b +0x001:  mov    %esp,%ebp
08100e0d +0x003:  sub    $0x28,%esp
08100e10 +0x006:  mov    0x8(%ebp),%eax
08100e13 +0x009:  mov    0x4(%eax),%eax
08100e16 +0x00c:  mov    %eax,(%esp)
08100e19 +0x00f:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
08100e1e +0x014:  mov    %eax,-0xc(%ebp)
08100e21 +0x017:  mov    -0xc(%ebp),%eax
08100e24 +0x01a:  movl   $0xffffffff,0x20(%eax)
08100e2b +0x021:  mov    -0xc(%ebp),%eax
08100e2e +0x024:  movl   $0x5,0x1c(%eax)
08100e35 +0x02b:  mov    -0xc(%ebp),%eax
08100e38 +0x02e:  movb   $0x0,0x24(%eax)
08100e3c +0x032:  mov    0xc(%ebp),%eax
08100e3f +0x035:  lea    0x28(%eax),%edx
08100e42 +0x038:  mov    -0xc(%ebp),%eax
08100e45 +0x03b:  add    $0x28,%eax
08100e48 +0x03e:  movl   $0x41,0x8(%esp)
08100e50 +0x046:  mov    %edx,0x4(%esp)
08100e54 +0x04a:  mov    %eax,(%esp)
08100e57 +0x04d:  call   0807d8a0 <_init+0x198>
08100e5c +0x052:  mov    0x10(%ebp),%eax
08100e5f +0x055:  add    $0x16e,%eax
08100e64 +0x05a:  mov    %eax,%edx
08100e66 +0x05c:  mov    -0xc(%ebp),%eax
08100e69 +0x05f:  add    $0x69,%eax
08100e6c +0x062:  movl   $0x15,0x8(%esp)
08100e74 +0x06a:  mov    %edx,0x4(%esp)
08100e78 +0x06e:  mov    %eax,(%esp)
08100e7b +0x071:  call   0807d8d0 <_init+0x1c8>
08100e80 +0x076:  mov    0xc(%ebp),%eax
08100e83 +0x079:  add    $0x69,%eax
08100e86 +0x07c:  mov    %eax,%edx
08100e88 +0x07e:  mov    -0xc(%ebp),%eax
08100e8b +0x081:  add    $0x7e,%eax
08100e8e +0x084:  movl   $0x8,0x8(%esp)
08100e96 +0x08c:  mov    %edx,0x4(%esp)
08100e9a +0x090:  mov    %eax,(%esp)
08100e9d +0x093:  call   0807d8d0 <_init+0x1c8>
08100ea2 +0x098:  mov    0xc(%ebp),%eax
08100ea5 +0x09b:  add    $0x7d,%eax
08100ea8 +0x09e:  mov    %eax,%edx
08100eaa +0x0a0:  mov    -0xc(%ebp),%eax
08100ead +0x0a3:  add    $0x92,%eax
08100eb2 +0x0a8:  movl   $0x14,0x8(%esp)
08100eba +0x0b0:  mov    %edx,0x4(%esp)
08100ebe +0x0b4:  mov    %eax,(%esp)
08100ec1 +0x0b7:  call   0807d8d0 <_init+0x1c8>
08100ec6 +0x0bc:  mov    0xc(%ebp),%eax
08100ec9 +0x0bf:  add    $0x71,%eax
08100ecc +0x0c2:  mov    %eax,%edx
08100ece +0x0c4:  mov    -0xc(%ebp),%eax
08100ed1 +0x0c7:  add    $0x86,%eax
08100ed6 +0x0cc:  movl   $0xc,0x8(%esp)
08100ede +0x0d4:  mov    %edx,0x4(%esp)
08100ee2 +0x0d8:  mov    %eax,(%esp)
08100ee5 +0x0db:  call   0807d8d0 <_init+0x1c8>
08100eea +0x0e0:  mov    0xc(%ebp),%eax
08100eed +0x0e3:  add    $0x91,%eax
08100ef2 +0x0e8:  test   %eax,%eax
08100ef4 +0x0ea:  je     08100f1c <+0x112>
08100ef6 +0x0ec:  mov    0xc(%ebp),%eax
08100ef9 +0x0ef:  add    $0x91,%eax
08100efe +0x0f4:  mov    %eax,%edx
08100f00 +0x0f6:  mov    -0xc(%ebp),%eax
08100f03 +0x0f9:  add    $0xa6,%eax
08100f08 +0x0fe:  movl   $0x64,0x8(%esp)
08100f10 +0x106:  mov    %edx,0x4(%esp)
08100f14 +0x10a:  mov    %eax,(%esp)
08100f17 +0x10d:  call   0807d8d0 <_init+0x1c8>
08100f1c +0x112:  mov    0xc(%ebp),%eax
08100f1f +0x115:  add    $0xf5,%eax
08100f24 +0x11a:  test   %eax,%eax
08100f26 +0x11c:  je     08100f4e <+0x144>
08100f28 +0x11e:  mov    0xc(%ebp),%eax
08100f2b +0x121:  add    $0xf5,%eax
08100f30 +0x126:  mov    %eax,%edx
08100f32 +0x128:  mov    -0xc(%ebp),%eax
08100f35 +0x12b:  add    $0x10a,%eax
08100f3a +0x130:  movl   $0x64,0x8(%esp)
08100f42 +0x138:  mov    %edx,0x4(%esp)
08100f46 +0x13c:  mov    %eax,(%esp)
08100f49 +0x13f:  call   0807d8d0 <_init+0x1c8>
08100f4e +0x144:  mov    -0xc(%ebp),%eax
08100f51 +0x147:  mov    0x10(%ebp),%edx
08100f54 +0x14a:  mov    0x1dc(%edx),%ecx
08100f5a +0x150:  mov    %ecx,0x1f0(%eax)
08100f60 +0x156:  mov    0x1e0(%edx),%ecx
08100f66 +0x15c:  mov    %ecx,0x1f4(%eax)
08100f6c +0x162:  mov    0x1e4(%edx),%edx
08100f72 +0x168:  mov    %edx,0x1f8(%eax)
08100f78 +0x16e:  mov    -0xc(%ebp),%eax
08100f7b +0x171:  movb   $0x0,0x24(%eax)
08100f7f +0x175:  mov    0x8(%ebp),%eax
08100f82 +0x178:  mov    0x4(%eax),%eax
08100f85 +0x17b:  movl   $0x1,0x8(%esp)
08100f8d +0x183:  mov    -0xc(%ebp),%edx
08100f90 +0x186:  mov    %edx,0x4(%esp)
08100f94 +0x18a:  mov    %eax,(%esp)
08100f97 +0x18d:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
08100f9c +0x192:  leave
08100f9d +0x193:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGOutputConfirm @ 0x8100e0a

/* WongWork::IPG::CIPGHelper::IPGOutputConfirm(WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*)
    */

void __thiscall
WongWork::IPG::CIPGHelper::IPGOutputConfirm(CIPGHelper *this,SIPGData *param_1,SIPGData *param_2)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  *(undefined4 *)(pSVar1 + 0x20) = 0xffffffff;
  *(undefined4 *)(pSVar1 + 0x1c) = 5;
  pSVar1[0x24] = (SIPGData)0x0;
  memcpy(pSVar1 + 0x28,param_1 + 0x28,0x41);
  strncpy((char *)(pSVar1 + 0x69),(char *)(param_2 + 0x16e),0x15);
  strncpy((char *)(pSVar1 + 0x7e),(char *)(param_1 + 0x69),8);
  strncpy((char *)(pSVar1 + 0x92),(char *)(param_1 + 0x7d),0x14);
  strncpy((char *)(pSVar1 + 0x86),(char *)(param_1 + 0x71),0xc);
  if (param_1 != (SIPGData *)0xffffff6f) {
    strncpy((char *)(pSVar1 + 0xa6),(char *)(param_1 + 0x91),100);
  }
  if (param_1 != (SIPGData *)0xffffff0b) {
    strncpy((char *)(pSVar1 + 0x10a),(char *)(param_1 + 0xf5),100);
  }
  *(undefined4 *)(pSVar1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(pSVar1 + 500) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(pSVar1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1e4);
  pSVar1[0x24] = (SIPGData)0x0;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
