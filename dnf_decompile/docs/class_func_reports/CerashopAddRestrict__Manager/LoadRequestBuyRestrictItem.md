# LoadRequestBuyRestrictItem

`_ZN19CerashopAddRestrict7Manager26LoadRequestBuyRestrictItemEP5CUser`

`CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0d90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0d90  _ZN19CerashopAddRestrict7Manager26LoadRequestBuyRestrictItemEP5CUser
#           CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser*)
# range [0x080e0d90, 0x080e0da3]
080e0d90 +0x00:  push   %ebp
080e0d91 +0x01:  mov    %esp,%ebp
080e0d93 +0x03:  sub    $0x18,%esp
080e0d96 +0x06:  mov    0x8(%ebp),%eax
080e0d99 +0x09:  mov    %eax,(%esp)
080e0d9c +0x0c:  call   080e1ff6 <_ZN30DB_LoadCerashopAddRestrictType11makeRequestEP5CUser>  ; DB_LoadCerashopAddRestrictType::makeRequest(CUser*)
080e0da1 +0x11:  leave
080e0da2 +0x12:  ret
080e0da3 +0x13:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem @ 0x80e0d90

/* CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser*) */

void CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser *param_1)

{
  DB_LoadCerashopAddRestrictType::makeRequest(param_1);
  return;
}
```
