# ProcIPGSync

`_ZN8WongWork3IPG7CIPGMgr10CIPGWorker11ProcIPGSyncEPNS0_8SIPGDataE`

`WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr::CIPGWorker` | `0x08105258` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08105258  _ZN8WongWork3IPG7CIPGMgr10CIPGWorker11ProcIPGSyncEPNS0_8SIPGDataE
#           WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(WongWork::IPG::SIPGData*)
# range [0x08105258, 0x08105275]
08105258 +0x00:  push   %ebp
08105259 +0x01:  mov    %esp,%ebp
0810525b +0x03:  sub    $0xc8,%esp
08105261 +0x09:  mov    0xc(%ebp),%eax
08105264 +0x0c:  mov    %eax,0x4(%esp)
08105268 +0x10:  mov    0x8(%ebp),%eax
0810526b +0x13:  mov    %eax,(%esp)
0810526e +0x16:  call   081048c6 <_ZN8WongWork3IPG7CIPGMgr10CIPGWorker20ProcIPGSyncForTaiwanEPNS0_8SIPGDataE>  ; WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForTaiwan(WongWork::IPG::SIPGData*)
08105273 +0x1b:  leave
08105274 +0x1c:  ret
08105275 +0x1d:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync @ 0x8105258

/* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(WongWork::IPG::SIPGData*) */

void __thiscall WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSync(CIPGWorker *this,SIPGData *param_1)

{
  ProcIPGSyncForTaiwan(this,param_1);
  return;
}
```
