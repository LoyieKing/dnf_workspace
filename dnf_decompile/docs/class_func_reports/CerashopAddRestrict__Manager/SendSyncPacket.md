# SendSyncPacket

`_ZN19CerashopAddRestrict7Manager14SendSyncPacketEP5CUser`

`CerashopAddRestrict::Manager::SendSyncPacket(CUser*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0dec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0dec  _ZN19CerashopAddRestrict7Manager14SendSyncPacketEP5CUser
#           CerashopAddRestrict::Manager::SendSyncPacket(CUser*)
# range [0x080e0dec, 0x080e0e07]
080e0dec +0x00:  push   %ebp
080e0ded +0x01:  mov    %esp,%ebp
080e0def +0x03:  sub    $0x18,%esp
080e0df2 +0x06:  call   080e274d <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4f3>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4f3
080e0df7 +0x0b:  mov    0x8(%ebp),%edx
080e0dfa +0x0e:  mov    %edx,0x4(%esp)
080e0dfe +0x12:  mov    %eax,(%esp)
080e0e01 +0x15:  call   080e0f3a <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser>  ; CerashopAddRestrict::Manager::makeSyncPacket(CUser*)
080e0e06 +0x1a:  leave
080e0e07 +0x1b:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::SendSyncPacket @ 0x80e0dec

/* CerashopAddRestrict::Manager::SendSyncPacket(CUser*) */

void CerashopAddRestrict::Manager::SendSyncPacket(CUser *param_1)

{
  Manager *this;
  
  this = (Manager *)ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
  makeSyncPacket(this,param_1);
  return;
}
```
