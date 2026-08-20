# _SetLevel

`_ZN22CEventCharacterHandler9_SetLevelEP5CUseri`

`CEventCharacterHandler::_SetLevel(CUser*, int)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848eade` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848eade  _ZN22CEventCharacterHandler9_SetLevelEP5CUseri
#           CEventCharacterHandler::_SetLevel(CUser*, int)
# range [0x0848eade, 0x0848ebd5]
0848eade +0x00:  push   %ebp
0848eadf +0x01:  mov    %esp,%ebp
0848eae1 +0x03:  sub    $0x38,%esp
0848eae4 +0x06:  cmpl   $0x46,0x10(%ebp)
0848eae8 +0x0a:  jle    0848eaf4 <+0x16>
0848eaea +0x0c:  mov    $0x0,%eax
0848eaef +0x11:  jmp    0848ebd4 <+0xf6>
0848eaf4 +0x16:  movb   $0x1,-0x15(%ebp)
0848eaf8 +0x1a:  mov    0xc(%ebp),%eax
0848eafb +0x1d:  mov    %eax,(%esp)
0848eafe +0x20:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0848eb03 +0x25:  mov    0x10(%ebp),%edx
0848eb06 +0x28:  mov    %edx,%ecx
0848eb08 +0x2a:  sub    %eax,%ecx
0848eb0a +0x2c:  mov    %ecx,%eax
0848eb0c +0x2e:  mov    %eax,-0x14(%ebp)
0848eb0f +0x31:  cmpl   $0x0,-0x14(%ebp)
0848eb13 +0x35:  jne    0848eb1e <+0x40>
0848eb15 +0x37:  movb   $0x0,-0x15(%ebp)
0848eb19 +0x3b:  jmp    0848ebd0 <+0xf2>
0848eb1e +0x40:  cmpl   $0x0,-0x14(%ebp)
0848eb22 +0x44:  jle    0848eb7b <+0x9d>
0848eb24 +0x46:  movl   $0x0,-0x10(%ebp)
0848eb2b +0x4d:  jmp    0848eb6c <+0x8e>
0848eb2d +0x4f:  mov    0xc(%ebp),%eax
0848eb30 +0x52:  mov    %eax,(%esp)
0848eb33 +0x55:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0848eb38 +0x5a:  add    $0x1,%eax
0848eb3b +0x5d:  mov    %eax,-0x28(%ebp)
0848eb3e +0x60:  movl   $0x46,-0x24(%ebp)
0848eb45 +0x67:  lea    -0x28(%ebp),%eax
0848eb48 +0x6a:  mov    %eax,0x4(%esp)
0848eb4c +0x6e:  lea    -0x24(%ebp),%eax
0848eb4f +0x71:  mov    %eax,(%esp)
0848eb52 +0x74:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0848eb57 +0x79:  mov    (%eax),%eax
0848eb59 +0x7b:  mov    %eax,0x4(%esp)
0848eb5d +0x7f:  mov    0xc(%ebp),%eax
0848eb60 +0x82:  mov    %eax,(%esp)
0848eb63 +0x85:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
0848eb68 +0x8a:  addl   $0x1,-0x10(%ebp)
0848eb6c +0x8e:  mov    -0x10(%ebp),%eax
0848eb6f +0x91:  cmp    -0x14(%ebp),%eax
0848eb72 +0x94:  setl   %al
0848eb75 +0x97:  test   %al,%al
0848eb77 +0x99:  jne    0848eb2d <+0x4f>
0848eb79 +0x9b:  jmp    0848ebd0 <+0xf2>
0848eb7b +0x9d:  movl   $0x0,-0xc(%ebp)
0848eb82 +0xa4:  jmp    0848ebc3 <+0xe5>
0848eb84 +0xa6:  mov    0xc(%ebp),%eax
0848eb87 +0xa9:  mov    %eax,(%esp)
0848eb8a +0xac:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0848eb8f +0xb1:  sub    $0x1,%eax
0848eb92 +0xb4:  mov    %eax,-0x20(%ebp)
0848eb95 +0xb7:  movl   $0x46,-0x1c(%ebp)
0848eb9c +0xbe:  lea    -0x20(%ebp),%eax
0848eb9f +0xc1:  mov    %eax,0x4(%esp)
0848eba3 +0xc5:  lea    -0x1c(%ebp),%eax
0848eba6 +0xc8:  mov    %eax,(%esp)
0848eba9 +0xcb:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0848ebae +0xd0:  mov    (%eax),%eax
0848ebb0 +0xd2:  mov    %eax,0x4(%esp)
0848ebb4 +0xd6:  mov    0xc(%ebp),%eax
0848ebb7 +0xd9:  mov    %eax,(%esp)
0848ebba +0xdc:  call   0867a95c <_ZN5CUser14SetCharacLevelEi>  ; CUser::SetCharacLevel(int)
0848ebbf +0xe1:  subl   $0x1,-0xc(%ebp)
0848ebc3 +0xe5:  mov    -0xc(%ebp),%eax
0848ebc6 +0xe8:  cmp    -0x14(%ebp),%eax
0848ebc9 +0xeb:  setg   %al
0848ebcc +0xee:  test   %al,%al
0848ebce +0xf0:  jne    0848eb84 <+0xa6>
0848ebd0 +0xf2:  movzbl -0x15(%ebp),%eax
0848ebd4 +0xf6:  leave
0848ebd5 +0xf7:  ret
```

## 反编译 C

```c
// CEventCharacterHandler::_SetLevel @ 0x848eade

/* CEventCharacterHandler::_SetLevel(CUser*, int) */

undefined1 __thiscall
CEventCharacterHandler::_SetLevel(CEventCharacterHandler *this,CUser *param_1,int param_2)

{
  int *piVar1;
  int local_2c [3];
  int local_20;
  undefined1 local_19;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 < 0x47) {
    local_19 = 1;
    local_18 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_18 = param_2 - local_18;
    if (local_18 == 0) {
      local_19 = 0;
    }
    else if (local_18 < 1) {
      for (local_10 = 0; local_18 < local_10; local_10 = local_10 + -1) {
        local_2c[2] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        local_2c[2] = local_2c[2] + -1;
        local_20 = 0x46;
        piVar1 = std::min<int>(&local_20,local_2c + 2);
        CUser::SetCharacLevel(param_1,*piVar1);
      }
    }
    else {
      for (local_14 = 0; local_14 < local_18; local_14 = local_14 + 1) {
        local_2c[0] = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        local_2c[0] = local_2c[0] + 1;
        local_2c[1] = 0x46;
        piVar1 = std::min<int>(local_2c + 1,local_2c);
        CUser::SetCharacLevel(param_1,*piVar1);
      }
    }
  }
  else {
    local_19 = 0;
  }
  return local_19;
}
```
