# GetProperJobIndex

`_ZN17CLevelRewardTable17GetProperJobIndexEc`

`CLevelRewardTable::GetProperJobIndex(char)`

| 类 | 地址 |
|---|---|
| `CLevelRewardTable` | `0x08687e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687e78  _ZN17CLevelRewardTable17GetProperJobIndexEc
#           CLevelRewardTable::GetProperJobIndex(char)
# range [0x08687e78, 0x08687efb]
08687e78 +0x00:  push   %ebp
08687e79 +0x01:  mov    %esp,%ebp
08687e7b +0x03:  sub    $0x28,%esp
08687e7e +0x06:  mov    0xc(%ebp),%eax
08687e81 +0x09:  mov    %al,-0xc(%ebp)
08687e84 +0x0c:  cmpb   $0x0,-0xc(%ebp)
08687e88 +0x10:  jns    08687e91 <+0x19>
08687e8a +0x12:  mov    $0xffffffff,%eax
08687e8f +0x17:  jmp    08687ef9 <+0x81>
08687e91 +0x19:  mov    0x8(%ebp),%eax
08687e94 +0x1c:  mov    %eax,(%esp)
08687e97 +0x1f:  call   08697782 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3fd7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3fd7
08687e9c +0x24:  xor    $0x1,%eax
08687e9f +0x27:  test   %al,%al
08687ea1 +0x29:  je     08687eaa <+0x32>
08687ea3 +0x2b:  mov    $0x0,%eax
08687ea8 +0x30:  jmp    08687ef9 <+0x81>
08687eaa +0x32:  movsbl -0xc(%ebp),%eax
08687eae +0x36:  cmp    $0x7,%eax
08687eb1 +0x39:  ja     08687ef4 <+0x7c>
08687eb3 +0x3b:  mov    &data#c04b7880(.rodata)(,%eax,4),%eax
08687eba +0x42:  jmp    *%eax
08687ebc +0x44:  mov    $0x1,%eax
08687ec1 +0x49:  jmp    08687ef9 <+0x81>
08687ec3 +0x4b:  mov    $0x2,%eax
08687ec8 +0x50:  jmp    08687ef9 <+0x81>
08687eca +0x52:  mov    $0x3,%eax
08687ecf +0x57:  jmp    08687ef9 <+0x81>
08687ed1 +0x59:  mov    $0x4,%eax
08687ed6 +0x5e:  jmp    08687ef9 <+0x81>
08687ed8 +0x60:  mov    $0x5,%eax
08687edd +0x65:  jmp    08687ef9 <+0x81>
08687edf +0x67:  mov    $0x6,%eax
08687ee4 +0x6c:  jmp    08687ef9 <+0x81>
08687ee6 +0x6e:  mov    $0x7,%eax
08687eeb +0x73:  jmp    08687ef9 <+0x81>
08687eed +0x75:  mov    $0x8,%eax
08687ef2 +0x7a:  jmp    08687ef9 <+0x81>
08687ef4 +0x7c:  mov    $0xffffffff,%eax
08687ef9 +0x81:  leave
08687efa +0x82:  ret
08687efb +0x83:  nop
```

## 反编译 C

```c
// CLevelRewardTable::GetProperJobIndex @ 0x8687e78

/* CLevelRewardTable::GetProperJobIndex(char) */

undefined4 __thiscall CLevelRewardTable::GetProperJobIndex(CLevelRewardTable *this,char param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 < '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = GetJobAffection(this);
    if (cVar1 == '\x01') {
      switch(param_1) {
      case '\0':
        uVar2 = 1;
        break;
      case '\x01':
        uVar2 = 2;
        break;
      case '\x02':
        uVar2 = 3;
        break;
      case '\x03':
        uVar2 = 4;
        break;
      case '\x04':
        uVar2 = 5;
        break;
      case '\x05':
        uVar2 = 6;
        break;
      case '\x06':
        uVar2 = 7;
        break;
      case '\a':
        uVar2 = 8;
        break;
      default:
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
