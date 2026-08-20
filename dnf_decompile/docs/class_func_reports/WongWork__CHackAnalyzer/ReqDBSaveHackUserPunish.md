# ReqDBSaveHackUserPunish

`_ZN8WongWork13CHackAnalyzer23ReqDBSaveHackUserPunishEjj`

`WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f906a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f906a  _ZN8WongWork13CHackAnalyzer23ReqDBSaveHackUserPunishEjj
#           WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(unsigned int, unsigned int)
# range [0x080f906a, 0x080f908b]
080f906a +0x00:  push   %ebp
080f906b +0x01:  mov    %esp,%ebp
080f906d +0x03:  sub    $0x18,%esp
080f9070 +0x06:  movl   $0x0,0x8(%esp)
080f9078 +0x0e:  mov    0xc(%ebp),%eax
080f907b +0x11:  mov    %eax,0x4(%esp)
080f907f +0x15:  mov    0x8(%ebp),%eax
080f9082 +0x18:  mov    %eax,(%esp)
080f9085 +0x1b:  call   08425494 <_ZN24DB_ReqSaveHackUserPunish11makeRequestEjjPKc>  ; DB_ReqSaveHackUserPunish::makeRequest(unsigned int, unsigned int, char const*)
080f908a +0x20:  leave
080f908b +0x21:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish @ 0x80f906a

/* WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(unsigned int, unsigned int) */

void WongWork::CHackAnalyzer::ReqDBSaveHackUserPunish(uint param_1,uint param_2)

{
  DB_ReqSaveHackUserPunish::makeRequest(param_1,param_2,(char *)0x0);
  return;
}
```
