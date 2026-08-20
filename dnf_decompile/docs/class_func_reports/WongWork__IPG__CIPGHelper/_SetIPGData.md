# _SetIPGData

`_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb`

`WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100a2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100a2e  _ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb
#           WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
# range [0x08100a2e, 0x08100b3d]
08100a2e +0x000:  push   %ebp
08100a2f +0x001:  mov    %esp,%ebp
08100a31 +0x003:  sub    $0x38,%esp
08100a34 +0x006:  mov    0x14(%ebp),%eax
08100a37 +0x009:  mov    %al,-0x1c(%ebp)
08100a3a +0x00c:  mov    0x8(%ebp),%eax
08100a3d +0x00f:  mov    0x4(%eax),%eax
08100a40 +0x012:  mov    %eax,(%esp)
08100a43 +0x015:  call   0810466c <_ZN8WongWork3IPG7CIPGMgr12AllocIPGDataEv>  ; WongWork::IPG::CIPGMgr::AllocIPGData()
08100a48 +0x01a:  mov    %eax,-0xc(%ebp)
08100a4b +0x01d:  mov    0xc(%ebp),%eax
08100a4e +0x020:  mov    %eax,(%esp)
08100a51 +0x023:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08100a56 +0x028:  movl   $0x0,0x4(%esp)
08100a5e +0x030:  mov    %eax,(%esp)
08100a61 +0x033:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08100a66 +0x038:  mov    -0xc(%ebp),%edx
08100a69 +0x03b:  add    $0x28,%edx
08100a6c +0x03e:  mov    %eax,0xc(%esp)
08100a70 +0x042:  movl   $"%s",0x8(%esp)
08100a78 +0x04a:  movl   $0x14,0x4(%esp)
08100a80 +0x052:  mov    %edx,(%esp)
08100a83 +0x055:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08100a88 +0x05a:  mov    0xc(%ebp),%eax
08100a8b +0x05d:  mov    %eax,(%esp)
08100a8e +0x060:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08100a93 +0x065:  mov    -0xc(%ebp),%edx
08100a96 +0x068:  add    $0x3c,%edx
08100a99 +0x06b:  movl   $0x28,0x8(%esp)
08100aa1 +0x073:  mov    %eax,0x4(%esp)
08100aa5 +0x077:  mov    %edx,(%esp)
08100aa8 +0x07a:  call   0807d8d0 <_init+0x1c8>
08100aad +0x07f:  mov    -0xc(%ebp),%eax
08100ab0 +0x082:  add    $0x64,%eax
08100ab3 +0x085:  movl   $0x5,0x8(%esp)
08100abb +0x08d:  movl   $"DUNF",0x4(%esp)
08100ac3 +0x095:  mov    %eax,(%esp)
08100ac6 +0x098:  call   0807d8a0 <_init+0x198>
08100acb +0x09d:  mov    0x10(%ebp),%edx
08100ace +0x0a0:  mov    0x8(%ebp),%eax
08100ad1 +0x0a3:  mov    0x8(%eax,%edx,4),%eax
08100ad5 +0x0a7:  mov    %eax,%edx
08100ad7 +0x0a9:  mov    -0xc(%ebp),%eax
08100ada +0x0ac:  mov    %edx,(%eax)
08100adc +0x0ae:  mov    0x8(%ebp),%eax
08100adf +0x0b1:  lea    0x24(%eax),%edx
08100ae2 +0x0b4:  mov    -0xc(%ebp),%eax
08100ae5 +0x0b7:  add    $0x4,%eax
08100ae8 +0x0ba:  movl   $0x14,0x8(%esp)
08100af0 +0x0c2:  mov    %edx,0x4(%esp)
08100af4 +0x0c6:  mov    %eax,(%esp)
08100af7 +0x0c9:  call   0807d8d0 <_init+0x1c8>
08100afc +0x0ce:  mov    0x10(%ebp),%edx
08100aff +0x0d1:  mov    0x8(%ebp),%eax
08100b02 +0x0d4:  add    $0xc,%edx
08100b05 +0x0d7:  mov    0x8(%eax,%edx,4),%eax
08100b09 +0x0db:  mov    %eax,%edx
08100b0b +0x0dd:  mov    -0xc(%ebp),%eax
08100b0e +0x0e0:  mov    %dx,0x18(%eax)
08100b12 +0x0e4:  mov    0xc(%ebp),%eax
08100b15 +0x0e7:  mov    %eax,(%esp)
08100b18 +0x0ea:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08100b1d +0x0ef:  mov    %eax,%edx
08100b1f +0x0f1:  mov    -0xc(%ebp),%eax
08100b22 +0x0f4:  mov    %edx,0x20(%eax)
08100b25 +0x0f7:  mov    -0xc(%ebp),%eax
08100b28 +0x0fa:  mov    0x10(%ebp),%edx
08100b2b +0x0fd:  mov    %edx,0x1c(%eax)
08100b2e +0x100:  mov    -0xc(%ebp),%eax
08100b31 +0x103:  movzbl -0x1c(%ebp),%edx
08100b35 +0x107:  mov    %dl,0x24(%eax)
08100b38 +0x10a:  mov    -0xc(%ebp),%eax
08100b3b +0x10d:  leave
08100b3c +0x10e:  ret
08100b3d +0x10f:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::_SetIPGData @ 0x8100a2e

/* WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool) */

undefined4 * __thiscall
WongWork::IPG::CIPGHelper::_SetIPGData
          (CIPGHelper *this,CUser *param_1,int param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char *__src;
  
  puVar1 = (undefined4 *)CIPGMgr::AllocIPGData(*(CIPGMgr **)(this + 4));
  uVar2 = CUser::get_acc_id(param_1);
  uVar3 = NumberToString(uVar2,0);
  OS_API::snprintf((char *)(puVar1 + 10),0x14,"%s",uVar3);
  __src = (char *)CUser::get_acc_name(param_1);
  strncpy((char *)(puVar1 + 0xf),__src,0x28);
  memcpy(puVar1 + 0x19,&DAT_08b41459,5);
  *puVar1 = *(undefined4 *)(this + param_3 * 4 + 8);
  strncpy((char *)(puVar1 + 1),(char *)(this + 0x24),0x14);
  *(short *)(puVar1 + 6) = (short)*(undefined4 *)(this + (param_3 + 0xc) * 4 + 8);
  uVar3 = CUser::GetUID(param_1);
  puVar1[8] = uVar3;
  puVar1[7] = param_3;
  *(undefined1 *)(puVar1 + 9) = param_4;
  return puVar1;
}
```
