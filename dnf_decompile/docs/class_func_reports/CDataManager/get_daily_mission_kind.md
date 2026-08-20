# get_daily_mission_kind

`_ZNK12CDataManager22get_daily_mission_kindEv`

`CDataManager::get_daily_mission_kind() const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0835fae6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0835fae6  _ZNK12CDataManager22get_daily_mission_kindEv
#           CDataManager::get_daily_mission_kind() const
# range [0x0835fae6, 0x0835fb11]
0835fae6 +0x00:  push   %ebp
0835fae7 +0x01:  mov    %esp,%ebp
0835fae9 +0x03:  push   %ebx
0835faea +0x04:  sub    $0x14,%esp
0835faed +0x07:  mov    0x8(%ebp),%ebx
0835faf0 +0x0a:  mov    0xc(%ebp),%eax
0835faf3 +0x0d:  mov    0xb454(%eax),%eax
0835faf9 +0x13:  mov    %eax,0x4(%esp)
0835fafd +0x17:  mov    %ebx,(%esp)
0835fb00 +0x1a:  call   08376312 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5db2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5db2
0835fb05 +0x1f:  sub    $0x4,%esp
0835fb08 +0x22:  mov    %ebx,%eax
0835fb0a +0x24:  mov    -0x4(%ebp),%ebx
0835fb0d +0x27:  leave
0835fb0e +0x28:  ret    $0x4
0835fb11 +0x2b:  nop
```

## 反编译 C

```c
// CDataManager::get_daily_mission_kind @ 0x835fae6

/* CDataManager::get_daily_mission_kind() const */

CDataManager * __thiscall CDataManager::get_daily_mission_kind(CDataManager *this)

{
  PvP_MissionSystem::get_daily_mission_kind();
  return this;
}
```
