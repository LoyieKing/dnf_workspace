# GetUser

`_ZN18online_preliminary18COnlinePreliminary7GetUserEj`

`online_preliminary::COnlinePreliminary::GetUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085620c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085620c8  _ZN18online_preliminary18COnlinePreliminary7GetUserEj
#           online_preliminary::COnlinePreliminary::GetUser(unsigned int)
# range [0x085620c8, 0x08562103]
085620c8 +0x00:  push   %ebp
085620c9 +0x01:  mov    %esp,%ebp
085620cb +0x03:  cmpl   $0x3,0xc(%ebp)
085620cf +0x07:  jbe    085620d8 <+0x10>
085620d1 +0x09:  mov    $0x0,%eax
085620d6 +0x0e:  jmp    08562101 <+0x39>
085620d8 +0x10:  mov    0xc(%ebp),%edx
085620db +0x13:  mov    0x8(%ebp),%eax
085620de +0x16:  add    $0x2,%edx
085620e1 +0x19:  movzbl 0x18(%eax,%edx,8),%eax
085620e6 +0x1e:  xor    $0x1,%eax
085620e9 +0x21:  test   %al,%al
085620eb +0x23:  je     085620f4 <+0x2c>
085620ed +0x25:  mov    $0x0,%eax
085620f2 +0x2a:  jmp    08562101 <+0x39>
085620f4 +0x2c:  mov    0xc(%ebp),%edx
085620f7 +0x2f:  mov    0x8(%ebp),%eax
085620fa +0x32:  add    $0x2,%edx
085620fd +0x35:  mov    0x14(%eax,%edx,8),%eax
08562101 +0x39:  pop    %ebp
08562102 +0x3a:  ret
08562103 +0x3b:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::GetUser @ 0x85620c8

/* online_preliminary::COnlinePreliminary::GetUser(unsigned int) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::GetUser(COnlinePreliminary *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (this[(param_1 + 2) * 8 + 0x18] == (COnlinePreliminary)0x1) {
      uVar1 = *(undefined4 *)(this + (param_1 + 2) * 8 + 0x14);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
