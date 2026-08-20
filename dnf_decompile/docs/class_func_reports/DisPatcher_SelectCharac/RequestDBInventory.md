# RequestDBInventory

`_ZN23DisPatcher_SelectCharac18RequestDBInventoryEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBInventory(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c6ee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6ee6  _ZN23DisPatcher_SelectCharac18RequestDBInventoryEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBInventory(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c6ee6, 0x081c6f07]
081c6ee6 +0x00:  push   %ebp
081c6ee7 +0x01:  mov    %esp,%ebp
081c6ee9 +0x03:  sub    $0x28,%esp
081c6eec +0x06:  mov    0x10(%ebp),%eax
081c6eef +0x09:  mov    %eax,0x8(%esp)
081c6ef3 +0x0d:  mov    0xc(%ebp),%eax
081c6ef6 +0x10:  mov    %eax,0x4(%esp)
081c6efa +0x14:  mov    0x8(%ebp),%eax
081c6efd +0x17:  mov    %eax,(%esp)
081c6f00 +0x1a:  call   081c7c1c <_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT>  ; DisPatcher_SelectCharac::RequestDBInventory_forchina(CUser*, MSG_CHARAC_SELECT&)
081c6f05 +0x1f:  leave
081c6f06 +0x20:  ret
081c6f07 +0x21:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBInventory @ 0x81c6ee6

/* DisPatcher_SelectCharac::RequestDBInventory(CUser*, MSG_CHARAC_SELECT&) */

void __thiscall
DisPatcher_SelectCharac::RequestDBInventory
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  RequestDBInventory_forchina(this,param_1,param_2);
  return;
}
```
