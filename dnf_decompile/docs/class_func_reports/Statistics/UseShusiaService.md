# UseShusiaService

`_ZN10Statistics16UseShusiaServiceEi`

`Statistics::UseShusiaService(int)`

| 类 | 地址 |
|---|---|
| `Statistics` | `0x0860b90a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860b90a  _ZN10Statistics16UseShusiaServiceEi
#           Statistics::UseShusiaService(int)
# range [0x0860b90a, 0x0860b92d]
0860b90a +0x00:  push   %ebp
0860b90b +0x01:  mov    %esp,%ebp
0860b90d +0x03:  sub    $0x18,%esp
0860b910 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0860b915 +0x0b:  mov    %eax,(%esp)
0860b918 +0x0e:  call   0844dc32 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x848>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x848
0860b91d +0x13:  mov    0x8(%ebp),%edx
0860b920 +0x16:  mov    %edx,0x4(%esp)
0860b924 +0x1a:  mov    %eax,(%esp)
0860b927 +0x1d:  call   0860c358 <_ZN23StatisticsShusiaService15incServiceUsageEi>  ; StatisticsShusiaService::incServiceUsage(int)
0860b92c +0x22:  leave
0860b92d +0x23:  ret
```

## 反编译 C

```c
// Statistics::UseShusiaService @ 0x860b90a

/* Statistics::UseShusiaService(int) */

void Statistics::UseShusiaService(int param_1)

{
  GameWorld *this;
  int iVar1;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::getStatisticsShusiaService(this);
  StatisticsShusiaService::incServiceUsage(iVar1);
  return;
}
```
