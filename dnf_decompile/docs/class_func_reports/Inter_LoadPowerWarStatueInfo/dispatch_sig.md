# dispatch_sig

`_ZN28Inter_LoadPowerWarStatueInfo12dispatch_sigEP5CUserPci`

`Inter_LoadPowerWarStatueInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPowerWarStatueInfo` | `0x084da3be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da3be  _ZN28Inter_LoadPowerWarStatueInfo12dispatch_sigEP5CUserPci
#           Inter_LoadPowerWarStatueInfo::dispatch_sig(CUser*, char*, int)
# range [0x084da3be, 0x084da3e5]
084da3be +0x00:  push   %ebp
084da3bf +0x01:  mov    %esp,%ebp
084da3c1 +0x03:  sub    $0x28,%esp
084da3c4 +0x06:  mov    0x10(%ebp),%eax
084da3c7 +0x09:  mov    %eax,-0xc(%ebp)
084da3ca +0x0c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084da3cf +0x11:  mov    -0xc(%ebp),%edx
084da3d2 +0x14:  mov    %edx,0x4(%esp)
084da3d6 +0x18:  mov    %eax,(%esp)
084da3d9 +0x1b:  call   0847ed4e <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO>  ; CPowerManager::SetPowerWarUserStatueInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*)
084da3de +0x20:  mov    $0x0,%eax
084da3e3 +0x25:  leave
084da3e4 +0x26:  ret
084da3e5 +0x27:  nop
```

## 反编译 C

```c
// Inter_LoadPowerWarStatueInfo::dispatch_sig @ 0x84da3be

/* Inter_LoadPowerWarStatueInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPowerWarStatueInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CPowerManager::SetPowerWarUserStatueInfo
            (GlobalData::s_power_manager,(SIG_LOAD_POWER_WAR_STATUE_INFO *)param_3);
  return 0;
}
```
