# _analyzeSpeedHack

`_ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj`

`WongWork::CHackAnalyzer::_analyzeSpeedHack(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f7cca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7cca  _ZN8WongWork13CHackAnalyzer17_analyzeSpeedHackEj
#           WongWork::CHackAnalyzer::_analyzeSpeedHack(unsigned int)
# range [0x080f7cca, 0x080f7d81]
080f7cca +0x00:  push   %ebp
080f7ccb +0x01:  mov    %esp,%ebp
080f7ccd +0x03:  sub    $0x38,%esp
080f7cd0 +0x06:  movl   $0x1,0x4(%esp)
080f7cd8 +0x0e:  mov    0x8(%ebp),%eax
080f7cdb +0x11:  mov    %eax,(%esp)
080f7cde +0x14:  call   080f9876 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x82>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x82
080f7ce3 +0x19:  test   %al,%al
080f7ce5 +0x1b:  jne    080f7d7e <+0xb4>
080f7ceb +0x21:  mov    0x8(%ebp),%eax
080f7cee +0x24:  mov    0x24(%eax),%eax
080f7cf1 +0x27:  test   %eax,%eax
080f7cf3 +0x29:  jne    080f7d02 <+0x38>
080f7cf5 +0x2b:  mov    0x8(%ebp),%eax
080f7cf8 +0x2e:  mov    %eax,(%esp)
080f7cfb +0x31:  call   080f8032 <_ZN8WongWork13CHackAnalyzer22_reportIncurrectReportEv>  ; WongWork::CHackAnalyzer::_reportIncurrectReport()
080f7d00 +0x36:  jmp    080f7d7f <+0xb5>
080f7d02 +0x38:  mov    0x8(%ebp),%eax
080f7d05 +0x3b:  mov    0x24(%eax),%edx
080f7d08 +0x3e:  mov    0x8(%ebp),%eax
080f7d0b +0x41:  mov    0x20(%eax),%eax
080f7d0e +0x44:  mov    %edx,%ecx
080f7d10 +0x46:  sub    %eax,%ecx
080f7d12 +0x48:  mov    %ecx,%eax
080f7d14 +0x4a:  mov    %eax,-0x10(%ebp)
080f7d17 +0x4d:  mov    0xc(%ebp),%eax
080f7d1a +0x50:  mov    $0x0,%edx
080f7d1f +0x55:  mov    %eax,-0x20(%ebp)
080f7d22 +0x58:  mov    %edx,-0x1c(%ebp)
080f7d25 +0x5b:  fildll -0x20(%ebp)
080f7d28 +0x5e:  fildl  -0x10(%ebp)
080f7d2b +0x61:  fdivrp %st,%st(1)
080f7d2d +0x63:  flds   ""
080f7d33 +0x69:  fmulp  %st,%st(1)
080f7d35 +0x6b:  fnstcw -0x22(%ebp)
080f7d38 +0x6e:  movzwl -0x22(%ebp),%eax
080f7d3c +0x72:  mov    $0xc,%ah
080f7d3e +0x74:  mov    %ax,-0x24(%ebp)
080f7d42 +0x78:  fldcw  -0x24(%ebp)
080f7d45 +0x7b:  fistpl -0xc(%ebp)
080f7d48 +0x7e:  fldcw  -0x22(%ebp)
080f7d4b +0x81:  cmpl   $0x45,-0xc(%ebp)
080f7d4f +0x85:  jle    080f7d5a <+0x90>
080f7d51 +0x87:  cmpl   $0x82,-0xc(%ebp)
080f7d58 +0x8e:  jle    080f7d7f <+0xb5>
080f7d5a +0x90:  mov    -0xc(%ebp),%eax
080f7d5d +0x93:  mov    %eax,0xc(%esp)
080f7d61 +0x97:  movl   $0x3c1,0x8(%esp)
080f7d69 +0x9f:  movl   $0x1,0x4(%esp)
080f7d71 +0xa7:  mov    0x8(%ebp),%eax
080f7d74 +0xaa:  mov    %eax,(%esp)
080f7d77 +0xad:  call   080f7fd2 <_ZN8WongWork13CHackAnalyzer12_addHackInfoE23ENUM_REPORT_4_HACK_FLAGNS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::_addHackInfo(ENUM_REPORT_4_HACK_FLAG, WongWork::ENUM_HACKTYPE, int)
080f7d7c +0xb2:  jmp    080f7d7f <+0xb5>
080f7d7e +0xb4:  nop
080f7d7f +0xb5:  leave
080f7d80 +0xb6:  ret
080f7d81 +0xb7:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::_analyzeSpeedHack @ 0x80f7cca

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CHackAnalyzer::_analyzeSpeedHack(unsigned int) */

void __thiscall WongWork::CHackAnalyzer::_analyzeSpeedHack(CHackAnalyzer *this,uint param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = checkCollectedHack(this,1);
  if (cVar2 == '\0') {
    if (*(int *)(this + 0x24) == 0) {
      _reportIncurrectReport(this);
    }
    else {
      iVar1 = (int)ROUND(_DAT_08b3e2a0 *
                         ((float)param_1 / (float)(*(int *)(this + 0x24) - *(int *)(this + 0x20))));
      if ((iVar1 < 0x46) || (0x82 < iVar1)) {
        _addHackInfo(this,1,0x3c1,iVar1);
      }
    }
  }
  return;
}
```
