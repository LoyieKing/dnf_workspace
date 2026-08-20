# GetMoneyLimitPerLevel

`_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc`

`CDataManager::GetMoneyLimitPerLevel(int, char const*) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08360ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08360ce0  _ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc
#           CDataManager::GetMoneyLimitPerLevel(int, char const*) const
# range [0x08360ce0, 0x08360d93]
08360ce0 +0x00:  push   %ebp
08360ce1 +0x01:  mov    %esp,%ebp
08360ce3 +0x03:  sub    $0x38,%esp
08360ce6 +0x06:  mov    0xc(%ebp),%eax
08360ce9 +0x09:  test   %eax,%eax
08360ceb +0x0b:  jle    08360cf7 <+0x17>
08360ced +0x0d:  mov    0xc(%ebp),%eax
08360cf0 +0x10:  cmp    $0xc8,%eax
08360cf5 +0x15:  jle    08360d5e <+0x7e>
08360cf7 +0x17:  mov    0xc(%ebp),%eax
08360cfa +0x1a:  mov    %eax,0x14(%esp)
08360cfe +0x1e:  movl   $"Invalid Character Level %d",0x10(%esp)
08360d06 +0x26:  movl   $0x2705,0xc(%esp)
08360d0e +0x2e:  movl   $&_ZZNK12CDataManager21GetMoneyLimitPerLevelEiPKcE19__PRETTY_FUNCTION__,0x8(%esp)
08360d16 +0x36:  movl   $"data_manager.cpp",0x4(%esp)
08360d1e +0x3e:  movl   $0x1,(%esp)
08360d25 +0x45:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08360d2a +0x4a:  movl   $0xc8,-0x10(%ebp)
08360d31 +0x51:  lea    0xc(%ebp),%eax
08360d34 +0x54:  mov    %eax,0x4(%esp)
08360d38 +0x58:  lea    -0x10(%ebp),%eax
08360d3b +0x5b:  mov    %eax,(%esp)
08360d3e +0x5e:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08360d43 +0x63:  movl   $0x1,-0xc(%ebp)
08360d4a +0x6a:  mov    %eax,0x4(%esp)
08360d4e +0x6e:  lea    -0xc(%ebp),%eax
08360d51 +0x71:  mov    %eax,(%esp)
08360d54 +0x74:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08360d59 +0x79:  mov    (%eax),%eax
08360d5b +0x7b:  mov    %eax,0xc(%ebp)
08360d5e +0x7e:  cmpl   $0x0,0x10(%ebp)
08360d62 +0x82:  je     08360d82 <+0xa2>
08360d64 +0x84:  movl   $"rksekrlsek",0x4(%esp)
08360d6c +0x8c:  mov    0x10(%ebp),%eax
08360d6f +0x8f:  mov    %eax,(%esp)
08360d72 +0x92:  call   0807e4e0 <_init+0xdd8>
08360d77 +0x97:  test   %eax,%eax
08360d79 +0x99:  jne    08360d82 <+0xa2>
08360d7b +0x9b:  mov    $0x7fffffff,%eax
08360d80 +0xa0:  jmp    08360d91 <+0xb1>
08360d82 +0xa2:  mov    0xc(%ebp),%edx
08360d85 +0xa5:  mov    0x8(%ebp),%eax
08360d88 +0xa8:  add    $0x1904,%edx
08360d8e +0xae:  mov    (%eax,%edx,4),%eax
08360d91 +0xb1:  leave
08360d92 +0xb2:  ret
08360d93 +0xb3:  nop
```

## 反编译 C

```c
// CDataManager::GetMoneyLimitPerLevel @ 0x8360ce0

/* CDataManager::GetMoneyLimitPerLevel(int, char const*) const */

undefined4 __thiscall
CDataManager::GetMoneyLimitPerLevel(CDataManager *this,int param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int local_14 [4];
  
  if ((param_1 < 1) || (200 < param_1)) {
    LogManager::logFormat
              (1,"data_manager.cpp",
               "dword CDataManager::GetMoneyLimitPerLevel(int, const char*) const",0x2705,
               "Invalid Character Level %d",param_1);
    local_14[0] = 200;
    piVar1 = std::min<int>(local_14,&param_1);
    local_14[1] = 1;
    piVar1 = std::max<int>(local_14 + 1,piVar1);
    param_1 = *piVar1;
  }
  if ((param_2 != (char *)0x0) && (iVar2 = strcmp(param_2,"rksekrlsek"), iVar2 == 0)) {
    return 0x7fffffff;
  }
  return *(undefined4 *)(this + (param_1 + 0x1904) * 4);
}
```
