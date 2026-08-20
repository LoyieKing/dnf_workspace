# GetPowerWarGhostTime

`_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf`

`CPowerManager::GetPowerWarGhostTime(CUser*, float)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x08480e92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480e92  _ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf
#           CPowerManager::GetPowerWarGhostTime(CUser*, float)
# range [0x08480e92, 0x08480ec7]
08480e92 +0x00:  push   %ebp
08480e93 +0x01:  mov    %esp,%ebp
08480e95 +0x03:  sub    $0x28,%esp
08480e98 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08480e9d +0x0b:  mov    0xa63c(%eax),%eax
08480ea3 +0x11:  mov    %eax,-0x1c(%ebp)
08480ea6 +0x14:  fildl  -0x1c(%ebp)
08480ea9 +0x17:  fmuls  0x10(%ebp)
08480eac +0x1a:  fnstcw -0x1e(%ebp)
08480eaf +0x1d:  movzwl -0x1e(%ebp),%eax
08480eb3 +0x21:  mov    $0xc,%ah
08480eb5 +0x23:  mov    %ax,-0x20(%ebp)
08480eb9 +0x27:  fldcw  -0x20(%ebp)
08480ebc +0x2a:  fistpl -0xc(%ebp)
08480ebf +0x2d:  fldcw  -0x1e(%ebp)
08480ec2 +0x30:  mov    -0xc(%ebp),%eax
08480ec5 +0x33:  leave
08480ec6 +0x34:  ret
08480ec7 +0x35:  nop
```

## 反编译 C

```c
// CPowerManager::GetPowerWarGhostTime @ 0x8480e92

/* CPowerManager::GetPowerWarGhostTime(CUser*, float) */

int __thiscall CPowerManager::GetPowerWarGhostTime(CPowerManager *this,CUser *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  return (int)ROUND((float)*(int *)(iVar1 + 0xa63c) * param_2);
}
```
