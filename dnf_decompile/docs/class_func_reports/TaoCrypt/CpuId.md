# CpuId

`_ZN8TaoCrypt5CpuIdEjPj`

`TaoCrypt::CpuId(unsigned int, unsigned int*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087675c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087675c0  _ZN8TaoCrypt5CpuIdEjPj
#           TaoCrypt::CpuId(unsigned int, unsigned int*)
# range [0x087675c0, 0x087675ef]
087675c0 +0x00:  push   %ebp
087675c1 +0x01:  mov    %esp,%ebp
087675c3 +0x03:  sub    $0x8,%esp
087675c6 +0x06:  mov    %esi,(%esp)
087675c9 +0x09:  mov    0xc(%ebp),%esi
087675cc +0x0c:  mov    %edi,0x4(%esp)
087675d0 +0x10:  mov    0x8(%ebp),%eax
087675d3 +0x13:  push   %ebx
087675d4 +0x14:  cpuid
087675d6 +0x16:  mov    %ebx,%edi
087675d8 +0x18:  pop    %ebx
087675d9 +0x19:  mov    %eax,(%esi)
087675db +0x1b:  mov    %edi,0x4(%esi)
087675de +0x1e:  mov    %ecx,0x8(%esi)
087675e1 +0x21:  mov    %edx,0xc(%esi)
087675e4 +0x24:  mov    (%esp),%esi
087675e7 +0x27:  mov    0x4(%esp),%edi
087675eb +0x2b:  mov    %ebp,%esp
087675ed +0x2d:  pop    %ebp
087675ee +0x2e:  ret
087675ef +0x2f:  nop
```

## 反编译 C

```c
// TaoCrypt::CpuId @ 0x87675c0

/* TaoCrypt::CpuId(unsigned int, unsigned int*) */

void TaoCrypt::CpuId(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    puVar1 = (uint *)cpuid_basic_info(0);
  }
  else if (param_1 == 1) {
    puVar1 = (uint *)cpuid_Version_info(1);
  }
  else if (param_1 == 2) {
    puVar1 = (uint *)cpuid_cache_tlb_info(2);
  }
  else if (param_1 == 3) {
    puVar1 = (uint *)cpuid_serial_info(3);
  }
  else if (param_1 == 4) {
    puVar1 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (param_1 == 5) {
    puVar1 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (param_1 == 6) {
    puVar1 = (uint *)cpuid_Thermal_Power_Management_info(6);
  }
  else if (param_1 == 7) {
    puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (param_1 == 9) {
    puVar1 = (uint *)cpuid_Direct_Cache_Access_info(9);
  }
  else if (param_1 == 10) {
    puVar1 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (param_1 == 0xb) {
    puVar1 = (uint *)cpuid_Extended_Topology_info(0xb);
  }
  else if (param_1 == 0xd) {
    puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
  }
  else if (param_1 == 0xf) {
    puVar1 = (uint *)cpuid_Quality_of_Service_info(0xf);
  }
  else if (param_1 == 0x80000002) {
    puVar1 = (uint *)cpuid_brand_part1_info(0x80000002);
  }
  else if (param_1 == 0x80000003) {
    puVar1 = (uint *)cpuid_brand_part2_info(0x80000003);
  }
  else if (param_1 == 0x80000004) {
    puVar1 = (uint *)cpuid_brand_part3_info(0x80000004);
  }
  else {
    puVar1 = (uint *)cpuid(param_1);
  }
  uVar4 = puVar1[1];
  uVar3 = puVar1[2];
  uVar2 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar4;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}
```
