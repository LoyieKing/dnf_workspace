# generateServerKey

`_ZN8WongWork19CSecurityCardCenter17generateServerKeyEPc`

`WongWork::CSecurityCardCenter::generateServerKey(char*)`

| 类 | 地址 |
|---|---|
| `WongWork::CSecurityCardCenter` | `0x085fe0ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe0ec  _ZN8WongWork19CSecurityCardCenter17generateServerKeyEPc
#           WongWork::CSecurityCardCenter::generateServerKey(char*)
# range [0x085fe0ec, 0x085fe17d]
085fe0ec +0x00:  push   %ebp
085fe0ed +0x01:  mov    %esp,%ebp
085fe0ef +0x03:  push   %edi
085fe0f0 +0x04:  push   %esi
085fe0f1 +0x05:  push   %ebx
085fe0f2 +0x06:  sub    $0x3c,%esp
085fe0f5 +0x09:  mov    0x8(%ebp),%eax
085fe0f8 +0x0c:  mov    %eax,(%esp)
085fe0fb +0x0f:  call   085fe026 <_ZN8WongWork19CSecurityCardCenter16_updateTimeCountEv>  ; WongWork::CSecurityCardCenter::_updateTimeCount()
085fe100 +0x14:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085fe107 +0x1b:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085fe10c +0x20:  mov    %eax,-0x1c(%ebp)
085fe10f +0x23:  movl   $&_ZL14gUnicodeBuffer+0xe173,(%esp)
085fe116 +0x2a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085fe11b +0x2f:  mov    %eax,%ebx
085fe11d +0x31:  mov    0x8(%ebp),%eax
085fe120 +0x34:  movzwl 0x484(%eax),%eax
085fe127 +0x3b:  movzwl %ax,%edi
085fe12a +0x3e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085fe12f +0x43:  mov    0x1b0(%eax),%esi
085fe135 +0x49:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085fe13a +0x4e:  mov    0x378(%eax),%eax
085fe140 +0x54:  mov    %ebx,0x1c(%esp)
085fe144 +0x58:  mov    %edi,0x18(%esp)
085fe148 +0x5c:  mov    -0x1c(%ebp),%edx
085fe14b +0x5f:  mov    %edx,0x14(%esp)
085fe14f +0x63:  mov    %esi,0x10(%esp)
085fe153 +0x67:  mov    %eax,0xc(%esp)
085fe157 +0x6b:  movl   $"%02d%02d%010d%05d%05d",0x8(%esp)
085fe15f +0x73:  movl   $0x21,0x4(%esp)
085fe167 +0x7b:  mov    0xc(%ebp),%eax
085fe16a +0x7e:  mov    %eax,(%esp)
085fe16d +0x81:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
085fe172 +0x86:  mov    0xc(%ebp),%eax
085fe175 +0x89:  add    $0x3c,%esp
085fe178 +0x8c:  pop    %ebx
085fe179 +0x8d:  pop    %esi
085fe17a +0x8e:  pop    %edi
085fe17b +0x8f:  pop    %ebp
085fe17c +0x90:  ret
085fe17d +0x91:  nop
```

## 反编译 C

```c
// WongWork::CSecurityCardCenter::generateServerKey @ 0x85fe0ec

/* WongWork::CSecurityCardCenter::generateServerKey(char*) */

char * __thiscall
WongWork::CSecurityCardCenter::generateServerKey(CSecurityCardCenter *this,char *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  _updateTimeCount(this);
  uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  uVar4 = get_rand_int(99999);
  uVar1 = *(ushort *)(this + 0x484);
  iVar5 = G_CEnvironment();
  uVar2 = *(undefined4 *)(iVar5 + 0x1b0);
  iVar5 = G_CEnvironment();
  OS_API::snprintf(param_1,0x21,"%02d%02d%010d%05d%05d",*(undefined4 *)(iVar5 + 0x378),uVar2,uVar3,
                   (uint)uVar1,uVar4);
  return param_1;
}
```
