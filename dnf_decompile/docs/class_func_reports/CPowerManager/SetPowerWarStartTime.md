# SetPowerWarStartTime

`_ZN13CPowerManager20SetPowerWarStartTimeEhhhh`

`CPowerManager::SetPowerWarStartTime(unsigned char, unsigned char, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847fa2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847fa2e  _ZN13CPowerManager20SetPowerWarStartTimeEhhhh
#           CPowerManager::SetPowerWarStartTime(unsigned char, unsigned char, unsigned char, unsigned char)
# range [0x0847fa2e, 0x0847fa7b]
0847fa2e +0x00:  push   %ebp
0847fa2f +0x01:  mov    %esp,%ebp
0847fa31 +0x03:  push   %ebx
0847fa32 +0x04:  sub    $0x10,%esp
0847fa35 +0x07:  mov    0xc(%ebp),%ebx
0847fa38 +0x0a:  mov    0x10(%ebp),%ecx
0847fa3b +0x0d:  mov    0x14(%ebp),%edx
0847fa3e +0x10:  mov    0x18(%ebp),%eax
0847fa41 +0x13:  mov    %bl,-0x8(%ebp)
0847fa44 +0x16:  mov    %cl,-0xc(%ebp)
0847fa47 +0x19:  mov    %dl,-0x10(%ebp)
0847fa4a +0x1c:  mov    %al,-0x14(%ebp)
0847fa4d +0x1f:  mov    0x8(%ebp),%eax
0847fa50 +0x22:  movzbl -0x8(%ebp),%edx
0847fa54 +0x26:  mov    %dl,0x24(%eax)
0847fa57 +0x29:  mov    0x8(%ebp),%eax
0847fa5a +0x2c:  movzbl -0xc(%ebp),%edx
0847fa5e +0x30:  mov    %dl,0x25(%eax)
0847fa61 +0x33:  mov    0x8(%ebp),%eax
0847fa64 +0x36:  movzbl -0x10(%ebp),%edx
0847fa68 +0x3a:  mov    %dl,0x26(%eax)
0847fa6b +0x3d:  mov    0x8(%ebp),%eax
0847fa6e +0x40:  movzbl -0x14(%ebp),%edx
0847fa72 +0x44:  mov    %dl,0x27(%eax)
0847fa75 +0x47:  add    $0x10,%esp
0847fa78 +0x4a:  pop    %ebx
0847fa79 +0x4b:  pop    %ebp
0847fa7a +0x4c:  ret
0847fa7b +0x4d:  nop
```

## 反编译 C

```c
// CPowerManager::SetPowerWarStartTime @ 0x847fa2e

/* CPowerManager::SetPowerWarStartTime(unsigned char, unsigned char, unsigned char, unsigned char)
    */

void __thiscall
CPowerManager::SetPowerWarStartTime
          (CPowerManager *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  this[0x24] = (CPowerManager)param_1;
  this[0x25] = (CPowerManager)param_2;
  this[0x26] = (CPowerManager)param_3;
  this[0x27] = (CPowerManager)param_4;
  return;
}
```
