# setCurCharacVill

`_ZN15CUserCharacInfo16setCurCharacVillEc`

`CUserCharacInfo::setCurCharacVill(char)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086455bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086455bc  _ZN15CUserCharacInfo16setCurCharacVillEc
#           CUserCharacInfo::setCurCharacVill(char)
# range [0x086455bc, 0x0864561f]
086455bc +0x00:  push   %ebp
086455bd +0x01:  mov    %esp,%ebp
086455bf +0x03:  sub    $0x28,%esp
086455c2 +0x06:  mov    0xc(%ebp),%eax
086455c5 +0x09:  mov    %al,-0xc(%ebp)
086455c8 +0x0c:  mov    0x8(%ebp),%eax
086455cb +0x0f:  mov    0x10(%eax),%eax
086455ce +0x12:  test   %eax,%eax
086455d0 +0x14:  je     0864561c <+0x60>
086455d2 +0x16:  mov    0x8(%ebp),%eax
086455d5 +0x19:  mov    0x10(%eax),%eax
086455d8 +0x1c:  mov    0x8(%ebp),%edx
086455db +0x1f:  mov    0x10(%edx),%edx
086455de +0x22:  movzbl 0x22(%edx),%edx
086455e2 +0x26:  mov    %dl,0x25(%eax)
086455e5 +0x29:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086455ea +0x2e:  mov    %eax,(%esp)
086455ed +0x31:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
086455f2 +0x36:  test   %al,%al
086455f4 +0x38:  je     08645602 <+0x46>
086455f6 +0x3a:  mov    0x8(%ebp),%eax
086455f9 +0x3d:  mov    0x10(%eax),%eax
086455fc +0x40:  movb   $0x2,0x23(%eax)
08645600 +0x44:  jmp    0864561d <+0x61>
08645602 +0x46:  mov    0x8(%ebp),%eax
08645605 +0x49:  mov    %eax,(%esp)
08645608 +0x4c:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0864560d +0x51:  mov    0x8(%ebp),%eax
08645610 +0x54:  mov    0x10(%eax),%eax
08645613 +0x57:  movzbl -0xc(%ebp),%edx
08645617 +0x5b:  mov    %dl,0x22(%eax)
0864561a +0x5e:  jmp    0864561d <+0x61>
0864561c +0x60:  nop
0864561d +0x61:  leave
0864561e +0x62:  ret
0864561f +0x63:  nop
```

## 反编译 C

```c
// CUserCharacInfo::setCurCharacVill @ 0x86455bc

/* CUserCharacInfo::setCurCharacVill(char) */

void __thiscall CUserCharacInfo::setCurCharacVill(CUserCharacInfo *this,char param_1)

{
  char cVar1;
  GameWorld *this_00;
  
  if (*(int *)(this + 0x10) != 0) {
    *(undefined1 *)(*(int *)(this + 0x10) + 0x25) = *(undefined1 *)(*(int *)(this + 0x10) + 0x22);
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPVPChannel(this_00);
    if (cVar1 == '\0') {
      enableSaveCharacStat(this);
      *(char *)(*(int *)(this + 0x10) + 0x22) = param_1;
    }
    else {
      *(undefined1 *)(*(int *)(this + 0x10) + 0x23) = 2;
    }
  }
  return;
}
```
