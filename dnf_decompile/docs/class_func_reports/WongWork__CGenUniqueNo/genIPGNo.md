# genIPGNo

`_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc`

`WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CGenUniqueNo` | `0x084b7750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7750  _ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc
#           WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*)
# range [0x084b7750, 0x084b780f]
084b7750 +0x00:  push   %ebp
084b7751 +0x01:  mov    %esp,%ebp
084b7753 +0x03:  push   %edi
084b7754 +0x04:  push   %esi
084b7755 +0x05:  push   %ebx
084b7756 +0x06:  sub    $0x7c,%esp
084b7759 +0x09:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084b7760 +0x10:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084b7765 +0x15:  mov    %eax,-0x20(%ebp)
084b7768 +0x18:  lea    -0x4c(%ebp),%eax
084b776b +0x1b:  mov    %eax,0x4(%esp)
084b776f +0x1f:  lea    -0x20(%ebp),%eax
084b7772 +0x22:  mov    %eax,(%esp)
084b7775 +0x25:  call   0807e360 <_init+0xc58>
084b777a +0x2a:  mov    %eax,-0x1c(%ebp)
084b777d +0x2d:  mov    -0x1c(%ebp),%eax
084b7780 +0x30:  mov    0xc(%eax),%esi
084b7783 +0x33:  mov    -0x1c(%ebp),%eax
084b7786 +0x36:  mov    0x10(%eax),%eax
084b7789 +0x39:  lea    0x1(%eax),%edi
084b778c +0x3c:  mov    -0x1c(%ebp),%eax
084b778f +0x3f:  mov    0x14(%eax),%eax
084b7792 +0x42:  lea    0x76c(%eax),%ecx
084b7798 +0x48:  mov    $0x10624dd3,%edx
084b779d +0x4d:  mov    %ecx,%eax
084b779f +0x4f:  imul   %edx
084b77a1 +0x51:  sar    $0x7,%edx
084b77a4 +0x54:  mov    %ecx,%eax
084b77a6 +0x56:  sar    $0x1f,%eax
084b77a9 +0x59:  mov    %edx,%ebx
084b77ab +0x5b:  sub    %eax,%ebx
084b77ad +0x5d:  imul   $0x7d0,%ebx,%eax
084b77b3 +0x63:  mov    %ecx,%ebx
084b77b5 +0x65:  sub    %eax,%ebx
084b77b7 +0x67:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084b77bc +0x6c:  mov    0x1b0(%eax),%edx
084b77c2 +0x72:  mov    0x8(%ebp),%eax
084b77c5 +0x75:  movzbl &_ZZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPcE9typeConst(%eax),%eax
084b77cc +0x7c:  movsbl %al,%eax
084b77cf +0x7f:  mov    0xc(%ebp),%ecx
084b77d2 +0x82:  mov    %ecx,0x20(%esp)
084b77d6 +0x86:  mov    %esi,0x1c(%esp)
084b77da +0x8a:  mov    %edi,0x18(%esp)
084b77de +0x8e:  mov    %ebx,0x14(%esp)
084b77e2 +0x92:  mov    %edx,0x10(%esp)
084b77e6 +0x96:  mov    %eax,0xc(%esp)
084b77ea +0x9a:  movl   $"%c%02d%02d%02d%02d%010d",0x8(%esp)
084b77f2 +0xa2:  movl   $0x14,0x4(%esp)
084b77fa +0xaa:  mov    0x10(%ebp),%eax
084b77fd +0xad:  mov    %eax,(%esp)
084b7800 +0xb0:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084b7805 +0xb5:  mov    0x10(%ebp),%eax
084b7808 +0xb8:  add    $0x7c,%esp
084b780b +0xbb:  pop    %ebx
084b780c +0xbc:  pop    %esi
084b780d +0xbd:  pop    %edi
084b780e +0xbe:  pop    %ebp
084b780f +0xbf:  ret
```

## 反编译 C

```c
// WongWork::CGenUniqueNo::genIPGNo @ 0x84b7750

/* WongWork::CGenUniqueNo::genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE, unsigned int, char*) */

char * WongWork::CGenUniqueNo::genIPGNo(int param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tm local_50;
  time_t local_24;
  tm *local_20;
  
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = localtime_r(&local_24,&local_50);
  iVar1 = local_20->tm_mday;
  iVar2 = local_20->tm_mon;
  iVar3 = local_20->tm_year;
  iVar4 = G_CEnvironment();
  OS_API::snprintf(param_3,0x14,"%c%02d%02d%02d%02d%010d",
                   (int)*(char *)((int)&genIPGNo(WongWork::CGenUniqueNo::ENUM_IPGNO_TYPE,unsigned_int,char*)
                                        ::typeConst + param_1),*(undefined4 *)(iVar4 + 0x1b0),
                   (iVar3 + 0x76c) % 2000,iVar2 + 1,iVar1,param_2);
  return param_3;
}
```
