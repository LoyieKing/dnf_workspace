# check_error

`_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_LogIngameAdvertisement::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LogIngameAdvertisement` | `0x081e4ec8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4ec8  _ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_LogIngameAdvertisement::check_error(CUser*, MSG_BASE&)
# range [0x081e4ec8, 0x081e4f03]
081e4ec8 +0x00:  push   %ebp
081e4ec9 +0x01:  mov    %esp,%ebp
081e4ecb +0x03:  sub    $0x28,%esp
081e4ece +0x06:  cmpl   $0x0,0xc(%ebp)
081e4ed2 +0x0a:  jne    081e4edb <+0x13>
081e4ed4 +0x0c:  mov    $0xffffffff,%eax
081e4ed9 +0x11:  jmp    081e4f02 <+0x3a>
081e4edb +0x13:  mov    0xc(%ebp),%eax
081e4ede +0x16:  mov    %eax,(%esp)
081e4ee1 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e4ee6 +0x1e:  cmp    $0x1,%eax
081e4ee9 +0x21:  setle  %al
081e4eec +0x24:  test   %al,%al
081e4eee +0x26:  je     081e4ef7 <+0x2f>
081e4ef0 +0x28:  mov    $0x7fffffff,%eax
081e4ef5 +0x2d:  jmp    081e4f02 <+0x3a>
081e4ef7 +0x2f:  mov    0x10(%ebp),%eax
081e4efa +0x32:  mov    %eax,-0xc(%ebp)
081e4efd +0x35:  mov    $0x0,%eax
081e4f02 +0x3a:  leave
081e4f03 +0x3b:  ret
```

## 反编译 C

```c
// Dispatcher_LogIngameAdvertisement::check_error @ 0x81e4ec8

/* Dispatcher_LogIngameAdvertisement::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_LogIngameAdvertisement::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 2) {
      uVar1 = 0x7fffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
