# check_error

`_ZN21DisPatcher_DeleteItem11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_DeleteItem::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DeleteItem` | `0x081c1a6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c1a6c  _ZN21DisPatcher_DeleteItem11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_DeleteItem::check_error(CUser*, MSG_BASE&)
# range [0x081c1a6c, 0x081c1ad5]
081c1a6c +0x00:  push   %ebp
081c1a6d +0x01:  mov    %esp,%ebp
081c1a6f +0x03:  sub    $0x38,%esp
081c1a72 +0x06:  mov    0x10(%ebp),%eax
081c1a75 +0x09:  mov    %eax,-0xc(%ebp)
081c1a78 +0x0c:  mov    0xc(%ebp),%eax
081c1a7b +0x0f:  mov    %eax,(%esp)
081c1a7e +0x12:  call   0864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>  ; CUser::getCurCharacInvenCheckSum() const
081c1a83 +0x17:  mov    -0xc(%ebp),%edx
081c1a86 +0x1a:  mov    0x4bf(%edx),%edx
081c1a8c +0x20:  cmp    %edx,%eax
081c1a8e +0x22:  setne  %al
081c1a91 +0x25:  test   %al,%al
081c1a93 +0x27:  je     081c1acf <+0x63>
081c1a95 +0x29:  mov    0xc(%ebp),%eax
081c1a98 +0x2c:  mov    %eax,(%esp)
081c1a9b +0x2f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
081c1aa0 +0x34:  movl   $0x0,0x14(%esp)
081c1aa8 +0x3c:  movl   $0x0,0x10(%esp)
081c1ab0 +0x44:  movl   $0x1,0xc(%esp)
081c1ab8 +0x4c:  movl   $0x25b,0x8(%esp)
081c1ac0 +0x54:  mov    0xc(%ebp),%edx
081c1ac3 +0x57:  mov    %edx,0x4(%esp)
081c1ac7 +0x5b:  mov    %eax,(%esp)
081c1aca +0x5e:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
081c1acf +0x63:  mov    $0x0,%eax
081c1ad4 +0x68:  leave
081c1ad5 +0x69:  ret
```

## 反编译 C

```c
// DisPatcher_DeleteItem::check_error @ 0x81c1a6c

/* DisPatcher_DeleteItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_DeleteItem::check_error(DisPatcher_DeleteItem *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  CHackAnalyzer *pCVar2;
  
  iVar1 = CUser::getCurCharacInvenCheckSum(param_1);
  if (iVar1 != *(int *)(param_2 + 0x4bf)) {
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_1,0x25b,1,0,0);
  }
  return 0;
}
```
