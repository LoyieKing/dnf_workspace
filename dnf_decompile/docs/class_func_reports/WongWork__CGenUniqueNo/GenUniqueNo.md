# GenUniqueNo

`_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc`

`WongWork::CGenUniqueNo::GenUniqueNo(char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CGenUniqueNo` | `0x084b76d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b76d8  _ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc
#           WongWork::CGenUniqueNo::GenUniqueNo(char*)
# range [0x084b76d8, 0x084b774f]
084b76d8 +0x00:  push   %ebp
084b76d9 +0x01:  mov    %esp,%ebp
084b76db +0x03:  push   %ebx
084b76dc +0x04:  sub    $0x34,%esp
084b76df +0x07:  call   084b76ac <_ZN8WongWork12CGenUniqueNo16_updateTimeCountEv>  ; WongWork::CGenUniqueNo::_updateTimeCount()
084b76e4 +0x0c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084b76eb +0x13:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084b76f0 +0x18:  mov    %eax,-0x10(%ebp)
084b76f3 +0x1b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084b76f8 +0x20:  mov    0x378(%eax),%eax
084b76fe +0x26:  mov    %eax,-0xc(%ebp)
084b7701 +0x29:  movzwl &_ZN8WongWork12CGenUniqueNo12m_nTimeCountE,%eax
084b7708 +0x30:  movzwl %ax,%ebx
084b770b +0x33:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084b7710 +0x38:  mov    0x1b0(%eax),%eax
084b7716 +0x3e:  mov    %ebx,0x18(%esp)
084b771a +0x42:  mov    -0x10(%ebp),%edx
084b771d +0x45:  mov    %edx,0x14(%esp)
084b7721 +0x49:  mov    %eax,0x10(%esp)
084b7725 +0x4d:  mov    -0xc(%ebp),%eax
084b7728 +0x50:  mov    %eax,0xc(%esp)
084b772c +0x54:  movl   $"%02d%02d%10d%05d",0x8(%esp)
084b7734 +0x5c:  movl   $0x14,0x4(%esp)
084b773c +0x64:  mov    0x8(%ebp),%eax
084b773f +0x67:  mov    %eax,(%esp)
084b7742 +0x6a:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084b7747 +0x6f:  mov    0x8(%ebp),%eax
084b774a +0x72:  add    $0x34,%esp
084b774d +0x75:  pop    %ebx
084b774e +0x76:  pop    %ebp
084b774f +0x77:  ret
```

## 反编译 C

```c
// WongWork::CGenUniqueNo::GenUniqueNo @ 0x84b76d8

/* WongWork::CGenUniqueNo::GenUniqueNo(char*) */

char * WongWork::CGenUniqueNo::GenUniqueNo(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  _updateTimeCount();
  uVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar3 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar3 + 0x378);
  uVar4 = (uint)m_nTimeCount;
  iVar3 = G_CEnvironment();
  OS_API::snprintf(param_1,0x14,"%02d%02d%10d%05d",uVar1,*(undefined4 *)(iVar3 + 0x1b0),uVar2,uVar4)
  ;
  return param_1;
}
```
