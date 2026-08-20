# IPGInputPoint

`_ZN8WongWork3IPG10CIPGHelper13IPGInputPointEP5CUserjccPv`

`WongWork::IPG::CIPGHelper::IPGInputPoint(CUser*, unsigned int, char, char, void*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x080fffc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fffc0  _ZN8WongWork3IPG10CIPGHelper13IPGInputPointEP5CUserjccPv
#           WongWork::IPG::CIPGHelper::IPGInputPoint(CUser*, unsigned int, char, char, void*)
# range [0x080fffc0, 0x081000f5]
080fffc0 +0x000:  push   %ebp
080fffc1 +0x001:  mov    %esp,%ebp
080fffc3 +0x003:  sub    $0x38,%esp
080fffc6 +0x006:  mov    0x14(%ebp),%edx
080fffc9 +0x009:  mov    0x18(%ebp),%eax
080fffcc +0x00c:  mov    %dl,-0x1c(%ebp)
080fffcf +0x00f:  mov    %al,-0x20(%ebp)
080fffd2 +0x012:  movl   $0x1,0xc(%esp)
080fffda +0x01a:  movl   $0x6,0x8(%esp)
080fffe2 +0x022:  mov    0xc(%ebp),%eax
080fffe5 +0x025:  mov    %eax,0x4(%esp)
080fffe9 +0x029:  mov    0x8(%ebp),%eax
080fffec +0x02c:  mov    %eax,(%esp)
080fffef +0x02f:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
080ffff4 +0x034:  mov    %eax,-0xc(%ebp)
080ffff7 +0x037:  mov    0xc(%ebp),%eax
080ffffa +0x03a:  mov    %eax,(%esp)
080ffffd +0x03d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08100002 +0x042:  mov    -0xc(%ebp),%edx
08100005 +0x045:  add    $0x28,%edx
08100008 +0x048:  mov    %eax,0x8(%esp)
0810000c +0x04c:  movl   $"%d",0x4(%esp)
08100014 +0x054:  mov    %edx,(%esp)
08100017 +0x057:  call   0807e440 <_init+0xd38>
0810001c +0x05c:  mov    0xc(%ebp),%eax
0810001f +0x05f:  mov    %eax,(%esp)
08100022 +0x062:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
08100027 +0x067:  mov    -0xc(%ebp),%edx
0810002a +0x06a:  add    $0x3c,%edx
0810002d +0x06d:  movl   $0x28,0x8(%esp)
08100035 +0x075:  mov    %eax,0x4(%esp)
08100039 +0x079:  mov    %edx,(%esp)
0810003c +0x07c:  call   0807d8d0 <_init+0x1c8>
08100041 +0x081:  mov    0xc(%ebp),%eax
08100044 +0x084:  mov    %eax,(%esp)
08100047 +0x087:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0810004c +0x08c:  mov    -0xc(%ebp),%edx
0810004f +0x08f:  add    $0x64,%edx
08100052 +0x092:  movl   $0x28,0x8(%esp)
0810005a +0x09a:  mov    %eax,0x4(%esp)
0810005e +0x09e:  mov    %edx,(%esp)
08100061 +0x0a1:  call   0807d8d0 <_init+0x1c8>
08100066 +0x0a6:  mov    -0xc(%ebp),%eax
08100069 +0x0a9:  add    $0x8c,%eax
0810006e +0x0ae:  movl   $0x8,0x8(%esp)
08100076 +0x0b6:  movl   $"",0x4(%esp)
0810007e +0x0be:  mov    %eax,(%esp)
08100081 +0x0c1:  call   0807d8d0 <_init+0x1c8>
08100086 +0x0c6:  mov    -0xc(%ebp),%eax
08100089 +0x0c9:  add    $0x94,%eax
0810008e +0x0ce:  movl   $0x15,0x8(%esp)
08100096 +0x0d6:  movl   $"",0x4(%esp)
0810009e +0x0de:  mov    %eax,(%esp)
081000a1 +0x0e1:  call   0807d8d0 <_init+0x1c8>
081000a6 +0x0e6:  mov    -0xc(%ebp),%eax
081000a9 +0x0e9:  mov    0x10(%ebp),%edx
081000ac +0x0ec:  mov    %edx,0xac(%eax)
081000b2 +0x0f2:  mov    -0xc(%ebp),%eax
081000b5 +0x0f5:  movb   $0x41,0xb0(%eax)
081000bc +0x0fc:  mov    -0xc(%ebp),%eax
081000bf +0x0ff:  movzbl -0x1c(%ebp),%edx
081000c3 +0x103:  mov    %dl,0xb1(%eax)
081000c9 +0x109:  mov    -0xc(%ebp),%eax
081000cc +0x10c:  movzbl -0x20(%ebp),%edx
081000d0 +0x110:  mov    %dl,0xb2(%eax)
081000d6 +0x116:  mov    0x8(%ebp),%eax
081000d9 +0x119:  mov    0x4(%eax),%eax
081000dc +0x11c:  movl   $0x1,0x8(%esp)
081000e4 +0x124:  mov    -0xc(%ebp),%edx
081000e7 +0x127:  mov    %edx,0x4(%esp)
081000eb +0x12b:  mov    %eax,(%esp)
081000ee +0x12e:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
081000f3 +0x133:  leave
081000f4 +0x134:  ret
081000f5 +0x135:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGInputPoint @ 0x80fffc0

/* WongWork::IPG::CIPGHelper::IPGInputPoint(CUser*, unsigned int, char, char, void*) */

void WongWork::IPG::CIPGHelper::IPGInputPoint
               (CUser *param_1,uint param_2,char param_3,char param_4,void *param_5)

{
  SIPGData *pSVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined3 in_stack_0000000d;
  
  pSVar1 = (SIPGData *)_SetIPGData((CIPGHelper *)param_1,param_2,6,1);
  uVar2 = CUser::get_acc_id((CUser *)param_2);
  sprintf((char *)(pSVar1 + 0x28),"%d",uVar2);
  pcVar3 = (char *)CUser::get_acc_name((CUser *)param_2);
  strncpy((char *)(pSVar1 + 0x3c),pcVar3,0x28);
  pcVar3 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  strncpy((char *)(pSVar1 + 100),pcVar3,0x28);
  strncpy((char *)(pSVar1 + 0x8c),"",8);
  strncpy((char *)(pSVar1 + 0x94),"",0x15);
  *(undefined4 *)(pSVar1 + 0xac) = _param_3;
  pSVar1[0xb0] = (SIPGData)0x41;
  pSVar1[0xb1] = (SIPGData)param_4;
  pSVar1[0xb2] = SUB41(param_5,0);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(param_1 + 4),pSVar1,true);
  return;
}
```
