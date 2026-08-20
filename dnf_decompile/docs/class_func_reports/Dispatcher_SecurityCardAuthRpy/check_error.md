# check_error

`_ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityCardAuthRpy` | `0x0826314c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826314c  _ZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)
# range [0x0826314c, 0x0826320f]
0826314c +0x00:  push   %ebp
0826314d +0x01:  mov    %esp,%ebp
0826314f +0x03:  sub    $0x48,%esp
08263152 +0x06:  mov    0x10(%ebp),%eax
08263155 +0x09:  mov    %eax,-0xc(%ebp)
08263158 +0x0c:  mov    -0xc(%ebp),%eax
0826315b +0x0f:  movzbl 0xe(%eax),%eax
0826315f +0x13:  test   %al,%al
08263161 +0x15:  je     08263179 <+0x2d>
08263163 +0x17:  mov    -0xc(%ebp),%eax
08263166 +0x1a:  movzbl 0xe(%eax),%eax
0826316a +0x1e:  cmp    $0xd,%al
0826316c +0x20:  ja     08263179 <+0x2d>
0826316e +0x22:  mov    -0xc(%ebp),%eax
08263171 +0x25:  movzbl 0xe(%eax),%eax
08263175 +0x29:  cmp    $0x5,%al
08263177 +0x2b:  jne    082631b6 <+0x6a>
08263179 +0x2d:  movl   $0x0,0xc(%esp)
08263181 +0x35:  movl   $0x14c,0x8(%esp)
08263189 +0x3d:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
08263191 +0x45:  lea    -0x2c(%ebp),%eax
08263194 +0x48:  mov    %eax,(%esp)
08263197 +0x4b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826319c +0x50:  movl   $"ERROR [TRACE AUTH RPY] : crypto_type2",0x4(%esp)
082631a4 +0x58:  lea    -0x2c(%ebp),%eax
082631a7 +0x5b:  mov    %eax,(%esp)
082631aa +0x5e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082631af +0x63:  mov    $0x14d,%eax
082631b4 +0x68:  jmp    0826320d <+0xc1>
082631b6 +0x6a:  mov    0xc(%ebp),%eax
082631b9 +0x6d:  mov    %eax,(%esp)
082631bc +0x70:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082631c1 +0x75:  cmp    $0x1,%eax
082631c4 +0x78:  setle  %al
082631c7 +0x7b:  test   %al,%al
082631c9 +0x7d:  je     08263208 <+0xbc>
082631cb +0x7f:  movl   $0x0,0xc(%esp)
082631d3 +0x87:  movl   $0x154,0x8(%esp)
082631db +0x8f:  movl   $&_ZZN30Dispatcher_SecurityCardAuthRpy11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
082631e3 +0x97:  lea    -0x1c(%ebp),%eax
082631e6 +0x9a:  mov    %eax,(%esp)
082631e9 +0x9d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082631ee +0xa2:  movl   $"ERROR [TRACE AUTH RPY] : get_state()<LOGIN",0x4(%esp)
082631f6 +0xaa:  lea    -0x1c(%ebp),%eax
082631f9 +0xad:  mov    %eax,(%esp)
082631fc +0xb0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08263201 +0xb5:  mov    $0x155,%eax
08263206 +0xba:  jmp    0826320d <+0xc1>
08263208 +0xbc:  mov    $0x0,%eax
0826320d +0xc1:  leave
0826320e +0xc2:  ret
0826320f +0xc3:  nop
```

## 反编译 C

```c
// Dispatcher_SecurityCardAuthRpy::check_error @ 0x826314c

/* Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SecurityCardAuthRpy::check_error
          (Dispatcher_SecurityCardAuthRpy *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MSG_BASE *local_10;
  
  local_10 = param_2;
  if (((param_2[0xe] == (MSG_BASE)0x0) || (0xd < (byte)param_2[0xe])) ||
     (param_2[0xe] == (MSG_BASE)0x5)) {
    cMyTrace::cMyTrace(local_30,"int Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)"
                       ,0x14c,0);
    cMyTrace::operator()(local_30,"ERROR [TRACE AUTH RPY] : crypto_type2");
    uVar1 = 0x14d;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 2) {
      cMyTrace::cMyTrace(local_20,
                         "int Dispatcher_SecurityCardAuthRpy::check_error(CUser*, MSG_BASE&)",0x154,
                         0);
      cMyTrace::operator()(local_20,"ERROR [TRACE AUTH RPY] : get_state()<LOGIN");
      uVar1 = 0x155;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```
