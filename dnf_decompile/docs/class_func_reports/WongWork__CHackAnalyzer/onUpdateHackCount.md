# onUpdateHackCount

`_ZN8WongWork13CHackAnalyzer17onUpdateHackCountEP5CUserNS_13ENUM_HACKTYPEEijj`

`WongWork::CHackAnalyzer::onUpdateHackCount(CUser*, WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8c4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8c4e  _ZN8WongWork13CHackAnalyzer17onUpdateHackCountEP5CUserNS_13ENUM_HACKTYPEEijj
#           WongWork::CHackAnalyzer::onUpdateHackCount(CUser*, WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int)
# range [0x080f8c4e, 0x080f8c7d]
080f8c4e +0x00:  push   %ebp
080f8c4f +0x01:  mov    %esp,%ebp
080f8c51 +0x03:  sub    $0x28,%esp
080f8c54 +0x06:  mov    0x1c(%ebp),%eax
080f8c57 +0x09:  mov    %eax,0x10(%esp)
080f8c5b +0x0d:  mov    0x18(%ebp),%eax
080f8c5e +0x10:  mov    %eax,0xc(%esp)
080f8c62 +0x14:  mov    0x14(%ebp),%eax
080f8c65 +0x17:  mov    %eax,0x8(%esp)
080f8c69 +0x1b:  mov    0x10(%ebp),%eax
080f8c6c +0x1e:  mov    %eax,0x4(%esp)
080f8c70 +0x22:  mov    0xc(%ebp),%eax
080f8c73 +0x25:  mov    %eax,(%esp)
080f8c76 +0x28:  call   0867fd0a <_ZN5CUser17onUpdateHackCountEN8WongWork13ENUM_HACKTYPEEijj>  ; CUser::onUpdateHackCount(WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int)
080f8c7b +0x2d:  leave
080f8c7c +0x2e:  ret
080f8c7d +0x2f:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::onUpdateHackCount @ 0x80f8c4e

/* WongWork::CHackAnalyzer::onUpdateHackCount(CUser*, WongWork::ENUM_HACKTYPE, int, unsigned int,
   unsigned int) */

void __thiscall
WongWork::CHackAnalyzer::onUpdateHackCount
          (undefined4 this,CUser *param_1,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  CUser::onUpdateHackCount(param_1,param_3,param_4,param_5,param_6);
  return;
}
```
