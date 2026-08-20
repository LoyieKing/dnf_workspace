# check_error

`_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ItemDictionary::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemDictionary` | `0x081dd87a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd87a  _ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ItemDictionary::check_error(CUser*, MSG_BASE&)
# range [0x081dd87a, 0x081dd8b5]
081dd87a +0x00:  push   %ebp
081dd87b +0x01:  mov    %esp,%ebp
081dd87d +0x03:  sub    $0x28,%esp
081dd880 +0x06:  cmpl   $0x0,0xc(%ebp)
081dd884 +0x0a:  jne    081dd88d <+0x13>
081dd886 +0x0c:  mov    $0xffffffff,%eax
081dd88b +0x11:  jmp    081dd8b4 <+0x3a>
081dd88d +0x13:  mov    0xc(%ebp),%eax
081dd890 +0x16:  mov    %eax,(%esp)
081dd893 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dd898 +0x1e:  cmp    $0x2,%eax
081dd89b +0x21:  setle  %al
081dd89e +0x24:  test   %al,%al
081dd8a0 +0x26:  je     081dd8a9 <+0x2f>
081dd8a2 +0x28:  mov    $0x1,%eax
081dd8a7 +0x2d:  jmp    081dd8b4 <+0x3a>
081dd8a9 +0x2f:  mov    0x10(%ebp),%eax
081dd8ac +0x32:  mov    %eax,-0xc(%ebp)
081dd8af +0x35:  mov    $0x0,%eax
081dd8b4 +0x3a:  leave
081dd8b5 +0x3b:  ret
```

## 反编译 C

```c
// Dispatcher_ItemDictionary::check_error @ 0x81dd87a

/* Dispatcher_ItemDictionary::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ItemDictionary::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
