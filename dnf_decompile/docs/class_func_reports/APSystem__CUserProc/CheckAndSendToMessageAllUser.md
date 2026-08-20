# CheckAndSendToMessageAllUser

`_ZN8APSystem9CUserProc28CheckAndSendToMessageAllUserEjjPKc`

`APSystem::CUserProc::CheckAndSendToMessageAllUser(unsigned int, unsigned int, char const*)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x08122564` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08122564  _ZN8APSystem9CUserProc28CheckAndSendToMessageAllUserEjjPKc
#           APSystem::CUserProc::CheckAndSendToMessageAllUser(unsigned int, unsigned int, char const*)
# range [0x08122564, 0x0812256b]
08122564 +0x00:  push   %ebp
08122565 +0x01:  mov    %esp,%ebp
08122567 +0x03:  sub    $0x20,%esp
0812256a +0x06:  leave
0812256b +0x07:  ret
```

## 反编译 C

```c
// APSystem::CUserProc::CheckAndSendToMessageAllUser @ 0x8122564

/* APSystem::CUserProc::CheckAndSendToMessageAllUser(unsigned int, unsigned int, char const*) */

void APSystem::CUserProc::CheckAndSendToMessageAllUser(uint param_1,uint param_2,char *param_3)

{
  return;
}
```
