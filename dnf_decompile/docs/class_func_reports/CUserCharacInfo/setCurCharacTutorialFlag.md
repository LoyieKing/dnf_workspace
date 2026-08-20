# setCurCharacTutorialFlag

`_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj`

`CUserCharacInfo::setCurCharacTutorialFlag(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086473e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086473e6  _ZN15CUserCharacInfo24setCurCharacTutorialFlagEj
#           CUserCharacInfo::setCurCharacTutorialFlag(unsigned int)
# range [0x086473e6, 0x0864751d]
086473e6 +0x000:  push   %ebp
086473e7 +0x001:  mov    %esp,%ebp
086473e9 +0x003:  push   %edi
086473ea +0x004:  push   %esi
086473eb +0x005:  push   %ebx
086473ec +0x006:  sub    $0x2c,%esp
086473ef +0x009:  mov    0x8(%ebp),%eax
086473f2 +0x00c:  mov    0x10(%eax),%eax
086473f5 +0x00f:  test   %eax,%eax
086473f7 +0x011:  je     08647510 <+0x12a>
086473fd +0x017:  mov    0x8(%ebp),%eax
08647400 +0x01a:  mov    %eax,(%esp)
08647403 +0x01d:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08647408 +0x022:  cmpl   $0x1f,0xc(%ebp)
0864740c +0x026:  ja     08647465 <+0x7f>
0864740e +0x028:  mov    0x8(%ebp),%eax
08647411 +0x02b:  mov    0x10(%eax),%eax
08647414 +0x02e:  mov    0x51(%eax),%edx
08647417 +0x031:  mov    0xc(%ebp),%eax
0864741a +0x034:  mov    $0x1,%ebx
0864741f +0x039:  mov    %ebx,%esi
08647421 +0x03b:  mov    %eax,%ecx
08647423 +0x03d:  shl    %cl,%esi
08647425 +0x03f:  mov    %esi,%eax
08647427 +0x041:  and    %edx,%eax
08647429 +0x043:  test   %eax,%eax
0864742b +0x045:  je     08647437 <+0x51>
0864742d +0x047:  mov    $0x0,%eax
08647432 +0x04c:  jmp    08647515 <+0x12f>
08647437 +0x051:  mov    0x8(%ebp),%eax
0864743a +0x054:  mov    0x10(%eax),%eax
0864743d +0x057:  mov    0x8(%ebp),%edx
08647440 +0x05a:  mov    0x10(%edx),%edx
08647443 +0x05d:  mov    0x51(%edx),%ebx
08647446 +0x060:  mov    0xc(%ebp),%edx
08647449 +0x063:  mov    $0x1,%esi
0864744e +0x068:  mov    %esi,%edi
08647450 +0x06a:  mov    %edx,%ecx
08647452 +0x06c:  shl    %cl,%edi
08647454 +0x06e:  mov    %edi,%edx
08647456 +0x070:  or     %ebx,%edx
08647458 +0x072:  mov    %edx,0x51(%eax)
0864745b +0x075:  mov    $0x1,%eax
08647460 +0x07a:  jmp    08647515 <+0x12f>
08647465 +0x07f:  cmpl   $0x7f,0xc(%ebp)
08647469 +0x083:  ja     08647510 <+0x12a>
0864746f +0x089:  mov    0xc(%ebp),%eax
08647472 +0x08c:  sub    $0x20,%eax
08647475 +0x08f:  mov    %eax,-0x24(%ebp)
08647478 +0x092:  mov    -0x24(%ebp),%eax
0864747b +0x095:  mov    %eax,%edx
0864747d +0x097:  sar    $0x1f,%edx
08647480 +0x09a:  shr    $0x1d,%edx
08647483 +0x09d:  lea    (%edx,%eax,1),%eax
08647486 +0x0a0:  sar    $0x3,%eax
08647489 +0x0a3:  mov    %eax,-0x20(%ebp)
0864748c +0x0a6:  mov    -0x24(%ebp),%eax
0864748f +0x0a9:  mov    %eax,%edx
08647491 +0x0ab:  sar    $0x1f,%edx
08647494 +0x0ae:  shr    $0x1d,%edx
08647497 +0x0b1:  add    %edx,%eax
08647499 +0x0b3:  and    $0x7,%eax
0864749c +0x0b6:  sub    %edx,%eax
0864749e +0x0b8:  mov    %eax,-0x1c(%ebp)
086474a1 +0x0bb:  cmpl   $0x0,-0x20(%ebp)
086474a5 +0x0bf:  js     086474ad <+0xc7>
086474a7 +0x0c1:  cmpl   $0xf,-0x20(%ebp)
086474ab +0x0c5:  jle    086474b4 <+0xce>
086474ad +0x0c7:  mov    $0x0,%eax
086474b2 +0x0cc:  jmp    08647515 <+0x12f>
086474b4 +0x0ce:  mov    0x8(%ebp),%eax
086474b7 +0x0d1:  mov    0x10(%eax),%edx
086474ba +0x0d4:  mov    -0x20(%ebp),%eax
086474bd +0x0d7:  movzbl 0x55(%edx,%eax,1),%eax
086474c2 +0x0dc:  movsbl %al,%edx
086474c5 +0x0df:  mov    -0x1c(%ebp),%eax
086474c8 +0x0e2:  mov    %edx,%ebx
086474ca +0x0e4:  mov    %eax,%ecx
086474cc +0x0e6:  sar    %cl,%ebx
086474ce +0x0e8:  mov    %ebx,%eax
086474d0 +0x0ea:  and    $0x1,%eax
086474d3 +0x0ed:  test   %al,%al
086474d5 +0x0ef:  je     086474de <+0xf8>
086474d7 +0x0f1:  mov    $0x0,%eax
086474dc +0x0f6:  jmp    08647515 <+0x12f>
086474de +0x0f8:  mov    0x8(%ebp),%eax
086474e1 +0x0fb:  mov    0x10(%eax),%edx
086474e4 +0x0fe:  mov    -0x20(%ebp),%eax
086474e7 +0x101:  mov    0x8(%ebp),%ecx
086474ea +0x104:  mov    0x10(%ecx),%ebx
086474ed +0x107:  mov    -0x20(%ebp),%ecx
086474f0 +0x10a:  movzbl 0x55(%ebx,%ecx,1),%ebx
086474f5 +0x10f:  mov    -0x1c(%ebp),%ecx
086474f8 +0x112:  mov    $0x1,%esi
086474fd +0x117:  mov    %esi,%edi
086474ff +0x119:  shl    %cl,%edi
08647501 +0x11b:  mov    %edi,%ecx
08647503 +0x11d:  or     %ebx,%ecx
08647505 +0x11f:  mov    %cl,0x55(%edx,%eax,1)
08647509 +0x123:  mov    $0x1,%eax
0864750e +0x128:  jmp    08647515 <+0x12f>
08647510 +0x12a:  mov    $0x0,%eax
08647515 +0x12f:  add    $0x2c,%esp
08647518 +0x132:  pop    %ebx
08647519 +0x133:  pop    %esi
0864751a +0x134:  pop    %edi
0864751b +0x135:  pop    %ebp
0864751c +0x136:  ret
0864751d +0x137:  nop
```

