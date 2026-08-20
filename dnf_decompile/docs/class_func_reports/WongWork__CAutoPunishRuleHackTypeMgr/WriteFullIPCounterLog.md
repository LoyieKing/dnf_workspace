# WriteFullIPCounterLog

`_ZN8WongWork26CAutoPunishRuleHackTypeMgr21WriteFullIPCounterLogEPNS_13CHackAnalyzerEiiiiiPc`

`WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog(WongWork::CHackAnalyzer*, int, int, int, int, int, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAutoPunishRuleHackTypeMgr` | `0x080f96d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f96d2  _ZN8WongWork26CAutoPunishRuleHackTypeMgr21WriteFullIPCounterLogEPNS_13CHackAnalyzerEiiiiiPc
#           WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog(WongWork::CHackAnalyzer*, int, int, int, int, int, char*)
# range [0x080f96d2, 0x080f9729]
080f96d2 +0x00:  push   %ebp
080f96d3 +0x01:  mov    %esp,%ebp
080f96d5 +0x03:  sub    $0x38,%esp
080f96d8 +0x06:  mov    0xc(%ebp),%eax
080f96db +0x09:  mov    %eax,(%esp)
080f96de +0x0c:  call   080f79ce <_ZN8WongWork13CHackAnalyzer8getUserPEv>  ; WongWork::CHackAnalyzer::getUserP()
080f96e3 +0x11:  mov    %eax,-0xc(%ebp)
080f96e6 +0x14:  cmpl   $0x0,-0xc(%ebp)
080f96ea +0x18:  je     080f9727 <+0x55>
080f96ec +0x1a:  mov    -0xc(%ebp),%eax
080f96ef +0x1d:  lea    0x79700(%eax),%edx
080f96f5 +0x23:  mov    0x24(%ebp),%eax
080f96f8 +0x26:  mov    %eax,0x18(%esp)
080f96fc +0x2a:  mov    0x20(%ebp),%eax
080f96ff +0x2d:  mov    %eax,0x14(%esp)
080f9703 +0x31:  mov    0x1c(%ebp),%eax
080f9706 +0x34:  mov    %eax,0x10(%esp)
080f970a +0x38:  mov    0x18(%ebp),%eax
080f970d +0x3b:  mov    %eax,0xc(%esp)
080f9711 +0x3f:  mov    0x14(%ebp),%eax
080f9714 +0x42:  mov    %eax,0x8(%esp)
080f9718 +0x46:  mov    0x10(%ebp),%eax
080f971b +0x49:  mov    %eax,0x4(%esp)
080f971f +0x4d:  mov    %edx,(%esp)
080f9722 +0x50:  call   08685d54 <_ZN15cUserHistoryLog16FullIPCounterLogEiiiiiPc>  ; cUserHistoryLog::FullIPCounterLog(int, int, int, int, int, char*)
080f9727 +0x55:  leave
080f9728 +0x56:  ret
080f9729 +0x57:  nop
```

## 反编译 C

```c
// WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog @ 0x80f96d2

/* WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog(WongWork::CHackAnalyzer*, int, int,
   int, int, int, char*) */

void __thiscall
WongWork::CAutoPunishRuleHackTypeMgr::WriteFullIPCounterLog
          (CAutoPunishRuleHackTypeMgr *this,CHackAnalyzer *param_1,int param_2,int param_3,
          int param_4,int param_5,int param_6,char *param_7)

{
  int iVar1;
  
  iVar1 = CHackAnalyzer::getUserP(param_1);
  if (iVar1 != 0) {
    cUserHistoryLog::FullIPCounterLog
              ((cUserHistoryLog *)(iVar1 + 0x79700),param_2,param_3,param_4,param_5,param_6,param_7)
    ;
  }
  return;
}
```
