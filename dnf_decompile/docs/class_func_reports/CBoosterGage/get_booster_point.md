# get_booster_point

`_ZN12CBoosterGage17get_booster_pointEm`

`CBoosterGage::get_booster_point(unsigned long)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dc69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc69c  _ZN12CBoosterGage17get_booster_pointEm
#           CBoosterGage::get_booster_point(unsigned long)
# range [0x080dc69c, 0x080dc6d5]
080dc69c +0x00:  push   %ebp
080dc69d +0x01:  mov    %esp,%ebp
080dc69f +0x03:  sub    $0x28,%esp
080dc6a2 +0x06:  movb   $0x0,-0x9(%ebp)
080dc6a6 +0x0a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dc6ab +0x0f:  lea    0x8770(%eax),%edx
080dc6b1 +0x15:  mov    0xc(%ebp),%eax
080dc6b4 +0x18:  mov    %eax,0x4(%esp)
080dc6b8 +0x1c:  mov    %edx,(%esp)
080dc6bb +0x1f:  call   080dd4d4 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x1d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x1d
080dc6c0 +0x24:  mov    %al,-0x9(%ebp)
080dc6c3 +0x27:  cmpb   $0x0,-0x9(%ebp)
080dc6c7 +0x2b:  jne    080dc6d0 <+0x34>
080dc6c9 +0x2d:  mov    $0x0,%eax
080dc6ce +0x32:  jmp    080dc6d4 <+0x38>
080dc6d0 +0x34:  movzbl -0x9(%ebp),%eax
080dc6d4 +0x38:  leave
080dc6d5 +0x39:  ret
```

## 反编译 C

```c
// CBoosterGage::get_booster_point @ 0x80dc69c

/* CBoosterGage::get_booster_point(unsigned long) */

char __thiscall CBoosterGage::get_booster_point(CBoosterGage *this,ulong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = G_CDataManager();
  cVar1 = BoosterGageData::getBoosterPoint((BoosterGageData *)(iVar2 + 0x8770),param_1);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  return cVar1;
}
```
