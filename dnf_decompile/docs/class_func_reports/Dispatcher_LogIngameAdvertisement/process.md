# process

`_ZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_LogIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LogIngameAdvertisement` | `0x081e4df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4df2  _ZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_LogIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e4df2, 0x081e4ec7]
081e4df2 +0x00:  push   %ebp
081e4df3 +0x01:  mov    %esp,%ebp
081e4df5 +0x03:  push   %edi
081e4df6 +0x04:  push   %esi
081e4df7 +0x05:  push   %ebx
081e4df8 +0x06:  sub    $0x4c,%esp
081e4dfb +0x09:  mov    0x14(%ebp),%eax
081e4dfe +0x0c:  mov    %eax,-0x20(%ebp)
081e4e01 +0x0f:  mov    0x10(%ebp),%eax
081e4e04 +0x12:  mov    %eax,0x8(%esp)
081e4e08 +0x16:  mov    0xc(%ebp),%eax
081e4e0b +0x19:  mov    %eax,0x4(%esp)
081e4e0f +0x1d:  mov    0x8(%ebp),%eax
081e4e12 +0x20:  mov    %eax,(%esp)
081e4e15 +0x23:  call   081e4ec8 <_ZN33Dispatcher_LogIngameAdvertisement11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_LogIngameAdvertisement::check_error(CUser*, MSG_BASE&)
081e4e1a +0x28:  mov    -0x20(%ebp),%edx
081e4e1d +0x2b:  mov    %eax,0x4(%edx)
081e4e20 +0x2e:  mov    -0x20(%ebp),%eax
081e4e23 +0x31:  mov    0x4(%eax),%eax
081e4e26 +0x34:  test   %eax,%eax
081e4e28 +0x36:  jle    081e4e34 <+0x42>
081e4e2a +0x38:  mov    $0x0,%eax
081e4e2f +0x3d:  jmp    081e4ebf <+0xcd>
081e4e34 +0x42:  mov    -0x20(%ebp),%eax
081e4e37 +0x45:  mov    0x4(%eax),%eax
081e4e3a +0x48:  test   %eax,%eax
081e4e3c +0x4a:  jns    081e4e66 <+0x74>
081e4e3e +0x4c:  mov    -0x20(%ebp),%eax
081e4e41 +0x4f:  mov    0x4(%eax),%eax
081e4e44 +0x52:  movl   $0x0,0xc(%esp)
081e4e4c +0x5a:  mov    %eax,0x8(%esp)
081e4e50 +0x5e:  movl   $&_ZZN33Dispatcher_LogIngameAdvertisement7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e4e58 +0x66:  movl   $0x5d83,(%esp)
081e4e5f +0x6d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e4e64 +0x72:  jmp    081e4ebf <+0xcd>
081e4e66 +0x74:  mov    0x10(%ebp),%eax
081e4e69 +0x77:  mov    %eax,-0x1c(%ebp)
081e4e6c +0x7a:  mov    -0x1c(%ebp),%eax
081e4e6f +0x7d:  mov    0x11(%eax),%eax
081e4e72 +0x80:  mov    %eax,-0x2c(%ebp)
081e4e75 +0x83:  mov    -0x1c(%ebp),%eax
081e4e78 +0x86:  movzbl 0x10(%eax),%eax
081e4e7c +0x8a:  movsbl %al,%edi
081e4e7f +0x8d:  mov    -0x1c(%ebp),%eax
081e4e82 +0x90:  movzwl 0xe(%eax),%eax
081e4e86 +0x94:  movswl %ax,%esi
081e4e89 +0x97:  mov    -0x1c(%ebp),%eax
081e4e8c +0x9a:  movzbl 0xd(%eax),%eax
081e4e90 +0x9e:  movsbl %al,%ebx
081e4e93 +0xa1:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
081e4e98 +0xa6:  mov    -0x2c(%ebp),%edx
081e4e9b +0xa9:  mov    %edx,0x14(%esp)
081e4e9f +0xad:  mov    %edi,0x10(%esp)
081e4ea3 +0xb1:  mov    %esi,0xc(%esp)
081e4ea7 +0xb5:  mov    %ebx,0x8(%esp)
081e4eab +0xb9:  mov    0xc(%ebp),%edx
081e4eae +0xbc:  mov    %edx,0x4(%esp)
081e4eb2 +0xc0:  mov    %eax,(%esp)
081e4eb5 +0xc3:  call   080fda56 <_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj>  ; CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int)
081e4eba +0xc8:  mov    $0x0,%eax
081e4ebf +0xcd:  add    $0x4c,%esp
081e4ec2 +0xd0:  pop    %ebx
081e4ec3 +0xd1:  pop    %esi
081e4ec4 +0xd2:  pop    %edi
081e4ec5 +0xd3:  pop    %ebp
081e4ec6 +0xd4:  ret
081e4ec7 +0xd5:  nop
```

## 反编译 C

```c
// Dispatcher_LogIngameAdvertisement::process @ 0x81e4df2

/* Dispatcher_LogIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_LogIngameAdvertisement::process
          (Dispatcher_LogIngameAdvertisement *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  CInGameAdvertisementManager *this_00;
  
  uVar5 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar5;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar5 = LineFunc(0x5d83,
                       "virtual int Dispatcher_LogIngameAdvertisement::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar4 = *(uint *)(param_2 + 0x11);
      MVar1 = param_2[0x10];
      sVar3 = *(short *)(param_2 + 0xe);
      MVar2 = param_2[0xd];
      this_00 = (CInGameAdvertisementManager *)InGameADManagerInstance();
      CInGameAdvertisementManager::WriteLog(this_00,param_1,(char)MVar2,sVar3,(char)MVar1,uVar4);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
