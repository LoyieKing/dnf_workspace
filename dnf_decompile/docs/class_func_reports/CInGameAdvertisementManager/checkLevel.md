# checkLevel

`_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc`

`CInGameAdvertisementManager::checkLevel(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fca9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fca9e  _ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc
#           CInGameAdvertisementManager::checkLevel(CUser*, char*)
# range [0x080fca9e, 0x080fcb3d]
080fca9e +0x00:  push   %ebp
080fca9f +0x01:  mov    %esp,%ebp
080fcaa1 +0x03:  sub    $0x208,%esp
080fcaa7 +0x09:  cmpl   $0x0,0xc(%ebp)
080fcaab +0x0d:  jne    080fcab7 <+0x19>
080fcaad +0x0f:  mov    $0x0,%eax
080fcab2 +0x14:  jmp    080fcb3c <+0x9e>
080fcab7 +0x19:  movl   $0x78,0xc(%esp)
080fcabf +0x21:  lea    -0x1f8(%ebp),%eax
080fcac5 +0x27:  mov    %eax,0x8(%esp)
080fcac9 +0x2b:  movl   $",",0x4(%esp)
080fcad1 +0x33:  mov    0x10(%ebp),%eax
080fcad4 +0x36:  mov    %eax,(%esp)
080fcad7 +0x39:  call   081089c8 <_ZN7DNFFLib13ExplodeStringEPcS0_PS0_i>  ; DNFFLib::ExplodeString(char*, char*, char**, int)
080fcadc +0x3e:  mov    %eax,-0x14(%ebp)
080fcadf +0x41:  movl   $0x0,-0x10(%ebp)
080fcae6 +0x48:  jmp    080fcb2a <+0x8c>
080fcae8 +0x4a:  mov    -0x10(%ebp),%eax
080fcaeb +0x4d:  mov    -0x1f8(%ebp,%eax,4),%eax
080fcaf2 +0x54:  mov    %eax,(%esp)
080fcaf5 +0x57:  call   0807e6f0 <_init+0xfe8>
080fcafa +0x5c:  mov    %eax,-0xc(%ebp)
080fcafd +0x5f:  cmpl   $0xffffffff,-0xc(%ebp)
080fcb01 +0x63:  jne    080fcb0a <+0x6c>
080fcb03 +0x65:  mov    $0x1,%eax
080fcb08 +0x6a:  jmp    080fcb3c <+0x9e>
080fcb0a +0x6c:  mov    0xc(%ebp),%eax
080fcb0d +0x6f:  mov    %eax,(%esp)
080fcb10 +0x72:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080fcb15 +0x77:  cmp    -0xc(%ebp),%eax
080fcb18 +0x7a:  sete   %al
080fcb1b +0x7d:  test   %al,%al
080fcb1d +0x7f:  je     080fcb26 <+0x88>
080fcb1f +0x81:  mov    $0x1,%eax
080fcb24 +0x86:  jmp    080fcb3c <+0x9e>
080fcb26 +0x88:  addl   $0x1,-0x10(%ebp)
080fcb2a +0x8c:  mov    -0x10(%ebp),%eax
080fcb2d +0x8f:  cmp    -0x14(%ebp),%eax
080fcb30 +0x92:  setl   %al
080fcb33 +0x95:  test   %al,%al
080fcb35 +0x97:  jne    080fcae8 <+0x4a>
080fcb37 +0x99:  mov    $0x0,%eax
080fcb3c +0x9e:  leave
080fcb3d +0x9f:  ret
```

## 反编译 C

```c
// CInGameAdvertisementManager::checkLevel @ 0x80fca9e

/* CInGameAdvertisementManager::checkLevel(CUser*, char*) */

undefined4 __thiscall
CInGameAdvertisementManager::checkLevel
          (CInGameAdvertisementManager *this,CUser *param_1,char *param_2)

{
  int iVar1;
  char *local_1fc [121];
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_18 = DNFFLib::ExplodeString(param_2,",",local_1fc,0x78);
    for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
      local_10 = atoi(local_1fc[local_14]);
      if (local_10 == -1) {
        return 1;
      }
      iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (iVar1 == local_10) {
        return 1;
      }
    }
  }
  return 0;
}
```
