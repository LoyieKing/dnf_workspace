# ProcIPGSyncForChina

`_ZN8WongWork3IPG7CIPGMgr10CIPGWorker19ProcIPGSyncForChinaEPNS0_8SIPGDataE`

`WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina(WongWork::IPG::SIPGData*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGMgr::CIPGWorker` | `0x081048b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081048b4  _ZN8WongWork3IPG7CIPGMgr10CIPGWorker19ProcIPGSyncForChinaEPNS0_8SIPGDataE
#           WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina(WongWork::IPG::SIPGData*)
# range [0x081048b4, 0x081048c5]
081048b4 +0x00:  push   %ebp
081048b5 +0x01:  mov    %esp,%ebp
081048b7 +0x03:  sub    $0x10,%esp
081048ba +0x06:  movl   $0x0,-0x4(%ebp)
081048c1 +0x0d:  mov    -0x4(%ebp),%eax
081048c4 +0x10:  leave
081048c5 +0x11:  ret
```

## 反编译 C

```c
// WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina @ 0x81048b4

/* WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina(WongWork::IPG::SIPGData*) */

undefined4 WongWork::IPG::CIPGMgr::CIPGWorker::ProcIPGSyncForChina(SIPGData *param_1)

{
  return 0;
}
```
