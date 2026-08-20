# process

`_ZN29Dispatcher_ValidateScriptHash7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ValidateScriptHash::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ValidateScriptHash` | `0x082642b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082642b8  _ZN29Dispatcher_ValidateScriptHash7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ValidateScriptHash::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x082642b8, 0x08264359]
082642b8 +0x00:  push   %ebp
082642b9 +0x01:  mov    %esp,%ebp
082642bb +0x03:  push   %esi
082642bc +0x04:  push   %ebx
082642bd +0x05:  sub    $0x30,%esp
082642c0 +0x08:  mov    0x10(%ebp),%eax
082642c3 +0x0b:  mov    %eax,0x8(%esp)
082642c7 +0x0f:  mov    0xc(%ebp),%eax
082642ca +0x12:  mov    %eax,0x4(%esp)
082642ce +0x16:  mov    0x8(%ebp),%eax
082642d1 +0x19:  mov    %eax,(%esp)
082642d4 +0x1c:  call   0826435a <_ZN29Dispatcher_ValidateScriptHash11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ValidateScriptHash::check_error(CUser*, MSG_BASE&)
082642d9 +0x21:  mov    %eax,-0x14(%ebp)
082642dc +0x24:  cmpl   $0x0,-0x14(%ebp)
082642e0 +0x28:  je     082642e9 <+0x31>
082642e2 +0x2a:  mov    $0x0,%eax
082642e7 +0x2f:  jmp    08264353 <+0x9b>
082642e9 +0x31:  mov    0x10(%ebp),%eax
082642ec +0x34:  mov    %eax,-0x10(%ebp)
082642ef +0x37:  mov    -0x10(%ebp),%eax
082642f2 +0x3a:  movzbl 0xd(%eax),%eax
082642f6 +0x3e:  movsbl %al,%eax
082642f9 +0x41:  mov    %eax,0x4(%esp)
082642fd +0x45:  mov    0x8(%ebp),%eax
08264300 +0x48:  mov    %eax,(%esp)
08264303 +0x4b:  call   08264364 <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc>  ; Dispatcher_ValidateScriptHash::get_hack_type(char)
08264308 +0x50:  mov    %eax,-0xc(%ebp)
0826430b +0x53:  mov    -0x10(%ebp),%eax
0826430e +0x56:  mov    0xf(%eax),%eax
08264311 +0x59:  mov    %eax,%esi
08264313 +0x5b:  mov    -0x10(%ebp),%eax
08264316 +0x5e:  movzbl 0xe(%eax),%eax
0826431a +0x62:  movsbl %al,%ebx
0826431d +0x65:  mov    0xc(%ebp),%eax
08264320 +0x68:  mov    %eax,(%esp)
08264323 +0x6b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08264328 +0x70:  mov    %esi,0x14(%esp)
0826432c +0x74:  mov    %ebx,0x10(%esp)
08264330 +0x78:  movl   $0x1,0xc(%esp)
08264338 +0x80:  mov    -0xc(%ebp),%edx
0826433b +0x83:  mov    %edx,0x8(%esp)
0826433f +0x87:  mov    0xc(%ebp),%edx
08264342 +0x8a:  mov    %edx,0x4(%esp)
08264346 +0x8e:  mov    %eax,(%esp)
08264349 +0x91:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0826434e +0x96:  mov    $0x0,%eax
08264353 +0x9b:  add    $0x30,%esp
08264356 +0x9e:  pop    %ebx
08264357 +0x9f:  pop    %esi
08264358 +0xa0:  pop    %ebp
08264359 +0xa1:  ret
```

## 反编译 C

```c
// Dispatcher_ValidateScriptHash::process @ 0x82642b8

/* Dispatcher_ValidateScriptHash::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_ValidateScriptHash::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  CHackAnalyzer *pCVar5;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 == 0) {
    uVar4 = get_hack_type((Dispatcher_ValidateScriptHash *)param_1,(char)param_3[0xd]);
    uVar2 = *(undefined4 *)(param_3 + 0xf);
    PVar1 = param_3[0xe];
    pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_2,uVar4,1,(int)(char)PVar1,uVar2);
  }
  return 0;
}
```
