# process

`_ZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Teleport::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Teleport` | `0x081d07bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d07bc  _ZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Teleport::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d07bc, 0x081d087b]
081d07bc +0x00:  push   %ebp
081d07bd +0x01:  mov    %esp,%ebp
081d07bf +0x03:  sub    $0x28,%esp
081d07c2 +0x06:  mov    0x14(%ebp),%eax
081d07c5 +0x09:  mov    %eax,-0x10(%ebp)
081d07c8 +0x0c:  mov    0x14(%ebp),%eax
081d07cb +0x0f:  mov    %eax,0xc(%esp)
081d07cf +0x13:  mov    0x10(%ebp),%eax
081d07d2 +0x16:  mov    %eax,0x8(%esp)
081d07d6 +0x1a:  mov    0xc(%ebp),%eax
081d07d9 +0x1d:  mov    %eax,0x4(%esp)
081d07dd +0x21:  mov    0x8(%ebp),%eax
081d07e0 +0x24:  mov    %eax,(%esp)
081d07e3 +0x27:  call   081d056c <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_Teleport::check_error(CUser*, MSG_BASE&, ParamBase&)
081d07e8 +0x2c:  mov    %eax,%edx
081d07ea +0x2e:  mov    -0x10(%ebp),%eax
081d07ed +0x31:  mov    %edx,0x4(%eax)
081d07f0 +0x34:  mov    -0x10(%ebp),%eax
081d07f3 +0x37:  mov    0x4(%eax),%eax
081d07f6 +0x3a:  test   %eax,%eax
081d07f8 +0x3c:  jle    081d0801 <+0x45>
081d07fa +0x3e:  mov    $0x0,%eax
081d07ff +0x43:  jmp    081d0879 <+0xbd>
081d0801 +0x45:  mov    -0x10(%ebp),%eax
081d0804 +0x48:  mov    0x4(%eax),%eax
081d0807 +0x4b:  test   %eax,%eax
081d0809 +0x4d:  jns    081d083a <+0x7e>
081d080b +0x4f:  mov    0xc(%ebp),%eax
081d080e +0x52:  mov    %eax,(%esp)
081d0811 +0x55:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d0816 +0x5a:  mov    -0x10(%ebp),%edx
081d0819 +0x5d:  mov    0x4(%edx),%edx
081d081c +0x60:  mov    %eax,0xc(%esp)
081d0820 +0x64:  mov    %edx,0x8(%esp)
081d0824 +0x68:  movl   $&_ZZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d082c +0x70:  movl   $0x2bcc,(%esp)
081d0833 +0x77:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0838 +0x7c:  jmp    081d0879 <+0xbd>
081d083a +0x7e:  mov    0x10(%ebp),%eax
081d083d +0x81:  mov    %eax,-0xc(%ebp)
081d0840 +0x84:  mov    -0xc(%ebp),%eax
081d0843 +0x87:  movzbl 0x14(%eax),%edx
081d0847 +0x8b:  mov    -0x10(%ebp),%eax
081d084a +0x8e:  mov    %dl,0x10(%eax)
081d084d +0x91:  mov    -0xc(%ebp),%eax
081d0850 +0x94:  mov    0x10(%eax),%edx
081d0853 +0x97:  mov    -0x10(%ebp),%eax
081d0856 +0x9a:  mov    %edx,0xc(%eax)
081d0859 +0x9d:  mov    -0xc(%ebp),%eax
081d085c +0xa0:  movzwl 0xe(%eax),%edx
081d0860 +0xa4:  mov    -0x10(%ebp),%eax
081d0863 +0xa7:  mov    %dx,0x8(%eax)
081d0867 +0xab:  mov    -0xc(%ebp),%eax
081d086a +0xae:  movzbl 0x15(%eax),%edx
081d086e +0xb2:  mov    -0x10(%ebp),%eax
081d0871 +0xb5:  mov    %dl,0x11(%eax)
081d0874 +0xb8:  mov    $0x0,%eax
081d0879 +0xbd:  leave
081d087a +0xbe:  ret
081d087b +0xbf:  nop
```

## 反编译 C

```c
// Dispatcher_Teleport::process @ 0x81d07bc

/* Dispatcher_Teleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Teleport::process
          (Dispatcher_Teleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2bcc,
                       "virtual int Dispatcher_Teleport::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar2);
    }
    else {
      *(MSG_BASE *)(param_3 + 0x10) = param_2[0x14];
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0xe);
      *(MSG_BASE *)(param_3 + 0x11) = param_2[0x15];
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