## 反编译 C

```c
// CUserCharacInfo::setCurCharacTutorialFlag @ 0x86473e6

/* CUserCharacInfo::setCurCharacTutorialFlag(unsigned int) */

undefined4 __thiscall CUserCharacInfo::setCurCharacTutorialFlag(CUserCharacInfo *this,uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    if (param_1 < 0x20) {
      if ((1 << ((byte)param_1 & 0x1f) & *(uint *)(*(int *)(this + 0x10) + 0x51)) != 0) {
        return 0;
      }
      *(uint *)(*(int *)(this + 0x10) + 0x51) =
           1 << ((byte)param_1 & 0x1f) | *(uint *)(*(int *)(this + 0x10) + 0x51);
      return 1;
    }
    if (param_1 < 0x80) {
      iVar1 = param_1 - 0x20;
      iVar2 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3;
      if ((-1 < iVar2) && (iVar2 < 0x10)) {
        bVar3 = (byte)(iVar1 % 8);
        if (((int)*(char *)(*(int *)(this + 0x10) + 0x55 + iVar2) >> (bVar3 & 0x1f) & 1U) != 0) {
          return 0;
        }
        *(byte *)(*(int *)(this + 0x10) + 0x55 + iVar2) =
             (byte)(1 << (bVar3 & 0x1f)) | *(byte *)(*(int *)(this + 0x10) + 0x55 + iVar2);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}
```
