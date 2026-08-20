# process

`_ZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CloseDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CloseDisjointStore` | `0x081d0366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0366  _ZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CloseDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d0366, 0x081d0411]
081d0366 +0x00:  push   %ebp
081d0367 +0x01:  mov    %esp,%ebp
081d0369 +0x03:  sub    $0x28,%esp
081d036c +0x06:  mov    0x14(%ebp),%eax
081d036f +0x09:  mov    %eax,-0xc(%ebp)
081d0372 +0x0c:  mov    0x14(%ebp),%eax
081d0375 +0x0f:  mov    %eax,0xc(%esp)
081d0379 +0x13:  mov    0x10(%ebp),%eax
081d037c +0x16:  mov    %eax,0x8(%esp)
081d0380 +0x1a:  mov    0xc(%ebp),%eax
081d0383 +0x1d:  mov    %eax,0x4(%esp)
081d0387 +0x21:  mov    0x8(%ebp),%eax
081d038a +0x24:  mov    %eax,(%esp)
081d038d +0x27:  call   081d02c8 <_ZN29Dispatcher_CloseDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_CloseDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)
081d0392 +0x2c:  mov    %eax,%edx
081d0394 +0x2e:  mov    -0xc(%ebp),%eax
081d0397 +0x31:  mov    %edx,0x4(%eax)
081d039a +0x34:  mov    -0xc(%ebp),%eax
081d039d +0x37:  mov    0x4(%eax),%eax
081d03a0 +0x3a:  test   %eax,%eax
081d03a2 +0x3c:  jle    081d03ab <+0x45>
081d03a4 +0x3e:  mov    $0x0,%eax
081d03a9 +0x43:  jmp    081d040f <+0xa9>
081d03ab +0x45:  mov    -0xc(%ebp),%eax
081d03ae +0x48:  mov    0x4(%eax),%eax
081d03b1 +0x4b:  test   %eax,%eax
081d03b3 +0x4d:  jns    081d03e4 <+0x7e>
081d03b5 +0x4f:  mov    0xc(%ebp),%eax
081d03b8 +0x52:  mov    %eax,(%esp)
081d03bb +0x55:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d03c0 +0x5a:  mov    -0xc(%ebp),%edx
081d03c3 +0x5d:  mov    0x4(%edx),%edx
081d03c6 +0x60:  mov    %eax,0xc(%esp)
081d03ca +0x64:  mov    %edx,0x8(%esp)
081d03ce +0x68:  movl   $&_ZZN29Dispatcher_CloseDisjointStore7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d03d6 +0x70:  movl   $0x2b1b,(%esp)
081d03dd +0x77:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d03e2 +0x7c:  jmp    081d040f <+0xa9>
081d03e4 +0x7e:  mov    0xc(%ebp),%eax
081d03e7 +0x81:  mov    %eax,(%esp)
081d03ea +0x84:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
081d03ef +0x89:  mov    (%eax),%edx
081d03f1 +0x8b:  add    $0x4,%edx
081d03f4 +0x8e:  mov    (%edx),%ecx
081d03f6 +0x90:  movl   $0x0,0x8(%esp)
081d03fe +0x98:  mov    0xc(%ebp),%edx
081d0401 +0x9b:  mov    %edx,0x4(%esp)
081d0405 +0x9f:  mov    %eax,(%esp)
081d0408 +0xa2:  call   *%ecx
081d040a +0xa4:  mov    $0x0,%eax
081d040f +0xa9:  leave
081d0410 +0xaa:  ret
081d0411 +0xab:  nop
```

## 反编译 C

```c
// Dispatcher_CloseDisjointStore::process @ 0x81d0366

/* Dispatcher_CloseDisjointStore::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CloseDisjointStore::process
          (Dispatcher_CloseDisjointStore *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  ParamBase *pPVar4;
  
  pPVar4 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2b1b,
                       "virtual int Dispatcher_CloseDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      piVar3 = (int *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      (**(code **)(*piVar3 + 4))(piVar3,param_1,0,pPVar4);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
