# check_error

`_ZN29DisPatcher_DieCharacInDungeon11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_DieCharacInDungeon::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DieCharacInDungeon` | `0x081c2bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2bc0  _ZN29DisPatcher_DieCharacInDungeon11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_DieCharacInDungeon::check_error(CUser*, MSG_BASE&)
# range [0x081c2bc0, 0x081c2bed]
081c2bc0 +0x00:  push   %ebp
081c2bc1 +0x01:  mov    %esp,%ebp
081c2bc3 +0x03:  sub    $0x18,%esp
081c2bc6 +0x06:  mov    0xc(%ebp),%eax
081c2bc9 +0x09:  mov    %eax,(%esp)
081c2bcc +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c2bd1 +0x11:  mov    %eax,(%esp)
081c2bd4 +0x14:  call   081466f0 <_ZN6Global11CGlobalFunc15Get_State_CheckE8ch_state>  ; Global::CGlobalFunc::Get_State_Check(ch_state)
081c2bd9 +0x19:  xor    $0x1,%eax
081c2bdc +0x1c:  test   %al,%al
081c2bde +0x1e:  je     081c2be7 <+0x27>
081c2be0 +0x20:  mov    $0xffffffff,%eax
081c2be5 +0x25:  jmp    081c2bec <+0x2c>
081c2be7 +0x27:  mov    $0x0,%eax
081c2bec +0x2c:  leave
081c2bed +0x2d:  ret
```

## 反编译 C

```c
// DisPatcher_DieCharacInDungeon::check_error @ 0x81c2bc0

/* DisPatcher_DieCharacInDungeon::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_DieCharacInDungeon::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = CUser::get_state((CUser *)param_2);
  cVar1 = Global::CGlobalFunc::Get_State_Check(uVar2);
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
