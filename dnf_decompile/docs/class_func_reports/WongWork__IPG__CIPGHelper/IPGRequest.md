# IPGRequest

`_ZN8WongWork3IPG10CIPGHelper10IPGRequestEPNS0_8SIPGDataE`

`WongWork::IPG::CIPGHelper::IPGRequest(WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x081007e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081007e8  _ZN8WongWork3IPG10CIPGHelper10IPGRequestEPNS0_8SIPGDataE
#           WongWork::IPG::CIPGHelper::IPGRequest(WongWork::IPG::SIPGData*)
# range [0x081007e8, 0x0810085d]
081007e8 +0x00:  push   %ebp
081007e9 +0x01:  mov    %esp,%ebp
081007eb +0x03:  sub    $0x18,%esp
081007ee +0x06:  mov    0xc(%ebp),%eax
081007f1 +0x09:  mov    0x1c(%eax),%eax
081007f4 +0x0c:  mov    %eax,%edx
081007f6 +0x0e:  mov    0x8(%ebp),%eax
081007f9 +0x11:  mov    0x8(%eax,%edx,4),%eax
081007fd +0x15:  mov    %eax,%edx
081007ff +0x17:  mov    0xc(%ebp),%eax
08100802 +0x1a:  mov    %edx,(%eax)
08100804 +0x1c:  mov    0x8(%ebp),%eax
08100807 +0x1f:  lea    0x24(%eax),%edx
0810080a +0x22:  mov    0xc(%ebp),%eax
0810080d +0x25:  add    $0x4,%eax
08100810 +0x28:  movl   $0x14,0x8(%esp)
08100818 +0x30:  mov    %edx,0x4(%esp)
0810081c +0x34:  mov    %eax,(%esp)
0810081f +0x37:  call   0807d8d0 <_init+0x1c8>
08100824 +0x3c:  mov    0xc(%ebp),%eax
08100827 +0x3f:  mov    0x1c(%eax),%eax
0810082a +0x42:  mov    %eax,%edx
0810082c +0x44:  mov    0x8(%ebp),%eax
0810082f +0x47:  add    $0xc,%edx
08100832 +0x4a:  mov    0x8(%eax,%edx,4),%eax
08100836 +0x4e:  mov    %eax,%edx
08100838 +0x50:  mov    0xc(%ebp),%eax
0810083b +0x53:  mov    %dx,0x18(%eax)
0810083f +0x57:  mov    0x8(%ebp),%eax
08100842 +0x5a:  mov    0x4(%eax),%eax
08100845 +0x5d:  movl   $0x1,0x8(%esp)
0810084d +0x65:  mov    0xc(%ebp),%edx
08100850 +0x68:  mov    %edx,0x4(%esp)
08100854 +0x6c:  mov    %eax,(%esp)
08100857 +0x6f:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
0810085c +0x74:  leave
0810085d +0x75:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGRequest @ 0x81007e8

/* WongWork::IPG::CIPGHelper::IPGRequest(WongWork::IPG::SIPGData*) */

void __thiscall WongWork::IPG::CIPGHelper::IPGRequest(CIPGHelper *this,SIPGData *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + *(int *)(param_1 + 0x1c) * 4 + 8);
  strncpy((char *)(param_1 + 4),(char *)(this + 0x24),0x14);
  *(short *)(param_1 + 0x18) =
       (short)*(undefined4 *)(this + (*(int *)(param_1 + 0x1c) + 0xc) * 4 + 8);
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),param_1,true);
  return;
}
```
