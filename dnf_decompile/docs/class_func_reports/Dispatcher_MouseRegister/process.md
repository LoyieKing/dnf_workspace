# process

`_ZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MouseRegister::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x08263224` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08263224  _ZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MouseRegister::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x08263224, 0x0826329f]
08263224 +0x00:  push   %ebp
08263225 +0x01:  mov    %esp,%ebp
08263227 +0x03:  sub    $0x28,%esp
0826322a +0x06:  mov    0x14(%ebp),%eax
0826322d +0x09:  mov    %eax,-0x10(%ebp)
08263230 +0x0c:  mov    0x10(%ebp),%eax
08263233 +0x0f:  mov    %eax,0x8(%esp)
08263237 +0x13:  mov    0xc(%ebp),%eax
0826323a +0x16:  mov    %eax,0x4(%esp)
0826323e +0x1a:  mov    0x8(%ebp),%eax
08263241 +0x1d:  mov    %eax,(%esp)
08263244 +0x20:  call   082632a0 <_ZN24Dispatcher_MouseRegister11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MouseRegister::check_error(CUser*, MSG_BASE&)
08263249 +0x25:  mov    -0x10(%ebp),%edx
0826324c +0x28:  mov    %eax,0x4(%edx)
0826324f +0x2b:  mov    -0x10(%ebp),%eax
08263252 +0x2e:  mov    0x4(%eax),%eax
08263255 +0x31:  test   %eax,%eax
08263257 +0x33:  jle    08263260 <+0x3c>
08263259 +0x35:  mov    $0x0,%eax
0826325e +0x3a:  jmp    0826329d <+0x79>
08263260 +0x3c:  mov    -0x10(%ebp),%eax
08263263 +0x3f:  mov    0x4(%eax),%eax
08263266 +0x42:  test   %eax,%eax
08263268 +0x44:  jns    08263292 <+0x6e>
0826326a +0x46:  mov    -0x10(%ebp),%eax
0826326d +0x49:  mov    0x4(%eax),%eax
08263270 +0x4c:  movl   $0x0,0xc(%esp)
08263278 +0x54:  mov    %eax,0x8(%esp)
0826327c +0x58:  movl   $&_ZZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
08263284 +0x60:  movl   $0x178,(%esp)
0826328b +0x67:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08263290 +0x6c:  jmp    0826329d <+0x79>
08263292 +0x6e:  mov    0x10(%ebp),%eax
08263295 +0x71:  mov    %eax,-0xc(%ebp)
08263298 +0x74:  mov    $0x0,%eax
0826329d +0x79:  leave
0826329e +0x7a:  ret
0826329f +0x7b:  nop
```

## 反编译 C

```c
// Dispatcher_MouseRegister::process @ 0x8263224

/* Dispatcher_MouseRegister::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MouseRegister::process
          (Dispatcher_MouseRegister *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x178,
                       "virtual int Dispatcher_MouseRegister::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
